// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xestimate_isi_encode.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XEstimate_isi_encode_CfgInitialize(XEstimate_isi_encode *InstancePtr, XEstimate_isi_encode_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XEstimate_isi_encode_Start(XEstimate_isi_encode *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_isi_encode_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL) & 0x80;
    XEstimate_isi_encode_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XEstimate_isi_encode_IsDone(XEstimate_isi_encode *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_isi_encode_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XEstimate_isi_encode_IsIdle(XEstimate_isi_encode *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_isi_encode_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XEstimate_isi_encode_IsReady(XEstimate_isi_encode *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_isi_encode_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XEstimate_isi_encode_EnableAutoRestart(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_encode_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XEstimate_isi_encode_DisableAutoRestart(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_encode_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XEstimate_isi_encode_Get_inputs_0_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE);
}

u32 XEstimate_isi_encode_Get_inputs_0_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH);
}

u32 XEstimate_isi_encode_Get_inputs_0_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + 1);
}

u32 XEstimate_isi_encode_Get_inputs_0_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_0;
}

u32 XEstimate_isi_encode_Get_inputs_0_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_0;
}

u32 XEstimate_isi_encode_Write_inputs_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_inputs_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_inputs_1_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE);
}

u32 XEstimate_isi_encode_Get_inputs_1_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH);
}

u32 XEstimate_isi_encode_Get_inputs_1_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + 1);
}

u32 XEstimate_isi_encode_Get_inputs_1_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_1;
}

u32 XEstimate_isi_encode_Get_inputs_1_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_1;
}

u32 XEstimate_isi_encode_Write_inputs_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_inputs_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_inputs_2_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE);
}

u32 XEstimate_isi_encode_Get_inputs_2_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH);
}

u32 XEstimate_isi_encode_Get_inputs_2_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + 1);
}

u32 XEstimate_isi_encode_Get_inputs_2_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_2;
}

u32 XEstimate_isi_encode_Get_inputs_2_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_2;
}

u32 XEstimate_isi_encode_Write_inputs_2_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_2_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_inputs_2_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_2_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_inputs_3_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE);
}

u32 XEstimate_isi_encode_Get_inputs_3_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH);
}

u32 XEstimate_isi_encode_Get_inputs_3_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + 1);
}

u32 XEstimate_isi_encode_Get_inputs_3_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_3;
}

u32 XEstimate_isi_encode_Get_inputs_3_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_3;
}

u32 XEstimate_isi_encode_Write_inputs_3_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_3_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_inputs_3_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_3_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_inputs_4_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE);
}

u32 XEstimate_isi_encode_Get_inputs_4_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_HIGH);
}

u32 XEstimate_isi_encode_Get_inputs_4_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + 1);
}

u32 XEstimate_isi_encode_Get_inputs_4_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_4;
}

u32 XEstimate_isi_encode_Get_inputs_4_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_4;
}

u32 XEstimate_isi_encode_Write_inputs_4_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_4_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_inputs_4_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_4_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_inputs_5_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE);
}

u32 XEstimate_isi_encode_Get_inputs_5_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_HIGH);
}

u32 XEstimate_isi_encode_Get_inputs_5_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + 1);
}

u32 XEstimate_isi_encode_Get_inputs_5_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_5;
}

u32 XEstimate_isi_encode_Get_inputs_5_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_5;
}

u32 XEstimate_isi_encode_Write_inputs_5_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_5_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_inputs_5_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_5_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_inputs_6_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE);
}

u32 XEstimate_isi_encode_Get_inputs_6_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_HIGH);
}

u32 XEstimate_isi_encode_Get_inputs_6_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + 1);
}

u32 XEstimate_isi_encode_Get_inputs_6_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_6;
}

u32 XEstimate_isi_encode_Get_inputs_6_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_6;
}

u32 XEstimate_isi_encode_Write_inputs_6_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_6_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_inputs_6_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_6_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_inputs_7_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE);
}

u32 XEstimate_isi_encode_Get_inputs_7_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_HIGH);
}

u32 XEstimate_isi_encode_Get_inputs_7_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + 1);
}

u32 XEstimate_isi_encode_Get_inputs_7_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_7;
}

u32 XEstimate_isi_encode_Get_inputs_7_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_7;
}

u32 XEstimate_isi_encode_Write_inputs_7_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_7_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_inputs_7_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_inputs_7_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_rem_0_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE);
}

u32 XEstimate_isi_encode_Get_rem_0_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH);
}

u32 XEstimate_isi_encode_Get_rem_0_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + 1);
}

u32 XEstimate_isi_encode_Get_rem_0_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_0;
}

u32 XEstimate_isi_encode_Get_rem_0_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_0;
}

u32 XEstimate_isi_encode_Write_rem_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_rem_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_rem_1_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE);
}

u32 XEstimate_isi_encode_Get_rem_1_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH);
}

u32 XEstimate_isi_encode_Get_rem_1_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + 1);
}

u32 XEstimate_isi_encode_Get_rem_1_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_1;
}

u32 XEstimate_isi_encode_Get_rem_1_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_1;
}

u32 XEstimate_isi_encode_Write_rem_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_rem_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_rem_2_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE);
}

u32 XEstimate_isi_encode_Get_rem_2_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH);
}

u32 XEstimate_isi_encode_Get_rem_2_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + 1);
}

u32 XEstimate_isi_encode_Get_rem_2_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_2;
}

u32 XEstimate_isi_encode_Get_rem_2_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_2;
}

u32 XEstimate_isi_encode_Write_rem_2_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_2_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_rem_2_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_2_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_rem_3_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE);
}

u32 XEstimate_isi_encode_Get_rem_3_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH);
}

u32 XEstimate_isi_encode_Get_rem_3_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + 1);
}

u32 XEstimate_isi_encode_Get_rem_3_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_3;
}

u32 XEstimate_isi_encode_Get_rem_3_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_3;
}

u32 XEstimate_isi_encode_Write_rem_3_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_3_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_rem_3_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_3_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_rem_4_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE);
}

u32 XEstimate_isi_encode_Get_rem_4_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_HIGH);
}

u32 XEstimate_isi_encode_Get_rem_4_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + 1);
}

u32 XEstimate_isi_encode_Get_rem_4_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_4;
}

u32 XEstimate_isi_encode_Get_rem_4_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_4;
}

u32 XEstimate_isi_encode_Write_rem_4_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_4_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_rem_4_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_4_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_rem_5_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE);
}

u32 XEstimate_isi_encode_Get_rem_5_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_HIGH);
}

u32 XEstimate_isi_encode_Get_rem_5_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + 1);
}

u32 XEstimate_isi_encode_Get_rem_5_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_5;
}

u32 XEstimate_isi_encode_Get_rem_5_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_5;
}

u32 XEstimate_isi_encode_Write_rem_5_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_5_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_rem_5_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_5_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_rem_6_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE);
}

u32 XEstimate_isi_encode_Get_rem_6_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_HIGH);
}

u32 XEstimate_isi_encode_Get_rem_6_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + 1);
}

u32 XEstimate_isi_encode_Get_rem_6_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_6;
}

u32 XEstimate_isi_encode_Get_rem_6_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_6;
}

u32 XEstimate_isi_encode_Write_rem_6_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_6_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_rem_6_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_6_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_rem_7_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE);
}

u32 XEstimate_isi_encode_Get_rem_7_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_HIGH);
}

u32 XEstimate_isi_encode_Get_rem_7_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + 1);
}

u32 XEstimate_isi_encode_Get_rem_7_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_7;
}

u32 XEstimate_isi_encode_Get_rem_7_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_7;
}

u32 XEstimate_isi_encode_Write_rem_7_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_7_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_rem_7_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_rem_7_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_output_0_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE);
}

u32 XEstimate_isi_encode_Get_output_0_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH);
}

u32 XEstimate_isi_encode_Get_output_0_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + 1);
}

u32 XEstimate_isi_encode_Get_output_0_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_0;
}

u32 XEstimate_isi_encode_Get_output_0_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_0;
}

u32 XEstimate_isi_encode_Write_output_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_output_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_output_1_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE);
}

u32 XEstimate_isi_encode_Get_output_1_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH);
}

u32 XEstimate_isi_encode_Get_output_1_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + 1);
}

u32 XEstimate_isi_encode_Get_output_1_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_1;
}

u32 XEstimate_isi_encode_Get_output_1_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_1;
}

u32 XEstimate_isi_encode_Write_output_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_output_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_output_2_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE);
}

u32 XEstimate_isi_encode_Get_output_2_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_HIGH);
}

u32 XEstimate_isi_encode_Get_output_2_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + 1);
}

u32 XEstimate_isi_encode_Get_output_2_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_2;
}

u32 XEstimate_isi_encode_Get_output_2_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_2;
}

u32 XEstimate_isi_encode_Write_output_2_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_2_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_output_2_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_2_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_output_3_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE);
}

u32 XEstimate_isi_encode_Get_output_3_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_HIGH);
}

u32 XEstimate_isi_encode_Get_output_3_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + 1);
}

u32 XEstimate_isi_encode_Get_output_3_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_3;
}

u32 XEstimate_isi_encode_Get_output_3_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_3;
}

u32 XEstimate_isi_encode_Write_output_3_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_3_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_output_3_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_3_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_output_4_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE);
}

u32 XEstimate_isi_encode_Get_output_4_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_HIGH);
}

u32 XEstimate_isi_encode_Get_output_4_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + 1);
}

u32 XEstimate_isi_encode_Get_output_4_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_4;
}

u32 XEstimate_isi_encode_Get_output_4_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_4;
}

u32 XEstimate_isi_encode_Write_output_4_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_4_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_output_4_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_4_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_output_5_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE);
}

u32 XEstimate_isi_encode_Get_output_5_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_HIGH);
}

u32 XEstimate_isi_encode_Get_output_5_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + 1);
}

u32 XEstimate_isi_encode_Get_output_5_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_5;
}

u32 XEstimate_isi_encode_Get_output_5_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_5;
}

u32 XEstimate_isi_encode_Write_output_5_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_5_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_output_5_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_5_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_output_6_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE);
}

u32 XEstimate_isi_encode_Get_output_6_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_HIGH);
}

u32 XEstimate_isi_encode_Get_output_6_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + 1);
}

u32 XEstimate_isi_encode_Get_output_6_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_6;
}

u32 XEstimate_isi_encode_Get_output_6_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_6;
}

u32 XEstimate_isi_encode_Write_output_6_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_6_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_output_6_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_6_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Get_output_7_BaseAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE);
}

u32 XEstimate_isi_encode_Get_output_7_HighAddress(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_HIGH);
}

u32 XEstimate_isi_encode_Get_output_7_TotalBytes(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + 1);
}

u32 XEstimate_isi_encode_Get_output_7_BitWidth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_7;
}

u32 XEstimate_isi_encode_Get_output_7_Depth(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_7;
}

u32 XEstimate_isi_encode_Write_output_7_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_7_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_encode_Write_output_7_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_encode_Read_output_7_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_HIGH - XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE + offset + i);
    }
    return length;
}

void XEstimate_isi_encode_InterruptGlobalEnable(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_encode_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_GIE, 1);
}

void XEstimate_isi_encode_InterruptGlobalDisable(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_encode_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_GIE, 0);
}

void XEstimate_isi_encode_InterruptEnable(XEstimate_isi_encode *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEstimate_isi_encode_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER);
    XEstimate_isi_encode_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER, Register | Mask);
}

void XEstimate_isi_encode_InterruptDisable(XEstimate_isi_encode *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEstimate_isi_encode_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER);
    XEstimate_isi_encode_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER, Register & (~Mask));
}

void XEstimate_isi_encode_InterruptClear(XEstimate_isi_encode *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_encode_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_ISR, Mask);
}

u32 XEstimate_isi_encode_InterruptGetEnabled(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEstimate_isi_encode_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER);
}

u32 XEstimate_isi_encode_InterruptGetStatus(XEstimate_isi_encode *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEstimate_isi_encode_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_ENCODE_AXILITES_ADDR_ISR);
}

