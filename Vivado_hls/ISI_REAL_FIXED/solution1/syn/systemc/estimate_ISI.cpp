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
const sc_lv<3> estimate_ISI::ap_ST_fsm_state1 = "1";
const sc_lv<3> estimate_ISI::ap_ST_fsm_state2 = "10";
const sc_lv<3> estimate_ISI::ap_ST_fsm_state3 = "100";
const sc_lv<32> estimate_ISI::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> estimate_ISI::ap_const_lv32_1 = "1";
const sc_lv<1> estimate_ISI::ap_const_lv1_1 = "1";
const sc_lv<32> estimate_ISI::ap_const_lv32_2 = "10";
const sc_lv<32> estimate_ISI::ap_const_lv32_8 = "1000";
const sc_lv<32> estimate_ISI::ap_const_lv32_17 = "10111";
const sc_lv<32> estimate_ISI::ap_const_lv32_5 = "101";
const sc_lv<32> estimate_ISI::ap_const_lv32_F = "1111";
const bool estimate_ISI::ap_const_boolean_1 = true;

estimate_ISI::estimate_ISI(sc_module_name name) : sc_module(name), mVcdFile(0) {
    estimate_ISI_mul_mul_16s_16s_32_1_1_U1 = new estimate_ISI_mul_mul_16s_16s_32_1_1<1,1,16,16,32>("estimate_ISI_mul_mul_16s_16s_32_1_1_U1");
    estimate_ISI_mul_mul_16s_16s_32_1_1_U1->din0(p_Val2_2_fu_96_p2);
    estimate_ISI_mul_mul_16s_16s_32_1_1_U1->din1(ISIpre_V_i);
    estimate_ISI_mul_mul_16s_16s_32_1_1_U1->dout(r_V_1_fu_178_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ISI_V);
    sensitive << ( select_ln4_fu_170_p3 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ISI_V_ap_vld);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ISIpre_V_o);
    sensitive << ( select_ln4_fu_170_p3 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ISIpre_V_o_ap_vld);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_and_ln1494_fu_158_p1);
    sensitive << ( yes );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_and_ln1494_fu_158_p2);
    sensitive << ( icmp_ln1494_fu_144_p2 );
    sensitive << ( and_ln1494_fu_158_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_icmp_ln1494_fu_144_p2);
    sensitive << ( yes_read_read_fu_42_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ret_V_fu_135_p2 );
    sensitive << ( sext_ln1494_fu_141_p1 );

    SC_METHOD(thread_lhs_V_fu_129_p0);
    sensitive << ( ISIpre_V_i );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_lhs_V_fu_129_p1);
    sensitive << ( lhs_V_fu_129_p0 );

    SC_METHOD(thread_p_Val2_2_fu_96_p2);
    sensitive << ( trunc_ln703_fu_88_p1 );
    sensitive << ( trunc_ln703_1_fu_92_p1 );

    SC_METHOD(thread_r_V_3_fu_150_p1);
    sensitive << ( trunc_ln2_reg_213 );

    SC_METHOD(thread_ret_V_fu_135_p2);
    sensitive << ( lhs_V_fu_129_p1 );
    sensitive << ( rhs_V_fu_132_p1 );

    SC_METHOD(thread_rhs_V_fu_132_p1);
    sensitive << ( p_Val2_2_reg_196 );

    SC_METHOD(thread_select_ln1494_fu_163_p3);
    sensitive << ( p_Val2_2_reg_196 );
    sensitive << ( and_ln1494_fu_158_p2 );
    sensitive << ( sub_ln703_fu_153_p2 );

    SC_METHOD(thread_select_ln4_fu_170_p0);
    sensitive << ( yes );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_select_ln4_fu_170_p3);
    sensitive << ( trunc_ln703_reg_191 );
    sensitive << ( select_ln4_fu_170_p0 );
    sensitive << ( select_ln1494_fu_163_p3 );

    SC_METHOD(thread_sext_ln1494_fu_141_p1);
    sensitive << ( trunc_ln1_reg_208 );

    SC_METHOD(thread_spksPre_V_o);
    sensitive << ( spksTime_V );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_spksPre_V_o_ap_vld);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_sub_ln703_fu_153_p0);
    sensitive << ( ISIpre_V_i );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_sub_ln703_fu_153_p2);
    sensitive << ( sub_ln703_fu_153_p0 );
    sensitive << ( r_V_3_fu_150_p1 );

    SC_METHOD(thread_trunc_ln703_1_fu_92_p1);
    sensitive << ( spksPre_V_i );

    SC_METHOD(thread_trunc_ln703_fu_88_p1);
    sensitive << ( spksTime_V );

    SC_METHOD(thread_yes_read_read_fu_42_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( yes );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "001";
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
    sc_trace(mVcdFile, spksTime_V, "(port)spksTime_V");
    sc_trace(mVcdFile, spksPre_V_i, "(port)spksPre_V_i");
    sc_trace(mVcdFile, spksPre_V_o, "(port)spksPre_V_o");
    sc_trace(mVcdFile, spksPre_V_o_ap_vld, "(port)spksPre_V_o_ap_vld");
    sc_trace(mVcdFile, ISI_V, "(port)ISI_V");
    sc_trace(mVcdFile, ISI_V_ap_vld, "(port)ISI_V_ap_vld");
    sc_trace(mVcdFile, ISIpre_V_i, "(port)ISIpre_V_i");
    sc_trace(mVcdFile, ISIpre_V_o, "(port)ISIpre_V_o");
    sc_trace(mVcdFile, ISIpre_V_o_ap_vld, "(port)ISIpre_V_o_ap_vld");
    sc_trace(mVcdFile, penalty_V, "(port)penalty_V");
    sc_trace(mVcdFile, yes, "(port)yes");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, yes_read_read_fu_42_p2, "yes_read_read_fu_42_p2");
    sc_trace(mVcdFile, trunc_ln703_fu_88_p1, "trunc_ln703_fu_88_p1");
    sc_trace(mVcdFile, trunc_ln703_reg_191, "trunc_ln703_reg_191");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, p_Val2_2_fu_96_p2, "p_Val2_2_fu_96_p2");
    sc_trace(mVcdFile, p_Val2_2_reg_196, "p_Val2_2_reg_196");
    sc_trace(mVcdFile, trunc_ln1_reg_208, "trunc_ln1_reg_208");
    sc_trace(mVcdFile, trunc_ln2_reg_213, "trunc_ln2_reg_213");
    sc_trace(mVcdFile, select_ln4_fu_170_p3, "select_ln4_fu_170_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, trunc_ln703_1_fu_92_p1, "trunc_ln703_1_fu_92_p1");
    sc_trace(mVcdFile, r_V_1_fu_178_p2, "r_V_1_fu_178_p2");
    sc_trace(mVcdFile, lhs_V_fu_129_p0, "lhs_V_fu_129_p0");
    sc_trace(mVcdFile, lhs_V_fu_129_p1, "lhs_V_fu_129_p1");
    sc_trace(mVcdFile, rhs_V_fu_132_p1, "rhs_V_fu_132_p1");
    sc_trace(mVcdFile, ret_V_fu_135_p2, "ret_V_fu_135_p2");
    sc_trace(mVcdFile, sext_ln1494_fu_141_p1, "sext_ln1494_fu_141_p1");
    sc_trace(mVcdFile, sub_ln703_fu_153_p0, "sub_ln703_fu_153_p0");
    sc_trace(mVcdFile, r_V_3_fu_150_p1, "r_V_3_fu_150_p1");
    sc_trace(mVcdFile, icmp_ln1494_fu_144_p2, "icmp_ln1494_fu_144_p2");
    sc_trace(mVcdFile, and_ln1494_fu_158_p1, "and_ln1494_fu_158_p1");
    sc_trace(mVcdFile, and_ln1494_fu_158_p2, "and_ln1494_fu_158_p2");
    sc_trace(mVcdFile, sub_ln703_fu_153_p2, "sub_ln703_fu_153_p2");
    sc_trace(mVcdFile, select_ln4_fu_170_p0, "select_ln4_fu_170_p0");
    sc_trace(mVcdFile, select_ln1494_fu_163_p3, "select_ln1494_fu_163_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
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
    delete estimate_ISI_mul_mul_16s_16s_32_1_1_U1;
}

void estimate_ISI::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(yes_read_read_fu_42_p2.read(), ap_const_lv1_1))) {
        p_Val2_2_reg_196 = p_Val2_2_fu_96_p2.read();
        trunc_ln1_reg_208 = r_V_1_fu_178_p2.read().range(23, 8);
        trunc_ln2_reg_213 = p_Val2_2_fu_96_p2.read().range(15, 5);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        trunc_ln703_reg_191 = trunc_ln703_fu_88_p1.read();
    }
}

void estimate_ISI::thread_ISI_V() {
    ISI_V = select_ln4_fu_170_p3.read();
}

void estimate_ISI::thread_ISI_V_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ISI_V_ap_vld = ap_const_logic_1;
    } else {
        ISI_V_ap_vld = ap_const_logic_0;
    }
}

void estimate_ISI::thread_ISIpre_V_o() {
    ISIpre_V_o = select_ln4_fu_170_p3.read();
}

void estimate_ISI::thread_ISIpre_V_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ISIpre_V_o_ap_vld = ap_const_logic_1;
    } else {
        ISIpre_V_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_ISI::thread_and_ln1494_fu_158_p1() {
    and_ln1494_fu_158_p1 =  (sc_lv<1>) (yes.read());
}

void estimate_ISI::thread_and_ln1494_fu_158_p2() {
    and_ln1494_fu_158_p2 = (icmp_ln1494_fu_144_p2.read() & and_ln1494_fu_158_p1.read());
}

void estimate_ISI::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void estimate_ISI::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void estimate_ISI::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void estimate_ISI::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void estimate_ISI::thread_icmp_ln1494_fu_144_p2() {
    icmp_ln1494_fu_144_p2 = (!ret_V_fu_135_p2.read().is_01() || !sext_ln1494_fu_141_p1.read().is_01())? sc_lv<1>(): (sc_bigint<17>(ret_V_fu_135_p2.read()) > sc_bigint<17>(sext_ln1494_fu_141_p1.read()));
}

void estimate_ISI::thread_lhs_V_fu_129_p0() {
    lhs_V_fu_129_p0 = ISIpre_V_i.read();
}

void estimate_ISI::thread_lhs_V_fu_129_p1() {
    lhs_V_fu_129_p1 = esl_sext<17,16>(lhs_V_fu_129_p0.read());
}

void estimate_ISI::thread_p_Val2_2_fu_96_p2() {
    p_Val2_2_fu_96_p2 = (!trunc_ln703_fu_88_p1.read().is_01() || !trunc_ln703_1_fu_92_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(trunc_ln703_fu_88_p1.read()) - sc_biguint<16>(trunc_ln703_1_fu_92_p1.read()));
}

void estimate_ISI::thread_r_V_3_fu_150_p1() {
    r_V_3_fu_150_p1 = esl_sext<16,11>(trunc_ln2_reg_213.read());
}

void estimate_ISI::thread_ret_V_fu_135_p2() {
    ret_V_fu_135_p2 = (!lhs_V_fu_129_p1.read().is_01() || !rhs_V_fu_132_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(lhs_V_fu_129_p1.read()) - sc_bigint<17>(rhs_V_fu_132_p1.read()));
}

void estimate_ISI::thread_rhs_V_fu_132_p1() {
    rhs_V_fu_132_p1 = esl_sext<17,16>(p_Val2_2_reg_196.read());
}

void estimate_ISI::thread_select_ln1494_fu_163_p3() {
    select_ln1494_fu_163_p3 = (!and_ln1494_fu_158_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln1494_fu_158_p2.read()[0].to_bool())? sub_ln703_fu_153_p2.read(): p_Val2_2_reg_196.read());
}

void estimate_ISI::thread_select_ln4_fu_170_p0() {
    select_ln4_fu_170_p0 =  (sc_lv<1>) (yes.read());
}

void estimate_ISI::thread_select_ln4_fu_170_p3() {
    select_ln4_fu_170_p3 = (!select_ln4_fu_170_p0.read()[0].is_01())? sc_lv<16>(): ((select_ln4_fu_170_p0.read()[0].to_bool())? select_ln1494_fu_163_p3.read(): trunc_ln703_reg_191.read());
}

void estimate_ISI::thread_sext_ln1494_fu_141_p1() {
    sext_ln1494_fu_141_p1 = esl_sext<17,16>(trunc_ln1_reg_208.read());
}

void estimate_ISI::thread_spksPre_V_o() {
    spksPre_V_o = spksTime_V.read();
}

void estimate_ISI::thread_spksPre_V_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        spksPre_V_o_ap_vld = ap_const_logic_1;
    } else {
        spksPre_V_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_ISI::thread_sub_ln703_fu_153_p0() {
    sub_ln703_fu_153_p0 = ISIpre_V_i.read();
}

void estimate_ISI::thread_sub_ln703_fu_153_p2() {
    sub_ln703_fu_153_p2 = (!sub_ln703_fu_153_p0.read().is_01() || !r_V_3_fu_150_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sub_ln703_fu_153_p0.read()) - sc_bigint<16>(r_V_3_fu_150_p1.read()));
}

void estimate_ISI::thread_trunc_ln703_1_fu_92_p1() {
    trunc_ln703_1_fu_92_p1 = spksPre_V_i.read().range(16-1, 0);
}

void estimate_ISI::thread_trunc_ln703_fu_88_p1() {
    trunc_ln703_fu_88_p1 = spksTime_V.read().range(16-1, 0);
}

void estimate_ISI::thread_yes_read_read_fu_42_p2() {
    yes_read_read_fu_42_p2 =  (sc_lv<1>) (yes.read());
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
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
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
        mHdltvinHandle << " , " <<  " \"spksTime_V\" :  \"" << spksTime_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"spksPre_V_i\" :  \"" << spksPre_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"spksPre_V_o\" :  \"" << spksPre_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"spksPre_V_o_ap_vld\" :  \"" << spksPre_V_o_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISI_V\" :  \"" << ISI_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISI_V_ap_vld\" :  \"" << ISI_V_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ISIpre_V_i\" :  \"" << ISIpre_V_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISIpre_V_o\" :  \"" << ISIpre_V_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ISIpre_V_o_ap_vld\" :  \"" << ISIpre_V_o_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"penalty_V\" :  \"" << penalty_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"yes\" :  \"" << yes.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
