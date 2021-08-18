// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xestimate_isi_encode.h"

extern XEstimate_isi_encode_Config XEstimate_isi_encode_ConfigTable[];

XEstimate_isi_encode_Config *XEstimate_isi_encode_LookupConfig(u16 DeviceId) {
	XEstimate_isi_encode_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XESTIMATE_ISI_ENCODE_NUM_INSTANCES; Index++) {
		if (XEstimate_isi_encode_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XEstimate_isi_encode_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XEstimate_isi_encode_Initialize(XEstimate_isi_encode *InstancePtr, u16 DeviceId) {
	XEstimate_isi_encode_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XEstimate_isi_encode_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XEstimate_isi_encode_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

