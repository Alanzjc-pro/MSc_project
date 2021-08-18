// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x200 ~
// 0x3ff : Memory 'inputs' (96 * 32b)
//         Word n : bit [31:0] - inputs[n]
// 0x400 ~
// 0x47f : Memory 'counts' (24 * 32b)
//         Word n : bit [31:0] - counts[n]
// 0x480 ~
// 0x4ff : Memory 'outputs' (24 * 32b)
//         Word n : bit [31:0] - outputs[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_BASE  0x200
#define XESTIMATE_FR_2_AXILITES_ADDR_INPUTS_HIGH  0x3ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_INPUTS      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_INPUTS      96
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_BASE  0x400
#define XESTIMATE_FR_2_AXILITES_ADDR_COUNTS_HIGH  0x47f
#define XESTIMATE_FR_2_AXILITES_WIDTH_COUNTS      32
#define XESTIMATE_FR_2_AXILITES_DEPTH_COUNTS      24
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_BASE 0x480
#define XESTIMATE_FR_2_AXILITES_ADDR_OUTPUTS_HIGH 0x4ff
#define XESTIMATE_FR_2_AXILITES_WIDTH_OUTPUTS     32
#define XESTIMATE_FR_2_AXILITES_DEPTH_OUTPUTS     24

