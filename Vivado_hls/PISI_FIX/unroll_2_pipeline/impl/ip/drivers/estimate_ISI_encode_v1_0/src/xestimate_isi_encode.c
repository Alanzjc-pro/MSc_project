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

