// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "estimate_FR.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic estimate_FR::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic estimate_FR::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> estimate_FR::ap_ST_fsm_state1 = "1";
const sc_lv<6> estimate_FR::ap_ST_fsm_state2 = "10";
const sc_lv<6> estimate_FR::ap_ST_fsm_state3 = "100";
const sc_lv<6> estimate_FR::ap_ST_fsm_state4 = "1000";
const sc_lv<6> estimate_FR::ap_ST_fsm_state5 = "10000";
const sc_lv<6> estimate_FR::ap_ST_fsm_state6 = "100000";
const sc_lv<32> estimate_FR::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> estimate_FR::ap_const_lv32_1 = "1";
const sc_lv<1> estimate_FR::ap_const_lv1_0 = "0";
const sc_lv<32> estimate_FR::ap_const_lv32_2 = "10";
const sc_lv<32> estimate_FR::ap_const_lv32_3 = "11";
const sc_lv<32> estimate_FR::ap_const_lv32_5 = "101";
const sc_lv<7> estimate_FR::ap_const_lv7_0 = "0000000";
const sc_lv<8> estimate_FR::ap_const_lv8_0 = "00000000";
const sc_lv<32> estimate_FR::ap_const_lv32_4 = "100";
const sc_lv<64> estimate_FR::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<1> estimate_FR::ap_const_lv1_1 = "1";
const sc_lv<7> estimate_FR::ap_const_lv7_60 = "1100000";
const sc_lv<7> estimate_FR::ap_const_lv7_1 = "1";
const sc_lv<5> estimate_FR::ap_const_lv5_0 = "00000";
const sc_lv<3> estimate_FR::ap_const_lv3_0 = "000";
const sc_lv<8> estimate_FR::ap_const_lv8_1 = "1";
const sc_lv<19> estimate_FR::ap_const_lv19_0 = "0000000000000000000";
const sc_lv<8> estimate_FR::ap_const_lv8_2 = "10";
const bool estimate_FR::ap_const_boolean_1 = true;

estimate_FR::estimate_FR(sc_module_name name) : sc_module(name), mVcdFile(0) {
    c_V_U = new estimate_FR_c_V("c_V_U");
    c_V_U->clk(ap_clk);
    c_V_U->reset(ap_rst);
    c_V_U->address0(c_V_address0);
    c_V_U->ce0(c_V_ce0);
    c_V_U->we0(c_V_we0);
    c_V_U->d0(c_V_d0);
    c_V_U->q0(c_V_q0);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_FR_V_addr_gep_fu_130_p3);
    sensitive << ( zext_ln10_reg_276 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( nospikes_0_load_load_fu_251_p1 );

    SC_METHOD(thread_FR_V_address0);
    sensitive << ( zext_ln10_reg_276 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( nospikes_0_load_load_fu_251_p1 );
    sensitive << ( FR_V_addr_gep_fu_130_p3 );

    SC_METHOD(thread_FR_V_ce0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( nospikes_0_load_load_fu_251_p1 );

    SC_METHOD(thread_FR_V_d0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( nospikes_0_load_load_fu_251_p1 );
    sensitive << ( r_V_fu_254_p2 );

    SC_METHOD(thread_FR_V_we0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( nospikes_0_load_load_fu_251_p1 );

    SC_METHOD(thread_add_ln1498_1_fu_230_p2);
    sensitive << ( add_ln1498_reg_288 );
    sensitive << ( zext_ln1498_2_fu_226_p1 );

    SC_METHOD(thread_add_ln1498_fu_208_p2);
    sensitive << ( zext_ln1498_1_fu_204_p1 );
    sensitive << ( zext_ln1498_fu_192_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
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

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_167_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_167_p2 );

    SC_METHOD(thread_c_V_address0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( c_V_addr_1_reg_293 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln10_fu_214_p2 );

    SC_METHOD(thread_c_V_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln10_fu_214_p2 );

    SC_METHOD(thread_c_V_d0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( j_fu_219_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln10_fu_214_p2 );

    SC_METHOD(thread_c_V_we0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln10_fu_214_p2 );

    SC_METHOD(thread_elements_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln10_fu_179_p1 );

    SC_METHOD(thread_elements_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_i_fu_173_p2);
    sensitive << ( i_0_reg_139 );

    SC_METHOD(thread_icmp_ln10_fu_214_p2);
    sensitive << ( elements_V_load_reg_298 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( i_op_assign_reg_151 );

    SC_METHOD(thread_icmp_ln1498_fu_240_p2);
    sensitive << ( spksTime_V_q0 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_icmp_ln9_fu_167_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_139 );

    SC_METHOD(thread_j_fu_219_p2);
    sensitive << ( i_op_assign_reg_151 );

    SC_METHOD(thread_nospikes_0_load_load_fu_251_p1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( nospikes_0_fu_62 );

    SC_METHOD(thread_r_V_fu_254_p2);
    sensitive << ( c_V_q0 );

    SC_METHOD(thread_spksTime_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln1498_3_fu_235_p1 );

    SC_METHOD(thread_spksTime_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_tmp_2_fu_184_p3);
    sensitive << ( i_0_reg_139 );

    SC_METHOD(thread_tmp_3_fu_196_p3);
    sensitive << ( i_0_reg_139 );

    SC_METHOD(thread_zext_ln10_fu_179_p1);
    sensitive << ( i_0_reg_139 );

    SC_METHOD(thread_zext_ln1498_1_fu_204_p1);
    sensitive << ( tmp_3_fu_196_p3 );

    SC_METHOD(thread_zext_ln1498_2_fu_226_p1);
    sensitive << ( i_op_assign_reg_151 );

    SC_METHOD(thread_zext_ln1498_3_fu_235_p1);
    sensitive << ( add_ln1498_1_fu_230_p2 );

    SC_METHOD(thread_zext_ln1498_fu_192_p1);
    sensitive << ( tmp_2_fu_184_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln9_fu_167_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln10_fu_214_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "estimate_FR_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, elements_V_address0, "(port)elements_V_address0");
    sc_trace(mVcdFile, elements_V_ce0, "(port)elements_V_ce0");
    sc_trace(mVcdFile, elements_V_q0, "(port)elements_V_q0");
    sc_trace(mVcdFile, FR_V_address0, "(port)FR_V_address0");
    sc_trace(mVcdFile, FR_V_ce0, "(port)FR_V_ce0");
    sc_trace(mVcdFile, FR_V_we0, "(port)FR_V_we0");
    sc_trace(mVcdFile, FR_V_d0, "(port)FR_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_fu_173_p2, "i_fu_173_p2");
    sc_trace(mVcdFile, i_reg_271, "i_reg_271");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, zext_ln10_fu_179_p1, "zext_ln10_fu_179_p1");
    sc_trace(mVcdFile, zext_ln10_reg_276, "zext_ln10_reg_276");
    sc_trace(mVcdFile, icmp_ln9_fu_167_p2, "icmp_ln9_fu_167_p2");
    sc_trace(mVcdFile, add_ln1498_fu_208_p2, "add_ln1498_fu_208_p2");
    sc_trace(mVcdFile, add_ln1498_reg_288, "add_ln1498_reg_288");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, c_V_addr_1_reg_293, "c_V_addr_1_reg_293");
    sc_trace(mVcdFile, elements_V_load_reg_298, "elements_V_load_reg_298");
    sc_trace(mVcdFile, j_fu_219_p2, "j_fu_219_p2");
    sc_trace(mVcdFile, j_reg_306, "j_reg_306");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln10_fu_214_p2, "icmp_ln10_fu_214_p2");
    sc_trace(mVcdFile, c_V_address0, "c_V_address0");
    sc_trace(mVcdFile, c_V_ce0, "c_V_ce0");
    sc_trace(mVcdFile, c_V_we0, "c_V_we0");
    sc_trace(mVcdFile, c_V_d0, "c_V_d0");
    sc_trace(mVcdFile, c_V_q0, "c_V_q0");
    sc_trace(mVcdFile, i_0_reg_139, "i_0_reg_139");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, i_op_assign_reg_151, "i_op_assign_reg_151");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, zext_ln1498_3_fu_235_p1, "zext_ln1498_3_fu_235_p1");
    sc_trace(mVcdFile, nospikes_0_load_load_fu_251_p1, "nospikes_0_load_load_fu_251_p1");
    sc_trace(mVcdFile, FR_V_addr_gep_fu_130_p3, "FR_V_addr_gep_fu_130_p3");
    sc_trace(mVcdFile, nospikes_0_fu_62, "nospikes_0_fu_62");
    sc_trace(mVcdFile, icmp_ln1498_fu_240_p2, "icmp_ln1498_fu_240_p2");
    sc_trace(mVcdFile, r_V_fu_254_p2, "r_V_fu_254_p2");
    sc_trace(mVcdFile, tmp_2_fu_184_p3, "tmp_2_fu_184_p3");
    sc_trace(mVcdFile, tmp_3_fu_196_p3, "tmp_3_fu_196_p3");
    sc_trace(mVcdFile, zext_ln1498_1_fu_204_p1, "zext_ln1498_1_fu_204_p1");
    sc_trace(mVcdFile, zext_ln1498_fu_192_p1, "zext_ln1498_fu_192_p1");
    sc_trace(mVcdFile, zext_ln1498_2_fu_226_p1, "zext_ln1498_2_fu_226_p1");
    sc_trace(mVcdFile, add_ln1498_1_fu_230_p2, "add_ln1498_1_fu_230_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("estimate_FR.hdltvin.dat");
    mHdltvoutHandle.open("estimate_FR.hdltvout.dat");
}

estimate_FR::~estimate_FR() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete c_V_U;
}

void estimate_FR::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_139 = ap_const_lv7_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_0_reg_139 = i_reg_271.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_op_assign_reg_151 = j_reg_306.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_op_assign_reg_151 = ap_const_lv8_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        nospikes_0_fu_62 = icmp_ln1498_fu_240_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        nospikes_0_fu_62 = ap_const_lv1_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln1498_reg_288 = add_ln1498_fu_208_p2.read();
        c_V_addr_1_reg_293 =  (sc_lv<7>) (zext_ln10_reg_276.read());
        elements_V_load_reg_298 = elements_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_271 = i_fu_173_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_reg_306 = j_fu_219_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln9_fu_167_p2.read(), ap_const_lv1_0))) {
        zext_ln10_reg_276 = zext_ln10_fu_179_p1.read();
    }
}

void estimate_FR::thread_FR_V_addr_gep_fu_130_p3() {
    FR_V_addr_gep_fu_130_p3 =  (sc_lv<7>) (zext_ln10_reg_276.read());
}

void estimate_FR::thread_FR_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(nospikes_0_load_load_fu_251_p1.read(), ap_const_lv1_1)) {
            FR_V_address0 = FR_V_addr_gep_fu_130_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, nospikes_0_load_load_fu_251_p1.read())) {
            FR_V_address0 =  (sc_lv<7>) (zext_ln10_reg_276.read());
        } else {
            FR_V_address0 = "XXXXXXX";
        }
    } else {
        FR_V_address0 = "XXXXXXX";
    }
}

void estimate_FR::thread_FR_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, nospikes_0_load_load_fu_251_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(nospikes_0_load_load_fu_251_p1.read(), ap_const_lv1_1)))) {
        FR_V_ce0 = ap_const_logic_1;
    } else {
        FR_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR::thread_FR_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(nospikes_0_load_load_fu_251_p1.read(), ap_const_lv1_1)) {
            FR_V_d0 = ap_const_lv8_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, nospikes_0_load_load_fu_251_p1.read())) {
            FR_V_d0 = r_V_fu_254_p2.read();
        } else {
            FR_V_d0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        FR_V_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void estimate_FR::thread_FR_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, nospikes_0_load_load_fu_251_p1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(nospikes_0_load_load_fu_251_p1.read(), ap_const_lv1_1)))) {
        FR_V_we0 = ap_const_logic_1;
    } else {
        FR_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR::thread_add_ln1498_1_fu_230_p2() {
    add_ln1498_1_fu_230_p2 = (!add_ln1498_reg_288.read().is_01() || !zext_ln1498_2_fu_226_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln1498_reg_288.read()) + sc_biguint<13>(zext_ln1498_2_fu_226_p1.read()));
}

void estimate_FR::thread_add_ln1498_fu_208_p2() {
    add_ln1498_fu_208_p2 = (!zext_ln1498_1_fu_204_p1.read().is_01() || !zext_ln1498_fu_192_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln1498_1_fu_204_p1.read()) + sc_biguint<13>(zext_ln1498_fu_192_p1.read()));
}

void estimate_FR::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void estimate_FR::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void estimate_FR::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void estimate_FR::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void estimate_FR::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void estimate_FR::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void estimate_FR::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln9_fu_167_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void estimate_FR::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void estimate_FR::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln9_fu_167_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void estimate_FR::thread_c_V_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln10_fu_214_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln10_fu_214_p2.read(), ap_const_lv1_1)))) {
        c_V_address0 = c_V_addr_1_reg_293.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        c_V_address0 =  (sc_lv<7>) (ap_const_lv64_0);
    } else {
        c_V_address0 = "XXXXXXX";
    }
}

void estimate_FR::thread_c_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln10_fu_214_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(icmp_ln10_fu_214_p2.read(), ap_const_lv1_1)))) {
        c_V_ce0 = ap_const_logic_1;
    } else {
        c_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR::thread_c_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln10_fu_214_p2.read()))) {
        c_V_d0 = j_fu_219_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        c_V_d0 = ap_const_lv8_0;
    } else {
        c_V_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void estimate_FR::thread_c_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln10_fu_214_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)))) {
        c_V_we0 = ap_const_logic_1;
    } else {
        c_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR::thread_elements_V_address0() {
    elements_V_address0 =  (sc_lv<7>) (zext_ln10_fu_179_p1.read());
}

void estimate_FR::thread_elements_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        elements_V_ce0 = ap_const_logic_1;
    } else {
        elements_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR::thread_i_fu_173_p2() {
    i_fu_173_p2 = (!i_0_reg_139.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_0_reg_139.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void estimate_FR::thread_icmp_ln10_fu_214_p2() {
    icmp_ln10_fu_214_p2 = (!i_op_assign_reg_151.read().is_01() || !elements_V_load_reg_298.read().is_01())? sc_lv<1>(): sc_lv<1>(i_op_assign_reg_151.read() == elements_V_load_reg_298.read());
}

void estimate_FR::thread_icmp_ln1498_fu_240_p2() {
    icmp_ln1498_fu_240_p2 = (!spksTime_V_q0.read().is_01() || !ap_const_lv19_0.is_01())? sc_lv<1>(): sc_lv<1>(spksTime_V_q0.read() == ap_const_lv19_0);
}

void estimate_FR::thread_icmp_ln9_fu_167_p2() {
    icmp_ln9_fu_167_p2 = (!i_0_reg_139.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_139.read() == ap_const_lv7_60);
}

void estimate_FR::thread_j_fu_219_p2() {
    j_fu_219_p2 = (!i_op_assign_reg_151.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(i_op_assign_reg_151.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void estimate_FR::thread_nospikes_0_load_load_fu_251_p1() {
    nospikes_0_load_load_fu_251_p1 = nospikes_0_fu_62.read();
}

void estimate_FR::thread_r_V_fu_254_p2() {
    r_V_fu_254_p2 = (!ap_const_lv8_2.is_01())? sc_lv<8>(): c_V_q0.read() << (unsigned short)ap_const_lv8_2.to_uint();
}

void estimate_FR::thread_spksTime_V_address0() {
    spksTime_V_address0 =  (sc_lv<12>) (zext_ln1498_3_fu_235_p1.read());
}

void estimate_FR::thread_spksTime_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        spksTime_V_ce0 = ap_const_logic_1;
    } else {
        spksTime_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR::thread_tmp_2_fu_184_p3() {
    tmp_2_fu_184_p3 = esl_concat<7,5>(i_0_reg_139.read(), ap_const_lv5_0);
}

void estimate_FR::thread_tmp_3_fu_196_p3() {
    tmp_3_fu_196_p3 = esl_concat<7,3>(i_0_reg_139.read(), ap_const_lv3_0);
}

void estimate_FR::thread_zext_ln10_fu_179_p1() {
    zext_ln10_fu_179_p1 = esl_zext<64,7>(i_0_reg_139.read());
}

void estimate_FR::thread_zext_ln1498_1_fu_204_p1() {
    zext_ln1498_1_fu_204_p1 = esl_zext<13,10>(tmp_3_fu_196_p3.read());
}

void estimate_FR::thread_zext_ln1498_2_fu_226_p1() {
    zext_ln1498_2_fu_226_p1 = esl_zext<13,8>(i_op_assign_reg_151.read());
}

void estimate_FR::thread_zext_ln1498_3_fu_235_p1() {
    zext_ln1498_3_fu_235_p1 = esl_zext<64,13>(add_ln1498_1_fu_230_p2.read());
}

void estimate_FR::thread_zext_ln1498_fu_192_p1() {
    zext_ln1498_fu_192_p1 = esl_zext<13,12>(tmp_2_fu_184_p3.read());
}

void estimate_FR::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln9_fu_167_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln10_fu_214_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<6>) ("XXXXXX");
            break;
    }
}

void estimate_FR::thread_hdltv_gen() {
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
        mHdltvoutHandle << " , " <<  " \"elements_V_address0\" :  \"" << elements_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"elements_V_ce0\" :  \"" << elements_V_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"elements_V_q0\" :  \"" << elements_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"FR_V_address0\" :  \"" << FR_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"FR_V_ce0\" :  \"" << FR_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"FR_V_we0\" :  \"" << FR_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"FR_V_d0\" :  \"" << FR_V_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

