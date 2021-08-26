// Standard Library
#include  <stdio.h>
#include <stdlib.h>
#include  <iostream>
#include  <fstream>
#include  <string>

// FPGA Library
#include <xestimate_isi_unroll_2.h>
#include <xparameters.h>
#include <xscugic.h>
#include <xil_printf.h>
#include <xtime_l.h>
#include "test_data_3.h"
using namespace std;


#define Channel 96
#define partChan 48
#define subChannel 32
#define partsubChan 16
#define col 5
#define size 23916
const double samplingRate= 24400;


// HLS macc HW instance
XEstimate_isi_unroll_2 HLS_PISI;
//Interrupt Controller Instance
XScuGic ScuGic;
//Timer
XTime tStart, tEnd;
// Global variable definitions - used by ISR
volatile static int RunHlsPISI = 0;
volatile static int ResultAvailHlsPISI = 0;

// Setup and helper functions
int setup_interrupt();
int hls_pisi_init(XEstimate_isi_unroll_2 *hls_pisiPtr);
void hls_pisi_start(void *InstancePtr);
// The ISR prototype
void hls_pisi_isr(void *InstancePtr);

int main()
{
	int inputs1[partChan],inputs2[partChan];
	int outputs1[partsubChan];
	int outputs2[partsubChan];
	float ISI_final[Channel][col];
	int pre1[partChan],pre2[partChan];
	int up[Channel];
	int t;
	int bin = 200;
	int a,b,c;
	int count = 1;
	int status;

	for(int i=0;i<Channel;i++){
		if(i<partChan) pre1[i] = 0;
		else pre2[i-partChan] = 0;
		up[i] =0;
	}

	status = hls_pisi_init(&HLS_PISI);
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
	XTime_GetTime(&tStart);
	for(int i = 0; i < size;i++){
			t = (0.0204 + (i+1)/samplingRate)*1000;
			int k =0;
			for(int j =0;j<Channel;j++){
				if(test_data[Channel*i+j]==1){
					up[j] = 1;
				}
				a = 0x00000001 & (int) ((test_data[Channel*i+j]));
				b = 0x00000002 & (int) ((up[j]) << 1);
				c = 0xFFFFFFFb & (int) ((t) << 2);
				if(j%2==0){
				   inputs1[j-k] = c|b|a;
				   k++;
				}
				else inputs2[j-k] = c|b|a;
			}

			XEstimate_isi_unroll_2_Write_inputs_0_Words(&HLS_PISI,0,inputs1, partChan);
			XEstimate_isi_unroll_2_Write_inputs_1_Words(&HLS_PISI,0, inputs2, partChan);
			XEstimate_isi_unroll_2_Write_rem_0_Words(&HLS_PISI,0,pre1, partChan);
			XEstimate_isi_unroll_2_Write_rem_1_Words(&HLS_PISI,0,pre2, partChan);

			while(!XEstimate_isi_unroll_2_IsReady(&HLS_PISI)){
					print("!!HLS peripheral is not Ready....\n\r");
					exit(-1);
			}

			XEstimate_isi_unroll_2_Start(&HLS_PISI);
			do{
				XEstimate_isi_unroll_2_Read_rem_0_Words(&HLS_PISI,0,pre1, partChan);
				XEstimate_isi_unroll_2_Read_rem_1_Words(&HLS_PISI,0,pre2, partChan);
				XEstimate_isi_unroll_2_Read_output_0_Words(&HLS_PISI,0,outputs1, partsubChan);
				XEstimate_isi_unroll_2_Read_output_1_Words(&HLS_PISI,0,outputs2, partsubChan);
			} while(!XEstimate_isi_unroll_2_IsReady(&HLS_PISI));

		    int k1=0;
			if(t == bin * count){
//				cout<<"Column"<<count<<endl;
				for(int i = 0; i<subChannel;i++){
					if(i%2==0){
						ISI_final[3*i][count-1] = (int)(outputs1[i-k1] & 0x000003FF);
						ISI_final[3*i+1][count-1] = ((int)(outputs1[i-k1] & 0x000FFc00) >> 10);
						ISI_final[3*i+2][count-1] = ((int)(outputs1[i-k1] & 0x3FF00000) >> 20);
						k1++;
					}else{
						ISI_final[3*i][count-1] = (int)(outputs2[i-k1] & 0x000003FF);
						ISI_final[3*i+1][count-1] = ((int)(outputs2[i-k1] & 0x000FFc00) >> 10);
						ISI_final[3*i+2][count-1] = ((int)(outputs2[i-k1] & 0x3FF00000) >> 20);
					}
//					cout<< "ISI:"<<ISI_final[3*i][count-1]<<" in channel "<<3*i+1<<endl;
//					cout<< "ISI:"<<ISI_final[3*i+1][count-1]<<" in channel "<<3*i+2<<endl;
//					cout<< "ISI:"<<ISI_final[3*i+2][count-1]<<" in channel "<<3*i+3<<endl;
					up[3*i] = 0;
					up[3*i+1] = 0;
					up[3*i+2] = 0;
				}
				count ++;
			}
		}

	XTime_GetTime(&tEnd);
	float time =(1.0*(tEnd-tStart)/(COUNTS_PER_SECOND));
	printf("Time: %f s.\n",time);
}

int hls_pisi_init(XEstimate_isi_unroll_2 *HLS_PISIPtr) {
	XEstimate_isi_unroll_2_Config *cfgPtr;
	int status;

	cfgPtr = XEstimate_isi_unroll_2_LookupConfig(XPAR_ESTIMATE_ISI_UNROLL_2_0_DEVICE_ID);
	if (!cfgPtr) {
		print("ERROR: Lookup of acclerator configuration failed.\n\r");
		return XST_FAILURE;
	}
	status = XEstimate_isi_unroll_2_CfgInitialize(HLS_PISIPtr, cfgPtr);
	if (status != XST_SUCCESS) {
		print("ERROR: Could not initialize accelerator.\n\r");
		return XST_FAILURE;
	}
	return status;
}

void hls_pisi_start(void *InstancePtr) {
	XEstimate_isi_unroll_2 *pAccelerator = (XEstimate_isi_unroll_2 *) InstancePtr;
	XEstimate_isi_unroll_2_InterruptEnable(pAccelerator, 1);
	XEstimate_isi_unroll_2_InterruptGlobalEnable(pAccelerator);
	XEstimate_isi_unroll_2_Start(pAccelerator);
}

void hls_pisi_isr(void *InstancePtr) {
	XTime_GetTime(&tEnd);
	XEstimate_isi_unroll_2 *pAccelerator = (XEstimate_isi_unroll_2 *) InstancePtr;

	//Disable the global interrupt
	XEstimate_isi_unroll_2_InterruptGlobalDisable(pAccelerator);
	//Disable the local interrupt
	XEstimate_isi_unroll_2_InterruptDisable(pAccelerator, 0xffffffff);

	// clear the local interrupt
	XEstimate_isi_unroll_2_InterruptClear(pAccelerator, 1);

	ResultAvailHlsPISI = 1;
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
	result = XScuGic_Connect(&ScuGic, XPAR_FABRIC_ESTIMATE_ISI_UNROLL_2_0_INTERRUPT_INTR,
			(Xil_InterruptHandler) hls_pisi_isr, &HLS_PISI);
	if (result != XST_SUCCESS) {
		return result;
	}
	//print("Enable the Adder ISR\n\r");
	XScuGic_Enable(&ScuGic, XPAR_FABRIC_ESTIMATE_ISI_UNROLL_2_0_INTERRUPT_INTR );
	return XST_SUCCESS;
}
