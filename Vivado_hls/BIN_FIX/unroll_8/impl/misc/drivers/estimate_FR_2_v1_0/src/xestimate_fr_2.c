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

void XEstimate_fr_2_Start(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL) & 0x80;
    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XEstimate_fr_2_IsDone(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XEstimate_fr_2_IsIdle(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XEstimate_fr_2_IsReady(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XEstimate_fr_2_EnableAutoRestart(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XEstimate_fr_2_DisableAutoRestart(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XEstimate_fr_2_Get_inputs_0_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE);
}

u32 XEstimate_fr_2_Get_inputs_0_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_0_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_0_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_0;
}

u32 XEstimate_fr_2_Get_inputs_0_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_0;
}

u32 XEstimate_fr_2_Write_inputs_0_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_0_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_0_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_0_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_1_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE);
}

u32 XEstimate_fr_2_Get_inputs_1_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_1_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_1_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_1;
}

u32 XEstimate_fr_2_Get_inputs_1_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_1;
}

u32 XEstimate_fr_2_Write_inputs_1_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_1_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_1_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_1_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_2_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE);
}

u32 XEstimate_fr_2_Get_inputs_2_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_2_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_2_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_2;
}

u32 XEstimate_fr_2_Get_inputs_2_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_2;
}

u32 XEstimate_fr_2_Write_inputs_2_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_2_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_2_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_2_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_3_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE);
}

u32 XEstimate_fr_2_Get_inputs_3_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_3_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_3_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_3;
}

u32 XEstimate_fr_2_Get_inputs_3_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_3;
}

u32 XEstimate_fr_2_Write_inputs_3_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_3_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_3_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_3_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_4_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE);
}

u32 XEstimate_fr_2_Get_inputs_4_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_4_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_4_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_4;
}

u32 XEstimate_fr_2_Get_inputs_4_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_4;
}

u32 XEstimate_fr_2_Write_inputs_4_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_4_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_4_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_4_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_5_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE);
}

u32 XEstimate_fr_2_Get_inputs_5_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_5_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_5_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_5;
}

u32 XEstimate_fr_2_Get_inputs_5_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_5;
}

u32 XEstimate_fr_2_Write_inputs_5_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_5_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_5_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_5_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_6_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE);
}

u32 XEstimate_fr_2_Get_inputs_6_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_6_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_6_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_6;
}

u32 XEstimate_fr_2_Get_inputs_6_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_6;
}

u32 XEstimate_fr_2_Write_inputs_6_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_6_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_6_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_6_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_7_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE);
}

u32 XEstimate_fr_2_Get_inputs_7_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_7_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_7_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_7;
}

u32 XEstimate_fr_2_Get_inputs_7_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_7;
}

u32 XEstimate_fr_2_Write_inputs_7_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_7_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_7_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_7_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_0_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE);
}

u32 XEstimate_fr_2_Get_counts_0_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH);
}

u32 XEstimate_fr_2_Get_counts_0_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_0_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_0;
}

u32 XEstimate_fr_2_Get_counts_0_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_0;
}

u32 XEstimate_fr_2_Write_counts_0_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_0_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_0_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_0_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_1_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE);
}

u32 XEstimate_fr_2_Get_counts_1_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH);
}

u32 XEstimate_fr_2_Get_counts_1_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_1_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_1;
}

u32 XEstimate_fr_2_Get_counts_1_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_1;
}

u32 XEstimate_fr_2_Write_counts_1_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_1_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_1_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_1_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_2_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE);
}

u32 XEstimate_fr_2_Get_counts_2_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH);
}

u32 XEstimate_fr_2_Get_counts_2_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_2_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_2;
}

u32 XEstimate_fr_2_Get_counts_2_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_2;
}

u32 XEstimate_fr_2_Write_counts_2_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_2_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_2_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_2_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_3_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE);
}

u32 XEstimate_fr_2_Get_counts_3_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH);
}

u32 XEstimate_fr_2_Get_counts_3_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_3_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_3;
}

u32 XEstimate_fr_2_Get_counts_3_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_3;
}

u32 XEstimate_fr_2_Write_counts_3_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_3_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_3_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_3_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_4_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE);
}

u32 XEstimate_fr_2_Get_counts_4_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_HIGH);
}

u32 XEstimate_fr_2_Get_counts_4_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_4_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_4;
}

u32 XEstimate_fr_2_Get_counts_4_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_4;
}

u32 XEstimate_fr_2_Write_counts_4_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_4_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_4_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_4_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_5_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE);
}

u32 XEstimate_fr_2_Get_counts_5_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_HIGH);
}

u32 XEstimate_fr_2_Get_counts_5_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_5_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_5;
}

u32 XEstimate_fr_2_Get_counts_5_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_5;
}

u32 XEstimate_fr_2_Write_counts_5_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_5_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_5_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_5_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_6_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE);
}

u32 XEstimate_fr_2_Get_counts_6_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_HIGH);
}

u32 XEstimate_fr_2_Get_counts_6_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_6_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_6;
}

u32 XEstimate_fr_2_Get_counts_6_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_6;
}

u32 XEstimate_fr_2_Write_counts_6_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_6_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_6_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_6_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_counts_7_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE);
}

u32 XEstimate_fr_2_Get_counts_7_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_HIGH);
}

u32 XEstimate_fr_2_Get_counts_7_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + 1);
}

u32 XEstimate_fr_2_Get_counts_7_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_7;
}

u32 XEstimate_fr_2_Get_counts_7_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_7;
}

u32 XEstimate_fr_2_Write_counts_7_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_7_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_counts_7_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_counts_7_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_0_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE);
}

u32 XEstimate_fr_2_Get_outputs_0_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_0_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_0_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_0;
}

u32 XEstimate_fr_2_Get_outputs_0_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_0;
}

u32 XEstimate_fr_2_Write_outputs_0_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_0_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_0_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_0_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_1_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE);
}

u32 XEstimate_fr_2_Get_outputs_1_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_1_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_1_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_1;
}

u32 XEstimate_fr_2_Get_outputs_1_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_1;
}

u32 XEstimate_fr_2_Write_outputs_1_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_1_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_1_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_1_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_2_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE);
}

u32 XEstimate_fr_2_Get_outputs_2_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_2_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_2_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_2;
}

u32 XEstimate_fr_2_Get_outputs_2_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_2;
}

u32 XEstimate_fr_2_Write_outputs_2_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_2_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_2_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_2_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_3_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE);
}

u32 XEstimate_fr_2_Get_outputs_3_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_3_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_3_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_3;
}

u32 XEstimate_fr_2_Get_outputs_3_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_3;
}

u32 XEstimate_fr_2_Write_outputs_3_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_3_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_3_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_3_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_4_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE);
}

u32 XEstimate_fr_2_Get_outputs_4_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_4_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_4_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_4;
}

u32 XEstimate_fr_2_Get_outputs_4_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_4;
}

u32 XEstimate_fr_2_Write_outputs_4_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_4_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_4_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_4_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_5_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE);
}

u32 XEstimate_fr_2_Get_outputs_5_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_5_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_5_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_5;
}

u32 XEstimate_fr_2_Get_outputs_5_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_5;
}

u32 XEstimate_fr_2_Write_outputs_5_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_5_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_5_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_5_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_6_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE);
}

u32 XEstimate_fr_2_Get_outputs_6_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_6_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_6_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_6;
}

u32 XEstimate_fr_2_Get_outputs_6_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_6;
}

u32 XEstimate_fr_2_Write_outputs_6_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_6_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_6_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_6_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_outputs_7_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE);
}

u32 XEstimate_fr_2_Get_outputs_7_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_HIGH);
}

u32 XEstimate_fr_2_Get_outputs_7_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + 1);
}

u32 XEstimate_fr_2_Get_outputs_7_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_7;
}

u32 XEstimate_fr_2_Get_outputs_7_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_7;
}

u32 XEstimate_fr_2_Write_outputs_7_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_7_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_outputs_7_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_outputs_7_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE + offset + i);
    }
    return length;
}

void XEstimate_fr_2_InterruptGlobalEnable(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_GIE, 1);
}

void XEstimate_fr_2_InterruptGlobalDisable(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_GIE, 0);
}

void XEstimate_fr_2_InterruptEnable(XEstimate_fr_2 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_IER);
    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_IER, Register | Mask);
}

void XEstimate_fr_2_InterruptDisable(XEstimate_fr_2 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_IER);
    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_IER, Register & (~Mask));
}

void XEstimate_fr_2_InterruptClear(XEstimate_fr_2 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_ISR, Mask);
}

u32 XEstimate_fr_2_InterruptGetEnabled(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_IER);
}

u32 XEstimate_fr_2_InterruptGetStatus(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_ISR);
}

