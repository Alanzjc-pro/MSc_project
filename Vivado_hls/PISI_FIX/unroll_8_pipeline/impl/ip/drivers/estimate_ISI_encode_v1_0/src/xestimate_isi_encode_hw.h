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
// 0x040 ~
// 0x07f : Memory 'inputs_0' (12 * 32b)
//         Word n : bit [31:0] - inputs_0[n]
// 0x080 ~
// 0x0bf : Memory 'inputs_1' (12 * 32b)
//         Word n : bit [31:0] - inputs_1[n]
// 0x0c0 ~
// 0x0ff : Memory 'inputs_2' (12 * 32b)
//         Word n : bit [31:0] - inputs_2[n]
// 0x100 ~
// 0x13f : Memory 'inputs_3' (12 * 32b)
//         Word n : bit [31:0] - inputs_3[n]
// 0x140 ~
// 0x17f : Memory 'inputs_4' (12 * 32b)
//         Word n : bit [31:0] - inputs_4[n]
// 0x180 ~
// 0x1bf : Memory 'inputs_5' (12 * 32b)
//         Word n : bit [31:0] - inputs_5[n]
// 0x1c0 ~
// 0x1ff : Memory 'inputs_6' (12 * 32b)
//         Word n : bit [31:0] - inputs_6[n]
// 0x200 ~
// 0x23f : Memory 'inputs_7' (12 * 32b)
//         Word n : bit [31:0] - inputs_7[n]
// 0x240 ~
// 0x27f : Memory 'rem_0' (12 * 32b)
//         Word n : bit [31:0] - rem_0[n]
// 0x280 ~
// 0x2bf : Memory 'rem_1' (12 * 32b)
//         Word n : bit [31:0] - rem_1[n]
// 0x2c0 ~
// 0x2ff : Memory 'rem_2' (12 * 32b)
//         Word n : bit [31:0] - rem_2[n]
// 0x300 ~
// 0x33f : Memory 'rem_3' (12 * 32b)
//         Word n : bit [31:0] - rem_3[n]
// 0x340 ~
// 0x37f : Memory 'rem_4' (12 * 32b)
//         Word n : bit [31:0] - rem_4[n]
// 0x380 ~
// 0x3bf : Memory 'rem_5' (12 * 32b)
//         Word n : bit [31:0] - rem_5[n]
// 0x3c0 ~
// 0x3ff : Memory 'rem_6' (12 * 32b)
//         Word n : bit [31:0] - rem_6[n]
// 0x400 ~
// 0x43f : Memory 'rem_7' (12 * 32b)
//         Word n : bit [31:0] - rem_7[n]
// 0x440 ~
// 0x447 : Memory 'output_0' (2 * 32b)
//         Word n : bit [31:0] - output_0[n]
// 0x448 ~
// 0x44f : Memory 'output_1' (2 * 32b)
//         Word n : bit [31:0] - output_1[n]
// 0x450 ~
// 0x457 : Memory 'output_2' (2 * 32b)
//         Word n : bit [31:0] - output_2[n]
// 0x458 ~
// 0x45f : Memory 'output_3' (2 * 32b)
//         Word n : bit [31:0] - output_3[n]
// 0x460 ~
// 0x467 : Memory 'output_4' (1 * 32b)
//         Word n : bit [31:0] - output_4[n]
// 0x468 ~
// 0x46f : Memory 'output_5' (1 * 32b)
//         Word n : bit [31:0] - output_5[n]
// 0x470 ~
// 0x477 : Memory 'output_6' (1 * 32b)
//         Word n : bit [31:0] - output_6[n]
// 0x478 ~
// 0x47f : Memory 'output_7' (1 * 32b)
//         Word n : bit [31:0] - output_7[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL       0x000
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_GIE           0x004
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER           0x008
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_ISR           0x00c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE 0x040
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH 0x07f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_0     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_0     12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE 0x080
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH 0x0bf
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_1     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_1     12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE 0x0c0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH 0x0ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_2     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_2     12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE 0x100
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH 0x13f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_3     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_3     12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE 0x140
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_HIGH 0x17f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_4     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_4     12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE 0x180
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_HIGH 0x1bf
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_5     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_5     12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE 0x1c0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_HIGH 0x1ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_6     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_6     12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE 0x200
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_HIGH 0x23f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_7     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_7     12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE    0x240
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH    0x27f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_0        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_0        12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE    0x280
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH    0x2bf
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_1        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_1        12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE    0x2c0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH    0x2ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_2        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_2        12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE    0x300
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH    0x33f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_3        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_3        12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE    0x340
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_HIGH    0x37f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_4        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_4        12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE    0x380
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_HIGH    0x3bf
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_5        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_5        12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE    0x3c0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_HIGH    0x3ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_6        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_6        12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE    0x400
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_HIGH    0x43f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_7        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_7        12
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_BASE 0x440
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_HIGH 0x447
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_0     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_0     2
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_BASE 0x448
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_HIGH 0x44f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_1     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_1     2
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_BASE 0x450
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_HIGH 0x457
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_2     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_2     2
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_BASE 0x458
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_HIGH 0x45f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_3     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_3     2
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_BASE 0x460
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_HIGH 0x467
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_4     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_4     1
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_BASE 0x468
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_HIGH 0x46f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_5     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_5     1
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_BASE 0x470
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_HIGH 0x477
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_6     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_6     1
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_BASE 0x478
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_HIGH 0x47f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_OUTPUT_7     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_OUTPUT_7     1

