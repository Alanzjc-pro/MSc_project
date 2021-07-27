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
// 0x200 ~
// 0x3ff : Memory 'inputs' (96 * 32b)
//         Word n : bit [31:0] - inputs[n]
// 0x400 ~
// 0x5ff : Memory 'rem_r' (96 * 32b)
//         Word n : bit [31:0] - rem_r[n]
// 0x600 ~
// 0x67f : Memory 'output_r' (32 * 32b)
//         Word n : bit [31:0] - output_r[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_ISI_AXILITES_ADDR_AP_CTRL       0x000
#define XESTIMATE_ISI_AXILITES_ADDR_GIE           0x004
#define XESTIMATE_ISI_AXILITES_ADDR_IER           0x008
#define XESTIMATE_ISI_AXILITES_ADDR_ISR           0x00c
#define XESTIMATE_ISI_AXILITES_ADDR_INPUTS_BASE   0x200
#define XESTIMATE_ISI_AXILITES_ADDR_INPUTS_HIGH   0x3ff
#define XESTIMATE_ISI_AXILITES_WIDTH_INPUTS       32
#define XESTIMATE_ISI_AXILITES_DEPTH_INPUTS       96
#define XESTIMATE_ISI_AXILITES_ADDR_REM_R_BASE    0x400
#define XESTIMATE_ISI_AXILITES_ADDR_REM_R_HIGH    0x5ff
#define XESTIMATE_ISI_AXILITES_WIDTH_REM_R        32
#define XESTIMATE_ISI_AXILITES_DEPTH_REM_R        96
#define XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_BASE 0x600
#define XESTIMATE_ISI_AXILITES_ADDR_OUTPUT_R_HIGH 0x67f
#define XESTIMATE_ISI_AXILITES_WIDTH_OUTPUT_R     32
#define XESTIMATE_ISI_AXILITES_DEPTH_OUTPUT_R     32

