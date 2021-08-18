// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xestimate_fr_2.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XEstimate_fr_2_CfgInitialize(XEstimate_fr_2 *InstancePtr, XEstimate_fr_2_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

u32 XEstimate_fr_2_Get_inputs_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE);
}

u32 XEstimate_fr_2_Get_inputs_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS;
}

u32 XEstimate_fr_2_Get_inputs_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS;
}

u32 XEstimate_fr_2_Write_inputs_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE);
}

u32 XEstimate_fr_2_Get_counts_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_HIGH);
}

u32 XEstimate_fr_2_Get_counts_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS;
}

u32 XEstimate_fr_2_Get_counts_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS;
}

u32 XEstimate_fr_2_Write_counts_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE);
}

u32 XEstimate_fr_2_Get_outputs_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS;
}

u32 XEstimate_fr_2_Get_outputs_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS;
}

u32 XEstimate_fr_2_Write_outputs_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE + offset + i);
    }
    return length;
}

