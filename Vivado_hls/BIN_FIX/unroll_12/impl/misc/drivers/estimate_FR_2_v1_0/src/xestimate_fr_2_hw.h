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
// 0x020 ~
// 0x03f : Memory 'inputs_0' (8 * 32b)
//         Word n : bit [31:0] - inputs_0[n]
// 0x040 ~
// 0x05f : Memory 'inputs_1' (8 * 32b)
//         Word n : bit [31:0] - inputs_1[n]
// 0x060 ~
// 0x07f : Memory 'inputs_2' (8 * 32b)
//         Word n : bit [31:0] - inputs_2[n]
// 0x080 ~
// 0x09f : Memory 'inputs_3' (8 * 32b)
//         Word n : bit [31:0] - inputs_3[n]
// 0x0a0 ~
// 0x0bf : Memory 'inputs_4' (8 * 32b)
//         Word n : bit [31:0] - inputs_4[n]
// 0x0c0 ~
// 0x0df : Memory 'inputs_5' (8 * 32b)
//         Word n : bit [31:0] - inputs_5[n]
// 0x0e0 ~
// 0x0ff : Memory 'inputs_6' (8 * 32b)
//         Word n : bit [31:0] - inputs_6[n]
// 0x100 ~
// 0x11f : Memory 'inputs_7' (8 * 32b)
//         Word n : bit [31:0] - inputs_7[n]
// 0x120 ~
// 0x13f : Memory 'inputs_8' (8 * 32b)
//         Word n : bit [31:0] - inputs_8[n]
// 0x140 ~
// 0x15f : Memory 'inputs_9' (8 * 32b)
//         Word n : bit [31:0] - inputs_9[n]
// 0x160 ~
// 0x17f : Memory 'inputs_10' (8 * 32b)
//         Word n : bit [31:0] - inputs_10[n]
// 0x180 ~
// 0x19f : Memory 'inputs_11' (8 * 32b)
//         Word n : bit [31:0] - inputs_11[n]
// 0x1a0 ~
// 0x1a7 : Memory 'counts_0' (2 * 32b)
//         Word n : bit [31:0] - counts_0[n]
// 0x1a8 ~
// 0x1af : Memory 'counts_1' (2 * 32b)
//         Word n : bit [31:0] - counts_1[n]
// 0x1b0 ~
// 0x1b7 : Memory 'counts_2' (2 * 32b)
//         Word n : bit [31:0] - counts_2[n]
// 0x1b8 ~
// 0x1bf : Memory 'counts_3' (2 * 32b)
//         Word n : bit [31:0] - counts_3[n]
// 0x1c0 ~
// 0x1c7 : Memory 'counts_4' (2 * 32b)
//         Word n : bit [31:0] - counts_4[n]
// 0x1c8 ~
// 0x1cf : Memory 'counts_5' (2 * 32b)
//         Word n : bit [31:0] - counts_5[n]
// 0x1d0 ~
// 0x1d7 : Memory 'counts_6' (2 * 32b)
//         Word n : bit [31:0] - counts_6[n]
// 0x1d8 ~
// 0x1df : Memory 'counts_7' (2 * 32b)
//         Word n : bit [31:0] - counts_7[n]
// 0x1e0 ~
// 0x1e7 : Memory 'counts_8' (2 * 32b)
//         Word n : bit [31:0] - counts_8[n]
// 0x1e8 ~
// 0x1ef : Memory 'counts_9' (2 * 32b)
//         Word n : bit [31:0] - counts_9[n]
// 0x1f0 ~
// 0x1f7 : Memory 'counts_10' (2 * 32b)
//         Word n : bit [31:0] - counts_10[n]
// 0x1f8 ~
// 0x1ff : Memory 'counts_11' (2 * 32b)
//         Word n : bit [31:0] - counts_11[n]
// 0x200 ~
// 0x207 : Memory 'outputs_0' (2 * 32b)
//         Word n : bit [31:0] - outputs_0[n]
// 0x208 ~
// 0x20f : Memory 'outputs_1' (2 * 32b)
//         Word n : bit [31:0] - outputs_1[n]
// 0x210 ~
// 0x217 : Memory 'outputs_2' (2 * 32b)
//         Word n : bit [31:0] - outputs_2[n]
// 0x218 ~
// 0x21f : Memory 'outputs_3' (2 * 32b)
//         Word n : bit [31:0] - outputs_3[n]
// 0x220 ~
// 0x227 : Memory 'outputs_4' (2 * 32b)
//         Word n : bit [31:0] - outputs_4[n]
// 0x228 ~
// 0x22f : Memory 'outputs_5' (2 * 32b)
//         Word n : bit [31:0] - outputs_5[n]
// 0x230 ~
// 0x237 : Memory 'outputs_6' (2 * 32b)
//         Word n : bit [31:0] - outputs_6[n]
// 0x238 ~
// 0x23f : Memory 'outputs_7' (2 * 32b)
//         Word n : bit [31:0] - outputs_7[n]
// 0x240 ~
// 0x247 : Memory 'outputs_8' (2 * 32b)
//         Word n : bit [31:0] - outputs_8[n]
// 0x248 ~
// 0x24f : Memory 'outputs_9' (2 * 32b)
//         Word n : bit [31:0] - outputs_9[n]
// 0x250 ~
// 0x257 : Memory 'outputs_10' (2 * 32b)
//         Word n : bit [31:0] - outputs_10[n]
// 0x258 ~
// 0x25f : Memory 'outputs_11' (2 * 32b)
//         Word n : bit [31:0] - outputs_11[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL         0x000
#define XESTIMATE_FR_2_AXILITES_ADDR_GIE             0x004
#define XESTIMATE_FR_2_AXILITES_ADDR_IER             0x008
#define XESTIMATE_FR_2_AXILITES_ADDR_ISR             0x00c
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE   0x020
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH   0x03f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_0       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_0       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE   0x040
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH   0x05f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_1       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_1       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE   0x060
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH   0x07f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_2       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_2       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE   0x080
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH   0x09f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_3       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_3       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE   0x0a0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH   0x0bf
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_4       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_4       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE   0x0c0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH   0x0df
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_5       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_5       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE   0x0e0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH   0x0ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_6       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_6       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE   0x100
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH   0x11f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_7       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_7       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE   0x120
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_HIGH   0x13f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_8       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_8       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE   0x140
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_HIGH   0x15f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_9       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_9       8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE  0x160
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_HIGH  0x17f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_10      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_10      8
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE  0x180
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_HIGH  0x19f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_11      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_11      8
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE   0x1a0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH   0x1a7
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_0       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_0       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE   0x1a8
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH   0x1af
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_1       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_1       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE   0x1b0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH   0x1b7
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_2       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_2       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE   0x1b8
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH   0x1bf
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_3       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_3       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_BASE   0x1c0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_HIGH   0x1c7
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_4       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_4       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_BASE   0x1c8
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_HIGH   0x1cf
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_5       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_5       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_BASE   0x1d0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_HIGH   0x1d7
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_6       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_6       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_BASE   0x1d8
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_HIGH   0x1df
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_7       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_7       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_BASE   0x1e0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_HIGH   0x1e7
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_8       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_8       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_BASE   0x1e8
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_HIGH   0x1ef
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_9       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_9       2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_BASE  0x1f0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_HIGH  0x1f7
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_10      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_10      2
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_BASE  0x1f8
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_HIGH  0x1ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_11      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_11      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE  0x200
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH  0x207
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_0      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_0      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE  0x208
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH  0x20f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_1      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_1      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE  0x210
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH  0x217
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_2      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_2      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE  0x218
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH  0x21f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_3      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_3      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_BASE  0x220
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_HIGH  0x227
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_4      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_4      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_BASE  0x228
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_HIGH  0x22f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_5      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_5      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_BASE  0x230
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_HIGH  0x237
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_6      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_6      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_BASE  0x238
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_HIGH  0x23f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_7      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_7      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_8_BASE  0x240
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_8_HIGH  0x247
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_8      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_8      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_9_BASE  0x248
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_9_HIGH  0x24f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_9      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_9      2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_10_BASE 0x250
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_10_HIGH 0x257
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_10     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_10     2
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_11_BASE 0x258
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_11_HIGH 0x25f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_11     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_11     2

