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
    input  wire [3:0]                    inputs_0_address0,
    input  wire                          inputs_0_ce0,
    output wire [31:0]                   inputs_0_q0,
    input  wire [3:0]                    inputs_1_address0,
    input  wire                          inputs_1_ce0,
    output wire [31:0]                   inputs_1_q0,
    input  wire [3:0]                    inputs_2_address0,
    input  wire                          inputs_2_ce0,
    output wire [31:0]                   inputs_2_q0,
    input  wire [3:0]                    inputs_3_address0,
    input  wire                          inputs_3_ce0,
    output wire [31:0]                   inputs_3_q0,
    input  wire [3:0]                    inputs_4_address0,
    input  wire                          inputs_4_ce0,
    output wire [31:0]                   inputs_4_q0,
    input  wire [3:0]                    inputs_5_address0,
    input  wire                          inputs_5_ce0,
    output wire [31:0]                   inputs_5_q0,
    input  wire [3:0]                    inputs_6_address0,
    input  wire                          inputs_6_ce0,
    output wire [31:0]                   inputs_6_q0,
    input  wire [3:0]                    inputs_7_address0,
    input  wire                          inputs_7_ce0,
    output wire [31:0]                   inputs_7_q0,
    input  wire [1:0]                    counts_0_address0,
    input  wire                          counts_0_ce0,
    input  wire                          counts_0_we0,
    input  wire [31:0]                   counts_0_d0,
    output wire [31:0]                   counts_0_q0,
    input  wire [1:0]                    counts_1_address0,
    input  wire                          counts_1_ce0,
    input  wire                          counts_1_we0,
    input  wire [31:0]                   counts_1_d0,
    output wire [31:0]                   counts_1_q0,
    input  wire [1:0]                    counts_2_address0,
    input  wire                          counts_2_ce0,
    input  wire                          counts_2_we0,
    input  wire [31:0]                   counts_2_d0,
    output wire [31:0]                   counts_2_q0,
    input  wire [1:0]                    counts_3_address0,
    input  wire                          counts_3_ce0,
    input  wire                          counts_3_we0,
    input  wire [31:0]                   counts_3_d0,
    output wire [31:0]                   counts_3_q0,
    input  wire [1:0]                    counts_4_address0,
    input  wire                          counts_4_ce0,
    input  wire                          counts_4_we0,
    input  wire [31:0]                   counts_4_d0,
    output wire [31:0]                   counts_4_q0,
    input  wire [1:0]                    counts_5_address0,
    input  wire                          counts_5_ce0,
    input  wire                          counts_5_we0,
    input  wire [31:0]                   counts_5_d0,
    output wire [31:0]                   counts_5_q0,
    input  wire [1:0]                    counts_6_address0,
    input  wire                          counts_6_ce0,
    input  wire                          counts_6_we0,
    input  wire [31:0]                   counts_6_d0,
    output wire [31:0]                   counts_6_q0,
    input  wire [1:0]                    counts_7_address0,
    input  wire                          counts_7_ce0,
    input  wire                          counts_7_we0,
    input  wire [31:0]                   counts_7_d0,
    output wire [31:0]                   counts_7_q0,
    input  wire [1:0]                    outputs_0_address0,
    input  wire                          outputs_0_ce0,
    input  wire                          outputs_0_we0,
    input  wire [31:0]                   outputs_0_d0,
    input  wire [1:0]                    outputs_1_address0,
    input  wire                          outputs_1_ce0,
    input  wire                          outputs_1_we0,
    input  wire [31:0]                   outputs_1_d0,
    input  wire [1:0]                    outputs_2_address0,
    input  wire                          outputs_2_ce0,
    input  wire                          outputs_2_we0,
    input  wire [31:0]                   outputs_2_d0,
    input  wire [1:0]                    outputs_3_address0,
    input  wire                          outputs_3_ce0,
    input  wire                          outputs_3_we0,
    input  wire [31:0]                   outputs_3_d0,
    input  wire [1:0]                    outputs_4_address0,
    input  wire                          outputs_4_ce0,
    input  wire                          outputs_4_we0,
    input  wire [31:0]                   outputs_4_d0,
    input  wire [1:0]                    outputs_5_address0,
    input  wire                          outputs_5_ce0,
    input  wire                          outputs_5_we0,
    input  wire [31:0]                   outputs_5_d0,
    input  wire [1:0]                    outputs_6_address0,
    input  wire                          outputs_6_ce0,
    input  wire                          outputs_6_we0,
    input  wire [31:0]                   outputs_6_d0,
    input  wire [1:0]                    outputs_7_address0,
    input  wire                          outputs_7_ce0,
    input  wire                          outputs_7_we0,
    input  wire [31:0]                   outputs_7_d0
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
// 0x040 ~
// 0x07f : Memory 'inputs_0' (12 * 32b)
//         Word n : bit [31:0] - inputs_0[n]
// 0x080 ~
// 0x0bf : Memory 'inputs_1' (12 * 32b)
//         Word n : bit [31:0] - inputs_1[n]
// 0x0c0 ~
// 0x0ff : Memory 'inputs_2' (12 * 32b)
//         Word n : bit [31:0] - inputs_2[n]
// 0x100 ~
// 0x13f : Memory 'inputs_3' (12 * 32b)
//         Word n : bit [31:0] - inputs_3[n]
// 0x140 ~
// 0x17f : Memory 'inputs_4' (12 * 32b)
//         Word n : bit [31:0] - inputs_4[n]
// 0x180 ~
// 0x1bf : Memory 'inputs_5' (12 * 32b)
//         Word n : bit [31:0] - inputs_5[n]
// 0x1c0 ~
// 0x1ff : Memory 'inputs_6' (12 * 32b)
//         Word n : bit [31:0] - inputs_6[n]
// 0x200 ~
// 0x23f : Memory 'inputs_7' (12 * 32b)
//         Word n : bit [31:0] - inputs_7[n]
// 0x240 ~
// 0x24f : Memory 'counts_0' (3 * 32b)
//         Word n : bit [31:0] - counts_0[n]
// 0x250 ~
// 0x25f : Memory 'counts_1' (3 * 32b)
//         Word n : bit [31:0] - counts_1[n]
// 0x260 ~
// 0x26f : Memory 'counts_2' (3 * 32b)
//         Word n : bit [31:0] - counts_2[n]
// 0x270 ~
// 0x27f : Memory 'counts_3' (3 * 32b)
//         Word n : bit [31:0] - counts_3[n]
// 0x280 ~
// 0x28f : Memory 'counts_4' (3 * 32b)
//         Word n : bit [31:0] - counts_4[n]
// 0x290 ~
// 0x29f : Memory 'counts_5' (3 * 32b)
//         Word n : bit [31:0] - counts_5[n]
// 0x2a0 ~
// 0x2af : Memory 'counts_6' (3 * 32b)
//         Word n : bit [31:0] - counts_6[n]
// 0x2b0 ~
// 0x2bf : Memory 'counts_7' (3 * 32b)
//         Word n : bit [31:0] - counts_7[n]
// 0x2c0 ~
// 0x2cf : Memory 'outputs_0' (3 * 32b)
//         Word n : bit [31:0] - outputs_0[n]
// 0x2d0 ~
// 0x2df : Memory 'outputs_1' (3 * 32b)
//         Word n : bit [31:0] - outputs_1[n]
// 0x2e0 ~
// 0x2ef : Memory 'outputs_2' (3 * 32b)
//         Word n : bit [31:0] - outputs_2[n]
// 0x2f0 ~
// 0x2ff : Memory 'outputs_3' (3 * 32b)
//         Word n : bit [31:0] - outputs_3[n]
// 0x300 ~
// 0x30f : Memory 'outputs_4' (3 * 32b)
//         Word n : bit [31:0] - outputs_4[n]
// 0x310 ~
// 0x31f : Memory 'outputs_5' (3 * 32b)
//         Word n : bit [31:0] - outputs_5[n]
// 0x320 ~
// 0x32f : Memory 'outputs_6' (3 * 32b)
//         Word n : bit [31:0] - outputs_6[n]
// 0x330 ~
// 0x33f : Memory 'outputs_7' (3 * 32b)
//         Word n : bit [31:0] - outputs_7[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL        = 10'h000,
    ADDR_GIE            = 10'h004,
    ADDR_IER            = 10'h008,
    ADDR_ISR            = 10'h00c,
    ADDR_INPUTS_0_BASE  = 10'h040,
    ADDR_INPUTS_0_HIGH  = 10'h07f,
    ADDR_INPUTS_1_BASE  = 10'h080,
    ADDR_INPUTS_1_HIGH  = 10'h0bf,
    ADDR_INPUTS_2_BASE  = 10'h0c0,
    ADDR_INPUTS_2_HIGH  = 10'h0ff,
    ADDR_INPUTS_3_BASE  = 10'h100,
    ADDR_INPUTS_3_HIGH  = 10'h13f,
    ADDR_INPUTS_4_BASE  = 10'h140,
    ADDR_INPUTS_4_HIGH  = 10'h17f,
    ADDR_INPUTS_5_BASE  = 10'h180,
    ADDR_INPUTS_5_HIGH  = 10'h1bf,
    ADDR_INPUTS_6_BASE  = 10'h1c0,
    ADDR_INPUTS_6_HIGH  = 10'h1ff,
    ADDR_INPUTS_7_BASE  = 10'h200,
    ADDR_INPUTS_7_HIGH  = 10'h23f,
    ADDR_COUNTS_0_BASE  = 10'h240,
    ADDR_COUNTS_0_HIGH  = 10'h24f,
    ADDR_COUNTS_1_BASE  = 10'h250,
    ADDR_COUNTS_1_HIGH  = 10'h25f,
    ADDR_COUNTS_2_BASE  = 10'h260,
    ADDR_COUNTS_2_HIGH  = 10'h26f,
    ADDR_COUNTS_3_BASE  = 10'h270,
    ADDR_COUNTS_3_HIGH  = 10'h27f,
    ADDR_COUNTS_4_BASE  = 10'h280,
    ADDR_COUNTS_4_HIGH  = 10'h28f,
    ADDR_COUNTS_5_BASE  = 10'h290,
    ADDR_COUNTS_5_HIGH  = 10'h29f,
    ADDR_COUNTS_6_BASE  = 10'h2a0,
    ADDR_COUNTS_6_HIGH  = 10'h2af,
    ADDR_COUNTS_7_BASE  = 10'h2b0,
    ADDR_COUNTS_7_HIGH  = 10'h2bf,
    ADDR_OUTPUTS_0_BASE = 10'h2c0,
    ADDR_OUTPUTS_0_HIGH = 10'h2cf,
    ADDR_OUTPUTS_1_BASE = 10'h2d0,
    ADDR_OUTPUTS_1_HIGH = 10'h2df,
    ADDR_OUTPUTS_2_BASE = 10'h2e0,
    ADDR_OUTPUTS_2_HIGH = 10'h2ef,
    ADDR_OUTPUTS_3_BASE = 10'h2f0,
    ADDR_OUTPUTS_3_HIGH = 10'h2ff,
    ADDR_OUTPUTS_4_BASE = 10'h300,
    ADDR_OUTPUTS_4_HIGH = 10'h30f,
    ADDR_OUTPUTS_5_BASE = 10'h310,
    ADDR_OUTPUTS_5_HIGH = 10'h31f,
    ADDR_OUTPUTS_6_BASE = 10'h320,
    ADDR_OUTPUTS_6_HIGH = 10'h32f,
    ADDR_OUTPUTS_7_BASE = 10'h330,
    ADDR_OUTPUTS_7_HIGH = 10'h33f,
    WRIDLE              = 2'd0,
    WRDATA              = 2'd1,
    WRRESP              = 2'd2,
    WRRESET             = 2'd3,
    RDIDLE              = 2'd0,
    RDDATA              = 2'd1,
    RDRESET             = 2'd2,
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
    // memory signals
    wire [3:0]                    int_inputs_0_address0;
    wire                          int_inputs_0_ce0;
    wire                          int_inputs_0_we0;
    wire [3:0]                    int_inputs_0_be0;
    wire [31:0]                   int_inputs_0_d0;
    wire [31:0]                   int_inputs_0_q0;
    wire [3:0]                    int_inputs_0_address1;
    wire                          int_inputs_0_ce1;
    wire                          int_inputs_0_we1;
    wire [3:0]                    int_inputs_0_be1;
    wire [31:0]                   int_inputs_0_d1;
    wire [31:0]                   int_inputs_0_q1;
    reg                           int_inputs_0_read;
    reg                           int_inputs_0_write;
    wire [3:0]                    int_inputs_1_address0;
    wire                          int_inputs_1_ce0;
    wire                          int_inputs_1_we0;
    wire [3:0]                    int_inputs_1_be0;
    wire [31:0]                   int_inputs_1_d0;
    wire [31:0]                   int_inputs_1_q0;
    wire [3:0]                    int_inputs_1_address1;
    wire                          int_inputs_1_ce1;
    wire                          int_inputs_1_we1;
    wire [3:0]                    int_inputs_1_be1;
    wire [31:0]                   int_inputs_1_d1;
    wire [31:0]                   int_inputs_1_q1;
    reg                           int_inputs_1_read;
    reg                           int_inputs_1_write;
    wire [3:0]                    int_inputs_2_address0;
    wire                          int_inputs_2_ce0;
    wire                          int_inputs_2_we0;
    wire [3:0]                    int_inputs_2_be0;
    wire [31:0]                   int_inputs_2_d0;
    wire [31:0]                   int_inputs_2_q0;
    wire [3:0]                    int_inputs_2_address1;
    wire                          int_inputs_2_ce1;
    wire                          int_inputs_2_we1;
    wire [3:0]                    int_inputs_2_be1;
    wire [31:0]                   int_inputs_2_d1;
    wire [31:0]                   int_inputs_2_q1;
    reg                           int_inputs_2_read;
    reg                           int_inputs_2_write;
    wire [3:0]                    int_inputs_3_address0;
    wire                          int_inputs_3_ce0;
    wire                          int_inputs_3_we0;
    wire [3:0]                    int_inputs_3_be0;
    wire [31:0]                   int_inputs_3_d0;
    wire [31:0]                   int_inputs_3_q0;
    wire [3:0]                    int_inputs_3_address1;
    wire                          int_inputs_3_ce1;
    wire                          int_inputs_3_we1;
    wire [3:0]                    int_inputs_3_be1;
    wire [31:0]                   int_inputs_3_d1;
    wire [31:0]                   int_inputs_3_q1;
    reg                           int_inputs_3_read;
    reg                           int_inputs_3_write;
    wire [3:0]                    int_inputs_4_address0;
    wire                          int_inputs_4_ce0;
    wire                          int_inputs_4_we0;
    wire [3:0]                    int_inputs_4_be0;
    wire [31:0]                   int_inputs_4_d0;
    wire [31:0]                   int_inputs_4_q0;
    wire [3:0]                    int_inputs_4_address1;
    wire                          int_inputs_4_ce1;
    wire                          int_inputs_4_we1;
    wire [3:0]                    int_inputs_4_be1;
    wire [31:0]                   int_inputs_4_d1;
    wire [31:0]                   int_inputs_4_q1;
    reg                           int_inputs_4_read;
    reg                           int_inputs_4_write;
    wire [3:0]                    int_inputs_5_address0;
    wire                          int_inputs_5_ce0;
    wire                          int_inputs_5_we0;
    wire [3:0]                    int_inputs_5_be0;
    wire [31:0]                   int_inputs_5_d0;
    wire [31:0]                   int_inputs_5_q0;
    wire [3:0]                    int_inputs_5_address1;
    wire                          int_inputs_5_ce1;
    wire                          int_inputs_5_we1;
    wire [3:0]                    int_inputs_5_be1;
    wire [31:0]                   int_inputs_5_d1;
    wire [31:0]                   int_inputs_5_q1;
    reg                           int_inputs_5_read;
    reg                           int_inputs_5_write;
    wire [3:0]                    int_inputs_6_address0;
    wire                          int_inputs_6_ce0;
    wire                          int_inputs_6_we0;
    wire [3:0]                    int_inputs_6_be0;
    wire [31:0]                   int_inputs_6_d0;
    wire [31:0]                   int_inputs_6_q0;
    wire [3:0]                    int_inputs_6_address1;
    wire                          int_inputs_6_ce1;
    wire                          int_inputs_6_we1;
    wire [3:0]                    int_inputs_6_be1;
    wire [31:0]                   int_inputs_6_d1;
    wire [31:0]                   int_inputs_6_q1;
    reg                           int_inputs_6_read;
    reg                           int_inputs_6_write;
    wire [3:0]                    int_inputs_7_address0;
    wire                          int_inputs_7_ce0;
    wire                          int_inputs_7_we0;
    wire [3:0]                    int_inputs_7_be0;
    wire [31:0]                   int_inputs_7_d0;
    wire [31:0]                   int_inputs_7_q0;
    wire [3:0]                    int_inputs_7_address1;
    wire                          int_inputs_7_ce1;
    wire                          int_inputs_7_we1;
    wire [3:0]                    int_inputs_7_be1;
    wire [31:0]                   int_inputs_7_d1;
    wire [31:0]                   int_inputs_7_q1;
    reg                           int_inputs_7_read;
    reg                           int_inputs_7_write;
    wire [1:0]                    int_counts_0_address0;
    wire                          int_counts_0_ce0;
    wire                          int_counts_0_we0;
    wire [3:0]                    int_counts_0_be0;
    wire [31:0]                   int_counts_0_d0;
    wire [31:0]                   int_counts_0_q0;
    wire [1:0]                    int_counts_0_address1;
    wire                          int_counts_0_ce1;
    wire                          int_counts_0_we1;
    wire [3:0]                    int_counts_0_be1;
    wire [31:0]                   int_counts_0_d1;
    wire [31:0]                   int_counts_0_q1;
    reg                           int_counts_0_read;
    reg                           int_counts_0_write;
    wire [1:0]                    int_counts_1_address0;
    wire                          int_counts_1_ce0;
    wire                          int_counts_1_we0;
    wire [3:0]                    int_counts_1_be0;
    wire [31:0]                   int_counts_1_d0;
    wire [31:0]                   int_counts_1_q0;
    wire [1:0]                    int_counts_1_address1;
    wire                          int_counts_1_ce1;
    wire                          int_counts_1_we1;
    wire [3:0]                    int_counts_1_be1;
    wire [31:0]                   int_counts_1_d1;
    wire [31:0]                   int_counts_1_q1;
    reg                           int_counts_1_read;
    reg                           int_counts_1_write;
    wire [1:0]                    int_counts_2_address0;
    wire                          int_counts_2_ce0;
    wire                          int_counts_2_we0;
    wire [3:0]                    int_counts_2_be0;
    wire [31:0]                   int_counts_2_d0;
    wire [31:0]                   int_counts_2_q0;
    wire [1:0]                    int_counts_2_address1;
    wire                          int_counts_2_ce1;
    wire                          int_counts_2_we1;
    wire [3:0]                    int_counts_2_be1;
    wire [31:0]                   int_counts_2_d1;
    wire [31:0]                   int_counts_2_q1;
    reg                           int_counts_2_read;
    reg                           int_counts_2_write;
    wire [1:0]                    int_counts_3_address0;
    wire                          int_counts_3_ce0;
    wire                          int_counts_3_we0;
    wire [3:0]                    int_counts_3_be0;
    wire [31:0]                   int_counts_3_d0;
    wire [31:0]                   int_counts_3_q0;
    wire [1:0]                    int_counts_3_address1;
    wire                          int_counts_3_ce1;
    wire                          int_counts_3_we1;
    wire [3:0]                    int_counts_3_be1;
    wire [31:0]                   int_counts_3_d1;
    wire [31:0]                   int_counts_3_q1;
    reg                           int_counts_3_read;
    reg                           int_counts_3_write;
    wire [1:0]                    int_counts_4_address0;
    wire                          int_counts_4_ce0;
    wire                          int_counts_4_we0;
    wire [3:0]                    int_counts_4_be0;
    wire [31:0]                   int_counts_4_d0;
    wire [31:0]                   int_counts_4_q0;
    wire [1:0]                    int_counts_4_address1;
    wire                          int_counts_4_ce1;
    wire                          int_counts_4_we1;
    wire [3:0]                    int_counts_4_be1;
    wire [31:0]                   int_counts_4_d1;
    wire [31:0]                   int_counts_4_q1;
    reg                           int_counts_4_read;
    reg                           int_counts_4_write;
    wire [1:0]                    int_counts_5_address0;
    wire                          int_counts_5_ce0;
    wire                          int_counts_5_we0;
    wire [3:0]                    int_counts_5_be0;
    wire [31:0]                   int_counts_5_d0;
    wire [31:0]                   int_counts_5_q0;
    wire [1:0]                    int_counts_5_address1;
    wire                          int_counts_5_ce1;
    wire                          int_counts_5_we1;
    wire [3:0]                    int_counts_5_be1;
    wire [31:0]                   int_counts_5_d1;
    wire [31:0]                   int_counts_5_q1;
    reg                           int_counts_5_read;
    reg                           int_counts_5_write;
    wire [1:0]                    int_counts_6_address0;
    wire                          int_counts_6_ce0;
    wire                          int_counts_6_we0;
    wire [3:0]                    int_counts_6_be0;
    wire [31:0]                   int_counts_6_d0;
    wire [31:0]                   int_counts_6_q0;
    wire [1:0]                    int_counts_6_address1;
    wire                          int_counts_6_ce1;
    wire                          int_counts_6_we1;
    wire [3:0]                    int_counts_6_be1;
    wire [31:0]                   int_counts_6_d1;
    wire [31:0]                   int_counts_6_q1;
    reg                           int_counts_6_read;
    reg                           int_counts_6_write;
    wire [1:0]                    int_counts_7_address0;
    wire                          int_counts_7_ce0;
    wire                          int_counts_7_we0;
    wire [3:0]                    int_counts_7_be0;
    wire [31:0]                   int_counts_7_d0;
    wire [31:0]                   int_counts_7_q0;
    wire [1:0]                    int_counts_7_address1;
    wire                          int_counts_7_ce1;
    wire                          int_counts_7_we1;
    wire [3:0]                    int_counts_7_be1;
    wire [31:0]                   int_counts_7_d1;
    wire [31:0]                   int_counts_7_q1;
    reg                           int_counts_7_read;
    reg                           int_counts_7_write;
    wire [1:0]                    int_outputs_0_address0;
    wire                          int_outputs_0_ce0;
    wire                          int_outputs_0_we0;
    wire [3:0]                    int_outputs_0_be0;
    wire [31:0]                   int_outputs_0_d0;
    wire [31:0]                   int_outputs_0_q0;
    wire [1:0]                    int_outputs_0_address1;
    wire                          int_outputs_0_ce1;
    wire                          int_outputs_0_we1;
    wire [3:0]                    int_outputs_0_be1;
    wire [31:0]                   int_outputs_0_d1;
    wire [31:0]                   int_outputs_0_q1;
    reg                           int_outputs_0_read;
    reg                           int_outputs_0_write;
    wire [1:0]                    int_outputs_1_address0;
    wire                          int_outputs_1_ce0;
    wire                          int_outputs_1_we0;
    wire [3:0]                    int_outputs_1_be0;
    wire [31:0]                   int_outputs_1_d0;
    wire [31:0]                   int_outputs_1_q0;
    wire [1:0]                    int_outputs_1_address1;
    wire                          int_outputs_1_ce1;
    wire                          int_outputs_1_we1;
    wire [3:0]                    int_outputs_1_be1;
    wire [31:0]                   int_outputs_1_d1;
    wire [31:0]                   int_outputs_1_q1;
    reg                           int_outputs_1_read;
    reg                           int_outputs_1_write;
    wire [1:0]                    int_outputs_2_address0;
    wire                          int_outputs_2_ce0;
    wire                          int_outputs_2_we0;
    wire [3:0]                    int_outputs_2_be0;
    wire [31:0]                   int_outputs_2_d0;
    wire [31:0]                   int_outputs_2_q0;
    wire [1:0]                    int_outputs_2_address1;
    wire                          int_outputs_2_ce1;
    wire                          int_outputs_2_we1;
    wire [3:0]                    int_outputs_2_be1;
    wire [31:0]                   int_outputs_2_d1;
    wire [31:0]                   int_outputs_2_q1;
    reg                           int_outputs_2_read;
    reg                           int_outputs_2_write;
    wire [1:0]                    int_outputs_3_address0;
    wire                          int_outputs_3_ce0;
    wire                          int_outputs_3_we0;
    wire [3:0]                    int_outputs_3_be0;
    wire [31:0]                   int_outputs_3_d0;
    wire [31:0]                   int_outputs_3_q0;
    wire [1:0]                    int_outputs_3_address1;
    wire                          int_outputs_3_ce1;
    wire                          int_outputs_3_we1;
    wire [3:0]                    int_outputs_3_be1;
    wire [31:0]                   int_outputs_3_d1;
    wire [31:0]                   int_outputs_3_q1;
    reg                           int_outputs_3_read;
    reg                           int_outputs_3_write;
    wire [1:0]                    int_outputs_4_address0;
    wire                          int_outputs_4_ce0;
    wire                          int_outputs_4_we0;
    wire [3:0]                    int_outputs_4_be0;
    wire [31:0]                   int_outputs_4_d0;
    wire [31:0]                   int_outputs_4_q0;
    wire [1:0]                    int_outputs_4_address1;
    wire                          int_outputs_4_ce1;
    wire                          int_outputs_4_we1;
    wire [3:0]                    int_outputs_4_be1;
    wire [31:0]                   int_outputs_4_d1;
    wire [31:0]                   int_outputs_4_q1;
    reg                           int_outputs_4_read;
    reg                           int_outputs_4_write;
    wire [1:0]                    int_outputs_5_address0;
    wire                          int_outputs_5_ce0;
    wire                          int_outputs_5_we0;
    wire [3:0]                    int_outputs_5_be0;
    wire [31:0]                   int_outputs_5_d0;
    wire [31:0]                   int_outputs_5_q0;
    wire [1:0]                    int_outputs_5_address1;
    wire                          int_outputs_5_ce1;
    wire                          int_outputs_5_we1;
    wire [3:0]                    int_outputs_5_be1;
    wire [31:0]                   int_outputs_5_d1;
    wire [31:0]                   int_outputs_5_q1;
    reg                           int_outputs_5_read;
    reg                           int_outputs_5_write;
    wire [1:0]                    int_outputs_6_address0;
    wire                          int_outputs_6_ce0;
    wire                          int_outputs_6_we0;
    wire [3:0]                    int_outputs_6_be0;
    wire [31:0]                   int_outputs_6_d0;
    wire [31:0]                   int_outputs_6_q0;
    wire [1:0]                    int_outputs_6_address1;
    wire                          int_outputs_6_ce1;
    wire                          int_outputs_6_we1;
    wire [3:0]                    int_outputs_6_be1;
    wire [31:0]                   int_outputs_6_d1;
    wire [31:0]                   int_outputs_6_q1;
    reg                           int_outputs_6_read;
    reg                           int_outputs_6_write;
    wire [1:0]                    int_outputs_7_address0;
    wire                          int_outputs_7_ce0;
    wire                          int_outputs_7_we0;
    wire [3:0]                    int_outputs_7_be0;
    wire [31:0]                   int_outputs_7_d0;
    wire [31:0]                   int_outputs_7_q0;
    wire [1:0]                    int_outputs_7_address1;
    wire                          int_outputs_7_ce1;
    wire                          int_outputs_7_we1;
    wire [3:0]                    int_outputs_7_be1;
    wire [31:0]                   int_outputs_7_d1;
    wire [31:0]                   int_outputs_7_q1;
    reg                           int_outputs_7_read;
    reg                           int_outputs_7_write;

//------------------------Instantiation------------------
// int_inputs_0
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
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
    .DEPTH    ( 12 )
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
    .DEPTH    ( 12 )
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
    .DEPTH    ( 12 )
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
    .DEPTH    ( 12 )
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
    .DEPTH    ( 12 )
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
    .DEPTH    ( 12 )
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
    .DEPTH    ( 12 )
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
// int_counts_0
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_counts_0 (
    .clk0     ( ACLK ),
    .address0 ( int_counts_0_address0 ),
    .ce0      ( int_counts_0_ce0 ),
    .we0      ( int_counts_0_we0 ),
    .be0      ( int_counts_0_be0 ),
    .d0       ( int_counts_0_d0 ),
    .q0       ( int_counts_0_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_counts_0_address1 ),
    .ce1      ( int_counts_0_ce1 ),
    .we1      ( int_counts_0_we1 ),
    .be1      ( int_counts_0_be1 ),
    .d1       ( int_counts_0_d1 ),
    .q1       ( int_counts_0_q1 )
);
// int_counts_1
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_counts_1 (
    .clk0     ( ACLK ),
    .address0 ( int_counts_1_address0 ),
    .ce0      ( int_counts_1_ce0 ),
    .we0      ( int_counts_1_we0 ),
    .be0      ( int_counts_1_be0 ),
    .d0       ( int_counts_1_d0 ),
    .q0       ( int_counts_1_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_counts_1_address1 ),
    .ce1      ( int_counts_1_ce1 ),
    .we1      ( int_counts_1_we1 ),
    .be1      ( int_counts_1_be1 ),
    .d1       ( int_counts_1_d1 ),
    .q1       ( int_counts_1_q1 )
);
// int_counts_2
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_counts_2 (
    .clk0     ( ACLK ),
    .address0 ( int_counts_2_address0 ),
    .ce0      ( int_counts_2_ce0 ),
    .we0      ( int_counts_2_we0 ),
    .be0      ( int_counts_2_be0 ),
    .d0       ( int_counts_2_d0 ),
    .q0       ( int_counts_2_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_counts_2_address1 ),
    .ce1      ( int_counts_2_ce1 ),
    .we1      ( int_counts_2_we1 ),
    .be1      ( int_counts_2_be1 ),
    .d1       ( int_counts_2_d1 ),
    .q1       ( int_counts_2_q1 )
);
// int_counts_3
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_counts_3 (
    .clk0     ( ACLK ),
    .address0 ( int_counts_3_address0 ),
    .ce0      ( int_counts_3_ce0 ),
    .we0      ( int_counts_3_we0 ),
    .be0      ( int_counts_3_be0 ),
    .d0       ( int_counts_3_d0 ),
    .q0       ( int_counts_3_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_counts_3_address1 ),
    .ce1      ( int_counts_3_ce1 ),
    .we1      ( int_counts_3_we1 ),
    .be1      ( int_counts_3_be1 ),
    .d1       ( int_counts_3_d1 ),
    .q1       ( int_counts_3_q1 )
);
// int_counts_4
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_counts_4 (
    .clk0     ( ACLK ),
    .address0 ( int_counts_4_address0 ),
    .ce0      ( int_counts_4_ce0 ),
    .we0      ( int_counts_4_we0 ),
    .be0      ( int_counts_4_be0 ),
    .d0       ( int_counts_4_d0 ),
    .q0       ( int_counts_4_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_counts_4_address1 ),
    .ce1      ( int_counts_4_ce1 ),
    .we1      ( int_counts_4_we1 ),
    .be1      ( int_counts_4_be1 ),
    .d1       ( int_counts_4_d1 ),
    .q1       ( int_counts_4_q1 )
);
// int_counts_5
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_counts_5 (
    .clk0     ( ACLK ),
    .address0 ( int_counts_5_address0 ),
    .ce0      ( int_counts_5_ce0 ),
    .we0      ( int_counts_5_we0 ),
    .be0      ( int_counts_5_be0 ),
    .d0       ( int_counts_5_d0 ),
    .q0       ( int_counts_5_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_counts_5_address1 ),
    .ce1      ( int_counts_5_ce1 ),
    .we1      ( int_counts_5_we1 ),
    .be1      ( int_counts_5_be1 ),
    .d1       ( int_counts_5_d1 ),
    .q1       ( int_counts_5_q1 )
);
// int_counts_6
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_counts_6 (
    .clk0     ( ACLK ),
    .address0 ( int_counts_6_address0 ),
    .ce0      ( int_counts_6_ce0 ),
    .we0      ( int_counts_6_we0 ),
    .be0      ( int_counts_6_be0 ),
    .d0       ( int_counts_6_d0 ),
    .q0       ( int_counts_6_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_counts_6_address1 ),
    .ce1      ( int_counts_6_ce1 ),
    .we1      ( int_counts_6_we1 ),
    .be1      ( int_counts_6_be1 ),
    .d1       ( int_counts_6_d1 ),
    .q1       ( int_counts_6_q1 )
);
// int_counts_7
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_counts_7 (
    .clk0     ( ACLK ),
    .address0 ( int_counts_7_address0 ),
    .ce0      ( int_counts_7_ce0 ),
    .we0      ( int_counts_7_we0 ),
    .be0      ( int_counts_7_be0 ),
    .d0       ( int_counts_7_d0 ),
    .q0       ( int_counts_7_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_counts_7_address1 ),
    .ce1      ( int_counts_7_ce1 ),
    .we1      ( int_counts_7_we1 ),
    .be1      ( int_counts_7_be1 ),
    .d1       ( int_counts_7_d1 ),
    .q1       ( int_counts_7_q1 )
);
// int_outputs_0
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_outputs_0 (
    .clk0     ( ACLK ),
    .address0 ( int_outputs_0_address0 ),
    .ce0      ( int_outputs_0_ce0 ),
    .we0      ( int_outputs_0_we0 ),
    .be0      ( int_outputs_0_be0 ),
    .d0       ( int_outputs_0_d0 ),
    .q0       ( int_outputs_0_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_outputs_0_address1 ),
    .ce1      ( int_outputs_0_ce1 ),
    .we1      ( int_outputs_0_we1 ),
    .be1      ( int_outputs_0_be1 ),
    .d1       ( int_outputs_0_d1 ),
    .q1       ( int_outputs_0_q1 )
);
// int_outputs_1
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_outputs_1 (
    .clk0     ( ACLK ),
    .address0 ( int_outputs_1_address0 ),
    .ce0      ( int_outputs_1_ce0 ),
    .we0      ( int_outputs_1_we0 ),
    .be0      ( int_outputs_1_be0 ),
    .d0       ( int_outputs_1_d0 ),
    .q0       ( int_outputs_1_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_outputs_1_address1 ),
    .ce1      ( int_outputs_1_ce1 ),
    .we1      ( int_outputs_1_we1 ),
    .be1      ( int_outputs_1_be1 ),
    .d1       ( int_outputs_1_d1 ),
    .q1       ( int_outputs_1_q1 )
);
// int_outputs_2
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_outputs_2 (
    .clk0     ( ACLK ),
    .address0 ( int_outputs_2_address0 ),
    .ce0      ( int_outputs_2_ce0 ),
    .we0      ( int_outputs_2_we0 ),
    .be0      ( int_outputs_2_be0 ),
    .d0       ( int_outputs_2_d0 ),
    .q0       ( int_outputs_2_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_outputs_2_address1 ),
    .ce1      ( int_outputs_2_ce1 ),
    .we1      ( int_outputs_2_we1 ),
    .be1      ( int_outputs_2_be1 ),
    .d1       ( int_outputs_2_d1 ),
    .q1       ( int_outputs_2_q1 )
);
// int_outputs_3
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_outputs_3 (
    .clk0     ( ACLK ),
    .address0 ( int_outputs_3_address0 ),
    .ce0      ( int_outputs_3_ce0 ),
    .we0      ( int_outputs_3_we0 ),
    .be0      ( int_outputs_3_be0 ),
    .d0       ( int_outputs_3_d0 ),
    .q0       ( int_outputs_3_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_outputs_3_address1 ),
    .ce1      ( int_outputs_3_ce1 ),
    .we1      ( int_outputs_3_we1 ),
    .be1      ( int_outputs_3_be1 ),
    .d1       ( int_outputs_3_d1 ),
    .q1       ( int_outputs_3_q1 )
);
// int_outputs_4
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_outputs_4 (
    .clk0     ( ACLK ),
    .address0 ( int_outputs_4_address0 ),
    .ce0      ( int_outputs_4_ce0 ),
    .we0      ( int_outputs_4_we0 ),
    .be0      ( int_outputs_4_be0 ),
    .d0       ( int_outputs_4_d0 ),
    .q0       ( int_outputs_4_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_outputs_4_address1 ),
    .ce1      ( int_outputs_4_ce1 ),
    .we1      ( int_outputs_4_we1 ),
    .be1      ( int_outputs_4_be1 ),
    .d1       ( int_outputs_4_d1 ),
    .q1       ( int_outputs_4_q1 )
);
// int_outputs_5
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_outputs_5 (
    .clk0     ( ACLK ),
    .address0 ( int_outputs_5_address0 ),
    .ce0      ( int_outputs_5_ce0 ),
    .we0      ( int_outputs_5_we0 ),
    .be0      ( int_outputs_5_be0 ),
    .d0       ( int_outputs_5_d0 ),
    .q0       ( int_outputs_5_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_outputs_5_address1 ),
    .ce1      ( int_outputs_5_ce1 ),
    .we1      ( int_outputs_5_we1 ),
    .be1      ( int_outputs_5_be1 ),
    .d1       ( int_outputs_5_d1 ),
    .q1       ( int_outputs_5_q1 )
);
// int_outputs_6
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_outputs_6 (
    .clk0     ( ACLK ),
    .address0 ( int_outputs_6_address0 ),
    .ce0      ( int_outputs_6_ce0 ),
    .we0      ( int_outputs_6_we0 ),
    .be0      ( int_outputs_6_be0 ),
    .d0       ( int_outputs_6_d0 ),
    .q0       ( int_outputs_6_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_outputs_6_address1 ),
    .ce1      ( int_outputs_6_ce1 ),
    .we1      ( int_outputs_6_we1 ),
    .be1      ( int_outputs_6_be1 ),
    .d1       ( int_outputs_6_d1 ),
    .q1       ( int_outputs_6_q1 )
);
// int_outputs_7
estimate_FR_2_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_outputs_7 (
    .clk0     ( ACLK ),
    .address0 ( int_outputs_7_address0 ),
    .ce0      ( int_outputs_7_ce0 ),
    .we0      ( int_outputs_7_we0 ),
    .be0      ( int_outputs_7_be0 ),
    .d0       ( int_outputs_7_d0 ),
    .q0       ( int_outputs_7_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_outputs_7_address1 ),
    .ce1      ( int_outputs_7_ce1 ),
    .we1      ( int_outputs_7_we1 ),
    .be1      ( int_outputs_7_be1 ),
    .d1       ( int_outputs_7_d1 ),
    .q1       ( int_outputs_7_q1 )
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
assign RVALID  = (rstate == RDDATA) & !int_inputs_0_read & !int_inputs_1_read & !int_inputs_2_read & !int_inputs_3_read & !int_inputs_4_read & !int_inputs_5_read & !int_inputs_6_read & !int_inputs_7_read & !int_counts_0_read & !int_counts_1_read & !int_counts_2_read & !int_counts_3_read & !int_counts_4_read & !int_counts_5_read & !int_counts_6_read & !int_counts_7_read & !int_outputs_0_read & !int_outputs_1_read & !int_outputs_2_read & !int_outputs_3_read & !int_outputs_4_read & !int_outputs_5_read & !int_outputs_6_read & !int_outputs_7_read;
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
        else if (int_counts_0_read) begin
            rdata <= int_counts_0_q1;
        end
        else if (int_counts_1_read) begin
            rdata <= int_counts_1_q1;
        end
        else if (int_counts_2_read) begin
            rdata <= int_counts_2_q1;
        end
        else if (int_counts_3_read) begin
            rdata <= int_counts_3_q1;
        end
        else if (int_counts_4_read) begin
            rdata <= int_counts_4_q1;
        end
        else if (int_counts_5_read) begin
            rdata <= int_counts_5_q1;
        end
        else if (int_counts_6_read) begin
            rdata <= int_counts_6_q1;
        end
        else if (int_counts_7_read) begin
            rdata <= int_counts_7_q1;
        end
        else if (int_outputs_0_read) begin
            rdata <= int_outputs_0_q1;
        end
        else if (int_outputs_1_read) begin
            rdata <= int_outputs_1_q1;
        end
        else if (int_outputs_2_read) begin
            rdata <= int_outputs_2_q1;
        end
        else if (int_outputs_3_read) begin
            rdata <= int_outputs_3_q1;
        end
        else if (int_outputs_4_read) begin
            rdata <= int_outputs_4_q1;
        end
        else if (int_outputs_5_read) begin
            rdata <= int_outputs_5_q1;
        end
        else if (int_outputs_6_read) begin
            rdata <= int_outputs_6_q1;
        end
        else if (int_outputs_7_read) begin
            rdata <= int_outputs_7_q1;
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


//------------------------Memory logic-------------------
// inputs_0
assign int_inputs_0_address0  = inputs_0_address0;
assign int_inputs_0_ce0       = inputs_0_ce0;
assign int_inputs_0_we0       = 1'b0;
assign int_inputs_0_be0       = 1'b0;
assign int_inputs_0_d0        = 1'b0;
assign inputs_0_q0            = int_inputs_0_q0;
assign int_inputs_0_address1  = ar_hs? raddr[5:2] : waddr[5:2];
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
assign int_inputs_1_address1  = ar_hs? raddr[5:2] : waddr[5:2];
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
assign int_inputs_2_address1  = ar_hs? raddr[5:2] : waddr[5:2];
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
assign int_inputs_3_address1  = ar_hs? raddr[5:2] : waddr[5:2];
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
assign int_inputs_4_address1  = ar_hs? raddr[5:2] : waddr[5:2];
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
assign int_inputs_5_address1  = ar_hs? raddr[5:2] : waddr[5:2];
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
assign int_inputs_6_address1  = ar_hs? raddr[5:2] : waddr[5:2];
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
assign int_inputs_7_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_inputs_7_ce1       = ar_hs | (int_inputs_7_write & WVALID);
assign int_inputs_7_we1       = int_inputs_7_write & WVALID;
assign int_inputs_7_be1       = WSTRB;
assign int_inputs_7_d1        = WDATA;
// counts_0
assign int_counts_0_address0  = counts_0_address0;
assign int_counts_0_ce0       = counts_0_ce0;
assign int_counts_0_we0       = counts_0_we0;
assign int_counts_0_be0       = {4{counts_0_we0}};
assign int_counts_0_d0        = counts_0_d0;
assign counts_0_q0            = int_counts_0_q0;
assign int_counts_0_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_counts_0_ce1       = ar_hs | (int_counts_0_write & WVALID);
assign int_counts_0_we1       = int_counts_0_write & WVALID;
assign int_counts_0_be1       = WSTRB;
assign int_counts_0_d1        = WDATA;
// counts_1
assign int_counts_1_address0  = counts_1_address0;
assign int_counts_1_ce0       = counts_1_ce0;
assign int_counts_1_we0       = counts_1_we0;
assign int_counts_1_be0       = {4{counts_1_we0}};
assign int_counts_1_d0        = counts_1_d0;
assign counts_1_q0            = int_counts_1_q0;
assign int_counts_1_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_counts_1_ce1       = ar_hs | (int_counts_1_write & WVALID);
assign int_counts_1_we1       = int_counts_1_write & WVALID;
assign int_counts_1_be1       = WSTRB;
assign int_counts_1_d1        = WDATA;
// counts_2
assign int_counts_2_address0  = counts_2_address0;
assign int_counts_2_ce0       = counts_2_ce0;
assign int_counts_2_we0       = counts_2_we0;
assign int_counts_2_be0       = {4{counts_2_we0}};
assign int_counts_2_d0        = counts_2_d0;
assign counts_2_q0            = int_counts_2_q0;
assign int_counts_2_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_counts_2_ce1       = ar_hs | (int_counts_2_write & WVALID);
assign int_counts_2_we1       = int_counts_2_write & WVALID;
assign int_counts_2_be1       = WSTRB;
assign int_counts_2_d1        = WDATA;
// counts_3
assign int_counts_3_address0  = counts_3_address0;
assign int_counts_3_ce0       = counts_3_ce0;
assign int_counts_3_we0       = counts_3_we0;
assign int_counts_3_be0       = {4{counts_3_we0}};
assign int_counts_3_d0        = counts_3_d0;
assign counts_3_q0            = int_counts_3_q0;
assign int_counts_3_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_counts_3_ce1       = ar_hs | (int_counts_3_write & WVALID);
assign int_counts_3_we1       = int_counts_3_write & WVALID;
assign int_counts_3_be1       = WSTRB;
assign int_counts_3_d1        = WDATA;
// counts_4
assign int_counts_4_address0  = counts_4_address0;
assign int_counts_4_ce0       = counts_4_ce0;
assign int_counts_4_we0       = counts_4_we0;
assign int_counts_4_be0       = {4{counts_4_we0}};
assign int_counts_4_d0        = counts_4_d0;
assign counts_4_q0            = int_counts_4_q0;
assign int_counts_4_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_counts_4_ce1       = ar_hs | (int_counts_4_write & WVALID);
assign int_counts_4_we1       = int_counts_4_write & WVALID;
assign int_counts_4_be1       = WSTRB;
assign int_counts_4_d1        = WDATA;
// counts_5
assign int_counts_5_address0  = counts_5_address0;
assign int_counts_5_ce0       = counts_5_ce0;
assign int_counts_5_we0       = counts_5_we0;
assign int_counts_5_be0       = {4{counts_5_we0}};
assign int_counts_5_d0        = counts_5_d0;
assign counts_5_q0            = int_counts_5_q0;
assign int_counts_5_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_counts_5_ce1       = ar_hs | (int_counts_5_write & WVALID);
assign int_counts_5_we1       = int_counts_5_write & WVALID;
assign int_counts_5_be1       = WSTRB;
assign int_counts_5_d1        = WDATA;
// counts_6
assign int_counts_6_address0  = counts_6_address0;
assign int_counts_6_ce0       = counts_6_ce0;
assign int_counts_6_we0       = counts_6_we0;
assign int_counts_6_be0       = {4{counts_6_we0}};
assign int_counts_6_d0        = counts_6_d0;
assign counts_6_q0            = int_counts_6_q0;
assign int_counts_6_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_counts_6_ce1       = ar_hs | (int_counts_6_write & WVALID);
assign int_counts_6_we1       = int_counts_6_write & WVALID;
assign int_counts_6_be1       = WSTRB;
assign int_counts_6_d1        = WDATA;
// counts_7
assign int_counts_7_address0  = counts_7_address0;
assign int_counts_7_ce0       = counts_7_ce0;
assign int_counts_7_we0       = counts_7_we0;
assign int_counts_7_be0       = {4{counts_7_we0}};
assign int_counts_7_d0        = counts_7_d0;
assign counts_7_q0            = int_counts_7_q0;
assign int_counts_7_address1  = ar_hs? raddr[3:2] : waddr[3:2];
assign int_counts_7_ce1       = ar_hs | (int_counts_7_write & WVALID);
assign int_counts_7_we1       = int_counts_7_write & WVALID;
assign int_counts_7_be1       = WSTRB;
assign int_counts_7_d1        = WDATA;
// outputs_0
assign int_outputs_0_address0 = outputs_0_address0;
assign int_outputs_0_ce0      = outputs_0_ce0;
assign int_outputs_0_we0      = outputs_0_we0;
assign int_outputs_0_be0      = {4{outputs_0_we0}};
assign int_outputs_0_d0       = outputs_0_d0;
assign int_outputs_0_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_outputs_0_ce1      = ar_hs | (int_outputs_0_write & WVALID);
assign int_outputs_0_we1      = int_outputs_0_write & WVALID;
assign int_outputs_0_be1      = WSTRB;
assign int_outputs_0_d1       = WDATA;
// outputs_1
assign int_outputs_1_address0 = outputs_1_address0;
assign int_outputs_1_ce0      = outputs_1_ce0;
assign int_outputs_1_we0      = outputs_1_we0;
assign int_outputs_1_be0      = {4{outputs_1_we0}};
assign int_outputs_1_d0       = outputs_1_d0;
assign int_outputs_1_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_outputs_1_ce1      = ar_hs | (int_outputs_1_write & WVALID);
assign int_outputs_1_we1      = int_outputs_1_write & WVALID;
assign int_outputs_1_be1      = WSTRB;
assign int_outputs_1_d1       = WDATA;
// outputs_2
assign int_outputs_2_address0 = outputs_2_address0;
assign int_outputs_2_ce0      = outputs_2_ce0;
assign int_outputs_2_we0      = outputs_2_we0;
assign int_outputs_2_be0      = {4{outputs_2_we0}};
assign int_outputs_2_d0       = outputs_2_d0;
assign int_outputs_2_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_outputs_2_ce1      = ar_hs | (int_outputs_2_write & WVALID);
assign int_outputs_2_we1      = int_outputs_2_write & WVALID;
assign int_outputs_2_be1      = WSTRB;
assign int_outputs_2_d1       = WDATA;
// outputs_3
assign int_outputs_3_address0 = outputs_3_address0;
assign int_outputs_3_ce0      = outputs_3_ce0;
assign int_outputs_3_we0      = outputs_3_we0;
assign int_outputs_3_be0      = {4{outputs_3_we0}};
assign int_outputs_3_d0       = outputs_3_d0;
assign int_outputs_3_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_outputs_3_ce1      = ar_hs | (int_outputs_3_write & WVALID);
assign int_outputs_3_we1      = int_outputs_3_write & WVALID;
assign int_outputs_3_be1      = WSTRB;
assign int_outputs_3_d1       = WDATA;
// outputs_4
assign int_outputs_4_address0 = outputs_4_address0;
assign int_outputs_4_ce0      = outputs_4_ce0;
assign int_outputs_4_we0      = outputs_4_we0;
assign int_outputs_4_be0      = {4{outputs_4_we0}};
assign int_outputs_4_d0       = outputs_4_d0;
assign int_outputs_4_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_outputs_4_ce1      = ar_hs | (int_outputs_4_write & WVALID);
assign int_outputs_4_we1      = int_outputs_4_write & WVALID;
assign int_outputs_4_be1      = WSTRB;
assign int_outputs_4_d1       = WDATA;
// outputs_5
assign int_outputs_5_address0 = outputs_5_address0;
assign int_outputs_5_ce0      = outputs_5_ce0;
assign int_outputs_5_we0      = outputs_5_we0;
assign int_outputs_5_be0      = {4{outputs_5_we0}};
assign int_outputs_5_d0       = outputs_5_d0;
assign int_outputs_5_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_outputs_5_ce1      = ar_hs | (int_outputs_5_write & WVALID);
assign int_outputs_5_we1      = int_outputs_5_write & WVALID;
assign int_outputs_5_be1      = WSTRB;
assign int_outputs_5_d1       = WDATA;
// outputs_6
assign int_outputs_6_address0 = outputs_6_address0;
assign int_outputs_6_ce0      = outputs_6_ce0;
assign int_outputs_6_we0      = outputs_6_we0;
assign int_outputs_6_be0      = {4{outputs_6_we0}};
assign int_outputs_6_d0       = outputs_6_d0;
assign int_outputs_6_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_outputs_6_ce1      = ar_hs | (int_outputs_6_write & WVALID);
assign int_outputs_6_we1      = int_outputs_6_write & WVALID;
assign int_outputs_6_be1      = WSTRB;
assign int_outputs_6_d1       = WDATA;
// outputs_7
assign int_outputs_7_address0 = outputs_7_address0;
assign int_outputs_7_ce0      = outputs_7_ce0;
assign int_outputs_7_we0      = outputs_7_we0;
assign int_outputs_7_be0      = {4{outputs_7_we0}};
assign int_outputs_7_d0       = outputs_7_d0;
assign int_outputs_7_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_outputs_7_ce1      = ar_hs | (int_outputs_7_write & WVALID);
assign int_outputs_7_we1      = int_outputs_7_write & WVALID;
assign int_outputs_7_be1      = WSTRB;
assign int_outputs_7_d1       = WDATA;
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

// int_counts_0_read
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_0_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_COUNTS_0_BASE && raddr <= ADDR_COUNTS_0_HIGH)
            int_counts_0_read <= 1'b1;
        else
            int_counts_0_read <= 1'b0;
    end
end

// int_counts_0_write
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_0_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_COUNTS_0_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_COUNTS_0_HIGH)
            int_counts_0_write <= 1'b1;
        else if (WVALID)
            int_counts_0_write <= 1'b0;
    end
end

// int_counts_1_read
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_1_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_COUNTS_1_BASE && raddr <= ADDR_COUNTS_1_HIGH)
            int_counts_1_read <= 1'b1;
        else
            int_counts_1_read <= 1'b0;
    end
end

// int_counts_1_write
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_1_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_COUNTS_1_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_COUNTS_1_HIGH)
            int_counts_1_write <= 1'b1;
        else if (WVALID)
            int_counts_1_write <= 1'b0;
    end
end

// int_counts_2_read
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_2_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_COUNTS_2_BASE && raddr <= ADDR_COUNTS_2_HIGH)
            int_counts_2_read <= 1'b1;
        else
            int_counts_2_read <= 1'b0;
    end
end

// int_counts_2_write
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_2_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_COUNTS_2_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_COUNTS_2_HIGH)
            int_counts_2_write <= 1'b1;
        else if (WVALID)
            int_counts_2_write <= 1'b0;
    end
end

// int_counts_3_read
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_3_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_COUNTS_3_BASE && raddr <= ADDR_COUNTS_3_HIGH)
            int_counts_3_read <= 1'b1;
        else
            int_counts_3_read <= 1'b0;
    end
end

// int_counts_3_write
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_3_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_COUNTS_3_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_COUNTS_3_HIGH)
            int_counts_3_write <= 1'b1;
        else if (WVALID)
            int_counts_3_write <= 1'b0;
    end
end

// int_counts_4_read
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_4_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_COUNTS_4_BASE && raddr <= ADDR_COUNTS_4_HIGH)
            int_counts_4_read <= 1'b1;
        else
            int_counts_4_read <= 1'b0;
    end
end

// int_counts_4_write
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_4_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_COUNTS_4_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_COUNTS_4_HIGH)
            int_counts_4_write <= 1'b1;
        else if (WVALID)
            int_counts_4_write <= 1'b0;
    end
end

// int_counts_5_read
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_5_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_COUNTS_5_BASE && raddr <= ADDR_COUNTS_5_HIGH)
            int_counts_5_read <= 1'b1;
        else
            int_counts_5_read <= 1'b0;
    end
end

// int_counts_5_write
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_5_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_COUNTS_5_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_COUNTS_5_HIGH)
            int_counts_5_write <= 1'b1;
        else if (WVALID)
            int_counts_5_write <= 1'b0;
    end
end

// int_counts_6_read
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_6_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_COUNTS_6_BASE && raddr <= ADDR_COUNTS_6_HIGH)
            int_counts_6_read <= 1'b1;
        else
            int_counts_6_read <= 1'b0;
    end
end

// int_counts_6_write
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_6_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_COUNTS_6_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_COUNTS_6_HIGH)
            int_counts_6_write <= 1'b1;
        else if (WVALID)
            int_counts_6_write <= 1'b0;
    end
end

// int_counts_7_read
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_7_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_COUNTS_7_BASE && raddr <= ADDR_COUNTS_7_HIGH)
            int_counts_7_read <= 1'b1;
        else
            int_counts_7_read <= 1'b0;
    end
end

// int_counts_7_write
always @(posedge ACLK) begin
    if (ARESET)
        int_counts_7_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_COUNTS_7_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_COUNTS_7_HIGH)
            int_counts_7_write <= 1'b1;
        else if (WVALID)
            int_counts_7_write <= 1'b0;
    end
end

// int_outputs_0_read
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_0_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUTS_0_BASE && raddr <= ADDR_OUTPUTS_0_HIGH)
            int_outputs_0_read <= 1'b1;
        else
            int_outputs_0_read <= 1'b0;
    end
end

// int_outputs_0_write
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_0_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUTS_0_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUTS_0_HIGH)
            int_outputs_0_write <= 1'b1;
        else if (WVALID)
            int_outputs_0_write <= 1'b0;
    end
end

// int_outputs_1_read
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_1_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUTS_1_BASE && raddr <= ADDR_OUTPUTS_1_HIGH)
            int_outputs_1_read <= 1'b1;
        else
            int_outputs_1_read <= 1'b0;
    end
end

// int_outputs_1_write
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_1_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUTS_1_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUTS_1_HIGH)
            int_outputs_1_write <= 1'b1;
        else if (WVALID)
            int_outputs_1_write <= 1'b0;
    end
end

// int_outputs_2_read
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_2_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUTS_2_BASE && raddr <= ADDR_OUTPUTS_2_HIGH)
            int_outputs_2_read <= 1'b1;
        else
            int_outputs_2_read <= 1'b0;
    end
end

// int_outputs_2_write
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_2_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUTS_2_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUTS_2_HIGH)
            int_outputs_2_write <= 1'b1;
        else if (WVALID)
            int_outputs_2_write <= 1'b0;
    end
end

// int_outputs_3_read
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_3_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUTS_3_BASE && raddr <= ADDR_OUTPUTS_3_HIGH)
            int_outputs_3_read <= 1'b1;
        else
            int_outputs_3_read <= 1'b0;
    end
end

// int_outputs_3_write
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_3_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUTS_3_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUTS_3_HIGH)
            int_outputs_3_write <= 1'b1;
        else if (WVALID)
            int_outputs_3_write <= 1'b0;
    end
end

// int_outputs_4_read
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_4_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUTS_4_BASE && raddr <= ADDR_OUTPUTS_4_HIGH)
            int_outputs_4_read <= 1'b1;
        else
            int_outputs_4_read <= 1'b0;
    end
end

// int_outputs_4_write
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_4_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUTS_4_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUTS_4_HIGH)
            int_outputs_4_write <= 1'b1;
        else if (WVALID)
            int_outputs_4_write <= 1'b0;
    end
end

// int_outputs_5_read
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_5_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUTS_5_BASE && raddr <= ADDR_OUTPUTS_5_HIGH)
            int_outputs_5_read <= 1'b1;
        else
            int_outputs_5_read <= 1'b0;
    end
end

// int_outputs_5_write
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_5_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUTS_5_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUTS_5_HIGH)
            int_outputs_5_write <= 1'b1;
        else if (WVALID)
            int_outputs_5_write <= 1'b0;
    end
end

// int_outputs_6_read
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_6_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUTS_6_BASE && raddr <= ADDR_OUTPUTS_6_HIGH)
            int_outputs_6_read <= 1'b1;
        else
            int_outputs_6_read <= 1'b0;
    end
end

// int_outputs_6_write
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_6_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUTS_6_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUTS_6_HIGH)
            int_outputs_6_write <= 1'b1;
        else if (WVALID)
            int_outputs_6_write <= 1'b0;
    end
end

// int_outputs_7_read
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_7_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUTS_7_BASE && raddr <= ADDR_OUTPUTS_7_HIGH)
            int_outputs_7_read <= 1'b1;
        else
            int_outputs_7_read <= 1'b0;
    end
end

// int_outputs_7_write
always @(posedge ACLK) begin
    if (ARESET)
        int_outputs_7_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUTS_7_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUTS_7_HIGH)
            int_outputs_7_write <= 1'b1;
        else if (WVALID)
            int_outputs_7_write <= 1'b0;
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

