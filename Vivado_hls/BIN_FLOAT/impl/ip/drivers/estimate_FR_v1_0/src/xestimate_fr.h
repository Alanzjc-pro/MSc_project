// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XESTIMATE_FR_H
#define XESTIMATE_FR_H

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
#include "xestimate_fr_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XEstimate_fr_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XEstimate_fr;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XEstimate_fr_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XEstimate_fr_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XEstimate_fr_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XEstimate_fr_ReadReg(BaseAddress, RegOffset) \
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
int XEstimate_fr_Initialize(XEstimate_fr *InstancePtr, u16 DeviceId);
XEstimate_fr_Config* XEstimate_fr_LookupConfig(u16 DeviceId);
int XEstimate_fr_CfgInitialize(XEstimate_fr *InstancePtr, XEstimate_fr_Config *ConfigPtr);
#else
int XEstimate_fr_Initialize(XEstimate_fr *InstancePtr, const char* InstanceName);
int XEstimate_fr_Release(XEstimate_fr *InstancePtr);
#endif

void XEstimate_fr_Start(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_IsDone(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_IsIdle(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_IsReady(XEstimate_fr *InstancePtr);
void XEstimate_fr_EnableAutoRestart(XEstimate_fr *InstancePtr);
void XEstimate_fr_DisableAutoRestart(XEstimate_fr *InstancePtr);

void XEstimate_fr_Set_update(XEstimate_fr *InstancePtr, u32 Data);
u32 XEstimate_fr_Get_update(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_spks_BaseAddress(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_spks_HighAddress(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_spks_TotalBytes(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_spks_BitWidth(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_spks_Depth(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Write_spks_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_Read_spks_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_Write_spks_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_Read_spks_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_Get_counts_BaseAddress(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_counts_HighAddress(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_counts_TotalBytes(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_counts_BitWidth(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_counts_Depth(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Write_counts_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_Read_counts_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_Write_counts_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_Read_counts_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_Get_outputs_BaseAddress(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_outputs_HighAddress(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_outputs_TotalBytes(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_outputs_BitWidth(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Get_outputs_Depth(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_Write_outputs_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_Read_outputs_Words(XEstimate_fr *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_Write_outputs_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_Read_outputs_Bytes(XEstimate_fr *InstancePtr, int offset, char *data, int length);

void XEstimate_fr_InterruptGlobalEnable(XEstimate_fr *InstancePtr);
void XEstimate_fr_InterruptGlobalDisable(XEstimate_fr *InstancePtr);
void XEstimate_fr_InterruptEnable(XEstimate_fr *InstancePtr, u32 Mask);
void XEstimate_fr_InterruptDisable(XEstimate_fr *InstancePtr, u32 Mask);
void XEstimate_fr_InterruptClear(XEstimate_fr *InstancePtr, u32 Mask);
u32 XEstimate_fr_InterruptGetEnabled(XEstimate_fr *InstancePtr);
u32 XEstimate_fr_InterruptGetStatus(XEstimate_fr *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
