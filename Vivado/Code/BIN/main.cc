// Standard Library
#include  <stdio.h>
#include <stdlib.h>
#include  <iostream>
#include  <fstream>
#include  <string>

// FPGA Library
#include <xestimate_fr.h>
#include <xparameters.h>
#include <xscugic.h>
#include <xil_printf.h>
#include <xtime_l.h>
#include "platform.h"
#include "test_data_3.h"
using namespace std;


#define Channel 96
#define subChannel 24
#define col 5
#define size 23916
const double samplingRate= 24400;


// HLS macc HW instance
XEstimate_fr HLS_BIN;
//Interrupt Controller Instance
XScuGic ScuGic;
//Timer
XTime tStart, tEnd;
// Global variable definitions - used by ISR
volatile static int RunHlsBIN = 0;
volatile static int ResultAvailHlsBIN = 0;

// Setup and helper functions
int setup_interrupt();
int HLS_BIN_init(XEstimate_fr *HLS_BINPtr);
void HLS_BIN_start(void *InstancePtr);
// The ISR prototype
void HLS_BIN_isr(void *InstancePtr);

int main()
{

	int inputs[Channel];
	int counts[subChannel];
	int outputs[subChannel];
	int FR_final [Channel][col];

	int bin = 200;
	int update = 0;
	int t;
	int a,b;
	int incre = 1;
	int status;

	for(int i=0;i<subChannel;i++){
		counts[i] = 0;
	}

	status = HLS_BIN_init(&HLS_BIN);
	if (status != XST_SUCCESS) {
		print("HLS peripheral setup failed\n\r");
		exit(-1);
	}
	//Setup the interrupt
	status = setup_interrupt();
	if (status != XST_SUCCESS) {
		print("Interrupt setup failed\n\r");
		exit(-1);
	}

	//read input data
	cout<<"Let's start binning FR estimation"<<endl;
	XTime_GetTime(&tStart);
	for(int i = 0; i < size;i++){

		t = (0.0204 + (i+1)/samplingRate)*1000;

		if(t == bin*incre){
			update = 1;
			incre ++;
		}

		for(int j =0;j<Channel;j++){
			a = 0x00000001 & (int) ((test_data[Channel*i+j]));
			b = 0x00000002 & (int) (update << 1);
			inputs[j] = b|a;
		}

		XEstimate_fr_Write_inputs_Words(&HLS_BIN,0, inputs, Channel);
		XEstimate_fr_Write_counts_Words(&HLS_BIN,0, counts, subChannel);

		while(!XEstimate_fr_IsReady(&HLS_BIN)){
			print("!!HLS peripheral is not Ready....\n\r");
			exit(-1);
		}

		XEstimate_fr_Start(&HLS_BIN);
		do{
			XEstimate_fr_Read_counts_Words (&HLS_BIN, 0, counts, subChannel);
		} while(!XEstimate_fr_IsReady(&HLS_BIN));

		if(update == 1){
			XEstimate_fr_Read_outputs_Words (&HLS_BIN, 0, outputs, subChannel);
			cout<<"Column: "<<incre-1<<endl;
			for(int i = 0; i<subChannel;i++){
			FR_final[4*i][incre-1] = (int)(outputs[i] & 0x000000FF);
			FR_final[4*i+1][incre-1] = ((int)(outputs[i] & 0x0000FF00) >> 8);
			FR_final[4*i+2][incre-1] = ((int)(outputs[i] & 0x00FF0000) >> 16);
			FR_final[4*i+3][incre-1] = ((int)(outputs[i] & 0xFF000000) >> 24);
			cout<< "FR:"<<FR_final[4*i][incre-1]<<" in channel "<<4*i+1<<endl;
			cout<< "FR:"<<FR_final[4*i+1][incre-1]<<" in channel "<<4*i+2<<endl;
			cout<< "FR:"<<FR_final[4*i+2][incre-1]<<" in channel "<<4*i+3<<endl;
			cout<< "FR:"<<FR_final[4*i+3][incre-1]<<" in channel "<<4*i+4<<endl;
			}
			update = 0;
		}

	}
	XTime_GetTime(&tEnd);
	float time =(1.0*(tEnd-tStart)/(COUNTS_PER_SECOND));
	printf("Time: %f s.\n",time);
}

int HLS_BIN_init(XEstimate_fr *HLS_BINPtr) {
	XEstimate_fr_Config *cfgPtr;
	int status;

	cfgPtr = XEstimate_fr_LookupConfig(XPAR_ESTIMATE_FR_0_DEVICE_ID);
	if (!cfgPtr) {
		print("ERROR: Lookup of acclerator configuration failed.\n\r");
		return XST_FAILURE;
	}
	status = XEstimate_fr_CfgInitialize(HLS_BINPtr, cfgPtr);
	if (status != XST_SUCCESS) {
		print("ERROR: Could not initialize accelerator.\n\r");
		return XST_FAILURE;
	}
	return status;
}

void HLS_BIN_start(void *InstancePtr) {
	XEstimate_fr *pAccelerator = (XEstimate_fr *) InstancePtr;
	XEstimate_fr_InterruptEnable(pAccelerator, 1);
	XEstimate_fr_InterruptGlobalEnable(pAccelerator);
	XEstimate_fr_Start(pAccelerator);
}

void HLS_BIN_isr(void *InstancePtr) {
	XTime_GetTime(&tEnd);
	XEstimate_fr *pAccelerator = (XEstimate_fr *) InstancePtr;

	//Disable the global interrupt
	XEstimate_fr_InterruptGlobalDisable(pAccelerator);
	//Disable the local interrupt
	XEstimate_fr_InterruptDisable(pAccelerator, 0xffffffff);

	// clear the local interrupt
	XEstimate_fr_InterruptClear(pAccelerator, 1);

	ResultAvailHlsBIN = 1;
}

int setup_interrupt() {
	//This functions sets up the interrupt on the ARM
	int result;
	XScuGic_Config *pCfg = XScuGic_LookupConfig(XPAR_SCUGIC_SINGLE_DEVICE_ID);
	if (pCfg == NULL) {
		print("Interrupt Configuration Lookup Failed\n\r");
		return XST_FAILURE;
	}
	result = XScuGic_CfgInitialize(&ScuGic, pCfg, pCfg->CpuBaseAddress);
	if (result != XST_SUCCESS) {
		return result;
	}
	// self test
	result = XScuGic_SelfTest(&ScuGic);
	if (result != XST_SUCCESS) {
		return result;
	}
	// Initialize the exception handler
	Xil_ExceptionInit();
	// Register the exception handler
	//print("Register the exception handler\n\r");
	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT,
			(Xil_ExceptionHandler) XScuGic_InterruptHandler, &ScuGic);
	//Enable the exception handler
	Xil_ExceptionEnable();
	// Connect the Adder ISR to the exception table
	//print("Connect the Adder ISR to the Exception handler table\n\r");
	result = XScuGic_Connect(&ScuGic, XPAR_FABRIC_ESTIMATE_FR_0_INTERRUPT_INTR,
			(Xil_InterruptHandler) HLS_BIN_isr, &HLS_BIN);
	if (result != XST_SUCCESS) {
		return result;
	}
	//print("Enable the Adder ISR\n\r");
	XScuGic_Enable(&ScuGic, XPAR_FABRIC_ESTIMATE_FR_0_INTERRUPT_INTR);
	return XST_SUCCESS;
}
