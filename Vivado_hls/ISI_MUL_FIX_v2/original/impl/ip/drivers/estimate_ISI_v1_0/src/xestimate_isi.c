// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xestimate_isi.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XEstimate_isi_CfgInitialize(XEstimate_isi *InstancePtr, XEstimate_isi_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XEstimate_isi_Start(XEstimate_isi *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_isi_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_AP_CTRL) & 0x80;
    XEstimate_isi_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XEstimate_isi_IsDone(XEstimate_isi *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_isi_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XEstimate_isi_IsIdle(XEstimate_isi *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_isi_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XEstimate_isi_IsReady(XEstimate_isi *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_isi_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XEstimate_isi_EnableAutoRestart(XEstimate_isi *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XEstimate_isi_DisableAutoRestart(XEstimate_isi *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XEstimate_isi_Get_inputs_BaseAddress(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE);
}

u32 XEstimate_isi_Get_inputs_HighAddress(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_INPUTS_HIGH);
}

u32 XEstimate_isi_Get_inputs_TotalBytes(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + 1);
}

u32 XEstimate_isi_Get_inputs_BitWidth(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_AXILITES_WIDTH_INPUTS;
}

u32 XEstimate_isi_Get_inputs_Depth(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_AXILITES_DEPTH_INPUTS;
}

u32 XEstimate_isi_Write_inputs_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_Read_inputs_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_Write_inputs_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_Read_inputs_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_AXILITES_ADDR_INPUTS_HIGH - XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_Get_rem_r_BaseAddress(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE);
}

u32 XEstimate_isi_Get_rem_r_HighAddress(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_REM_R_HIGH);
}

u32 XEstimate_isi_Get_rem_r_TotalBytes(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_AXILITES_ADDR_REM_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + 1);
}

u32 XEstimate_isi_Get_rem_r_BitWidth(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_AXILITES_WIDTH_REM_R;
}

u32 XEstimate_isi_Get_rem_r_Depth(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_AXILITES_DEPTH_REM_R;
}

u32 XEstimate_isi_Write_rem_r_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_AXILITES_ADDR_REM_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_Read_rem_r_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_AXILITES_ADDR_REM_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_Write_rem_r_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_AXILITES_ADDR_REM_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_Read_rem_r_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_AXILITES_ADDR_REM_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_isi_Get_output_r_BaseAddress(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE);
}

u32 XEstimate_isi_Get_output_r_HighAddress(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_HIGH);
}

u32 XEstimate_isi_Get_output_r_TotalBytes(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + 1);
}

u32 XEstimate_isi_Get_output_r_BitWidth(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_AXILITES_WIDTH_OUTPUT_R;
}

u32 XEstimate_isi_Get_output_r_Depth(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_ISI_AXILITES_DEPTH_OUTPUT_R;
}

u32 XEstimate_isi_Write_output_r_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_Read_output_r_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_isi_Write_output_r_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_isi_Read_output_r_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_HIGH - XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE + offset + i);
    }
    return length;
}

void XEstimate_isi_InterruptGlobalEnable(XEstimate_isi *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_GIE, 1);
}

void XEstimate_isi_InterruptGlobalDisable(XEstimate_isi *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_GIE, 0);
}

void XEstimate_isi_InterruptEnable(XEstimate_isi *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEstimate_isi_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_IER);
    XEstimate_isi_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_IER, Register | Mask);
}

void XEstimate_isi_InterruptDisable(XEstimate_isi *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEstimate_isi_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_IER);
    XEstimate_isi_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_IER, Register & (~Mask));
}

void XEstimate_isi_InterruptClear(XEstimate_isi *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_isi_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_ISR, Mask);
}

u32 XEstimate_isi_InterruptGetEnabled(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEstimate_isi_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_IER);
}

u32 XEstimate_isi_InterruptGetStatus(XEstimate_isi *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEstimate_isi_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_ISI_AXILITES_ADDR_ISR);
}

