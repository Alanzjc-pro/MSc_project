// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module estimate_ISI_encode_AXILiteS_s_axi
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
    input  wire [2:0]                    inputs_0_address0,
    input  wire                          inputs_0_ce0,
    output wire [31:0]                   inputs_0_q0,
    input  wire [2:0]                    inputs_1_address0,
    input  wire                          inputs_1_ce0,
    output wire [31:0]                   inputs_1_q0,
    input  wire [2:0]                    inputs_2_address0,
    input  wire                          inputs_2_ce0,
    output wire [31:0]                   inputs_2_q0,
    input  wire [2:0]                    inputs_3_address0,
    input  wire                          inputs_3_ce0,
    output wire [31:0]                   inputs_3_q0,
    input  wire [2:0]                    inputs_4_address0,
    input  wire                          inputs_4_ce0,
    output wire [31:0]                   inputs_4_q0,
    input  wire [2:0]                    inputs_5_address0,
    input  wire                          inputs_5_ce0,
    output wire [31:0]                   inputs_5_q0,
    input  wire [2:0]                    inputs_6_address0,
    input  wire                          inputs_6_ce0,
    output wire [31:0]                   inputs_6_q0,
    input  wire [2:0]                    inputs_7_address0,
    input  wire                          inputs_7_ce0,
    output wire [31:0]                   inputs_7_q0,
    input  wire [2:0]                    inputs_8_address0,
    input  wire                          inputs_8_ce0,
    output wire [31:0]                   inputs_8_q0,
    input  wire [2:0]                    inputs_9_address0,
    input  wire                          inputs_9_ce0,
    output wire [31:0]                   inputs_9_q0,
    input  wire [2:0]                    inputs_10_address0,
    input  wire                          inputs_10_ce0,
    output wire [31:0]                   inputs_10_q0,
    input  wire [2:0]                    inputs_11_address0,
    input  wire                          inputs_11_ce0,
    output wire [31:0]                   inputs_11_q0,
    input  wire [2:0]                    rem_0_address0,
    input  wire                          rem_0_ce0,
    input  wire                          rem_0_we0,
    input  wire [31:0]                   rem_0_d0,
    output wire [31:0]                   rem_0_q0,
    input  wire [2:0]                    rem_1_address0,
    input  wire                          rem_1_ce0,
    input  wire                          rem_1_we0,
    input  wire [31:0]                   rem_1_d0,
    output wire [31:0]                   rem_1_q0,
    input  wire [2:0]                    rem_2_address0,
    input  wire                          rem_2_ce0,
    input  wire                          rem_2_we0,
    input  wire [31:0]                   rem_2_d0,
    output wire [31:0]                   rem_2_q0,
    input  wire [2:0]                    rem_3_address0,
    input  wire                          rem_3_ce0,
    input  wire                          rem_3_we0,
    input  wire [31:0]                   rem_3_d0,
    output wire [31:0]                   rem_3_q0,
    input  wire [2:0]                    rem_4_address0,
    input  wire                          rem_4_ce0,
    input  wire                          rem_4_we0,
    input  wire [31:0]                   rem_4_d0,
    output wire [31:0]                   rem_4_q0,
    input  wire [2:0]                    rem_5_address0,
    input  wire                          rem_5_ce0,
    input  wire                          rem_5_we0,
    input  wire [31:0]                   rem_5_d0,
    output wire [31:0]                   rem_5_q0,
    input  wire [2:0]                    rem_6_address0,
    input  wire                          rem_6_ce0,
    input  wire                          rem_6_we0,
    input  wire [31:0]                   rem_6_d0,
    output wire [31:0]                   rem_6_q0,
    input  wire [2:0]                    rem_7_address0,
    input  wire                          rem_7_ce0,
    input  wire                          rem_7_we0,
    input  wire [31:0]                   rem_7_d0,
    output wire [31:0]                   rem_7_q0,
    input  wire [2:0]                    rem_8_address0,
    input  wire                          rem_8_ce0,
    input  wire                          rem_8_we0,
    input  wire [31:0]                   rem_8_d0,
    output wire [31:0]                   rem_8_q0,
    input  wire [2:0]                    rem_9_address0,
    input  wire                          rem_9_ce0,
    input  wire                          rem_9_we0,
    input  wire [31:0]                   rem_9_d0,
    output wire [31:0]                   rem_9_q0,
    input  wire [2:0]                    rem_10_address0,
    input  wire                          rem_10_ce0,
    input  wire                          rem_10_we0,
    input  wire [31:0]                   rem_10_d0,
    output wire [31:0]                   rem_10_q0,
    input  wire [2:0]                    rem_11_address0,
    input  wire                          rem_11_ce0,
    input  wire                          rem_11_we0,
    input  wire [31:0]                   rem_11_d0,
    output wire [31:0]                   rem_11_q0,
    input  wire [31:0]                   output_0,
    input  wire                          output_0_ap_vld,
    input  wire [31:0]                   output_1,
    input  wire                          output_1_ap_vld,
    input  wire [31:0]                   output_2,
    input  wire                          output_2_ap_vld,
    input  wire [31:0]                   output_3,
    input  wire                          output_3_ap_vld,
    input  wire [31:0]                   output_4,
    input  wire                          output_4_ap_vld,
    input  wire [31:0]                   output_5,
    input  wire                          output_5_ap_vld,
    input  wire [31:0]                   output_6,
    input  wire                          output_6_ap_vld,
    input  wire [31:0]                   output_7,
    input  wire                          output_7_ap_vld,
    input  wire [31:0]                   output_8,
    input  wire                          output_8_ap_vld,
    input  wire [31:0]                   output_9,
    input  wire                          output_9_ap_vld,
    input  wire [31:0]                   output_10,
    input  wire                          output_10_ap_vld,
    input  wire [31:0]                   output_11,
    input  wire                          output_11_ap_vld
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

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL          = 10'h000,
    ADDR_GIE              = 10'h004,
    ADDR_IER              = 10'h008,
    ADDR_ISR              = 10'h00c,
    ADDR_OUTPUT_0_DATA_0  = 10'h320,
    ADDR_OUTPUT_0_CTRL    = 10'h324,
    ADDR_OUTPUT_1_DATA_0  = 10'h328,
    ADDR_OUTPUT_1_CTRL    = 10'h32c,
    ADDR_OUTPUT_2_DATA_0  = 10'h330,
    ADDR_OUTPUT_2_CTRL    = 10'h334,
    ADDR_OUTPUT_3_DATA_0  = 10'h338,
    ADDR_OUTPUT_3_CTRL    = 10'h33c,
    ADDR_OUTPUT_4_DATA_0  = 10'h340,
    ADDR_OUTPUT_4_CTRL    = 10'h344,
    ADDR_OUTPUT_5_DATA_0  = 10'h348,
    ADDR_OUTPUT_5_CTRL    = 10'h34c,
    ADDR_OUTPUT_6_DATA_0  = 10'h350,
    ADDR_OUTPUT_6_CTRL    = 10'h354,
    ADDR_OUTPUT_7_DATA_0  = 10'h358,
    ADDR_OUTPUT_7_CTRL    = 10'h35c,
    ADDR_OUTPUT_8_DATA_0  = 10'h360,
    ADDR_OUTPUT_8_CTRL    = 10'h364,
    ADDR_OUTPUT_9_DATA_0  = 10'h368,
    ADDR_OUTPUT_9_CTRL    = 10'h36c,
    ADDR_OUTPUT_10_DATA_0 = 10'h370,
    ADDR_OUTPUT_10_CTRL   = 10'h374,
    ADDR_OUTPUT_11_DATA_0 = 10'h378,
    ADDR_OUTPUT_11_CTRL   = 10'h37c,
    ADDR_INPUTS_0_BASE    = 10'h020,
    ADDR_INPUTS_0_HIGH    = 10'h03f,
    ADDR_INPUTS_1_BASE    = 10'h040,
    ADDR_INPUTS_1_HIGH    = 10'h05f,
    ADDR_INPUTS_2_BASE    = 10'h060,
    ADDR_INPUTS_2_HIGH    = 10'h07f,
    ADDR_INPUTS_3_BASE    = 10'h080,
    ADDR_INPUTS_3_HIGH    = 10'h09f,
    ADDR_INPUTS_4_BASE    = 10'h0a0,
    ADDR_INPUTS_4_HIGH    = 10'h0bf,
    ADDR_INPUTS_5_BASE    = 10'h0c0,
    ADDR_INPUTS_5_HIGH    = 10'h0df,
    ADDR_INPUTS_6_BASE    = 10'h0e0,
    ADDR_INPUTS_6_HIGH    = 10'h0ff,
    ADDR_INPUTS_7_BASE    = 10'h100,
    ADDR_INPUTS_7_HIGH    = 10'h11f,
    ADDR_INPUTS_8_BASE    = 10'h120,
    ADDR_INPUTS_8_HIGH    = 10'h13f,
    ADDR_INPUTS_9_BASE    = 10'h140,
    ADDR_INPUTS_9_HIGH    = 10'h15f,
    ADDR_INPUTS_10_BASE   = 10'h160,
    ADDR_INPUTS_10_HIGH   = 10'h17f,
    ADDR_INPUTS_11_BASE   = 10'h180,
    ADDR_INPUTS_11_HIGH   = 10'h19f,
    ADDR_REM_0_BASE       = 10'h1a0,
    ADDR_REM_0_HIGH       = 10'h1bf,
    ADDR_REM_1_BASE       = 10'h1c0,
    ADDR_REM_1_HIGH       = 10'h1df,
    ADDR_REM_2_BASE       = 10'h1e0,
    ADDR_REM_2_HIGH       = 10'h1ff,
    ADDR_REM_3_BASE       = 10'h200,
    ADDR_REM_3_HIGH       = 10'h21f,
    ADDR_REM_4_BASE       = 10'h220,
    ADDR_REM_4_HIGH       = 10'h23f,
    ADDR_REM_5_BASE       = 10'h240,
    ADDR_REM_5_HIGH       = 10'h25f,
    ADDR_REM_6_BASE       = 10'h260,
    ADDR_REM_6_HIGH       = 10'h27f,
    ADDR_REM_7_BASE       = 10'h280,
    ADDR_REM_7_HIGH       = 10'h29f,
    ADDR_REM_8_BASE       = 10'h2a0,
    ADDR_REM_8_HIGH       = 10'h2bf,
    ADDR_REM_9_BASE       = 10'h2c0,
    ADDR_REM_9_HIGH       = 10'h2df,
    ADDR_REM_10_BASE      = 10'h2e0,
    ADDR_REM_10_HIGH      = 10'h2ff,
    ADDR_REM_11_BASE      = 10'h300,
    ADDR_REM_11_HIGH      = 10'h31f,
    WRIDLE                = 2'd0,
    WRDATA                = 2'd1,
    WRRESP                = 2'd2,
    WRRESET               = 2'd3,
    RDIDLE                = 2'd0,
    RDDATA                = 2'd1,
    RDRESET               = 2'd2,
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
    reg  [31:0]                   int_output_0 = 'b0;
    reg                           int_output_0_ap_vld;
    reg  [31:0]                   int_output_1 = 'b0;
    reg                           int_output_1_ap_vld;
    reg  [31:0]                   int_output_2 = 'b0;
    reg                           int_output_2_ap_vld;
    reg  [31:0]                   int_output_3 = 'b0;
    reg                           int_output_3_ap_vld;
    reg  [31:0]                   int_output_4 = 'b0;
    reg                           int_output_4_ap_vld;
    reg  [31:0]                   int_output_5 = 'b0;
    reg                           int_output_5_ap_vld;
    reg  [31:0]                   int_output_6 = 'b0;
    reg                           int_output_6_ap_vld;
    reg  [31:0]                   int_output_7 = 'b0;
    reg                           int_output_7_ap_vld;
    reg  [31:0]                   int_output_8 = 'b0;
    reg                           int_output_8_ap_vld;
    reg  [31:0]                   int_output_9 = 'b0;
    reg                           int_output_9_ap_vld;
    reg  [31:0]                   int_output_10 = 'b0;
    reg                           int_output_10_ap_vld;
    reg  [31:0]                   int_output_11 = 'b0;
    reg                           int_output_11_ap_vld;
    // memory signals
    wire [2:0]                    int_inputs_0_address0;
    wire                          int_inputs_0_ce0;
    wire                          int_inputs_0_we0;
    wire [3:0]                    int_inputs_0_be0;
    wire [31:0]                   int_inputs_0_d0;
    wire [31:0]                   int_inputs_0_q0;
    wire [2:0]                    int_inputs_0_address1;
    wire                          int_inputs_0_ce1;
    wire                          int_inputs_0_we1;
    wire [3:0]                    int_inputs_0_be1;
    wire [31:0]                   int_inputs_0_d1;
    wire [31:0]                   int_inputs_0_q1;
    reg                           int_inputs_0_read;
    reg                           int_inputs_0_write;
    wire [2:0]                    int_inputs_1_address0;
    wire                          int_inputs_1_ce0;
    wire                          int_inputs_1_we0;
    wire [3:0]                    int_inputs_1_be0;
    wire [31:0]                   int_inputs_1_d0;
    wire [31:0]                   int_inputs_1_q0;
    wire [2:0]                    int_inputs_1_address1;
    wire                          int_inputs_1_ce1;
    wire                          int_inputs_1_we1;
    wire [3:0]                    int_inputs_1_be1;
    wire [31:0]                   int_inputs_1_d1;
    wire [31:0]                   int_inputs_1_q1;
    reg                           int_inputs_1_read;
    reg                           int_inputs_1_write;
    wire [2:0]                    int_inputs_2_address0;
    wire                          int_inputs_2_ce0;
    wire                          int_inputs_2_we0;
    wire [3:0]                    int_inputs_2_be0;
    wire [31:0]                   int_inputs_2_d0;
    wire [31:0]                   int_inputs_2_q0;
    wire [2:0]                    int_inputs_2_address1;
    wire                          int_inputs_2_ce1;
    wire                          int_inputs_2_we1;
    wire [3:0]                    int_inputs_2_be1;
    wire [31:0]                   int_inputs_2_d1;
    wire [31:0]                   int_inputs_2_q1;
    reg                           int_inputs_2_read;
    reg                           int_inputs_2_write;
    wire [2:0]                    int_inputs_3_address0;
    wire                          int_inputs_3_ce0;
    wire                          int_inputs_3_we0;
    wire [3:0]                    int_inputs_3_be0;
    wire [31:0]                   int_inputs_3_d0;
    wire [31:0]                   int_inputs_3_q0;
    wire [2:0]                    int_inputs_3_address1;
    wire                          int_inputs_3_ce1;
    wire                          int_inputs_3_we1;
    wire [3:0]                    int_inputs_3_be1;
    wire [31:0]                   int_inputs_3_d1;
    wire [31:0]                   int_inputs_3_q1;
    reg                           int_inputs_3_read;
    reg                           int_inputs_3_write;
    wire [2:0]                    int_inputs_4_address0;
    wire                          int_inputs_4_ce0;
    wire                          int_inputs_4_we0;
    wire [3:0]                    int_inputs_4_be0;
    wire [31:0]                   int_inputs_4_d0;
    wire [31:0]                   int_inputs_4_q0;
    wire [2:0]                    int_inputs_4_address1;
    wire                          int_inputs_4_ce1;
    wire                          int_inputs_4_we1;
    wire [3:0]                    int_inputs_4_be1;
    wire [31:0]                   int_inputs_4_d1;
    wire [31:0]                   int_inputs_4_q1;
    reg                           int_inputs_4_read;
    reg                           int_inputs_4_write;
    wire [2:0]                    int_inputs_5_address0;
    wire                          int_inputs_5_ce0;
    wire                          int_inputs_5_we0;
    wire [3:0]                    int_inputs_5_be0;
    wire [31:0]                   int_inputs_5_d0;
    wire [31:0]                   int_inputs_5_q0;
    wire [2:0]                    int_inputs_5_address1;
    wire                          int_inputs_5_ce1;
    wire                          int_inputs_5_we1;
    wire [3:0]                    int_inputs_5_be1;
    wire [31:0]                   int_inputs_5_d1;
    wire [31:0]                   int_inputs_5_q1;
    reg                           int_inputs_5_read;
    reg                           int_inputs_5_write;
    wire [2:0]                    int_inputs_6_address0;
    wire                          int_inputs_6_ce0;
    wire                          int_inputs_6_we0;
    wire [3:0]                    int_inputs_6_be0;
    wire [31:0]                   int_inputs_6_d0;
    wire [31:0]                   int_inputs_6_q0;
    wire [2:0]                    int_inputs_6_address1;
    wire                          int_inputs_6_ce1;
    wire                          int_inputs_6_we1;
    wire [3:0]                    int_inputs_6_be1;
    wire [31:0]                   int_inputs_6_d1;
    wire [31:0]                   int_inputs_6_q1;
    reg                           int_inputs_6_read;
    reg                           int_inputs_6_write;
    wire [2:0]                    int_inputs_7_address0;
    wire                          int_inputs_7_ce0;
    wire                          int_inputs_7_we0;
    wire [3:0]                    int_inputs_7_be0;
    wire [31:0]                   int_inputs_7_d0;
    wire [31:0]                   int_inputs_7_q0;
    wire [2:0]                    int_inputs_7_address1;
    wire                          int_inputs_7_ce1;
    wire                          int_inputs_7_we1;
    wire [3:0]                    int_inputs_7_be1;
    wire [31:0]                   int_inputs_7_d1;
    wire [31:0]                   int_inputs_7_q1;
    reg                           int_inputs_7_read;
    reg                           int_inputs_7_write;
    wire [2:0]                    int_inputs_8_address0;
    wire                          int_inputs_8_ce0;
    wire                          int_inputs_8_we0;
    wire [3:0]                    int_inputs_8_be0;
    wire [31:0]                   int_inputs_8_d0;
    wire [31:0]                   int_inputs_8_q0;
    wire [2:0]                    int_inputs_8_address1;
    wire                          int_inputs_8_ce1;
    wire                          int_inputs_8_we1;
    wire [3:0]                    int_inputs_8_be1;
    wire [31:0]                   int_inputs_8_d1;
    wire [31:0]                   int_inputs_8_q1;
    reg                           int_inputs_8_read;
    reg                           int_inputs_8_write;
    wire [2:0]                    int_inputs_9_address0;
    wire                          int_inputs_9_ce0;
    wire                          int_inputs_9_we0;
    wire [3:0]                    int_inputs_9_be0;
    wire [31:0]                   int_inputs_9_d0;
    wire [31:0]                   int_inputs_9_q0;
    wire [2:0]                    int_inputs_9_address1;
    wire                          int_inputs_9_ce1;
    wire                          int_inputs_9_we1;
    wire [3:0]                    int_inputs_9_be1;
    wire [31:0]                   int_inputs_9_d1;
    wire [31:0]                   int_inputs_9_q1;
    reg                           int_inputs_9_read;
    reg                           int_inputs_9_write;
    wire [2:0]                    int_inputs_10_address0;
    wire                          int_inputs_10_ce0;
    wire                          int_inputs_10_we0;
    wire [3:0]                    int_inputs_10_be0;
    wire [31:0]                   int_inputs_10_d0;
    wire [31:0]                   int_inputs_10_q0;
    wire [2:0]                    int_inputs_10_address1;
    wire                          int_inputs_10_ce1;
    wire                          int_inputs_10_we1;
    wire [3:0]                    int_inputs_10_be1;
    wire [31:0]                   int_inputs_10_d1;
    wire [31:0]                   int_inputs_10_q1;
    reg                           int_inputs_10_read;
    reg                           int_inputs_10_write;
    wire [2:0]                    int_inputs_11_address0;
    wire                          int_inputs_11_ce0;
    wire                          int_inputs_11_we0;
    wire [3:0]                    int_inputs_11_be0;
    wire [31:0]                   int_inputs_11_d0;
    wire [31:0]                   int_inputs_11_q0;
    wire [2:0]                    int_inputs_11_address1;
    wire                          int_inputs_11_ce1;
    wire                          int_inputs_11_we1;
    wire [3:0]                    int_inputs_11_be1;
    wire [31:0]                   int_inputs_11_d1;
    wire [31:0]                   int_inputs_11_q1;
    reg                           int_inputs_11_read;
    reg                           int_inputs_11_write;
    wire [2:0]                    int_rem_0_address0;
    wire                          int_rem_0_ce0;
    wire                          int_rem_0_we0;
    wire [3:0]                    int_rem_0_be0;
    wire [31:0]                   int_rem_0_d0;
    wire [31:0]                   int_rem_0_q0;
    wire [2:0]                    int_rem_0_address1;
    wire                          int_rem_0_ce1;
    wire                          int_rem_0_we1;
    wire [3:0]                    int_rem_0_be1;
    wire [31:0]                   int_rem_0_d1;
    wire [31:0]                   int_rem_0_q1;
    reg                           int_rem_0_read;
    reg                           int_rem_0_write;
    wire [2:0]                    int_rem_1_address0;
    wire                          int_rem_1_ce0;
    wire                          int_rem_1_we0;
    wire [3:0]                    int_rem_1_be0;
    wire [31:0]                   int_rem_1_d0;
    wire [31:0]                   int_rem_1_q0;
    wire [2:0]                    int_rem_1_address1;
    wire                          int_rem_1_ce1;
    wire                          int_rem_1_we1;
    wire [3:0]                    int_rem_1_be1;
    wire [31:0]                   int_rem_1_d1;
    wire [31:0]                   int_rem_1_q1;
    reg                           int_rem_1_read;
    reg                           int_rem_1_write;
    wire [2:0]                    int_rem_2_address0;
    wire                          int_rem_2_ce0;
    wire                          int_rem_2_we0;
    wire [3:0]                    int_rem_2_be0;
    wire [31:0]                   int_rem_2_d0;
    wire [31:0]                   int_rem_2_q0;
    wire [2:0]                    int_rem_2_address1;
    wire                          int_rem_2_ce1;
    wire                          int_rem_2_we1;
    wire [3:0]                    int_rem_2_be1;
    wire [31:0]                   int_rem_2_d1;
    wire [31:0]                   int_rem_2_q1;
    reg                           int_rem_2_read;
    reg                           int_rem_2_write;
    wire [2:0]                    int_rem_3_address0;
    wire                          int_rem_3_ce0;
    wire                          int_rem_3_we0;
    wire [3:0]                    int_rem_3_be0;
    wire [31:0]                   int_rem_3_d0;
    wire [31:0]                   int_rem_3_q0;
    wire [2:0]                    int_rem_3_address1;
    wire                          int_rem_3_ce1;
    wire                          int_rem_3_we1;
    wire [3:0]                    int_rem_3_be1;
    wire [31:0]                   int_rem_3_d1;
    wire [31:0]                   int_rem_3_q1;
    reg                           int_rem_3_read;
    reg                           int_rem_3_write;
    wire [2:0]                    int_rem_4_address0;
    wire                          int_rem_4_ce0;
    wire                          int_rem_4_we0;
    wire [3:0]                    int_rem_4_be0;
    wire [31:0]                   int_rem_4_d0;
    wire [31:0]                   int_rem_4_q0;
    wire [2:0]                    int_rem_4_address1;
    wire                          int_rem_4_ce1;
    wire                          int_rem_4_we1;
    wire [3:0]                    int_rem_4_be1;
    wire [31:0]                   int_rem_4_d1;
    wire [31:0]                   int_rem_4_q1;
    reg                           int_rem_4_read;
    reg                           int_rem_4_write;
    wire [2:0]                    int_rem_5_address0;
    wire                          int_rem_5_ce0;
    wire                          int_rem_5_we0;
    wire [3:0]                    int_rem_5_be0;
    wire [31:0]                   int_rem_5_d0;
    wire [31:0]                   int_rem_5_q0;
    wire [2:0]                    int_rem_5_address1;
    wire                          int_rem_5_ce1;
    wire                          int_rem_5_we1;
    wire [3:0]                    int_rem_5_be1;
    wire [31:0]                   int_rem_5_d1;
    wire [31:0]                   int_rem_5_q1;
    reg                           int_rem_5_read;
    reg                           int_rem_5_write;
    wire [2:0]                    int_rem_6_address0;
    wire                          int_rem_6_ce0;
    wire                          int_rem_6_we0;
    wire [3:0]                    int_rem_6_be0;
    wire [31:0]                   int_rem_6_d0;
    wire [31:0]                   int_rem_6_q0;
    wire [2:0]                    int_rem_6_address1;
    wire                          int_rem_6_ce1;
    wire                          int_rem_6_we1;
    wire [3:0]                    int_rem_6_be1;
    wire [31:0]                   int_rem_6_d1;
    wire [31:0]                   int_rem_6_q1;
    reg                           int_rem_6_read;
    reg                           int_rem_6_write;
    wire [2:0]                    int_rem_7_address0;
    wire                          int_rem_7_ce0;
    wire                          int_rem_7_we0;
    wire [3:0]                    int_rem_7_be0;
    wire [31:0]                   int_rem_7_d0;
    wire [31:0]                   int_rem_7_q0;
    wire [2:0]                    int_rem_7_address1;
    wire                          int_rem_7_ce1;
    wire                          int_rem_7_we1;
    wire [3:0]                    int_rem_7_be1;
    wire [31:0]                   int_rem_7_d1;
    wire [31:0]                   int_rem_7_q1;
    reg                           int_rem_7_read;
    reg                           int_rem_7_write;
    wire [2:0]                    int_rem_8_address0;
    wire                          int_rem_8_ce0;
    wire                          int_rem_8_we0;
    wire [3:0]                    int_rem_8_be0;
    wire [31:0]                   int_rem_8_d0;
    wire [31:0]                   int_rem_8_q0;
    wire [2:0]                    int_rem_8_address1;
    wire                          int_rem_8_ce1;
    wire                          int_rem_8_we1;
    wire [3:0]                    int_rem_8_be1;
    wire [31:0]                   int_rem_8_d1;
    wire [31:0]                   int_rem_8_q1;
    reg                           int_rem_8_read;
    reg                           int_rem_8_write;
    wire [2:0]                    int_rem_9_address0;
    wire                          int_rem_9_ce0;
    wire                          int_rem_9_we0;
    wire [3:0]                    int_rem_9_be0;
    wire [31:0]                   int_rem_9_d0;
    wire [31:0]                   int_rem_9_q0;
    wire [2:0]                    int_rem_9_address1;
    wire                          int_rem_9_ce1;
    wire                          int_rem_9_we1;
    wire [3:0]                    int_rem_9_be1;
    wire [31:0]                   int_rem_9_d1;
    wire [31:0]                   int_rem_9_q1;
    reg                           int_rem_9_read;
    reg                           int_rem_9_write;
    wire [2:0]                    int_rem_10_address0;
    wire                          int_rem_10_ce0;
    wire                          int_rem_10_we0;
    wire [3:0]                    int_rem_10_be0;
    wire [31:0]                   int_rem_10_d0;
    wire [31:0]                   int_rem_10_q0;
    wire [2:0]                    int_rem_10_address1;
    wire                          int_rem_10_ce1;
    wire                          int_rem_10_we1;
    wire [3:0]                    int_rem_10_be1;
    wire [31:0]                   int_rem_10_d1;
    wire [31:0]                   int_rem_10_q1;
    reg                           int_rem_10_read;
    reg                           int_rem_10_write;
    wire [2:0]                    int_rem_11_address0;
    wire                          int_rem_11_ce0;
    wire                          int_rem_11_we0;
    wire [3:0]                    int_rem_11_be0;
    wire [31:0]                   int_rem_11_d0;
    wire [31:0]                   int_rem_11_q0;
    wire [2:0]                    int_rem_11_address1;
    wire                          int_rem_11_ce1;
    wire                          int_rem_11_we1;
    wire [3:0]                    int_rem_11_be1;
    wire [31:0]                   int_rem_11_d1;
    wire [31:0]                   int_rem_11_q1;
    reg                           int_rem_11_read;
    reg                           int_rem_11_write;

//------------------------Instantiation------------------
// int_inputs_0
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
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
// int_rem_0
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_0 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_0_address0 ),
    .ce0      ( int_rem_0_ce0 ),
    .we0      ( int_rem_0_we0 ),
    .be0      ( int_rem_0_be0 ),
    .d0       ( int_rem_0_d0 ),
    .q0       ( int_rem_0_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_0_address1 ),
    .ce1      ( int_rem_0_ce1 ),
    .we1      ( int_rem_0_we1 ),
    .be1      ( int_rem_0_be1 ),
    .d1       ( int_rem_0_d1 ),
    .q1       ( int_rem_0_q1 )
);
// int_rem_1
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_1 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_1_address0 ),
    .ce0      ( int_rem_1_ce0 ),
    .we0      ( int_rem_1_we0 ),
    .be0      ( int_rem_1_be0 ),
    .d0       ( int_rem_1_d0 ),
    .q0       ( int_rem_1_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_1_address1 ),
    .ce1      ( int_rem_1_ce1 ),
    .we1      ( int_rem_1_we1 ),
    .be1      ( int_rem_1_be1 ),
    .d1       ( int_rem_1_d1 ),
    .q1       ( int_rem_1_q1 )
);
// int_rem_2
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_2 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_2_address0 ),
    .ce0      ( int_rem_2_ce0 ),
    .we0      ( int_rem_2_we0 ),
    .be0      ( int_rem_2_be0 ),
    .d0       ( int_rem_2_d0 ),
    .q0       ( int_rem_2_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_2_address1 ),
    .ce1      ( int_rem_2_ce1 ),
    .we1      ( int_rem_2_we1 ),
    .be1      ( int_rem_2_be1 ),
    .d1       ( int_rem_2_d1 ),
    .q1       ( int_rem_2_q1 )
);
// int_rem_3
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_3 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_3_address0 ),
    .ce0      ( int_rem_3_ce0 ),
    .we0      ( int_rem_3_we0 ),
    .be0      ( int_rem_3_be0 ),
    .d0       ( int_rem_3_d0 ),
    .q0       ( int_rem_3_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_3_address1 ),
    .ce1      ( int_rem_3_ce1 ),
    .we1      ( int_rem_3_we1 ),
    .be1      ( int_rem_3_be1 ),
    .d1       ( int_rem_3_d1 ),
    .q1       ( int_rem_3_q1 )
);
// int_rem_4
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_4 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_4_address0 ),
    .ce0      ( int_rem_4_ce0 ),
    .we0      ( int_rem_4_we0 ),
    .be0      ( int_rem_4_be0 ),
    .d0       ( int_rem_4_d0 ),
    .q0       ( int_rem_4_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_4_address1 ),
    .ce1      ( int_rem_4_ce1 ),
    .we1      ( int_rem_4_we1 ),
    .be1      ( int_rem_4_be1 ),
    .d1       ( int_rem_4_d1 ),
    .q1       ( int_rem_4_q1 )
);
// int_rem_5
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_5 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_5_address0 ),
    .ce0      ( int_rem_5_ce0 ),
    .we0      ( int_rem_5_we0 ),
    .be0      ( int_rem_5_be0 ),
    .d0       ( int_rem_5_d0 ),
    .q0       ( int_rem_5_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_5_address1 ),
    .ce1      ( int_rem_5_ce1 ),
    .we1      ( int_rem_5_we1 ),
    .be1      ( int_rem_5_be1 ),
    .d1       ( int_rem_5_d1 ),
    .q1       ( int_rem_5_q1 )
);
// int_rem_6
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_6 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_6_address0 ),
    .ce0      ( int_rem_6_ce0 ),
    .we0      ( int_rem_6_we0 ),
    .be0      ( int_rem_6_be0 ),
    .d0       ( int_rem_6_d0 ),
    .q0       ( int_rem_6_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_6_address1 ),
    .ce1      ( int_rem_6_ce1 ),
    .we1      ( int_rem_6_we1 ),
    .be1      ( int_rem_6_be1 ),
    .d1       ( int_rem_6_d1 ),
    .q1       ( int_rem_6_q1 )
);
// int_rem_7
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_7 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_7_address0 ),
    .ce0      ( int_rem_7_ce0 ),
    .we0      ( int_rem_7_we0 ),
    .be0      ( int_rem_7_be0 ),
    .d0       ( int_rem_7_d0 ),
    .q0       ( int_rem_7_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_7_address1 ),
    .ce1      ( int_rem_7_ce1 ),
    .we1      ( int_rem_7_we1 ),
    .be1      ( int_rem_7_be1 ),
    .d1       ( int_rem_7_d1 ),
    .q1       ( int_rem_7_q1 )
);
// int_rem_8
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_8 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_8_address0 ),
    .ce0      ( int_rem_8_ce0 ),
    .we0      ( int_rem_8_we0 ),
    .be0      ( int_rem_8_be0 ),
    .d0       ( int_rem_8_d0 ),
    .q0       ( int_rem_8_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_8_address1 ),
    .ce1      ( int_rem_8_ce1 ),
    .we1      ( int_rem_8_we1 ),
    .be1      ( int_rem_8_be1 ),
    .d1       ( int_rem_8_d1 ),
    .q1       ( int_rem_8_q1 )
);
// int_rem_9
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_9 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_9_address0 ),
    .ce0      ( int_rem_9_ce0 ),
    .we0      ( int_rem_9_we0 ),
    .be0      ( int_rem_9_be0 ),
    .d0       ( int_rem_9_d0 ),
    .q0       ( int_rem_9_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_9_address1 ),
    .ce1      ( int_rem_9_ce1 ),
    .we1      ( int_rem_9_we1 ),
    .be1      ( int_rem_9_be1 ),
    .d1       ( int_rem_9_d1 ),
    .q1       ( int_rem_9_q1 )
);
// int_rem_10
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_10 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_10_address0 ),
    .ce0      ( int_rem_10_ce0 ),
    .we0      ( int_rem_10_we0 ),
    .be0      ( int_rem_10_be0 ),
    .d0       ( int_rem_10_d0 ),
    .q0       ( int_rem_10_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_10_address1 ),
    .ce1      ( int_rem_10_ce1 ),
    .we1      ( int_rem_10_we1 ),
    .be1      ( int_rem_10_be1 ),
    .d1       ( int_rem_10_d1 ),
    .q1       ( int_rem_10_q1 )
);
// int_rem_11
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 8 )
) int_rem_11 (
    .clk0     ( ACLK ),
    .address0 ( int_rem_11_address0 ),
    .ce0      ( int_rem_11_ce0 ),
    .we0      ( int_rem_11_we0 ),
    .be0      ( int_rem_11_be0 ),
    .d0       ( int_rem_11_d0 ),
    .q0       ( int_rem_11_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_rem_11_address1 ),
    .ce1      ( int_rem_11_ce1 ),
    .we1      ( int_rem_11_we1 ),
    .be1      ( int_rem_11_be1 ),
    .d1       ( int_rem_11_d1 ),
    .q1       ( int_rem_11_q1 )
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
assign RVALID  = (rstate == RDDATA) & !int_inputs_0_read & !int_inputs_1_read & !int_inputs_2_read & !int_inputs_3_read & !int_inputs_4_read & !int_inputs_5_read & !int_inputs_6_read & !int_inputs_7_read & !int_inputs_8_read & !int_inputs_9_read & !int_inputs_10_read & !int_inputs_11_read & !int_rem_0_read & !int_rem_1_read & !int_rem_2_read & !int_rem_3_read & !int_rem_4_read & !int_rem_5_read & !int_rem_6_read & !int_rem_7_read & !int_rem_8_read & !int_rem_9_read & !int_rem_10_read & !int_rem_11_read;
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
                ADDR_OUTPUT_0_DATA_0: begin
                    rdata <= int_output_0[31:0];
                end
                ADDR_OUTPUT_0_CTRL: begin
                    rdata[0] <= int_output_0_ap_vld;
                end
                ADDR_OUTPUT_1_DATA_0: begin
                    rdata <= int_output_1[31:0];
                end
                ADDR_OUTPUT_1_CTRL: begin
                    rdata[0] <= int_output_1_ap_vld;
                end
                ADDR_OUTPUT_2_DATA_0: begin
                    rdata <= int_output_2[31:0];
                end
                ADDR_OUTPUT_2_CTRL: begin
                    rdata[0] <= int_output_2_ap_vld;
                end
                ADDR_OUTPUT_3_DATA_0: begin
                    rdata <= int_output_3[31:0];
                end
                ADDR_OUTPUT_3_CTRL: begin
                    rdata[0] <= int_output_3_ap_vld;
                end
                ADDR_OUTPUT_4_DATA_0: begin
                    rdata <= int_output_4[31:0];
                end
                ADDR_OUTPUT_4_CTRL: begin
                    rdata[0] <= int_output_4_ap_vld;
                end
                ADDR_OUTPUT_5_DATA_0: begin
                    rdata <= int_output_5[31:0];
                end
                ADDR_OUTPUT_5_CTRL: begin
                    rdata[0] <= int_output_5_ap_vld;
                end
                ADDR_OUTPUT_6_DATA_0: begin
                    rdata <= int_output_6[31:0];
                end
                ADDR_OUTPUT_6_CTRL: begin
                    rdata[0] <= int_output_6_ap_vld;
                end
                ADDR_OUTPUT_7_DATA_0: begin
                    rdata <= int_output_7[31:0];
                end
                ADDR_OUTPUT_7_CTRL: begin
                    rdata[0] <= int_output_7_ap_vld;
                end
                ADDR_OUTPUT_8_DATA_0: begin
                    rdata <= int_output_8[31:0];
                end
                ADDR_OUTPUT_8_CTRL: begin
                    rdata[0] <= int_output_8_ap_vld;
                end
                ADDR_OUTPUT_9_DATA_0: begin
                    rdata <= int_output_9[31:0];
                end
                ADDR_OUTPUT_9_CTRL: begin
                    rdata[0] <= int_output_9_ap_vld;
                end
                ADDR_OUTPUT_10_DATA_0: begin
                    rdata <= int_output_10[31:0];
                end
                ADDR_OUTPUT_10_CTRL: begin
                    rdata[0] <= int_output_10_ap_vld;
                end
                ADDR_OUTPUT_11_DATA_0: begin
                    rdata <= int_output_11[31:0];
                end
                ADDR_OUTPUT_11_CTRL: begin
                    rdata[0] <= int_output_11_ap_vld;
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
        else if (int_rem_0_read) begin
            rdata <= int_rem_0_q1;
        end
        else if (int_rem_1_read) begin
            rdata <= int_rem_1_q1;
        end
        else if (int_rem_2_read) begin
            rdata <= int_rem_2_q1;
        end
        else if (int_rem_3_read) begin
            rdata <= int_rem_3_q1;
        end
        else if (int_rem_4_read) begin
            rdata <= int_rem_4_q1;
        end
        else if (int_rem_5_read) begin
            rdata <= int_rem_5_q1;
        end
        else if (int_rem_6_read) begin
            rdata <= int_rem_6_q1;
        end
        else if (int_rem_7_read) begin
            rdata <= int_rem_7_q1;
        end
        else if (int_rem_8_read) begin
            rdata <= int_rem_8_q1;
        end
        else if (int_rem_9_read) begin
            rdata <= int_rem_9_q1;
        end
        else if (int_rem_10_read) begin
            rdata <= int_rem_10_q1;
        end
        else if (int_rem_11_read) begin
            rdata <= int_rem_11_q1;
        end
    end
end


//------------------------Register logic-----------------
assign interrupt = int_gie & (|int_isr);
assign ap_start  = int_ap_start;
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

// int_output_0
always @(posedge ACLK) begin
    if (ARESET)
        int_output_0 <= 0;
    else if (ACLK_EN) begin
        if (output_0_ap_vld)
            int_output_0 <= output_0;
    end
end

// int_output_0_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_0_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_0_ap_vld)
            int_output_0_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_0_CTRL)
            int_output_0_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_1
always @(posedge ACLK) begin
    if (ARESET)
        int_output_1 <= 0;
    else if (ACLK_EN) begin
        if (output_1_ap_vld)
            int_output_1 <= output_1;
    end
end

// int_output_1_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_1_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_1_ap_vld)
            int_output_1_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_1_CTRL)
            int_output_1_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_2
always @(posedge ACLK) begin
    if (ARESET)
        int_output_2 <= 0;
    else if (ACLK_EN) begin
        if (output_2_ap_vld)
            int_output_2 <= output_2;
    end
end

// int_output_2_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_2_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_2_ap_vld)
            int_output_2_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_2_CTRL)
            int_output_2_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_3
always @(posedge ACLK) begin
    if (ARESET)
        int_output_3 <= 0;
    else if (ACLK_EN) begin
        if (output_3_ap_vld)
            int_output_3 <= output_3;
    end
end

// int_output_3_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_3_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_3_ap_vld)
            int_output_3_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_3_CTRL)
            int_output_3_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_4
always @(posedge ACLK) begin
    if (ARESET)
        int_output_4 <= 0;
    else if (ACLK_EN) begin
        if (output_4_ap_vld)
            int_output_4 <= output_4;
    end
end

// int_output_4_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_4_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_4_ap_vld)
            int_output_4_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_4_CTRL)
            int_output_4_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_5
always @(posedge ACLK) begin
    if (ARESET)
        int_output_5 <= 0;
    else if (ACLK_EN) begin
        if (output_5_ap_vld)
            int_output_5 <= output_5;
    end
end

// int_output_5_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_5_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_5_ap_vld)
            int_output_5_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_5_CTRL)
            int_output_5_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_6
always @(posedge ACLK) begin
    if (ARESET)
        int_output_6 <= 0;
    else if (ACLK_EN) begin
        if (output_6_ap_vld)
            int_output_6 <= output_6;
    end
end

// int_output_6_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_6_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_6_ap_vld)
            int_output_6_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_6_CTRL)
            int_output_6_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_7
always @(posedge ACLK) begin
    if (ARESET)
        int_output_7 <= 0;
    else if (ACLK_EN) begin
        if (output_7_ap_vld)
            int_output_7 <= output_7;
    end
end

// int_output_7_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_7_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_7_ap_vld)
            int_output_7_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_7_CTRL)
            int_output_7_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_8
always @(posedge ACLK) begin
    if (ARESET)
        int_output_8 <= 0;
    else if (ACLK_EN) begin
        if (output_8_ap_vld)
            int_output_8 <= output_8;
    end
end

// int_output_8_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_8_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_8_ap_vld)
            int_output_8_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_8_CTRL)
            int_output_8_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_9
always @(posedge ACLK) begin
    if (ARESET)
        int_output_9 <= 0;
    else if (ACLK_EN) begin
        if (output_9_ap_vld)
            int_output_9 <= output_9;
    end
end

// int_output_9_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_9_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_9_ap_vld)
            int_output_9_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_9_CTRL)
            int_output_9_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_10
always @(posedge ACLK) begin
    if (ARESET)
        int_output_10 <= 0;
    else if (ACLK_EN) begin
        if (output_10_ap_vld)
            int_output_10 <= output_10;
    end
end

// int_output_10_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_10_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_10_ap_vld)
            int_output_10_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_10_CTRL)
            int_output_10_ap_vld <= 1'b0; // clear on read
    end
end

// int_output_11
always @(posedge ACLK) begin
    if (ARESET)
        int_output_11 <= 0;
    else if (ACLK_EN) begin
        if (output_11_ap_vld)
            int_output_11 <= output_11;
    end
end

// int_output_11_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_11_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_11_ap_vld)
            int_output_11_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_11_CTRL)
            int_output_11_ap_vld <= 1'b0; // clear on read
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
assign int_inputs_0_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_1_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_2_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_3_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_4_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_5_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_6_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_7_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_8_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_9_address1  = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_10_address1 = ar_hs? raddr[4:2] : waddr[4:2];
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
assign int_inputs_11_address1 = ar_hs? raddr[4:2] : waddr[4:2];
assign int_inputs_11_ce1      = ar_hs | (int_inputs_11_write & WVALID);
assign int_inputs_11_we1      = int_inputs_11_write & WVALID;
assign int_inputs_11_be1      = WSTRB;
assign int_inputs_11_d1       = WDATA;
// rem_0
assign int_rem_0_address0     = rem_0_address0;
assign int_rem_0_ce0          = rem_0_ce0;
assign int_rem_0_we0          = rem_0_we0;
assign int_rem_0_be0          = {4{rem_0_we0}};
assign int_rem_0_d0           = rem_0_d0;
assign rem_0_q0               = int_rem_0_q0;
assign int_rem_0_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_0_ce1          = ar_hs | (int_rem_0_write & WVALID);
assign int_rem_0_we1          = int_rem_0_write & WVALID;
assign int_rem_0_be1          = WSTRB;
assign int_rem_0_d1           = WDATA;
// rem_1
assign int_rem_1_address0     = rem_1_address0;
assign int_rem_1_ce0          = rem_1_ce0;
assign int_rem_1_we0          = rem_1_we0;
assign int_rem_1_be0          = {4{rem_1_we0}};
assign int_rem_1_d0           = rem_1_d0;
assign rem_1_q0               = int_rem_1_q0;
assign int_rem_1_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_1_ce1          = ar_hs | (int_rem_1_write & WVALID);
assign int_rem_1_we1          = int_rem_1_write & WVALID;
assign int_rem_1_be1          = WSTRB;
assign int_rem_1_d1           = WDATA;
// rem_2
assign int_rem_2_address0     = rem_2_address0;
assign int_rem_2_ce0          = rem_2_ce0;
assign int_rem_2_we0          = rem_2_we0;
assign int_rem_2_be0          = {4{rem_2_we0}};
assign int_rem_2_d0           = rem_2_d0;
assign rem_2_q0               = int_rem_2_q0;
assign int_rem_2_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_2_ce1          = ar_hs | (int_rem_2_write & WVALID);
assign int_rem_2_we1          = int_rem_2_write & WVALID;
assign int_rem_2_be1          = WSTRB;
assign int_rem_2_d1           = WDATA;
// rem_3
assign int_rem_3_address0     = rem_3_address0;
assign int_rem_3_ce0          = rem_3_ce0;
assign int_rem_3_we0          = rem_3_we0;
assign int_rem_3_be0          = {4{rem_3_we0}};
assign int_rem_3_d0           = rem_3_d0;
assign rem_3_q0               = int_rem_3_q0;
assign int_rem_3_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_3_ce1          = ar_hs | (int_rem_3_write & WVALID);
assign int_rem_3_we1          = int_rem_3_write & WVALID;
assign int_rem_3_be1          = WSTRB;
assign int_rem_3_d1           = WDATA;
// rem_4
assign int_rem_4_address0     = rem_4_address0;
assign int_rem_4_ce0          = rem_4_ce0;
assign int_rem_4_we0          = rem_4_we0;
assign int_rem_4_be0          = {4{rem_4_we0}};
assign int_rem_4_d0           = rem_4_d0;
assign rem_4_q0               = int_rem_4_q0;
assign int_rem_4_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_4_ce1          = ar_hs | (int_rem_4_write & WVALID);
assign int_rem_4_we1          = int_rem_4_write & WVALID;
assign int_rem_4_be1          = WSTRB;
assign int_rem_4_d1           = WDATA;
// rem_5
assign int_rem_5_address0     = rem_5_address0;
assign int_rem_5_ce0          = rem_5_ce0;
assign int_rem_5_we0          = rem_5_we0;
assign int_rem_5_be0          = {4{rem_5_we0}};
assign int_rem_5_d0           = rem_5_d0;
assign rem_5_q0               = int_rem_5_q0;
assign int_rem_5_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_5_ce1          = ar_hs | (int_rem_5_write & WVALID);
assign int_rem_5_we1          = int_rem_5_write & WVALID;
assign int_rem_5_be1          = WSTRB;
assign int_rem_5_d1           = WDATA;
// rem_6
assign int_rem_6_address0     = rem_6_address0;
assign int_rem_6_ce0          = rem_6_ce0;
assign int_rem_6_we0          = rem_6_we0;
assign int_rem_6_be0          = {4{rem_6_we0}};
assign int_rem_6_d0           = rem_6_d0;
assign rem_6_q0               = int_rem_6_q0;
assign int_rem_6_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_6_ce1          = ar_hs | (int_rem_6_write & WVALID);
assign int_rem_6_we1          = int_rem_6_write & WVALID;
assign int_rem_6_be1          = WSTRB;
assign int_rem_6_d1           = WDATA;
// rem_7
assign int_rem_7_address0     = rem_7_address0;
assign int_rem_7_ce0          = rem_7_ce0;
assign int_rem_7_we0          = rem_7_we0;
assign int_rem_7_be0          = {4{rem_7_we0}};
assign int_rem_7_d0           = rem_7_d0;
assign rem_7_q0               = int_rem_7_q0;
assign int_rem_7_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_7_ce1          = ar_hs | (int_rem_7_write & WVALID);
assign int_rem_7_we1          = int_rem_7_write & WVALID;
assign int_rem_7_be1          = WSTRB;
assign int_rem_7_d1           = WDATA;
// rem_8
assign int_rem_8_address0     = rem_8_address0;
assign int_rem_8_ce0          = rem_8_ce0;
assign int_rem_8_we0          = rem_8_we0;
assign int_rem_8_be0          = {4{rem_8_we0}};
assign int_rem_8_d0           = rem_8_d0;
assign rem_8_q0               = int_rem_8_q0;
assign int_rem_8_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_8_ce1          = ar_hs | (int_rem_8_write & WVALID);
assign int_rem_8_we1          = int_rem_8_write & WVALID;
assign int_rem_8_be1          = WSTRB;
assign int_rem_8_d1           = WDATA;
// rem_9
assign int_rem_9_address0     = rem_9_address0;
assign int_rem_9_ce0          = rem_9_ce0;
assign int_rem_9_we0          = rem_9_we0;
assign int_rem_9_be0          = {4{rem_9_we0}};
assign int_rem_9_d0           = rem_9_d0;
assign rem_9_q0               = int_rem_9_q0;
assign int_rem_9_address1     = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_9_ce1          = ar_hs | (int_rem_9_write & WVALID);
assign int_rem_9_we1          = int_rem_9_write & WVALID;
assign int_rem_9_be1          = WSTRB;
assign int_rem_9_d1           = WDATA;
// rem_10
assign int_rem_10_address0    = rem_10_address0;
assign int_rem_10_ce0         = rem_10_ce0;
assign int_rem_10_we0         = rem_10_we0;
assign int_rem_10_be0         = {4{rem_10_we0}};
assign int_rem_10_d0          = rem_10_d0;
assign rem_10_q0              = int_rem_10_q0;
assign int_rem_10_address1    = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_10_ce1         = ar_hs | (int_rem_10_write & WVALID);
assign int_rem_10_we1         = int_rem_10_write & WVALID;
assign int_rem_10_be1         = WSTRB;
assign int_rem_10_d1          = WDATA;
// rem_11
assign int_rem_11_address0    = rem_11_address0;
assign int_rem_11_ce0         = rem_11_ce0;
assign int_rem_11_we0         = rem_11_we0;
assign int_rem_11_be0         = {4{rem_11_we0}};
assign int_rem_11_d0          = rem_11_d0;
assign rem_11_q0              = int_rem_11_q0;
assign int_rem_11_address1    = ar_hs? raddr[4:2] : waddr[4:2];
assign int_rem_11_ce1         = ar_hs | (int_rem_11_write & WVALID);
assign int_rem_11_we1         = int_rem_11_write & WVALID;
assign int_rem_11_be1         = WSTRB;
assign int_rem_11_d1          = WDATA;
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

// int_rem_0_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_0_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_0_BASE && raddr <= ADDR_REM_0_HIGH)
            int_rem_0_read <= 1'b1;
        else
            int_rem_0_read <= 1'b0;
    end
end

// int_rem_0_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_0_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_0_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_0_HIGH)
            int_rem_0_write <= 1'b1;
        else if (WVALID)
            int_rem_0_write <= 1'b0;
    end
end

// int_rem_1_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_1_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_1_BASE && raddr <= ADDR_REM_1_HIGH)
            int_rem_1_read <= 1'b1;
        else
            int_rem_1_read <= 1'b0;
    end
end

// int_rem_1_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_1_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_1_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_1_HIGH)
            int_rem_1_write <= 1'b1;
        else if (WVALID)
            int_rem_1_write <= 1'b0;
    end
end

// int_rem_2_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_2_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_2_BASE && raddr <= ADDR_REM_2_HIGH)
            int_rem_2_read <= 1'b1;
        else
            int_rem_2_read <= 1'b0;
    end
end

// int_rem_2_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_2_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_2_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_2_HIGH)
            int_rem_2_write <= 1'b1;
        else if (WVALID)
            int_rem_2_write <= 1'b0;
    end
end

// int_rem_3_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_3_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_3_BASE && raddr <= ADDR_REM_3_HIGH)
            int_rem_3_read <= 1'b1;
        else
            int_rem_3_read <= 1'b0;
    end
end

// int_rem_3_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_3_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_3_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_3_HIGH)
            int_rem_3_write <= 1'b1;
        else if (WVALID)
            int_rem_3_write <= 1'b0;
    end
end

// int_rem_4_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_4_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_4_BASE && raddr <= ADDR_REM_4_HIGH)
            int_rem_4_read <= 1'b1;
        else
            int_rem_4_read <= 1'b0;
    end
end

// int_rem_4_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_4_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_4_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_4_HIGH)
            int_rem_4_write <= 1'b1;
        else if (WVALID)
            int_rem_4_write <= 1'b0;
    end
end

// int_rem_5_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_5_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_5_BASE && raddr <= ADDR_REM_5_HIGH)
            int_rem_5_read <= 1'b1;
        else
            int_rem_5_read <= 1'b0;
    end
end

// int_rem_5_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_5_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_5_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_5_HIGH)
            int_rem_5_write <= 1'b1;
        else if (WVALID)
            int_rem_5_write <= 1'b0;
    end
end

// int_rem_6_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_6_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_6_BASE && raddr <= ADDR_REM_6_HIGH)
            int_rem_6_read <= 1'b1;
        else
            int_rem_6_read <= 1'b0;
    end
end

// int_rem_6_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_6_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_6_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_6_HIGH)
            int_rem_6_write <= 1'b1;
        else if (WVALID)
            int_rem_6_write <= 1'b0;
    end
end

// int_rem_7_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_7_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_7_BASE && raddr <= ADDR_REM_7_HIGH)
            int_rem_7_read <= 1'b1;
        else
            int_rem_7_read <= 1'b0;
    end
end

// int_rem_7_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_7_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_7_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_7_HIGH)
            int_rem_7_write <= 1'b1;
        else if (WVALID)
            int_rem_7_write <= 1'b0;
    end
end

// int_rem_8_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_8_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_8_BASE && raddr <= ADDR_REM_8_HIGH)
            int_rem_8_read <= 1'b1;
        else
            int_rem_8_read <= 1'b0;
    end
end

// int_rem_8_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_8_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_8_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_8_HIGH)
            int_rem_8_write <= 1'b1;
        else if (WVALID)
            int_rem_8_write <= 1'b0;
    end
end

// int_rem_9_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_9_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_9_BASE && raddr <= ADDR_REM_9_HIGH)
            int_rem_9_read <= 1'b1;
        else
            int_rem_9_read <= 1'b0;
    end
end

// int_rem_9_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_9_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_9_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_9_HIGH)
            int_rem_9_write <= 1'b1;
        else if (WVALID)
            int_rem_9_write <= 1'b0;
    end
end

// int_rem_10_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_10_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_10_BASE && raddr <= ADDR_REM_10_HIGH)
            int_rem_10_read <= 1'b1;
        else
            int_rem_10_read <= 1'b0;
    end
end

// int_rem_10_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_10_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_10_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_10_HIGH)
            int_rem_10_write <= 1'b1;
        else if (WVALID)
            int_rem_10_write <= 1'b0;
    end
end

// int_rem_11_read
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_11_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_REM_11_BASE && raddr <= ADDR_REM_11_HIGH)
            int_rem_11_read <= 1'b1;
        else
            int_rem_11_read <= 1'b0;
    end
end

// int_rem_11_write
always @(posedge ACLK) begin
    if (ARESET)
        int_rem_11_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_REM_11_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_REM_11_HIGH)
            int_rem_11_write <= 1'b1;
        else if (WVALID)
            int_rem_11_write <= 1'b0;
    end
end


endmodule


`timescale 1ns/1ps

module estimate_ISI_encode_AXILiteS_s_axi_ram
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

