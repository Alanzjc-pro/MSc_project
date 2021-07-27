// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XESTIMATE_ISI_H
#define XESTIMATE_ISI_H

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
#include "xestimate_isi_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XEstimate_isi_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XEstimate_isi;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XEstimate_isi_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XEstimate_isi_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XEstimate_isi_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XEstimate_isi_ReadReg(BaseAddress, RegOffset) \
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
int XEstimate_isi_Initialize(XEstimate_isi *InstancePtr, u16 DeviceId);
XEstimate_isi_Config* XEstimate_isi_LookupConfig(u16 DeviceId);
int XEstimate_isi_CfgInitialize(XEstimate_isi *InstancePtr, XEstimate_isi_Config *ConfigPtr);
#else
int XEstimate_isi_Initialize(XEstimate_isi *InstancePtr, const char* InstanceName);
int XEstimate_isi_Release(XEstimate_isi *InstancePtr);
#endif

void XEstimate_isi_Start(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_IsDone(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_IsIdle(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_IsReady(XEstimate_isi *InstancePtr);
void XEstimate_isi_EnableAutoRestart(XEstimate_isi *InstancePtr);
void XEstimate_isi_DisableAutoRestart(XEstimate_isi *InstancePtr);

u32 XEstimate_isi_Get_inputs_BaseAddress(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_inputs_HighAddress(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_inputs_TotalBytes(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_inputs_BitWidth(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_inputs_Depth(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Write_inputs_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_Read_inputs_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_Write_inputs_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_Read_inputs_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_Get_rem_r_BaseAddress(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_rem_r_HighAddress(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_rem_r_TotalBytes(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_rem_r_BitWidth(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_rem_r_Depth(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Write_rem_r_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_Read_rem_r_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_Write_rem_r_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_Read_rem_r_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_Get_output_r_BaseAddress(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_output_r_HighAddress(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_output_r_TotalBytes(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_output_r_BitWidth(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Get_output_r_Depth(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_Write_output_r_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_Read_output_r_Words(XEstimate_isi *InstancePtr, int offset, int *data, int length);
u32 XEstimate_isi_Write_output_r_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length);
u32 XEstimate_isi_Read_output_r_Bytes(XEstimate_isi *InstancePtr, int offset, char *data, int length);

void XEstimate_isi_InterruptGlobalEnable(XEstimate_isi *InstancePtr);
void XEstimate_isi_InterruptGlobalDisable(XEstimate_isi *InstancePtr);
void XEstimate_isi_InterruptEnable(XEstimate_isi *InstancePtr, u32 Mask);
void XEstimate_isi_InterruptDisable(XEstimate_isi *InstancePtr, u32 Mask);
void XEstimate_isi_InterruptClear(XEstimate_isi *InstancePtr, u32 Mask);
u32 XEstimate_isi_InterruptGetEnabled(XEstimate_isi *InstancePtr);
u32 XEstimate_isi_InterruptGetStatus(XEstimate_isi *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
