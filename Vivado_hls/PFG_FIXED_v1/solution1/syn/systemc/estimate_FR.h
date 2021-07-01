// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _estimate_FR_HH_
#define _estimate_FR_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "estimate_FR_sdiv_25ns_17s_25_29_seq_1.h"

namespace ap_rtl {

struct estimate_FR : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > spksTime_V_address0;
    sc_out< sc_logic > spksTime_V_ce0;
    sc_in< sc_lv<20> > spksTime_V_q0;
    sc_out< sc_lv<7> > spksTime_V_address1;
    sc_out< sc_logic > spksTime_V_ce1;
    sc_in< sc_lv<20> > spksTime_V_q1;
    sc_out< sc_lv<7> > FR_V_address0;
    sc_out< sc_logic > FR_V_ce0;
    sc_out< sc_logic > FR_V_we0;
    sc_out< sc_lv<17> > FR_V_d0;
    sc_in< sc_lv<17> > FR_V_q0;
    sc_out< sc_lv<7> > ISI_V_address0;
    sc_out< sc_logic > ISI_V_ce0;
    sc_out< sc_logic > ISI_V_we0;
    sc_out< sc_lv<17> > ISI_V_d0;
    sc_in< sc_lv<17> > ISI_V_q0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<25> > ap_var_for_const0;


    // Module declarations
    estimate_FR(sc_module_name name);
    SC_HAS_PROCESS(estimate_FR);

    ~estimate_FR();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    estimate_FR_sdiv_25ns_17s_25_29_seq_1<1,29,25,17,25>* estimate_FR_sdiv_25ns_17s_25_29_seq_1_U1;
    sc_signal< sc_lv<34> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > i_fu_155_p2;
    sc_signal< sc_lv<7> > i_reg_279;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > zext_ln11_fu_161_p1;
    sc_signal< sc_lv<64> > zext_ln11_reg_284;
    sc_signal< sc_lv<1> > icmp_ln10_fu_149_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln14_fu_186_p2;
    sc_signal< sc_lv<7> > FR_V_addr_1_reg_307;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<1> > icmp_ln1494_fu_244_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_reg_322;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<17> > add_ln703_fu_264_p2;
    sc_signal< sc_lv<17> > add_ln703_reg_326;
    sc_signal< sc_lv<7> > j_fu_270_p2;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_lv<7> > i_0_reg_126;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<7> > j_0_reg_137;
    sc_signal< sc_lv<64> > zext_ln11_1_fu_166_p1;
    sc_signal< sc_lv<64> > zext_ln15_fu_192_p1;
    sc_signal< sc_lv<64> > zext_ln16_fu_214_p1;
    sc_signal< sc_lv<17> > p_Val2_3_fu_219_p4;
    sc_signal< sc_lv<17> > trunc_ln703_fu_171_p1;
    sc_signal< sc_lv<17> > trunc_ln703_1_fu_175_p1;
    sc_signal< sc_lv<7> > add_ln16_fu_208_p2;
    sc_signal< sc_lv<25> > grp_fu_202_p2;
    sc_signal< sc_lv<18> > lhs_V_fu_230_p1;
    sc_signal< sc_lv<18> > rhs_V_fu_234_p1;
    sc_signal< sc_lv<18> > ret_V_fu_238_p2;
    sc_signal< sc_lv<13> > trunc_ln1_fu_250_p4;
    sc_signal< sc_lv<17> > p_Val2_5_fu_260_p1;
    sc_signal< sc_logic > grp_fu_202_ap_start;
    sc_signal< sc_logic > grp_fu_202_ap_done;
    sc_signal< sc_lv<34> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<34> ap_ST_fsm_state1;
    static const sc_lv<34> ap_ST_fsm_state2;
    static const sc_lv<34> ap_ST_fsm_state3;
    static const sc_lv<34> ap_ST_fsm_state4;
    static const sc_lv<34> ap_ST_fsm_state5;
    static const sc_lv<34> ap_ST_fsm_state6;
    static const sc_lv<34> ap_ST_fsm_state7;
    static const sc_lv<34> ap_ST_fsm_state8;
    static const sc_lv<34> ap_ST_fsm_state9;
    static const sc_lv<34> ap_ST_fsm_state10;
    static const sc_lv<34> ap_ST_fsm_state11;
    static const sc_lv<34> ap_ST_fsm_state12;
    static const sc_lv<34> ap_ST_fsm_state13;
    static const sc_lv<34> ap_ST_fsm_state14;
    static const sc_lv<34> ap_ST_fsm_state15;
    static const sc_lv<34> ap_ST_fsm_state16;
    static const sc_lv<34> ap_ST_fsm_state17;
    static const sc_lv<34> ap_ST_fsm_state18;
    static const sc_lv<34> ap_ST_fsm_state19;
    static const sc_lv<34> ap_ST_fsm_state20;
    static const sc_lv<34> ap_ST_fsm_state21;
    static const sc_lv<34> ap_ST_fsm_state22;
    static const sc_lv<34> ap_ST_fsm_state23;
    static const sc_lv<34> ap_ST_fsm_state24;
    static const sc_lv<34> ap_ST_fsm_state25;
    static const sc_lv<34> ap_ST_fsm_state26;
    static const sc_lv<34> ap_ST_fsm_state27;
    static const sc_lv<34> ap_ST_fsm_state28;
    static const sc_lv<34> ap_ST_fsm_state29;
    static const sc_lv<34> ap_ST_fsm_state30;
    static const sc_lv<34> ap_ST_fsm_state31;
    static const sc_lv<34> ap_ST_fsm_state32;
    static const sc_lv<34> ap_ST_fsm_state33;
    static const sc_lv<34> ap_ST_fsm_state34;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_lv<7> ap_const_lv7_4A;
    static const sc_lv<25> ap_const_lv25_800000;
    static const sc_lv<7> ap_const_lv7_7F;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<18> ap_const_lv18_3C0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_11;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_FR_V_address0();
    void thread_FR_V_ce0();
    void thread_FR_V_d0();
    void thread_FR_V_we0();
    void thread_ISI_V_address0();
    void thread_ISI_V_ce0();
    void thread_ISI_V_d0();
    void thread_ISI_V_we0();
    void thread_add_ln16_fu_208_p2();
    void thread_add_ln703_fu_264_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_202_ap_start();
    void thread_i_fu_155_p2();
    void thread_icmp_ln10_fu_149_p2();
    void thread_icmp_ln1494_fu_244_p2();
    void thread_icmp_ln14_fu_186_p2();
    void thread_j_fu_270_p2();
    void thread_lhs_V_fu_230_p1();
    void thread_p_Val2_3_fu_219_p4();
    void thread_p_Val2_5_fu_260_p1();
    void thread_ret_V_fu_238_p2();
    void thread_rhs_V_fu_234_p1();
    void thread_spksTime_V_address0();
    void thread_spksTime_V_address1();
    void thread_spksTime_V_ce0();
    void thread_spksTime_V_ce1();
    void thread_trunc_ln1_fu_250_p4();
    void thread_trunc_ln703_1_fu_175_p1();
    void thread_trunc_ln703_fu_171_p1();
    void thread_zext_ln11_1_fu_166_p1();
    void thread_zext_ln11_fu_161_p1();
    void thread_zext_ln15_fu_192_p1();
    void thread_zext_ln16_fu_214_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif