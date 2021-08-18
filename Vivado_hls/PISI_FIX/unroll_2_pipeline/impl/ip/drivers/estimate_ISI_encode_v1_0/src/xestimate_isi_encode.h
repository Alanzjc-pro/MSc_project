// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XESTIMATE_ISI_ENCODE_H
#define XESTIMATE_ISI_ENCODE_H

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
#include "xestimate_isi_encode_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XEstimate_isi_encode_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XEstimate_isi_encode;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XEstimate_isi_encode_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XEstimate_isi_encode_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XEstimate_isi_encode_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XEstimate_isi_encode_ReadReg(BaseAddress, RegOffset) \
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
int XEstimate_isi_encode_Initialize(XEstimate_isi_encode *InstancePtr, u16 DeviceId);
XEstimate_isi_encode_Config* XEstimate_isi_encode_LookupConfig(u16 DeviceId);
int XEstimate_isi_encode_CfgInitialize(XEstimate_isi_encode *InstancePtr, XEstimate_isi_encode_Config *ConfigPtr);
#else
int XEstimate_isi_encode_Initialize(XEstimate_isi_encode *InstancePtr, const char* InstanceName);
int XEstimate_isi_encode_Release(XEstimate_isi_encode *InstancePtr);
#endif

void XEstimate_isi_encode_Start(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_IsDone(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_IsIdle(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_IsReady(XEstimate_isi_encode *InstancePtr);
void XEstimate_isi_encode_EnableAutoRestart(XEstimate_isi_encode *InstancePtr);
void XEstimate_isi_encode_DisableAutoRestart(XEstimate_isi_encode *InstancePtr);

u32 XEstimate_isi_encode_Get_inputs_0_BaseAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_inputs_0_HighAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_inputs_0_TotalBytes(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_inputs_0_BitWidth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_inputs_0_Depth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Write_inputs_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Read_inputs_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Write_inputs_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Read_inputs_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Get_inputs_1_BaseAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_inputs_1_HighAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_inputs_1_TotalBytes(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_inputs_1_BitWidth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_inputs_1_Depth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Write_inputs_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Read_inputs_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Write_inputs_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Read_inputs_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Get_rem_0_BaseAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_rem_0_HighAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_rem_0_TotalBytes(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_rem_0_BitWidth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_rem_0_Depth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Write_rem_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Read_rem_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Write_rem_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Read_rem_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Get_rem_1_BaseAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_rem_1_HighAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_rem_1_TotalBytes(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_rem_1_BitWidth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_rem_1_Depth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Write_rem_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Read_rem_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Write_rem_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Read_rem_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Get_output_0_BaseAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_output_0_HighAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_output_0_TotalBytes(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_output_0_BitWidth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_output_0_Depth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Write_output_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Read_output_0_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Write_output_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Read_output_0_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Get_output_1_BaseAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_output_1_HighAddress(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_output_1_TotalBytes(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_output_1_BitWidth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Get_output_1_Depth(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_Write_output_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Read_output_1_Words(XEstimate_isi_encode *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_encode_Write_output_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_encode_Read_output_1_Bytes(XEstimate_isi_encode *InstancePtr, int offset, char *data, int length);

void XEstimate_isi_encode_InterruptGlobalEnable(XEstimate_isi_encode *InstancePtr);
void XEstimate_isi_encode_InterruptGlobalDisable(XEstimate_isi_encode *InstancePtr);
void XEstimate_isi_encode_InterruptEnable(XEstimate_isi_encode *InstancePtr, u32 Mask);
void XEstimate_isi_encode_InterruptDisable(XEstimate_isi_encode *InstancePtr, u32 Mask);
void XEstimate_isi_encode_InterruptClear(XEstimate_isi_encode *InstancePtr, u32 Mask);
u32 XEstimate_isi_encode_InterruptGetEnabled(XEstimate_isi_encode *InstancePtr);
u32 XEstimate_isi_encode_InterruptGetStatus(XEstimate_isi_encode *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
