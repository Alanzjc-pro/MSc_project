// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XESTIMATE_FR_2_H
#define XESTIMATE_FR_2_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xestimate_fr_2_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XEstimate_fr_2_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XEstimate_fr_2;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XEstimate_fr_2_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XEstimate_fr_2_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XEstimate_fr_2_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XEstimate_fr_2_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XEstimate_fr_2_Initialize(XEstimate_fr_2 *InstancePtr, u16 DeviceId);
XEstimate_fr_2_Config* XEstimate_fr_2_LookupConfig(u16 DeviceId);
int XEstimate_fr_2_CfgInitialize(XEstimate_fr_2 *InstancePtr, XEstimate_fr_2_Config *ConfigPtr);
#else
int XEstimate_fr_2_Initialize(XEstimate_fr_2 *InstancePtr, const char* InstanceName);
int XEstimate_fr_2_Release(XEstimate_fr_2 *InstancePtr);
#endif

void XEstimate_fr_2_Start(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_IsDone(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_IsIdle(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_IsReady(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_EnableAutoRestart(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_DisableAutoRestart(XEstimate_fr_2 *InstancePtr);

void XEstimate_fr_2_Set_counts_0_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_0_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_0_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_0_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_1_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_1_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_1_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_1_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_2_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_2_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_2_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_2_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_3_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_3_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_3_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_3_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_4_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_4_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_4_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_4_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_5_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_5_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_5_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_5_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_6_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_6_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_6_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_6_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_7_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_7_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_7_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_7_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_8_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_8_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_8_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_8_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_9_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_9_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_9_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_9_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_10_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_10_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_10_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_10_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_11_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_11_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_11_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_11_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_12_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_12_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_12_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_12_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_13_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_13_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_13_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_13_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_14_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_14_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_14_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_14_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_15_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_15_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_15_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_15_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_16_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_16_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_16_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_16_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_17_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_17_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_17_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_17_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_18_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_18_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_18_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_18_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_19_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_19_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_19_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_19_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_20_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_20_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_20_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_20_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_21_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_21_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_21_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_21_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_22_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_22_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_22_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_22_o_vld(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_Set_counts_23_i(XEstimate_fr_2 *InstancePtr, u32 Data);
u32 XEstimate_fr_2_Get_counts_23_i(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_23_o(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_23_o_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_0(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_0_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_1(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_1_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_2(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_2_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_3(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_3_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_4(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_4_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_5(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_5_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_6(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_6_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_7(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_7_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_8(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_8_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_9(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_9_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_10(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_10_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_11(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_11_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_12(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_12_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_13(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_13_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_14(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_14_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_15(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_15_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_16(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_16_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_17(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_17_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_18(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_18_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_19(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_19_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_20(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_20_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_21(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_21_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_22(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_22_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_23(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_23_vld(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_0_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_0_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_0_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_0_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_0_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_0_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_0_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_0_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_0_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_1_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_1_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_1_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_1_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_1_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_1_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_1_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_1_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_1_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_2_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_2_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_2_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_2_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_2_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_2_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_2_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_2_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_2_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_3_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_3_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_3_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_3_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_3_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_3_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_3_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_3_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_3_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_4_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_4_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_4_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_4_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_4_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_4_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_4_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_4_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_4_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_5_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_5_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_5_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_5_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_5_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_5_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_5_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_5_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_5_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_6_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_6_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_6_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_6_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_6_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_6_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_6_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_6_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_6_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_7_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_7_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_7_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_7_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_7_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_7_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_7_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_7_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_7_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_8_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_8_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_8_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_8_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_8_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_8_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_8_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_8_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_8_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_9_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_9_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_9_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_9_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_9_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_9_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_9_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_9_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_9_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_10_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_10_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_10_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_10_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_10_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_10_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_10_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_10_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_10_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_11_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_11_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_11_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_11_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_11_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_11_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_11_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_11_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_11_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_12_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_12_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_12_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_12_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_12_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_12_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_12_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_12_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_12_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_13_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_13_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_13_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_13_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_13_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_13_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_13_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_13_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_13_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_14_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_14_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_14_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_14_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_14_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_14_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_14_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_14_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_14_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_15_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_15_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_15_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_15_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_15_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_15_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_15_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_15_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_15_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_16_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_16_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_16_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_16_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_16_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_16_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_16_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_16_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_16_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_17_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_17_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_17_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_17_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_17_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_17_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_17_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_17_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_17_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_18_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_18_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_18_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_18_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_18_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_18_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_18_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_18_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_18_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_19_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_19_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_19_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_19_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_19_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_19_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_19_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_19_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_19_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_20_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_20_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_20_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_20_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_20_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_20_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_20_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_20_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_20_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_21_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_21_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_21_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_21_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_21_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_21_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_21_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_21_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_21_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_22_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_22_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_22_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_22_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_22_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_22_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_22_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_22_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_22_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_inputs_23_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_23_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_23_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_23_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_23_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_23_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_23_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_23_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_23_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);

void XEstimate_fr_2_InterruptGlobalEnable(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_InterruptGlobalDisable(XEstimate_fr_2 *InstancePtr);
void XEstimate_fr_2_InterruptEnable(XEstimate_fr_2 *InstancePtr, u32 Mask);
void XEstimate_fr_2_InterruptDisable(XEstimate_fr_2 *InstancePtr, u32 Mask);
void XEstimate_fr_2_InterruptClear(XEstimate_fr_2 *InstancePtr, u32 Mask);
u32 XEstimate_fr_2_InterruptGetEnabled(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_InterruptGetStatus(XEstimate_fr_2 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
