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


u32 XEstimate_fr_2_Get_inputs_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_inputs_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_inputs_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_inputs_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_inputs_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_inputs_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_counts_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_counts_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_counts_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_counts_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_counts_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_counts_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Get_outputs_BaseAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_HighAddress(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_TotalBytes(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_BitWidth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Get_outputs_Depth(XEstimate_fr_2 *InstancePtr);
u32 XEstimate_fr_2_Write_outputs_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Read_outputs_Words(XEstimate_fr_2 *InstancePtr, int offset, int *data, int length);
u32 XEstimate_fr_2_Write_outputs_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);
u32 XEstimate_fr_2_Read_outputs_Bytes(XEstimate_fr_2 *InstancePtr, int offset, char *data, int length);

#ifdef __cplusplus
}
#endif

#endif
