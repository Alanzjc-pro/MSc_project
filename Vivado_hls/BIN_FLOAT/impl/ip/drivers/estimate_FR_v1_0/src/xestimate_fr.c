// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xestimate_fr.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XEstimate_fr_CfgInitialize(XEstimate_fr *InstancePtr, XEstimate_fr_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XEstimate_fr_Start(XEstimate_fr *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_AP_CTRL) & 0x80;
    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XEstimate_fr_IsDone(XEstimate_fr *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XEstimate_fr_IsIdle(XEstimate_fr *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XEstimate_fr_IsReady(XEstimate_fr *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XEstimate_fr_EnableAutoRestart(XEstimate_fr *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XEstimate_fr_DisableAutoRestart(XEstimate_fr *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_AP_CTRL, 0);
}

void XEstimate_fr_Set_update(XEstimate_fr *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_UPDATE_DATA, Data);
}

u32 XEstimate_fr_Get_update(XEstimate_fr *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_UPDATE_DATA);
    return Data;
}

u32 XEstimate_fr_Get_spks_BaseAddress(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE);
}

u32 XEstimate_fr_Get_spks_HighAddress(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_SPKS_HIGH);
}

u32 XEstimate_fr_Get_spks_TotalBytes(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_AXILITES_ADDR_SPKS_HIGH - XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + 1);
}

u32 XEstimate_fr_Get_spks_BitWidth(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_AXILITES_WIDTH_SPKS;
}

u32 XEstimate_fr_Get_spks_Depth(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_AXILITES_DEPTH_SPKS;
}

u32 XEstimate_fr_Write_spks_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_AXILITES_ADDR_SPKS_HIGH - XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_Read_spks_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_AXILITES_ADDR_SPKS_HIGH - XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_Write_spks_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_AXILITES_ADDR_SPKS_HIGH - XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_Read_spks_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_AXILITES_ADDR_SPKS_HIGH - XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_Get_counts_BaseAddress(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE);
}

u32 XEstimate_fr_Get_counts_HighAddress(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_COUNTS_HIGH);
}

u32 XEstimate_fr_Get_counts_TotalBytes(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + 1);
}

u32 XEstimate_fr_Get_counts_BitWidth(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_AXILITES_WIDTH_COUNTS;
}

u32 XEstimate_fr_Get_counts_Depth(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_AXILITES_DEPTH_COUNTS;
}

u32 XEstimate_fr_Write_counts_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_Read_counts_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_Write_counts_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_Read_counts_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_AXILITES_ADDR_COUNTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_Get_outputs_BaseAddress(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE);
}

u32 XEstimate_fr_Get_outputs_HighAddress(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_HIGH);
}

u32 XEstimate_fr_Get_outputs_TotalBytes(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + 1);
}

u32 XEstimate_fr_Get_outputs_BitWidth(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_AXILITES_WIDTH_OUTPUTS;
}

u32 XEstimate_fr_Get_outputs_Depth(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_AXILITES_DEPTH_OUTPUTS;
}

u32 XEstimate_fr_Write_outputs_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_Read_outputs_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_Write_outputs_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_Read_outputs_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_HIGH - XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE + offset + i);
    }
    return length;
}

void XEstimate_fr_InterruptGlobalEnable(XEstimate_fr *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_GIE, 1);
}

void XEstimate_fr_InterruptGlobalDisable(XEstimate_fr *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_GIE, 0);
}

void XEstimate_fr_InterruptEnable(XEstimate_fr *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_IER);
    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_IER, Register | Mask);
}

void XEstimate_fr_InterruptDisable(XEstimate_fr *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_IER);
    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_IER, Register & (~Mask));
}

void XEstimate_fr_InterruptClear(XEstimate_fr *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_ISR, Mask);
}

u32 XEstimate_fr_InterruptGetEnabled(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_IER);
}

u32 XEstimate_fr_InterruptGetStatus(XEstimate_fr *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XEstimate_fr_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_AXILITES_ADDR_ISR);
}

