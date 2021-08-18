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
// 0x320 : Data signal of output_0
//         bit 31~0 - output_0[31:0] (Read)
// 0x324 : Control signal of output_0
//         bit 0  - output_0_ap_vld (Read/COR)
//         others - reserved
// 0x328 : Data signal of output_1
//         bit 31~0 - output_1[31:0] (Read)
// 0x32c : Control signal of output_1
//         bit 0  - output_1_ap_vld (Read/COR)
//         others - reserved
// 0x330 : Data signal of output_2
//         bit 31~0 - output_2[31:0] (Read)
// 0x334 : Control signal of output_2
//         bit 0  - output_2_ap_vld (Read/COR)
//         others - reserved
// 0x338 : Data signal of output_3
//         bit 31~0 - output_3[31:0] (Read)
// 0x33c : Control signal of output_3
//         bit 0  - output_3_ap_vld (Read/COR)
//         others - reserved
// 0x340 : Data signal of output_4
//         bit 31~0 - output_4[31:0] (Read)
// 0x344 : Control signal of output_4
//         bit 0  - output_4_ap_vld (Read/COR)
//         others - reserved
// 0x348 : Data signal of output_5
//         bit 31~0 - output_5[31:0] (Read)
// 0x34c : Control signal of output_5
//         bit 0  - output_5_ap_vld (Read/COR)
//         others - reserved
// 0x350 : Data signal of output_6
//         bit 31~0 - output_6[31:0] (Read)
// 0x354 : Control signal of output_6
//         bit 0  - output_6_ap_vld (Read/COR)
//         others - reserved
// 0x358 : Data signal of output_7
//         bit 31~0 - output_7[31:0] (Read)
// 0x35c : Control signal of output_7
//         bit 0  - output_7_ap_vld (Read/COR)
//         others - reserved
// 0x360 : Data signal of output_8
//         bit 31~0 - output_8[31:0] (Read)
// 0x364 : Control signal of output_8
//         bit 0  - output_8_ap_vld (Read/COR)
//         others - reserved
// 0x368 : Data signal of output_9
//         bit 31~0 - output_9[31:0] (Read)
// 0x36c : Control signal of output_9
//         bit 0  - output_9_ap_vld (Read/COR)
//         others - reserved
// 0x370 : Data signal of output_10
//         bit 31~0 - output_10[31:0] (Read)
// 0x374 : Control signal of output_10
//         bit 0  - output_10_ap_vld (Read/COR)
//         others - reserved
// 0x378 : Data signal of output_11
//         bit 31~0 - output_11[31:0] (Read)
// 0x37c : Control signal of output_11
//         bit 0  - output_11_ap_vld (Read/COR)
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
// 0x1bf : Memory 'rem_0' (8 * 32b)
//         Word n : bit [31:0] - rem_0[n]
// 0x1c0 ~
// 0x1df : Memory 'rem_1' (8 * 32b)
//         Word n : bit [31:0] - rem_1[n]
// 0x1e0 ~
// 0x1ff : Memory 'rem_2' (8 * 32b)
//         Word n : bit [31:0] - rem_2[n]
// 0x200 ~
// 0x21f : Memory 'rem_3' (8 * 32b)
//         Word n : bit [31:0] - rem_3[n]
// 0x220 ~
// 0x23f : Memory 'rem_4' (8 * 32b)
//         Word n : bit [31:0] - rem_4[n]
// 0x240 ~
// 0x25f : Memory 'rem_5' (8 * 32b)
//         Word n : bit [31:0] - rem_5[n]
// 0x260 ~
// 0x27f : Memory 'rem_6' (8 * 32b)
//         Word n : bit [31:0] - rem_6[n]
// 0x280 ~
// 0x29f : Memory 'rem_7' (8 * 32b)
//         Word n : bit [31:0] - rem_7[n]
// 0x2a0 ~
// 0x2bf : Memory 'rem_8' (8 * 32b)
//         Word n : bit [31:0] - rem_8[n]
// 0x2c0 ~
// 0x2df : Memory 'rem_9' (8 * 32b)
//         Word n : bit [31:0] - rem_9[n]
// 0x2e0 ~
// 0x2ff : Memory 'rem_10' (8 * 32b)
//         Word n : bit [31:0] - rem_10[n]
// 0x300 ~
// 0x31f : Memory 'rem_11' (8 * 32b)
//         Word n : bit [31:0] - rem_11[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_AP_CTRL        0x000
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_GIE            0x004
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_IER            0x008
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_ISR            0x00c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_DATA  0x320
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_0_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_0_CTRL  0x324
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_DATA  0x328
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_1_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_1_CTRL  0x32c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_DATA  0x330
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_2_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_2_CTRL  0x334
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_DATA  0x338
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_3_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_3_CTRL  0x33c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_DATA  0x340
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_4_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_4_CTRL  0x344
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_DATA  0x348
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_5_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_5_CTRL  0x34c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_DATA  0x350
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_6_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_6_CTRL  0x354
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_DATA  0x358
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_7_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_7_CTRL  0x35c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_8_DATA  0x360
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_8_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_8_CTRL  0x364
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_9_DATA  0x368
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_9_DATA  32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_9_CTRL  0x36c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_10_DATA 0x370
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_10_DATA 32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_10_CTRL 0x374
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_11_DATA 0x378
#define XESTIMATE_ISI_ENCODE_AXILITES_BITS_OUTPUT_11_DATA 32
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_OUTPUT_11_CTRL 0x37c
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_BASE  0x020
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_0_HIGH  0x03f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_0      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_0      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_BASE  0x040
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_1_HIGH  0x05f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_1      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_1      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_BASE  0x060
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_2_HIGH  0x07f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_2      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_2      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_BASE  0x080
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_3_HIGH  0x09f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_3      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_3      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_BASE  0x0a0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_4_HIGH  0x0bf
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_4      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_4      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_BASE  0x0c0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_5_HIGH  0x0df
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_5      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_5      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_BASE  0x0e0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_6_HIGH  0x0ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_6      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_6      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_BASE  0x100
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_7_HIGH  0x11f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_7      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_7      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_8_BASE  0x120
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_8_HIGH  0x13f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_8      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_8      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_9_BASE  0x140
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_9_HIGH  0x15f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_9      32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_9      8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_10_BASE 0x160
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_10_HIGH 0x17f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_10     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_10     8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_11_BASE 0x180
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_INPUTS_11_HIGH 0x19f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_INPUTS_11     32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_INPUTS_11     8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_BASE     0x1a0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_0_HIGH     0x1bf
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_0         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_0         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_BASE     0x1c0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_1_HIGH     0x1df
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_1         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_1         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_BASE     0x1e0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_2_HIGH     0x1ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_2         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_2         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_BASE     0x200
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_3_HIGH     0x21f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_3         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_3         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_BASE     0x220
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_4_HIGH     0x23f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_4         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_4         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_BASE     0x240
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_5_HIGH     0x25f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_5         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_5         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_BASE     0x260
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_6_HIGH     0x27f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_6         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_6         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_BASE     0x280
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_7_HIGH     0x29f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_7         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_7         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_8_BASE     0x2a0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_8_HIGH     0x2bf
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_8         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_8         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_9_BASE     0x2c0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_9_HIGH     0x2df
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_9         32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_9         8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_10_BASE    0x2e0
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_10_HIGH    0x2ff
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_10        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_10        8
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_11_BASE    0x300
#define XESTIMATE_ISI_ENCODE_AXILITES_ADDR_REM_11_HIGH    0x31f
#define XESTIMATE_ISI_ENCODE_AXILITES_WIDTH_REM_11        32
#define XESTIMATE_ISI_ENCODE_AXILITES_DEPTH_REM_11        8

