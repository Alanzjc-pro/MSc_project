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

void XEstimate_fr_2_Set_counts_0_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_0_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_0_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_0_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_1_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_1_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_1_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_1_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_2_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_2_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_2_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_2_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_3_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_3_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_3_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_3_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_4_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_4_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_4_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_4_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_5_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_5_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_5_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_5_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_6_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_6_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_6_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_6_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_7_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_7_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_7_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_7_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_8_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_8_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_8_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_8_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_9_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_9_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_9_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_9_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_10_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_10_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_10_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_10_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_11_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_11_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_11_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_11_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_12_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_12_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_12_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_12_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_12_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_12_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_12_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_12_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_13_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_13_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_13_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_13_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_13_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_13_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_13_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_13_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_14_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_14_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_14_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_14_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_14_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_14_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_14_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_14_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_15_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_15_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_15_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_15_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_15_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_15_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_15_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_15_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_16_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_16_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_16_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_16_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_16_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_16_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_16_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_16_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_17_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_17_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_17_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_17_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_17_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_17_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_17_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_17_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_18_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_18_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_18_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_18_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_18_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_18_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_18_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_18_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_19_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_19_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_19_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_19_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_19_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_19_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_19_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_19_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_20_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_20_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_20_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_20_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_20_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_20_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_20_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_20_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_21_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_21_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_21_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_21_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_21_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_21_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_21_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_21_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_22_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_22_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_22_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_22_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_22_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_22_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_22_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_22_O_CTRL);
    return Data & 0x1;
}

void XEstimate_fr_2_Set_counts_23_i(XEstimate_fr_2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEstimate_fr_2_WriteReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_23_I_DATA, Data);
}

u32 XEstimate_fr_2_Get_counts_23_i(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_23_I_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_23_o(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_23_O_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_counts_23_o_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_23_O_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_0(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_0_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_1(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_1_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_2(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_2_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_3(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_3_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_4(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_4_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_5(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_5_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_6(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_6_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_7(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_7_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_8(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_8_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_8_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_8_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_9(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_9_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_9_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_9_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_10(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_10_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_10_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_10_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_11(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_11_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_11_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_11_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_12(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_12_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_12_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_12_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_13(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_13_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_13_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_13_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_14(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_14_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_14_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_14_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_15(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_15_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_15_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_15_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_16(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_16_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_16_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_16_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_17(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_17_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_17_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_17_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_18(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_18_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_18_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_18_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_19(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_19_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_19_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_19_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_20(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_20_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_20_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_20_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_21(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_21_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_21_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_21_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_22(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_22_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_22_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_22_CTRL);
    return Data & 0x1;
}

u32 XEstimate_fr_2_Get_outputs_23(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_23_DATA);
    return Data;
}

u32 XEstimate_fr_2_Get_outputs_23_vld(XEstimate_fr_2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEstimate_fr_2_ReadReg(InstancePtr->Axilites_BaseAddress, XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_23_CTRL);
    return Data & 0x1;
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

u32 XEstimate_fr_2_Get_inputs_8_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE);
}

u32 XEstimate_fr_2_Get_inputs_8_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_8_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_8_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_8;
}

u32 XEstimate_fr_2_Get_inputs_8_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_8;
}

u32 XEstimate_fr_2_Write_inputs_8_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_8_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_8_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_8_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_9_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE);
}

u32 XEstimate_fr_2_Get_inputs_9_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_9_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_9_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_9;
}

u32 XEstimate_fr_2_Get_inputs_9_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_9;
}

u32 XEstimate_fr_2_Write_inputs_9_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_9_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_9_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_9_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_10_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE);
}

u32 XEstimate_fr_2_Get_inputs_10_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_10_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_10_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_10;
}

u32 XEstimate_fr_2_Get_inputs_10_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_10;
}

u32 XEstimate_fr_2_Write_inputs_10_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_10_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_10_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_10_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_11_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE);
}

u32 XEstimate_fr_2_Get_inputs_11_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_11_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_11_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_11;
}

u32 XEstimate_fr_2_Get_inputs_11_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_11;
}

u32 XEstimate_fr_2_Write_inputs_11_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_11_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_11_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_11_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_12_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE);
}

u32 XEstimate_fr_2_Get_inputs_12_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_12_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_12_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_12;
}

u32 XEstimate_fr_2_Get_inputs_12_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_12;
}

u32 XEstimate_fr_2_Write_inputs_12_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_12_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_12_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_12_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_13_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE);
}

u32 XEstimate_fr_2_Get_inputs_13_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_13_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_13_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_13;
}

u32 XEstimate_fr_2_Get_inputs_13_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_13;
}

u32 XEstimate_fr_2_Write_inputs_13_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_13_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_13_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_13_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_14_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE);
}

u32 XEstimate_fr_2_Get_inputs_14_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_14_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_14_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_14;
}

u32 XEstimate_fr_2_Get_inputs_14_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_14;
}

u32 XEstimate_fr_2_Write_inputs_14_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_14_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_14_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_14_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_15_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE);
}

u32 XEstimate_fr_2_Get_inputs_15_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_15_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_15_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_15;
}

u32 XEstimate_fr_2_Get_inputs_15_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_15;
}

u32 XEstimate_fr_2_Write_inputs_15_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_15_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_15_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_15_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_16_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE);
}

u32 XEstimate_fr_2_Get_inputs_16_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_16_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_16_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_16;
}

u32 XEstimate_fr_2_Get_inputs_16_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_16;
}

u32 XEstimate_fr_2_Write_inputs_16_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_16_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_16_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_16_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_17_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE);
}

u32 XEstimate_fr_2_Get_inputs_17_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_17_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_17_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_17;
}

u32 XEstimate_fr_2_Get_inputs_17_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_17;
}

u32 XEstimate_fr_2_Write_inputs_17_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_17_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_17_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_17_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_18_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE);
}

u32 XEstimate_fr_2_Get_inputs_18_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_18_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_18_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_18;
}

u32 XEstimate_fr_2_Get_inputs_18_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_18;
}

u32 XEstimate_fr_2_Write_inputs_18_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_18_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_18_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_18_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_19_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE);
}

u32 XEstimate_fr_2_Get_inputs_19_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_19_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_19_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_19;
}

u32 XEstimate_fr_2_Get_inputs_19_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_19;
}

u32 XEstimate_fr_2_Write_inputs_19_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_19_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_19_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_19_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_20_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE);
}

u32 XEstimate_fr_2_Get_inputs_20_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_20_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_20_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_20;
}

u32 XEstimate_fr_2_Get_inputs_20_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_20;
}

u32 XEstimate_fr_2_Write_inputs_20_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_20_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_20_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_20_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_21_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE);
}

u32 XEstimate_fr_2_Get_inputs_21_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_21_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_21_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_21;
}

u32 XEstimate_fr_2_Get_inputs_21_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_21;
}

u32 XEstimate_fr_2_Write_inputs_21_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_21_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_21_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_21_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_22_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE);
}

u32 XEstimate_fr_2_Get_inputs_22_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_22_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_22_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_22;
}

u32 XEstimate_fr_2_Get_inputs_22_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_22;
}

u32 XEstimate_fr_2_Write_inputs_22_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_22_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_22_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_22_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE + offset + i);
    }
    return length;
}

u32 XEstimate_fr_2_Get_inputs_23_BaseAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE);
}

u32 XEstimate_fr_2_Get_inputs_23_HighAddress(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_HIGH);
}

u32 XEstimate_fr_2_Get_inputs_23_TotalBytes(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + 1);
}

u32 XEstimate_fr_2_Get_inputs_23_BitWidth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_23;
}

u32 XEstimate_fr_2_Get_inputs_23_Depth(XEstimate_fr_2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_23;
}

u32 XEstimate_fr_2_Write_inputs_23_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_23_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + (offset + i)*4);
    }
    return length;
}

u32 XEstimate_fr_2_Write_inputs_23_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XEstimate_fr_2_Read_inputs_23_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_HIGH - XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE + offset + i);
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

