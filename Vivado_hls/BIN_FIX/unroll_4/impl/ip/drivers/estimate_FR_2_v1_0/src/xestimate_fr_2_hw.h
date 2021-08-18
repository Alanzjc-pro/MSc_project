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
// 0x29f : Memory 'counts_0' (6 * 32b)
//         Word n : bit [31:0] - counts_0[n]
// 0x2a0 ~
// 0x2bf : Memory 'counts_1' (6 * 32b)
//         Word n : bit [31:0] - counts_1[n]
// 0x2c0 ~
// 0x2df : Memory 'counts_2' (6 * 32b)
//         Word n : bit [31:0] - counts_2[n]
// 0x2e0 ~
// 0x2ff : Memory 'counts_3' (6 * 32b)
//         Word n : bit [31:0] - counts_3[n]
// 0x300 ~
// 0x31f : Memory 'outputs_0' (6 * 32b)
//         Word n : bit [31:0] - outputs_0[n]
// 0x320 ~
// 0x33f : Memory 'outputs_1' (6 * 32b)
//         Word n : bit [31:0] - outputs_1[n]
// 0x340 ~
// 0x35f : Memory 'outputs_2' (6 * 32b)
//         Word n : bit [31:0] - outputs_2[n]
// 0x360 ~
// 0x37f : Memory 'outputs_3' (6 * 32b)
//         Word n : bit [31:0] - outputs_3[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL        0x000
#define XESTIMATE_FR_2_AXILITES_ADDR_GIE            0x004
#define XESTIMATE_FR_2_AXILITES_ADDR_IER            0x008
#define XESTIMATE_FR_2_AXILITES_ADDR_ISR            0x00c
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE  0x080
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH  0x0ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_0      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_0      24
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE  0x100
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH  0x17f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_1      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_1      24
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_BASE  0x180
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_2_HIGH  0x1ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_2      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_2      24
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_BASE  0x200
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_3_HIGH  0x27f
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_3      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_3      24
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE  0x280
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH  0x29f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_0      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_0      6
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE  0x2a0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH  0x2bf
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_1      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_1      6
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_BASE  0x2c0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_2_HIGH  0x2df
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_2      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_2      6
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_BASE  0x2e0
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_3_HIGH  0x2ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_3      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_3      6
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE 0x300
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH 0x31f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_0     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_0     6
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE 0x320
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH 0x33f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_1     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_1     6
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_BASE 0x340
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_2_HIGH 0x35f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_2     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_2     6
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_BASE 0x360
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_3_HIGH 0x37f
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_3     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_3     6

