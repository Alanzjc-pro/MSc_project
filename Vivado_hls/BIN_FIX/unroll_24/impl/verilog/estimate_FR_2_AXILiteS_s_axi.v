// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module estimate_FR_2_AXILiteS_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 10,
    C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                          ACLK,
    input  wire                          ARESET,
    input  wire                          ACLK_EN,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] AWADDR,
    input  wire                          AWVALID,
    output wire                          AWREADY,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] WDATA,
    input  wire [C_S_AXI_DATA_WIDTH/8-1:0] WSTRB,
    input  wire                          WVALID,
    output wire                          WREADY,
    output wire [1:0]                    BRESP,
    output wire                          BVALID,
    input  wire                          BREADY,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] ARADDR,
    input  wire                          ARVALID,
    output wire                          ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1:0] RDATA,
    output wire [1:0]                    RRESP,
    output wire                          RVALID,
    input  wire                          RREADY,
    output wire                          interrupt,
    output wire                          ap_start,
    input  wire                          ap_done,
    input  wire                          ap_ready,
    input  wire                          ap_idle,
    input  wire [1:0]                    inputs_0_address0,
    input  wire                          inputs_0_ce0,
    output wire [31:0]                   inputs_0_q0,
    input  wire [1:0]                    inputs_1_address0,
    input  wire                          inputs_1_ce0,
    output wire [31:0]                   inputs_1_q0,
    input  wire [1:0]                    inputs_2_address0,
    input  wire                          inputs_2_ce0,
    output wire [31:0]                   inputs_2_q0,
    input  wire [1:0]                    inputs_3_address0,
    input  wire                          inputs_3_ce0,
    output wire [31:0]                   inputs_3_q0,
    input  wire [1:0]                    inputs_4_address0,
    input  wire                          inputs_4_ce0,
    output wire [31:0]                   inputs_4_q0,
    input  wire [1:0]                    inputs_5_address0,
    input  wire                          inputs_5_ce0,
    output wire [31:0]                   inputs_5_q0,
    input  wire [1:0]                    inputs_6_address0,
    input  wire                          inputs_6_ce0,
    output wire [31:0]                   inputs_6_q0,
    input  wire [1:0]                    inputs_7_address0,
    input  wire                          inputs_7_ce0,
    output wire [31:0]                   inputs_7_q0,
    input  wire [1:0]                    inputs_8_address0,
    input  wire                          inputs_8_ce0,
    output wire [31:0]                   inputs_8_q0,
    input  wire [1:0]                    inputs_9_address0,
    input  wire                          inputs_9_ce0,
    output wire [31:0]                   inputs_9_q0,
    input  wire [1:0]                    inputs_10_address0,
    input  wire                          inputs_10_ce0,
    output wire [31:0]                   inputs_10_q0,
    input  wire [1:0]                    inputs_11_address0,
    input  wire                          inputs_11_ce0,
    output wire [31:0]                   inputs_11_q0,
    input  wire [1:0]                    inputs_12_address0,
    input  wire                          inputs_12_ce0,
    output wire [31:0]                   inputs_12_q0,
    input  wire [1:0]                    inputs_13_address0,
    input  wire                          inputs_13_ce0,
    output wire [31:0]                   inputs_13_q0,
    input  wire [1:0]                    inputs_14_address0,
    input  wire                          inputs_14_ce0,
    output wire [31:0]                   inputs_14_q0,
    input  wire [1:0]                    inputs_15_address0,
    input  wire                          inputs_15_ce0,
    output wire [31:0]                   inputs_15_q0,
    input  wire [1:0]                    inputs_16_address0,
    input  wire                          inputs_16_ce0,
    output wire [31:0]                   inputs_16_q0,
    input  wire [1:0]                    inputs_17_address0,
    input  wire                          inputs_17_ce0,
    output wire [31:0]                   inputs_17_q0,
    input  wire [1:0]                    inputs_18_address0,
    input  wire                          inputs_18_ce0,
    output wire [31:0]                   inputs_18_q0,
    input  wire [1:0]                    inputs_19_address0,
    input  wire                          inputs_19_ce0,
    output wire [31:0]                   inputs_19_q0,
    input  wire [1:0]                    inputs_20_address0,
    input  wire                          inputs_20_ce0,
    output wire [31:0]                   inputs_20_q0,
    input  wire [1:0]                    inputs_21_address0,
    input  wire                          inputs_21_ce0,
    output wire [31:0]                   inputs_21_q0,
    input  wire [1:0]                    inputs_22_address0,
    input  wire                          inputs_22_ce0,
    output wire [31:0]                   inputs_22_q0,
    input  wire [1:0]                    inputs_23_address0,
    input  wire                          inputs_23_ce0,
    output wire [31:0]                   inputs_23_q0,
    output wire [31:0]                   counts_0_i,
    input  wire [31:0]                   counts_0_o,
    input  wire                          counts_0_o_ap_vld,
    output wire [31:0]                   counts_1_i,
    input  wire [31:0]                   counts_1_o,
    input  wire                          counts_1_o_ap_vld,
    output wire [31:0]                   counts_2_i,
    input  wire [31:0]                   counts_2_o,
    input  wire                          counts_2_o_ap_vld,
    output wire [31:0]                   counts_3_i,
    input  wire [31:0]                   counts_3_o,
    input  wire                          counts_3_o_ap_vld,
    output wire [31:0]                   counts_4_i,
    input  wire [31:0]                   counts_4_o,
    input  wire                          counts_4_o_ap_vld,
    output wire [31:0]                   counts_5_i,
    input  wire [31:0]                   counts_5_o,
    input  wire                          counts_5_o_ap_vld,
    output wire [31:0]                   counts_6_i,
    input  wire [31:0]                   counts_6_o,
    input  wire                          counts_6_o_ap_vld,
    output wire [31:0]                   counts_7_i,
    input  wire [31:0]                   counts_7_o,
    input  wire                          counts_7_o_ap_vld,
    output wire [31:0]                   counts_8_i,
    input  wire [31:0]                   counts_8_o,
    input  wire                          counts_8_o_ap_vld,
    output wire [31:0]                   counts_9_i,
    input  wire [31:0]                   counts_9_o,
    input  wire                          counts_9_o_ap_vld,
    output wire [31:0]                   counts_10_i,
    input  wire [31:0]                   counts_10_o,
    input  wire                          counts_10_o_ap_vld,
    output wire [31:0]                   counts_11_i,
    input  wire [31:0]                   counts_11_o,
    input  wire                          counts_11_o_ap_vld,
    output wire [31:0]                   counts_12_i,
    input  wire [31:0]                   counts_12_o,
    input  wire                          counts_12_o_ap_vld,
    output wire [31:0]                   counts_13_i,
    input  wire [31:0]                   counts_13_o,
    input  wire                          counts_13_o_ap_vld,
    output wire [31:0]                   counts_14_i,
    input  wire [31:0]                   counts_14_o,
    input  wire                          counts_14_o_ap_vld,
    output wire [31:0]                   counts_15_i,
    input  wire [31:0]                   counts_15_o,
    input  wire                          counts_15_o_ap_vld,
    output wire [31:0]                   counts_16_i,
    input  wire [31:0]                   counts_16_o,
    input  wire                          counts_16_o_ap_vld,
    output wire [31:0]                   counts_17_i,
    input  wire [31:0]                   counts_17_o,
    input  wire                          counts_17_o_ap_vld,
    output wire [31:0]                   counts_18_i,
    input  wire [31:0]                   counts_18_o,
    input  wire                          counts_18_o_ap_vld,
    output wire [31:0]                   counts_19_i,
    input  wire [31:0]                   counts_19_o,
    input  wire                          counts_19_o_ap_vld,
    output wire [31:0]                   counts_20_i,
    input  wire [31:0]                   counts_20_o,
    input  wire                          counts_20_o_ap_vld,
    output wire [31:0]                   counts_21_i,
    input  wire [31:0]                   counts_21_o,
    input  wire                          counts_21_o_ap_vld,
    output wire [31:0]                   counts_22_i,
    input  wire [31:0]                   counts_22_o,
    input  wire                          counts_22_o_ap_vld,
    output wire [31:0]                   counts_23_i,
    input  wire [31:0]                   counts_23_o,
    input  wire                          counts_23_o_ap_vld,
    input  wire [31:0]                   outputs_0,
    input  wire                          outputs_0_ap_vld,
    input  wire [31:0]                   outputs_1,
    input  wire                          outputs_1_ap_vld,
    input  wire [31:0]                   outputs_2,
    input  wire                          outputs_2_ap_vld,
    input  wire [31:0]                   outputs_3,
    input  wire                          outputs_3_ap_vld,
    input  wire [31:0]                   outputs_4,
    input  wire                          outputs_4_ap_vld,
    input  wire [31:0]                   outputs_5,
    input  wire                          outputs_5_ap_vld,
    input  wire [31:0]                   outputs_6,
    input  wire                          outputs_6_ap_vld,
    input  wire [31:0]                   outputs_7,
    input  wire                          outputs_7_ap_vld,
    input  wire [31:0]                   outputs_8,
    input  wire                          outputs_8_ap_vld,
    input  wire [31:0]                   outputs_9,
    input  wire                          outputs_9_ap_vld,
    input  wire [31:0]                   outputs_10,
    input  wire                          outputs_10_ap_vld,
    input  wire [31:0]                   outputs_11,
    input  wire                          outputs_11_ap_vld,
    input  wire [31:0]                   outputs_12,
    input  wire                          outputs_12_ap_vld,
    input  wire [31:0]                   outputs_13,
    input  wire                          outputs_13_ap_vld,
    input  wire [31:0]                   outputs_14,
    input  wire                          outputs_14_ap_vld,
    input  wire [31:0]                   outputs_15,
    input  wire                          outputs_15_ap_vld,
    input  wire [31:0]                   outputs_16,
    input  wire                          outputs_16_ap_vld,
    input  wire [31:0]                   outputs_17,
    input  wire                          outputs_17_ap_vld,
    input  wire [31:0]                   outputs_18,
    input  wire                          outputs_18_ap_vld,
    input  wire [31:0]                   outputs_19,
    input  wire                          outputs_19_ap_vld,
    input  wire [31:0]                   outputs_20,
    input  wire                          outputs_20_ap_vld,
    input  wire [31:0]                   outputs_21,
    input  wire                          outputs_21_ap_vld,
    input  wire [31:0]                   outputs_22,
    input  wire                          outputs_22_ap_vld,
    input  wire [31:0]                   outputs_23,
    input  wire                          outputs_23_ap_vld
);
//------------------------Address Info-------------------
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

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL            = 10'h000,
    ADDR_GIE                = 10'h004,
    ADDR_IER                = 10'h008,
    ADDR_ISR                = 10'h00c,
    ADDR_COUNTS_0_I_DATA_0  = 10'h190,
    ADDR_COUNTS_0_I_CTRL    = 10'h194,
    ADDR_COUNTS_0_O_DATA_0  = 10'h198,
    ADDR_COUNTS_0_O_CTRL    = 10'h19c,
    ADDR_COUNTS_1_I_DATA_0  = 10'h1a0,
    ADDR_COUNTS_1_I_CTRL    = 10'h1a4,
    ADDR_COUNTS_1_O_DATA_0  = 10'h1a8,
    ADDR_COUNTS_1_O_CTRL    = 10'h1ac,
    ADDR_COUNTS_2_I_DATA_0  = 10'h1b0,
    ADDR_COUNTS_2_I_CTRL    = 10'h1b4,
    ADDR_COUNTS_2_O_DATA_0  = 10'h1b8,
    ADDR_COUNTS_2_O_CTRL    = 10'h1bc,
    ADDR_COUNTS_3_I_DATA_0  = 10'h1c0,
    ADDR_COUNTS_3_I_CTRL    = 10'h1c4,
    ADDR_COUNTS_3_O_DATA_0  = 10'h1c8,
    ADDR_COUNTS_3_O_CTRL    = 10'h1cc,
    ADDR_COUNTS_4_I_DATA_0  = 10'h1d0,
    ADDR_COUNTS_4_I_CTRL    = 10'h1d4,
    ADDR_COUNTS_4_O_DATA_0  = 10'h1d8,
    ADDR_COUNTS_4_O_CTRL    = 10'h1dc,
    ADDR_COUNTS_5_I_DATA_0  = 10'h1e0,
    ADDR_COUNTS_5_I_CTRL    = 10'h1e4,
    ADDR_COUNTS_5_O_DATA_0  = 10'h1e8,
    ADDR_COUNTS_5_O_CTRL    = 10'h1ec,
    ADDR_COUNTS_6_I_DATA_0  = 10'h1f0,
    ADDR_COUNTS_6_I_CTRL    = 10'h1f4,
    ADDR_COUNTS_6_O_DATA_0  = 10'h1f8,
    ADDR_COUNTS_6_O_CTRL    = 10'h1fc,
    ADDR_COUNTS_7_I_DATA_0  = 10'h200,
    ADDR_COUNTS_7_I_CTRL    = 10'h204,
    ADDR_COUNTS_7_O_DATA_0  = 10'h208,
    ADDR_COUNTS_7_O_CTRL    = 10'h20c,
    ADDR_COUNTS_8_I_DATA_0  = 10'h210,
    ADDR_COUNTS_8_I_CTRL    = 10'h214,
    ADDR_COUNTS_8_O_DATA_0  = 10'h218,
    ADDR_COUNTS_8_O_CTRL    = 10'h21c,
    ADDR_COUNTS_9_I_DATA_0  = 10'h220,
    ADDR_COUNTS_9_I_CTRL    = 10'h224,
    ADDR_COUNTS_9_O_DATA_0  = 10'h228,
    ADDR_COUNTS_9_O_CTRL    = 10'h22c,
    ADDR_COUNTS_10_I_DATA_0 = 10'h230,
    ADDR_COUNTS_10_I_CTRL   = 10'h234,
    ADDR_COUNTS_10_O_DATA_0 = 10'h238,
    ADDR_COUNTS_10_O_CTRL   = 10'h23c,
    ADDR_COUNTS_11_I_DATA_0 = 10'h240,
    ADDR_COUNTS_11_I_CTRL   = 10'h244,
    ADDR_COUNTS_11_O_DATA_0 = 10'h248,
    ADDR_COUNTS_11_O_CTRL   = 10'h24c,
    ADDR_COUNTS_12_I_DATA_0 = 10'h250,
    ADDR_COUNTS_12_I_CTRL   = 10'h254,
    ADDR_COUNTS_12_O_DATA_0 = 10'h258,
    ADDR_COUNTS_12_O_CTRL   = 10'h25c,
    ADDR_COUNTS_13_I_DATA_0 = 10'h260,
    ADDR_COUNTS_13_I_CTRL   = 10'h264,
    ADDR_COUNTS_13_O_DATA_0 = 10'h268,
    ADDR_COUNTS_13_O_CTRL   = 10'h26c,
    ADDR_COUNTS_14_I_DATA_0 = 10'h270,
    ADDR_COUNTS_14_I_CTRL   = 10'h274,
    ADDR_COUNTS_14_O_DATA_0 = 10'h278,
    ADDR_COUNTS_14_O_CTRL   = 10'h27c,
    ADDR_COUNTS_15_I_DATA_0 = 10'h280,
    ADDR_COUNTS_15_I_CTRL   = 10'h284,
    ADDR_COUNTS_15_O_DATA_0 = 10'h288,
    ADDR_COUNTS_15_O_CTRL   = 10'h28c,
    ADDR_COUNTS_16_I_DATA_0 = 10'h290,
    ADDR_COUNTS_16_I_CTRL   = 10'h294,
    ADDR_COUNTS_16_O_DATA_0 = 10'h298,
    ADDR_COUNTS_16_O_CTRL   = 10'h29c,
    ADDR_COUNTS_17_I_DATA_0 = 10'h2a0,
    ADDR_COUNTS_17_I_CTRL   = 10'h2a4,
    ADDR_COUNTS_17_O_DATA_0 = 10'h2a8,
    ADDR_COUNTS_17_O_CTRL   = 10'h2ac,
    ADDR_COUNTS_18_I_DATA_0 = 10'h2b0,
    ADDR_COUNTS_18_I_CTRL   = 10'h2b4,
    ADDR_COUNTS_18_O_DATA_0 = 10'h2b8,
    ADDR_COUNTS_18_O_CTRL   = 10'h2bc,
    ADDR_COUNTS_19_I_DATA_0 = 10'h2c0,
    ADDR_COUNTS_19_I_CTRL   = 10'h2c4,
    ADDR_COUNTS_19_O_DATA_0 = 10'h2c8,
    ADDR_COUNTS_19_O_CTRL   = 10'h2cc,
    ADDR_COUNTS_20_I_DATA_0 = 10'h2d0,
    ADDR_COUNTS_20_I_CTRL   = 10'h2d4,
    ADDR_COUNTS_20_O_DATA_0 = 10'h2d8,
    ADDR_COUNTS_20_O_CTRL   = 10'h2dc,
    ADDR_COUNTS_21_I_DATA_0 = 10'h2e0,
    ADDR_COUNTS_21_I_CTRL   = 10'h2e4,
    ADDR_COUNTS_21_O_DATA_0 = 10'h2e8,
    ADDR_COUNTS_21_O_CTRL   = 10'h2ec,
    ADDR_COUNTS_22_I_DATA_0 = 10'h2f0,
    ADDR_COUNTS_22_I_CTRL   = 10'h2f4,
    ADDR_COUNTS_22_O_DATA_0 = 10'h2f8,
    ADDR_COUNTS_22_O_CTRL   = 10'h2fc,
    ADDR_COUNTS_23_I_DATA_0 = 10'h300,
    ADDR_COUNTS_23_I_CTRL   = 10'h304,
    ADDR_COUNTS_23_O_DATA_0 = 10'h308,
    ADDR_COUNTS_23_O_CTRL   = 10'h30c,
    ADDR_OUTPUTS_0_DATA_0   = 10'h310,
    ADDR_OUTPUTS_0_CTRL     = 10'h314,
    ADDR_OUTPUTS_1_DATA_0   = 10'h318,
    ADDR_OUTPUTS_1_CTRL     = 10'h31c,
    ADDR_OUTPUTS_2_DATA_0   = 10'h320,
    ADDR_OUTPUTS_2_CTRL     = 10'h324,
    ADDR_OUTPUTS_3_DATA_0   = 10'h328,
    ADDR_OUTPUTS_3_CTRL     = 10'h32c,
    ADDR_OUTPUTS_4_DATA_0   = 10'h330,
    ADDR_OUTPUTS_4_CTRL     = 10'h334,
    ADDR_OUTPUTS_5_DATA_0   = 10'h338,
    ADDR_OUTPUTS_5_CTRL     = 10'h33c,
    ADDR_OUTPUTS_6_DATA_0   = 10'h340,
    ADDR_OUTPUTS_6_CTRL     = 10'h344,
    ADDR_OUTPUTS_7_DATA_0   = 10'h348,
    ADDR_OUTPUTS_7_CTRL     = 10'h34c,
    ADDR_OUTPUTS_8_DATA_0   = 10'h350,
    ADDR_OUTPUTS_8_CTRL     = 10'h354,
    ADDR_OUTPUTS_9_DATA_0   = 10'h358,
    ADDR_OUTPUTS_9_CTRL     = 10'h35c,
    ADDR_OUTPUTS_10_DATA_0  = 10'h360,
    ADDR_OUTPUTS_10_CTRL    = 10'h364,
    ADDR_OUTPUTS_11_DATA_0  = 10'h368,
    ADDR_OUTPUTS_11_CTRL    = 10'h36c,
    ADDR_OUTPUTS_12_DATA_0  = 10'h370,
    ADDR_OUTPUTS_12_CTRL    = 10'h374,
    ADDR_OUTPUTS_13_DATA_0  = 10'h378,
    ADDR_OUTPUTS_13_CTRL    = 10'h37c,
    ADDR_OUTPUTS_14_DATA_0  = 10'h380,
    ADDR_OUTPUTS_14_CTRL    = 10'h384,
    ADDR_OUTPUTS_15_DATA_0  = 10'h388,
    ADDR_OUTPUTS_15_CTRL    = 10'h38c,
    ADDR_OUTPUTS_16_DATA_0  = 10'h390,
    ADDR_OUTPUTS_16_CTRL    = 10'h394,
    ADDR_OUTPUTS_17_DATA_0  = 10'h398,
    ADDR_OUTPUTS_17_CTRL    = 10'h39c,
    ADDR_OUTPUTS_18_DATA_0  = 10'h3a0,
    ADDR_OUTPUTS_18_CTRL    = 10'h3a4,
    ADDR_OUTPUTS_19_DATA_0  = 10'h3a8,
    ADDR_OUTPUTS_19_CTRL    = 10'h3ac,
    ADDR_OUTPUTS_20_DATA_0  = 10'h3b0,
    ADDR_OUTPUTS_20_CTRL    = 10'h3b4,
    ADDR_OUTPUTS_21_DATA_0  = 10'h3b8,
    ADDR_OUTPUTS_21_CTRL    = 10'h3bc,
    ADDR_OUTPUTS_22_DATA_0  = 10'h3c0,
    ADDR_OUTPUTS_22_CTRL    = 10'h3c4,
    ADDR_OUTPUTS_23_DATA_0  = 10'h3c8,
    ADDR_OUTPUTS_23_CTRL    = 10'h3cc,
    ADDR_INPUTS_0_BASE      = 10'h010,
    ADDR_INPUTS_0_HIGH      = 10'h01f,
    ADDR_INPUTS_1_BASE      = 10'h020,
    ADDR_INPUTS_1_HIGH      = 10'h02f,
    ADDR_INPUTS_2_BASE      = 10'h030,
    ADDR_INPUTS_2_HIGH      = 10'h03f,
    ADDR_INPUTS_3_BASE      = 10'h040,
    ADDR_INPUTS_3_HIGH      = 10'h04f,
    ADDR_INPUTS_4_BASE      = 10'h050,
    ADDR_INPUTS_4_HIGH      = 10'h05f,
    ADDR_INPUTS_5_BASE      = 10'h060,
    ADDR_INPUTS_5_HIGH      = 10'h06f,
    ADDR_INPUTS_6_BASE      = 10'h070,
    ADDR_INPUTS_6_HIGH      = 10'h07f,
    ADDR_INPUTS_7_BASE      = 10'h080,
    ADDR_INPUTS_7_HIGH      = 10'h08f,
    ADDR_INPUTS_8_BASE      = 10'h090,
    ADDR_INPUTS_8_HIGH      = 10'h09f,
    ADDR_INPUTS_9_BASE      = 10'h0a0,
    ADDR_INPUTS_9_HIGH      = 10'h0af,
    ADDR_INPUTS_10_BASE     = 10'h0b0,
    ADDR_INPUTS_10_HIGH     = 10'h0bf,
    ADDR_INPUTS_11_BASE     = 10'h0c0,
    ADDR_INPUTS_11_HIGH     = 10'h0cf,
    ADDR_INPUTS_12_BASE     = 10'h0d0,
    ADDR_INPUTS_12_HIGH     = 10'h0df,
    ADDR_INPUTS_13_BASE     = 10'h0e0,
    ADDR_INPUTS_13_HIGH     = 10'h0ef,
    ADDR_INPUTS_14_BASE     = 10'h0f0,
    ADDR_INPUTS_14_HIGH     = 10'h0ff,
    ADDR_INPUTS_15_BASE     = 10'h100,
    ADDR_INPUTS_15_HIGH     = 10'h10f,
    ADDR_INPUTS_16_BASE     = 10'h110,
    ADDR_INPUTS_16_HIGH     = 10'h11f,
    ADDR_INPUTS_17_BASE     = 10'h120,
    ADDR_INPUTS_17_HIGH     = 10'h12f,
    ADDR_INPUTS_18_BASE     = 10'h130,
    ADDR_INPUTS_18_HIGH     = 10'h13f,
    ADDR_INPUTS_19_BASE     = 10'h140,
    ADDR_INPUTS_19_HIGH     = 10'h14f,
    ADDR_INPUTS_20_BASE     = 10'h150,
    ADDR_INPUTS_20_HIGH     = 10'h15f,
    ADDR_INPUTS_21_BASE     = 10'h160,
    ADDR_INPUTS_21_HIGH     = 10'h16f,
    ADDR_INPUTS_22_BASE     = 10'h170,
    ADDR_INPUTS_22_HIGH     = 10'h17f,
    ADDR_INPUTS_23_BASE     = 10'h180,
    ADDR_INPUTS_23_HIGH     = 10'h18f,
    WRIDLE                  = 2'd0,
    WRDATA                  = 2'd1,
    WRRESP                  = 2'd2,
    WRRESET                 = 2'd3,
    RDIDLE                  = 2'd0,
    RDDATA                  = 2'd1,
    RDRESET                 = 2'd2,
    ADDR_BITS         = 10;

//------------------------Local signal-------------------
    reg  [1:0]                    wstate = WRRESET;
    reg  [1:0]                    wnext;
    reg  [ADDR_BITS-1:0]          waddr;
    wire [31:0]                   wmask;
    wire                          aw_hs;
    wire                          w_hs;
    reg  [1:0]                    rstate = RDRESET;
    reg  [1:0]                    rnext;
    reg  [31:0]                   rdata;
    wire                          ar_hs;
    wire [ADDR_BITS-1:0]          raddr;
    // internal registers
    reg                           int_ap_idle;
    reg                           int_ap_ready;
    reg                           int_ap_done = 1'b0;
    reg                           int_ap_start = 1'b0;
    reg                           int_auto_restart = 1'b0;
    reg                           int_gie = 1'b0;
    reg  [1:0]                    int_ier = 2'b0;
    reg  [1:0]                    int_isr = 2'b0;
    reg  [31:0]                   int_counts_0_i = 'b0;
    reg  [31:0]                   int_counts_0_o = 'b0;
    reg                           int_counts_0_o_ap_vld;
    reg  [31:0]                   int_counts_1_i = 'b0;
    reg  [31:0]                   int_counts_1_o = 'b0;
    reg                           int_counts_1_o_ap_vld;
    reg  [31:0]                   int_counts_2_i = 'b0;
    reg  [31:0]                   int_counts_2_o = 'b0;
    reg                           int_counts_2_o_ap_vld;
    reg  [31:0]                   int_counts_3_i = 'b0;
    reg  [31:0]                   int_counts_3_o = 'b0;
    reg                           int_counts_3_o_ap_vld;
    reg  [31:0]                   int_counts_4_i = 'b0;
    reg  [31:0]                   int_counts_4_o = 'b0;
    reg                           int_counts_4_o_ap_vld;
    reg  [31:0]                   int_counts_5_i = 'b0;
    reg  [31:0]                   int_counts_5_o = 'b0;
    reg                           int_counts_5_o_ap_vld;
    reg  [31:0]                   int_counts_6_i = 'b0;
    reg  [31:0]                   int_counts_6_o = 'b0;
    reg                           int_counts_6_o_ap_vld;
    reg  [31:0]                   int_counts_7_i = 'b0;
    reg  [31:0]                   int_counts_7_o = 'b0;
    reg                           int_counts_7_o_ap_vld;
    reg  [31:0]                   int_counts_8_i = 'b0;
    reg  [31:0]                   int_counts_8_o = 'b0;
    reg                           int_counts_8_o_ap_vld;
    reg  [31:0]                   int_counts_9_i = 'b0;
    reg  [31:0]                   int_counts_9_o = 'b0;
    reg                           int_counts_9_o_ap_vld;
    reg  [31:0]                   int_counts_10_i = 'b0;
    reg  [31:0]                   int_counts_10_o = 'b0;
    reg                           int_counts_10_o_ap_vld;
    reg  [31:0]                   int_counts_11_i = 'b0;
    reg  [31:0]                   int_counts_11_o = 'b0;
    reg                           int_counts_11_o_ap_vld;
    reg  [31:0]                   int_counts_12_i = 'b0;
    reg  [31:0]                   int_counts_12_o = 'b0;
    reg                           int_counts_12_o_ap_vld;
    reg  [31:0]                   int_counts_13_i = 'b0;
    reg  [31:0]                   int_counts_13_o = 'b0;
    reg                           int_counts_13_o_ap_vld;
    reg  [31:0]                   int_counts_14_i = 'b0;
    reg  [31:0]                   int_counts_14_o = 'b0;
    reg                           int_counts_14_o_ap_vld;
    reg  [31:0]                   int_counts_15_i = 'b0;
    reg  [31:0]                   int_counts_15_o = 'b0;
    reg                           int_counts_15_o_ap_vld;
    reg  [31:0]                   int_counts_16_i = 'b0;
    reg  [31:0]                   int_counts_16_o = 'b0;
    reg                           int_counts_16_o_ap_vld;
    reg  [31:0]                   int_counts_17_i = 'b0;
    reg  [31:0]                   int_counts_17_o = 'b0;
    reg                           int_counts_17_o_ap_vld;
    reg  [31:0]                   int_counts_18_i = 'b0;
    reg  [31:0]                   int_counts_18_o = 'b0;
    reg                           int_counts_18_o_ap_vld;
    reg  [31:0]                   int_counts_19_i = 'b0;
    reg  [31:0]                   int_counts_19_o = 'b0;
    reg                           int_counts_19_o_ap_vld;
    reg  [31:0]                   int_counts_20_i = 'b0;
    reg  [31:0]                   int_counts_20_o = 'b0;
    reg                           int_counts_20_o_ap_vld;
    reg  [31:0]                   int_counts_21_i = 'b0;
    reg  [31:0]                   int_counts_21_o = 'b0;
    reg                           int_counts_21_o_ap_vld;
    reg  [31:0]                   int_counts_22_i = 'b0;
    reg  [31:0]                   int_counts_22_o = 'b0;
    reg                           int_counts_22_o_ap_vld;
    reg  [31:0]                   int_counts_23_i = 'b0;
    reg  [31:0]                   int_counts_23_o = 'b0;
    reg                           int_counts_23_o_ap_vld;
    reg  [31:0]                   int_outputs_0 = 'b0;
    reg                           int_outputs_0_ap_vld;
    reg  [31:0]                   int_outputs_1 = 'b0;
    reg                           int_outputs_1_ap_vld;
    reg  [31:0]                   int_outputs_2 = 'b0;
    reg                           int_outputs_2_ap_vld;
    reg  [31:0]                   int_outputs_3 = 'b0;
    reg                           int_outputs_3_ap_vld;
    reg  [31:0]                   int_outputs_4 = 'b0;
    reg                           int_outputs_4_ap_vld;
    reg  [31:0]                   int_outputs_5 = 'b0;
    reg                           int_outputs_5_ap_vld;
    reg  [31:0]                   int_outputs_6 = 'b0;
    reg                           int_outputs_6_ap_vld;
    reg  [31:0]                   int_outputs_7 = 'b0;
    reg                           int_outputs_7_ap_vld;
    reg  [31:0]                   int_outputs_8 = 'b0;
    reg                           int_outputs_8_ap_vld;
    reg  [31:0]                   int_outputs_9 = 'b0;
    reg                           int_outputs_9_ap_vld;
    reg  [31:0]                   int_outputs_10 = 'b0;
    reg                           int_outputs_10_ap_vld;
    reg  [31:0]                   int_outputs_11 = 'b0;
    reg                           int_outputs_11_ap_vld;
    reg  [31:0]                   int_outputs_12 = 'b0;
    reg                           int_outputs_12_ap_vld;
    reg  [31:0]                   int_outputs_13 = 'b0;
    reg                           int_outputs_13_ap_vld;
    reg  [31:0]                   int_outputs_14 = 'b0;
    reg                           int_outputs_14_ap_vld;
    reg  [31:0]                   int_outputs_15 = 'b0;
    reg                           int_outputs_15_ap_vld;
    reg  [31:0]                   int_outputs_16 = 'b0;
    reg                           int_outputs_16_ap_vld;
    reg  [31:0]                   int_outputs_17 = 'b0;
    reg                           int_outputs_17_ap_vld;
    reg  [31:0]                   int_outputs_18 = 'b0;
    reg                           int_outputs_18_ap_vld;
    reg  [31:0]                   int_outputs_19 = 'b0;
    reg                           int_outputs_19_ap_vld;
    reg  [31:0]                   int_outputs_20 = 'b0;
    reg                           int_outputs_20_ap_vld;
    reg  [31:0]                   int_outputs_21 = 'b0;
    reg                           int_outputs_21_ap_vld;
    reg  [31:0]                   int_outputs_22 = 'b0;
    reg                           int_outputs_22_ap_vld;
    reg  [31:0]                   int_outputs_23 = 'b0;
    reg                           int_outputs_23_ap_vld;
    // memory signals
    wire [1:0]                    int_inputs_0_address0;
    wire                          int_inputs_0_ce0;
    wire                          int_inputs_0_we0;
    wire [3:0]                    int_inputs_0_be0;
    wire [31:0]                   int_inputs_0_d0;
    wire [31:0]                   int_inputs_0_q0;
    wire [1:0]                    int_inputs_0_address1;
    wire                          int_inputs_0_ce1;
    wire                          int_inputs_0_we1;
    wire [3:0]                    int_inputs_0_be1;
    wire [31:0]                   int_inputs_0_d1;
    wire [31:0]                   int_inputs_0_q1;
    reg                           int_inputs_0_read;
    reg                           int_inputs_0_write;
    wire [1:0]                    int_inputs_1_address0;
    wire                          int_inputs_1_ce0;
    wire                          int_inputs_1_we0;
    wire [3:0]                    int_inputs_1_be0;
    wire [31:0]                   int_inputs_1_d0;
    wire [31:0]                   int_inputs_1_q0;
    wire [1:0]                    int_inputs_1_address1;
    wire                          int_inputs_1_ce1;
    wire                          int_inputs_1_we1;
    wire [3:0]                    int_inputs_1_be1;
    wire [31:0]                   int_inputs_1_d1;
    wire [31:0]                   int_inputs_1_q1;
    reg                           int_inputs_1_read;
    reg                           int_inputs_1_write;
    wire [1:0]                    int_inputs_2_address0;
    wire                          int_inputs_2_ce0;
    wire                          int_inputs_2_we0;
    wire [3:0]                    int_inputs_2_be0;
    wire [31:0]                   int_inputs_2_d0;
    wire [31:0]                   int_inputs_2_q0;
    wire [1:0]                    int_inputs_2_address1;
    wire                          int_inputs_2_ce1;
    wire                          int_inputs_2_we1;
    wire [3:0]                    int_inputs_2_be1;
    wire [31:0]                   int_inputs_2_d1;
    wire [31:0]                   int_inputs_2_q1;
    reg                           int_inputs_2_read;
    reg                           int_inputs_2_write;
    wire [1:0]                    int_inputs_3_address0;
    wire                          int_inputs_3_ce0;
    wire                          int_inputs_3_we0;
    wire [3:0]                    int_inputs_3_be0;
    wire [31:0]                   int_inputs_3_d0;
    wire [31:0]                   int_inputs_3_q0;
    wire [1:0]                    int_inputs_3_address1;
    wire                          int_inputs_3_ce1;
    wire                          int_inputs_3_we1;
    wire [3:0]                    int_inputs_3_be1;
    wire [31:0]                   int_inputs_3_d1;
    wire [31:0]                   int_inputs_3_q1;
    reg                           int_inputs_3_read;
    reg                           int_inputs_3_write;
    wire [1:0]                    int_inputs_4_address0;
    wire                          int_inputs_4_ce0;
    wire                          int_inputs_4_we0;
    wire [3:0]                    int_inputs_4_be0;
    wire [31:0]                   int_inputs_4_d0;
    wire [31:0]                   int_inputs_4_q0;
    wire [1:0]                    int_inputs_4_address1;
    wire                          int_inputs_4_ce1;
    wire                          int_inputs_4_we1;
    wire [3:0]                    int_inputs_4_be1;
    wire [31:0]                   int_inputs_4_d1;
    wire [31:0]                   int_inputs_4_q1;
    reg                           int_inputs_4_read;
    reg                           int_inputs_4_write;
    wire [1:0]                    int_inputs_5_address0;
    wire                          int_inputs_5_ce0;
    wire                          int_inputs_5_we0;
    wire [3:0]                    int_inputs_5_be0;
    wire [31:0]                   int_inputs_5_d0;
    wire [31:0]                   int_inputs_5_q0;
    wire [1:0]                    int_inputs_5_address1;
    wire                          int_inputs_5_ce1;
    wire                          int_inputs_5_we1;
    wire [3:0]                    int_inputs_5_be1;
    wire [31:0]                   int_inputs_5_d1;
    wire [31:0]                   int_inputs_5_q1;
    reg                           int_inputs_5_read;
    reg                           int_inputs_5_write;
    wire [1:0]                    int_inputs_6_address0;
    wire                          int_inputs_6_ce0;
    wire                          int_inputs_6_we0;
    wire [3:0]                    int_inputs_6_be0;
    wire [31:0]                   int_inputs_6_d0;
    wire [31:0]                   int_inputs_6_q0;
    wire [1:0]                    int_inputs_6_address1;
    wire                          int_inputs_6_ce1;
    wire                          int_inputs_6_we1;
    wire [3:0]                    int_inputs_6_be1;
    wire [31:0]                   int_inputs_6_d1;
    wire [31:0]                   int_inputs_6_q1;
    reg                           int_inputs_6_read;
    reg                           int_inputs_6_write;
    wire [1:0]                    int_inputs_7_address0;
    wire                          int_inputs_7_ce0;
    wire                          int_inputs_7_we0;
    wire [3:0]                    int_inputs_7_be0;
    wire [31:0]                   int_inputs_7_d0;
    wire [31:0]                   int_inputs_7_q0;
    wire [1:0]                    int_inputs_7_address1;
    wire                          int_inputs_7_ce1;
    wire                          int_inputs_7_we1;
    wire [3:0]                    int_inputs_7_be1;
    wire [31:0]                   int_inputs_7_d1;
    wire [31:0]                   int_inputs_7_q1;
    reg                           int_inputs_7_read;
    reg                           int_inputs_7_write;
    wire [1:0]                    int_inputs_8_address0;
    wire                          int_inputs_8_ce0;
    wire                          int_inputs_8_we0;
    wire [3:0]                    int_inputs_8_be0;
    wire [31:0]                   int_inputs_8_d0;
    wire [31:0]                   int_inputs_8_q0;
    wire [1:0]                    int_inputs_8_address1;
    wire                          int_inputs_8_ce1;
    wire                          int_inputs_8_we1;
    wire [3:0]                    int_inputs_8_be1;
    wire [31:0]                   int_inputs_8_d1;
    wire [31:0]                   int_inputs_8_q1;
    reg                           int_inputs_8_read;
    reg                           int_inputs_8_write;
    wire [1:0]                    int_inputs_9_address0;
    wire                          int_inputs_9_ce0;
    wire                          int_inputs_9_we0;
    wire [3:0]                    int_inputs_9_be0;
    wire [31:0]                   int_inputs_9_d0;
    wire [31:0]                   int_inputs_9_q0;
    wire [1:0]                    int_inputs_9_address1;
    wire                          int_inputs_9_ce1;
    wire                          int_inputs_9_we1;
    wire [3:0]                    int_inputs_9_be1;
    wire [31:0]                   int_inputs_9_d1;
    wire [31:0]                   int_inputs_9_q1;
    reg                           int_inputs_9_read;
    reg                           int_inputs_9_write;
    wire [1:0]                    int_inputs_10_address0;
    wire                          int_inputs_10_ce0;
    wire                          int_inputs_10_we0;
    wire [3:0]                    int_inputs_10_be0;
    wire [31:0]                   int_inputs_10_d0;
    wire [31:0]                   int_inputs_10_q0;
    wire [1:0]                    int_inputs_10_address1;
    wire                          int_inputs_10_ce1;
    wire                          int_inputs_10_we1;
    wire [3:0]                    int_inputs_10_be1;
    wire [31:0]                   int_inputs_10_d1;
    wire [31:0]                   int_inputs_10_q1;
    reg                           int_inputs_10_read;
    reg                           int_inputs_10_write;
    wire [1:0]                    int_inputs_11_address0;
    wire                          int_inputs_11_ce0;
    wire                          int_inputs_11_we0;
    wire [3:0]                    int_inputs_11_be0;
    wire [31:0]                   int_inputs_11_d0;
    wire [31:0]                   int_inputs_11_q0;
    wire [1:0]                    int_inputs_11_address1;
    wire                          int_inputs_11_ce1;
    wire                          int_inputs_11_we1;
    wire [3:0]                    int_inputs_11_be1;
    wire [31:0]                   int_inputs_11_d1;
    wire [31:0]                   int_inputs_11_q1;
    reg                           int_inputs_11_read;
    reg                           int_inputs_11_write;
    wire [1:0]                    int_inputs_12_address0;
    wire                          int_inputs_12_ce0;
    wire                          int_inputs_12_we0;
    wire [3:0]                    int_inputs_12_be0;
    wire [31:0]                   int_inputs_12_d0;
    wire [31:0]                   int_inputs_12_q0;
    wire [1:0]                    int_inputs_12_address1;
    wire                          int_inputs_12_ce1;
    wire                          int_inputs_12_we1;
    wire [3:0]                    int_inputs_12_be1;
    wire [31:0]                   int_inputs_12_d1;
    wire [31:0]                   int_inputs_12_q1;
    reg                           int_inputs_12_read;
    reg                           int_inputs_12_write;
    wire [1:0]                    int_inputs_13_address0;
    wire                          int_inputs_13_ce0;
    wire                          int_inputs_13_we0;
    wire [3:0]                    int_inputs_13_be0;
    wire [31:0]                   int_inputs_13_d0;
    wire [31:0]                   int_inputs_13_q0;
    wire [1:0]                    int_inputs_13_address1;
    wire                          int_inputs_13_ce1;
    wire                          int_inputs_13_we1;
    wire [3:0]                    int_inputs_13_be1;
    wire [31:0]                   int_inputs_13_d1;
    wire [31:0]                   int_inputs_13_q1;
    reg                           int_inputs_13_read;
    reg                           int_inputs_13_write;
    wire [1:0]                    int_inputs_14_address0;
    wire                          int_inputs_14_ce0;
    wire                          int_inputs_14_we0;
    wire [3:0]                    int_inputs_14_be0;
    wire [31:0]                   int_inputs_14_d0;
    wire [31:0]                   int_inputs_14_q0;
    wire [1:0]                    int_inputs_14_address1;
    wire                          int_inputs_14_ce1;
    wire                          int_inputs_14_we1;
    wire [3:0]                    int_inputs_14_be1;
    wire [31:0]                   int_inputs_14_d1;
    wire [31:0]                   int_inputs_14_q1;
    reg                           int_inputs_14_read;
    reg                           int_inputs_14_write;
    wire [1:0]                    int_inputs_15_address0;
    wire                          int_inputs_15_ce0;
    wire                          int_inputs_15_we0;
    wire [3:0]                    int_inputs_15_be0;
    wire [31:0]                   int_inputs_15_d0;
    wire [31:0]                   int_inputs_15_q0;
    wire [1:0]                    int_inputs_15_address1;
    wire                          int_inputs_15_ce1;
    wire                          int_inputs_15_we1;
    wire [3:0]                    int_inputs_15_be1;
    wire [31:0]                   int_inputs_15_d1;
    wire [31:0]                   int_inputs_15_q1;
    reg                           int_inputs_15_read;
    reg                           int_inputs_15_write;
    wire [1:0]                    int_inputs_16_address0;
    wire                          int_inputs_16_ce0;
    wire                          int_inputs_16_we0;
    wire [3:0]                    int_inputs_16_be0;
    wire [31:0]                   int_inputs_16_d0;
    wire [31:0]                   int_inputs_16_q0;
    wire [1:0]                    int_inputs_16_address1;
    wire                          int_inputs_16_ce1;
    wire                          int_inputs_16_we1;
    wire [3:0]                    int_inputs_16_be1;
    wire [31:0]                   int_inputs_16_d1;
    wire [31:0]                   int_inputs_16_q1;
    reg                           int_inputs_16_read;
    reg                           int_inputs_16_write;
    wire [1:0]                    int_inputs_17_address0;
    wire                          int_inputs_17_ce0;
    wire                          int_inputs_17_we0;
    wire [3:0]                    int_inputs_17_be0;
    wire [31:0]                   int_inputs_17_d0;
    wire [31:0]                   int_inputs_17_q0;
    wire [1:0]                    int_inputs_17_address1;
    wire                          int_inputs_17_ce1;
    wire                          int_inputs_17_we1;
    wire [3:0]                    int_inputs_17_be1;
    wire [31:0]                   int_inputs_17_d1;
    wire [31:0]                   int_inputs_17_q1;
    reg                           int_inputs_17_read;
    reg                           int_inputs_17_write;
    wire [1:0]                    int_inputs_18_address0;
    wire                          int_inputs_18_ce0;
    wire                          int_inputs_18_we0;
    wire [3:0]                    int_inputs_18_be0;
    wire [31:0]                   int_inputs_18_d0;
    wire [31:0]                   int_inputs_18_q0;
    wire [1:0]                    int_inputs_18_address1;
    wire                          int_inputs_18_ce1;
    wire                          int_inputs_18_we1;
    wire [3:0]                    int_inputs_18_be1;
    wire [31:0]                   int_inputs_18_d1;
    wire [31:0]                   int_inputs_18_q1;
    reg                           int_inputs_18_read;
    reg                           int_inputs_18_write;
    wire [1:0]                    int_inputs_19_address0;
    wire                          int_inputs_19_ce0;
    wire                          int_inputs_19_we0;
    wire [3:0]                    int_inputs_19_be0;
    wire [31:0]                   int_inputs_19_d0;
    wire [31:0]                   int_inputs_19_q0;
    wire [1:0]                    int_inputs_19_address1;
    wire                          int_inputs_19_ce1;
    wire                          int_inputs_19_we1;
    wire [3:0]                    int_inputs_19_be1;
    wire [31:0]                   int_inputs_19_d1;
    wire [31:0]                   int_inputs_19_q1;
    reg                           int_inputs_19_read;
    reg                           int_inputs_19_write;
    wire [1:0]                    int_inputs_20_address0;
    wire                          int_inputs_20_ce0;
    wire                          int_inputs_20_we0;
    wire [3:0]                    int_inputs_20_be0;
    wire [31:0]                   int_inputs_20_d0;
    wire [31:0]                   int_inputs_20_q0;
    wire [1:0]                    int_inputs_20_address1;
    wire                          int_inputs_20_ce1;
    wire                          int_inputs_20_we1;
    wire [3:0]                    int_inputs_20_be1;
    wire [31:0]                   int_inputs_20_d1;
    wire [31:0]                   int_inputs_20_q1;
    reg                           int_inputs_20_read;
    reg                           int_inputs_20_write;
    wire [1:0]                    int_inputs_21_address0;
    wire                          int_inputs_21_ce0;
    wire                          int_inputs_21_we0;
    wire [3:0]                    int_inputs_21_be0;
    wire [31:0]                   int_inputs_21_d0;
    wire [31:0]                   int_inputs_21_q0;
    wire [1:0]                    int_inputs_21_address1;
    wire                          int_inputs_21_ce1;
    wire                          int_inputs_21_we1;
    wire [3:0]                    int_inputs_21_be1;
    wire [31:0]                   int_inputs_21_d1;
    wire [31:0]                   int_inputs_21_q1;
    reg                           int_inputs_21_read;
    reg                           int_inputs_21_write;
    wire [1:0]                    int_inputs_22_address0;
    wire                          int_inputs_22_ce0;
    wire                          int_inputs_22_we0;
    wire [3:0]                    int_inputs_22_be0;
    wire [31:0]                   int_inputs_22_d0;
    wire [31:0]                   int_inputs_22_q0;
    wire [1:0]                    int_inputs_22_address1;
    wire                          int_inputs_22_ce1;
    wire                          int_inputs_22_we1;
    wire [3:0]                    int_inputs_22_be1;
    wire [31:0]                   int_inputs_22_d1;
    wire [31:0]                   int_inputs_22_q1;
    reg                           int_inputs_22_read;
    reg                           int_inputs_22_write;
    wire [1:0]                    int_inputs_23_address0;
    wire                          int_inputs_23_ce0;
    wire                          int_inputs_23_we0;
    wire [3:0]                    int_inputs_23_be0;
    wire [31:0]                   int_inputs_23_d0;
    wire [31:0]                   int_inputs_23_q0;
    wire [1:0]                    int_inputs_23_address1;
    wire                          int_inputs_23_ce1;
    wire                          int_inputs_23_we1;
    wire [3:0]                    int_inputs_23_be1;
    wire [31:0]                   int_inputs_23_d1;
    wire [31:0]                   int_inputs_23_q1;
    reg                           int_inputs_23_read;
    reg                           int_inputs_23_write;

//------------------------Instantiation------------------
// int_inputs_0
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_0 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_0_address0 ),
    .ce0      ( int_inputs_0_ce0 ),
    .we0      ( int_inputs_0_we0 ),
    .be0      ( int_inputs_0_be0 ),
    .d0       ( int_inputs_0_d0 ),
    .q0       ( int_inputs_0_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_0_address1 ),
    .ce1      ( int_inputs_0_ce1 ),
    .we1      ( int_inputs_0_we1 ),
    .be1      ( int_inputs_0_be1 ),
    .d1       ( int_inputs_0_d1 ),
    .q1       ( int_inputs_0_q1 )
);
// int_inputs_1
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_1 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_1_address0 ),
    .ce0      ( int_inputs_1_ce0 ),
    .we0      ( int_inputs_1_we0 ),
    .be0      ( int_inputs_1_be0 ),
    .d0       ( int_inputs_1_d0 ),
    .q0       ( int_inputs_1_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_1_address1 ),
    .ce1      ( int_inputs_1_ce1 ),
    .we1      ( int_inputs_1_we1 ),
    .be1      ( int_inputs_1_be1 ),
    .d1       ( int_inputs_1_d1 ),
    .q1       ( int_inputs_1_q1 )
);
// int_inputs_2
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_2 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_2_address0 ),
    .ce0      ( int_inputs_2_ce0 ),
    .we0      ( int_inputs_2_we0 ),
    .be0      ( int_inputs_2_be0 ),
    .d0       ( int_inputs_2_d0 ),
    .q0       ( int_inputs_2_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_2_address1 ),
    .ce1      ( int_inputs_2_ce1 ),
    .we1      ( int_inputs_2_we1 ),
    .be1      ( int_inputs_2_be1 ),
    .d1       ( int_inputs_2_d1 ),
    .q1       ( int_inputs_2_q1 )
);
// int_inputs_3
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_3 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_3_address0 ),
    .ce0      ( int_inputs_3_ce0 ),
    .we0      ( int_inputs_3_we0 ),
    .be0      ( int_inputs_3_be0 ),
    .d0       ( int_inputs_3_d0 ),
    .q0       ( int_inputs_3_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_3_address1 ),
    .ce1      ( int_inputs_3_ce1 ),
    .we1      ( int_inputs_3_we1 ),
    .be1      ( int_inputs_3_be1 ),
    .d1       ( int_inputs_3_d1 ),
    .q1       ( int_inputs_3_q1 )
);
// int_inputs_4
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_4 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_4_address0 ),
    .ce0      ( int_inputs_4_ce0 ),
    .we0      ( int_inputs_4_we0 ),
    .be0      ( int_inputs_4_be0 ),
    .d0       ( int_inputs_4_d0 ),
    .q0       ( int_inputs_4_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_4_address1 ),
    .ce1      ( int_inputs_4_ce1 ),
    .we1      ( int_inputs_4_we1 ),
    .be1      ( int_inputs_4_be1 ),
    .d1       ( int_inputs_4_d1 ),
    .q1       ( int_inputs_4_q1 )
);
// int_inputs_5
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_5 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_5_address0 ),
    .ce0      ( int_inputs_5_ce0 ),
    .we0      ( int_inputs_5_we0 ),
    .be0      ( int_inputs_5_be0 ),
    .d0       ( int_inputs_5_d0 ),
    .q0       ( int_inputs_5_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_5_address1 ),
    .ce1      ( int_inputs_5_ce1 ),
    .we1      ( int_inputs_5_we1 ),
    .be1      ( int_inputs_5_be1 ),
    .d1       ( int_inputs_5_d1 ),
    .q1       ( int_inputs_5_q1 )
);
// int_inputs_6
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_6 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_6_address0 ),
    .ce0      ( int_inputs_6_ce0 ),
    .we0      ( int_inputs_6_we0 ),
    .be0      ( int_inputs_6_be0 ),
    .d0       ( int_inputs_6_d0 ),
    .q0       ( int_inputs_6_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_6_address1 ),
    .ce1      ( int_inputs_6_ce1 ),
    .we1      ( int_inputs_6_we1 ),
    .be1      ( int_inputs_6_be1 ),
    .d1       ( int_inputs_6_d1 ),
    .q1       ( int_inputs_6_q1 )
);
// int_inputs_7
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_7 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_7_address0 ),
    .ce0      ( int_inputs_7_ce0 ),
    .we0      ( int_inputs_7_we0 ),
    .be0      ( int_inputs_7_be0 ),
    .d0       ( int_inputs_7_d0 ),
    .q0       ( int_inputs_7_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_7_address1 ),
    .ce1      ( int_inputs_7_ce1 ),
    .we1      ( int_inputs_7_we1 ),
    .be1      ( int_inputs_7_be1 ),
    .d1       ( int_inputs_7_d1 ),
    .q1       ( int_inputs_7_q1 )
);
// int_inputs_8
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_8 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_8_address0 ),
    .ce0      ( int_inputs_8_ce0 ),
    .we0      ( int_inputs_8_we0 ),
    .be0      ( int_inputs_8_be0 ),
    .d0       ( int_inputs_8_d0 ),
    .q0       ( int_inputs_8_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_8_address1 ),
    .ce1      ( int_inputs_8_ce1 ),
    .we1      ( int_inputs_8_we1 ),
    .be1      ( int_inputs_8_be1 ),
    .d1       ( int_inputs_8_d1 ),
    .q1       ( int_inputs_8_q1 )
);
// int_inputs_9
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_9 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_9_address0 ),
    .ce0      ( int_inputs_9_ce0 ),
    .we0      ( int_inputs_9_we0 ),
    .be0      ( int_inputs_9_be0 ),
    .d0       ( int_inputs_9_d0 ),
    .q0       ( int_inputs_9_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_9_address1 ),
    .ce1      ( int_inputs_9_ce1 ),
    .we1      ( int_inputs_9_we1 ),
    .be1      ( int_inputs_9_be1 ),
    .d1       ( int_inputs_9_d1 ),
    .q1       ( int_inputs_9_q1 )
);
// int_inputs_10
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_10 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_10_address0 ),
    .ce0      ( int_inputs_10_ce0 ),
    .we0      ( int_inputs_10_we0 ),
    .be0      ( int_inputs_10_be0 ),
    .d0       ( int_inputs_10_d0 ),
    .q0       ( int_inputs_10_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_10_address1 ),
    .ce1      ( int_inputs_10_ce1 ),
    .we1      ( int_inputs_10_we1 ),
    .be1      ( int_inputs_10_be1 ),
    .d1       ( int_inputs_10_d1 ),
    .q1       ( int_inputs_10_q1 )
);
// int_inputs_11
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_11 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_11_address0 ),
    .ce0      ( int_inputs_11_ce0 ),
    .we0      ( int_inputs_11_we0 ),
    .be0      ( int_inputs_11_be0 ),
    .d0       ( int_inputs_11_d0 ),
    .q0       ( int_inputs_11_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_11_address1 ),
    .ce1      ( int_inputs_11_ce1 ),
    .we1      ( int_inputs_11_we1 ),
    .be1      ( int_inputs_11_be1 ),
    .d1       ( int_inputs_11_d1 ),
    .q1       ( int_inputs_11_q1 )
);
// int_inputs_12
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_12 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_12_address0 ),
    .ce0      ( int_inputs_12_ce0 ),
    .we0      ( int_inputs_12_we0 ),
    .be0      ( int_inputs_12_be0 ),
    .d0       ( int_inputs_12_d0 ),
    .q0       ( int_inputs_12_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_12_address1 ),
    .ce1      ( int_inputs_12_ce1 ),
    .we1      ( int_inputs_12_we1 ),
    .be1      ( int_inputs_12_be1 ),
    .d1       ( int_inputs_12_d1 ),
    .q1       ( int_inputs_12_q1 )
);
// int_inputs_13
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_13 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_13_address0 ),
    .ce0      ( int_inputs_13_ce0 ),
    .we0      ( int_inputs_13_we0 ),
    .be0      ( int_inputs_13_be0 ),
    .d0       ( int_inputs_13_d0 ),
    .q0       ( int_inputs_13_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_13_address1 ),
    .ce1      ( int_inputs_13_ce1 ),
    .we1      ( int_inputs_13_we1 ),
    .be1      ( int_inputs_13_be1 ),
    .d1       ( int_inputs_13_d1 ),
    .q1       ( int_inputs_13_q1 )
);
// int_inputs_14
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_14 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_14_address0 ),
    .ce0      ( int_inputs_14_ce0 ),
    .we0      ( int_inputs_14_we0 ),
    .be0      ( int_inputs_14_be0 ),
    .d0       ( int_inputs_14_d0 ),
    .q0       ( int_inputs_14_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_14_address1 ),
    .ce1      ( int_inputs_14_ce1 ),
    .we1      ( int_inputs_14_we1 ),
    .be1      ( int_inputs_14_be1 ),
    .d1       ( int_inputs_14_d1 ),
    .q1       ( int_inputs_14_q1 )
);
// int_inputs_15
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_15 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_15_address0 ),
    .ce0      ( int_inputs_15_ce0 ),
    .we0      ( int_inputs_15_we0 ),
    .be0      ( int_inputs_15_be0 ),
    .d0       ( int_inputs_15_d0 ),
    .q0       ( int_inputs_15_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_15_address1 ),
    .ce1      ( int_inputs_15_ce1 ),
    .we1      ( int_inputs_15_we1 ),
    .be1      ( int_inputs_15_be1 ),
    .d1       ( int_inputs_15_d1 ),
    .q1       ( int_inputs_15_q1 )
);
// int_inputs_16
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_16 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_16_address0 ),
    .ce0      ( int_inputs_16_ce0 ),
    .we0      ( int_inputs_16_we0 ),
    .be0      ( int_inputs_16_be0 ),
    .d0       ( int_inputs_16_d0 ),
    .q0       ( int_inputs_16_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_16_address1 ),
    .ce1      ( int_inputs_16_ce1 ),
    .we1      ( int_inputs_16_we1 ),
    .be1      ( int_inputs_16_be1 ),
    .d1       ( int_inputs_16_d1 ),
    .q1       ( int_inputs_16_q1 )
);
// int_inputs_17
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_17 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_17_address0 ),
    .ce0      ( int_inputs_17_ce0 ),
    .we0      ( int_inputs_17_we0 ),
    .be0      ( int_inputs_17_be0 ),
    .d0       ( int_inputs_17_d0 ),
    .q0       ( int_inputs_17_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_17_address1 ),
    .ce1      ( int_inputs_17_ce1 ),
    .we1      ( int_inputs_17_we1 ),
    .be1      ( int_inputs_17_be1 ),
    .d1       ( int_inputs_17_d1 ),
    .q1       ( int_inputs_17_q1 )
);
// int_inputs_18
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_18 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_18_address0 ),
    .ce0      ( int_inputs_18_ce0 ),
    .we0      ( int_inputs_18_we0 ),
    .be0      ( int_inputs_18_be0 ),
    .d0       ( int_inputs_18_d0 ),
    .q0       ( int_inputs_18_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_18_address1 ),
    .ce1      ( int_inputs_18_ce1 ),
    .we1      ( int_inputs_18_we1 ),
    .be1      ( int_inputs_18_be1 ),
    .d1       ( int_inputs_18_d1 ),
    .q1       ( int_inputs_18_q1 )
);
// int_inputs_19
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_19 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_19_address0 ),
    .ce0      ( int_inputs_19_ce0 ),
    .we0      ( int_inputs_19_we0 ),
    .be0      ( int_inputs_19_be0 ),
    .d0       ( int_inputs_19_d0 ),
    .q0       ( int_inputs_19_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_19_address1 ),
    .ce1      ( int_inputs_19_ce1 ),
    .we1      ( int_inputs_19_we1 ),
    .be1      ( int_inputs_19_be1 ),
    .d1       ( int_inputs_19_d1 ),
    .q1       ( int_inputs_19_q1 )
);
// int_inputs_20
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_20 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_20_address0 ),
    .ce0      ( int_inputs_20_ce0 ),
    .we0      ( int_inputs_20_we0 ),
    .be0      ( int_inputs_20_be0 ),
    .d0       ( int_inputs_20_d0 ),
    .q0       ( int_inputs_20_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_20_address1 ),
    .ce1      ( int_inputs_20_ce1 ),
    .we1      ( int_inputs_20_we1 ),
    .be1      ( int_inputs_20_be1 ),
    .d1       ( int_inputs_20_d1 ),
    .q1       ( int_inputs_20_q1 )
);
// int_inputs_21
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_21 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_21_address0 ),
    .ce0      ( int_inputs_21_ce0 ),
    .we0      ( int_inputs_21_we0 ),
    .be0      ( int_inputs_21_be0 ),
    .d0       ( int_inputs_21_d0 ),
    .q0       ( int_inputs_21_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_21_address1 ),
    .ce1      ( int_inputs_21_ce1 ),
    .we1      ( int_inputs_21_we1 ),
    .be1      ( int_inputs_21_be1 ),
    .d1       ( int_inputs_21_d1 ),
    .q1       ( int_inputs_21_q1 )
);
// int_inputs_22
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_22 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_22_address0 ),
    .ce0      ( int_inputs_22_ce0 ),
    .we0      ( int_inputs_22_we0 ),
    .be0      ( int_inputs_22_be0 ),
    .d0       ( int_inputs_22_d0 ),
    .q0       ( int_inputs_22_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_22_address1 ),
    .ce1      ( int_inputs_22_ce1 ),
    .we1      ( int_inputs_22_we1 ),
    .be1      ( int_inputs_22_be1 ),
    .d1       ( int_inputs_22_d1 ),
    .q1       ( int_inputs_22_q1 )
);
// int_inputs_23
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 4 )
) int_inputs_23 (
    .clk0     ( ACLK ),
    .address0 ( int_inputs_23_address0 ),
    .ce0      ( int_inputs_23_ce0 ),
    .we0      ( int_inputs_23_we0 ),
    .be0      ( int_inputs_23_be0 ),
    .d0       ( int_inputs_23_d0 ),
    .q0       ( int_inputs_23_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_inputs_23_address1 ),
    .ce1      ( int_inputs_23_ce1 ),
    .we1      ( int_inputs_23_we1 ),
    .be1      ( int_inputs_23_be1 ),
    .d1       ( int_inputs_23_d1 ),
    .q1       ( int_inputs_23_q1 )
);

//------------------------AXI write fsm------------------
assign AWREADY = (wstate == WRIDLE);
assign WREADY  = (wstate == WRDATA);
assign BRESP   = 2'b00;  // OKAY
assign BVALID  = (wstate == WRRESP);
assign wmask   = { {8{WSTRB[3]}}, {8{WSTRB[2]}}, {8{WSTRB[1]}}, {8{WSTRB[0]}} };
assign aw_hs   = AWVALID & AWREADY;
assign w_hs    = WVALID & WREADY;

// wstate
always @(posedge ACLK) begin
    if (ARESET)
        wstate <= WRRESET;
    else if (ACLK_EN)
        wstate <= wnext;
end

// wnext
always @(*) begin
    case (wstate)
        WRIDLE:
            if (AWVALID)
                wnext = WRDATA;
            else
                wnext = WRIDLE;
        WRDATA:
            if (WVALID)
                wnext = WRRESP;
            else
                wnext = WRDATA;
        WRRESP:
            if (BREADY)
                wnext = WRIDLE;
            else
                wnext = WRRESP;
        default:
            wnext = WRIDLE;
    endcase
end

// waddr
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (aw_hs)
            waddr <= AWADDR[ADDR_BITS-1:0];
    end
end

//------------------------AXI read fsm-------------------
assign ARREADY = (rstate == RDIDLE);
assign RDATA   = rdata;
assign RRESP   = 2'b00;  // OKAY
assign RVALID  = (rstate == RDDATA) & !int_inputs_0_read & !int_inputs_1_read & !int_inputs_2_read & !int_inputs_3_read & !int_inputs_4_read & !int_inputs_5_read & !int_inputs_6_read & !int_inputs_7_read & !int_inputs_8_read & !int_inputs_9_read & !int_inputs_10_read & !int_inputs_11_read & !int_inputs_12_read & !int_inputs_13_read & !int_inputs_14_read & !int_inputs_15_read & !int_inputs_16_read & !int_inputs_17_read & !int_inputs_18_read & !int_inputs_19_read & !int_inputs_20_read & !int_inputs_21_read & !int_inputs_22_read & !int_inputs_23_read;
assign ar_hs   = ARVALID & ARREADY;
assign raddr   = ARADDR[ADDR_BITS-1:0];

// rstate
always @(posedge ACLK) begin
    if (ARESET)
        rstate <= RDRESET;
    else if (ACLK_EN)
        rstate <= rnext;
end

// rnext
always @(*) begin
    case (rstate)
        RDIDLE:
            if (ARVALID)
                rnext = RDDATA;
            else
                rnext = RDIDLE;
        RDDATA:
            if (RREADY & RVALID)
                rnext = RDIDLE;
            else
                rnext = RDDATA;
        default:
            rnext = RDIDLE;
    endcase
end

// rdata
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs) begin
            rdata <= 1'b0;
            case (raddr)
                ADDR_AP_CTRL: begin
                    rdata[0] <= int_ap_start;
                    rdata[1] <= int_ap_done;
                    rdata[2] <= int_ap_idle;
                    rdata[3] <= int_ap_ready;
                    rdata[7] <= int_auto_restart;
                end
                ADDR_GIE: begin
                    rdata <= int_gie;
                end
                ADDR_IER: begin
                    rdata <= int_ier;
                end
                ADDR_ISR: begin
                    rdata <= int_isr;
                end
                ADDR_COUNTS_0_I_DATA_0: begin
                    rdata <= int_counts_0_i[31:0];
                end
                ADDR_COUNTS_0_O_DATA_0: begin
                    rdata <= int_counts_0_o[31:0];
                end
                ADDR_COUNTS_0_O_CTRL: begin
                    rdata[0] <= int_counts_0_o_ap_vld;
                end
                ADDR_COUNTS_1_I_DATA_0: begin
                    rdata <= int_counts_1_i[31:0];
                end
                ADDR_COUNTS_1_O_DATA_0: begin
                    rdata <= int_counts_1_o[31:0];
                end
                ADDR_COUNTS_1_O_CTRL: begin
                    rdata[0] <= int_counts_1_o_ap_vld;
                end
                ADDR_COUNTS_2_I_DATA_0: begin
                    rdata <= int_counts_2_i[31:0];
                end
                ADDR_COUNTS_2_O_DATA_0: begin
                    rdata <= int_counts_2_o[31:0];
                end
                ADDR_COUNTS_2_O_CTRL: begin
                    rdata[0] <= int_counts_2_o_ap_vld;
                end
                ADDR_COUNTS_3_I_DATA_0: begin
                    rdata <= int_counts_3_i[31:0];
                end
                ADDR_COUNTS_3_O_DATA_0: begin
                    rdata <= int_counts_3_o[31:0];
                end
                ADDR_COUNTS_3_O_CTRL: begin
                    rdata[0] <= int_counts_3_o_ap_vld;
                end
                ADDR_COUNTS_4_I_DATA_0: begin
                    rdata <= int_counts_4_i[31:0];
                end
                ADDR_COUNTS_4_O_DATA_0: begin
                    rdata <= int_counts_4_o[31:0];
                end
                ADDR_COUNTS_4_O_CTRL: begin
                    rdata[0] <= int_counts_4_o_ap_vld;
                end
                ADDR_COUNTS_5_I_DATA_0: begin
                    rdata <= int_counts_5_i[31:0];
                end
                ADDR_COUNTS_5_O_DATA_0: begin
                    rdata <= int_counts_5_o[31:0];
                end
                ADDR_COUNTS_5_O_CTRL: begin
                    rdata[0] <= int_counts_5_o_ap_vld;
                end
                ADDR_COUNTS_6_I_DATA_0: begin
                    rdata <= int_counts_6_i[31:0];
                end
                ADDR_COUNTS_6_O_DATA_0: begin
                    rdata <= int_counts_6_o[31:0];
                end
                ADDR_COUNTS_6_O_CTRL: begin
                    rdata[0] <= int_counts_6_o_ap_vld;
                end
                ADDR_COUNTS_7_I_DATA_0: begin
                    rdata <= int_counts_7_i[31:0];
                end
                ADDR_COUNTS_7_O_DATA_0: begin
                    rdata <= int_counts_7_o[31:0];
                end
                ADDR_COUNTS_7_O_CTRL: begin
                    rdata[0] <= int_counts_7_o_ap_vld;
                end
                ADDR_COUNTS_8_I_DATA_0: begin
                    rdata <= int_counts_8_i[31:0];
                end
                ADDR_COUNTS_8_O_DATA_0: begin
                    rdata <= int_counts_8_o[31:0];
                end
                ADDR_COUNTS_8_O_CTRL: begin
                    rdata[0] <= int_counts_8_o_ap_vld;
                end
                ADDR_COUNTS_9_I_DATA_0: begin
                    rdata <= int_counts_9_i[31:0];
                end
                ADDR_COUNTS_9_O_DATA_0: begin
                    rdata <= int_counts_9_o[31:0];
                end
                ADDR_COUNTS_9_O_CTRL: begin
                    rdata[0] <= int_counts_9_o_ap_vld;
                end
                ADDR_COUNTS_10_I_DATA_0: begin
                    rdata <= int_counts_10_i[31:0];
                end
                ADDR_COUNTS_10_O_DATA_0: begin
                    rdata <= int_counts_10_o[31:0];
                end
                ADDR_COUNTS_10_O_CTRL: begin
                    rdata[0] <= int_counts_10_o_ap_vld;
                end
                ADDR_COUNTS_11_I_DATA_0: begin
                    rdata <= int_counts_11_i[31:0];
                end
                ADDR_COUNTS_11_O_DATA_0: begin
                    rdata <= int_counts_11_o[31:0];
                end
                ADDR_COUNTS_11_O_CTRL: begin
                    rdata[0] <= int_counts_11_o_ap_vld;
                end
                ADDR_COUNTS_12_I_DATA_0: begin
                    rdata <= int_counts_12_i[31:0];
                end
                ADDR_COUNTS_12_O_DATA_0: begin
                    rdata <= int_counts_12_o[31:0];
                end
                ADDR_COUNTS_12_O_CTRL: begin
                    rdata[0] <= int_counts_12_o_ap_vld;
                end
                ADDR_COUNTS_13_I_DATA_0: begin
                    rdata <= int_counts_13_i[31:0];
                end
                ADDR_COUNTS_13_O_DATA_0: begin
                    rdata <= int_counts_13_o[31:0];
                end
                ADDR_COUNTS_13_O_CTRL: begin
                    rdata[0] <= int_counts_13_o_ap_vld;
                end
                ADDR_COUNTS_14_I_DATA_0: begin
                    rdata <= int_counts_14_i[31:0];
                end
                ADDR_COUNTS_14_O_DATA_0: begin
                    rdata <= int_counts_14_o[31:0];
                end
                ADDR_COUNTS_14_O_CTRL: begin
                    rdata[0] <= int_counts_14_o_ap_vld;
                end
                ADDR_COUNTS_15_I_DATA_0: begin
                    rdata <= int_counts_15_i[31:0];
                end
                ADDR_COUNTS_15_O_DATA_0: begin
                    rdata <= int_counts_15_o[31:0];
                end
                ADDR_COUNTS_15_O_CTRL: begin
                    rdata[0] <= int_counts_15_o_ap_vld;
                end
                ADDR_COUNTS_16_I_DATA_0: begin
                    rdata <= int_counts_16_i[31:0];
                end
                ADDR_COUNTS_16_O_DATA_0: begin
                    rdata <= int_counts_16_o[31:0];
                end
                ADDR_COUNTS_16_O_CTRL: begin
                    rdata[0] <= int_counts_16_o_ap_vld;
                end
                ADDR_COUNTS_17_I_DATA_0: begin
                    rdata <= int_counts_17_i[31:0];
                end
                ADDR_COUNTS_17_O_DATA_0: begin
                    rdata <= int_counts_17_o[31:0];
                end
                ADDR_COUNTS_17_O_CTRL: begin
                    rdata[0] <= int_counts_17_o_ap_vld;
                end
                ADDR_COUNTS_18_I_DATA_0: begin
                    rdata <= int_counts_18_i[31:0];
                end
                ADDR_COUNTS_18_O_DATA_0: begin
                    rdata <= int_counts_18_o[31:0];
                end
                ADDR_COUNTS_18_O_CTRL: begin
                    rdata[0] <= int_counts_18_o_ap_vld;
                end
                ADDR_COUNTS_19_I_DATA_0: begin
                    rdata <= int_counts_19_i[31:0];
                end
                ADDR_COUNTS_19_O_DATA_0: begin
                    rdata <= int_counts_19_o[31:0];
                end
                ADDR_COUNTS_19_O_CTRL: begin
                    rdata[0] <= int_counts_19_o_ap_vld;
                end
                ADDR_COUNTS_20_I_DATA_0: begin
                    rdata <= int_counts_20_i[31:0];
                end
                ADDR_COUNTS_20_O_DATA_0: begin
                    rdata <= int_counts_20_o[31:0];
                end
                ADDR_COUNTS_20_O_CTRL: begin
                    rdata[0] <= int_counts_20_o_ap_vld;
                end
                ADDR_COUNTS_21_I_DATA_0: begin
                    rdata <= int_counts_21_i[31:0];
                end
                ADDR_COUNTS_21_O_DATA_0: begin
                    rdata <= int_counts_21_o[31:0];
                end
                ADDR_COUNTS_21_O_CTRL: begin
                    rdata[0] <= int_counts_21_o_ap_vld;
                end
                ADDR_COUNTS_22_I_DATA_0: begin
                    rdata <= int_counts_22_i[31:0];
                end
                ADDR_COUNTS_22_O_DATA_0: begin
                    rdata <= int_counts_22_o[31:0];
                end
                ADDR_COUNTS_22_O_CTRL: begin
                    rdata[0] <= int_counts_22_o_ap_vld;
                end
                ADDR_COUNTS_23_I_DATA_0: begin
                    rdata <= int_counts_23_i[31:0];
                end
                ADDR_COUNTS_23_O_DATA_0: begin
                    rdata <= int_counts_23_o[31:0];
                end
                ADDR_COUNTS_23_O_CTRL: begin
                    rdata[0] <= int_counts_23_o_ap_vld;
                end
                ADDR_OUTPUTS_0_DATA_0: begin
                    rdata <= int_outputs_0[31:0];
                end
                ADDR_OUTPUTS_0_CTRL: begin
                    rdata[0] <= int_outputs_0_ap_vld;
                end
                ADDR_OUTPUTS_1_DATA_0: begin
                    rdata <= int_outputs_1[31:0];
                end
                ADDR_OUTPUTS_1_CTRL: begin
                    rdata[0] <= int_outputs_1_ap_vld;
                end
                ADDR_OUTPUTS_2_DATA_0: begin
                    rdata <= int_outputs_2[31:0];
                end
                ADDR_OUTPUTS_2_CTRL: begin
                    rdata[0] <= int_outputs_2_ap_vld;
                end
                ADDR_OUTPUTS_3_DATA_0: begin
                    rdata <= int_outputs_3[31:0];
                end
                ADDR_OUTPUTS_3_CTRL: begin
                    rdata[0] <= int_outputs_3_ap_vld;
                end
                ADDR_OUTPUTS_4_DATA_0: begin
                    rdata <= int_outputs_4[31:0];
                end
                ADDR_OUTPUTS_4_CTRL: begin
                    rdata[0] <= int_outputs_4_ap_vld;
                end
                ADDR_OUTPUTS_5_DATA_0: begin
                    rdata <= int_outputs_5[31:0];
                end
                ADDR_OUTPUTS_5_CTRL: begin
                    rdata[0] <= int_outputs_5_ap_vld;
                end
                ADDR_OUTPUTS_6_DATA_0: begin
                    rdata <= int_outputs_6[31:0];
                end
                ADDR_OUTPUTS_6_CTRL: begin
                    rdata[0] <= int_outputs_6_ap_vld;
                end
                ADDR_OUTPUTS_7_DATA_0: begin
                    rdata <= int_outputs_7[31:0];
                end
                ADDR_OUTPUTS_7_CTRL: begin
                    rdata[0] <= int_outputs_7_ap_vld;
                end
                ADDR_OUTPUTS_8_DATA_0: begin
                    rdata <= int_outputs_8[31:0];
                end
                ADDR_OUTPUTS_8_CTRL: begin
                    rdata[0] <= int_outputs_8_ap_vld;
                end
                ADDR_OUTPUTS_9_DATA_0: begin
                    rdata <= int_outputs_9[31:0];
                end
                ADDR_OUTPUTS_9_CTRL: begin
                    rdata[0] <= int_outputs_9_ap_vld;
                end
                ADDR_OUTPUTS_10_DATA_0: begin
                    rdata <= int_outputs_10[31:0];
                end
                ADDR_OUTPUTS_10_CTRL: begin
                    rdata[0] <= int_outputs_10_ap_vld;
                end
                ADDR_OUTPUTS_11_DATA_0: begin
                    rdata <= int_outputs_11[31:0];
                end
                ADDR_OUTPUTS_11_CTRL: begin
                    rdata[0] <= int_outputs_11_ap_vld;
                end
                ADDR_OUTPUTS_12_DATA_0: begin
                    rdata <= int_outputs_12[31:0];
                end
                ADDR_OUTPUTS_12_CTRL: begin
                    rdata[0] <= int_outputs_12_ap_vld;
                end
                ADDR_OUTPUTS_13_DATA_0: begin
                    rdata <= int_outputs_13[31:0];
                end
                ADDR_OUTPUTS_13_CTRL: begin
                    rdata[0] <= int_outputs_13_ap_vld;
                end
                ADDR_OUTPUTS_14_DATA_0: begin
                    rdata <= int_outputs_14[31:0];
                end
                ADDR_OUTPUTS_14_CTRL: begin
                    rdata[0] <= int_outputs_14_ap_vld;
                end
                ADDR_OUTPUTS_15_DATA_0: begin
                    rdata <= int_outputs_15[31:0];
                end
                ADDR_OUTPUTS_15_CTRL: begin
                    rdata[0] <= int_outputs_15_ap_vld;
                end
                ADDR_OUTPUTS_16_DATA_0: begin
                    rdata <= int_outputs_16[31:0];
                end
                ADDR_OUTPUTS_16_CTRL: begin
                    rdata[0] <= int_outputs_16_ap_vld;
                end
                ADDR_OUTPUTS_17_DATA_0: begin
                    rdata <= int_outputs_17[31:0];
                end
                ADDR_OUTPUTS_17_CTRL: begin
                    rdata[0] <= int_outputs_17_ap_vld;
                end
                ADDR_OUTPUTS_18_DATA_0: begin
                    rdata <= int_outputs_18[31:0];
                end
                ADDR_OUTPUTS_18_CTRL: begin
                    rdata[0] <= int_outputs_18_ap_vld;
                end
                ADDR_OUTPUTS_19_DATA_0: begin
                    rdata <= int_outputs_19[31:0];
                end
                ADDR_OUTPUTS_19_CTRL: begin
                    rdata[0] <= int_outputs_19_ap_vld;
                end
                ADDR_OUTPUTS_20_DATA_0: begin
                    rdata <= int_outputs_20[31:0];
                end
                ADDR_OUTPUTS_20_CTRL: begin
                    rdata[0] <= int_outputs_20_ap_vld;
                end
                ADDR_OUTPUTS_21_DATA_0: begin
                    rdata <= int_outputs_21[31:0];
                end
                ADDR_OUTPUTS_21_CTRL: begin
                    rdata[0] <= int_outputs_21_ap_vld;
                end
                ADDR_OUTPUTS_22_DATA_0: begin
                    rdata <= int_outputs_22[31:0];
                end
                ADDR_OUTPUTS_22_CTRL: begin
                    rdata[0] <= int_outputs_22_ap_vld;
                end
                ADDR_OUTPUTS_23_DATA_0: begin
                    rdata <= int_outputs_23[31:0];
                end
                ADDR_OUTPUTS_23_CTRL: begin
                    rdata[0] <= int_outputs_23_ap_vld;
                end
            endcase
        end
        else if (int_inputs_0_read) begin
            rdata <= int_inputs_0_q1;
        end
        else if (int_inputs_1_read) begin
            rdata <= int_inputs_1_q1;
        end
        else if (int_inputs_2_read) begin
            rdata <= int_inputs_2_q1;
        end
        else if (int_inputs_3_read) begin
            rdata <= int_inputs_3_q1;
        end
        else if (int_inputs_4_read) begin
            rdata <= int_inputs_4_q1;
        end
        else if (int_inputs_5_read) begin
            rdata <= int_inputs_5_q1;
        end
        else if (int_inputs_6_read) begin
            rdata <= int_inputs_6_q1;
        end
        else if (int_inputs_7_read) begin
            rdata <= int_inputs_7_q1;
        end
        else if (int_inputs_8_read) begin
            rdata <= int_inputs_8_q1;
        end
        else if (int_inputs_9_read) begin
            rdata <= int_inputs_9_q1;
        end
        else if (int_inputs_10_read) begin
            rdata <= int_inputs_10_q1;
        end
        else if (int_inputs_11_read) begin
            rdata <= int_inputs_11_q1;
        end
        else if (int_inputs_12_read) begin
            rdata <= int_inputs_12_q1;
        end
        else if (int_inputs_13_read) begin
            rdata <= int_inputs_13_q1;
        end
        else if (int_inputs_14_read) begin
            rdata <= int_inputs_14_q1;
        end
        else if (int_inputs_15_read) begin
            rdata <= int_inputs_15_q1;
        end
        else if (int_inputs_16_read) begin
            rdata <= int_inputs_16_q1;
        end
        else if (int_inputs_17_read) begin
            rdata <= int_inputs_17_q1;
        end
        else if (int_inputs_18_read) begin
            rdata <= int_inputs_18_q1;
        end
        else if (int_inputs_19_read) begin
            rdata <= int_inputs_19_q1;
        end
        else if (int_inputs_20_read) begin
            rdata <= int_inputs_20_q1;
        end
        else if (int_inputs_21_read) begin
            rdata <= int_inputs_21_q1;
        end
        else if (int_inputs_22_read) begin
            rdata <= int_inputs_22_q1;
        end
        else if (int_inputs_23_read) begin
            rdata <= int_inputs_23_q1;
        end
    end
end


//------------------------Register logic-----------------
assign interrupt   = int_gie & (|int_isr);
assign ap_start    = int_ap_start;
assign counts_0_i  = int_counts_0_i;
assign counts_1_i  = int_counts_1_i;
assign counts_2_i  = int_counts_2_i;
assign counts_3_i  = int_counts_3_i;
assign counts_4_i  = int_counts_4_i;
assign counts_5_i  = int_counts_5_i;
assign counts_6_i  = int_counts_6_i;
assign counts_7_i  = int_counts_7_i;
assign counts_8_i  = int_counts_8_i;
assign counts_9_i  = int_counts_9_i;
assign counts_10_i = int_counts_10_i;
assign counts_11_i = int_counts_11_i;
assign counts_12_i = int_counts_12_i;
assign counts_13_i = int_counts_13_i;
assign counts_14_i = int_counts_14_i;
assign counts_15_i = int_counts_15_i;
assign counts_16_i = int_counts_16_i;
assign counts_17_i = int_counts_17_i;
assign counts_18_i = int_counts_18_i;
assign counts_19_i = int_counts_19_i;
assign counts_20_i = int_counts_20_i;
assign counts_21_i = int_counts_21_i;
assign counts_22_i = int_counts_22_i;
assign counts_23_i = int_counts_23_i;
// int_ap_start
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_start <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0] && WDATA[0])
            int_ap_start <= 1'b1;
        else if (ap_ready)
            int_ap_start <= int_auto_restart; // clear on handshake/auto restart
    end
end

// int_ap_done
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_done <= 1'b0;
    else if (ACLK_EN) begin
        if (ap_done)
            int_ap_done <= 1'b1;
        else if (ar_hs && raddr == ADDR_AP_CTRL)
            int_ap_done <= 1'b0; // clear on read
    end
end

// int_ap_idle
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_idle <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_idle <= ap_idle;
    end
end

// int_ap_ready
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_ready <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_ready <= ap_ready;
    end
end

// int_auto_restart
always @(posedge ACLK) begin
    if (ARESET)
        int_auto_restart <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0])
            int_auto_restart <=  WDATA[7];
    end
end

// int_gie
always @(posedge ACLK) begin
    if (ARESET)
        int_gie <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_GIE && WSTRB[0])
            int_gie <= WDATA[0];
    end
end

// int_ier
always @(posedge ACLK) begin
    if (ARESET)
        int_ier <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IER && WSTRB[0])
            int_ier <= WDATA[1:0];
    end
end

// int_isr[0]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[0] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[0] & ap_done)
            int_isr[0] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[0] <= int_isr[0] ^ WDATA[0]; // toggle on write
    end
end

// int_isr[1]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[1] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[1] & ap_ready)
            int_isr[1] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[1] <= int_isr[1] ^ WDATA[1]; // toggle on write
    end
end

// int_counts_0_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_0_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_0_I_DATA_0)
            int_counts_0_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_0_i[31:0] & ~wmask);
    end
end

// int_counts_0_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_0_o <= 0;
    else if (ACLK_EN) begin
        if (counts_0_o_ap_vld)
            int_counts_0_o <= counts_0_o;
    end
end

// int_counts_0_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_0_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_0_o_ap_vld)
            int_counts_0_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_0_O_CTRL)
            int_counts_0_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_1_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_1_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_1_I_DATA_0)
            int_counts_1_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_1_i[31:0] & ~wmask);
    end
end

// int_counts_1_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_1_o <= 0;
    else if (ACLK_EN) begin
        if (counts_1_o_ap_vld)
            int_counts_1_o <= counts_1_o;
    end
end

// int_counts_1_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_1_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_1_o_ap_vld)
            int_counts_1_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_1_O_CTRL)
            int_counts_1_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_2_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_2_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_2_I_DATA_0)
            int_counts_2_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_2_i[31:0] & ~wmask);
    end
end

// int_counts_2_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_2_o <= 0;
    else if (ACLK_EN) begin
        if (counts_2_o_ap_vld)
            int_counts_2_o <= counts_2_o;
    end
end

// int_counts_2_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_2_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_2_o_ap_vld)
            int_counts_2_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_2_O_CTRL)
            int_counts_2_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_3_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_3_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_3_I_DATA_0)
            int_counts_3_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_3_i[31:0] & ~wmask);
    end
end

// int_counts_3_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_3_o <= 0;
    else if (ACLK_EN) begin
        if (counts_3_o_ap_vld)
            int_counts_3_o <= counts_3_o;
    end
end

// int_counts_3_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_3_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_3_o_ap_vld)
            int_counts_3_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_3_O_CTRL)
            int_counts_3_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_4_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_4_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_4_I_DATA_0)
            int_counts_4_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_4_i[31:0] & ~wmask);
    end
end

// int_counts_4_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_4_o <= 0;
    else if (ACLK_EN) begin
        if (counts_4_o_ap_vld)
            int_counts_4_o <= counts_4_o;
    end
end

// int_counts_4_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_4_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_4_o_ap_vld)
            int_counts_4_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_4_O_CTRL)
            int_counts_4_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_5_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_5_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_5_I_DATA_0)
            int_counts_5_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_5_i[31:0] & ~wmask);
    end
end

// int_counts_5_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_5_o <= 0;
    else if (ACLK_EN) begin
        if (counts_5_o_ap_vld)
            int_counts_5_o <= counts_5_o;
    end
end

// int_counts_5_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_5_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_5_o_ap_vld)
            int_counts_5_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_5_O_CTRL)
            int_counts_5_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_6_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_6_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_6_I_DATA_0)
            int_counts_6_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_6_i[31:0] & ~wmask);
    end
end

// int_counts_6_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_6_o <= 0;
    else if (ACLK_EN) begin
        if (counts_6_o_ap_vld)
            int_counts_6_o <= counts_6_o;
    end
end

// int_counts_6_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_6_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_6_o_ap_vld)
            int_counts_6_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_6_O_CTRL)
            int_counts_6_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_7_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_7_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_7_I_DATA_0)
            int_counts_7_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_7_i[31:0] & ~wmask);
    end
end

// int_counts_7_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_7_o <= 0;
    else if (ACLK_EN) begin
        if (counts_7_o_ap_vld)
            int_counts_7_o <= counts_7_o;
    end
end

// int_counts_7_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_7_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_7_o_ap_vld)
            int_counts_7_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_7_O_CTRL)
            int_counts_7_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_8_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_8_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_8_I_DATA_0)
            int_counts_8_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_8_i[31:0] & ~wmask);
    end
end

// int_counts_8_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_8_o <= 0;
    else if (ACLK_EN) begin
        if (counts_8_o_ap_vld)
            int_counts_8_o <= counts_8_o;
    end
end

// int_counts_8_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_8_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_8_o_ap_vld)
            int_counts_8_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_8_O_CTRL)
            int_counts_8_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_9_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_9_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_9_I_DATA_0)
            int_counts_9_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_9_i[31:0] & ~wmask);
    end
end

// int_counts_9_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_9_o <= 0;
    else if (ACLK_EN) begin
        if (counts_9_o_ap_vld)
            int_counts_9_o <= counts_9_o;
    end
end

// int_counts_9_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_9_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_9_o_ap_vld)
            int_counts_9_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_9_O_CTRL)
            int_counts_9_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_10_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_10_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_10_I_DATA_0)
            int_counts_10_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_10_i[31:0] & ~wmask);
    end
end

// int_counts_10_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_10_o <= 0;
    else if (ACLK_EN) begin
        if (counts_10_o_ap_vld)
            int_counts_10_o <= counts_10_o;
    end
end

// int_counts_10_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_10_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_10_o_ap_vld)
            int_counts_10_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_10_O_CTRL)
            int_counts_10_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_11_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_11_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_11_I_DATA_0)
            int_counts_11_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_11_i[31:0] & ~wmask);
    end
end

// int_counts_11_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_11_o <= 0;
    else if (ACLK_EN) begin
        if (counts_11_o_ap_vld)
            int_counts_11_o <= counts_11_o;
    end
end

// int_counts_11_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_11_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_11_o_ap_vld)
            int_counts_11_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_11_O_CTRL)
            int_counts_11_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_12_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_12_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_12_I_DATA_0)
            int_counts_12_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_12_i[31:0] & ~wmask);
    end
end

// int_counts_12_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_12_o <= 0;
    else if (ACLK_EN) begin
        if (counts_12_o_ap_vld)
            int_counts_12_o <= counts_12_o;
    end
end

// int_counts_12_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_12_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_12_o_ap_vld)
            int_counts_12_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_12_O_CTRL)
            int_counts_12_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_13_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_13_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_13_I_DATA_0)
            int_counts_13_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_13_i[31:0] & ~wmask);
    end
end

// int_counts_13_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_13_o <= 0;
    else if (ACLK_EN) begin
        if (counts_13_o_ap_vld)
            int_counts_13_o <= counts_13_o;
    end
end

// int_counts_13_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_13_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_13_o_ap_vld)
            int_counts_13_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_13_O_CTRL)
            int_counts_13_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_14_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_14_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_14_I_DATA_0)
            int_counts_14_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_14_i[31:0] & ~wmask);
    end
end

// int_counts_14_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_14_o <= 0;
    else if (ACLK_EN) begin
        if (counts_14_o_ap_vld)
            int_counts_14_o <= counts_14_o;
    end
end

// int_counts_14_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_14_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_14_o_ap_vld)
            int_counts_14_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_14_O_CTRL)
            int_counts_14_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_15_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_15_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_15_I_DATA_0)
            int_counts_15_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_15_i[31:0] & ~wmask);
    end
end

// int_counts_15_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_15_o <= 0;
    else if (ACLK_EN) begin
        if (counts_15_o_ap_vld)
            int_counts_15_o <= counts_15_o;
    end
end

// int_counts_15_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_15_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_15_o_ap_vld)
            int_counts_15_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_15_O_CTRL)
            int_counts_15_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_16_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_16_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_16_I_DATA_0)
            int_counts_16_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_16_i[31:0] & ~wmask);
    end
end

// int_counts_16_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_16_o <= 0;
    else if (ACLK_EN) begin
        if (counts_16_o_ap_vld)
            int_counts_16_o <= counts_16_o;
    end
end

// int_counts_16_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_16_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_16_o_ap_vld)
            int_counts_16_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_16_O_CTRL)
            int_counts_16_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_17_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_17_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_17_I_DATA_0)
            int_counts_17_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_17_i[31:0] & ~wmask);
    end
end

// int_counts_17_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_17_o <= 0;
    else if (ACLK_EN) begin
        if (counts_17_o_ap_vld)
            int_counts_17_o <= counts_17_o;
    end
end

// int_counts_17_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_17_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_17_o_ap_vld)
            int_counts_17_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_17_O_CTRL)
            int_counts_17_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_18_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_18_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_18_I_DATA_0)
            int_counts_18_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_18_i[31:0] & ~wmask);
    end
end

// int_counts_18_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_18_o <= 0;
    else if (ACLK_EN) begin
        if (counts_18_o_ap_vld)
            int_counts_18_o <= counts_18_o;
    end
end

// int_counts_18_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_18_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_18_o_ap_vld)
            int_counts_18_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_18_O_CTRL)
            int_counts_18_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_19_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_19_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_19_I_DATA_0)
            int_counts_19_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_19_i[31:0] & ~wmask);
    end
end

// int_counts_19_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_19_o <= 0;
    else if (ACLK_EN) begin
        if (counts_19_o_ap_vld)
            int_counts_19_o <= counts_19_o;
    end
end

// int_counts_19_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_19_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_19_o_ap_vld)
            int_counts_19_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_19_O_CTRL)
            int_counts_19_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_20_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_20_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_20_I_DATA_0)
            int_counts_20_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_20_i[31:0] & ~wmask);
    end
end

// int_counts_20_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_20_o <= 0;
    else if (ACLK_EN) begin
        if (counts_20_o_ap_vld)
            int_counts_20_o <= counts_20_o;
    end
end

// int_counts_20_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_20_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_20_o_ap_vld)
            int_counts_20_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_20_O_CTRL)
            int_counts_20_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_21_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_21_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_21_I_DATA_0)
            int_counts_21_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_21_i[31:0] & ~wmask);
    end
end

// int_counts_21_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_21_o <= 0;
    else if (ACLK_EN) begin
        if (counts_21_o_ap_vld)
            int_counts_21_o <= counts_21_o;
    end
end

// int_counts_21_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_21_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_21_o_ap_vld)
            int_counts_21_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_21_O_CTRL)
            int_counts_21_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_22_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_22_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_22_I_DATA_0)
            int_counts_22_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_22_i[31:0] & ~wmask);
    end
end

// int_counts_22_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_22_o <= 0;
    else if (ACLK_EN) begin
        if (counts_22_o_ap_vld)
            int_counts_22_o <= counts_22_o;
    end
end

// int_counts_22_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_22_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_22_o_ap_vld)
            int_counts_22_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_22_O_CTRL)
            int_counts_22_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_counts_23_i[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_23_i[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_COUNTS_23_I_DATA_0)
            int_counts_23_i[31:0] <= (WDATA[31:0] & wmask) | (int_counts_23_i[31:0] & ~wmask);
    end
end

// int_counts_23_o
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_23_o <= 0;
    else if (ACLK_EN) begin
        if (counts_23_o_ap_vld)
            int_counts_23_o <= counts_23_o;
    end
end

// int_counts_23_o_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_23_o_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (counts_23_o_ap_vld)
            int_counts_23_o_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_COUNTS_23_O_CTRL)
            int_counts_23_o_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_0
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_0 <= 0;
    else if (ACLK_EN) begin
        if (outputs_0_ap_vld)
            int_outputs_0 <= outputs_0;
    end
end

// int_outputs_0_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_0_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_0_ap_vld)
            int_outputs_0_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_0_CTRL)
            int_outputs_0_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_1
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_1 <= 0;
    else if (ACLK_EN) begin
        if (outputs_1_ap_vld)
            int_outputs_1 <= outputs_1;
    end
end

// int_outputs_1_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_1_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_1_ap_vld)
            int_outputs_1_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_1_CTRL)
            int_outputs_1_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_2
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_2 <= 0;
    else if (ACLK_EN) begin
        if (outputs_2_ap_vld)
            int_outputs_2 <= outputs_2;
    end
end

// int_outputs_2_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_2_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_2_ap_vld)
            int_outputs_2_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_2_CTRL)
            int_outputs_2_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_3
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_3 <= 0;
    else if (ACLK_EN) begin
        if (outputs_3_ap_vld)
            int_outputs_3 <= outputs_3;
    end
end

// int_outputs_3_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_3_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_3_ap_vld)
            int_outputs_3_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_3_CTRL)
            int_outputs_3_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_4
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_4 <= 0;
    else if (ACLK_EN) begin
        if (outputs_4_ap_vld)
            int_outputs_4 <= outputs_4;
    end
end

// int_outputs_4_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_4_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_4_ap_vld)
            int_outputs_4_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_4_CTRL)
            int_outputs_4_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_5
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_5 <= 0;
    else if (ACLK_EN) begin
        if (outputs_5_ap_vld)
            int_outputs_5 <= outputs_5;
    end
end

// int_outputs_5_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_5_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_5_ap_vld)
            int_outputs_5_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_5_CTRL)
            int_outputs_5_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_6
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_6 <= 0;
    else if (ACLK_EN) begin
        if (outputs_6_ap_vld)
            int_outputs_6 <= outputs_6;
    end
end

// int_outputs_6_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_6_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_6_ap_vld)
            int_outputs_6_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_6_CTRL)
            int_outputs_6_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_7
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_7 <= 0;
    else if (ACLK_EN) begin
        if (outputs_7_ap_vld)
            int_outputs_7 <= outputs_7;
    end
end

// int_outputs_7_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_7_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_7_ap_vld)
            int_outputs_7_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_7_CTRL)
            int_outputs_7_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_8
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_8 <= 0;
    else if (ACLK_EN) begin
        if (outputs_8_ap_vld)
            int_outputs_8 <= outputs_8;
    end
end

// int_outputs_8_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_8_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_8_ap_vld)
            int_outputs_8_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_8_CTRL)
            int_outputs_8_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_9
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_9 <= 0;
    else if (ACLK_EN) begin
        if (outputs_9_ap_vld)
            int_outputs_9 <= outputs_9;
    end
end

// int_outputs_9_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_9_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_9_ap_vld)
            int_outputs_9_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_9_CTRL)
            int_outputs_9_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_10
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_10 <= 0;
    else if (ACLK_EN) begin
        if (outputs_10_ap_vld)
            int_outputs_10 <= outputs_10;
    end
end

// int_outputs_10_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_10_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_10_ap_vld)
            int_outputs_10_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_10_CTRL)
            int_outputs_10_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_11
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_11 <= 0;
    else if (ACLK_EN) begin
        if (outputs_11_ap_vld)
            int_outputs_11 <= outputs_11;
    end
end

// int_outputs_11_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_11_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_11_ap_vld)
            int_outputs_11_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_11_CTRL)
            int_outputs_11_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_12
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_12 <= 0;
    else if (ACLK_EN) begin
        if (outputs_12_ap_vld)
            int_outputs_12 <= outputs_12;
    end
end

// int_outputs_12_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_12_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_12_ap_vld)
            int_outputs_12_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_12_CTRL)
            int_outputs_12_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_13
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_13 <= 0;
    else if (ACLK_EN) begin
        if (outputs_13_ap_vld)
            int_outputs_13 <= outputs_13;
    end
end

// int_outputs_13_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_13_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_13_ap_vld)
            int_outputs_13_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_13_CTRL)
            int_outputs_13_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_14
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_14 <= 0;
    else if (ACLK_EN) begin
        if (outputs_14_ap_vld)
            int_outputs_14 <= outputs_14;
    end
end

// int_outputs_14_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_14_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_14_ap_vld)
            int_outputs_14_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_14_CTRL)
            int_outputs_14_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_15
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_15 <= 0;
    else if (ACLK_EN) begin
        if (outputs_15_ap_vld)
            int_outputs_15 <= outputs_15;
    end
end

// int_outputs_15_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_15_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_15_ap_vld)
            int_outputs_15_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_15_CTRL)
            int_outputs_15_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_16
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_16 <= 0;
    else if (ACLK_EN) begin
        if (outputs_16_ap_vld)
            int_outputs_16 <= outputs_16;
    end
end

// int_outputs_16_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_16_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_16_ap_vld)
            int_outputs_16_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_16_CTRL)
            int_outputs_16_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_17
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_17 <= 0;
    else if (ACLK_EN) begin
        if (outputs_17_ap_vld)
            int_outputs_17 <= outputs_17;
    end
end

// int_outputs_17_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_17_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_17_ap_vld)
            int_outputs_17_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_17_CTRL)
            int_outputs_17_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_18
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_18 <= 0;
    else if (ACLK_EN) begin
        if (outputs_18_ap_vld)
            int_outputs_18 <= outputs_18;
    end
end

// int_outputs_18_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_18_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_18_ap_vld)
            int_outputs_18_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_18_CTRL)
            int_outputs_18_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_19
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_19 <= 0;
    else if (ACLK_EN) begin
        if (outputs_19_ap_vld)
            int_outputs_19 <= outputs_19;
    end
end

// int_outputs_19_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_19_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_19_ap_vld)
            int_outputs_19_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_19_CTRL)
            int_outputs_19_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_20
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_20 <= 0;
    else if (ACLK_EN) begin
        if (outputs_20_ap_vld)
            int_outputs_20 <= outputs_20;
    end
end

// int_outputs_20_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_20_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_20_ap_vld)
            int_outputs_20_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_20_CTRL)
            int_outputs_20_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_21
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_21 <= 0;
    else if (ACLK_EN) begin
        if (outputs_21_ap_vld)
            int_outputs_21 <= outputs_21;
    end
end

// int_outputs_21_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_21_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_21_ap_vld)
            int_outputs_21_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_21_CTRL)
            int_outputs_21_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_22
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_22 <= 0;
    else if (ACLK_EN) begin
        if (outputs_22_ap_vld)
            int_outputs_22 <= outputs_22;
    end
end

// int_outputs_22_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_22_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_22_ap_vld)
            int_outputs_22_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_22_CTRL)
            int_outputs_22_ap_vld <= 1'b0; // clear on read
    end
end

// int_outputs_23
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_23 <= 0;
    else if (ACLK_EN) begin
        if (outputs_23_ap_vld)
            int_outputs_23 <= outputs_23;
    end
end

// int_outputs_23_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_23_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (outputs_23_ap_vld)
            int_outputs_23_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUTS_23_CTRL)
            int_outputs_23_ap_vld <= 1'b0; // clear on read
    end
end


//------------------------Memory logic-------------------
// inputs_0
assign int_inputs_0_address0  = inputs_0_address0;
assign int_inputs_0_ce0       = inputs_0_ce0;
assign int_inputs_0_we0       = 1'b0;
assign int_inputs_0_be0       = 1'b0;
assign int_inputs_0_d0        = 1'b0;
assign inputs_0_q0            = int_inputs_0_q0;
assign int_inputs_0_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_0_ce1       = ar_hs | (int_inputs_0_write & WVALID);
assign int_inputs_0_we1       = int_inputs_0_write & WVALID;
assign int_inputs_0_be1       = WSTRB;
assign int_inputs_0_d1        = WDATA;
// inputs_1
assign int_inputs_1_address0  = inputs_1_address0;
assign int_inputs_1_ce0       = inputs_1_ce0;
assign int_inputs_1_we0       = 1'b0;
assign int_inputs_1_be0       = 1'b0;
assign int_inputs_1_d0        = 1'b0;
assign inputs_1_q0            = int_inputs_1_q0;
assign int_inputs_1_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_1_ce1       = ar_hs | (int_inputs_1_write & WVALID);
assign int_inputs_1_we1       = int_inputs_1_write & WVALID;
assign int_inputs_1_be1       = WSTRB;
assign int_inputs_1_d1        = WDATA;
// inputs_2
assign int_inputs_2_address0  = inputs_2_address0;
assign int_inputs_2_ce0       = inputs_2_ce0;
assign int_inputs_2_we0       = 1'b0;
assign int_inputs_2_be0       = 1'b0;
assign int_inputs_2_d0        = 1'b0;
assign inputs_2_q0            = int_inputs_2_q0;
assign int_inputs_2_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_2_ce1       = ar_hs | (int_inputs_2_write & WVALID);
assign int_inputs_2_we1       = int_inputs_2_write & WVALID;
assign int_inputs_2_be1       = WSTRB;
assign int_inputs_2_d1        = WDATA;
// inputs_3
assign int_inputs_3_address0  = inputs_3_address0;
assign int_inputs_3_ce0       = inputs_3_ce0;
assign int_inputs_3_we0       = 1'b0;
assign int_inputs_3_be0       = 1'b0;
assign int_inputs_3_d0        = 1'b0;
assign inputs_3_q0            = int_inputs_3_q0;
assign int_inputs_3_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_3_ce1       = ar_hs | (int_inputs_3_write & WVALID);
assign int_inputs_3_we1       = int_inputs_3_write & WVALID;
assign int_inputs_3_be1       = WSTRB;
assign int_inputs_3_d1        = WDATA;
// inputs_4
assign int_inputs_4_address0  = inputs_4_address0;
assign int_inputs_4_ce0       = inputs_4_ce0;
assign int_inputs_4_we0       = 1'b0;
assign int_inputs_4_be0       = 1'b0;
assign int_inputs_4_d0        = 1'b0;
assign inputs_4_q0            = int_inputs_4_q0;
assign int_inputs_4_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_4_ce1       = ar_hs | (int_inputs_4_write & WVALID);
assign int_inputs_4_we1       = int_inputs_4_write & WVALID;
assign int_inputs_4_be1       = WSTRB;
assign int_inputs_4_d1        = WDATA;
// inputs_5
assign int_inputs_5_address0  = inputs_5_address0;
assign int_inputs_5_ce0       = inputs_5_ce0;
assign int_inputs_5_we0       = 1'b0;
assign int_inputs_5_be0       = 1'b0;
assign int_inputs_5_d0        = 1'b0;
assign inputs_5_q0            = int_inputs_5_q0;
assign int_inputs_5_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_5_ce1       = ar_hs | (int_inputs_5_write & WVALID);
assign int_inputs_5_we1       = int_inputs_5_write & WVALID;
assign int_inputs_5_be1       = WSTRB;
assign int_inputs_5_d1        = WDATA;
// inputs_6
assign int_inputs_6_address0  = inputs_6_address0;
assign int_inputs_6_ce0       = inputs_6_ce0;
assign int_inputs_6_we0       = 1'b0;
assign int_inputs_6_be0       = 1'b0;
assign int_inputs_6_d0        = 1'b0;
assign inputs_6_q0            = int_inputs_6_q0;
assign int_inputs_6_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_6_ce1       = ar_hs | (int_inputs_6_write & WVALID);
assign int_inputs_6_we1       = int_inputs_6_write & WVALID;
assign int_inputs_6_be1       = WSTRB;
assign int_inputs_6_d1        = WDATA;
// inputs_7
assign int_inputs_7_address0  = inputs_7_address0;
assign int_inputs_7_ce0       = inputs_7_ce0;
assign int_inputs_7_we0       = 1'b0;
assign int_inputs_7_be0       = 1'b0;
assign int_inputs_7_d0        = 1'b0;
assign inputs_7_q0            = int_inputs_7_q0;
assign int_inputs_7_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_7_ce1       = ar_hs | (int_inputs_7_write & WVALID);
assign int_inputs_7_we1       = int_inputs_7_write & WVALID;
assign int_inputs_7_be1       = WSTRB;
assign int_inputs_7_d1        = WDATA;
// inputs_8
assign int_inputs_8_address0  = inputs_8_address0;
assign int_inputs_8_ce0       = inputs_8_ce0;
assign int_inputs_8_we0       = 1'b0;
assign int_inputs_8_be0       = 1'b0;
assign int_inputs_8_d0        = 1'b0;
assign inputs_8_q0            = int_inputs_8_q0;
assign int_inputs_8_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_8_ce1       = ar_hs | (int_inputs_8_write & WVALID);
assign int_inputs_8_we1       = int_inputs_8_write & WVALID;
assign int_inputs_8_be1       = WSTRB;
assign int_inputs_8_d1        = WDATA;
// inputs_9
assign int_inputs_9_address0  = inputs_9_address0;
assign int_inputs_9_ce0       = inputs_9_ce0;
assign int_inputs_9_we0       = 1'b0;
assign int_inputs_9_be0       = 1'b0;
assign int_inputs_9_d0        = 1'b0;
assign inputs_9_q0            = int_inputs_9_q0;
assign int_inputs_9_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_9_ce1       = ar_hs | (int_inputs_9_write & WVALID);
assign int_inputs_9_we1       = int_inputs_9_write & WVALID;
assign int_inputs_9_be1       = WSTRB;
assign int_inputs_9_d1        = WDATA;
// inputs_10
assign int_inputs_10_address0 = inputs_10_address0;
assign int_inputs_10_ce0      = inputs_10_ce0;
assign int_inputs_10_we0      = 1'b0;
assign int_inputs_10_be0      = 1'b0;
assign int_inputs_10_d0       = 1'b0;
assign inputs_10_q0           = int_inputs_10_q0;
assign int_inputs_10_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_10_ce1      = ar_hs | (int_inputs_10_write & WVALID);
assign int_inputs_10_we1      = int_inputs_10_write & WVALID;
assign int_inputs_10_be1      = WSTRB;
assign int_inputs_10_d1       = WDATA;
// inputs_11
assign int_inputs_11_address0 = inputs_11_address0;
assign int_inputs_11_ce0      = inputs_11_ce0;
assign int_inputs_11_we0      = 1'b0;
assign int_inputs_11_be0      = 1'b0;
assign int_inputs_11_d0       = 1'b0;
assign inputs_11_q0           = int_inputs_11_q0;
assign int_inputs_11_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_11_ce1      = ar_hs | (int_inputs_11_write & WVALID);
assign int_inputs_11_we1      = int_inputs_11_write & WVALID;
assign int_inputs_11_be1      = WSTRB;
assign int_inputs_11_d1       = WDATA;
// inputs_12
assign int_inputs_12_address0 = inputs_12_address0;
assign int_inputs_12_ce0      = inputs_12_ce0;
assign int_inputs_12_we0      = 1'b0;
assign int_inputs_12_be0      = 1'b0;
assign int_inputs_12_d0       = 1'b0;
assign inputs_12_q0           = int_inputs_12_q0;
assign int_inputs_12_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_12_ce1      = ar_hs | (int_inputs_12_write & WVALID);
assign int_inputs_12_we1      = int_inputs_12_write & WVALID;
assign int_inputs_12_be1      = WSTRB;
assign int_inputs_12_d1       = WDATA;
// inputs_13
assign int_inputs_13_address0 = inputs_13_address0;
assign int_inputs_13_ce0      = inputs_13_ce0;
assign int_inputs_13_we0      = 1'b0;
assign int_inputs_13_be0      = 1'b0;
assign int_inputs_13_d0       = 1'b0;
assign inputs_13_q0           = int_inputs_13_q0;
assign int_inputs_13_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_13_ce1      = ar_hs | (int_inputs_13_write & WVALID);
assign int_inputs_13_we1      = int_inputs_13_write & WVALID;
assign int_inputs_13_be1      = WSTRB;
assign int_inputs_13_d1       = WDATA;
// inputs_14
assign int_inputs_14_address0 = inputs_14_address0;
assign int_inputs_14_ce0      = inputs_14_ce0;
assign int_inputs_14_we0      = 1'b0;
assign int_inputs_14_be0      = 1'b0;
assign int_inputs_14_d0       = 1'b0;
assign inputs_14_q0           = int_inputs_14_q0;
assign int_inputs_14_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_14_ce1      = ar_hs | (int_inputs_14_write & WVALID);
assign int_inputs_14_we1      = int_inputs_14_write & WVALID;
assign int_inputs_14_be1      = WSTRB;
assign int_inputs_14_d1       = WDATA;
// inputs_15
assign int_inputs_15_address0 = inputs_15_address0;
assign int_inputs_15_ce0      = inputs_15_ce0;
assign int_inputs_15_we0      = 1'b0;
assign int_inputs_15_be0      = 1'b0;
assign int_inputs_15_d0       = 1'b0;
assign inputs_15_q0           = int_inputs_15_q0;
assign int_inputs_15_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_15_ce1      = ar_hs | (int_inputs_15_write & WVALID);
assign int_inputs_15_we1      = int_inputs_15_write & WVALID;
assign int_inputs_15_be1      = WSTRB;
assign int_inputs_15_d1       = WDATA;
// inputs_16
assign int_inputs_16_address0 = inputs_16_address0;
assign int_inputs_16_ce0      = inputs_16_ce0;
assign int_inputs_16_we0      = 1'b0;
assign int_inputs_16_be0      = 1'b0;
assign int_inputs_16_d0       = 1'b0;
assign inputs_16_q0           = int_inputs_16_q0;
assign int_inputs_16_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_16_ce1      = ar_hs | (int_inputs_16_write & WVALID);
assign int_inputs_16_we1      = int_inputs_16_write & WVALID;
assign int_inputs_16_be1      = WSTRB;
assign int_inputs_16_d1       = WDATA;
// inputs_17
assign int_inputs_17_address0 = inputs_17_address0;
assign int_inputs_17_ce0      = inputs_17_ce0;
assign int_inputs_17_we0      = 1'b0;
assign int_inputs_17_be0      = 1'b0;
assign int_inputs_17_d0       = 1'b0;
assign inputs_17_q0           = int_inputs_17_q0;
assign int_inputs_17_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_17_ce1      = ar_hs | (int_inputs_17_write & WVALID);
assign int_inputs_17_we1      = int_inputs_17_write & WVALID;
assign int_inputs_17_be1      = WSTRB;
assign int_inputs_17_d1       = WDATA;
// inputs_18
assign int_inputs_18_address0 = inputs_18_address0;
assign int_inputs_18_ce0      = inputs_18_ce0;
assign int_inputs_18_we0      = 1'b0;
assign int_inputs_18_be0      = 1'b0;
assign int_inputs_18_d0       = 1'b0;
assign inputs_18_q0           = int_inputs_18_q0;
assign int_inputs_18_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_18_ce1      = ar_hs | (int_inputs_18_write & WVALID);
assign int_inputs_18_we1      = int_inputs_18_write & WVALID;
assign int_inputs_18_be1      = WSTRB;
assign int_inputs_18_d1       = WDATA;
// inputs_19
assign int_inputs_19_address0 = inputs_19_address0;
assign int_inputs_19_ce0      = inputs_19_ce0;
assign int_inputs_19_we0      = 1'b0;
assign int_inputs_19_be0      = 1'b0;
assign int_inputs_19_d0       = 1'b0;
assign inputs_19_q0           = int_inputs_19_q0;
assign int_inputs_19_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_19_ce1      = ar_hs | (int_inputs_19_write & WVALID);
assign int_inputs_19_we1      = int_inputs_19_write & WVALID;
assign int_inputs_19_be1      = WSTRB;
assign int_inputs_19_d1       = WDATA;
// inputs_20
assign int_inputs_20_address0 = inputs_20_address0;
assign int_inputs_20_ce0      = inputs_20_ce0;
assign int_inputs_20_we0      = 1'b0;
assign int_inputs_20_be0      = 1'b0;
assign int_inputs_20_d0       = 1'b0;
assign inputs_20_q0           = int_inputs_20_q0;
assign int_inputs_20_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_20_ce1      = ar_hs | (int_inputs_20_write & WVALID);
assign int_inputs_20_we1      = int_inputs_20_write & WVALID;
assign int_inputs_20_be1      = WSTRB;
assign int_inputs_20_d1       = WDATA;
// inputs_21
assign int_inputs_21_address0 = inputs_21_address0;
assign int_inputs_21_ce0      = inputs_21_ce0;
assign int_inputs_21_we0      = 1'b0;
assign int_inputs_21_be0      = 1'b0;
assign int_inputs_21_d0       = 1'b0;
assign inputs_21_q0           = int_inputs_21_q0;
assign int_inputs_21_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_21_ce1      = ar_hs | (int_inputs_21_write & WVALID);
assign int_inputs_21_we1      = int_inputs_21_write & WVALID;
assign int_inputs_21_be1      = WSTRB;
assign int_inputs_21_d1       = WDATA;
// inputs_22
assign int_inputs_22_address0 = inputs_22_address0;
assign int_inputs_22_ce0      = inputs_22_ce0;
assign int_inputs_22_we0      = 1'b0;
assign int_inputs_22_be0      = 1'b0;
assign int_inputs_22_d0       = 1'b0;
assign inputs_22_q0           = int_inputs_22_q0;
assign int_inputs_22_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_22_ce1      = ar_hs | (int_inputs_22_write & WVALID);
assign int_inputs_22_we1      = int_inputs_22_write & WVALID;
assign int_inputs_22_be1      = WSTRB;
assign int_inputs_22_d1       = WDATA;
// inputs_23
assign int_inputs_23_address0 = inputs_23_address0;
assign int_inputs_23_ce0      = inputs_23_ce0;
assign int_inputs_23_we0      = 1'b0;
assign int_inputs_23_be0      = 1'b0;
assign int_inputs_23_d0       = 1'b0;
assign inputs_23_q0           = int_inputs_23_q0;
assign int_inputs_23_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_inputs_23_ce1      = ar_hs | (int_inputs_23_write & WVALID);
assign int_inputs_23_we1      = int_inputs_23_write & WVALID;
assign int_inputs_23_be1      = WSTRB;
assign int_inputs_23_d1       = WDATA;
// int_inputs_0_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_0_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_0_BASE && raddr <= ADDR_INPUTS_0_HIGH)
            int_inputs_0_read <= 1'b1;
        else
            int_inputs_0_read <= 1'b0;
    end
end

// int_inputs_0_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_0_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_0_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_0_HIGH)
            int_inputs_0_write <= 1'b1;
        else if (WVALID)
            int_inputs_0_write <= 1'b0;
    end
end

// int_inputs_1_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_1_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_1_BASE && raddr <= ADDR_INPUTS_1_HIGH)
            int_inputs_1_read <= 1'b1;
        else
            int_inputs_1_read <= 1'b0;
    end
end

// int_inputs_1_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_1_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_1_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_1_HIGH)
            int_inputs_1_write <= 1'b1;
        else if (WVALID)
            int_inputs_1_write <= 1'b0;
    end
end

// int_inputs_2_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_2_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_2_BASE && raddr <= ADDR_INPUTS_2_HIGH)
            int_inputs_2_read <= 1'b1;
        else
            int_inputs_2_read <= 1'b0;
    end
end

// int_inputs_2_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_2_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_2_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_2_HIGH)
            int_inputs_2_write <= 1'b1;
        else if (WVALID)
            int_inputs_2_write <= 1'b0;
    end
end

// int_inputs_3_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_3_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_3_BASE && raddr <= ADDR_INPUTS_3_HIGH)
            int_inputs_3_read <= 1'b1;
        else
            int_inputs_3_read <= 1'b0;
    end
end

// int_inputs_3_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_3_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_3_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_3_HIGH)
            int_inputs_3_write <= 1'b1;
        else if (WVALID)
            int_inputs_3_write <= 1'b0;
    end
end

// int_inputs_4_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_4_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_4_BASE && raddr <= ADDR_INPUTS_4_HIGH)
            int_inputs_4_read <= 1'b1;
        else
            int_inputs_4_read <= 1'b0;
    end
end

// int_inputs_4_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_4_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_4_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_4_HIGH)
            int_inputs_4_write <= 1'b1;
        else if (WVALID)
            int_inputs_4_write <= 1'b0;
    end
end

// int_inputs_5_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_5_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_5_BASE && raddr <= ADDR_INPUTS_5_HIGH)
            int_inputs_5_read <= 1'b1;
        else
            int_inputs_5_read <= 1'b0;
    end
end

// int_inputs_5_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_5_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_5_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_5_HIGH)
            int_inputs_5_write <= 1'b1;
        else if (WVALID)
            int_inputs_5_write <= 1'b0;
    end
end

// int_inputs_6_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_6_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_6_BASE && raddr <= ADDR_INPUTS_6_HIGH)
            int_inputs_6_read <= 1'b1;
        else
            int_inputs_6_read <= 1'b0;
    end
end

// int_inputs_6_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_6_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_6_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_6_HIGH)
            int_inputs_6_write <= 1'b1;
        else if (WVALID)
            int_inputs_6_write <= 1'b0;
    end
end

// int_inputs_7_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_7_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_7_BASE && raddr <= ADDR_INPUTS_7_HIGH)
            int_inputs_7_read <= 1'b1;
        else
            int_inputs_7_read <= 1'b0;
    end
end

// int_inputs_7_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_7_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_7_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_7_HIGH)
            int_inputs_7_write <= 1'b1;
        else if (WVALID)
            int_inputs_7_write <= 1'b0;
    end
end

// int_inputs_8_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_8_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_8_BASE && raddr <= ADDR_INPUTS_8_HIGH)
            int_inputs_8_read <= 1'b1;
        else
            int_inputs_8_read <= 1'b0;
    end
end

// int_inputs_8_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_8_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_8_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_8_HIGH)
            int_inputs_8_write <= 1'b1;
        else if (WVALID)
            int_inputs_8_write <= 1'b0;
    end
end

// int_inputs_9_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_9_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_9_BASE && raddr <= ADDR_INPUTS_9_HIGH)
            int_inputs_9_read <= 1'b1;
        else
            int_inputs_9_read <= 1'b0;
    end
end

// int_inputs_9_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_9_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_9_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_9_HIGH)
            int_inputs_9_write <= 1'b1;
        else if (WVALID)
            int_inputs_9_write <= 1'b0;
    end
end

// int_inputs_10_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_10_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_10_BASE && raddr <= ADDR_INPUTS_10_HIGH)
            int_inputs_10_read <= 1'b1;
        else
            int_inputs_10_read <= 1'b0;
    end
end

// int_inputs_10_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_10_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_10_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_10_HIGH)
            int_inputs_10_write <= 1'b1;
        else if (WVALID)
            int_inputs_10_write <= 1'b0;
    end
end

// int_inputs_11_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_11_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_11_BASE && raddr <= ADDR_INPUTS_11_HIGH)
            int_inputs_11_read <= 1'b1;
        else
            int_inputs_11_read <= 1'b0;
    end
end

// int_inputs_11_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_11_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_11_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_11_HIGH)
            int_inputs_11_write <= 1'b1;
        else if (WVALID)
            int_inputs_11_write <= 1'b0;
    end
end

// int_inputs_12_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_12_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_12_BASE && raddr <= ADDR_INPUTS_12_HIGH)
            int_inputs_12_read <= 1'b1;
        else
            int_inputs_12_read <= 1'b0;
    end
end

// int_inputs_12_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_12_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_12_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_12_HIGH)
            int_inputs_12_write <= 1'b1;
        else if (WVALID)
            int_inputs_12_write <= 1'b0;
    end
end

// int_inputs_13_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_13_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_13_BASE && raddr <= ADDR_INPUTS_13_HIGH)
            int_inputs_13_read <= 1'b1;
        else
            int_inputs_13_read <= 1'b0;
    end
end

// int_inputs_13_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_13_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_13_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_13_HIGH)
            int_inputs_13_write <= 1'b1;
        else if (WVALID)
            int_inputs_13_write <= 1'b0;
    end
end

// int_inputs_14_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_14_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_14_BASE && raddr <= ADDR_INPUTS_14_HIGH)
            int_inputs_14_read <= 1'b1;
        else
            int_inputs_14_read <= 1'b0;
    end
end

// int_inputs_14_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_14_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_14_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_14_HIGH)
            int_inputs_14_write <= 1'b1;
        else if (WVALID)
            int_inputs_14_write <= 1'b0;
    end
end

// int_inputs_15_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_15_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_15_BASE && raddr <= ADDR_INPUTS_15_HIGH)
            int_inputs_15_read <= 1'b1;
        else
            int_inputs_15_read <= 1'b0;
    end
end

// int_inputs_15_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_15_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_15_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_15_HIGH)
            int_inputs_15_write <= 1'b1;
        else if (WVALID)
            int_inputs_15_write <= 1'b0;
    end
end

// int_inputs_16_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_16_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_16_BASE && raddr <= ADDR_INPUTS_16_HIGH)
            int_inputs_16_read <= 1'b1;
        else
            int_inputs_16_read <= 1'b0;
    end
end

// int_inputs_16_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_16_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_16_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_16_HIGH)
            int_inputs_16_write <= 1'b1;
        else if (WVALID)
            int_inputs_16_write <= 1'b0;
    end
end

// int_inputs_17_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_17_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_17_BASE && raddr <= ADDR_INPUTS_17_HIGH)
            int_inputs_17_read <= 1'b1;
        else
            int_inputs_17_read <= 1'b0;
    end
end

// int_inputs_17_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_17_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_17_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_17_HIGH)
            int_inputs_17_write <= 1'b1;
        else if (WVALID)
            int_inputs_17_write <= 1'b0;
    end
end

// int_inputs_18_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_18_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_18_BASE && raddr <= ADDR_INPUTS_18_HIGH)
            int_inputs_18_read <= 1'b1;
        else
            int_inputs_18_read <= 1'b0;
    end
end

// int_inputs_18_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_18_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_18_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_18_HIGH)
            int_inputs_18_write <= 1'b1;
        else if (WVALID)
            int_inputs_18_write <= 1'b0;
    end
end

// int_inputs_19_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_19_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_19_BASE && raddr <= ADDR_INPUTS_19_HIGH)
            int_inputs_19_read <= 1'b1;
        else
            int_inputs_19_read <= 1'b0;
    end
end

// int_inputs_19_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_19_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_19_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_19_HIGH)
            int_inputs_19_write <= 1'b1;
        else if (WVALID)
            int_inputs_19_write <= 1'b0;
    end
end

// int_inputs_20_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_20_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_20_BASE && raddr <= ADDR_INPUTS_20_HIGH)
            int_inputs_20_read <= 1'b1;
        else
            int_inputs_20_read <= 1'b0;
    end
end

// int_inputs_20_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_20_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_20_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_20_HIGH)
            int_inputs_20_write <= 1'b1;
        else if (WVALID)
            int_inputs_20_write <= 1'b0;
    end
end

// int_inputs_21_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_21_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_21_BASE && raddr <= ADDR_INPUTS_21_HIGH)
            int_inputs_21_read <= 1'b1;
        else
            int_inputs_21_read <= 1'b0;
    end
end

// int_inputs_21_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_21_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_21_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_21_HIGH)
            int_inputs_21_write <= 1'b1;
        else if (WVALID)
            int_inputs_21_write <= 1'b0;
    end
end

// int_inputs_22_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_22_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_22_BASE && raddr <= ADDR_INPUTS_22_HIGH)
            int_inputs_22_read <= 1'b1;
        else
            int_inputs_22_read <= 1'b0;
    end
end

// int_inputs_22_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_22_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_22_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_22_HIGH)
            int_inputs_22_write <= 1'b1;
        else if (WVALID)
            int_inputs_22_write <= 1'b0;
    end
end

// int_inputs_23_read
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_23_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_INPUTS_23_BASE && raddr <= ADDR_INPUTS_23_HIGH)
            int_inputs_23_read <= 1'b1;
        else
            int_inputs_23_read <= 1'b0;
    end
end

// int_inputs_23_write
always @(posedge ACLK) begin
    if (ARESET)
        int_inputs_23_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_INPUTS_23_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_INPUTS_23_HIGH)
            int_inputs_23_write <= 1'b1;
        else if (WVALID)
            int_inputs_23_write <= 1'b0;
    end
end


endmodule


`timescale 1ns/1ps

module estimate_FR_2_AXILiteS_s_axi_ram
#(parameter
    BYTES  = 4,
    DEPTH  = 256,
    AWIDTH = log2(DEPTH)
) (
    input  wire               clk0,
    input  wire [AWIDTH-1:0]  address0,
    input  wire               ce0,
    input  wire               we0,
    input  wire [BYTES-1:0]   be0,
    input  wire [BYTES*8-1:0] d0,
    output reg  [BYTES*8-1:0] q0,
    input  wire               clk1,
    input  wire [AWIDTH-1:0]  address1,
    input  wire               ce1,
    input  wire               we1,
    input  wire [BYTES-1:0]   be1,
    input  wire [BYTES*8-1:0] d1,
    output reg  [BYTES*8-1:0] q1
);
//------------------------Local signal-------------------
reg  [BYTES*8-1:0] mem[0:DEPTH-1];
//------------------------Task and function--------------
function integer log2;
    input integer x;
    integer n, m;
begin
    n = 1;
    m = 2;
    while (m < x) begin
        n = n + 1;
        m = m * 2;
    end
    log2 = n;
end
endfunction
//------------------------Body---------------------------
// read port 0
always @(posedge clk0) begin
    if (ce0) q0 <= mem[address0];
end

// read port 1
always @(posedge clk1) begin
    if (ce1) q1 <= mem[address1];
end

genvar i;
generate
    for (i = 0; i < BYTES; i = i + 1) begin : gen_write
        // write port 0
        always @(posedge clk0) begin
            if (ce0 & we0 & be0[i]) begin
                mem[address0][8*i+7:8*i] <= d0[8*i+7:8*i];
            end
        end
        // write port 1
        always @(posedge clk1) begin
            if (ce1 & we1 & be1[i]) begin
                mem[address1][8*i+7:8*i] <= d1[8*i+7:8*i];
            end
        end
    end
endgenerate

endmodule

