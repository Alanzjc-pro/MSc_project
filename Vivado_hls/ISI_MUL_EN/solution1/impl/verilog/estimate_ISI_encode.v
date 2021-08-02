// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="estimate_ISI_encode,hls_ip_2019_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.638000,HLS_SYN_LAT=446,HLS_SYN_TPT=none,HLS_SYN_MEM=6,HLS_SYN_DSP=0,HLS_SYN_FF=427,HLS_SYN_LUT=654,HLS_VERSION=2019_1}" *)

module estimate_ISI_encode (
        ap_clk,
        ap_rst_n,
        s_axi_AXILiteS_AWVALID,
        s_axi_AXILiteS_AWREADY,
        s_axi_AXILiteS_AWADDR,
        s_axi_AXILiteS_WVALID,
        s_axi_AXILiteS_WREADY,
        s_axi_AXILiteS_WDATA,
        s_axi_AXILiteS_WSTRB,
        s_axi_AXILiteS_ARVALID,
        s_axi_AXILiteS_ARREADY,
        s_axi_AXILiteS_ARADDR,
        s_axi_AXILiteS_RVALID,
        s_axi_AXILiteS_RREADY,
        s_axi_AXILiteS_RDATA,
        s_axi_AXILiteS_RRESP,
        s_axi_AXILiteS_BVALID,
        s_axi_AXILiteS_BREADY,
        s_axi_AXILiteS_BRESP,
        interrupt
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_state9 = 10'd256;
parameter    ap_ST_fsm_state10 = 10'd512;
parameter    C_S_AXI_AXILITES_DATA_WIDTH = 32;
parameter    C_S_AXI_AXILITES_ADDR_WIDTH = 11;
parameter    C_S_AXI_DATA_WIDTH = 32;

parameter C_S_AXI_AXILITES_WSTRB_WIDTH = (32 / 8);
parameter C_S_AXI_WSTRB_WIDTH = (32 / 8);

input   ap_clk;
input   ap_rst_n;
input   s_axi_AXILiteS_AWVALID;
output   s_axi_AXILiteS_AWREADY;
input  [C_S_AXI_AXILITES_ADDR_WIDTH - 1:0] s_axi_AXILiteS_AWADDR;
input   s_axi_AXILiteS_WVALID;
output   s_axi_AXILiteS_WREADY;
input  [C_S_AXI_AXILITES_DATA_WIDTH - 1:0] s_axi_AXILiteS_WDATA;
input  [C_S_AXI_AXILITES_WSTRB_WIDTH - 1:0] s_axi_AXILiteS_WSTRB;
input   s_axi_AXILiteS_ARVALID;
output   s_axi_AXILiteS_ARREADY;
input  [C_S_AXI_AXILITES_ADDR_WIDTH - 1:0] s_axi_AXILiteS_ARADDR;
output   s_axi_AXILiteS_RVALID;
input   s_axi_AXILiteS_RREADY;
output  [C_S_AXI_AXILITES_DATA_WIDTH - 1:0] s_axi_AXILiteS_RDATA;
output  [1:0] s_axi_AXILiteS_RRESP;
output   s_axi_AXILiteS_BVALID;
input   s_axi_AXILiteS_BREADY;
output  [1:0] s_axi_AXILiteS_BRESP;
output   interrupt;

 reg    ap_rst_n_inv;
wire    ap_start;
reg    ap_done;
reg    ap_idle;
(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    ap_ready;
wire   [6:0] inputs_address0;
reg    inputs_ce0;
wire   [31:0] inputs_q0;
reg   [6:0] rem_r_address0;
reg    rem_r_ce0;
reg    rem_r_we0;
wire   [31:0] rem_r_d0;
wire   [31:0] rem_r_q0;
wire   [3:0] output_r_address0;
reg    output_r_ce0;
reg    output_r_we0;
wire   [31:0] output_r_d0;
wire   [6:0] j_fu_296_p2;
reg   [6:0] j_reg_650;
wire    ap_CS_fsm_state2;
wire   [63:0] zext_ln18_fu_302_p1;
reg   [63:0] zext_ln18_reg_655;
wire   [0:0] icmp_ln17_fu_290_p2;
wire   [0:0] trunc_ln301_fu_307_p1;
reg   [0:0] trunc_ln301_reg_667;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_3_fu_311_p3;
reg   [0:0] tmp_3_reg_671;
reg   [6:0] rem_addr_reg_675;
reg   [18:0] tmp_1_reg_680;
reg   [10:0] tmp_2_reg_685;
wire   [11:0] sub_ln214_fu_360_p2;
reg   [11:0] sub_ln214_reg_690;
wire    ap_CS_fsm_state4;
wire   [6:0] ret_V_fu_394_p2;
reg   [6:0] ret_V_reg_695;
reg   [5:0] trunc_ln2_reg_700;
wire   [11:0] sub_ln214_1_fu_450_p2;
reg   [11:0] sub_ln214_1_reg_705;
wire   [3:0] i_fu_537_p2;
reg   [3:0] i_reg_713;
wire    ap_CS_fsm_state6;
wire   [6:0] shl_ln_fu_543_p3;
reg   [6:0] shl_ln_reg_718;
wire   [0:0] icmp_ln43_fu_531_p2;
wire   [3:0] ISIquan_V_q0;
reg   [3:0] ISIquan_V_load_reg_738;
wire    ap_CS_fsm_state7;
wire   [3:0] ISIquan_V_q1;
reg   [3:0] ISIquan_V_load_1_reg_743;
reg   [3:0] ISIquan_V_load_2_reg_758;
wire    ap_CS_fsm_state8;
reg   [3:0] ISIquan_V_load_3_reg_763;
reg   [3:0] ISIquan_V_load_4_reg_778;
wire    ap_CS_fsm_state9;
reg   [3:0] ISIquan_V_load_5_reg_783;
reg   [6:0] ISIquan_V_address0;
reg    ISIquan_V_ce0;
reg    ISIquan_V_we0;
reg   [3:0] ISIquan_V_d0;
reg   [6:0] ISIquan_V_address1;
reg    ISIquan_V_ce1;
reg   [6:0] j_0_reg_267;
wire    ap_CS_fsm_state5;
reg   [3:0] i_0_reg_278;
wire    ap_CS_fsm_state10;
wire   [6:0] ISIquan_V_addr_9_gep_fu_187_p3;
wire   [63:0] zext_ln44_fu_551_p1;
wire   [63:0] zext_ln45_fu_562_p1;
wire   [63:0] zext_ln46_fu_572_p1;
wire   [63:0] zext_ln47_fu_582_p1;
wire   [63:0] zext_ln48_fu_592_p1;
wire   [63:0] zext_ln49_fu_602_p1;
wire   [63:0] zext_ln50_fu_612_p1;
wire   [63:0] zext_ln51_fu_622_p1;
wire   [63:0] zext_ln52_fu_642_p1;
wire   [3:0] ISI_q_V_fu_512_p3;
wire   [11:0] and_ln_fu_349_p3;
wire   [11:0] trunc_ln214_fu_356_p1;
wire   [5:0] ISIPre_n_V_fu_376_p4;
wire   [5:0] ISI_n_V_fu_366_p4;
wire   [6:0] lhs_V_fu_386_p1;
wire   [6:0] rhs_V_fu_390_p1;
wire   [5:0] ret_V_1_fu_400_p0;
wire   [5:0] ret_V_1_fu_400_p1;
wire   [6:0] ret_V_1_fu_400_p2;
wire   [6:0] trunc_ln3_fu_416_p4;
wire   [6:0] r_V_1_fu_430_p4;
wire   [11:0] ISIPre_V_fu_339_p4;
wire   [11:0] r_V_2_fu_440_p1;
wire   [11:0] sub_ln1354_fu_444_p2;
wire   [11:0] r_V_fu_426_p1;
wire   [6:0] zext_ln891_fu_456_p1;
wire   [0:0] icmp_ln891_fu_459_p2;
wire   [11:0] select_ln891_fu_464_p3;
wire   [0:0] icmp_ln887_fu_470_p2;
wire   [0:0] icmp_ln899_fu_476_p2;
wire   [0:0] xor_ln887_fu_492_p2;
wire   [0:0] and_ln899_fu_498_p2;
wire   [3:0] trunc_ln1503_3_fu_482_p4;
wire   [3:0] select_ln899_fu_504_p3;
wire   [6:0] or_ln45_fu_556_p2;
wire   [6:0] or_ln46_fu_567_p2;
wire   [6:0] or_ln47_fu_577_p2;
wire   [6:0] or_ln48_fu_587_p2;
wire   [6:0] or_ln49_fu_597_p2;
wire   [6:0] or_ln50_fu_607_p2;
wire   [6:0] or_ln51_fu_617_p2;
reg   [9:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
end

estimate_ISI_encode_AXILiteS_s_axi #(
    .C_S_AXI_ADDR_WIDTH( C_S_AXI_AXILITES_ADDR_WIDTH ),
    .C_S_AXI_DATA_WIDTH( C_S_AXI_AXILITES_DATA_WIDTH ))
estimate_ISI_encode_AXILiteS_s_axi_U(
    .AWVALID(s_axi_AXILiteS_AWVALID),
    .AWREADY(s_axi_AXILiteS_AWREADY),
    .AWADDR(s_axi_AXILiteS_AWADDR),
    .WVALID(s_axi_AXILiteS_WVALID),
    .WREADY(s_axi_AXILiteS_WREADY),
    .WDATA(s_axi_AXILiteS_WDATA),
    .WSTRB(s_axi_AXILiteS_WSTRB),
    .ARVALID(s_axi_AXILiteS_ARVALID),
    .ARREADY(s_axi_AXILiteS_ARREADY),
    .ARADDR(s_axi_AXILiteS_ARADDR),
    .RVALID(s_axi_AXILiteS_RVALID),
    .RREADY(s_axi_AXILiteS_RREADY),
    .RDATA(s_axi_AXILiteS_RDATA),
    .RRESP(s_axi_AXILiteS_RRESP),
    .BVALID(s_axi_AXILiteS_BVALID),
    .BREADY(s_axi_AXILiteS_BREADY),
    .BRESP(s_axi_AXILiteS_BRESP),
    .ACLK(ap_clk),
    .ARESET(ap_rst_n_inv),
    .ACLK_EN(1'b1),
    .ap_start(ap_start),
    .interrupt(interrupt),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .inputs_address0(inputs_address0),
    .inputs_ce0(inputs_ce0),
    .inputs_q0(inputs_q0),
    .rem_r_address0(rem_r_address0),
    .rem_r_ce0(rem_r_ce0),
    .rem_r_we0(rem_r_we0),
    .rem_r_d0(rem_r_d0),
    .rem_r_q0(rem_r_q0),
    .output_r_address0(output_r_address0),
    .output_r_ce0(output_r_ce0),
    .output_r_we0(output_r_we0),
    .output_r_d0(output_r_d0)
);

estimate_ISI_encode_ISIquan_V #(
    .DataWidth( 4 ),
    .AddressRange( 96 ),
    .AddressWidth( 7 ))
ISIquan_V_U(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .address0(ISIquan_V_address0),
    .ce0(ISIquan_V_ce0),
    .we0(ISIquan_V_we0),
    .d0(ISIquan_V_d0),
    .q0(ISIquan_V_q0),
    .address1(ISIquan_V_address1),
    .ce1(ISIquan_V_ce1),
    .q1(ISIquan_V_q1)
);

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln17_fu_290_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_0_reg_278 <= 4'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        i_0_reg_278 <= i_reg_713;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        j_0_reg_267 <= 7'd0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        j_0_reg_267 <= j_reg_650;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ISIquan_V_load_1_reg_743 <= ISIquan_V_q1;
        ISIquan_V_load_reg_738 <= ISIquan_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ISIquan_V_load_2_reg_758 <= ISIquan_V_q1;
        ISIquan_V_load_3_reg_763 <= ISIquan_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        ISIquan_V_load_4_reg_778 <= ISIquan_V_q1;
        ISIquan_V_load_5_reg_783 <= ISIquan_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_reg_713 <= i_fu_537_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        j_reg_650 <= j_fu_296_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (tmp_3_fu_311_p3 == 1'd1) & (trunc_ln301_fu_307_p1 == 1'd1))) begin
        rem_addr_reg_675 <= zext_ln18_reg_655;
        tmp_1_reg_680 <= {{inputs_q0[21:3]}};
        tmp_2_reg_685 <= {{inputs_q0[13:3]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ret_V_reg_695 <= ret_V_fu_394_p2;
        sub_ln214_1_reg_705 <= sub_ln214_1_fu_450_p2;
        sub_ln214_reg_690 <= sub_ln214_fu_360_p2;
        trunc_ln2_reg_700 <= {{ret_V_1_fu_400_p2[6:1]}};
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln43_fu_531_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        shl_ln_reg_718[6 : 3] <= shl_ln_fu_543_p3[6 : 3];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_3_reg_671 <= inputs_q0[32'd1];
        trunc_ln301_reg_667 <= trunc_ln301_fu_307_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln17_fu_290_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        zext_ln18_reg_655[6 : 0] <= zext_ln18_fu_302_p1[6 : 0];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        ISIquan_V_address0 = zext_ln51_fu_622_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        ISIquan_V_address0 = zext_ln49_fu_602_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        ISIquan_V_address0 = zext_ln47_fu_582_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        ISIquan_V_address0 = zext_ln44_fu_551_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        ISIquan_V_address0 = ISIquan_V_addr_9_gep_fu_187_p3;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        ISIquan_V_address0 = zext_ln18_reg_655;
    end else begin
        ISIquan_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        ISIquan_V_address1 = zext_ln50_fu_612_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        ISIquan_V_address1 = zext_ln48_fu_592_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        ISIquan_V_address1 = zext_ln46_fu_572_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        ISIquan_V_address1 = zext_ln45_fu_562_p1;
    end else begin
        ISIquan_V_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state3))) begin
        ISIquan_V_ce0 = 1'b1;
    end else begin
        ISIquan_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6))) begin
        ISIquan_V_ce1 = 1'b1;
    end else begin
        ISIquan_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ISIquan_V_d0 = ISI_q_V_fu_512_p3;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        ISIquan_V_d0 = 4'd15;
    end else begin
        ISIquan_V_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state5) & (tmp_3_reg_671 == 1'd1) & (trunc_ln301_reg_667 == 1'd1)) | ((tmp_3_fu_311_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state3)))) begin
        ISIquan_V_we0 = 1'b1;
    end else begin
        ISIquan_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln43_fu_531_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln43_fu_531_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        inputs_ce0 = 1'b1;
    end else begin
        inputs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        rem_r_address0 = rem_addr_reg_675;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        rem_r_address0 = zext_ln18_reg_655;
    end else begin
        rem_r_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3))) begin
        rem_r_ce0 = 1'b1;
    end else begin
        rem_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (tmp_3_reg_671 == 1'd1) & (trunc_ln301_reg_667 == 1'd1))) begin
        rem_r_we0 = 1'b1;
    end else begin
        rem_r_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln17_fu_290_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (tmp_3_fu_311_p3 == 1'd1) & (trunc_ln301_fu_307_p1 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln43_fu_531_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ISIPre_V_fu_339_p4 = {{rem_r_q0[31:20]}};

assign ISIPre_n_V_fu_376_p4 = {{rem_r_q0[29:24]}};

assign ISI_n_V_fu_366_p4 = {{sub_ln214_fu_360_p2[9:4]}};

assign ISI_q_V_fu_512_p3 = ((icmp_ln887_fu_470_p2[0:0] === 1'b1) ? 4'd13 : select_ln899_fu_504_p3);

assign ISIquan_V_addr_9_gep_fu_187_p3 = zext_ln18_reg_655;

assign and_ln899_fu_498_p2 = (xor_ln887_fu_492_p2 & icmp_ln899_fu_476_p2);

assign and_ln_fu_349_p3 = {{tmp_2_reg_685}, {1'd0}};

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign i_fu_537_p2 = (i_0_reg_278 + 4'd1);

assign icmp_ln17_fu_290_p2 = ((j_0_reg_267 == 7'd96) ? 1'b1 : 1'b0);

assign icmp_ln43_fu_531_p2 = ((i_0_reg_278 == 4'd12) ? 1'b1 : 1'b0);

assign icmp_ln887_fu_470_p2 = ((select_ln891_fu_464_p3 < 12'd10) ? 1'b1 : 1'b0);

assign icmp_ln891_fu_459_p2 = (($signed(ret_V_reg_695) < $signed(zext_ln891_fu_456_p1)) ? 1'b1 : 1'b0);

assign icmp_ln899_fu_476_p2 = ((select_ln891_fu_464_p3 < 12'd101) ? 1'b1 : 1'b0);

assign inputs_address0 = zext_ln18_fu_302_p1;

assign j_fu_296_p2 = (j_0_reg_267 + 7'd1);

assign lhs_V_fu_386_p1 = ISIPre_n_V_fu_376_p4;

assign or_ln45_fu_556_p2 = (shl_ln_fu_543_p3 | 7'd1);

assign or_ln46_fu_567_p2 = (shl_ln_reg_718 | 7'd2);

assign or_ln47_fu_577_p2 = (shl_ln_reg_718 | 7'd3);

assign or_ln48_fu_587_p2 = (shl_ln_reg_718 | 7'd4);

assign or_ln49_fu_597_p2 = (shl_ln_reg_718 | 7'd5);

assign or_ln50_fu_607_p2 = (shl_ln_reg_718 | 7'd6);

assign or_ln51_fu_617_p2 = (shl_ln_reg_718 | 7'd7);

assign output_r_address0 = zext_ln52_fu_642_p1;

assign output_r_d0 = {{{{{{{{ISIquan_V_q0}, {ISIquan_V_q1}}, {ISIquan_V_load_5_reg_783}}, {ISIquan_V_load_4_reg_778}}, {ISIquan_V_load_3_reg_763}}, {ISIquan_V_load_2_reg_758}}, {ISIquan_V_load_1_reg_743}}, {ISIquan_V_load_reg_738}};

assign r_V_1_fu_430_p4 = {{sub_ln214_fu_360_p2[11:5]}};

assign r_V_2_fu_440_p1 = r_V_1_fu_430_p4;

assign r_V_fu_426_p1 = trunc_ln3_fu_416_p4;

assign rem_r_d0 = {{{select_ln891_fu_464_p3}, {tmp_1_reg_680}}, {1'd0}};

assign ret_V_1_fu_400_p0 = lhs_V_fu_386_p1;

assign ret_V_1_fu_400_p1 = rhs_V_fu_390_p1;

assign ret_V_1_fu_400_p2 = (ret_V_1_fu_400_p0 * ret_V_1_fu_400_p1);

assign ret_V_fu_394_p2 = (lhs_V_fu_386_p1 - rhs_V_fu_390_p1);

assign rhs_V_fu_390_p1 = ISI_n_V_fu_366_p4;

assign select_ln891_fu_464_p3 = ((icmp_ln891_fu_459_p2[0:0] === 1'b1) ? sub_ln214_reg_690 : sub_ln214_1_reg_705);

assign select_ln899_fu_504_p3 = ((and_ln899_fu_498_p2[0:0] === 1'b1) ? trunc_ln1503_3_fu_482_p4 : 4'd14);

assign shl_ln_fu_543_p3 = {{i_0_reg_278}, {3'd0}};

assign sub_ln1354_fu_444_p2 = (ISIPre_V_fu_339_p4 - r_V_2_fu_440_p1);

assign sub_ln214_1_fu_450_p2 = (sub_ln1354_fu_444_p2 - r_V_fu_426_p1);

assign sub_ln214_fu_360_p2 = (and_ln_fu_349_p3 - trunc_ln214_fu_356_p1);

assign tmp_3_fu_311_p3 = inputs_q0[32'd1];

assign trunc_ln1503_3_fu_482_p4 = {{select_ln891_fu_464_p3[6:3]}};

assign trunc_ln214_fu_356_p1 = rem_r_q0[11:0];

assign trunc_ln301_fu_307_p1 = inputs_q0[0:0];

assign trunc_ln3_fu_416_p4 = {{rem_r_q0[31:25]}};

assign xor_ln887_fu_492_p2 = (icmp_ln887_fu_470_p2 ^ 1'd1);

assign zext_ln18_fu_302_p1 = j_0_reg_267;

assign zext_ln44_fu_551_p1 = shl_ln_fu_543_p3;

assign zext_ln45_fu_562_p1 = or_ln45_fu_556_p2;

assign zext_ln46_fu_572_p1 = or_ln46_fu_567_p2;

assign zext_ln47_fu_582_p1 = or_ln47_fu_577_p2;

assign zext_ln48_fu_592_p1 = or_ln48_fu_587_p2;

assign zext_ln49_fu_602_p1 = or_ln49_fu_597_p2;

assign zext_ln50_fu_612_p1 = or_ln50_fu_607_p2;

assign zext_ln51_fu_622_p1 = or_ln51_fu_617_p2;

assign zext_ln52_fu_642_p1 = i_0_reg_278;

assign zext_ln891_fu_456_p1 = trunc_ln2_reg_700;

always @ (posedge ap_clk) begin
    zext_ln18_reg_655[63:7] <= 57'b000000000000000000000000000000000000000000000000000000000;
    shl_ln_reg_718[2:0] <= 3'b000;
end

endmodule //estimate_ISI_encode
