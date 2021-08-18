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
// 0x33f : Memory 'counts_0' (12 * 32b)
//         Word n : bit [31:0] - counts_0[n]
// 0x340 ~
// 0x37f : Memory 'counts_1' (12 * 32b)
//         Word n : bit [31:0] - counts_1[n]
// 0x380 ~
// 0x3bf : Memory 'outputs_0' (12 * 32b)
//         Word n : bit [31:0] - outputs_0[n]
// 0x3c0 ~
// 0x3ff : Memory 'outputs_1' (12 * 32b)
//         Word n : bit [31:0] - outputs_1[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_FR_2_AXILITES_ADDR_AP_CTRL        0x000
#define XESTIMATE_FR_2_AXILITES_ADDR_GIE            0x004
#define XESTIMATE_FR_2_AXILITES_ADDR_IER            0x008
#define XESTIMATE_FR_2_AXILITES_ADDR_ISR            0x00c
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_BASE  0x100
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_0_HIGH  0x1ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_0      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_0      48
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_BASE  0x200
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_1_HIGH  0x2ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS_1      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS_1      48
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_BASE  0x300
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_0_HIGH  0x33f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_0      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_0      12
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_BASE  0x340
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_1_HIGH  0x37f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS_1      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS_1      12
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_BASE 0x380
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_0_HIGH 0x3bf
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_0     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_0     12
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_BASE 0x3c0
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_1_HIGH 0x3ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS_1     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS_1     12

