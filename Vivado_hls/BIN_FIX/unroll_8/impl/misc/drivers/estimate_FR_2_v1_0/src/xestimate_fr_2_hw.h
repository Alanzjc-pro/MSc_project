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
// 0x24f : Memory 'counts_0' (3 * 32b)
//         Word n : bit [31:0] - counts_0[n]
// 0x250 ~
// 0x25f : Memory 'counts_1' (3 * 32b)
//         Word n : bit [31:0] - counts_1[n]
// 0x260 ~
// 0x26f : Memory 'counts_2' (3 * 32b)
//         Word n : bit [31:0] - counts_2[n]
// 0x270 ~
// 0x27f : Memory 'counts_3' (3 * 32b)
//         Word n : bit [31:0] - counts_3[n]
// 0x280 ~
// 0x28f : Memory 'counts_4' (3 * 32b)
//         Word n : bit [31:0] - counts_4[n]
// 0x290 ~
// 0x29f : Memory 'counts_5' (3 * 32b)
//         Word n : bit [31:0] - counts_5[n]
// 0x2a0 ~
// 0x2af : Memory 'counts_6' (3 * 32b)
//         Word n : bit [31:0] - counts_6[n]
// 0x2b0 ~
// 0x2bf : Memory 'counts_7' (3 * 32b)
//         Word n : bit [31:0] - counts_7[n]
// 0x2c0 ~
// 0x2cf : Memory 'outputs_0' (3 * 32b)
//         Word n : bit [31:0] - outputs_0[n]
// 0x2d0 ~
// 0x2df : Memory 'outputs_1' (3 * 32b)
//         Word n : bit [31:0] - outputs_1[n]
// 0x2e0 ~
// 0x2ef : Memory 'outputs_2' (3 * 32b)
//         Word n : bit [31:0] - outputs_2[n]
// 0x2f0 ~
// 0x2ff : Memory 'outputs_3' (3 * 32b)
//         Word n : bit [31:0] - outputs_3[n]
// 0x300 ~
// 0x30f : Memory 'outputs_4' (3 * 32b)
//         Word n : bit [31:0] - outputs_4[n]
// 0x310 ~
// 0x31f : Memory 'outputs_5' (3 * 32b)
//         Word n : bit [31:0] - outputs_5[n]
// 0x320 ~
// 0x32f : Memory 'outputs_6' (3 * 32b)
//         Word n : bit [31:0] - outputs_6[n]
// 0x330 ~
// 0x33f : Memory 'outputs_7' (3 * 32b)
//         Word n : bit [31:0] - outputs_7[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL        0x000
#define XESTIMATE_FR_2_AXILITES_ADDR_GIE            0x004
#define XESTIMATE_FR_2_AXILITES_ADDR_IER            0x008
#define XESTIMATE_FR_2_AXILITES_ADDR_ISR            0x00c
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE  0x040
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH  0x07f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_0      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_0      12
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE  0x080
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH  0x0bf
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_1      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_1      12
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE  0x0c0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH  0x0ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_2      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_2      12
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE  0x100
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH  0x13f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_3      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_3      12
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE  0x140
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH  0x17f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_4      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_4      12
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE  0x180
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH  0x1bf
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_5      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_5      12
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE  0x1c0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH  0x1ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_6      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_6      12
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE  0x200
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH  0x23f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_7      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_7      12
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE  0x240
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH  0x24f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_0      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_0      3
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE  0x250
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH  0x25f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_1      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_1      3
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE  0x260
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH  0x26f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_2      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_2      3
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE  0x270
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH  0x27f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_3      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_3      3
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE  0x280
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_HIGH  0x28f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_4      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_4      3
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE  0x290
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_HIGH  0x29f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_5      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_5      3
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE  0x2a0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_HIGH  0x2af
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_6      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_6      3
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE  0x2b0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_HIGH  0x2bf
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_7      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_7      3
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE 0x2c0
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH 0x2cf
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_0     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_0     3
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE 0x2d0
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH 0x2df
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_1     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_1     3
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE 0x2e0
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH 0x2ef
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_2     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_2     3
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE 0x2f0
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH 0x2ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_3     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_3     3
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE 0x300
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_HIGH 0x30f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_4     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_4     3
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE 0x310
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_HIGH 0x31f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_5     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_5     3
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE 0x320
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_HIGH 0x32f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_6     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_6     3
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE 0x330
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_HIGH 0x33f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_7     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_7     3

