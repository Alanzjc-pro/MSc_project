#include "estimate_FR_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void estimate_FR_2::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
              esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state7.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage1_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
              esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
              esl_seteq<1,1,1>(ap_block_pp1_stage1_subdone.read(), ap_const_boolean_0)))) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
            ap_enable_reg_pp1_iter2 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state13.read()))) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp2_iter1 = ap_enable_reg_pp2_iter0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
            ap_enable_reg_pp2_iter1 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_0_0_reg_2540 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        i_0_0_reg_2540 = add_ln19_reg_7316.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvars_iv125_reg_2470 = ap_const_lv2_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        indvars_iv125_reg_2470 = add_ln12_5_reg_6920.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        indvars_iv206_reg_2517 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        indvars_iv206_reg_2517 = add_ln19_1_reg_7211.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        indvars_iv296_reg_2574 = ap_const_lv4_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        indvars_iv296_reg_2574 = add_ln31_6_reg_8085.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        indvars_iv316_reg_2562 = ap_const_lv4_2;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538_pp2_iter1_reg.read()))) {
        indvars_iv316_reg_2562 = add_ln31_7_reg_8090.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        indvars_iv369_reg_2551 = ap_const_lv2_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        indvars_iv369_reg_2551 = add_ln31_5_reg_7542.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvars_iv40_reg_2493 = ap_const_lv4_2;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        indvars_iv40_reg_2493 = add_ln12_6_fu_4371_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvars_iv60_reg_2481 = ap_const_lv4_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        indvars_iv60_reg_2481 = add_ln12_7_fu_4377_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_0_0_reg_2505 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        j_0_0_reg_2505 = add_ln12_4_reg_7192.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        k_0_0_reg_2586 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        k_0_0_reg_2586 = add_ln31_4_reg_8080.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        FR_0_V_load_2_reg_8095 = FR_0_V_q1.read();
        FR_0_V_load_3_reg_8155 = FR_0_V_q0.read();
        FR_10_V_load_2_reg_8145 = FR_10_V_q1.read();
        FR_10_V_load_3_reg_8205 = FR_10_V_q0.read();
        FR_11_V_load_2_reg_8150 = FR_11_V_q1.read();
        FR_11_V_load_3_reg_8210 = FR_11_V_q0.read();
        FR_1_V_load_2_reg_8100 = FR_1_V_q1.read();
        FR_1_V_load_3_reg_8160 = FR_1_V_q0.read();
        FR_2_V_load_2_reg_8105 = FR_2_V_q1.read();
        FR_2_V_load_3_reg_8165 = FR_2_V_q0.read();
        FR_3_V_load_2_reg_8110 = FR_3_V_q1.read();
        FR_3_V_load_3_reg_8170 = FR_3_V_q0.read();
        FR_4_V_load_2_reg_8115 = FR_4_V_q1.read();
        FR_4_V_load_3_reg_8175 = FR_4_V_q0.read();
        FR_5_V_load_2_reg_8120 = FR_5_V_q1.read();
        FR_5_V_load_3_reg_8180 = FR_5_V_q0.read();
        FR_6_V_load_2_reg_8125 = FR_6_V_q1.read();
        FR_6_V_load_3_reg_8185 = FR_6_V_q0.read();
        FR_7_V_load_2_reg_8130 = FR_7_V_q1.read();
        FR_7_V_load_3_reg_8190 = FR_7_V_q0.read();
        FR_8_V_load_2_reg_8135 = FR_8_V_q1.read();
        FR_8_V_load_3_reg_8195 = FR_8_V_q0.read();
        FR_9_V_load_2_reg_8140 = FR_9_V_q1.read();
        FR_9_V_load_3_reg_8200 = FR_9_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        add_ln12_4_reg_7192 = add_ln12_4_fu_4333_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        add_ln12_5_reg_6920 = add_ln12_5_fu_2608_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        add_ln19_1_reg_7211 = add_ln19_1_fu_4389_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_fu_4383_p2.read()))) {
        add_ln19_reg_7316 = add_ln19_fu_4411_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()))) {
        add_ln31_4_reg_8080 = add_ln31_4_fu_6610_p2.read();
        add_ln31_6_reg_8085 = add_ln31_6_fu_6616_p2.read();
        add_ln31_7_reg_8090 = add_ln31_7_fu_6622_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        add_ln31_5_reg_7542 = add_ln31_5_fu_4907_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(trunc_ln301_35_fu_4417_p1.read(), ap_const_lv1_1))) {
        cnt_0_V_addr_5_reg_7329 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(tmp_131_reg_7325.read(), ap_const_lv1_1))) {
        cnt_0_V_addr_6_reg_7478 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_45_fu_4537_p1.read()))) {
        cnt_10_V_addr_7_reg_7459 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_175_reg_7455.read()))) {
        cnt_10_V_addr_8_reg_7528 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_46_fu_4549_p1.read()))) {
        cnt_11_V_addr_8_reg_7473 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_181_reg_7468.read()))) {
        cnt_11_V_addr_9_reg_7533 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_36_fu_4429_p1.read()))) {
        cnt_1_V_addr_5_reg_7342 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_139_reg_7338.read()))) {
        cnt_1_V_addr_6_reg_7483 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_37_fu_4441_p1.read()))) {
        cnt_2_V_addr_5_reg_7355 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_146_reg_7351.read()))) {
        cnt_2_V_addr_6_reg_7488 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_38_fu_4453_p1.read()))) {
        cnt_3_V_addr_6_reg_7368 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_153_reg_7364.read()))) {
        cnt_3_V_addr_7_reg_7493 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_39_fu_4465_p1.read()))) {
        cnt_4_V_addr_6_reg_7381 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_160_reg_7377.read()))) {
        cnt_4_V_addr_7_reg_7498 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_40_fu_4477_p1.read()))) {
        cnt_5_V_addr_6_reg_7394 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_161_reg_7390.read()))) {
        cnt_5_V_addr_7_reg_7503 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_41_fu_4489_p1.read()))) {
        cnt_6_V_addr_6_reg_7407 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_162_reg_7403.read()))) {
        cnt_6_V_addr_7_reg_7508 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_42_fu_4501_p1.read()))) {
        cnt_7_V_addr_7_reg_7420 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_163_reg_7416.read()))) {
        cnt_7_V_addr_8_reg_7513 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_43_fu_4513_p1.read()))) {
        cnt_8_V_addr_7_reg_7433 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_164_reg_7429.read()))) {
        cnt_8_V_addr_8_reg_7518 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_44_fu_4525_p1.read()))) {
        cnt_9_V_addr_7_reg_7446 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_169_reg_7442.read()))) {
        cnt_9_V_addr_8_reg_7523 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln12_reg_6916 = icmp_ln12_fu_2602_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln19_reg_7207 = icmp_ln19_fu_4383_p2.read();
        icmp_ln19_reg_7207_pp1_iter1_reg = icmp_ln19_reg_7207.read();
        zext_ln20_reg_7216_pp1_iter1_reg = zext_ln20_reg_7216.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln31_reg_7538 = icmp_ln31_fu_4901_p2.read();
        icmp_ln31_reg_7538_pp2_iter1_reg = icmp_ln31_reg_7538.read();
        zext_ln36_1_reg_7567_pp2_iter1_reg = zext_ln36_1_reg_7567.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln12_fu_2602_p2.read(), ap_const_lv1_0))) {
        or_ln12_2_reg_6970 = or_ln12_2_fu_2831_p2.read();
        or_ln12_reg_6935 = or_ln12_fu_2655_p2.read();
        tmp_108_reg_7005 = mul_ln321_16_fu_2884_p2.read().range(15, 11);
        tmp_113_reg_7010 = mul_ln321_17_fu_2910_p2.read().range(15, 11);
        tmp_114_reg_7015 = mul_ln321_18_fu_2936_p2.read().range(15, 11);
        tmp_115_reg_7020 = mul_ln321_19_fu_2962_p2.read().range(15, 11);
        tmp_26_reg_6930 = mul_ln321_fu_2639_p2.read().range(13, 10);
        tmp_90_reg_6950 = mul_ln321_8_fu_2737_p2.read().range(13, 10);
        tmp_91_reg_6955 = mul_ln321_9_fu_2763_p2.read().range(13, 10);
        tmp_92_reg_6960 = mul_ln321_10_fu_2789_p2.read().range(13, 10);
        tmp_93_reg_6965 = mul_ln321_11_fu_2815_p2.read().range(13, 10);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()))) {
        or_ln31_1_reg_7654 = or_ln31_1_fu_5260_p2.read();
        or_ln31_2_reg_7699 = or_ln31_2_fu_5412_p2.read();
        or_ln31_reg_7609 = or_ln31_fu_5108_p2.read();
        shl_ln32_8_reg_7824 = shl_ln32_8_fu_5590_p3.read();
        tmp_165_reg_7830 = mul_ln555_16_fu_5602_p2.read().range(15, 11);
        tmp_166_reg_7835 = mul_ln555_17_fu_5628_p2.read().range(15, 11);
        zext_ln36_1_reg_7567 = zext_ln36_1_fu_5095_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207_pp1_iter1_reg.read()))) {
        p_090_0217_0_reg_2528 = tmp_181_reg_7468_pp1_iter1_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0))) {
        tmp_116_reg_7100 = tmp_116_fu_3789_p3.read();
        tmp_117_reg_7112 = mul_ln321_20_fu_3805_p2.read().range(15, 11);
        trunc_ln301_17_reg_7040 = trunc_ln301_17_fu_3681_p1.read();
        trunc_ln301_18_reg_7045 = counts_6_q0.read().range(13, 8);
        trunc_ln301_19_reg_7050 = counts_6_q0.read().range(21, 16);
        trunc_ln301_20_reg_7060 = trunc_ln301_20_fu_3715_p1.read();
        trunc_ln301_21_reg_7065 = counts_7_q0.read().range(13, 8);
        trunc_ln301_22_reg_7070 = counts_7_q0.read().range(21, 16);
        trunc_ln301_23_reg_7080 = trunc_ln301_23_fu_3749_p1.read();
        trunc_ln301_24_reg_7085 = counts_8_q0.read().range(13, 8);
        trunc_ln301_25_reg_7090 = counts_8_q0.read().range(21, 16);
        trunc_ln301_26_reg_7107 = trunc_ln301_26_fu_3797_p1.read();
        trunc_ln301_27_reg_7117 = counts_9_q0.read().range(13, 8);
        trunc_ln301_28_reg_7122 = counts_9_q0.read().range(21, 16);
        trunc_ln301_29_reg_7132 = trunc_ln301_29_fu_3851_p1.read();
        trunc_ln301_30_reg_7137 = counts_10_q0.read().range(13, 8);
        trunc_ln301_31_reg_7142 = counts_10_q0.read().range(21, 16);
        trunc_ln301_32_reg_7152 = trunc_ln301_32_fu_3885_p1.read();
        trunc_ln301_33_reg_7157 = counts_11_q0.read().range(13, 8);
        trunc_ln301_34_reg_7162 = counts_11_q0.read().range(21, 16);
        trunc_ln302_10_reg_7167 = counts_11_q0.read().range(29, 24);
        trunc_ln302_6_reg_7055 = counts_6_q0.read().range(29, 24);
        trunc_ln302_7_reg_7075 = counts_7_q0.read().range(29, 24);
        trunc_ln302_8_reg_7095 = counts_8_q0.read().range(29, 24);
        trunc_ln302_9_reg_7127 = counts_9_q0.read().range(29, 24);
        trunc_ln302_s_reg_7147 = counts_10_q0.read().range(29, 24);
    }
    if ((esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        tmp_127_reg_7172 = mul_ln321_28_fu_4239_p2.read().range(15, 11);
        tmp_128_reg_7177 = mul_ln321_29_fu_4265_p2.read().range(15, 11);
        tmp_129_reg_7182 = mul_ln321_30_fu_4291_p2.read().range(15, 11);
        tmp_130_reg_7187 = mul_ln321_31_fu_4317_p2.read().range(15, 11);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()))) {
        tmp_131_reg_7325 = inputs_0_q0.read().range(1, 1);
        tmp_139_reg_7338 = inputs_1_q0.read().range(1, 1);
        tmp_146_reg_7351 = inputs_2_q0.read().range(1, 1);
        tmp_153_reg_7364 = inputs_3_q0.read().range(1, 1);
        tmp_160_reg_7377 = inputs_4_q0.read().range(1, 1);
        tmp_161_reg_7390 = inputs_5_q0.read().range(1, 1);
        tmp_162_reg_7403 = inputs_6_q0.read().range(1, 1);
        tmp_163_reg_7416 = inputs_7_q0.read().range(1, 1);
        tmp_164_reg_7429 = inputs_8_q0.read().range(1, 1);
        tmp_169_reg_7442 = inputs_9_q0.read().range(1, 1);
        tmp_175_reg_7455 = inputs_10_q0.read().range(1, 1);
        trunc_ln301_35_reg_7321 = trunc_ln301_35_fu_4417_p1.read();
        trunc_ln301_36_reg_7334 = trunc_ln301_36_fu_4429_p1.read();
        trunc_ln301_37_reg_7347 = trunc_ln301_37_fu_4441_p1.read();
        trunc_ln301_38_reg_7360 = trunc_ln301_38_fu_4453_p1.read();
        trunc_ln301_39_reg_7373 = trunc_ln301_39_fu_4465_p1.read();
        trunc_ln301_40_reg_7386 = trunc_ln301_40_fu_4477_p1.read();
        trunc_ln301_41_reg_7399 = trunc_ln301_41_fu_4489_p1.read();
        trunc_ln301_42_reg_7412 = trunc_ln301_42_fu_4501_p1.read();
        trunc_ln301_43_reg_7425 = trunc_ln301_43_fu_4513_p1.read();
        trunc_ln301_44_reg_7438 = trunc_ln301_44_fu_4525_p1.read();
        trunc_ln301_45_reg_7451 = trunc_ln301_45_fu_4537_p1.read();
        trunc_ln301_46_reg_7464 = trunc_ln301_46_fu_4549_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0))) {
        tmp_131_reg_7325_pp1_iter1_reg = tmp_131_reg_7325.read();
        tmp_139_reg_7338_pp1_iter1_reg = tmp_139_reg_7338.read();
        tmp_146_reg_7351_pp1_iter1_reg = tmp_146_reg_7351.read();
        tmp_153_reg_7364_pp1_iter1_reg = tmp_153_reg_7364.read();
        tmp_160_reg_7377_pp1_iter1_reg = tmp_160_reg_7377.read();
        tmp_161_reg_7390_pp1_iter1_reg = tmp_161_reg_7390.read();
        tmp_162_reg_7403_pp1_iter1_reg = tmp_162_reg_7403.read();
        tmp_163_reg_7416_pp1_iter1_reg = tmp_163_reg_7416.read();
        tmp_164_reg_7429_pp1_iter1_reg = tmp_164_reg_7429.read();
        tmp_169_reg_7442_pp1_iter1_reg = tmp_169_reg_7442.read();
        tmp_175_reg_7455_pp1_iter1_reg = tmp_175_reg_7455.read();
        tmp_181_reg_7468_pp1_iter1_reg = tmp_181_reg_7468.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()))) {
        tmp_181_reg_7468 = inputs_11_q0.read().range(1, 1);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_fu_4383_p2.read()))) {
        zext_ln20_reg_7216 = zext_ln20_fu_4395_p1.read();
    }
}

void estimate_FR_2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln12_fu_2602_p2.read(), ap_const_lv1_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln12_fu_2602_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln19_fu_4383_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage1;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln19_fu_4383_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state12;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 64 : 
            if (esl_seteq<1,1,1>(ap_block_pp1_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage1;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln31_fu_4901_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp2_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln31_fu_4901_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state17;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            }
            break;
        case 512 : 
            if ((esl_seteq<1,1,1>(ap_block_pp2_stage1_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state17;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp2_stage1;
            }
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<11>) ("XXXXXXXXXXX");
            break;
    }
}

}

