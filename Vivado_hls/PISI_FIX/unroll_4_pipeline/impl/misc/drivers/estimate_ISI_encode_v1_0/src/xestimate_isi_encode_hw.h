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
// 0x080 ~
// 0x0ff : Memory 'inputs_0' (24 * 32b)
//         Word n : bit [31:0] - inputs_0[n]
// 0x100 ~
// 0x17f : Memory 'inputs_1' (24 * 32b)
//         Word n : bit [31:0] - inputs_1[n]
// 0x180 ~
// 0x1ff : Memory 'inputs_2' (24 * 32b)
//         Word n : bit [31:0] - inputs_2[n]
// 0x200 ~
// 0x27f : Memory 'inputs_3' (24 * 32b)
//         Word n : bit [31:0] - inputs_3[n]
// 0x280 ~
// 0x2ff : Memory 'rem_0' (24 * 32b)
//         Word n : bit [31:0] - rem_0[n]
// 0x300 ~
// 0x37f : Memory 'rem_1' (24 * 32b)
//         Word n : bit [31:0] - rem_1[n]
// 0x380 ~
// 0x3ff : Memory 'rem_2' (24 * 32b)
//         Word n : bit [31:0] - rem_2[n]
// 0x400 ~
// 0x47f : Memory 'rem_3' (24 * 32b)
//         Word n : bit [31:0] - rem_3[n]
// 0x480 ~
// 0x48f : Memory 'output_0' (3 * 32b)
//         Word n : bit [31:0] - output_0[n]
// 0x490 ~
// 0x49f : Memory 'output_1' (3 * 32b)
//         Word n : bit [31:0] - output_1[n]
// 0x4a0 ~
// 0x4af : Memory 'output_2' (3 * 32b)
//         Word n : bit [31:0] - output_2[n]
// 0x4b0 ~
// 0x4bf : Memory 'output_3' (3 * 32b)
//         Word n : bit [31:0] - output_3[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL       0x000
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_GIE           0x004
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER           0x008
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_ISR           0x00c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE 0x080
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH 0x0ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_0     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_0     24
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE 0x100
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH 0x17f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_1     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_1     24
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE 0x180
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH 0x1ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_2     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_2     24
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE 0x200
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH 0x27f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_3     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_3     24
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE    0x280
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH    0x2ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_0        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_0        24
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE    0x300
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH    0x37f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_1        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_1        24
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE    0x380
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH    0x3ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_2        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_2        24
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE    0x400
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH    0x47f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_3        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_3        24
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE 0x480
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH 0x48f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_0     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_0     3
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE 0x490
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH 0x49f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_1     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_1     3
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE 0x4a0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_HIGH 0x4af
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_2     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_2     3
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE 0x4b0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_HIGH 0x4bf
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_3     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_3     3

