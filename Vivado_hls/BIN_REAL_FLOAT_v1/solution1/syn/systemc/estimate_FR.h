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

#include "estimate_FR_dadd_64ns_64ns_64_5_full_dsp_1.h"
#include "estimate_FR_dmul_64ns_64ns_64_6_max_dsp_1.h"
#include "estimate_FR_ddiv_64ns_64ns_64_31_1.h"
#include "estimate_FR_dcmp_64ns_64ns_1_2_1.h"
#include "estimate_FR_sitodp_32ns_64_6_1.h"

namespace ap_rtl {

struct estimate_FR : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<64> > spksTime;
    sc_out< sc_lv<64> > FR;
    sc_out< sc_logic > FR_ap_vld;
    sc_in< sc_lv<64> > c_i;
    sc_out< sc_lv<64> > c_o;
    sc_out< sc_logic > c_o_ap_vld;
    sc_in< sc_lv<32> > Num;
    sc_in< sc_logic > finish_i;
    sc_out< sc_logic > finish_o;
    sc_out< sc_logic > finish_o_ap_vld;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<64> > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const2;


    // Module declarations
    estimate_FR(sc_module_name name);
    SC_HAS_PROCESS(estimate_FR);

    ~estimate_FR();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    estimate_FR_dadd_64ns_64ns_64_5_full_dsp_1<1,5,64,64,64>* estimate_FR_dadd_64ns_64ns_64_5_full_dsp_1_U1;
    estimate_FR_dmul_64ns_64ns_64_6_max_dsp_1<1,6,64,64,64>* estimate_FR_dmul_64ns_64ns_64_6_max_dsp_1_U2;
    estimate_FR_ddiv_64ns_64ns_64_31_1<1,31,64,64,64>* estimate_FR_ddiv_64ns_64ns_64_31_1_U3;
    estimate_FR_dcmp_64ns_64ns_1_2_1<1,2,64,64,1>* estimate_FR_dcmp_64ns_64ns_1_2_1_U4;
    estimate_FR_sitodp_32ns_64_6_1<1,6,32,64>* estimate_FR_sitodp_32ns_64_6_1_U5;
    sc_signal< sc_lv<62> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > grp_fu_117_p1;
    sc_signal< sc_lv<64> > reg_121;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<64> > grp_fu_101_p2;
    sc_signal< sc_lv<64> > reg_126;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<1> > finish_read_read_fu_60_p2;
    sc_signal< sc_lv<1> > finish_read_reg_269;
    sc_signal< sc_lv<64> > c_read_reg_273;
    sc_signal< sc_lv<1> > icmp_ln8_fu_149_p2;
    sc_signal< sc_lv<1> > icmp_ln8_reg_279;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<1> > icmp_ln8_1_fu_155_p2;
    sc_signal< sc_lv<1> > icmp_ln8_1_reg_284;
    sc_signal< sc_lv<1> > and_ln8_1_fu_206_p2;
    sc_signal< sc_lv<1> > and_ln8_1_reg_289;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > add_ln8_fu_212_p2;
    sc_signal< sc_lv<32> > add_ln8_reg_293;
    sc_signal< sc_lv<1> > icmp_ln8_4_fu_235_p2;
    sc_signal< sc_lv<1> > icmp_ln8_4_reg_298;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<1> > icmp_ln8_5_fu_241_p2;
    sc_signal< sc_lv<1> > icmp_ln8_5_reg_303;
    sc_signal< sc_lv<1> > and_ln8_2_fu_251_p2;
    sc_signal< sc_lv<1> > and_ln8_2_reg_308;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<64> > grp_fu_95_p2;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state62;
    sc_signal< sc_lv<64> > grp_fu_106_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<32> > grp_fu_117_p0;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<64> > bitcast_ln8_fu_131_p1;
    sc_signal< sc_lv<11> > tmp_2_fu_135_p4;
    sc_signal< sc_lv<52> > trunc_ln8_fu_145_p1;
    sc_signal< sc_lv<64> > bitcast_ln8_1_fu_161_p1;
    sc_signal< sc_lv<11> > tmp_5_fu_164_p4;
    sc_signal< sc_lv<52> > trunc_ln8_1_fu_174_p1;
    sc_signal< sc_lv<1> > icmp_ln8_3_fu_188_p2;
    sc_signal< sc_lv<1> > icmp_ln8_2_fu_182_p2;
    sc_signal< sc_lv<1> > or_ln8_fu_178_p2;
    sc_signal< sc_lv<1> > or_ln8_1_fu_194_p2;
    sc_signal< sc_lv<1> > and_ln8_fu_200_p2;
    sc_signal< sc_lv<1> > grp_fu_113_p2;
    sc_signal< sc_lv<64> > bitcast_ln8_2_fu_217_p1;
    sc_signal< sc_lv<11> > tmp_8_fu_221_p4;
    sc_signal< sc_lv<52> > trunc_ln8_2_fu_231_p1;
    sc_signal< sc_lv<1> > or_ln8_2_fu_247_p2;
    sc_signal< sc_lv<5> > grp_fu_113_opcode;
    sc_signal< sc_lv<62> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<62> ap_ST_fsm_state1;
    static const sc_lv<62> ap_ST_fsm_state2;
    static const sc_lv<62> ap_ST_fsm_state3;
    static const sc_lv<62> ap_ST_fsm_state4;
    static const sc_lv<62> ap_ST_fsm_state5;
    static const sc_lv<62> ap_ST_fsm_state6;
    static const sc_lv<62> ap_ST_fsm_state7;
    static const sc_lv<62> ap_ST_fsm_state8;
    static const sc_lv<62> ap_ST_fsm_state9;
    static const sc_lv<62> ap_ST_fsm_state10;
    static const sc_lv<62> ap_ST_fsm_state11;
    static const sc_lv<62> ap_ST_fsm_state12;
    static const sc_lv<62> ap_ST_fsm_state13;
    static const sc_lv<62> ap_ST_fsm_state14;
    static const sc_lv<62> ap_ST_fsm_state15;
    static const sc_lv<62> ap_ST_fsm_state16;
    static const sc_lv<62> ap_ST_fsm_state17;
    static const sc_lv<62> ap_ST_fsm_state18;
    static const sc_lv<62> ap_ST_fsm_state19;
    static const sc_lv<62> ap_ST_fsm_state20;
    static const sc_lv<62> ap_ST_fsm_state21;
    static const sc_lv<62> ap_ST_fsm_state22;
    static const sc_lv<62> ap_ST_fsm_state23;
    static const sc_lv<62> ap_ST_fsm_state24;
    static const sc_lv<62> ap_ST_fsm_state25;
    static const sc_lv<62> ap_ST_fsm_state26;
    static const sc_lv<62> ap_ST_fsm_state27;
    static const sc_lv<62> ap_ST_fsm_state28;
    static const sc_lv<62> ap_ST_fsm_state29;
    static const sc_lv<62> ap_ST_fsm_state30;
    static const sc_lv<62> ap_ST_fsm_state31;
    static const sc_lv<62> ap_ST_fsm_state32;
    static const sc_lv<62> ap_ST_fsm_state33;
    static const sc_lv<62> ap_ST_fsm_state34;
    static const sc_lv<62> ap_ST_fsm_state35;
    static const sc_lv<62> ap_ST_fsm_state36;
    static const sc_lv<62> ap_ST_fsm_state37;
    static const sc_lv<62> ap_ST_fsm_state38;
    static const sc_lv<62> ap_ST_fsm_state39;
    static const sc_lv<62> ap_ST_fsm_state40;
    static const sc_lv<62> ap_ST_fsm_state41;
    static const sc_lv<62> ap_ST_fsm_state42;
    static const sc_lv<62> ap_ST_fsm_state43;
    static const sc_lv<62> ap_ST_fsm_state44;
    static const sc_lv<62> ap_ST_fsm_state45;
    static const sc_lv<62> ap_ST_fsm_state46;
    static const sc_lv<62> ap_ST_fsm_state47;
    static const sc_lv<62> ap_ST_fsm_state48;
    static const sc_lv<62> ap_ST_fsm_state49;
    static const sc_lv<62> ap_ST_fsm_state50;
    static const sc_lv<62> ap_ST_fsm_state51;
    static const sc_lv<62> ap_ST_fsm_state52;
    static const sc_lv<62> ap_ST_fsm_state53;
    static const sc_lv<62> ap_ST_fsm_state54;
    static const sc_lv<62> ap_ST_fsm_state55;
    static const sc_lv<62> ap_ST_fsm_state56;
    static const sc_lv<62> ap_ST_fsm_state57;
    static const sc_lv<62> ap_ST_fsm_state58;
    static const sc_lv<62> ap_ST_fsm_state59;
    static const sc_lv<62> ap_ST_fsm_state60;
    static const sc_lv<62> ap_ST_fsm_state61;
    static const sc_lv<62> ap_ST_fsm_state62;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<64> ap_const_lv64_3FF0000000000000;
    static const sc_lv<64> ap_const_lv64_3FB999999999999A;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const sc_lv<52> ap_const_lv52_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<5> ap_const_lv5_5;
    static const sc_lv<5> ap_const_lv5_3;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_FR();
    void thread_FR_ap_vld();
    void thread_add_ln8_fu_212_p2();
    void thread_and_ln8_1_fu_206_p2();
    void thread_and_ln8_2_fu_251_p2();
    void thread_and_ln8_fu_200_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state62();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bitcast_ln8_1_fu_161_p1();
    void thread_bitcast_ln8_2_fu_217_p1();
    void thread_bitcast_ln8_fu_131_p1();
    void thread_c_o();
    void thread_c_o_ap_vld();
    void thread_finish_o();
    void thread_finish_o_ap_vld();
    void thread_finish_read_read_fu_60_p2();
    void thread_grp_fu_113_opcode();
    void thread_grp_fu_117_p0();
    void thread_icmp_ln8_1_fu_155_p2();
    void thread_icmp_ln8_2_fu_182_p2();
    void thread_icmp_ln8_3_fu_188_p2();
    void thread_icmp_ln8_4_fu_235_p2();
    void thread_icmp_ln8_5_fu_241_p2();
    void thread_icmp_ln8_fu_149_p2();
    void thread_or_ln8_1_fu_194_p2();
    void thread_or_ln8_2_fu_247_p2();
    void thread_or_ln8_fu_178_p2();
    void thread_tmp_2_fu_135_p4();
    void thread_tmp_5_fu_164_p4();
    void thread_tmp_8_fu_221_p4();
    void thread_trunc_ln8_1_fu_174_p1();
    void thread_trunc_ln8_2_fu_231_p1();
    void thread_trunc_ln8_fu_145_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif