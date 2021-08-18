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
// 0x400 : Data signal of update
//         bit 31~0 - update[31:0] (Read/Write)
// 0x404 : reserved
// 0x200 ~
// 0x3ff : Memory 'spks' (96 * 32b)
//         Word n : bit [31:0] - spks[n]
// 0x600 ~
// 0x7ff : Memory 'counts' (96 * 32b)
//         Word n : bit [31:0] - counts[n]
// 0x800 ~
// 0x9ff : Memory 'outputs' (96 * 32b)
//         Word n : bit [31:0] - outputs[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_FR_AXILITES_ADDR_AP_CTRL      0x000
#define XESTIMATE_FR_AXILITES_ADDR_GIE          0x004
#define XESTIMATE_FR_AXILITES_ADDR_IER          0x008
#define XESTIMATE_FR_AXILITES_ADDR_ISR          0x00c
#define XESTIMATE_FR_AXILITES_ADDR_UPDATE_DATA  0x400
#define XESTIMATE_FR_AXILITES_BITS_UPDATE_DATA  32
#define XESTIMATE_FR_AXILITES_ADDR_SPKS_BASE    0x200
#define XESTIMATE_FR_AXILITES_ADDR_SPKS_HIGH    0x3ff
#define XESTIMATE_FR_AXILITES_WIDTH_SPKS        32
#define XESTIMATE_FR_AXILITES_DEPTH_SPKS        96
#define XESTIMATE_FR_AXILITES_ADDR_COUNTS_BASE  0x600
#define XESTIMATE_FR_AXILITES_ADDR_COUNTS_HIGH  0x7ff
#define XESTIMATE_FR_AXILITES_WIDTH_COUNTS      32
#define XESTIMATE_FR_AXILITES_DEPTH_COUNTS      96
#define XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_BASE 0x800
#define XESTIMATE_FR_AXILITES_ADDR_OUTPUTS_HIGH 0x9ff
#define XESTIMATE_FR_AXILITES_WIDTH_OUTPUTS     32
#define XESTIMATE_FR_AXILITES_DEPTH_OUTPUTS     96

