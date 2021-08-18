// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _estimate_FR_2_HH_
#define _estimate_FR_2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "estimate_FR_2_cnt_V.h"
#include "estimate_FR_2_FR_V.h"
#include "estimate_FR_2_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 11,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct estimate_FR_2 : public sc_module {
    // Port declarations 23
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    estimate_FR_2(sc_module_name name);
    SC_HAS_PROCESS(estimate_FR_2);

    ~estimate_FR_2();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    estimate_FR_2_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* estimate_FR_2_AXILiteS_s_axi_U;
    estimate_FR_2_cnt_V* cnt_V_U;
    estimate_FR_2_FR_V* FR_V_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<14> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > inputs_address0;
    sc_signal< sc_logic > inputs_ce0;
    sc_signal< sc_lv<32> > inputs_q0;
    sc_signal< sc_lv<5> > counts_address0;
    sc_signal< sc_logic > counts_ce0;
    sc_signal< sc_logic > counts_we0;
    sc_signal< sc_lv<32> > counts_d0;
    sc_signal< sc_lv<32> > counts_q0;
    sc_signal< sc_lv<5> > outputs_address0;
    sc_signal< sc_logic > outputs_ce0;
    sc_signal< sc_logic > outputs_we0;
    sc_signal< sc_lv<32> > outputs_d0;
    sc_signal< sc_lv<5> > j_fu_341_p2;
    sc_signal< sc_lv<5> > j_reg_602;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln12_fu_335_p2;
    sc_signal< sc_lv<7> > shl_ln_fu_352_p3;
    sc_signal< sc_lv<7> > shl_ln_reg_612;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<6> > trunc_ln301_2_reg_618;
    sc_signal< sc_lv<6> > trunc_ln1_reg_623;
    sc_signal< sc_lv<7> > i_fu_438_p2;
    sc_signal< sc_lv<7> > i_reg_631;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > zext_ln20_fu_444_p1;
    sc_signal< sc_lv<64> > zext_ln20_reg_636;
    sc_signal< sc_lv<1> > icmp_ln19_fu_432_p2;
    sc_signal< sc_lv<1> > trunc_ln301_3_fu_449_p1;
    sc_signal< sc_lv<1> > trunc_ln301_3_reg_648;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > update_V_reg_652;
    sc_signal< sc_lv<7> > cnt_V_addr_4_reg_657;
    sc_signal< sc_lv<7> > cnt_V_addr_9_gep_fu_178_p3;
    sc_signal< sc_lv<7> > cnt_V_addr_9_reg_663;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<5> > k_fu_495_p2;
    sc_signal< sc_lv<5> > k_reg_672;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<7> > shl_ln1_fu_501_p3;
    sc_signal< sc_lv<7> > shl_ln1_reg_677;
    sc_signal< sc_lv<1> > icmp_ln31_fu_489_p2;
    sc_signal< sc_lv<64> > zext_ln32_fu_509_p1;
    sc_signal< sc_lv<64> > zext_ln32_reg_683;
    sc_signal< sc_lv<64> > zext_ln33_fu_520_p1;
    sc_signal< sc_lv<64> > zext_ln33_reg_693;
    sc_signal< sc_lv<6> > cnt_V_q0;
    sc_signal< sc_lv<6> > cnt_V_load_reg_703;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<6> > cnt_V_q1;
    sc_signal< sc_lv<6> > cnt_V_load_1_reg_708;
    sc_signal< sc_lv<64> > zext_ln34_fu_530_p1;
    sc_signal< sc_lv<64> > zext_ln34_reg_713;
    sc_signal< sc_lv<64> > zext_ln35_fu_540_p1;
    sc_signal< sc_lv<64> > zext_ln35_reg_723;
    sc_signal< sc_lv<64> > zext_ln36_1_fu_566_p1;
    sc_signal< sc_lv<64> > zext_ln36_1_reg_733;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<1> > p_090_0217_reg_300;
    sc_signal< sc_lv<7> > FR_V_q0;
    sc_signal< sc_lv<7> > FR_V_load_reg_748;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<7> > FR_V_q1;
    sc_signal< sc_lv<7> > FR_V_load_1_reg_753;
    sc_signal< sc_lv<7> > cnt_V_address0;
    sc_signal< sc_logic > cnt_V_ce0;
    sc_signal< sc_logic > cnt_V_we0;
    sc_signal< sc_lv<6> > cnt_V_d0;
    sc_signal< sc_lv<7> > cnt_V_address1;
    sc_signal< sc_logic > cnt_V_ce1;
    sc_signal< sc_logic > cnt_V_we1;
    sc_signal< sc_lv<6> > cnt_V_d1;
    sc_signal< sc_lv<7> > FR_V_address0;
    sc_signal< sc_logic > FR_V_ce0;
    sc_signal< sc_logic > FR_V_we0;
    sc_signal< sc_lv<7> > FR_V_d0;
    sc_signal< sc_lv<7> > FR_V_address1;
    sc_signal< sc_logic > FR_V_ce1;
    sc_signal< sc_lv<5> > j_0_reg_288;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<7> > i_0_reg_312;
    sc_signal< sc_lv<5> > k_0_reg_323;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<64> > zext_ln13_1_fu_347_p1;
    sc_signal< sc_lv<64> > zext_ln13_fu_360_p1;
    sc_signal< sc_lv<64> > zext_ln14_fu_376_p1;
    sc_signal< sc_lv<64> > zext_ln15_fu_417_p1;
    sc_signal< sc_lv<64> > zext_ln16_fu_427_p1;
    sc_signal< sc_lv<6> > trunc_ln301_fu_365_p1;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<6> > add_ln700_fu_461_p2;
    sc_signal< sc_lv<32> > zext_ln42_fu_594_p1;
    sc_signal< sc_lv<7> > or_ln14_fu_370_p2;
    sc_signal< sc_lv<7> > or_ln15_fu_412_p2;
    sc_signal< sc_lv<7> > or_ln16_fu_422_p2;
    sc_signal< sc_lv<6> > r_V_fu_468_p2;
    sc_signal< sc_lv<7> > zext_ln209_fu_474_p1;
    sc_signal< sc_lv<7> > zext_ln209_1_fu_478_p1;
    sc_signal< sc_lv<7> > or_ln33_fu_514_p2;
    sc_signal< sc_lv<7> > or_ln34_fu_525_p2;
    sc_signal< sc_lv<7> > or_ln35_fu_535_p2;
    sc_signal< sc_lv<30> > tmp_fu_545_p8;
    sc_signal< sc_lv<8> > zext_ln555_2_fu_578_p1;
    sc_signal< sc_lv<8> > zext_ln555_1_fu_575_p1;
    sc_signal< sc_lv<8> > zext_ln555_fu_572_p1;
    sc_signal< sc_lv<31> > tmp_1_fu_582_p5;
    sc_signal< sc_lv<14> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<14> ap_ST_fsm_state1;
    static const sc_lv<14> ap_ST_fsm_state2;
    static const sc_lv<14> ap_ST_fsm_state3;
    static const sc_lv<14> ap_ST_fsm_state4;
    static const sc_lv<14> ap_ST_fsm_state5;
    static const sc_lv<14> ap_ST_fsm_state6;
    static const sc_lv<14> ap_ST_fsm_state7;
    static const sc_lv<14> ap_ST_fsm_state8;
    static const sc_lv<14> ap_ST_fsm_state9;
    static const sc_lv<14> ap_ST_fsm_state10;
    static const sc_lv<14> ap_ST_fsm_state11;
    static const sc_lv<14> ap_ST_fsm_state12;
    static const sc_lv<14> ap_ST_fsm_state13;
    static const sc_lv<14> ap_ST_fsm_state14;
    static const sc_lv<32> ap_const_lv32_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<7> ap_const_lv7_2;
    static const sc_lv<7> ap_const_lv7_3;
    static const sc_lv<7> ap_const_lv7_60;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_FR_V_address0();
    void thread_FR_V_address1();
    void thread_FR_V_ce0();
    void thread_FR_V_ce1();
    void thread_FR_V_d0();
    void thread_FR_V_we0();
    void thread_add_ln700_fu_461_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_cnt_V_addr_9_gep_fu_178_p3();
    void thread_cnt_V_address0();
    void thread_cnt_V_address1();
    void thread_cnt_V_ce0();
    void thread_cnt_V_ce1();
    void thread_cnt_V_d0();
    void thread_cnt_V_d1();
    void thread_cnt_V_we0();
    void thread_cnt_V_we1();
    void thread_counts_address0();
    void thread_counts_ce0();
    void thread_counts_d0();
    void thread_counts_we0();
    void thread_i_fu_438_p2();
    void thread_icmp_ln12_fu_335_p2();
    void thread_icmp_ln19_fu_432_p2();
    void thread_icmp_ln31_fu_489_p2();
    void thread_inputs_address0();
    void thread_inputs_ce0();
    void thread_j_fu_341_p2();
    void thread_k_fu_495_p2();
    void thread_or_ln14_fu_370_p2();
    void thread_or_ln15_fu_412_p2();
    void thread_or_ln16_fu_422_p2();
    void thread_or_ln33_fu_514_p2();
    void thread_or_ln34_fu_525_p2();
    void thread_or_ln35_fu_535_p2();
    void thread_outputs_address0();
    void thread_outputs_ce0();
    void thread_outputs_d0();
    void thread_outputs_we0();
    void thread_r_V_fu_468_p2();
    void thread_shl_ln1_fu_501_p3();
    void thread_shl_ln_fu_352_p3();
    void thread_tmp_1_fu_582_p5();
    void thread_tmp_fu_545_p8();
    void thread_trunc_ln301_3_fu_449_p1();
    void thread_trunc_ln301_fu_365_p1();
    void thread_zext_ln13_1_fu_347_p1();
    void thread_zext_ln13_fu_360_p1();
    void thread_zext_ln14_fu_376_p1();
    void thread_zext_ln15_fu_417_p1();
    void thread_zext_ln16_fu_427_p1();
    void thread_zext_ln209_1_fu_478_p1();
    void thread_zext_ln209_fu_474_p1();
    void thread_zext_ln20_fu_444_p1();
    void thread_zext_ln32_fu_509_p1();
    void thread_zext_ln33_fu_520_p1();
    void thread_zext_ln34_fu_530_p1();
    void thread_zext_ln35_fu_540_p1();
    void thread_zext_ln36_1_fu_566_p1();
    void thread_zext_ln42_fu_594_p1();
    void thread_zext_ln555_1_fu_575_p1();
    void thread_zext_ln555_2_fu_578_p1();
    void thread_zext_ln555_fu_572_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
