// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x100 ~
// 0x1ff : Memory 'inputs_0' (48 * 32b)
//         Word n : bit [31:0] - inputs_0[n]
// 0x200 ~
// 0x2ff : Memory 'inputs_1' (48 * 32b)
//         Word n : bit [31:0] - inputs_1[n]
// 0x300 ~
// 0x3ff : Memory 'rem_0' (48 * 32b)
//         Word n : bit [31:0] - rem_0[n]
// 0x400 ~
// 0x4ff : Memory 'rem_1' (48 * 32b)
//         Word n : bit [31:0] - rem_1[n]
// 0x500 ~
// 0x51f : Memory 'output_0' (6 * 32b)
//         Word n : bit [31:0] - output_0[n]
// 0x520 ~
// 0x53f : Memory 'output_1' (6 * 32b)
//         Word n : bit [31:0] - output_1[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL       0x000
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_GIE           0x004
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER           0x008
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_ISR           0x00c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE 0x100
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH 0x1ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_0     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_0     48
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE 0x200
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH 0x2ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_1     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_1     48
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE    0x300
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH    0x3ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_0        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_0        48
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE    0x400
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH    0x4ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_1        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_1        48
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE 0x500
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH 0x51f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_0     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_0     6
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE 0x520
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH 0x53f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_1     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_1     6

