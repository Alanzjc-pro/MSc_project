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
// 0x190 : Data signal of counts_0_i
//         bit 31~0 - counts_0_i[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of counts_0_o
//         bit 31~0 - counts_0_o[31:0] (Read)
// 0x19c : Control signal of counts_0_o
//         bit 0  - counts_0_o_ap_vld (Read/COR)
//         others - reserved
// 0x1a0 : Data signal of counts_1_i
//         bit 31~0 - counts_1_i[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of counts_1_o
//         bit 31~0 - counts_1_o[31:0] (Read)
// 0x1ac : Control signal of counts_1_o
//         bit 0  - counts_1_o_ap_vld (Read/COR)
//         others - reserved
// 0x1b0 : Data signal of counts_2_i
//         bit 31~0 - counts_2_i[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of counts_2_o
//         bit 31~0 - counts_2_o[31:0] (Read)
// 0x1bc : Control signal of counts_2_o
//         bit 0  - counts_2_o_ap_vld (Read/COR)
//         others - reserved
// 0x1c0 : Data signal of counts_3_i
//         bit 31~0 - counts_3_i[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of counts_3_o
//         bit 31~0 - counts_3_o[31:0] (Read)
// 0x1cc : Control signal of counts_3_o
//         bit 0  - counts_3_o_ap_vld (Read/COR)
//         others - reserved
// 0x1d0 : Data signal of counts_4_i
//         bit 31~0 - counts_4_i[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of counts_4_o
//         bit 31~0 - counts_4_o[31:0] (Read)
// 0x1dc : Control signal of counts_4_o
//         bit 0  - counts_4_o_ap_vld (Read/COR)
//         others - reserved
// 0x1e0 : Data signal of counts_5_i
//         bit 31~0 - counts_5_i[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of counts_5_o
//         bit 31~0 - counts_5_o[31:0] (Read)
// 0x1ec : Control signal of counts_5_o
//         bit 0  - counts_5_o_ap_vld (Read/COR)
//         others - reserved
// 0x1f0 : Data signal of counts_6_i
//         bit 31~0 - counts_6_i[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of counts_6_o
//         bit 31~0 - counts_6_o[31:0] (Read)
// 0x1fc : Control signal of counts_6_o
//         bit 0  - counts_6_o_ap_vld (Read/COR)
//         others - reserved
// 0x200 : Data signal of counts_7_i
//         bit 31~0 - counts_7_i[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of counts_7_o
//         bit 31~0 - counts_7_o[31:0] (Read)
// 0x20c : Control signal of counts_7_o
//         bit 0  - counts_7_o_ap_vld (Read/COR)
//         others - reserved
// 0x210 : Data signal of counts_8_i
//         bit 31~0 - counts_8_i[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of counts_8_o
//         bit 31~0 - counts_8_o[31:0] (Read)
// 0x21c : Control signal of counts_8_o
//         bit 0  - counts_8_o_ap_vld (Read/COR)
//         others - reserved
// 0x220 : Data signal of counts_9_i
//         bit 31~0 - counts_9_i[31:0] (Read/Write)
// 0x224 : reserved
// 0x228 : Data signal of counts_9_o
//         bit 31~0 - counts_9_o[31:0] (Read)
// 0x22c : Control signal of counts_9_o
//         bit 0  - counts_9_o_ap_vld (Read/COR)
//         others - reserved
// 0x230 : Data signal of counts_10_i
//         bit 31~0 - counts_10_i[31:0] (Read/Write)
// 0x234 : reserved
// 0x238 : Data signal of counts_10_o
//         bit 31~0 - counts_10_o[31:0] (Read)
// 0x23c : Control signal of counts_10_o
//         bit 0  - counts_10_o_ap_vld (Read/COR)
//         others - reserved
// 0x240 : Data signal of counts_11_i
//         bit 31~0 - counts_11_i[31:0] (Read/Write)
// 0x244 : reserved
// 0x248 : Data signal of counts_11_o
//         bit 31~0 - counts_11_o[31:0] (Read)
// 0x24c : Control signal of counts_11_o
//         bit 0  - counts_11_o_ap_vld (Read/COR)
//         others - reserved
// 0x250 : Data signal of counts_12_i
//         bit 31~0 - counts_12_i[31:0] (Read/Write)
// 0x254 : reserved
// 0x258 : Data signal of counts_12_o
//         bit 31~0 - counts_12_o[31:0] (Read)
// 0x25c : Control signal of counts_12_o
//         bit 0  - counts_12_o_ap_vld (Read/COR)
//         others - reserved
// 0x260 : Data signal of counts_13_i
//         bit 31~0 - counts_13_i[31:0] (Read/Write)
// 0x264 : reserved
// 0x268 : Data signal of counts_13_o
//         bit 31~0 - counts_13_o[31:0] (Read)
// 0x26c : Control signal of counts_13_o
//         bit 0  - counts_13_o_ap_vld (Read/COR)
//         others - reserved
// 0x270 : Data signal of counts_14_i
//         bit 31~0 - counts_14_i[31:0] (Read/Write)
// 0x274 : reserved
// 0x278 : Data signal of counts_14_o
//         bit 31~0 - counts_14_o[31:0] (Read)
// 0x27c : Control signal of counts_14_o
//         bit 0  - counts_14_o_ap_vld (Read/COR)
//         others - reserved
// 0x280 : Data signal of counts_15_i
//         bit 31~0 - counts_15_i[31:0] (Read/Write)
// 0x284 : reserved
// 0x288 : Data signal of counts_15_o
//         bit 31~0 - counts_15_o[31:0] (Read)
// 0x28c : Control signal of counts_15_o
//         bit 0  - counts_15_o_ap_vld (Read/COR)
//         others - reserved
// 0x290 : Data signal of counts_16_i
//         bit 31~0 - counts_16_i[31:0] (Read/Write)
// 0x294 : reserved
// 0x298 : Data signal of counts_16_o
//         bit 31~0 - counts_16_o[31:0] (Read)
// 0x29c : Control signal of counts_16_o
//         bit 0  - counts_16_o_ap_vld (Read/COR)
//         others - reserved
// 0x2a0 : Data signal of counts_17_i
//         bit 31~0 - counts_17_i[31:0] (Read/Write)
// 0x2a4 : reserved
// 0x2a8 : Data signal of counts_17_o
//         bit 31~0 - counts_17_o[31:0] (Read)
// 0x2ac : Control signal of counts_17_o
//         bit 0  - counts_17_o_ap_vld (Read/COR)
//         others - reserved
// 0x2b0 : Data signal of counts_18_i
//         bit 31~0 - counts_18_i[31:0] (Read/Write)
// 0x2b4 : reserved
// 0x2b8 : Data signal of counts_18_o
//         bit 31~0 - counts_18_o[31:0] (Read)
// 0x2bc : Control signal of counts_18_o
//         bit 0  - counts_18_o_ap_vld (Read/COR)
//         others - reserved
// 0x2c0 : Data signal of counts_19_i
//         bit 31~0 - counts_19_i[31:0] (Read/Write)
// 0x2c4 : reserved
// 0x2c8 : Data signal of counts_19_o
//         bit 31~0 - counts_19_o[31:0] (Read)
// 0x2cc : Control signal of counts_19_o
//         bit 0  - counts_19_o_ap_vld (Read/COR)
//         others - reserved
// 0x2d0 : Data signal of counts_20_i
//         bit 31~0 - counts_20_i[31:0] (Read/Write)
// 0x2d4 : reserved
// 0x2d8 : Data signal of counts_20_o
//         bit 31~0 - counts_20_o[31:0] (Read)
// 0x2dc : Control signal of counts_20_o
//         bit 0  - counts_20_o_ap_vld (Read/COR)
//         others - reserved
// 0x2e0 : Data signal of counts_21_i
//         bit 31~0 - counts_21_i[31:0] (Read/Write)
// 0x2e4 : reserved
// 0x2e8 : Data signal of counts_21_o
//         bit 31~0 - counts_21_o[31:0] (Read)
// 0x2ec : Control signal of counts_21_o
//         bit 0  - counts_21_o_ap_vld (Read/COR)
//         others - reserved
// 0x2f0 : Data signal of counts_22_i
//         bit 31~0 - counts_22_i[31:0] (Read/Write)
// 0x2f4 : reserved
// 0x2f8 : Data signal of counts_22_o
//         bit 31~0 - counts_22_o[31:0] (Read)
// 0x2fc : Control signal of counts_22_o
//         bit 0  - counts_22_o_ap_vld (Read/COR)
//         others - reserved
// 0x300 : Data signal of counts_23_i
//         bit 31~0 - counts_23_i[31:0] (Read/Write)
// 0x304 : reserved
// 0x308 : Data signal of counts_23_o
//         bit 31~0 - counts_23_o[31:0] (Read)
// 0x30c : Control signal of counts_23_o
//         bit 0  - counts_23_o_ap_vld (Read/COR)
//         others - reserved
// 0x310 : Data signal of outputs_0
//         bit 31~0 - outputs_0[31:0] (Read)
// 0x314 : Control signal of outputs_0
//         bit 0  - outputs_0_ap_vld (Read/COR)
//         others - reserved
// 0x318 : Data signal of outputs_1
//         bit 31~0 - outputs_1[31:0] (Read)
// 0x31c : Control signal of outputs_1
//         bit 0  - outputs_1_ap_vld (Read/COR)
//         others - reserved
// 0x320 : Data signal of outputs_2
//         bit 31~0 - outputs_2[31:0] (Read)
// 0x324 : Control signal of outputs_2
//         bit 0  - outputs_2_ap_vld (Read/COR)
//         others - reserved
// 0x328 : Data signal of outputs_3
//         bit 31~0 - outputs_3[31:0] (Read)
// 0x32c : Control signal of outputs_3
//         bit 0  - outputs_3_ap_vld (Read/COR)
//         others - reserved
// 0x330 : Data signal of outputs_4
//         bit 31~0 - outputs_4[31:0] (Read)
// 0x334 : Control signal of outputs_4
//         bit 0  - outputs_4_ap_vld (Read/COR)
//         others - reserved
// 0x338 : Data signal of outputs_5
//         bit 31~0 - outputs_5[31:0] (Read)
// 0x33c : Control signal of outputs_5
//         bit 0  - outputs_5_ap_vld (Read/COR)
//         others - reserved
// 0x340 : Data signal of outputs_6
//         bit 31~0 - outputs_6[31:0] (Read)
// 0x344 : Control signal of outputs_6
//         bit 0  - outputs_6_ap_vld (Read/COR)
//         others - reserved
// 0x348 : Data signal of outputs_7
//         bit 31~0 - outputs_7[31:0] (Read)
// 0x34c : Control signal of outputs_7
//         bit 0  - outputs_7_ap_vld (Read/COR)
//         others - reserved
// 0x350 : Data signal of outputs_8
//         bit 31~0 - outputs_8[31:0] (Read)
// 0x354 : Control signal of outputs_8
//         bit 0  - outputs_8_ap_vld (Read/COR)
//         others - reserved
// 0x358 : Data signal of outputs_9
//         bit 31~0 - outputs_9[31:0] (Read)
// 0x35c : Control signal of outputs_9
//         bit 0  - outputs_9_ap_vld (Read/COR)
//         others - reserved
// 0x360 : Data signal of outputs_10
//         bit 31~0 - outputs_10[31:0] (Read)
// 0x364 : Control signal of outputs_10
//         bit 0  - outputs_10_ap_vld (Read/COR)
//         others - reserved
// 0x368 : Data signal of outputs_11
//         bit 31~0 - outputs_11[31:0] (Read)
// 0x36c : Control signal of outputs_11
//         bit 0  - outputs_11_ap_vld (Read/COR)
//         others - reserved
// 0x370 : Data signal of outputs_12
//         bit 31~0 - outputs_12[31:0] (Read)
// 0x374 : Control signal of outputs_12
//         bit 0  - outputs_12_ap_vld (Read/COR)
//         others - reserved
// 0x378 : Data signal of outputs_13
//         bit 31~0 - outputs_13[31:0] (Read)
// 0x37c : Control signal of outputs_13
//         bit 0  - outputs_13_ap_vld (Read/COR)
//         others - reserved
// 0x380 : Data signal of outputs_14
//         bit 31~0 - outputs_14[31:0] (Read)
// 0x384 : Control signal of outputs_14
//         bit 0  - outputs_14_ap_vld (Read/COR)
//         others - reserved
// 0x388 : Data signal of outputs_15
//         bit 31~0 - outputs_15[31:0] (Read)
// 0x38c : Control signal of outputs_15
//         bit 0  - outputs_15_ap_vld (Read/COR)
//         others - reserved
// 0x390 : Data signal of outputs_16
//         bit 31~0 - outputs_16[31:0] (Read)
// 0x394 : Control signal of outputs_16
//         bit 0  - outputs_16_ap_vld (Read/COR)
//         others - reserved
// 0x398 : Data signal of outputs_17
//         bit 31~0 - outputs_17[31:0] (Read)
// 0x39c : Control signal of outputs_17
//         bit 0  - outputs_17_ap_vld (Read/COR)
//         others - reserved
// 0x3a0 : Data signal of outputs_18
//         bit 31~0 - outputs_18[31:0] (Read)
// 0x3a4 : Control signal of outputs_18
//         bit 0  - outputs_18_ap_vld (Read/COR)
//         others - reserved
// 0x3a8 : Data signal of outputs_19
//         bit 31~0 - outputs_19[31:0] (Read)
// 0x3ac : Control signal of outputs_19
//         bit 0  - outputs_19_ap_vld (Read/COR)
//         others - reserved
// 0x3b0 : Data signal of outputs_20
//         bit 31~0 - outputs_20[31:0] (Read)
// 0x3b4 : Control signal of outputs_20
//         bit 0  - outputs_20_ap_vld (Read/COR)
//         others - reserved
// 0x3b8 : Data signal of outputs_21
//         bit 31~0 - outputs_21[31:0] (Read)
// 0x3bc : Control signal of outputs_21
//         bit 0  - outputs_21_ap_vld (Read/COR)
//         others - reserved
// 0x3c0 : Data signal of outputs_22
//         bit 31~0 - outputs_22[31:0] (Read)
// 0x3c4 : Control signal of outputs_22
//         bit 0  - outputs_22_ap_vld (Read/COR)
//         others - reserved
// 0x3c8 : Data signal of outputs_23
//         bit 31~0 - outputs_23[31:0] (Read)
// 0x3cc : Control signal of outputs_23
//         bit 0  - outputs_23_ap_vld (Read/COR)
//         others - reserved
// 0x010 ~
// 0x01f : Memory 'inputs_0' (4 * 32b)
//         Word n : bit [31:0] - inputs_0[n]
// 0x020 ~
// 0x02f : Memory 'inputs_1' (4 * 32b)
//         Word n : bit [31:0] - inputs_1[n]
// 0x030 ~
// 0x03f : Memory 'inputs_2' (4 * 32b)
//         Word n : bit [31:0] - inputs_2[n]
// 0x040 ~
// 0x04f : Memory 'inputs_3' (4 * 32b)
//         Word n : bit [31:0] - inputs_3[n]
// 0x050 ~
// 0x05f : Memory 'inputs_4' (4 * 32b)
//         Word n : bit [31:0] - inputs_4[n]
// 0x060 ~
// 0x06f : Memory 'inputs_5' (4 * 32b)
//         Word n : bit [31:0] - inputs_5[n]
// 0x070 ~
// 0x07f : Memory 'inputs_6' (4 * 32b)
//         Word n : bit [31:0] - inputs_6[n]
// 0x080 ~
// 0x08f : Memory 'inputs_7' (4 * 32b)
//         Word n : bit [31:0] - inputs_7[n]
// 0x090 ~
// 0x09f : Memory 'inputs_8' (4 * 32b)
//         Word n : bit [31:0] - inputs_8[n]
// 0x0a0 ~
// 0x0af : Memory 'inputs_9' (4 * 32b)
//         Word n : bit [31:0] - inputs_9[n]
// 0x0b0 ~
// 0x0bf : Memory 'inputs_10' (4 * 32b)
//         Word n : bit [31:0] - inputs_10[n]
// 0x0c0 ~
// 0x0cf : Memory 'inputs_11' (4 * 32b)
//         Word n : bit [31:0] - inputs_11[n]
// 0x0d0 ~
// 0x0df : Memory 'inputs_12' (4 * 32b)
//         Word n : bit [31:0] - inputs_12[n]
// 0x0e0 ~
// 0x0ef : Memory 'inputs_13' (4 * 32b)
//         Word n : bit [31:0] - inputs_13[n]
// 0x0f0 ~
// 0x0ff : Memory 'inputs_14' (4 * 32b)
//         Word n : bit [31:0] - inputs_14[n]
// 0x100 ~
// 0x10f : Memory 'inputs_15' (4 * 32b)
//         Word n : bit [31:0] - inputs_15[n]
// 0x110 ~
// 0x11f : Memory 'inputs_16' (4 * 32b)
//         Word n : bit [31:0] - inputs_16[n]
// 0x120 ~
// 0x12f : Memory 'inputs_17' (4 * 32b)
//         Word n : bit [31:0] - inputs_17[n]
// 0x130 ~
// 0x13f : Memory 'inputs_18' (4 * 32b)
//         Word n : bit [31:0] - inputs_18[n]
// 0x140 ~
// 0x14f : Memory 'inputs_19' (4 * 32b)
//         Word n : bit [31:0] - inputs_19[n]
// 0x150 ~
// 0x15f : Memory 'inputs_20' (4 * 32b)
//         Word n : bit [31:0] - inputs_20[n]
// 0x160 ~
// 0x16f : Memory 'inputs_21' (4 * 32b)
//         Word n : bit [31:0] - inputs_21[n]
// 0x170 ~
// 0x17f : Memory 'inputs_22' (4 * 32b)
//         Word n : bit [31:0] - inputs_22[n]
// 0x180 ~
// 0x18f : Memory 'inputs_23' (4 * 32b)
//         Word n : bit [31:0] - inputs_23[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL          0x000
#define XESTIMATE_FR_2_AXILITES_ADDR_GIE              0x004
#define XESTIMATE_FR_2_AXILITES_ADDR_IER              0x008
#define XESTIMATE_FR_2_AXILITES_ADDR_ISR              0x00c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_I_DATA  0x190
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_0_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_O_DATA  0x198
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_0_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_O_CTRL  0x19c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_I_DATA  0x1a0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_1_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_O_DATA  0x1a8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_1_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_O_CTRL  0x1ac
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_I_DATA  0x1b0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_2_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_O_DATA  0x1b8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_2_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_O_CTRL  0x1bc
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_I_DATA  0x1c0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_3_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_O_DATA  0x1c8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_3_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_O_CTRL  0x1cc
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_I_DATA  0x1d0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_4_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_O_DATA  0x1d8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_4_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_4_O_CTRL  0x1dc
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_I_DATA  0x1e0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_5_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_O_DATA  0x1e8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_5_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_5_O_CTRL  0x1ec
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_I_DATA  0x1f0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_6_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_O_DATA  0x1f8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_6_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_6_O_CTRL  0x1fc
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_I_DATA  0x200
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_7_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_O_DATA  0x208
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_7_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_7_O_CTRL  0x20c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_I_DATA  0x210
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_8_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_O_DATA  0x218
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_8_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_8_O_CTRL  0x21c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_I_DATA  0x220
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_9_I_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_O_DATA  0x228
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_9_O_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_9_O_CTRL  0x22c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_I_DATA 0x230
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_10_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_O_DATA 0x238
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_10_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_10_O_CTRL 0x23c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_I_DATA 0x240
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_11_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_O_DATA 0x248
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_11_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_11_O_CTRL 0x24c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_12_I_DATA 0x250
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_12_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_12_O_DATA 0x258
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_12_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_12_O_CTRL 0x25c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_13_I_DATA 0x260
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_13_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_13_O_DATA 0x268
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_13_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_13_O_CTRL 0x26c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_14_I_DATA 0x270
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_14_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_14_O_DATA 0x278
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_14_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_14_O_CTRL 0x27c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_15_I_DATA 0x280
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_15_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_15_O_DATA 0x288
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_15_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_15_O_CTRL 0x28c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_16_I_DATA 0x290
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_16_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_16_O_DATA 0x298
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_16_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_16_O_CTRL 0x29c
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_17_I_DATA 0x2a0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_17_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_17_O_DATA 0x2a8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_17_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_17_O_CTRL 0x2ac
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_18_I_DATA 0x2b0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_18_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_18_O_DATA 0x2b8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_18_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_18_O_CTRL 0x2bc
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_19_I_DATA 0x2c0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_19_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_19_O_DATA 0x2c8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_19_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_19_O_CTRL 0x2cc
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_20_I_DATA 0x2d0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_20_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_20_O_DATA 0x2d8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_20_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_20_O_CTRL 0x2dc
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_21_I_DATA 0x2e0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_21_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_21_O_DATA 0x2e8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_21_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_21_O_CTRL 0x2ec
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_22_I_DATA 0x2f0
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_22_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_22_O_DATA 0x2f8
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_22_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_22_O_CTRL 0x2fc
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_23_I_DATA 0x300
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_23_I_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_23_O_DATA 0x308
#define XESTIMATE_FR_2_AXILITES_BITS_COUNTS_23_O_DATA 32
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_23_O_CTRL 0x30c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_DATA   0x310
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_0_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_CTRL   0x314
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_DATA   0x318
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_1_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_CTRL   0x31c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_DATA   0x320
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_2_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_CTRL   0x324
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_DATA   0x328
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_3_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_CTRL   0x32c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_DATA   0x330
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_4_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_4_CTRL   0x334
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_DATA   0x338
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_5_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_5_CTRL   0x33c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_DATA   0x340
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_6_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_6_CTRL   0x344
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_DATA   0x348
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_7_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_7_CTRL   0x34c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_8_DATA   0x350
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_8_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_8_CTRL   0x354
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_9_DATA   0x358
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_9_DATA   32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_9_CTRL   0x35c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_10_DATA  0x360
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_10_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_10_CTRL  0x364
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_11_DATA  0x368
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_11_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_11_CTRL  0x36c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_12_DATA  0x370
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_12_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_12_CTRL  0x374
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_13_DATA  0x378
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_13_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_13_CTRL  0x37c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_14_DATA  0x380
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_14_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_14_CTRL  0x384
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_15_DATA  0x388
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_15_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_15_CTRL  0x38c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_16_DATA  0x390
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_16_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_16_CTRL  0x394
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_17_DATA  0x398
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_17_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_17_CTRL  0x39c
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_18_DATA  0x3a0
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_18_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_18_CTRL  0x3a4
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_19_DATA  0x3a8
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_19_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_19_CTRL  0x3ac
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_20_DATA  0x3b0
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_20_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_20_CTRL  0x3b4
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_21_DATA  0x3b8
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_21_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_21_CTRL  0x3bc
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_22_DATA  0x3c0
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_22_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_22_CTRL  0x3c4
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_23_DATA  0x3c8
#define XESTIMATE_FR_2_AXILITES_BITS_OUTPUTS_23_DATA  32
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_23_CTRL  0x3cc
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE    0x010
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH    0x01f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_0        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_0        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE    0x020
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH    0x02f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_1        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_1        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE    0x030
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH    0x03f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_2        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_2        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE    0x040
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH    0x04f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_3        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_3        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_BASE    0x050
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_4_HIGH    0x05f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_4        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_4        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_BASE    0x060
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_5_HIGH    0x06f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_5        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_5        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_BASE    0x070
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_6_HIGH    0x07f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_6        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_6        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_BASE    0x080
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_7_HIGH    0x08f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_7        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_7        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_BASE    0x090
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_8_HIGH    0x09f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_8        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_8        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_BASE    0x0a0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_9_HIGH    0x0af
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_9        32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_9        4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_BASE   0x0b0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_10_HIGH   0x0bf
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_10       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_10       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_BASE   0x0c0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_11_HIGH   0x0cf
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_11       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_11       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_BASE   0x0d0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_12_HIGH   0x0df
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_12       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_12       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_BASE   0x0e0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_13_HIGH   0x0ef
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_13       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_13       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_BASE   0x0f0
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_14_HIGH   0x0ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_14       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_14       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_BASE   0x100
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_15_HIGH   0x10f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_15       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_15       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_BASE   0x110
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_16_HIGH   0x11f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_16       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_16       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_BASE   0x120
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_17_HIGH   0x12f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_17       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_17       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_BASE   0x130
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_18_HIGH   0x13f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_18       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_18       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_BASE   0x140
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_19_HIGH   0x14f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_19       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_19       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_BASE   0x150
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_20_HIGH   0x15f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_20       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_20       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_BASE   0x160
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_21_HIGH   0x16f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_21       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_21       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_BASE   0x170
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_22_HIGH   0x17f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_22       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_22       4
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_BASE   0x180
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_23_HIGH   0x18f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_23       32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_23       4

