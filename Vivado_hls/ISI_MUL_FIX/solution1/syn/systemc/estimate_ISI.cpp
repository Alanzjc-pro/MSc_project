// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "estimate_ISI.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic estimate_ISI::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic estimate_ISI::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<11> estimate_ISI::ap_ST_fsm_state1 = "1";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state2 = "10";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state3 = "100";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state4 = "1000";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state5 = "10000";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state6 = "100000";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state7 = "1000000";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state8 = "10000000";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state9 = "100000000";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state10 = "1000000000";
const sc_lv<11> estimate_ISI::ap_ST_fsm_state11 = "10000000000";
const sc_lv<32> estimate_ISI::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> estimate_ISI::ap_const_lv32_1 = "1";
const sc_lv<1> estimate_ISI::ap_const_lv1_0 = "0";
const sc_lv<32> estimate_ISI::ap_const_lv32_3 = "11";
const sc_lv<1> estimate_ISI::ap_const_lv1_1 = "1";
const sc_lv<32> estimate_ISI::ap_const_lv32_4 = "100";
const sc_lv<32> estimate_ISI::ap_const_lv32_5 = "101";
const sc_lv<32> estimate_ISI::ap_const_lv32_6 = "110";
const sc_lv<32> estimate_ISI::ap_const_lv32_7 = "111";
const sc_lv<7> estimate_ISI::ap_const_lv7_0 = "0000000";
const sc_lv<32> estimate_ISI::ap_const_lv32_A = "1010";
const sc_lv<6> estimate_ISI::ap_const_lv6_0 = "000000";
const sc_lv<32> estimate_ISI::ap_const_lv32_2 = "10";
const sc_lv<32> estimate_ISI::ap_const_lv32_8 = "1000";
const sc_lv<10> estimate_ISI::ap_const_lv10_100 = "100000000";
const sc_lv<32> estimate_ISI::ap_const_lv32_9 = "1001";
const sc_lv<7> estimate_ISI::ap_const_lv7_60 = "1100000";
const sc_lv<7> estimate_ISI::ap_const_lv7_1 = "1";
const sc_lv<5> estimate_ISI::ap_const_lv5_0 = "00000";
const sc_lv<3> estimate_ISI::ap_const_lv3_0 = "000";
const sc_lv<6> estimate_ISI::ap_const_lv6_1 = "1";
const sc_lv<18> estimate_ISI::ap_const_lv18_0 = "000000000000000000";
const sc_lv<32> estimate_ISI::ap_const_lv32_D = "1101";
const sc_lv<32> estimate_ISI::ap_const_lv32_C = "1100";
const bool estimate_ISI::ap_const_boolean_1 = true;

estimate_ISI::estimate_ISI(sc_module_name name) : sc_module(name), mVcdFile(0) {
    estimate_ISI_mul_mul_10ns_10ns_13_1_1_U1 = new estimate_ISI_mul_mul_10ns_10ns_13_1_1<1,1,10,10,13>("estimate_ISI_mul_mul_10ns_10ns_13_1_1_U1");
    estimate_ISI_mul_mul_10ns_10ns_13_1_1_U1->din0(r_V_fu_342_p0);
    estimate_ISI_mul_mul_10ns_10ns_13_1_1_U1->din1(r_V_fu_342_p1);
    estimate_ISI_mul_mul_10ns_10ns_13_1_1_U1->dout(r_V_fu_342_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ISI_V_address0);
    sensitive << ( ISI_V_addr_reg_367 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_ISI_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_ISI_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( p_Val2_4_reg_415 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( sub_ln703_1_reg_437 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_ISI_V_we0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln1498_fu_239_p2 );
    sensitive << ( icmp_ln1496_reg_433 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_ISIpre_V_address0);
    sensitive << ( ISIpre_V_addr_reg_377 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_ISIpre_V_ce0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_ISIpre_V_d0);
    sensitive << ( ISI_V_q0 );
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_ISIpre_V_we0);
    sensitive << ( icmp_ln1498_reg_401 );
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_add_ln1498_1_fu_229_p2);
    sensitive << ( add_ln1498_reg_357 );
    sensitive << ( zext_ln1498_2_fu_225_p1 );

    SC_METHOD(thread_add_ln1498_fu_207_p2);
    sensitive << ( zext_ln1498_1_fu_203_p1 );
    sensitive << ( zext_ln1498_fu_191_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state11);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln7_fu_163_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln7_fu_163_p2 );

    SC_METHOD(thread_elements_V_address0);
    sensitive << ( elements_V_addr_reg_362 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_elements_V_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_i_V_fu_169_p2);
    sensitive << ( t_V_reg_141 );

    SC_METHOD(thread_icmp_ln1496_fu_299_p2);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( ret_V_fu_290_p2 );
    sensitive << ( zext_ln1496_fu_296_p1 );

    SC_METHOD(thread_icmp_ln1498_fu_239_p2);
    sensitive << ( spksTime_V_q0 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_icmp_ln7_fu_163_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( t_V_reg_141 );

    SC_METHOD(thread_icmp_ln887_fu_213_p2);
    sensitive << ( elements_V_q0 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( t_V_1_reg_152 );

    SC_METHOD(thread_j_V_fu_219_p2);
    sensitive << ( t_V_1_reg_152 );

    SC_METHOD(thread_lhs_V_fu_284_p1);
    sensitive << ( p_Val2_3_reg_421 );

    SC_METHOD(thread_p_Val2_4_fu_257_p4);
    sensitive << ( ret_V_2_fu_252_p2 );

    SC_METHOD(thread_r_V_3_fu_305_p4);
    sensitive << ( p_Val2_3_reg_421 );

    SC_METHOD(thread_r_V_4_fu_314_p1);
    sensitive << ( r_V_3_fu_305_p4 );

    SC_METHOD(thread_r_V_5_fu_327_p1);
    sensitive << ( trunc_ln2_fu_318_p4 );

    SC_METHOD(thread_r_V_fu_342_p0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( r_V_fu_342_p00 );

    SC_METHOD(thread_r_V_fu_342_p00);
    sensitive << ( p_Val2_4_fu_257_p4 );

    SC_METHOD(thread_r_V_fu_342_p1);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( r_V_fu_342_p10 );

    SC_METHOD(thread_r_V_fu_342_p10);
    sensitive << ( ISIpre_V_q0 );

    SC_METHOD(thread_ret_V_2_fu_252_p2);
    sensitive << ( trunc_ln703_1_reg_405 );
    sensitive << ( trunc_ln703_fu_249_p1 );

    SC_METHOD(thread_ret_V_fu_290_p2);
    sensitive << ( lhs_V_fu_284_p1 );
    sensitive << ( rhs_V_fu_287_p1 );

    SC_METHOD(thread_rhs_V_fu_287_p1);
    sensitive << ( p_Val2_4_reg_415 );

    SC_METHOD(thread_spksPre_V_address0);
    sensitive << ( spksPre_V_addr_reg_372 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_spksPre_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_spksPre_V_d0);
    sensitive << ( p_Val2_s_reg_395 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_spksPre_V_we0);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_spksTime_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln1498_3_fu_234_p1 );

    SC_METHOD(thread_spksTime_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_sub_ln703_1_fu_336_p2);
    sensitive << ( sub_ln703_fu_331_p2 );
    sensitive << ( r_V_4_fu_314_p1 );

    SC_METHOD(thread_sub_ln703_fu_331_p2);
    sensitive << ( p_Val2_3_reg_421 );
    sensitive << ( r_V_5_fu_327_p1 );

    SC_METHOD(thread_tmp_1_fu_183_p3);
    sensitive << ( t_V_reg_141 );

    SC_METHOD(thread_tmp_2_fu_195_p3);
    sensitive << ( t_V_reg_141 );

    SC_METHOD(thread_trunc_ln2_fu_318_p4);
    sensitive << ( ret_V_2_reg_410 );

    SC_METHOD(thread_trunc_ln703_1_fu_245_p1);
    sensitive << ( spksPre_V_q0 );

    SC_METHOD(thread_trunc_ln703_fu_249_p1);
    sensitive << ( p_Val2_s_reg_395 );

    SC_METHOD(thread_zext_ln1496_fu_296_p1);
    sensitive << ( trunc_ln1_reg_428 );

    SC_METHOD(thread_zext_ln1498_1_fu_203_p1);
    sensitive << ( tmp_2_fu_195_p3 );

    SC_METHOD(thread_zext_ln1498_2_fu_225_p1);
    sensitive << ( t_V_1_reg_152 );

    SC_METHOD(thread_zext_ln1498_3_fu_234_p1);
    sensitive << ( add_ln1498_1_fu_229_p2 );

    SC_METHOD(thread_zext_ln1498_fu_191_p1);
    sensitive << ( tmp_1_fu_183_p3 );

    SC_METHOD(thread_zext_ln544_fu_175_p1);
    sensitive << ( t_V_reg_141 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln7_fu_163_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln887_fu_213_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln1498_fu_239_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "00000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "estimate_ISI_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, spksTime_V_address0, "(port)spksTime_V_address0");
    sc_trace(mVcdFile, spksTime_V_ce0, "(port)spksTime_V_ce0");
    sc_trace(mVcdFile, spksTime_V_q0, "(port)spksTime_V_q0");
    sc_trace(mVcdFile, spksPre_V_address0, "(port)spksPre_V_address0");
    sc_trace(mVcdFile, spksPre_V_ce0, "(port)spksPre_V_ce0");
    sc_trace(mVcdFile, spksPre_V_we0, "(port)spksPre_V_we0");
    sc_trace(mVcdFile, spksPre_V_d0, "(port)spksPre_V_d0");
    sc_trace(mVcdFile, spksPre_V_q0, "(port)spksPre_V_q0");
    sc_trace(mVcdFile, ISI_V_address0, "(port)ISI_V_address0");
    sc_trace(mVcdFile, ISI_V_ce0, "(port)ISI_V_ce0");
    sc_trace(mVcdFile, ISI_V_we0, "(port)ISI_V_we0");
    sc_trace(mVcdFile, ISI_V_d0, "(port)ISI_V_d0");
    sc_trace(mVcdFile, ISI_V_q0, "(port)ISI_V_q0");
    sc_trace(mVcdFile, ISIpre_V_address0, "(port)ISIpre_V_address0");
    sc_trace(mVcdFile, ISIpre_V_ce0, "(port)ISIpre_V_ce0");
    sc_trace(mVcdFile, ISIpre_V_we0, "(port)ISIpre_V_we0");
    sc_trace(mVcdFile, ISIpre_V_d0, "(port)ISIpre_V_d0");
    sc_trace(mVcdFile, ISIpre_V_q0, "(port)ISIpre_V_q0");
    sc_trace(mVcdFile, elements_V_address0, "(port)elements_V_address0");
    sc_trace(mVcdFile, elements_V_ce0, "(port)elements_V_ce0");
    sc_trace(mVcdFile, elements_V_q0, "(port)elements_V_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_V_fu_169_p2, "i_V_fu_169_p2");
    sc_trace(mVcdFile, i_V_reg_352, "i_V_reg_352");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, add_ln1498_fu_207_p2, "add_ln1498_fu_207_p2");
    sc_trace(mVcdFile, add_ln1498_reg_357, "add_ln1498_reg_357");
    sc_trace(mVcdFile, icmp_ln7_fu_163_p2, "icmp_ln7_fu_163_p2");
    sc_trace(mVcdFile, elements_V_addr_reg_362, "elements_V_addr_reg_362");
    sc_trace(mVcdFile, ISI_V_addr_reg_367, "ISI_V_addr_reg_367");
    sc_trace(mVcdFile, spksPre_V_addr_reg_372, "spksPre_V_addr_reg_372");
    sc_trace(mVcdFile, ISIpre_V_addr_reg_377, "ISIpre_V_addr_reg_377");
    sc_trace(mVcdFile, j_V_fu_219_p2, "j_V_fu_219_p2");
    sc_trace(mVcdFile, j_V_reg_385, "j_V_reg_385");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln887_fu_213_p2, "icmp_ln887_fu_213_p2");
    sc_trace(mVcdFile, p_Val2_s_reg_395, "p_Val2_s_reg_395");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, icmp_ln1498_fu_239_p2, "icmp_ln1498_fu_239_p2");
    sc_trace(mVcdFile, icmp_ln1498_reg_401, "icmp_ln1498_reg_401");
    sc_trace(mVcdFile, trunc_ln703_1_fu_245_p1, "trunc_ln703_1_fu_245_p1");
    sc_trace(mVcdFile, trunc_ln703_1_reg_405, "trunc_ln703_1_reg_405");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ret_V_2_fu_252_p2, "ret_V_2_fu_252_p2");
    sc_trace(mVcdFile, ret_V_2_reg_410, "ret_V_2_reg_410");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, p_Val2_4_fu_257_p4, "p_Val2_4_fu_257_p4");
    sc_trace(mVcdFile, p_Val2_4_reg_415, "p_Val2_4_reg_415");
    sc_trace(mVcdFile, p_Val2_3_reg_421, "p_Val2_3_reg_421");
    sc_trace(mVcdFile, trunc_ln1_reg_428, "trunc_ln1_reg_428");
    sc_trace(mVcdFile, icmp_ln1496_fu_299_p2, "icmp_ln1496_fu_299_p2");
    sc_trace(mVcdFile, icmp_ln1496_reg_433, "icmp_ln1496_reg_433");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, sub_ln703_1_fu_336_p2, "sub_ln703_1_fu_336_p2");
    sc_trace(mVcdFile, sub_ln703_1_reg_437, "sub_ln703_1_reg_437");
    sc_trace(mVcdFile, t_V_reg_141, "t_V_reg_141");
    sc_trace(mVcdFile, t_V_1_reg_152, "t_V_1_reg_152");
    sc_trace(mVcdFile, ap_CS_fsm_state11, "ap_CS_fsm_state11");
    sc_trace(mVcdFile, zext_ln544_fu_175_p1, "zext_ln544_fu_175_p1");
    sc_trace(mVcdFile, zext_ln1498_3_fu_234_p1, "zext_ln1498_3_fu_234_p1");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, tmp_1_fu_183_p3, "tmp_1_fu_183_p3");
    sc_trace(mVcdFile, tmp_2_fu_195_p3, "tmp_2_fu_195_p3");
    sc_trace(mVcdFile, zext_ln1498_1_fu_203_p1, "zext_ln1498_1_fu_203_p1");
    sc_trace(mVcdFile, zext_ln1498_fu_191_p1, "zext_ln1498_fu_191_p1");
    sc_trace(mVcdFile, zext_ln1498_2_fu_225_p1, "zext_ln1498_2_fu_225_p1");
    sc_trace(mVcdFile, add_ln1498_1_fu_229_p2, "add_ln1498_1_fu_229_p2");
    sc_trace(mVcdFile, trunc_ln703_fu_249_p1, "trunc_ln703_fu_249_p1");
    sc_trace(mVcdFile, r_V_fu_342_p2, "r_V_fu_342_p2");
    sc_trace(mVcdFile, lhs_V_fu_284_p1, "lhs_V_fu_284_p1");
    sc_trace(mVcdFile, rhs_V_fu_287_p1, "rhs_V_fu_287_p1");
    sc_trace(mVcdFile, ret_V_fu_290_p2, "ret_V_fu_290_p2");
    sc_trace(mVcdFile, zext_ln1496_fu_296_p1, "zext_ln1496_fu_296_p1");
    sc_trace(mVcdFile, r_V_3_fu_305_p4, "r_V_3_fu_305_p4");
    sc_trace(mVcdFile, trunc_ln2_fu_318_p4, "trunc_ln2_fu_318_p4");
    sc_trace(mVcdFile, r_V_5_fu_327_p1, "r_V_5_fu_327_p1");
    sc_trace(mVcdFile, sub_ln703_fu_331_p2, "sub_ln703_fu_331_p2");
    sc_trace(mVcdFile, r_V_4_fu_314_p1, "r_V_4_fu_314_p1");
    sc_trace(mVcdFile, r_V_fu_342_p0, "r_V_fu_342_p0");
    sc_trace(mVcdFile, r_V_fu_342_p1, "r_V_fu_342_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, r_V_fu_342_p00, "r_V_fu_342_p00");
    sc_trace(mVcdFile, r_V_fu_342_p10, "r_V_fu_342_p10");
#endif

    }
    mHdltvinHandle.open("estimate_ISI.hdltvin.dat");
    mHdltvoutHandle.open("estimate_ISI.hdltvout.dat");
}

estimate_ISI::~estimate_ISI() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete estimate_ISI_mul_mul_10ns_10ns_13_1_1_U1;
}

void estimate_ISI::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln7_fu_163_p2.read(), ap_const_lv1_0))) {
        t_V_1_reg_152 = ap_const_lv6_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        t_V_1_reg_152 = j_V_reg_385.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln887_fu_213_p2.read()))) {
        t_V_reg_141 = i_V_reg_352.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        t_V_reg_141 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln7_fu_163_p2.read(), ap_const_lv1_0))) {
        ISI_V_addr_reg_367 =  (sc_lv<7>) (zext_ln544_fu_175_p1.read());
        ISIpre_V_addr_reg_377 =  (sc_lv<7>) (zext_ln544_fu_175_p1.read());
        add_ln1498_reg_357 = add_ln1498_fu_207_p2.read();
        elements_V_addr_reg_362 =  (sc_lv<7>) (zext_ln544_fu_175_p1.read());
        spksPre_V_addr_reg_372 =  (sc_lv<7>) (zext_ln544_fu_175_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_V_reg_352 = i_V_fu_169_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        icmp_ln1496_reg_433 = icmp_ln1496_fu_299_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        icmp_ln1498_reg_401 = icmp_ln1498_fu_239_p2.read();
        p_Val2_s_reg_395 = spksTime_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_V_reg_385 = j_V_fu_219_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        p_Val2_3_reg_421 = ISIpre_V_q0.read();
        p_Val2_4_reg_415 = ret_V_2_fu_252_p2.read().range(13, 4);
        ret_V_2_reg_410 = ret_V_2_fu_252_p2.read();
        trunc_ln1_reg_428 = r_V_fu_342_p2.read().range(12, 3);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1496_fu_299_p2.read()))) {
        sub_ln703_1_reg_437 = sub_ln703_1_fu_336_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        trunc_ln703_1_reg_405 = trunc_ln703_1_fu_245_p1.read();
    }
}

void estimate_ISI::thread_ISI_V_address0() {
    ISI_V_address0 = ISI_V_addr_reg_367.read();
}

void estimate_ISI::thread_ISI_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        ISI_V_ce0 = ap_const_logic_1;
    } else {
        ISI_V_ce0 = ap_const_logic_0;
    }
}

void estimate_ISI::thread_ISI_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        ISI_V_d0 = sub_ln703_1_reg_437.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ISI_V_d0 = p_Val2_4_reg_415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ISI_V_d0 = ap_const_lv10_100;
    } else {
        ISI_V_d0 = "XXXXXXXXXX";
    }
}

void estimate_ISI::thread_ISI_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln1498_fu_239_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1496_reg_433.read())))) {
        ISI_V_we0 = ap_const_logic_1;
    } else {
        ISI_V_we0 = ap_const_logic_0;
    }
}

void estimate_ISI::thread_ISIpre_V_address0() {
    ISIpre_V_address0 = ISIpre_V_addr_reg_377.read();
}

void estimate_ISI::thread_ISIpre_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        ISIpre_V_ce0 = ap_const_logic_1;
    } else {
        ISIpre_V_ce0 = ap_const_logic_0;
    }
}

void estimate_ISI::thread_ISIpre_V_d0() {
    ISIpre_V_d0 = ISI_V_q0.read();
}

void estimate_ISI::thread_ISIpre_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln1498_reg_401.read()))) {
        ISIpre_V_we0 = ap_const_logic_1;
    } else {
        ISIpre_V_we0 = ap_const_logic_0;
    }
}

void estimate_ISI::thread_add_ln1498_1_fu_229_p2() {
    add_ln1498_1_fu_229_p2 = (!add_ln1498_reg_357.read().is_01() || !zext_ln1498_2_fu_225_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln1498_reg_357.read()) + sc_biguint<13>(zext_ln1498_2_fu_225_p1.read()));
}

void estimate_ISI::thread_add_ln1498_fu_207_p2() {
    add_ln1498_fu_207_p2 = (!zext_ln1498_1_fu_203_p1.read().is_01() || !zext_ln1498_fu_191_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln1498_1_fu_203_p1.read()) + sc_biguint<13>(zext_ln1498_fu_191_p1.read()));
}

void estimate_ISI::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void estimate_ISI::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void estimate_ISI::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void estimate_ISI::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void estimate_ISI::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void estimate_ISI::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void estimate_ISI::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void estimate_ISI::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void estimate_ISI::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void estimate_ISI::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void estimate_ISI::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void estimate_ISI::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln7_fu_163_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void estimate_ISI::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void estimate_ISI::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln7_fu_163_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void estimate_ISI::thread_elements_V_address0() {
    elements_V_address0 = elements_V_addr_reg_362.read();
}

void estimate_ISI::thread_elements_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        elements_V_ce0 = ap_const_logic_1;
    } else {
        elements_V_ce0 = ap_const_logic_0;
    }
}

void estimate_ISI::thread_i_V_fu_169_p2() {
    i_V_fu_169_p2 = (!t_V_reg_141.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(t_V_reg_141.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void estimate_ISI::thread_icmp_ln1496_fu_299_p2() {
    icmp_ln1496_fu_299_p2 = (!ret_V_fu_290_p2.read().is_01() || !zext_ln1496_fu_296_p1.read().is_01())? sc_lv<1>(): (sc_bigint<11>(ret_V_fu_290_p2.read()) < sc_bigint<11>(zext_ln1496_fu_296_p1.read()));
}

void estimate_ISI::thread_icmp_ln1498_fu_239_p2() {
    icmp_ln1498_fu_239_p2 = (!spksTime_V_q0.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(spksTime_V_q0.read() == ap_const_lv18_0);
}

void estimate_ISI::thread_icmp_ln7_fu_163_p2() {
    icmp_ln7_fu_163_p2 = (!t_V_reg_141.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(t_V_reg_141.read() == ap_const_lv7_60);
}

void estimate_ISI::thread_icmp_ln887_fu_213_p2() {
    icmp_ln887_fu_213_p2 = (!t_V_1_reg_152.read().is_01() || !elements_V_q0.read().is_01())? sc_lv<1>(): (sc_biguint<6>(t_V_1_reg_152.read()) < sc_biguint<6>(elements_V_q0.read()));
}

void estimate_ISI::thread_j_V_fu_219_p2() {
    j_V_fu_219_p2 = (!t_V_1_reg_152.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(t_V_1_reg_152.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_ISI::thread_lhs_V_fu_284_p1() {
    lhs_V_fu_284_p1 = esl_zext<11,10>(p_Val2_3_reg_421.read());
}

void estimate_ISI::thread_p_Val2_4_fu_257_p4() {
    p_Val2_4_fu_257_p4 = ret_V_2_fu_252_p2.read().range(13, 4);
}

void estimate_ISI::thread_r_V_3_fu_305_p4() {
    r_V_3_fu_305_p4 = p_Val2_3_reg_421.read().range(9, 5);
}

void estimate_ISI::thread_r_V_4_fu_314_p1() {
    r_V_4_fu_314_p1 = esl_zext<10,5>(r_V_3_fu_305_p4.read());
}

void estimate_ISI::thread_r_V_5_fu_327_p1() {
    r_V_5_fu_327_p1 = esl_zext<10,5>(trunc_ln2_fu_318_p4.read());
}

void estimate_ISI::thread_r_V_fu_342_p0() {
    r_V_fu_342_p0 =  (sc_lv<10>) (r_V_fu_342_p00.read());
}

void estimate_ISI::thread_r_V_fu_342_p00() {
    r_V_fu_342_p00 = esl_zext<13,10>(p_Val2_4_fu_257_p4.read());
}

void estimate_ISI::thread_r_V_fu_342_p1() {
    r_V_fu_342_p1 =  (sc_lv<10>) (r_V_fu_342_p10.read());
}

void estimate_ISI::thread_r_V_fu_342_p10() {
    r_V_fu_342_p10 = esl_zext<13,10>(ISIpre_V_q0.read());
}

void estimate_ISI::thread_ret_V_2_fu_252_p2() {
    ret_V_2_fu_252_p2 = (!trunc_ln703_fu_249_p1.read().is_01() || !trunc_ln703_1_reg_405.read().is_01())? sc_lv<14>(): (sc_biguint<14>(trunc_ln703_fu_249_p1.read()) - sc_biguint<14>(trunc_ln703_1_reg_405.read()));
}

void estimate_ISI::thread_ret_V_fu_290_p2() {
    ret_V_fu_290_p2 = (!lhs_V_fu_284_p1.read().is_01() || !rhs_V_fu_287_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(lhs_V_fu_284_p1.read()) - sc_biguint<11>(rhs_V_fu_287_p1.read()));
}

void estimate_ISI::thread_rhs_V_fu_287_p1() {
    rhs_V_fu_287_p1 = esl_zext<11,10>(p_Val2_4_reg_415.read());
}

void estimate_ISI::thread_spksPre_V_address0() {
    spksPre_V_address0 = spksPre_V_addr_reg_372.read();
}

void estimate_ISI::thread_spksPre_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        spksPre_V_ce0 = ap_const_logic_1;
    } else {
        spksPre_V_ce0 = ap_const_logic_0;
    }
}

void estimate_ISI::thread_spksPre_V_d0() {
    spksPre_V_d0 = p_Val2_s_reg_395.read();
}

void estimate_ISI::thread_spksPre_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        spksPre_V_we0 = ap_const_logic_1;
    } else {
        spksPre_V_we0 = ap_const_logic_0;
    }
}

void estimate_ISI::thread_spksTime_V_address0() {
    spksTime_V_address0 =  (sc_lv<12>) (zext_ln1498_3_fu_234_p1.read());
}

void estimate_ISI::thread_spksTime_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        spksTime_V_ce0 = ap_const_logic_1;
    } else {
        spksTime_V_ce0 = ap_const_logic_0;
    }
}

void estimate_ISI::thread_sub_ln703_1_fu_336_p2() {
    sub_ln703_1_fu_336_p2 = (!sub_ln703_fu_331_p2.read().is_01() || !r_V_4_fu_314_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(sub_ln703_fu_331_p2.read()) - sc_biguint<10>(r_V_4_fu_314_p1.read()));
}

void estimate_ISI::thread_sub_ln703_fu_331_p2() {
    sub_ln703_fu_331_p2 = (!p_Val2_3_reg_421.read().is_01() || !r_V_5_fu_327_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_Val2_3_reg_421.read()) - sc_biguint<10>(r_V_5_fu_327_p1.read()));
}

void estimate_ISI::thread_tmp_1_fu_183_p3() {
    tmp_1_fu_183_p3 = esl_concat<7,5>(t_V_reg_141.read(), ap_const_lv5_0);
}

void estimate_ISI::thread_tmp_2_fu_195_p3() {
    tmp_2_fu_195_p3 = esl_concat<7,3>(t_V_reg_141.read(), ap_const_lv3_0);
}

void estimate_ISI::thread_trunc_ln2_fu_318_p4() {
    trunc_ln2_fu_318_p4 = ret_V_2_reg_410.read().range(13, 9);
}

void estimate_ISI::thread_trunc_ln703_1_fu_245_p1() {
    trunc_ln703_1_fu_245_p1 = spksPre_V_q0.read().range(14-1, 0);
}

void estimate_ISI::thread_trunc_ln703_fu_249_p1() {
    trunc_ln703_fu_249_p1 = p_Val2_s_reg_395.read().range(14-1, 0);
}

void estimate_ISI::thread_zext_ln1496_fu_296_p1() {
    zext_ln1496_fu_296_p1 = esl_zext<11,10>(trunc_ln1_reg_428.read());
}

void estimate_ISI::thread_zext_ln1498_1_fu_203_p1() {
    zext_ln1498_1_fu_203_p1 = esl_zext<13,10>(tmp_2_fu_195_p3.read());
}

void estimate_ISI::thread_zext_ln1498_2_fu_225_p1() {
    zext_ln1498_2_fu_225_p1 = esl_zext<13,6>(t_V_1_reg_152.read());
}

void estimate_ISI::thread_zext_ln1498_3_fu_234_p1() {
    zext_ln1498_3_fu_234_p1 = esl_zext<64,13>(add_ln1498_1_fu_229_p2.read());
}

void estimate_ISI::thread_zext_ln1498_fu_191_p1() {
    zext_ln1498_fu_191_p1 = esl_zext<13,12>(tmp_1_fu_183_p3.read());
}

void estimate_ISI::thread_zext_ln544_fu_175_p1() {
    zext_ln544_fu_175_p1 = esl_zext<64,7>(t_V_reg_141.read());
}

void estimate_ISI::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln7_fu_163_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln887_fu_213_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln1498_fu_239_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state11;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<11>) ("XXXXXXXXXXX");
            break;
    }
}

void estimate_ISI::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"spksTime_V_address0\" :  \"" << spksTime_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"spksTime_V_ce0\" :  \"" << spksTime_V_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"spksTime_V_q0\" :  \"" << spksTime_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"spksPre_V_address0\" :  \"" << spksPre_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"spksPre_V_ce0\" :  \"" << spksPre_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"spksPre_V_we0\" :  \"" << spksPre_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"spksPre_V_d0\" :  \"" << spksPre_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"spksPre_V_q0\" :  \"" << spksPre_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISI_V_address0\" :  \"" << ISI_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISI_V_ce0\" :  \"" << ISI_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISI_V_we0\" :  \"" << ISI_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISI_V_d0\" :  \"" << ISI_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ISI_V_q0\" :  \"" << ISI_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISIpre_V_address0\" :  \"" << ISIpre_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISIpre_V_ce0\" :  \"" << ISIpre_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISIpre_V_we0\" :  \"" << ISIpre_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISIpre_V_d0\" :  \"" << ISIpre_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ISIpre_V_q0\" :  \"" << ISIpre_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"elements_V_address0\" :  \"" << elements_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"elements_V_ce0\" :  \"" << elements_V_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"elements_V_q0\" :  \"" << elements_V_q0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
