// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module estimate_ISI_encode_AXILiteS_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 12,
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
    input  wire [6:0]                    spks_address0,
    input  wire                          spks_ce0,
    output wire [31:0]                   spks_q0,
    output wire [31:0]                   spksTime,
    input  wire [6:0]                    update_address0,
    input  wire                          update_ce0,
    output wire [31:0]                   update_q0,
    input  wire [6:0]                    ISIPre_address0,
    input  wire                          ISIPre_ce0,
    input  wire                          ISIPre_we0,
    input  wire [31:0]                   ISIPre_d0,
    output wire [31:0]                   ISIPre_q0,
    input  wire [6:0]                    spksPre_address0,
    input  wire                          spksPre_ce0,
    input  wire                          spksPre_we0,
    input  wire [31:0]                   spksPre_d0,
    output wire [31:0]                   spksPre_q0,
    input  wire [6:0]                    output_r_address0,
    input  wire                          output_r_ce0,
    input  wire                          output_r_we0,
    input  wire [31:0]                   output_r_d0
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
// 0x400 : Data signal of spksTime
//         bit 31~0 - spksTime[31:0] (Read/Write)
// 0x404 : reserved
// 0x200 ~
// 0x3ff : Memory 'spks' (96 * 32b)
//         Word n : bit [31:0] - spks[n]
// 0x600 ~
// 0x7ff : Memory 'update' (96 * 32b)
//         Word n : bit [31:0] - update[n]
// 0x800 ~
// 0x9ff : Memory 'ISIPre' (96 * 32b)
//         Word n : bit [31:0] - ISIPre[n]
// 0xa00 ~
// 0xbff : Memory 'spksPre' (96 * 32b)
//         Word n : bit [31:0] - spksPre[n]
// 0xc00 ~
// 0xdff : Memory 'output_r' (96 * 32b)
//         Word n : bit [31:0] - output_r[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL         = 12'h000,
    ADDR_GIE             = 12'h004,
    ADDR_IER             = 12'h008,
    ADDR_ISR             = 12'h00c,
    ADDR_SPKSTIME_DATA_0 = 12'h400,
    ADDR_SPKSTIME_CTRL   = 12'h404,
    ADDR_SPKS_BASE       = 12'h200,
    ADDR_SPKS_HIGH       = 12'h3ff,
    ADDR_UPDATE_BASE     = 12'h600,
    ADDR_UPDATE_HIGH     = 12'h7ff,
    ADDR_ISIPRE_BASE     = 12'h800,
    ADDR_ISIPRE_HIGH     = 12'h9ff,
    ADDR_SPKSPRE_BASE    = 12'ha00,
    ADDR_SPKSPRE_HIGH    = 12'hbff,
    ADDR_OUTPUT_R_BASE   = 12'hc00,
    ADDR_OUTPUT_R_HIGH   = 12'hdff,
    WRIDLE               = 2'd0,
    WRDATA               = 2'd1,
    WRRESP               = 2'd2,
    WRRESET              = 2'd3,
    RDIDLE               = 2'd0,
    RDDATA               = 2'd1,
    RDRESET              = 2'd2,
    ADDR_BITS         = 12;

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
    reg  [31:0]                   int_spksTime = 'b0;
    // memory signals
    wire [6:0]                    int_spks_address0;
    wire                          int_spks_ce0;
    wire                          int_spks_we0;
    wire [3:0]                    int_spks_be0;
    wire [31:0]                   int_spks_d0;
    wire [31:0]                   int_spks_q0;
    wire [6:0]                    int_spks_address1;
    wire                          int_spks_ce1;
    wire                          int_spks_we1;
    wire [3:0]                    int_spks_be1;
    wire [31:0]                   int_spks_d1;
    wire [31:0]                   int_spks_q1;
    reg                           int_spks_read;
    reg                           int_spks_write;
    wire [6:0]                    int_update_address0;
    wire                          int_update_ce0;
    wire                          int_update_we0;
    wire [3:0]                    int_update_be0;
    wire [31:0]                   int_update_d0;
    wire [31:0]                   int_update_q0;
    wire [6:0]                    int_update_address1;
    wire                          int_update_ce1;
    wire                          int_update_we1;
    wire [3:0]                    int_update_be1;
    wire [31:0]                   int_update_d1;
    wire [31:0]                   int_update_q1;
    reg                           int_update_read;
    reg                           int_update_write;
    wire [6:0]                    int_ISIPre_address0;
    wire                          int_ISIPre_ce0;
    wire                          int_ISIPre_we0;
    wire [3:0]                    int_ISIPre_be0;
    wire [31:0]                   int_ISIPre_d0;
    wire [31:0]                   int_ISIPre_q0;
    wire [6:0]                    int_ISIPre_address1;
    wire                          int_ISIPre_ce1;
    wire                          int_ISIPre_we1;
    wire [3:0]                    int_ISIPre_be1;
    wire [31:0]                   int_ISIPre_d1;
    wire [31:0]                   int_ISIPre_q1;
    reg                           int_ISIPre_read;
    reg                           int_ISIPre_write;
    wire [6:0]                    int_spksPre_address0;
    wire                          int_spksPre_ce0;
    wire                          int_spksPre_we0;
    wire [3:0]                    int_spksPre_be0;
    wire [31:0]                   int_spksPre_d0;
    wire [31:0]                   int_spksPre_q0;
    wire [6:0]                    int_spksPre_address1;
    wire                          int_spksPre_ce1;
    wire                          int_spksPre_we1;
    wire [3:0]                    int_spksPre_be1;
    wire [31:0]                   int_spksPre_d1;
    wire [31:0]                   int_spksPre_q1;
    reg                           int_spksPre_read;
    reg                           int_spksPre_write;
    wire [6:0]                    int_output_r_address0;
    wire                          int_output_r_ce0;
    wire                          int_output_r_we0;
    wire [3:0]                    int_output_r_be0;
    wire [31:0]                   int_output_r_d0;
    wire [31:0]                   int_output_r_q0;
    wire [6:0]                    int_output_r_address1;
    wire                          int_output_r_ce1;
    wire                          int_output_r_we1;
    wire [3:0]                    int_output_r_be1;
    wire [31:0]                   int_output_r_d1;
    wire [31:0]                   int_output_r_q1;
    reg                           int_output_r_read;
    reg                           int_output_r_write;

//------------------------Instantiation------------------
// int_spks
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 96 )
) int_spks (
    .clk0     ( ACLK ),
    .address0 ( int_spks_address0 ),
    .ce0      ( int_spks_ce0 ),
    .we0      ( int_spks_we0 ),
    .be0      ( int_spks_be0 ),
    .d0       ( int_spks_d0 ),
    .q0       ( int_spks_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_spks_address1 ),
    .ce1      ( int_spks_ce1 ),
    .we1      ( int_spks_we1 ),
    .be1      ( int_spks_be1 ),
    .d1       ( int_spks_d1 ),
    .q1       ( int_spks_q1 )
);
// int_update
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 96 )
) int_update (
    .clk0     ( ACLK ),
    .address0 ( int_update_address0 ),
    .ce0      ( int_update_ce0 ),
    .we0      ( int_update_we0 ),
    .be0      ( int_update_be0 ),
    .d0       ( int_update_d0 ),
    .q0       ( int_update_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_update_address1 ),
    .ce1      ( int_update_ce1 ),
    .we1      ( int_update_we1 ),
    .be1      ( int_update_be1 ),
    .d1       ( int_update_d1 ),
    .q1       ( int_update_q1 )
);
// int_ISIPre
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 96 )
) int_ISIPre (
    .clk0     ( ACLK ),
    .address0 ( int_ISIPre_address0 ),
    .ce0      ( int_ISIPre_ce0 ),
    .we0      ( int_ISIPre_we0 ),
    .be0      ( int_ISIPre_be0 ),
    .d0       ( int_ISIPre_d0 ),
    .q0       ( int_ISIPre_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ISIPre_address1 ),
    .ce1      ( int_ISIPre_ce1 ),
    .we1      ( int_ISIPre_we1 ),
    .be1      ( int_ISIPre_be1 ),
    .d1       ( int_ISIPre_d1 ),
    .q1       ( int_ISIPre_q1 )
);
// int_spksPre
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 96 )
) int_spksPre (
    .clk0     ( ACLK ),
    .address0 ( int_spksPre_address0 ),
    .ce0      ( int_spksPre_ce0 ),
    .we0      ( int_spksPre_we0 ),
    .be0      ( int_spksPre_be0 ),
    .d0       ( int_spksPre_d0 ),
    .q0       ( int_spksPre_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_spksPre_address1 ),
    .ce1      ( int_spksPre_ce1 ),
    .we1      ( int_spksPre_we1 ),
    .be1      ( int_spksPre_be1 ),
    .d1       ( int_spksPre_d1 ),
    .q1       ( int_spksPre_q1 )
);
// int_output_r
estimate_ISI_encode_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 96 )
) int_output_r (
    .clk0     ( ACLK ),
    .address0 ( int_output_r_address0 ),
    .ce0      ( int_output_r_ce0 ),
    .we0      ( int_output_r_we0 ),
    .be0      ( int_output_r_be0 ),
    .d0       ( int_output_r_d0 ),
    .q0       ( int_output_r_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_output_r_address1 ),
    .ce1      ( int_output_r_ce1 ),
    .we1      ( int_output_r_we1 ),
    .be1      ( int_output_r_be1 ),
    .d1       ( int_output_r_d1 ),
    .q1       ( int_output_r_q1 )
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
assign RVALID  = (rstate == RDDATA) & !int_spks_read & !int_update_read & !int_ISIPre_read & !int_spksPre_read & !int_output_r_read;
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
                ADDR_SPKSTIME_DATA_0: begin
                    rdata <= int_spksTime[31:0];
                end
            endcase
        end
        else if (int_spks_read) begin
            rdata <= int_spks_q1;
        end
        else if (int_update_read) begin
            rdata <= int_update_q1;
        end
        else if (int_ISIPre_read) begin
            rdata <= int_ISIPre_q1;
        end
        else if (int_spksPre_read) begin
            rdata <= int_spksPre_q1;
        end
        else if (int_output_r_read) begin
            rdata <= int_output_r_q1;
        end
    end
end


//------------------------Register logic-----------------
assign interrupt = int_gie & (|int_isr);
assign ap_start  = int_ap_start;
assign spksTime  = int_spksTime;
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

// int_spksTime[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_spksTime[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_SPKSTIME_DATA_0)
            int_spksTime[31:0] <= (WDATA[31:0] & wmask) | (int_spksTime[31:0] & ~wmask);
    end
end


//------------------------Memory logic-------------------
// spks
assign int_spks_address0     = spks_address0;
assign int_spks_ce0          = spks_ce0;
assign int_spks_we0          = 1'b0;
assign int_spks_be0          = 1'b0;
assign int_spks_d0           = 1'b0;
assign spks_q0               = int_spks_q0;
assign int_spks_address1     = ar_hs? raddr[8:2] : waddr[8:2];
assign int_spks_ce1          = ar_hs | (int_spks_write & WVALID);
assign int_spks_we1          = int_spks_write & WVALID;
assign int_spks_be1          = WSTRB;
assign int_spks_d1           = WDATA;
// update
assign int_update_address0   = update_address0;
assign int_update_ce0        = update_ce0;
assign int_update_we0        = 1'b0;
assign int_update_be0        = 1'b0;
assign int_update_d0         = 1'b0;
assign update_q0             = int_update_q0;
assign int_update_address1   = ar_hs? raddr[8:2] : waddr[8:2];
assign int_update_ce1        = ar_hs | (int_update_write & WVALID);
assign int_update_we1        = int_update_write & WVALID;
assign int_update_be1        = WSTRB;
assign int_update_d1         = WDATA;
// ISIPre
assign int_ISIPre_address0   = ISIPre_address0;
assign int_ISIPre_ce0        = ISIPre_ce0;
assign int_ISIPre_we0        = ISIPre_we0;
assign int_ISIPre_be0        = {4{ISIPre_we0}};
assign int_ISIPre_d0         = ISIPre_d0;
assign ISIPre_q0             = int_ISIPre_q0;
assign int_ISIPre_address1   = ar_hs? raddr[8:2] : waddr[8:2];
assign int_ISIPre_ce1        = ar_hs | (int_ISIPre_write & WVALID);
assign int_ISIPre_we1        = int_ISIPre_write & WVALID;
assign int_ISIPre_be1        = WSTRB;
assign int_ISIPre_d1         = WDATA;
// spksPre
assign int_spksPre_address0  = spksPre_address0;
assign int_spksPre_ce0       = spksPre_ce0;
assign int_spksPre_we0       = spksPre_we0;
assign int_spksPre_be0       = {4{spksPre_we0}};
assign int_spksPre_d0        = spksPre_d0;
assign spksPre_q0            = int_spksPre_q0;
assign int_spksPre_address1  = ar_hs? raddr[8:2] : waddr[8:2];
assign int_spksPre_ce1       = ar_hs | (int_spksPre_write & WVALID);
assign int_spksPre_we1       = int_spksPre_write & WVALID;
assign int_spksPre_be1       = WSTRB;
assign int_spksPre_d1        = WDATA;
// output_r
assign int_output_r_address0 = output_r_address0;
assign int_output_r_ce0      = output_r_ce0;
assign int_output_r_we0      = output_r_we0;
assign int_output_r_be0      = {4{output_r_we0}};
assign int_output_r_d0       = output_r_d0;
assign int_output_r_address1 = ar_hs? raddr[8:2] : waddr[8:2];
assign int_output_r_ce1      = ar_hs | (int_output_r_write & WVALID);
assign int_output_r_we1      = int_output_r_write & WVALID;
assign int_output_r_be1      = WSTRB;
assign int_output_r_d1       = WDATA;
// int_spks_read
always @(posedge ACLK) begin
    if (ARESET)
        int_spks_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_SPKS_BASE && raddr <= ADDR_SPKS_HIGH)
            int_spks_read <= 1'b1;
        else
            int_spks_read <= 1'b0;
    end
end

// int_spks_write
always @(posedge ACLK) begin
    if (ARESET)
        int_spks_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_SPKS_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_SPKS_HIGH)
            int_spks_write <= 1'b1;
        else if (WVALID)
            int_spks_write <= 1'b0;
    end
end

// int_update_read
always @(posedge ACLK) begin
    if (ARESET)
        int_update_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_UPDATE_BASE && raddr <= ADDR_UPDATE_HIGH)
            int_update_read <= 1'b1;
        else
            int_update_read <= 1'b0;
    end
end

// int_update_write
always @(posedge ACLK) begin
    if (ARESET)
        int_update_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_UPDATE_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_UPDATE_HIGH)
            int_update_write <= 1'b1;
        else if (WVALID)
            int_update_write <= 1'b0;
    end
end

// int_ISIPre_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ISIPre_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_ISIPRE_BASE && raddr <= ADDR_ISIPRE_HIGH)
            int_ISIPre_read <= 1'b1;
        else
            int_ISIPre_read <= 1'b0;
    end
end

// int_ISIPre_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ISIPre_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_ISIPRE_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_ISIPRE_HIGH)
            int_ISIPre_write <= 1'b1;
        else if (WVALID)
            int_ISIPre_write <= 1'b0;
    end
end

// int_spksPre_read
always @(posedge ACLK) begin
    if (ARESET)
        int_spksPre_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_SPKSPRE_BASE && raddr <= ADDR_SPKSPRE_HIGH)
            int_spksPre_read <= 1'b1;
        else
            int_spksPre_read <= 1'b0;
    end
end

// int_spksPre_write
always @(posedge ACLK) begin
    if (ARESET)
        int_spksPre_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_SPKSPRE_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_SPKSPRE_HIGH)
            int_spksPre_write <= 1'b1;
        else if (WVALID)
            int_spksPre_write <= 1'b0;
    end
end

// int_output_r_read
always @(posedge ACLK) begin
    if (ARESET)
        int_output_r_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OUTPUT_R_BASE && raddr <= ADDR_OUTPUT_R_HIGH)
            int_output_r_read <= 1'b1;
        else
            int_output_r_read <= 1'b0;
    end
end

// int_output_r_write
always @(posedge ACLK) begin
    if (ARESET)
        int_output_r_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OUTPUT_R_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OUTPUT_R_HIGH)
            int_output_r_write <= 1'b1;
        else if (WVALID)
            int_output_r_write <= 1'b0;
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

