// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module estimate_ISI_encode_AXILiteS_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 11,
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
    input  wire [4:0]                    inputs_0_address0,
    input  wire                          inputs_0_ce0,
    output wire [31:0]                   inputs_0_q0,
    input  wire [4:0]                    inputs_1_address0,
    input  wire                          inputs_1_ce0,
    output wire [31:0]                   inputs_1_q0,
    input  wire [4:0]                    inputs_2_address0,
    input  wire                          inputs_2_ce0,
    output wire [31:0]                   inputs_2_q0,
    input  wire [4:0]                    inputs_3_address0,
    input  wire                          inputs_3_ce0,
    output wire [31:0]                   inputs_3_q0,
    input  wire [4:0]                    rem_0_address0,
    input  wire                          rem_0_ce0,
    input  wire                          rem_0_we0,
    input  wire [31:0]                   rem_0_d0,
    output wire [31:0]                   rem_0_q0,
    input  wire [4:0]                    rem_1_address0,
    input  wire                          rem_1_ce0,
    input  wire                          rem_1_we0,
    input  wire [31:0]                   rem_1_d0,
    output wire [31:0]                   rem_1_q0,
    input  wire [4:0]                    rem_2_address0,
    input  wire                          rem_2_ce0,
    input  wire                          rem_2_we0,
    input  wire [31:0]                   rem_2_d0,
    output wire [31:0]                   rem_2_q0,
    input  wire [4:0]                    rem_3_address0,
    input  wire                          rem_3_ce0,
    input  wire                          rem_3_we0,
    input  wire [31:0]                   rem_3_d0,
    output wire [31:0]                   rem_3_q0,
    input  wire [1:0]                    output_0_address0,
    input  wire                          output_0_ce0,
    input  wire                          output_0_we0,
    input  wire [31:0]                   output_0_d0,
    input  wire [1:0]                    output_1_address0,
    input  wire                          output_1_ce0,
    input  wire                          output_1_we0,
    input  wire [31:0]                   output_1_d0,
    input  wire [1:0]                    output_2_address0,
    input  wire                          output_2_ce0,
    input  wire                          output_2_we0,
    input  wire [31:0]                   output_2_d0,
    input  wire [1:0]                    output_3_address0,
    input  wire                          output_3_ce0,
    input  wire                          output_3_we0,
    input  wire [31:0]                   output_3_d0
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
// 0x2ff : Memory 'rem_0' (24 * 32b)
//         Word n : bit [31:0] - rem_0[n]
// 0x300 ~
// 0x37f : Memory 'rem_1' (24 * 32b)
//         Word n : bit [31:0] - rem_1[n]
// 0x380 ~
// 0x3ff : Memory 'rem_2' (24 * 32b)
//         Word n : bit [31:0] - rem_2[n]
// 0x400 ~
// 0x47f : Memory 'rem_3' (24 * 32b)
//         Word n : bit [31:0] - rem_3[n]
// 0x480 ~
// 0x48f : Memory 'output_0' (3 * 32b)
//         Word n : bit [31:0] - output_0[n]
// 0x490 ~
// 0x49f : Memory 'output_1' (3 * 32b)
//         Word n : bit [31:0] - output_1[n]
// 0x4a0 ~
// 0x4af : Memory 'output_2' (3 * 32b)
//         Word n : bit [31:0] - output_2[n]
// 0x4b0 ~
// 0x4bf : Memory 'output_3' (3 * 32b)
//         Word n : bit [31:0] - output_3[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL       = 11'h000,
    ADDR_GIE           = 11'h004,
    ADDR_IER           = 11'h008,
    ADDR_ISR           = 11'h00c,
    ADDR_INPUTS_0_BASE = 11'h080,
    ADDR_INPUTS_0_HIGH = 11'h0ff,
    ADDR_INPUTS_1_BASE = 11'h100,
    ADDR_INPUTS_1_HIGH = 11'h17f,
    ADDR_INPUTS_2_BASE = 11'h180,
    ADDR_INPUTS_2_HIGH = 11'h1ff,
    ADDR_INPUTS_3_BASE = 11'h200,
    ADDR_INPUTS_3_HIGH = 11'h27f,
    ADDR_REM_0_BASE    = 11'h280,
    ADDR_REM_0_HIGH    = 11'h2ff,
    ADDR_REM_1_BASE    = 11'h300,
    ADDR_REM_1_HIGH    = 11'h37f,
    ADDR_REM_2_BASE    = 11'h380,
    ADDR_REM_2_HIGH    = 11'h3ff,
    ADDR_REM_3_BASE    = 11'h400,
    ADDR_REM_3_HIGH    = 11'h47f,
    ADDR_OUTPUT_0_BASE = 11'h480,
    ADDR_OUTPUT_0_HIGH = 11'h48f,
    ADDR_OUTPUT_1_BASE = 11'h490,
    ADDR_OUTPUT_1_HIGH = 11'h49f,
    ADDR_OUTPUT_2_BASE = 11'h4a0,
    ADDR_OUTPUT_2_HIGH = 11'h4af,
    ADDR_OUTPUT_3_BASE = 11'h4b0,
    ADDR_OUTPUT_3_HIGH = 11'h4bf,
    WRIDLE             = 2'd0,
    WRDATA             = 2'd1,
    WRRESP             = 2'd2,
    WRRESET            = 2'd3,
    RDIDLE             = 2'd0,
    RDDATA             = 2'd1,
    RDRESET            = 2'd2,
    ADDR_BITS         = 11;

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
    wire [4:0]                    int_inputs_0_address0;
    wire                          int_inputs_0_ce0;
    wire                          int_inputs_0_we0;
    wire [3:0]                    int_inputs_0_be0;
    wire [31:0]                   int_inputs_0_d0;
    wire [31:0]                   int_inputs_0_q0;
    wire [4:0]                    int_inputs_0_address1;
    wire                          int_inputs_0_ce1;
    wire                          int_inputs_0_we1;
    wire [3:0]                    int_inputs_0_be1;
    wire [31:0]                   int_inputs_0_d1;
    wire [31:0]                   int_inputs_0_q1;
    reg                           int_inputs_0_read;
    reg                           int_inputs_0_write;
    wire [4:0]                    int_inputs_1_address0;
    wire                          int_inputs_1_ce0;
    wire                          int_inputs_1_we0;
    wire [3:0]                    int_inputs_1_be0;
    wire [31:0]                   int_inputs_1_d0;
    wire [31:0]                   int_inputs_1_q0;
    wire [4:0]                    int_inputs_1_address1;
    wire                          int_inputs_1_ce1;
    wire                          int_inputs_1_we1;
    wire [3:0]                    int_inputs_1_be1;
    wire [31:0]                   int_inputs_1_d1;
    wire [31:0]                   int_inputs_1_q1;
    reg                           int_inputs_1_read;
    reg                           int_inputs_1_write;
    wire [4:0]                    int_inputs_2_address0;
    wire                          int_inputs_2_ce0;
    wire                          int_inputs_2_we0;
    wire [3:0]                    int_inputs_2_be0;
    wire [31:0]                   int_inputs_2_d0;
    wire [31:0]                   int_inputs_2_q0;
    wire [4:0]                    int_inputs_2_address1;
    wire                          int_inputs_2_ce1;
    wire                          int_inputs_2_we1;
    wire [3:0]                    int_inputs_2_be1;
    wire [31:0]                   int_inputs_2_d1;
    wire [31:0]                   int_inputs_2_q1;
    reg                           int_inputs_2_read;
    reg                           int_inputs_2_write;
    wire [4:0]                    int_inputs_3_address0;
    wire                          int_inputs_3_ce0;
    wire                          int_inputs_3_we0;
    wire [3:0]                    int_inputs_3_be0;
    wire [31:0]                   int_inputs_3_d0;
    wire [31:0]                   int_inputs_3_q0;
    wire [4:0]                    int_inputs_3_address1;
    wire                          int_inputs_3_ce1;
    wire                          int_inputs_3_we1;
    wire [3:0]                    int_inputs_3_be1;
    wire [31:0]                   int_inputs_3_d1;
    wire [31:0]                   int_inputs_3_q1;
    reg                           int_inputs_3_read;
    reg                           int_inputs_3_write;
    wire [4:0]                    int_rem_0_address0;
    wire                          int_rem_0_ce0;
    wire                          int_rem_0_we0;
    wire [3:0]                    int_rem_0_be0;
    wire [31:0]                   int_rem_0_d0;
    wire [31:0]                   int_rem_0_q0;
    wire [4:0]                    int_rem_0_address1;
    wire                          int_rem_0_ce1;
    wire                          int_rem_0_we1;
    wire [3:0]                    int_rem_0_be1;
    wire [31:0]                   int_rem_0_d1;
    wire [31:0]                   int_rem_0_q1;
    reg                           int_rem_0_read;
    reg                           int_rem_0_write;
    wire [4:0]                    int_rem_1_address0;
    wire                          int_rem_1_ce0;
    wire                          int_rem_1_we0;
    wire [3:0]                    int_rem_1_be0;
    wire [31:0]                   int_rem_1_d0;
    wire [31:0]                   int_rem_1_q0;
    wire [4:0]                    int_rem_1_address1;
    wire                          int_rem_1_ce1;
    wire                          int_rem_1_we1;
    wire [3:0]                    int_rem_1_be1;
    wire [31:0]                   int_rem_1_d1;
    wire [31:0]                   int_rem_1_q1;
    reg                           int_rem_1_read;
    reg                           int_rem_1_write;
    wire [4:0]                    int_rem_2_address0;
    wire                          int_rem_2_ce0;
    wire                          int_rem_2_we0;
    wire [3:0]                    int_rem_2_be0;
    wire [31:0]                   int_rem_2_d0;
    wire [31:0]                   int_rem_2_q0;
    wire [4:0]                    int_rem_2_address1;
    wire                          int_rem_2_ce1;
    wire                          int_rem_2_we1;
    wire [3:0]                    int_rem_2_be1;
    wire [31:0]                   int_rem_2_d1;
    wire [31:0]                   int_rem_2_q1;
    reg                           int_rem_2_read;
    reg                           int_rem_2_write;
    wire [4:0]                    int_rem_3_address0;
    wire                          int_rem_3_ce0;
    wire                          int_rem_3_we0;
    wire [3:0]                    int_rem_3_be0;
    wire [31:0]                   int_rem_3_d0;
    wire [31:0]                   int_rem_3_q0;
    wire [4:0]                    int_rem_3_address1;
    wire                          int_rem_3_ce1;
    wire                          int_rem_3_we1;
    wire [3:0]                    int_rem_3_be1;
    wire [31:0]                   int_rem_3_d1;
    wire [31:0]                   int_rem_3_q1;
    reg                           int_rem_3_read;
    reg                           int_rem_3_write;
    wire [1:0]                    int_output_0_address0;
    wire                          int_output_0_ce0;
    wire                          int_output_0_we0;
    wire [3:0]                    int_output_0_be0;
    wire [31:0]                   int_output_0_d0;
    wire [31:0]                   int_output_0_q0;
    wire [1:0]                    int_output_0_address1;
    wire                          int_output_0_ce1;
    wire                          int_output_0_we1;
    wire [3:0]                    int_output_0_be1;
    wire [31:0]                   int_output_0_d1;
    wire [31:0]                   int_output_0_q1;
    reg                           int_output_0_read;
    reg                           int_output_0_write;
    wire [1:0]                    int_output_1_address0;
    wire                          int_output_1_ce0;
    wire                          int_output_1_we0;
    wire [3:0]                    int_output_1_be0;
    wire [31:0]                   int_output_1_d0;
    wire [31:0]                   int_output_1_q0;
    wire [1:0]                    int_output_1_address1;
    wire                          int_output_1_ce1;
    wire                          int_output_1_we1;
    wire [3:0]                    int_output_1_be1;
    wire [31:0]                   int_output_1_d1;
    wire [31:0]                   int_output_1_q1;
    reg                           int_output_1_read;
    reg                           int_output_1_write;
    wire [1:0]                    int_output_2_address0;
    wire                          int_output_2_ce0;
    wire                          int_output_2_we0;
    wire [3:0]                    int_output_2_be0;
    wire [31:0]                   int_output_2_d0;
    wire [31:0]                   int_output_2_q0;
    wire [1:0]                    int_output_2_address1;
    wire                          int_output_2_ce1;
    wire                          int_output_2_we1;
    wire [3:0]                    int_output_2_be1;
    wire [31:0]                   int_output_2_d1;
    wire [31:0]                   int_output_2_q1;
    reg                           int_output_2_read;
    reg                           int_output_2_write;
    wire [1:0]                    int_output_3_address0;
    wire                          int_output_3_ce0;
    wire                          int_output_3_we0;
    wire [3:0]                    int_output_3_be0;
    wire [31:0]                   int_output_3_d0;
    wire [31:0]                   int_output_3_q0;
    wire [1:0]                    int_output_3_address1;
    wire                          int_output_3_ce1;
    wire                          int_output_3_we1;
    wire [3:0]                    int_output_3_be1;
    wire [31:0]                   int_output_3_d1;
    wire [31:0]                   int_output_3_q1;
    reg                           int_output_3_read;
    reg                           int_output_3_write;

//------------------------Instantiation------------------
// int_inputs_0
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 24 )
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
    .DEPTH    ( 24 )
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
    .DEPTH    ( 24 )
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
    .DEPTH    ( 24 )
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
// int_rem_0
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 24 )
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
    .DEPTH    ( 24 )
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
    .DEPTH    ( 24 )
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
    .DEPTH    ( 24 )
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
// int_output_0
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_output_0 (
    .clk0     ( ACLK ),
    .address0 ( int_output_0_address0 ),
    .ce0      ( int_output_0_ce0 ),
    .we0      ( int_output_0_we0 ),
    .be0      ( int_output_0_be0 ),
    .d0       ( int_output_0_d0 ),
    .q0       ( int_output_0_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_output_0_address1 ),
    .ce1      ( int_output_0_ce1 ),
    .we1      ( int_output_0_we1 ),
    .be1      ( int_output_0_be1 ),
    .d1       ( int_output_0_d1 ),
    .q1       ( int_output_0_q1 )
);
// int_output_1
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_output_1 (
    .clk0     ( ACLK ),
    .address0 ( int_output_1_address0 ),
    .ce0      ( int_output_1_ce0 ),
    .we0      ( int_output_1_we0 ),
    .be0      ( int_output_1_be0 ),
    .d0       ( int_output_1_d0 ),
    .q0       ( int_output_1_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_output_1_address1 ),
    .ce1      ( int_output_1_ce1 ),
    .we1      ( int_output_1_we1 ),
    .be1      ( int_output_1_be1 ),
    .d1       ( int_output_1_d1 ),
    .q1       ( int_output_1_q1 )
);
// int_output_2
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_output_2 (
    .clk0     ( ACLK ),
    .address0 ( int_output_2_address0 ),
    .ce0      ( int_output_2_ce0 ),
    .we0      ( int_output_2_we0 ),
    .be0      ( int_output_2_be0 ),
    .d0       ( int_output_2_d0 ),
    .q0       ( int_output_2_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_output_2_address1 ),
    .ce1      ( int_output_2_ce1 ),
    .we1      ( int_output_2_we1 ),
    .be1      ( int_output_2_be1 ),
    .d1       ( int_output_2_d1 ),
    .q1       ( int_output_2_q1 )
);
// int_output_3
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 3 )
) int_output_3 (
    .clk0     ( ACLK ),
    .address0 ( int_output_3_address0 ),
    .ce0      ( int_output_3_ce0 ),
    .we0      ( int_output_3_we0 ),
    .be0      ( int_output_3_be0 ),
    .d0       ( int_output_3_d0 ),
    .q0       ( int_output_3_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_output_3_address1 ),
    .ce1      ( int_output_3_ce1 ),
    .we1      ( int_output_3_we1 ),
    .be1      ( int_output_3_be1 ),
    .d1       ( int_output_3_d1 ),
    .q1       ( int_output_3_q1 )
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
assign RVALID  = (rstate == RDDATA) & !int_inputs_0_read & !int_inputs_1_read & !int_inputs_2_read & !int_inputs_3_read & !int_rem_0_read & !int_rem_1_read & !int_rem_2_read & !int_rem_3_read & !int_output_0_read & !int_output_1_read & !int_output_2_read & !int_output_3_read;
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
        else if (int_output_0_read) begin
            rdata <= int_output_0_q1;
        end
        else if (int_output_1_read) begin
            rdata <= int_output_1_q1;
        end
        else if (int_output_2_read) begin
            rdata <= int_output_2_q1;
        end
        else if (int_output_3_read) begin
            rdata <= int_output_3_q1;
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
assign int_inputs_0_address0 = inputs_0_address0;
assign int_inputs_0_ce0      = inputs_0_ce0;
assign int_inputs_0_we0      = 1'b0;
assign int_inputs_0_be0      = 1'b0;
assign int_inputs_0_d0       = 1'b0;
assign inputs_0_q0           = int_inputs_0_q0;
assign int_inputs_0_address1 = ar_hs? raddr[6:2] : waddr[6:2];
assign int_inputs_0_ce1      = ar_hs | (int_inputs_0_write & WVALID);
assign int_inputs_0_we1      = int_inputs_0_write & WVALID;
assign int_inputs_0_be1      = WSTRB;
assign int_inputs_0_d1       = WDATA;
// inputs_1
assign int_inputs_1_address0 = inputs_1_address0;
assign int_inputs_1_ce0      = inputs_1_ce0;
assign int_inputs_1_we0      = 1'b0;
assign int_inputs_1_be0      = 1'b0;
assign int_inputs_1_d0       = 1'b0;
assign inputs_1_q0           = int_inputs_1_q0;
assign int_inputs_1_address1 = ar_hs? raddr[6:2] : waddr[6:2];
assign int_inputs_1_ce1      = ar_hs | (int_inputs_1_write & WVALID);
assign int_inputs_1_we1      = int_inputs_1_write & WVALID;
assign int_inputs_1_be1      = WSTRB;
assign int_inputs_1_d1       = WDATA;
// inputs_2
assign int_inputs_2_address0 = inputs_2_address0;
assign int_inputs_2_ce0      = inputs_2_ce0;
assign int_inputs_2_we0      = 1'b0;
assign int_inputs_2_be0      = 1'b0;
assign int_inputs_2_d0       = 1'b0;
assign inputs_2_q0           = int_inputs_2_q0;
assign int_inputs_2_address1 = ar_hs? raddr[6:2] : waddr[6:2];
assign int_inputs_2_ce1      = ar_hs | (int_inputs_2_write & WVALID);
assign int_inputs_2_we1      = int_inputs_2_write & WVALID;
assign int_inputs_2_be1      = WSTRB;
assign int_inputs_2_d1       = WDATA;
// inputs_3
assign int_inputs_3_address0 = inputs_3_address0;
assign int_inputs_3_ce0      = inputs_3_ce0;
assign int_inputs_3_we0      = 1'b0;
assign int_inputs_3_be0      = 1'b0;
assign int_inputs_3_d0       = 1'b0;
assign inputs_3_q0           = int_inputs_3_q0;
assign int_inputs_3_address1 = ar_hs? raddr[6:2] : waddr[6:2];
assign int_inputs_3_ce1      = ar_hs | (int_inputs_3_write & WVALID);
assign int_inputs_3_we1      = int_inputs_3_write & WVALID;
assign int_inputs_3_be1      = WSTRB;
assign int_inputs_3_d1       = WDATA;
// rem_0
assign int_rem_0_address0    = rem_0_address0;
assign int_rem_0_ce0         = rem_0_ce0;
assign int_rem_0_we0         = rem_0_we0;
assign int_rem_0_be0         = {4{rem_0_we0}};
assign int_rem_0_d0          = rem_0_d0;
assign rem_0_q0              = int_rem_0_q0;
assign int_rem_0_address1    = ar_hs? raddr[6:2] : waddr[6:2];
assign int_rem_0_ce1         = ar_hs | (int_rem_0_write & WVALID);
assign int_rem_0_we1         = int_rem_0_write & WVALID;
assign int_rem_0_be1         = WSTRB;
assign int_rem_0_d1          = WDATA;
// rem_1
assign int_rem_1_address0    = rem_1_address0;
assign int_rem_1_ce0         = rem_1_ce0;
assign int_rem_1_we0         = rem_1_we0;
assign int_rem_1_be0         = {4{rem_1_we0}};
assign int_rem_1_d0          = rem_1_d0;
assign rem_1_q0              = int_rem_1_q0;
assign int_rem_1_address1    = ar_hs? raddr[6:2] : waddr[6:2];
assign int_rem_1_ce1         = ar_hs | (int_rem_1_write & WVALID);
assign int_rem_1_we1         = int_rem_1_write & WVALID;
assign int_rem_1_be1         = WSTRB;
assign int_rem_1_d1          = WDATA;
// rem_2
assign int_rem_2_address0    = rem_2_address0;
assign int_rem_2_ce0         = rem_2_ce0;
assign int_rem_2_we0         = rem_2_we0;
assign int_rem_2_be0         = {4{rem_2_we0}};
assign int_rem_2_d0          = rem_2_d0;
assign rem_2_q0              = int_rem_2_q0;
assign int_rem_2_address1    = ar_hs? raddr[6:2] : waddr[6:2];
assign int_rem_2_ce1         = ar_hs | (int_rem_2_write & WVALID);
assign int_rem_2_we1         = int_rem_2_write & WVALID;
assign int_rem_2_be1         = WSTRB;
assign int_rem_2_d1          = WDATA;
// rem_3
assign int_rem_3_address0    = rem_3_address0;
assign int_rem_3_ce0         = rem_3_ce0;
assign int_rem_3_we0         = rem_3_we0;
assign int_rem_3_be0         = {4{rem_3_we0}};
assign int_rem_3_d0          = rem_3_d0;
assign rem_3_q0              = int_rem_3_q0;
assign int_rem_3_address1    = ar_hs? raddr[6:2] : waddr[6:2];
assign int_rem_3_ce1         = ar_hs | (int_rem_3_write & WVALID);
assign int_rem_3_we1         = int_rem_3_write & WVALID;
assign int_rem_3_be1         = WSTRB;
assign int_rem_3_d1          = WDATA;
// output_0
assign int_output_0_address0 = output_0_address0;
assign int_output_0_ce0      = output_0_ce0;
assign int_output_0_we0      = output_0_we0;
assign int_output_0_be0      = {4{output_0_we0}};
assign int_output_0_d0       = output_0_d0;
assign int_output_0_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_output_0_ce1      = ar_hs | (int_output_0_write & WVALID);
assign int_output_0_we1      = int_output_0_write & WVALID;
assign int_output_0_be1      = WSTRB;
assign int_output_0_d1       = WDATA;
// output_1
assign int_output_1_address0 = output_1_address0;
assign int_output_1_ce0      = output_1_ce0;
assign int_output_1_we0      = output_1_we0;
assign int_output_1_be0      = {4{output_1_we0}};
assign int_output_1_d0       = output_1_d0;
assign int_output_1_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_output_1_ce1      = ar_hs | (int_output_1_write & WVALID);
assign int_output_1_we1      = int_output_1_write & WVALID;
assign int_output_1_be1      = WSTRB;
assign int_output_1_d1       = WDATA;
// output_2
assign int_output_2_address0 = output_2_address0;
assign int_output_2_ce0      = output_2_ce0;
assign int_output_2_we0      = output_2_we0;
assign int_output_2_be0      = {4{output_2_we0}};
assign int_output_2_d0       = output_2_d0;
assign int_output_2_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_output_2_ce1      = ar_hs | (int_output_2_write & WVALID);
assign int_output_2_we1      = int_output_2_write & WVALID;
assign int_output_2_be1      = WSTRB;
assign int_output_2_d1       = WDATA;
// output_3
assign int_output_3_address0 = output_3_address0;
assign int_output_3_ce0      = output_3_ce0;
assign int_output_3_we0      = output_3_we0;
assign int_output_3_be0      = {4{output_3_we0}};
assign int_output_3_d0       = output_3_d0;
assign int_output_3_address1 = ar_hs? raddr[3:2] : waddr[3:2];
assign int_output_3_ce1      = ar_hs | (int_output_3_write & WVALID);
assign int_output_3_we1      = int_output_3_write & WVALID;
assign int_output_3_be1      = WSTRB;
assign int_output_3_d1       = WDATA;
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

// int_output_0_read
always @(posedge ACLK) begin
    if (ARESET)
        int_output_0_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUT_0_BASE && raddr <= ADDR_OUTPUT_0_HIGH)
            int_output_0_read <= 1'b1;
        else
            int_output_0_read <= 1'b0;
    end
end

// int_output_0_write
always @(posedge ACLK) begin
    if (ARESET)
        int_output_0_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUT_0_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUT_0_HIGH)
            int_output_0_write <= 1'b1;
        else if (WVALID)
            int_output_0_write <= 1'b0;
    end
end

// int_output_1_read
always @(posedge ACLK) begin
    if (ARESET)
        int_output_1_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUT_1_BASE && raddr <= ADDR_OUTPUT_1_HIGH)
            int_output_1_read <= 1'b1;
        else
            int_output_1_read <= 1'b0;
    end
end

// int_output_1_write
always @(posedge ACLK) begin
    if (ARESET)
        int_output_1_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUT_1_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUT_1_HIGH)
            int_output_1_write <= 1'b1;
        else if (WVALID)
            int_output_1_write <= 1'b0;
    end
end

// int_output_2_read
always @(posedge ACLK) begin
    if (ARESET)
        int_output_2_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUT_2_BASE && raddr <= ADDR_OUTPUT_2_HIGH)
            int_output_2_read <= 1'b1;
        else
            int_output_2_read <= 1'b0;
    end
end

// int_output_2_write
always @(posedge ACLK) begin
    if (ARESET)
        int_output_2_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUT_2_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUT_2_HIGH)
            int_output_2_write <= 1'b1;
        else if (WVALID)
            int_output_2_write <= 1'b0;
    end
end

// int_output_3_read
always @(posedge ACLK) begin
    if (ARESET)
        int_output_3_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUT_3_BASE && raddr <= ADDR_OUTPUT_3_HIGH)
            int_output_3_read <= 1'b1;
        else
            int_output_3_read <= 1'b0;
    end
end

// int_output_3_write
always @(posedge ACLK) begin
    if (ARESET)
        int_output_3_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUT_3_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUT_3_HIGH)
            int_output_3_write <= 1'b1;
        else if (WVALID)
            int_output_3_write <= 1'b0;
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

