// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xestimate_fr.h"

extern XEstimate_fr_Config XEstimate_fr_ConfigTable[];

XEstimate_fr_Config *XEstimate_fr_LookupConfig(u16 DeviceId) {
	XEstimate_fr_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XESTIMATE_FR_NUM_INSTANCES; Index++) {
		if (XEstimate_fr_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XEstimate_fr_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XEstimate_fr_Initialize(XEstimate_fr *InstancePtr, u16 DeviceId) {
	XEstimate_fr_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XEstimate_fr_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XEstimate_fr_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

