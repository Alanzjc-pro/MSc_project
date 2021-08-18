#include "estimate_FR_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void estimate_FR_2::thread_FR_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_0_V_address0 =  (sc_lv<3>) (zext_ln555_36_fu_6192_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_0_V_address0 =  (sc_lv<3>) (zext_ln555_fu_4957_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_0_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_0_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_0_V_address1 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_0_V_address1 =  (sc_lv<3>) (zext_ln555_12_fu_5450_p1.read());
        } else {
            FR_0_V_address1 = "XXX";
        }
    } else {
        FR_0_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_0_V_ce0 = ap_const_logic_1;
    } else {
        FR_0_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_0_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_0_V_ce1 = ap_const_logic_1;
    } else {
        FR_0_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_0_V_d0() {
    FR_0_V_d0 = (!zext_ln209_fu_4651_p1.read().is_01() || !zext_ln209_1_fu_4655_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_fu_4651_p1.read()) + sc_biguint<7>(zext_ln209_1_fu_4655_p1.read()));
}

void estimate_FR_2::thread_FR_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(tmp_131_reg_7325_pp1_iter1_reg.read(), ap_const_lv1_1))) {
        FR_0_V_we0 = ap_const_logic_1;
    } else {
        FR_0_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_10_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_10_V_address0 =  (sc_lv<3>) (zext_ln555_46_fu_6568_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_10_V_address0 =  (sc_lv<3>) (zext_ln555_10_fu_5370_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_10_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_10_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_10_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_10_V_address1 =  (sc_lv<3>) (zext_ln555_34_fu_6113_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_10_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
        } else {
            FR_10_V_address1 = "XXX";
        }
    } else {
        FR_10_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_10_V_ce0 = ap_const_logic_1;
    } else {
        FR_10_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_10_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_10_V_ce1 = ap_const_logic_1;
    } else {
        FR_10_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_10_V_d0() {
    FR_10_V_d0 = (!zext_ln209_20_fu_4861_p1.read().is_01() || !zext_ln209_21_fu_4865_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_20_fu_4861_p1.read()) + sc_biguint<7>(zext_ln209_21_fu_4865_p1.read()));
}

void estimate_FR_2::thread_FR_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_175_reg_7455_pp1_iter1_reg.read()))) {
        FR_10_V_we0 = ap_const_logic_1;
    } else {
        FR_10_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_11_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_11_V_address0 =  (sc_lv<3>) (zext_ln555_47_fu_6604_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_11_V_address0 =  (sc_lv<3>) (zext_ln555_11_fu_5406_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_11_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_11_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_11_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_11_V_address1 =  (sc_lv<3>) (zext_ln555_35_fu_6148_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_11_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
        } else {
            FR_11_V_address1 = "XXX";
        }
    } else {
        FR_11_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_11_V_ce0 = ap_const_logic_1;
    } else {
        FR_11_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_11_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_11_V_ce1 = ap_const_logic_1;
    } else {
        FR_11_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_11_V_d0() {
    FR_11_V_d0 = (!zext_ln209_22_fu_4882_p1.read().is_01() || !zext_ln209_23_fu_4886_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_22_fu_4882_p1.read()) + sc_biguint<7>(zext_ln209_23_fu_4886_p1.read()));
}

void estimate_FR_2::thread_FR_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_181_reg_7468_pp1_iter1_reg.read()))) {
        FR_11_V_we0 = ap_const_logic_1;
    } else {
        FR_11_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_1_V_address0 =  (sc_lv<3>) (zext_ln555_37_fu_6228_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_1_V_address0 =  (sc_lv<3>) (zext_ln555_1_fu_5001_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_1_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_1_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_1_V_address1 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_1_V_address1 =  (sc_lv<3>) (zext_ln555_13_fu_5486_p1.read());
        } else {
            FR_1_V_address1 = "XXX";
        }
    } else {
        FR_1_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_1_V_ce0 = ap_const_logic_1;
    } else {
        FR_1_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_1_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_1_V_ce1 = ap_const_logic_1;
    } else {
        FR_1_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_1_V_d0() {
    FR_1_V_d0 = (!zext_ln209_2_fu_4672_p1.read().is_01() || !zext_ln209_3_fu_4676_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_2_fu_4672_p1.read()) + sc_biguint<7>(zext_ln209_3_fu_4676_p1.read()));
}

void estimate_FR_2::thread_FR_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_139_reg_7338_pp1_iter1_reg.read()))) {
        FR_1_V_we0 = ap_const_logic_1;
    } else {
        FR_1_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_2_V_address0 =  (sc_lv<3>) (zext_ln555_38_fu_6264_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_2_V_address0 =  (sc_lv<3>) (zext_ln555_2_fu_5045_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_2_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_2_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_2_V_address1 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_2_V_address1 =  (sc_lv<3>) (zext_ln555_14_fu_5522_p1.read());
        } else {
            FR_2_V_address1 = "XXX";
        }
    } else {
        FR_2_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_2_V_ce0 = ap_const_logic_1;
    } else {
        FR_2_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_2_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_2_V_ce1 = ap_const_logic_1;
    } else {
        FR_2_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_2_V_d0() {
    FR_2_V_d0 = (!zext_ln209_4_fu_4693_p1.read().is_01() || !zext_ln209_5_fu_4697_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_4_fu_4693_p1.read()) + sc_biguint<7>(zext_ln209_5_fu_4697_p1.read()));
}

void estimate_FR_2::thread_FR_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_146_reg_7351_pp1_iter1_reg.read()))) {
        FR_2_V_we0 = ap_const_logic_1;
    } else {
        FR_2_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_3_V_address0 =  (sc_lv<3>) (zext_ln555_39_fu_6300_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_3_V_address0 =  (sc_lv<3>) (zext_ln555_3_fu_5089_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_3_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_3_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_3_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_3_V_address1 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_3_V_address1 =  (sc_lv<3>) (zext_ln555_15_fu_5558_p1.read());
        } else {
            FR_3_V_address1 = "XXX";
        }
    } else {
        FR_3_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_3_V_ce0 = ap_const_logic_1;
    } else {
        FR_3_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_3_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_3_V_ce1 = ap_const_logic_1;
    } else {
        FR_3_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_3_V_d0() {
    FR_3_V_d0 = (!zext_ln209_6_fu_4714_p1.read().is_01() || !zext_ln209_7_fu_4718_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_6_fu_4714_p1.read()) + sc_biguint<7>(zext_ln209_7_fu_4718_p1.read()));
}

void estimate_FR_2::thread_FR_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_153_reg_7364_pp1_iter1_reg.read()))) {
        FR_3_V_we0 = ap_const_logic_1;
    } else {
        FR_3_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_4_V_address0 =  (sc_lv<3>) (zext_ln555_40_fu_6344_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_4_V_address0 =  (sc_lv<3>) (zext_ln555_4_fu_5146_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_4_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_4_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_4_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_4_V_address1 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_4_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
        } else {
            FR_4_V_address1 = "XXX";
        }
    } else {
        FR_4_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_4_V_ce0 = ap_const_logic_1;
    } else {
        FR_4_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_4_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_4_V_ce1 = ap_const_logic_1;
    } else {
        FR_4_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_4_V_d0() {
    FR_4_V_d0 = (!zext_ln209_8_fu_4735_p1.read().is_01() || !zext_ln209_9_fu_4739_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_8_fu_4735_p1.read()) + sc_biguint<7>(zext_ln209_9_fu_4739_p1.read()));
}

void estimate_FR_2::thread_FR_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_160_reg_7377_pp1_iter1_reg.read()))) {
        FR_4_V_we0 = ap_const_logic_1;
    } else {
        FR_4_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_5_V_address0 =  (sc_lv<3>) (zext_ln555_41_fu_6380_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_5_V_address0 =  (sc_lv<3>) (zext_ln555_5_fu_5182_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_5_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_5_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_5_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_5_V_address1 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_5_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
        } else {
            FR_5_V_address1 = "XXX";
        }
    } else {
        FR_5_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_5_V_ce0 = ap_const_logic_1;
    } else {
        FR_5_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_5_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_5_V_ce1 = ap_const_logic_1;
    } else {
        FR_5_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_5_V_d0() {
    FR_5_V_d0 = (!zext_ln209_10_fu_4756_p1.read().is_01() || !zext_ln209_11_fu_4760_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_10_fu_4756_p1.read()) + sc_biguint<7>(zext_ln209_11_fu_4760_p1.read()));
}

void estimate_FR_2::thread_FR_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_161_reg_7390_pp1_iter1_reg.read()))) {
        FR_5_V_we0 = ap_const_logic_1;
    } else {
        FR_5_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_6_V_address0 =  (sc_lv<3>) (zext_ln555_42_fu_6416_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_6_V_address0 =  (sc_lv<3>) (zext_ln555_6_fu_5218_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_6_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_6_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_6_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_6_V_address1 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_6_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
        } else {
            FR_6_V_address1 = "XXX";
        }
    } else {
        FR_6_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_6_V_ce0 = ap_const_logic_1;
    } else {
        FR_6_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_6_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_6_V_ce1 = ap_const_logic_1;
    } else {
        FR_6_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_6_V_d0() {
    FR_6_V_d0 = (!zext_ln209_12_fu_4777_p1.read().is_01() || !zext_ln209_13_fu_4781_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_12_fu_4777_p1.read()) + sc_biguint<7>(zext_ln209_13_fu_4781_p1.read()));
}

void estimate_FR_2::thread_FR_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_162_reg_7403_pp1_iter1_reg.read()))) {
        FR_6_V_we0 = ap_const_logic_1;
    } else {
        FR_6_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_7_V_address0 =  (sc_lv<3>) (zext_ln555_43_fu_6452_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_7_V_address0 =  (sc_lv<3>) (zext_ln555_7_fu_5254_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_7_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_7_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_7_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_7_V_address1 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_7_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
        } else {
            FR_7_V_address1 = "XXX";
        }
    } else {
        FR_7_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_7_V_ce0 = ap_const_logic_1;
    } else {
        FR_7_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_7_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_7_V_ce1 = ap_const_logic_1;
    } else {
        FR_7_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_7_V_d0() {
    FR_7_V_d0 = (!zext_ln209_14_fu_4798_p1.read().is_01() || !zext_ln209_15_fu_4802_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_14_fu_4798_p1.read()) + sc_biguint<7>(zext_ln209_15_fu_4802_p1.read()));
}

void estimate_FR_2::thread_FR_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_163_reg_7416_pp1_iter1_reg.read()))) {
        FR_7_V_we0 = ap_const_logic_1;
    } else {
        FR_7_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_8_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_8_V_address0 =  (sc_lv<3>) (zext_ln555_44_fu_6496_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_8_V_address0 =  (sc_lv<3>) (zext_ln555_8_fu_5298_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_8_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_8_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_8_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_8_V_address1 =  (sc_lv<3>) (zext_ln555_32_fu_6069_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_8_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
        } else {
            FR_8_V_address1 = "XXX";
        }
    } else {
        FR_8_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_8_V_ce0 = ap_const_logic_1;
    } else {
        FR_8_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_8_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_8_V_ce1 = ap_const_logic_1;
    } else {
        FR_8_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_8_V_d0() {
    FR_8_V_d0 = (!zext_ln209_16_fu_4819_p1.read().is_01() || !zext_ln209_17_fu_4823_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_16_fu_4819_p1.read()) + sc_biguint<7>(zext_ln209_17_fu_4823_p1.read()));
}

void estimate_FR_2::thread_FR_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_164_reg_7429_pp1_iter1_reg.read()))) {
        FR_8_V_we0 = ap_const_logic_1;
    } else {
        FR_8_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        FR_9_V_address0 =  (sc_lv<3>) (zext_ln555_45_fu_6532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        FR_9_V_address0 =  (sc_lv<3>) (zext_ln555_9_fu_5334_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        FR_9_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else {
        FR_9_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_FR_9_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            FR_9_V_address1 =  (sc_lv<3>) (zext_ln555_33_fu_6078_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            FR_9_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
        } else {
            FR_9_V_address1 = "XXX";
        }
    } else {
        FR_9_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_FR_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        FR_9_V_ce0 = ap_const_logic_1;
    } else {
        FR_9_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_9_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        FR_9_V_ce1 = ap_const_logic_1;
    } else {
        FR_9_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_FR_9_V_d0() {
    FR_9_V_d0 = (!zext_ln209_18_fu_4840_p1.read().is_01() || !zext_ln209_19_fu_4844_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_18_fu_4840_p1.read()) + sc_biguint<7>(zext_ln209_19_fu_4844_p1.read()));
}

void estimate_FR_2::thread_FR_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_169_reg_7442_pp1_iter1_reg.read()))) {
        FR_9_V_we0 = ap_const_logic_1;
    } else {
        FR_9_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_add_ln12_1_fu_3783_p2() {
    add_ln12_1_fu_3783_p2 = (!j_0_0_reg_2505.read().is_01() || !ap_const_lv5_9.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_0_reg_2505.read()) + sc_biguint<5>(ap_const_lv5_9));
}

void estimate_FR_2::thread_add_ln12_2_fu_4073_p2() {
    add_ln12_2_fu_4073_p2 = (!j_0_0_reg_2505.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_0_reg_2505.read()) + sc_biguint<5>(ap_const_lv5_A));
}

void estimate_FR_2::thread_add_ln12_3_fu_4221_p2() {
    add_ln12_3_fu_4221_p2 = (!j_0_0_reg_2505.read().is_01() || !ap_const_lv5_B.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_0_reg_2505.read()) + sc_biguint<5>(ap_const_lv5_B));
}

void estimate_FR_2::thread_add_ln12_4_fu_4333_p2() {
    add_ln12_4_fu_4333_p2 = (!j_0_0_reg_2505.read().is_01() || !ap_const_lv5_C.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_0_reg_2505.read()) + sc_biguint<5>(ap_const_lv5_C));
}

void estimate_FR_2::thread_add_ln12_5_fu_2608_p2() {
    add_ln12_5_fu_2608_p2 = (!ap_const_lv2_1.is_01() || !ap_phi_mux_indvars_iv125_phi_fu_2474_p4.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(ap_phi_mux_indvars_iv125_phi_fu_2474_p4.read()));
}

void estimate_FR_2::thread_add_ln12_6_fu_4371_p2() {
    add_ln12_6_fu_4371_p2 = (!indvars_iv40_reg_2493.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<4>(): (sc_biguint<4>(indvars_iv40_reg_2493.read()) + sc_biguint<4>(ap_const_lv4_4));
}

void estimate_FR_2::thread_add_ln12_7_fu_4377_p2() {
    add_ln12_7_fu_4377_p2 = (!indvars_iv60_reg_2481.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<4>(): (sc_biguint<4>(indvars_iv60_reg_2481.read()) + sc_biguint<4>(ap_const_lv4_4));
}

void estimate_FR_2::thread_add_ln12_fu_2866_p2() {
    add_ln12_fu_2866_p2 = (!ap_phi_mux_j_0_0_phi_fu_2509_p4.read().is_01() || !ap_const_lv5_8.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_j_0_0_phi_fu_2509_p4.read()) + sc_biguint<5>(ap_const_lv5_8));
}

void estimate_FR_2::thread_add_ln19_1_fu_4389_p2() {
    add_ln19_1_fu_4389_p2 = (!ap_phi_mux_indvars_iv206_phi_fu_2521_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_indvars_iv206_phi_fu_2521_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void estimate_FR_2::thread_add_ln19_fu_4411_p2() {
    add_ln19_fu_4411_p2 = (!ap_phi_mux_i_0_0_phi_fu_2544_p4.read().is_01() || !ap_const_lv7_C.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_0_0_phi_fu_2544_p4.read()) + sc_biguint<7>(ap_const_lv7_C));
}

void estimate_FR_2::thread_add_ln31_1_fu_6154_p2() {
    add_ln31_1_fu_6154_p2 = (!k_0_0_reg_2586.read().is_01() || !ap_const_lv5_9.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_0_reg_2586.read()) + sc_biguint<5>(ap_const_lv5_9));
}

void estimate_FR_2::thread_add_ln31_2_fu_6306_p2() {
    add_ln31_2_fu_6306_p2 = (!k_0_0_reg_2586.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_0_reg_2586.read()) + sc_biguint<5>(ap_const_lv5_A));
}

void estimate_FR_2::thread_add_ln31_3_fu_6458_p2() {
    add_ln31_3_fu_6458_p2 = (!k_0_0_reg_2586.read().is_01() || !ap_const_lv5_B.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_0_reg_2586.read()) + sc_biguint<5>(ap_const_lv5_B));
}

void estimate_FR_2::thread_add_ln31_4_fu_6610_p2() {
    add_ln31_4_fu_6610_p2 = (!k_0_0_reg_2586.read().is_01() || !ap_const_lv5_C.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_0_reg_2586.read()) + sc_biguint<5>(ap_const_lv5_C));
}

void estimate_FR_2::thread_add_ln31_5_fu_4907_p2() {
    add_ln31_5_fu_4907_p2 = (!ap_const_lv2_1.is_01() || !ap_phi_mux_indvars_iv369_phi_fu_2555_p4.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(ap_phi_mux_indvars_iv369_phi_fu_2555_p4.read()));
}

void estimate_FR_2::thread_add_ln31_6_fu_6616_p2() {
    add_ln31_6_fu_6616_p2 = (!indvars_iv296_reg_2574.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<4>(): (sc_biguint<4>(indvars_iv296_reg_2574.read()) + sc_biguint<4>(ap_const_lv4_4));
}

void estimate_FR_2::thread_add_ln31_7_fu_6622_p2() {
    add_ln31_7_fu_6622_p2 = (!ap_phi_mux_indvars_iv316_phi_fu_2566_p4.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<4>(): (sc_biguint<4>(ap_phi_mux_indvars_iv316_phi_fu_2566_p4.read()) + sc_biguint<4>(ap_const_lv4_4));
}

void estimate_FR_2::thread_add_ln31_fu_5584_p2() {
    add_ln31_fu_5584_p2 = (!ap_phi_mux_k_0_0_phi_fu_2590_p4.read().is_01() || !ap_const_lv5_8.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_0_0_phi_fu_2590_p4.read()) + sc_biguint<5>(ap_const_lv5_8));
}

void estimate_FR_2::thread_add_ln700_10_fu_4631_p2() {
    add_ln700_10_fu_4631_p2 = (!cnt_10_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_10_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_11_fu_4638_p2() {
    add_ln700_11_fu_4638_p2 = (!cnt_11_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_11_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_1_fu_4568_p2() {
    add_ln700_1_fu_4568_p2 = (!cnt_1_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_1_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_2_fu_4575_p2() {
    add_ln700_2_fu_4575_p2 = (!cnt_2_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_2_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_3_fu_4582_p2() {
    add_ln700_3_fu_4582_p2 = (!cnt_3_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_3_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_4_fu_4589_p2() {
    add_ln700_4_fu_4589_p2 = (!cnt_4_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_4_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_5_fu_4596_p2() {
    add_ln700_5_fu_4596_p2 = (!cnt_5_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_5_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_6_fu_4603_p2() {
    add_ln700_6_fu_4603_p2 = (!cnt_6_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_6_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_7_fu_4610_p2() {
    add_ln700_7_fu_4610_p2 = (!cnt_7_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_7_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_8_fu_4617_p2() {
    add_ln700_8_fu_4617_p2 = (!cnt_8_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_8_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_9_fu_4624_p2() {
    add_ln700_9_fu_4624_p2 = (!cnt_9_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_9_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_add_ln700_fu_4561_p2() {
    add_ln700_fu_4561_p2 = (!cnt_0_V_q0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(cnt_0_V_q0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void estimate_FR_2::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void estimate_FR_2::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void estimate_FR_2::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[3];
}

void estimate_FR_2::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[5];
}

void estimate_FR_2::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[6];
}

void estimate_FR_2::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[8];
}

void estimate_FR_2::thread_ap_CS_fsm_pp2_stage1() {
    ap_CS_fsm_pp2_stage1 = ap_CS_fsm.read()[9];
}

void estimate_FR_2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void estimate_FR_2::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[7];
}

void estimate_FR_2::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[10];
}

void estimate_FR_2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[4];
}

void estimate_FR_2::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp1_stage1() {
    ap_block_pp1_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp1_stage1_11001() {
    ap_block_pp1_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp1_stage1_subdone() {
    ap_block_pp1_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp2_stage1() {
    ap_block_pp2_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp2_stage1_11001() {
    ap_block_pp2_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_pp2_stage1_subdone() {
    ap_block_pp2_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state10_pp1_stage1_iter1() {
    ap_block_state10_pp1_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state11_pp1_stage0_iter2() {
    ap_block_state11_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state13_pp2_stage0_iter0() {
    ap_block_state13_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state14_pp2_stage1_iter0() {
    ap_block_state14_pp2_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state15_pp2_stage0_iter1() {
    ap_block_state15_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state16_pp2_stage1_iter1() {
    ap_block_state16_pp2_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state5_pp0_stage0_iter1() {
    ap_block_state5_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state7_pp1_stage0_iter0() {
    ap_block_state7_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state8_pp1_stage1_iter0() {
    ap_block_state8_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state9_pp1_stage0_iter1() {
    ap_block_state9_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_condition_1634() {
    ap_condition_1634 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0));
}

void estimate_FR_2::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln12_fu_2602_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_condition_pp1_exit_iter0_state7() {
    if (esl_seteq<1,1,1>(icmp_ln19_fu_4383_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state7 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state7 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_condition_pp2_exit_iter0_state13() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln31_fu_4901_p2.read())) {
        ap_condition_pp2_exit_iter0_state13 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state13 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void estimate_FR_2::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void estimate_FR_2::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void estimate_FR_2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_phi_mux_i_0_0_phi_fu_2544_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_0_phi_fu_2544_p4 = add_ln19_reg_7316.read();
    } else {
        ap_phi_mux_i_0_0_phi_fu_2544_p4 = i_0_0_reg_2540.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_indvars_iv125_phi_fu_2474_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvars_iv125_phi_fu_2474_p4 = add_ln12_5_reg_6920.read();
    } else {
        ap_phi_mux_indvars_iv125_phi_fu_2474_p4 = indvars_iv125_reg_2470.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_indvars_iv206_phi_fu_2521_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln19_reg_7207.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvars_iv206_phi_fu_2521_p4 = add_ln19_1_reg_7211.read();
    } else {
        ap_phi_mux_indvars_iv206_phi_fu_2521_p4 = indvars_iv206_reg_2517.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_indvars_iv296_phi_fu_2578_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvars_iv296_phi_fu_2578_p4 = add_ln31_6_reg_8085.read();
    } else {
        ap_phi_mux_indvars_iv296_phi_fu_2578_p4 = indvars_iv296_reg_2574.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_indvars_iv316_phi_fu_2566_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538_pp2_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvars_iv316_phi_fu_2566_p4 = add_ln31_7_reg_8090.read();
    } else {
        ap_phi_mux_indvars_iv316_phi_fu_2566_p4 = indvars_iv316_reg_2562.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_indvars_iv369_phi_fu_2555_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvars_iv369_phi_fu_2555_p4 = add_ln31_5_reg_7542.read();
    } else {
        ap_phi_mux_indvars_iv369_phi_fu_2555_p4 = indvars_iv369_reg_2551.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_j_0_0_phi_fu_2509_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_j_0_0_phi_fu_2509_p4 = add_ln12_4_reg_7192.read();
    } else {
        ap_phi_mux_j_0_0_phi_fu_2509_p4 = j_0_0_reg_2505.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_k_0_0_phi_fu_2590_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_0_0_phi_fu_2590_p4 = add_ln31_4_reg_8080.read();
    } else {
        ap_phi_mux_k_0_0_phi_fu_2590_p4 = k_0_0_reg_2586.read();
    }
}

void estimate_FR_2::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void estimate_FR_2::thread_cnt_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_0_V_address0 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_0_V_address0 =  (sc_lv<3>) (zext_ln555_fu_4957_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_0_V_address0 = cnt_0_V_addr_5_reg_7329.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_0_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_0_V_address0 =  (sc_lv<3>) (zext_ln321_24_fu_3919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_0_V_address0 =  (sc_lv<3>) (zext_ln321_fu_2998_p1.read());
    } else {
        cnt_0_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_0_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_0_V_address1 =  (sc_lv<3>) (zext_ln555_36_fu_6192_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_0_V_address1 =  (sc_lv<3>) (zext_ln555_12_fu_5450_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_0_V_address1 = cnt_0_V_addr_6_reg_7478.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_0_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_0_V_address1 =  (sc_lv<3>) (zext_ln321_36_fu_3966_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_0_V_address1 =  (sc_lv<3>) (zext_ln321_12_fu_3450_p1.read());
    } else {
        cnt_0_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_0_V_ce0 = ap_const_logic_1;
    } else {
        cnt_0_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_0_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_0_V_ce1 = ap_const_logic_1;
    } else {
        cnt_0_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_0_V_d0 = add_ln700_fu_4561_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_0_V_d0 = trunc_ln301_17_reg_7040.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_0_V_d0 = trunc_ln301_fu_2990_p1.read();
    } else {
        cnt_0_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_0_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_0_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_0_V_d1 = trunc_ln301_26_reg_7107.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_0_V_d1 = trunc_ln301_8_fu_3421_p1.read();
    } else {
        cnt_0_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(trunc_ln301_35_reg_7321.read(), ap_const_lv1_1)))) {
        cnt_0_V_we0 = ap_const_logic_1;
    } else {
        cnt_0_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_0_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(tmp_131_reg_7325_pp1_iter1_reg.read(), ap_const_lv1_1)))) {
        cnt_0_V_we1 = ap_const_logic_1;
    } else {
        cnt_0_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_10_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_10_V_address0 =  (sc_lv<3>) (zext_ln555_34_fu_6113_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_10_V_address0 =  (sc_lv<3>) (zext_ln555_10_fu_5370_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_10_V_address0 = cnt_10_V_addr_7_reg_7459.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_10_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        cnt_10_V_address0 =  (sc_lv<3>) (zext_ln321_46_fu_4358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_10_V_address0 =  (sc_lv<3>) (zext_ln321_10_fu_3390_p1.read());
    } else {
        cnt_10_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_10_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_10_V_address1 =  (sc_lv<3>) (zext_ln555_46_fu_6568_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_10_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_10_V_address1 = cnt_10_V_addr_8_reg_7528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_10_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_10_V_address1 =  (sc_lv<3>) (zext_ln321_34_fu_3950_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_10_V_address1 =  (sc_lv<3>) (zext_ln321_16_fu_3598_p1.read());
    } else {
        cnt_10_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_10_V_ce0 = ap_const_logic_1;
    } else {
        cnt_10_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_10_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_10_V_ce1 = ap_const_logic_1;
    } else {
        cnt_10_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_10_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_10_V_d0 = add_ln700_10_fu_4631_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        cnt_10_V_d0 = trunc_ln301_34_reg_7162.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_10_V_d0 = counts_2_q0.read().range(21, 16);
    } else {
        cnt_10_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_10_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_10_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_10_V_d1 = trunc_ln301_25_reg_7090.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_10_V_d1 = counts_5_q0.read().range(21, 16);
    } else {
        cnt_10_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_10_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_45_reg_7451.read())))) {
        cnt_10_V_we0 = ap_const_logic_1;
    } else {
        cnt_10_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_10_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_175_reg_7455_pp1_iter1_reg.read())))) {
        cnt_10_V_we1 = ap_const_logic_1;
    } else {
        cnt_10_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_11_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_11_V_address0 =  (sc_lv<3>) (zext_ln555_35_fu_6148_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_11_V_address0 =  (sc_lv<3>) (zext_ln555_11_fu_5406_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_11_V_address0 = cnt_11_V_addr_8_reg_7473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_11_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        cnt_11_V_address0 =  (sc_lv<3>) (zext_ln321_47_fu_4366_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_11_V_address0 =  (sc_lv<3>) (zext_ln321_11_fu_3409_p1.read());
    } else {
        cnt_11_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_11_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_11_V_address1 =  (sc_lv<3>) (zext_ln555_47_fu_6604_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_11_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_11_V_address1 = cnt_11_V_addr_9_reg_7533.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_11_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_11_V_address1 =  (sc_lv<3>) (zext_ln321_35_fu_3958_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_11_V_address1 =  (sc_lv<3>) (zext_ln321_16_fu_3598_p1.read());
    } else {
        cnt_11_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_11_V_ce0 = ap_const_logic_1;
    } else {
        cnt_11_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_11_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_11_V_ce1 = ap_const_logic_1;
    } else {
        cnt_11_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_11_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_11_V_d0 = add_ln700_11_fu_4638_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        cnt_11_V_d0 = trunc_ln302_10_reg_7167.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_11_V_d0 = counts_2_q0.read().range(29, 24);
    } else {
        cnt_11_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_11_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_11_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_11_V_d1 = trunc_ln302_8_reg_7095.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_11_V_d1 = counts_5_q0.read().range(29, 24);
    } else {
        cnt_11_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_11_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_46_reg_7464.read())))) {
        cnt_11_V_we0 = ap_const_logic_1;
    } else {
        cnt_11_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_11_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_181_reg_7468_pp1_iter1_reg.read())))) {
        cnt_11_V_we1 = ap_const_logic_1;
    } else {
        cnt_11_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_1_V_address0 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_1_V_address0 =  (sc_lv<3>) (zext_ln555_1_fu_5001_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_1_V_address0 = cnt_1_V_addr_5_reg_7342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_1_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_1_V_address0 =  (sc_lv<3>) (zext_ln321_24_fu_3919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_1_V_address0 =  (sc_lv<3>) (zext_ln321_1_fu_3052_p1.read());
    } else {
        cnt_1_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_1_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_1_V_address1 =  (sc_lv<3>) (zext_ln555_37_fu_6228_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_1_V_address1 =  (sc_lv<3>) (zext_ln555_13_fu_5486_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_1_V_address1 = cnt_1_V_addr_6_reg_7483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_1_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_1_V_address1 =  (sc_lv<3>) (zext_ln321_37_fu_4000_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_1_V_address1 =  (sc_lv<3>) (zext_ln321_13_fu_3496_p1.read());
    } else {
        cnt_1_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_1_V_ce0 = ap_const_logic_1;
    } else {
        cnt_1_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_1_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_1_V_ce1 = ap_const_logic_1;
    } else {
        cnt_1_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_1_V_d0 = add_ln700_1_fu_4568_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_1_V_d0 = trunc_ln301_18_reg_7045.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_1_V_d0 = counts_0_q0.read().range(13, 8);
    } else {
        cnt_1_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_1_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_1_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_1_V_d1 = trunc_ln301_27_reg_7117.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_1_V_d1 = counts_3_q0.read().range(13, 8);
    } else {
        cnt_1_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_1_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_36_reg_7334.read())))) {
        cnt_1_V_we0 = ap_const_logic_1;
    } else {
        cnt_1_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_1_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_139_reg_7338_pp1_iter1_reg.read())))) {
        cnt_1_V_we1 = ap_const_logic_1;
    } else {
        cnt_1_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_2_V_address0 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_2_V_address0 =  (sc_lv<3>) (zext_ln555_2_fu_5045_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_2_V_address0 = cnt_2_V_addr_5_reg_7355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_2_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_2_V_address0 =  (sc_lv<3>) (zext_ln321_24_fu_3919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_2_V_address0 =  (sc_lv<3>) (zext_ln321_2_fu_3106_p1.read());
    } else {
        cnt_2_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_2_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_2_V_address1 =  (sc_lv<3>) (zext_ln555_38_fu_6264_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_2_V_address1 =  (sc_lv<3>) (zext_ln555_14_fu_5522_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_2_V_address1 = cnt_2_V_addr_6_reg_7488.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_2_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_2_V_address1 =  (sc_lv<3>) (zext_ln321_38_fu_4034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_2_V_address1 =  (sc_lv<3>) (zext_ln321_14_fu_3542_p1.read());
    } else {
        cnt_2_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_2_V_ce0 = ap_const_logic_1;
    } else {
        cnt_2_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_2_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_2_V_ce1 = ap_const_logic_1;
    } else {
        cnt_2_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_2_V_d0 = add_ln700_2_fu_4575_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_2_V_d0 = trunc_ln301_19_reg_7050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_2_V_d0 = counts_0_q0.read().range(21, 16);
    } else {
        cnt_2_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_2_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_2_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_2_V_d1 = trunc_ln301_28_reg_7122.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_2_V_d1 = counts_3_q0.read().range(21, 16);
    } else {
        cnt_2_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_2_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_37_reg_7347.read())))) {
        cnt_2_V_we0 = ap_const_logic_1;
    } else {
        cnt_2_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_2_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_146_reg_7351_pp1_iter1_reg.read())))) {
        cnt_2_V_we1 = ap_const_logic_1;
    } else {
        cnt_2_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_3_V_address0 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_3_V_address0 =  (sc_lv<3>) (zext_ln555_3_fu_5089_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_3_V_address0 = cnt_3_V_addr_6_reg_7368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_3_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_3_V_address0 =  (sc_lv<3>) (zext_ln321_24_fu_3919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_3_V_address0 =  (sc_lv<3>) (zext_ln321_3_fu_3160_p1.read());
    } else {
        cnt_3_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_3_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_3_V_address1 =  (sc_lv<3>) (zext_ln555_39_fu_6300_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_3_V_address1 =  (sc_lv<3>) (zext_ln555_15_fu_5558_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_3_V_address1 = cnt_3_V_addr_7_reg_7493.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_3_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_3_V_address1 =  (sc_lv<3>) (zext_ln321_39_fu_4068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_3_V_address1 =  (sc_lv<3>) (zext_ln321_15_fu_3588_p1.read());
    } else {
        cnt_3_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_3_V_ce0 = ap_const_logic_1;
    } else {
        cnt_3_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_3_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_3_V_ce1 = ap_const_logic_1;
    } else {
        cnt_3_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_3_V_d0 = add_ln700_3_fu_4582_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_3_V_d0 = trunc_ln302_6_reg_7055.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_3_V_d0 = counts_0_q0.read().range(29, 24);
    } else {
        cnt_3_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_3_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_3_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_3_V_d1 = trunc_ln302_9_reg_7127.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_3_V_d1 = counts_3_q0.read().range(29, 24);
    } else {
        cnt_3_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_3_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_38_reg_7360.read())))) {
        cnt_3_V_we0 = ap_const_logic_1;
    } else {
        cnt_3_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_3_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_153_reg_7364_pp1_iter1_reg.read())))) {
        cnt_3_V_we1 = ap_const_logic_1;
    } else {
        cnt_3_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_4_V_address0 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_4_V_address0 =  (sc_lv<3>) (zext_ln555_4_fu_5146_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_4_V_address0 = cnt_4_V_addr_6_reg_7381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_4_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_4_V_address0 =  (sc_lv<3>) (zext_ln321_24_fu_3919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_4_V_address0 =  (sc_lv<3>) (zext_ln321_4_fu_3201_p1.read());
    } else {
        cnt_4_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_4_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_4_V_address1 =  (sc_lv<3>) (zext_ln555_40_fu_6344_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_4_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_4_V_address1 = cnt_4_V_addr_7_reg_7498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_4_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_4_V_address1 =  (sc_lv<3>) (zext_ln321_40_fu_4111_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_4_V_address1 =  (sc_lv<3>) (zext_ln321_16_fu_3598_p1.read());
    } else {
        cnt_4_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_4_V_ce0 = ap_const_logic_1;
    } else {
        cnt_4_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_4_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_4_V_ce1 = ap_const_logic_1;
    } else {
        cnt_4_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_4_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_4_V_d0 = add_ln700_4_fu_4589_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_4_V_d0 = trunc_ln301_20_reg_7060.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_4_V_d0 = trunc_ln301_3_fu_3172_p1.read();
    } else {
        cnt_4_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_4_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_4_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_4_V_d1 = trunc_ln301_29_reg_7132.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_4_V_d1 = trunc_ln301_11_fu_3593_p1.read();
    } else {
        cnt_4_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_4_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_39_reg_7373.read())))) {
        cnt_4_V_we0 = ap_const_logic_1;
    } else {
        cnt_4_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_4_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_160_reg_7377_pp1_iter1_reg.read())))) {
        cnt_4_V_we1 = ap_const_logic_1;
    } else {
        cnt_4_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_5_V_address0 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_5_V_address0 =  (sc_lv<3>) (zext_ln555_5_fu_5182_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_5_V_address0 = cnt_5_V_addr_6_reg_7394.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_5_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_5_V_address0 =  (sc_lv<3>) (zext_ln321_24_fu_3919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_5_V_address0 =  (sc_lv<3>) (zext_ln321_5_fu_3247_p1.read());
    } else {
        cnt_5_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_5_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_5_V_address1 =  (sc_lv<3>) (zext_ln555_41_fu_6380_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_5_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_5_V_address1 = cnt_5_V_addr_7_reg_7503.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_5_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_5_V_address1 =  (sc_lv<3>) (zext_ln321_41_fu_4146_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_5_V_address1 =  (sc_lv<3>) (zext_ln321_16_fu_3598_p1.read());
    } else {
        cnt_5_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_5_V_ce0 = ap_const_logic_1;
    } else {
        cnt_5_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_5_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_5_V_ce1 = ap_const_logic_1;
    } else {
        cnt_5_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_5_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_5_V_d0 = add_ln700_5_fu_4596_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_5_V_d0 = trunc_ln301_21_reg_7065.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_5_V_d0 = counts_1_q0.read().range(13, 8);
    } else {
        cnt_5_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_5_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_5_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_5_V_d1 = trunc_ln301_30_reg_7137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_5_V_d1 = counts_4_q0.read().range(13, 8);
    } else {
        cnt_5_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_5_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_40_reg_7386.read())))) {
        cnt_5_V_we0 = ap_const_logic_1;
    } else {
        cnt_5_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_5_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_161_reg_7390_pp1_iter1_reg.read())))) {
        cnt_5_V_we1 = ap_const_logic_1;
    } else {
        cnt_5_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_6_V_address0 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_6_V_address0 =  (sc_lv<3>) (zext_ln555_6_fu_5218_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_6_V_address0 = cnt_6_V_addr_6_reg_7407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_6_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_6_V_address0 =  (sc_lv<3>) (zext_ln321_24_fu_3919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_6_V_address0 =  (sc_lv<3>) (zext_ln321_6_fu_3293_p1.read());
    } else {
        cnt_6_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_6_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_6_V_address1 =  (sc_lv<3>) (zext_ln555_42_fu_6416_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_6_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_6_V_address1 = cnt_6_V_addr_7_reg_7508.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_6_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_6_V_address1 =  (sc_lv<3>) (zext_ln321_42_fu_4181_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_6_V_address1 =  (sc_lv<3>) (zext_ln321_16_fu_3598_p1.read());
    } else {
        cnt_6_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_6_V_ce0 = ap_const_logic_1;
    } else {
        cnt_6_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_6_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_6_V_ce1 = ap_const_logic_1;
    } else {
        cnt_6_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_6_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_6_V_d0 = add_ln700_6_fu_4603_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_6_V_d0 = trunc_ln301_22_reg_7070.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_6_V_d0 = counts_1_q0.read().range(21, 16);
    } else {
        cnt_6_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_6_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_6_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_6_V_d1 = trunc_ln301_31_reg_7142.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_6_V_d1 = counts_4_q0.read().range(21, 16);
    } else {
        cnt_6_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_6_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_41_reg_7399.read())))) {
        cnt_6_V_we0 = ap_const_logic_1;
    } else {
        cnt_6_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_6_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_162_reg_7403_pp1_iter1_reg.read())))) {
        cnt_6_V_we1 = ap_const_logic_1;
    } else {
        cnt_6_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_7_V_address0 =  (sc_lv<3>) (zext_ln555_24_fu_6046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_7_V_address0 =  (sc_lv<3>) (zext_ln555_7_fu_5254_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_7_V_address0 = cnt_7_V_addr_7_reg_7420.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_7_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_7_V_address0 =  (sc_lv<3>) (zext_ln321_24_fu_3919_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_7_V_address0 =  (sc_lv<3>) (zext_ln321_7_fu_3339_p1.read());
    } else {
        cnt_7_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_7_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_7_V_address1 =  (sc_lv<3>) (zext_ln555_43_fu_6452_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_7_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_7_V_address1 = cnt_7_V_addr_8_reg_7513.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_7_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_7_V_address1 =  (sc_lv<3>) (zext_ln321_43_fu_4216_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_7_V_address1 =  (sc_lv<3>) (zext_ln321_16_fu_3598_p1.read());
    } else {
        cnt_7_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_7_V_ce0 = ap_const_logic_1;
    } else {
        cnt_7_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_7_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_7_V_ce1 = ap_const_logic_1;
    } else {
        cnt_7_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_7_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_7_V_d0 = add_ln700_7_fu_4610_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_7_V_d0 = trunc_ln302_7_reg_7075.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_7_V_d0 = counts_1_q0.read().range(29, 24);
    } else {
        cnt_7_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_7_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_7_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_7_V_d1 = trunc_ln302_s_reg_7147.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_7_V_d1 = counts_4_q0.read().range(29, 24);
    } else {
        cnt_7_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_7_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_42_reg_7412.read())))) {
        cnt_7_V_we0 = ap_const_logic_1;
    } else {
        cnt_7_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_7_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_163_reg_7416_pp1_iter1_reg.read())))) {
        cnt_7_V_we1 = ap_const_logic_1;
    } else {
        cnt_7_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_8_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_8_V_address0 =  (sc_lv<3>) (zext_ln555_32_fu_6069_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_8_V_address0 =  (sc_lv<3>) (zext_ln555_8_fu_5298_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_8_V_address0 = cnt_8_V_addr_7_reg_7433.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_8_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        cnt_8_V_address0 =  (sc_lv<3>) (zext_ln321_44_fu_4342_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_8_V_address0 =  (sc_lv<3>) (zext_ln321_8_fu_3352_p1.read());
    } else {
        cnt_8_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_8_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_8_V_address1 =  (sc_lv<3>) (zext_ln555_44_fu_6496_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_8_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_8_V_address1 = cnt_8_V_addr_8_reg_7518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_8_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_8_V_address1 =  (sc_lv<3>) (zext_ln321_32_fu_3934_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_8_V_address1 =  (sc_lv<3>) (zext_ln321_16_fu_3598_p1.read());
    } else {
        cnt_8_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_8_V_ce0 = ap_const_logic_1;
    } else {
        cnt_8_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_8_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_8_V_ce1 = ap_const_logic_1;
    } else {
        cnt_8_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_8_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_8_V_d0 = add_ln700_8_fu_4617_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        cnt_8_V_d0 = trunc_ln301_32_reg_7152.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_8_V_d0 = trunc_ln301_5_fu_3344_p1.read();
    } else {
        cnt_8_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_8_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_8_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_8_V_d1 = trunc_ln301_23_reg_7080.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_8_V_d1 = trunc_ln301_14_fu_3643_p1.read();
    } else {
        cnt_8_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_8_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_43_reg_7425.read())))) {
        cnt_8_V_we0 = ap_const_logic_1;
    } else {
        cnt_8_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_8_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_164_reg_7429_pp1_iter1_reg.read())))) {
        cnt_8_V_we1 = ap_const_logic_1;
    } else {
        cnt_8_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_9_V_address0 =  (sc_lv<3>) (zext_ln555_33_fu_6078_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_9_V_address0 =  (sc_lv<3>) (zext_ln555_9_fu_5334_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_9_V_address0 = cnt_9_V_addr_7_reg_7446.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_9_V_address0 =  (sc_lv<3>) (zext_ln20_reg_7216.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        cnt_9_V_address0 =  (sc_lv<3>) (zext_ln321_45_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_9_V_address0 =  (sc_lv<3>) (zext_ln321_9_fu_3371_p1.read());
    } else {
        cnt_9_V_address0 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_9_V_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        cnt_9_V_address1 =  (sc_lv<3>) (zext_ln555_45_fu_6532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        cnt_9_V_address1 =  (sc_lv<3>) (zext_ln555_16_fu_5564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_9_V_address1 = cnt_9_V_addr_8_reg_7523.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cnt_9_V_address1 =  (sc_lv<3>) (zext_ln20_reg_7216_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_9_V_address1 =  (sc_lv<3>) (zext_ln321_33_fu_3942_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_9_V_address1 =  (sc_lv<3>) (zext_ln321_16_fu_3598_p1.read());
    } else {
        cnt_9_V_address1 = "XXX";
    }
}

void estimate_FR_2::thread_cnt_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        cnt_9_V_ce0 = ap_const_logic_1;
    } else {
        cnt_9_V_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_9_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cnt_9_V_ce1 = ap_const_logic_1;
    } else {
        cnt_9_V_ce1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_9_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cnt_9_V_d0 = add_ln700_9_fu_4624_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        cnt_9_V_d0 = trunc_ln301_33_reg_7157.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_9_V_d0 = counts_2_q0.read().range(13, 8);
    } else {
        cnt_9_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_9_V_d1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        cnt_9_V_d1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        cnt_9_V_d1 = trunc_ln301_24_reg_7085.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        cnt_9_V_d1 = counts_5_q0.read().range(13, 8);
    } else {
        cnt_9_V_d1 =  (sc_lv<6>) ("XXXXXX");
    }
}

void estimate_FR_2::thread_cnt_9_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, trunc_ln301_44_reg_7438.read())))) {
        cnt_9_V_we0 = ap_const_logic_1;
    } else {
        cnt_9_V_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_cnt_9_V_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(icmp_ln12_reg_6916.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_169_reg_7442_pp1_iter1_reg.read())))) {
        cnt_9_V_we1 = ap_const_logic_1;
    } else {
        cnt_9_V_we1 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        counts_0_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_0_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_0_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        counts_0_ce0 = ap_const_logic_1;
    } else {
        counts_0_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_0_d0() {
    counts_0_d0 = esl_zext<32,30>(tmp_3_fu_5644_p8.read());
}

void estimate_FR_2::thread_counts_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()))) {
        counts_0_we0 = ap_const_logic_1;
    } else {
        counts_0_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        counts_10_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_10_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_10_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        counts_10_ce0 = ap_const_logic_1;
    } else {
        counts_10_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_10_d0() {
    counts_10_d0 = esl_zext<32,30>(tmp_12_fu_6720_p8.read());
}

void estimate_FR_2::thread_counts_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        counts_10_we0 = ap_const_logic_1;
    } else {
        counts_10_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        counts_11_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_11_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_11_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        counts_11_ce0 = ap_const_logic_1;
    } else {
        counts_11_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_11_d0() {
    counts_11_d0 = esl_zext<32,30>(tmp_13_fu_6743_p8.read());
}

void estimate_FR_2::thread_counts_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        counts_11_we0 = ap_const_logic_1;
    } else {
        counts_11_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        counts_1_address0 =  (sc_lv<1>) (zext_ln36_3_fu_5742_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_1_address0 =  (sc_lv<1>) (zext_ln13_1_fu_2685_p1.read());
    } else {
        counts_1_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        counts_1_ce0 = ap_const_logic_1;
    } else {
        counts_1_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_1_d0() {
    counts_1_d0 = esl_zext<32,30>(tmp_4_fu_5696_p8.read());
}

void estimate_FR_2::thread_counts_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()))) {
        counts_1_we0 = ap_const_logic_1;
    } else {
        counts_1_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        counts_2_address0 =  (sc_lv<1>) (zext_ln36_5_fu_5824_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_2_address0 =  (sc_lv<1>) (zext_ln13_2_fu_2728_p1.read());
    } else {
        counts_2_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        counts_2_ce0 = ap_const_logic_1;
    } else {
        counts_2_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_2_d0() {
    counts_2_d0 = esl_zext<32,30>(tmp_5_fu_5778_p8.read());
}

void estimate_FR_2::thread_counts_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()))) {
        counts_2_we0 = ap_const_logic_1;
    } else {
        counts_2_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        counts_3_address0 =  (sc_lv<1>) (zext_ln36_7_fu_5906_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_3_address0 =  (sc_lv<1>) (zext_ln13_3_fu_2861_p1.read());
    } else {
        counts_3_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        counts_3_ce0 = ap_const_logic_1;
    } else {
        counts_3_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_3_d0() {
    counts_3_d0 = esl_zext<32,30>(tmp_6_fu_5860_p8.read());
}

void estimate_FR_2::thread_counts_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()))) {
        counts_3_we0 = ap_const_logic_1;
    } else {
        counts_3_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        counts_4_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_4_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_4_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        counts_4_ce0 = ap_const_logic_1;
    } else {
        counts_4_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_4_d0() {
    counts_4_d0 = esl_zext<32,30>(tmp_7_fu_5942_p8.read());
}

void estimate_FR_2::thread_counts_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()))) {
        counts_4_we0 = ap_const_logic_1;
    } else {
        counts_4_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        counts_5_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_5_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_5_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        counts_5_ce0 = ap_const_logic_1;
    } else {
        counts_5_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_5_d0() {
    counts_5_d0 = esl_zext<32,30>(tmp_8_fu_5994_p8.read());
}

void estimate_FR_2::thread_counts_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()))) {
        counts_5_we0 = ap_const_logic_1;
    } else {
        counts_5_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        counts_6_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_6_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_6_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        counts_6_ce0 = ap_const_logic_1;
    } else {
        counts_6_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_6_d0() {
    counts_6_d0 = esl_zext<32,30>(tmp_9_fu_6628_p8.read());
}

void estimate_FR_2::thread_counts_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        counts_6_we0 = ap_const_logic_1;
    } else {
        counts_6_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        counts_7_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_7_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_7_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        counts_7_ce0 = ap_const_logic_1;
    } else {
        counts_7_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_7_d0() {
    counts_7_d0 = esl_zext<32,30>(tmp_s_fu_6651_p8.read());
}

void estimate_FR_2::thread_counts_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        counts_7_we0 = ap_const_logic_1;
    } else {
        counts_7_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        counts_8_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_8_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_8_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        counts_8_ce0 = ap_const_logic_1;
    } else {
        counts_8_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_8_d0() {
    counts_8_d0 = esl_zext<32,30>(tmp_10_fu_6674_p8.read());
}

void estimate_FR_2::thread_counts_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        counts_8_we0 = ap_const_logic_1;
    } else {
        counts_8_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        counts_9_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        counts_9_address0 =  (sc_lv<1>) (zext_ln13_fu_2614_p1.read());
    } else {
        counts_9_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_counts_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        counts_9_ce0 = ap_const_logic_1;
    } else {
        counts_9_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_9_d0() {
    counts_9_d0 = esl_zext<32,30>(tmp_11_fu_6697_p8.read());
}

void estimate_FR_2::thread_counts_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        counts_9_we0 = ap_const_logic_1;
    } else {
        counts_9_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_empty_46_fu_2598_p1() {
    empty_46_fu_2598_p1 = ap_phi_mux_j_0_0_phi_fu_2509_p4.read().range(4-1, 0);
}

void estimate_FR_2::thread_empty_51_fu_4897_p1() {
    empty_51_fu_4897_p1 = ap_phi_mux_k_0_0_phi_fu_2590_p4.read().range(4-1, 0);
}

void estimate_FR_2::thread_icmp_ln12_fu_2602_p2() {
    icmp_ln12_fu_2602_p2 = (!ap_phi_mux_j_0_0_phi_fu_2509_p4.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_j_0_0_phi_fu_2509_p4.read() == ap_const_lv5_18);
}

void estimate_FR_2::thread_icmp_ln19_fu_4383_p2() {
    icmp_ln19_fu_4383_p2 = (!ap_phi_mux_i_0_0_phi_fu_2544_p4.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_0_phi_fu_2544_p4.read() == ap_const_lv7_60);
}

void estimate_FR_2::thread_icmp_ln31_fu_4901_p2() {
    icmp_ln31_fu_4901_p2 = (!ap_phi_mux_k_0_0_phi_fu_2590_p4.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_0_0_phi_fu_2590_p4.read() == ap_const_lv5_18);
}

void estimate_FR_2::thread_inputs_0_address0() {
    inputs_0_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_0_ce0 = ap_const_logic_1;
    } else {
        inputs_0_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_10_address0() {
    inputs_10_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_10_ce0 = ap_const_logic_1;
    } else {
        inputs_10_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_11_address0() {
    inputs_11_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_11_ce0 = ap_const_logic_1;
    } else {
        inputs_11_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_1_address0() {
    inputs_1_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_1_ce0 = ap_const_logic_1;
    } else {
        inputs_1_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_2_address0() {
    inputs_2_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_2_ce0 = ap_const_logic_1;
    } else {
        inputs_2_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_3_address0() {
    inputs_3_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_3_ce0 = ap_const_logic_1;
    } else {
        inputs_3_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_4_address0() {
    inputs_4_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_4_ce0 = ap_const_logic_1;
    } else {
        inputs_4_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_5_address0() {
    inputs_5_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_5_ce0 = ap_const_logic_1;
    } else {
        inputs_5_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_6_address0() {
    inputs_6_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_6_ce0 = ap_const_logic_1;
    } else {
        inputs_6_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_7_address0() {
    inputs_7_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_7_ce0 = ap_const_logic_1;
    } else {
        inputs_7_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_8_address0() {
    inputs_8_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_8_ce0 = ap_const_logic_1;
    } else {
        inputs_8_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_9_address0() {
    inputs_9_address0 =  (sc_lv<3>) (zext_ln20_fu_4395_p1.read());
}

void estimate_FR_2::thread_inputs_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        inputs_9_ce0 = ap_const_logic_1;
    } else {
        inputs_9_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_mul_ln13_1_fu_2708_p0() {
    mul_ln13_1_fu_2708_p0 =  (sc_lv<4>) (mul_ln13_1_fu_2708_p00.read());
}

void estimate_FR_2::thread_mul_ln13_1_fu_2708_p00() {
    mul_ln13_1_fu_2708_p00 = esl_zext<10,4>(or_ln12_1_fu_2690_p2.read());
}

void estimate_FR_2::thread_mul_ln13_1_fu_2708_p2() {
    mul_ln13_1_fu_2708_p2 = (!mul_ln13_1_fu_2708_p0.read().is_01() || !ap_const_lv10_16.is_01())? sc_lv<10>(): sc_biguint<4>(mul_ln13_1_fu_2708_p0.read()) * sc_biguint<10>(ap_const_lv10_16);
}

void estimate_FR_2::thread_mul_ln13_2_fu_2841_p0() {
    mul_ln13_2_fu_2841_p0 =  (sc_lv<4>) (mul_ln13_2_fu_2841_p00.read());
}

void estimate_FR_2::thread_mul_ln13_2_fu_2841_p00() {
    mul_ln13_2_fu_2841_p00 = esl_zext<10,4>(or_ln12_2_fu_2831_p2.read());
}

void estimate_FR_2::thread_mul_ln13_2_fu_2841_p2() {
    mul_ln13_2_fu_2841_p2 = (!mul_ln13_2_fu_2841_p0.read().is_01() || !ap_const_lv10_16.is_01())? sc_lv<10>(): sc_biguint<4>(mul_ln13_2_fu_2841_p0.read()) * sc_biguint<10>(ap_const_lv10_16);
}

void estimate_FR_2::thread_mul_ln13_fu_2665_p0() {
    mul_ln13_fu_2665_p0 =  (sc_lv<4>) (mul_ln13_fu_2665_p00.read());
}

void estimate_FR_2::thread_mul_ln13_fu_2665_p00() {
    mul_ln13_fu_2665_p00 = esl_zext<10,4>(or_ln12_fu_2655_p2.read());
}

void estimate_FR_2::thread_mul_ln13_fu_2665_p2() {
    mul_ln13_fu_2665_p2 = (!mul_ln13_fu_2665_p0.read().is_01() || !ap_const_lv10_16.is_01())? sc_lv<10>(): sc_biguint<4>(mul_ln13_fu_2665_p0.read()) * sc_biguint<10>(ap_const_lv10_16);
}

void estimate_FR_2::thread_mul_ln321_10_fu_2789_p0() {
    mul_ln321_10_fu_2789_p0 =  (sc_lv<6>) (mul_ln321_10_fu_2789_p00.read());
}

void estimate_FR_2::thread_mul_ln321_10_fu_2789_p00() {
    mul_ln321_10_fu_2789_p00 = esl_zext<14,6>(or_ln15_1_fu_2779_p2.read());
}

void estimate_FR_2::thread_mul_ln321_10_fu_2789_p2() {
    mul_ln321_10_fu_2789_p2 = (!mul_ln321_10_fu_2789_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_10_fu_2789_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_11_fu_2815_p0() {
    mul_ln321_11_fu_2815_p0 =  (sc_lv<6>) (mul_ln321_11_fu_2815_p00.read());
}

void estimate_FR_2::thread_mul_ln321_11_fu_2815_p00() {
    mul_ln321_11_fu_2815_p00 = esl_zext<14,6>(or_ln16_1_fu_2805_p2.read());
}

void estimate_FR_2::thread_mul_ln321_11_fu_2815_p2() {
    mul_ln321_11_fu_2815_p2 = (!mul_ln321_11_fu_2815_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_11_fu_2815_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_12_fu_3430_p0() {
    mul_ln321_12_fu_3430_p0 =  (sc_lv<6>) (mul_ln321_12_fu_3430_p00.read());
}

void estimate_FR_2::thread_mul_ln321_12_fu_3430_p00() {
    mul_ln321_12_fu_3430_p00 = esl_zext<14,6>(tmp_94_fu_3414_p3.read());
}

void estimate_FR_2::thread_mul_ln321_12_fu_3430_p2() {
    mul_ln321_12_fu_3430_p2 = (!mul_ln321_12_fu_3430_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_12_fu_3430_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_13_fu_3476_p0() {
    mul_ln321_13_fu_3476_p0 =  (sc_lv<6>) (mul_ln321_13_fu_3476_p00.read());
}

void estimate_FR_2::thread_mul_ln321_13_fu_3476_p00() {
    mul_ln321_13_fu_3476_p00 = esl_zext<14,6>(or_ln14_2_fu_3455_p2.read());
}

void estimate_FR_2::thread_mul_ln321_13_fu_3476_p2() {
    mul_ln321_13_fu_3476_p2 = (!mul_ln321_13_fu_3476_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_13_fu_3476_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_14_fu_3522_p0() {
    mul_ln321_14_fu_3522_p0 =  (sc_lv<6>) (mul_ln321_14_fu_3522_p00.read());
}

void estimate_FR_2::thread_mul_ln321_14_fu_3522_p00() {
    mul_ln321_14_fu_3522_p00 = esl_zext<14,6>(or_ln15_2_fu_3501_p2.read());
}

void estimate_FR_2::thread_mul_ln321_14_fu_3522_p2() {
    mul_ln321_14_fu_3522_p2 = (!mul_ln321_14_fu_3522_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_14_fu_3522_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_15_fu_3568_p0() {
    mul_ln321_15_fu_3568_p0 =  (sc_lv<6>) (mul_ln321_15_fu_3568_p00.read());
}

void estimate_FR_2::thread_mul_ln321_15_fu_3568_p00() {
    mul_ln321_15_fu_3568_p00 = esl_zext<14,6>(or_ln16_2_fu_3547_p2.read());
}

void estimate_FR_2::thread_mul_ln321_15_fu_3568_p2() {
    mul_ln321_15_fu_3568_p2 = (!mul_ln321_15_fu_3568_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_15_fu_3568_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_16_fu_2884_p0() {
    mul_ln321_16_fu_2884_p0 =  (sc_lv<7>) (mul_ln321_16_fu_2884_p00.read());
}

void estimate_FR_2::thread_mul_ln321_16_fu_2884_p00() {
    mul_ln321_16_fu_2884_p00 = esl_zext<16,7>(shl_ln13_8_fu_2872_p3.read());
}

void estimate_FR_2::thread_mul_ln321_16_fu_2884_p2() {
    mul_ln321_16_fu_2884_p2 = (!mul_ln321_16_fu_2884_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_16_fu_2884_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_17_fu_2910_p0() {
    mul_ln321_17_fu_2910_p0 =  (sc_lv<7>) (mul_ln321_17_fu_2910_p00.read());
}

void estimate_FR_2::thread_mul_ln321_17_fu_2910_p00() {
    mul_ln321_17_fu_2910_p00 = esl_zext<16,7>(or_ln14_3_fu_2900_p2.read());
}

void estimate_FR_2::thread_mul_ln321_17_fu_2910_p2() {
    mul_ln321_17_fu_2910_p2 = (!mul_ln321_17_fu_2910_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_17_fu_2910_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_18_fu_2936_p0() {
    mul_ln321_18_fu_2936_p0 =  (sc_lv<7>) (mul_ln321_18_fu_2936_p00.read());
}

void estimate_FR_2::thread_mul_ln321_18_fu_2936_p00() {
    mul_ln321_18_fu_2936_p00 = esl_zext<16,7>(or_ln15_3_fu_2926_p2.read());
}

void estimate_FR_2::thread_mul_ln321_18_fu_2936_p2() {
    mul_ln321_18_fu_2936_p2 = (!mul_ln321_18_fu_2936_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_18_fu_2936_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_19_fu_2962_p0() {
    mul_ln321_19_fu_2962_p0 =  (sc_lv<7>) (mul_ln321_19_fu_2962_p00.read());
}

void estimate_FR_2::thread_mul_ln321_19_fu_2962_p00() {
    mul_ln321_19_fu_2962_p00 = esl_zext<16,7>(or_ln16_3_fu_2952_p2.read());
}

void estimate_FR_2::thread_mul_ln321_19_fu_2962_p2() {
    mul_ln321_19_fu_2962_p2 = (!mul_ln321_19_fu_2962_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_19_fu_2962_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_1_fu_3032_p0() {
    mul_ln321_1_fu_3032_p0 =  (sc_lv<6>) (mul_ln321_1_fu_3032_p00.read());
}

void estimate_FR_2::thread_mul_ln321_1_fu_3032_p00() {
    mul_ln321_1_fu_3032_p00 = esl_zext<14,6>(or_ln321_fu_3022_p2.read());
}

void estimate_FR_2::thread_mul_ln321_1_fu_3032_p2() {
    mul_ln321_1_fu_3032_p2 = (!mul_ln321_1_fu_3032_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_1_fu_3032_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_20_fu_3805_p0() {
    mul_ln321_20_fu_3805_p0 =  (sc_lv<7>) (mul_ln321_20_fu_3805_p00.read());
}

void estimate_FR_2::thread_mul_ln321_20_fu_3805_p00() {
    mul_ln321_20_fu_3805_p00 = esl_zext<16,7>(tmp_116_fu_3789_p3.read());
}

void estimate_FR_2::thread_mul_ln321_20_fu_3805_p2() {
    mul_ln321_20_fu_3805_p2 = (!mul_ln321_20_fu_3805_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_20_fu_3805_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_21_fu_3980_p0() {
    mul_ln321_21_fu_3980_p0 =  (sc_lv<7>) (mul_ln321_21_fu_3980_p00.read());
}

void estimate_FR_2::thread_mul_ln321_21_fu_3980_p00() {
    mul_ln321_21_fu_3980_p00 = esl_zext<16,7>(or_ln14_4_fu_3971_p2.read());
}

void estimate_FR_2::thread_mul_ln321_21_fu_3980_p2() {
    mul_ln321_21_fu_3980_p2 = (!mul_ln321_21_fu_3980_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_21_fu_3980_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_22_fu_4014_p0() {
    mul_ln321_22_fu_4014_p0 =  (sc_lv<7>) (mul_ln321_22_fu_4014_p00.read());
}

void estimate_FR_2::thread_mul_ln321_22_fu_4014_p00() {
    mul_ln321_22_fu_4014_p00 = esl_zext<16,7>(or_ln15_4_fu_4005_p2.read());
}

void estimate_FR_2::thread_mul_ln321_22_fu_4014_p2() {
    mul_ln321_22_fu_4014_p2 = (!mul_ln321_22_fu_4014_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_22_fu_4014_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_23_fu_4048_p0() {
    mul_ln321_23_fu_4048_p0 =  (sc_lv<7>) (mul_ln321_23_fu_4048_p00.read());
}

void estimate_FR_2::thread_mul_ln321_23_fu_4048_p00() {
    mul_ln321_23_fu_4048_p00 = esl_zext<16,7>(or_ln16_4_fu_4039_p2.read());
}

void estimate_FR_2::thread_mul_ln321_23_fu_4048_p2() {
    mul_ln321_23_fu_4048_p2 = (!mul_ln321_23_fu_4048_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_23_fu_4048_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_24_fu_4091_p0() {
    mul_ln321_24_fu_4091_p0 =  (sc_lv<7>) (mul_ln321_24_fu_4091_p00.read());
}

void estimate_FR_2::thread_mul_ln321_24_fu_4091_p00() {
    mul_ln321_24_fu_4091_p00 = esl_zext<16,7>(tmp_121_fu_4079_p3.read());
}

void estimate_FR_2::thread_mul_ln321_24_fu_4091_p2() {
    mul_ln321_24_fu_4091_p2 = (!mul_ln321_24_fu_4091_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_24_fu_4091_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_25_fu_4126_p0() {
    mul_ln321_25_fu_4126_p0 =  (sc_lv<7>) (mul_ln321_25_fu_4126_p00.read());
}

void estimate_FR_2::thread_mul_ln321_25_fu_4126_p00() {
    mul_ln321_25_fu_4126_p00 = esl_zext<16,7>(or_ln14_5_fu_4116_p2.read());
}

void estimate_FR_2::thread_mul_ln321_25_fu_4126_p2() {
    mul_ln321_25_fu_4126_p2 = (!mul_ln321_25_fu_4126_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_25_fu_4126_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_26_fu_4161_p0() {
    mul_ln321_26_fu_4161_p0 =  (sc_lv<7>) (mul_ln321_26_fu_4161_p00.read());
}

void estimate_FR_2::thread_mul_ln321_26_fu_4161_p00() {
    mul_ln321_26_fu_4161_p00 = esl_zext<16,7>(or_ln15_5_fu_4151_p2.read());
}

void estimate_FR_2::thread_mul_ln321_26_fu_4161_p2() {
    mul_ln321_26_fu_4161_p2 = (!mul_ln321_26_fu_4161_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_26_fu_4161_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_27_fu_4196_p0() {
    mul_ln321_27_fu_4196_p0 =  (sc_lv<7>) (mul_ln321_27_fu_4196_p00.read());
}

void estimate_FR_2::thread_mul_ln321_27_fu_4196_p00() {
    mul_ln321_27_fu_4196_p00 = esl_zext<16,7>(or_ln16_5_fu_4186_p2.read());
}

void estimate_FR_2::thread_mul_ln321_27_fu_4196_p2() {
    mul_ln321_27_fu_4196_p2 = (!mul_ln321_27_fu_4196_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_27_fu_4196_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_28_fu_4239_p0() {
    mul_ln321_28_fu_4239_p0 =  (sc_lv<7>) (mul_ln321_28_fu_4239_p00.read());
}

void estimate_FR_2::thread_mul_ln321_28_fu_4239_p00() {
    mul_ln321_28_fu_4239_p00 = esl_zext<16,7>(tmp_126_fu_4227_p3.read());
}

void estimate_FR_2::thread_mul_ln321_28_fu_4239_p2() {
    mul_ln321_28_fu_4239_p2 = (!mul_ln321_28_fu_4239_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_28_fu_4239_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_29_fu_4265_p0() {
    mul_ln321_29_fu_4265_p0 =  (sc_lv<7>) (mul_ln321_29_fu_4265_p00.read());
}

void estimate_FR_2::thread_mul_ln321_29_fu_4265_p00() {
    mul_ln321_29_fu_4265_p00 = esl_zext<16,7>(or_ln14_6_fu_4255_p2.read());
}

void estimate_FR_2::thread_mul_ln321_29_fu_4265_p2() {
    mul_ln321_29_fu_4265_p2 = (!mul_ln321_29_fu_4265_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_29_fu_4265_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_2_fu_3086_p0() {
    mul_ln321_2_fu_3086_p0 =  (sc_lv<6>) (mul_ln321_2_fu_3086_p00.read());
}

void estimate_FR_2::thread_mul_ln321_2_fu_3086_p00() {
    mul_ln321_2_fu_3086_p00 = esl_zext<14,6>(or_ln321_1_fu_3076_p2.read());
}

void estimate_FR_2::thread_mul_ln321_2_fu_3086_p2() {
    mul_ln321_2_fu_3086_p2 = (!mul_ln321_2_fu_3086_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_2_fu_3086_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_30_fu_4291_p0() {
    mul_ln321_30_fu_4291_p0 =  (sc_lv<7>) (mul_ln321_30_fu_4291_p00.read());
}

void estimate_FR_2::thread_mul_ln321_30_fu_4291_p00() {
    mul_ln321_30_fu_4291_p00 = esl_zext<16,7>(or_ln15_6_fu_4281_p2.read());
}

void estimate_FR_2::thread_mul_ln321_30_fu_4291_p2() {
    mul_ln321_30_fu_4291_p2 = (!mul_ln321_30_fu_4291_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_30_fu_4291_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_31_fu_4317_p0() {
    mul_ln321_31_fu_4317_p0 =  (sc_lv<7>) (mul_ln321_31_fu_4317_p00.read());
}

void estimate_FR_2::thread_mul_ln321_31_fu_4317_p00() {
    mul_ln321_31_fu_4317_p00 = esl_zext<16,7>(or_ln16_6_fu_4307_p2.read());
}

void estimate_FR_2::thread_mul_ln321_31_fu_4317_p2() {
    mul_ln321_31_fu_4317_p2 = (!mul_ln321_31_fu_4317_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln321_31_fu_4317_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln321_3_fu_3140_p0() {
    mul_ln321_3_fu_3140_p0 =  (sc_lv<6>) (mul_ln321_3_fu_3140_p00.read());
}

void estimate_FR_2::thread_mul_ln321_3_fu_3140_p00() {
    mul_ln321_3_fu_3140_p00 = esl_zext<14,6>(or_ln321_2_fu_3130_p2.read());
}

void estimate_FR_2::thread_mul_ln321_3_fu_3140_p2() {
    mul_ln321_3_fu_3140_p2 = (!mul_ln321_3_fu_3140_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_3_fu_3140_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_4_fu_3181_p0() {
    mul_ln321_4_fu_3181_p0 =  (sc_lv<6>) (mul_ln321_4_fu_3181_p00.read());
}

void estimate_FR_2::thread_mul_ln321_4_fu_3181_p00() {
    mul_ln321_4_fu_3181_p00 = esl_zext<14,6>(tmp_59_fu_3165_p3.read());
}

void estimate_FR_2::thread_mul_ln321_4_fu_3181_p2() {
    mul_ln321_4_fu_3181_p2 = (!mul_ln321_4_fu_3181_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_4_fu_3181_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_5_fu_3227_p0() {
    mul_ln321_5_fu_3227_p0 =  (sc_lv<6>) (mul_ln321_5_fu_3227_p00.read());
}

void estimate_FR_2::thread_mul_ln321_5_fu_3227_p00() {
    mul_ln321_5_fu_3227_p00 = esl_zext<14,6>(or_ln14_fu_3206_p2.read());
}

void estimate_FR_2::thread_mul_ln321_5_fu_3227_p2() {
    mul_ln321_5_fu_3227_p2 = (!mul_ln321_5_fu_3227_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_5_fu_3227_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_6_fu_3273_p0() {
    mul_ln321_6_fu_3273_p0 =  (sc_lv<6>) (mul_ln321_6_fu_3273_p00.read());
}

void estimate_FR_2::thread_mul_ln321_6_fu_3273_p00() {
    mul_ln321_6_fu_3273_p00 = esl_zext<14,6>(or_ln15_fu_3252_p2.read());
}

void estimate_FR_2::thread_mul_ln321_6_fu_3273_p2() {
    mul_ln321_6_fu_3273_p2 = (!mul_ln321_6_fu_3273_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_6_fu_3273_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_7_fu_3319_p0() {
    mul_ln321_7_fu_3319_p0 =  (sc_lv<6>) (mul_ln321_7_fu_3319_p00.read());
}

void estimate_FR_2::thread_mul_ln321_7_fu_3319_p00() {
    mul_ln321_7_fu_3319_p00 = esl_zext<14,6>(or_ln16_fu_3298_p2.read());
}

void estimate_FR_2::thread_mul_ln321_7_fu_3319_p2() {
    mul_ln321_7_fu_3319_p2 = (!mul_ln321_7_fu_3319_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_7_fu_3319_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_8_fu_2737_p0() {
    mul_ln321_8_fu_2737_p0 =  (sc_lv<6>) (mul_ln321_8_fu_2737_p00.read());
}

void estimate_FR_2::thread_mul_ln321_8_fu_2737_p00() {
    mul_ln321_8_fu_2737_p00 = esl_zext<14,6>(tmp_83_fu_2696_p3.read());
}

void estimate_FR_2::thread_mul_ln321_8_fu_2737_p2() {
    mul_ln321_8_fu_2737_p2 = (!mul_ln321_8_fu_2737_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_8_fu_2737_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_9_fu_2763_p0() {
    mul_ln321_9_fu_2763_p0 =  (sc_lv<6>) (mul_ln321_9_fu_2763_p00.read());
}

void estimate_FR_2::thread_mul_ln321_9_fu_2763_p00() {
    mul_ln321_9_fu_2763_p00 = esl_zext<14,6>(or_ln14_1_fu_2753_p2.read());
}

void estimate_FR_2::thread_mul_ln321_9_fu_2763_p2() {
    mul_ln321_9_fu_2763_p2 = (!mul_ln321_9_fu_2763_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_9_fu_2763_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln321_fu_2639_p0() {
    mul_ln321_fu_2639_p0 =  (sc_lv<6>) (mul_ln321_fu_2639_p00.read());
}

void estimate_FR_2::thread_mul_ln321_fu_2639_p00() {
    mul_ln321_fu_2639_p00 = esl_zext<14,6>(shl_ln13_tr_fu_2627_p3.read());
}

void estimate_FR_2::thread_mul_ln321_fu_2639_p2() {
    mul_ln321_fu_2639_p2 = (!mul_ln321_fu_2639_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln321_fu_2639_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln36_1_fu_5804_p0() {
    mul_ln36_1_fu_5804_p0 =  (sc_lv<4>) (mul_ln36_1_fu_5804_p00.read());
}

void estimate_FR_2::thread_mul_ln36_1_fu_5804_p00() {
    mul_ln36_1_fu_5804_p00 = esl_zext<10,4>(or_ln31_1_reg_7654.read());
}

void estimate_FR_2::thread_mul_ln36_1_fu_5804_p2() {
    mul_ln36_1_fu_5804_p2 = (!mul_ln36_1_fu_5804_p0.read().is_01() || !ap_const_lv10_16.is_01())? sc_lv<10>(): sc_biguint<4>(mul_ln36_1_fu_5804_p0.read()) * sc_biguint<10>(ap_const_lv10_16);
}

void estimate_FR_2::thread_mul_ln36_2_fu_5886_p0() {
    mul_ln36_2_fu_5886_p0 =  (sc_lv<4>) (mul_ln36_2_fu_5886_p00.read());
}

void estimate_FR_2::thread_mul_ln36_2_fu_5886_p00() {
    mul_ln36_2_fu_5886_p00 = esl_zext<10,4>(or_ln31_2_reg_7699.read());
}

void estimate_FR_2::thread_mul_ln36_2_fu_5886_p2() {
    mul_ln36_2_fu_5886_p2 = (!mul_ln36_2_fu_5886_p0.read().is_01() || !ap_const_lv10_16.is_01())? sc_lv<10>(): sc_biguint<4>(mul_ln36_2_fu_5886_p0.read()) * sc_biguint<10>(ap_const_lv10_16);
}

void estimate_FR_2::thread_mul_ln36_fu_5722_p0() {
    mul_ln36_fu_5722_p0 =  (sc_lv<4>) (mul_ln36_fu_5722_p00.read());
}

void estimate_FR_2::thread_mul_ln36_fu_5722_p00() {
    mul_ln36_fu_5722_p00 = esl_zext<10,4>(or_ln31_reg_7609.read());
}

void estimate_FR_2::thread_mul_ln36_fu_5722_p2() {
    mul_ln36_fu_5722_p2 = (!mul_ln36_fu_5722_p0.read().is_01() || !ap_const_lv10_16.is_01())? sc_lv<10>(): sc_biguint<4>(mul_ln36_fu_5722_p0.read()) * sc_biguint<10>(ap_const_lv10_16);
}

void estimate_FR_2::thread_mul_ln555_10_fu_5350_p0() {
    mul_ln555_10_fu_5350_p0 =  (sc_lv<6>) (mul_ln555_10_fu_5350_p00.read());
}

void estimate_FR_2::thread_mul_ln555_10_fu_5350_p00() {
    mul_ln555_10_fu_5350_p00 = esl_zext<14,6>(or_ln34_1_fu_5340_p2.read());
}

void estimate_FR_2::thread_mul_ln555_10_fu_5350_p2() {
    mul_ln555_10_fu_5350_p2 = (!mul_ln555_10_fu_5350_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_10_fu_5350_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_11_fu_5386_p0() {
    mul_ln555_11_fu_5386_p0 =  (sc_lv<6>) (mul_ln555_11_fu_5386_p00.read());
}

void estimate_FR_2::thread_mul_ln555_11_fu_5386_p00() {
    mul_ln555_11_fu_5386_p00 = esl_zext<14,6>(or_ln35_1_fu_5376_p2.read());
}

void estimate_FR_2::thread_mul_ln555_11_fu_5386_p2() {
    mul_ln555_11_fu_5386_p2 = (!mul_ln555_11_fu_5386_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_11_fu_5386_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_12_fu_5430_p0() {
    mul_ln555_12_fu_5430_p0 =  (sc_lv<6>) (mul_ln555_12_fu_5430_p00.read());
}

void estimate_FR_2::thread_mul_ln555_12_fu_5430_p00() {
    mul_ln555_12_fu_5430_p00 = esl_zext<14,6>(tmp_154_fu_5418_p3.read());
}

void estimate_FR_2::thread_mul_ln555_12_fu_5430_p2() {
    mul_ln555_12_fu_5430_p2 = (!mul_ln555_12_fu_5430_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_12_fu_5430_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_13_fu_5466_p0() {
    mul_ln555_13_fu_5466_p0 =  (sc_lv<6>) (mul_ln555_13_fu_5466_p00.read());
}

void estimate_FR_2::thread_mul_ln555_13_fu_5466_p00() {
    mul_ln555_13_fu_5466_p00 = esl_zext<14,6>(or_ln33_2_fu_5456_p2.read());
}

void estimate_FR_2::thread_mul_ln555_13_fu_5466_p2() {
    mul_ln555_13_fu_5466_p2 = (!mul_ln555_13_fu_5466_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_13_fu_5466_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_14_fu_5502_p0() {
    mul_ln555_14_fu_5502_p0 =  (sc_lv<6>) (mul_ln555_14_fu_5502_p00.read());
}

void estimate_FR_2::thread_mul_ln555_14_fu_5502_p00() {
    mul_ln555_14_fu_5502_p00 = esl_zext<14,6>(or_ln34_2_fu_5492_p2.read());
}

void estimate_FR_2::thread_mul_ln555_14_fu_5502_p2() {
    mul_ln555_14_fu_5502_p2 = (!mul_ln555_14_fu_5502_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_14_fu_5502_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_15_fu_5538_p0() {
    mul_ln555_15_fu_5538_p0 =  (sc_lv<6>) (mul_ln555_15_fu_5538_p00.read());
}

void estimate_FR_2::thread_mul_ln555_15_fu_5538_p00() {
    mul_ln555_15_fu_5538_p00 = esl_zext<14,6>(or_ln35_2_fu_5528_p2.read());
}

void estimate_FR_2::thread_mul_ln555_15_fu_5538_p2() {
    mul_ln555_15_fu_5538_p2 = (!mul_ln555_15_fu_5538_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_15_fu_5538_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_16_fu_5602_p0() {
    mul_ln555_16_fu_5602_p0 =  (sc_lv<7>) (mul_ln555_16_fu_5602_p00.read());
}

void estimate_FR_2::thread_mul_ln555_16_fu_5602_p00() {
    mul_ln555_16_fu_5602_p00 = esl_zext<16,7>(shl_ln32_8_fu_5590_p3.read());
}

void estimate_FR_2::thread_mul_ln555_16_fu_5602_p2() {
    mul_ln555_16_fu_5602_p2 = (!mul_ln555_16_fu_5602_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_16_fu_5602_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_17_fu_5628_p0() {
    mul_ln555_17_fu_5628_p0 =  (sc_lv<7>) (mul_ln555_17_fu_5628_p00.read());
}

void estimate_FR_2::thread_mul_ln555_17_fu_5628_p00() {
    mul_ln555_17_fu_5628_p00 = esl_zext<16,7>(or_ln33_3_fu_5618_p2.read());
}

void estimate_FR_2::thread_mul_ln555_17_fu_5628_p2() {
    mul_ln555_17_fu_5628_p2 = (!mul_ln555_17_fu_5628_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_17_fu_5628_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_18_fu_6093_p0() {
    mul_ln555_18_fu_6093_p0 =  (sc_lv<7>) (mul_ln555_18_fu_6093_p00.read());
}

void estimate_FR_2::thread_mul_ln555_18_fu_6093_p00() {
    mul_ln555_18_fu_6093_p00 = esl_zext<16,7>(or_ln34_3_fu_6084_p2.read());
}

void estimate_FR_2::thread_mul_ln555_18_fu_6093_p2() {
    mul_ln555_18_fu_6093_p2 = (!mul_ln555_18_fu_6093_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_18_fu_6093_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_19_fu_6128_p0() {
    mul_ln555_19_fu_6128_p0 =  (sc_lv<7>) (mul_ln555_19_fu_6128_p00.read());
}

void estimate_FR_2::thread_mul_ln555_19_fu_6128_p00() {
    mul_ln555_19_fu_6128_p00 = esl_zext<16,7>(or_ln35_3_fu_6119_p2.read());
}

void estimate_FR_2::thread_mul_ln555_19_fu_6128_p2() {
    mul_ln555_19_fu_6128_p2 = (!mul_ln555_19_fu_6128_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_19_fu_6128_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_1_fu_4981_p0() {
    mul_ln555_1_fu_4981_p0 =  (sc_lv<6>) (mul_ln555_1_fu_4981_p00.read());
}

void estimate_FR_2::thread_mul_ln555_1_fu_4981_p00() {
    mul_ln555_1_fu_4981_p00 = esl_zext<14,6>(or_ln555_fu_4971_p2.read());
}

void estimate_FR_2::thread_mul_ln555_1_fu_4981_p2() {
    mul_ln555_1_fu_4981_p2 = (!mul_ln555_1_fu_4981_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_1_fu_4981_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_20_fu_6172_p0() {
    mul_ln555_20_fu_6172_p0 =  (sc_lv<7>) (mul_ln555_20_fu_6172_p00.read());
}

void estimate_FR_2::thread_mul_ln555_20_fu_6172_p00() {
    mul_ln555_20_fu_6172_p00 = esl_zext<16,7>(tmp_170_fu_6160_p3.read());
}

void estimate_FR_2::thread_mul_ln555_20_fu_6172_p2() {
    mul_ln555_20_fu_6172_p2 = (!mul_ln555_20_fu_6172_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_20_fu_6172_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_21_fu_6208_p0() {
    mul_ln555_21_fu_6208_p0 =  (sc_lv<7>) (mul_ln555_21_fu_6208_p00.read());
}

void estimate_FR_2::thread_mul_ln555_21_fu_6208_p00() {
    mul_ln555_21_fu_6208_p00 = esl_zext<16,7>(or_ln33_4_fu_6198_p2.read());
}

void estimate_FR_2::thread_mul_ln555_21_fu_6208_p2() {
    mul_ln555_21_fu_6208_p2 = (!mul_ln555_21_fu_6208_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_21_fu_6208_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_22_fu_6244_p0() {
    mul_ln555_22_fu_6244_p0 =  (sc_lv<7>) (mul_ln555_22_fu_6244_p00.read());
}

void estimate_FR_2::thread_mul_ln555_22_fu_6244_p00() {
    mul_ln555_22_fu_6244_p00 = esl_zext<16,7>(or_ln34_4_fu_6234_p2.read());
}

void estimate_FR_2::thread_mul_ln555_22_fu_6244_p2() {
    mul_ln555_22_fu_6244_p2 = (!mul_ln555_22_fu_6244_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_22_fu_6244_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_23_fu_6280_p0() {
    mul_ln555_23_fu_6280_p0 =  (sc_lv<7>) (mul_ln555_23_fu_6280_p00.read());
}

void estimate_FR_2::thread_mul_ln555_23_fu_6280_p00() {
    mul_ln555_23_fu_6280_p00 = esl_zext<16,7>(or_ln35_4_fu_6270_p2.read());
}

void estimate_FR_2::thread_mul_ln555_23_fu_6280_p2() {
    mul_ln555_23_fu_6280_p2 = (!mul_ln555_23_fu_6280_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_23_fu_6280_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_24_fu_6324_p0() {
    mul_ln555_24_fu_6324_p0 =  (sc_lv<7>) (mul_ln555_24_fu_6324_p00.read());
}

void estimate_FR_2::thread_mul_ln555_24_fu_6324_p00() {
    mul_ln555_24_fu_6324_p00 = esl_zext<16,7>(tmp_176_fu_6312_p3.read());
}

void estimate_FR_2::thread_mul_ln555_24_fu_6324_p2() {
    mul_ln555_24_fu_6324_p2 = (!mul_ln555_24_fu_6324_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_24_fu_6324_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_25_fu_6360_p0() {
    mul_ln555_25_fu_6360_p0 =  (sc_lv<7>) (mul_ln555_25_fu_6360_p00.read());
}

void estimate_FR_2::thread_mul_ln555_25_fu_6360_p00() {
    mul_ln555_25_fu_6360_p00 = esl_zext<16,7>(or_ln33_5_fu_6350_p2.read());
}

void estimate_FR_2::thread_mul_ln555_25_fu_6360_p2() {
    mul_ln555_25_fu_6360_p2 = (!mul_ln555_25_fu_6360_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_25_fu_6360_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_26_fu_6396_p0() {
    mul_ln555_26_fu_6396_p0 =  (sc_lv<7>) (mul_ln555_26_fu_6396_p00.read());
}

void estimate_FR_2::thread_mul_ln555_26_fu_6396_p00() {
    mul_ln555_26_fu_6396_p00 = esl_zext<16,7>(or_ln34_5_fu_6386_p2.read());
}

void estimate_FR_2::thread_mul_ln555_26_fu_6396_p2() {
    mul_ln555_26_fu_6396_p2 = (!mul_ln555_26_fu_6396_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_26_fu_6396_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_27_fu_6432_p0() {
    mul_ln555_27_fu_6432_p0 =  (sc_lv<7>) (mul_ln555_27_fu_6432_p00.read());
}

void estimate_FR_2::thread_mul_ln555_27_fu_6432_p00() {
    mul_ln555_27_fu_6432_p00 = esl_zext<16,7>(or_ln35_5_fu_6422_p2.read());
}

void estimate_FR_2::thread_mul_ln555_27_fu_6432_p2() {
    mul_ln555_27_fu_6432_p2 = (!mul_ln555_27_fu_6432_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_27_fu_6432_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_28_fu_6476_p0() {
    mul_ln555_28_fu_6476_p0 =  (sc_lv<7>) (mul_ln555_28_fu_6476_p00.read());
}

void estimate_FR_2::thread_mul_ln555_28_fu_6476_p00() {
    mul_ln555_28_fu_6476_p00 = esl_zext<16,7>(tmp_182_fu_6464_p3.read());
}

void estimate_FR_2::thread_mul_ln555_28_fu_6476_p2() {
    mul_ln555_28_fu_6476_p2 = (!mul_ln555_28_fu_6476_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_28_fu_6476_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_29_fu_6512_p0() {
    mul_ln555_29_fu_6512_p0 =  (sc_lv<7>) (mul_ln555_29_fu_6512_p00.read());
}

void estimate_FR_2::thread_mul_ln555_29_fu_6512_p00() {
    mul_ln555_29_fu_6512_p00 = esl_zext<16,7>(or_ln33_6_fu_6502_p2.read());
}

void estimate_FR_2::thread_mul_ln555_29_fu_6512_p2() {
    mul_ln555_29_fu_6512_p2 = (!mul_ln555_29_fu_6512_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_29_fu_6512_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_2_fu_5025_p0() {
    mul_ln555_2_fu_5025_p0 =  (sc_lv<6>) (mul_ln555_2_fu_5025_p00.read());
}

void estimate_FR_2::thread_mul_ln555_2_fu_5025_p00() {
    mul_ln555_2_fu_5025_p00 = esl_zext<14,6>(or_ln555_1_fu_5015_p2.read());
}

void estimate_FR_2::thread_mul_ln555_2_fu_5025_p2() {
    mul_ln555_2_fu_5025_p2 = (!mul_ln555_2_fu_5025_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_2_fu_5025_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_30_fu_6548_p0() {
    mul_ln555_30_fu_6548_p0 =  (sc_lv<7>) (mul_ln555_30_fu_6548_p00.read());
}

void estimate_FR_2::thread_mul_ln555_30_fu_6548_p00() {
    mul_ln555_30_fu_6548_p00 = esl_zext<16,7>(or_ln34_6_fu_6538_p2.read());
}

void estimate_FR_2::thread_mul_ln555_30_fu_6548_p2() {
    mul_ln555_30_fu_6548_p2 = (!mul_ln555_30_fu_6548_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_30_fu_6548_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_31_fu_6584_p0() {
    mul_ln555_31_fu_6584_p0 =  (sc_lv<7>) (mul_ln555_31_fu_6584_p00.read());
}

void estimate_FR_2::thread_mul_ln555_31_fu_6584_p00() {
    mul_ln555_31_fu_6584_p00 = esl_zext<16,7>(or_ln35_6_fu_6574_p2.read());
}

void estimate_FR_2::thread_mul_ln555_31_fu_6584_p2() {
    mul_ln555_31_fu_6584_p2 = (!mul_ln555_31_fu_6584_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<7>(mul_ln555_31_fu_6584_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void estimate_FR_2::thread_mul_ln555_3_fu_5069_p0() {
    mul_ln555_3_fu_5069_p0 =  (sc_lv<6>) (mul_ln555_3_fu_5069_p00.read());
}

void estimate_FR_2::thread_mul_ln555_3_fu_5069_p00() {
    mul_ln555_3_fu_5069_p00 = esl_zext<14,6>(or_ln555_2_fu_5059_p2.read());
}

void estimate_FR_2::thread_mul_ln555_3_fu_5069_p2() {
    mul_ln555_3_fu_5069_p2 = (!mul_ln555_3_fu_5069_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_3_fu_5069_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_4_fu_5126_p0() {
    mul_ln555_4_fu_5126_p0 =  (sc_lv<6>) (mul_ln555_4_fu_5126_p00.read());
}

void estimate_FR_2::thread_mul_ln555_4_fu_5126_p00() {
    mul_ln555_4_fu_5126_p00 = esl_zext<14,6>(tmp_140_fu_5114_p3.read());
}

void estimate_FR_2::thread_mul_ln555_4_fu_5126_p2() {
    mul_ln555_4_fu_5126_p2 = (!mul_ln555_4_fu_5126_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_4_fu_5126_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_5_fu_5162_p0() {
    mul_ln555_5_fu_5162_p0 =  (sc_lv<6>) (mul_ln555_5_fu_5162_p00.read());
}

void estimate_FR_2::thread_mul_ln555_5_fu_5162_p00() {
    mul_ln555_5_fu_5162_p00 = esl_zext<14,6>(or_ln33_fu_5152_p2.read());
}

void estimate_FR_2::thread_mul_ln555_5_fu_5162_p2() {
    mul_ln555_5_fu_5162_p2 = (!mul_ln555_5_fu_5162_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_5_fu_5162_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_6_fu_5198_p0() {
    mul_ln555_6_fu_5198_p0 =  (sc_lv<6>) (mul_ln555_6_fu_5198_p00.read());
}

void estimate_FR_2::thread_mul_ln555_6_fu_5198_p00() {
    mul_ln555_6_fu_5198_p00 = esl_zext<14,6>(or_ln34_fu_5188_p2.read());
}

void estimate_FR_2::thread_mul_ln555_6_fu_5198_p2() {
    mul_ln555_6_fu_5198_p2 = (!mul_ln555_6_fu_5198_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_6_fu_5198_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_7_fu_5234_p0() {
    mul_ln555_7_fu_5234_p0 =  (sc_lv<6>) (mul_ln555_7_fu_5234_p00.read());
}

void estimate_FR_2::thread_mul_ln555_7_fu_5234_p00() {
    mul_ln555_7_fu_5234_p00 = esl_zext<14,6>(or_ln35_fu_5224_p2.read());
}

void estimate_FR_2::thread_mul_ln555_7_fu_5234_p2() {
    mul_ln555_7_fu_5234_p2 = (!mul_ln555_7_fu_5234_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_7_fu_5234_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_8_fu_5278_p0() {
    mul_ln555_8_fu_5278_p0 =  (sc_lv<6>) (mul_ln555_8_fu_5278_p00.read());
}

void estimate_FR_2::thread_mul_ln555_8_fu_5278_p00() {
    mul_ln555_8_fu_5278_p00 = esl_zext<14,6>(tmp_147_fu_5266_p3.read());
}

void estimate_FR_2::thread_mul_ln555_8_fu_5278_p2() {
    mul_ln555_8_fu_5278_p2 = (!mul_ln555_8_fu_5278_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_8_fu_5278_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_9_fu_5314_p0() {
    mul_ln555_9_fu_5314_p0 =  (sc_lv<6>) (mul_ln555_9_fu_5314_p00.read());
}

void estimate_FR_2::thread_mul_ln555_9_fu_5314_p00() {
    mul_ln555_9_fu_5314_p00 = esl_zext<14,6>(or_ln33_1_fu_5304_p2.read());
}

void estimate_FR_2::thread_mul_ln555_9_fu_5314_p2() {
    mul_ln555_9_fu_5314_p2 = (!mul_ln555_9_fu_5314_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_9_fu_5314_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_mul_ln555_fu_4937_p0() {
    mul_ln555_fu_4937_p0 =  (sc_lv<6>) (mul_ln555_fu_4937_p00.read());
}

void estimate_FR_2::thread_mul_ln555_fu_4937_p00() {
    mul_ln555_fu_4937_p00 = esl_zext<14,6>(shl_ln32_tr_fu_4925_p3.read());
}

void estimate_FR_2::thread_mul_ln555_fu_4937_p2() {
    mul_ln555_fu_4937_p2 = (!mul_ln555_fu_4937_p0.read().is_01() || !ap_const_lv14_56.is_01())? sc_lv<14>(): sc_biguint<6>(mul_ln555_fu_4937_p0.read()) * sc_biguint<14>(ap_const_lv14_56);
}

void estimate_FR_2::thread_or_ln12_1_fu_2690_p2() {
    or_ln12_1_fu_2690_p2 = (empty_46_fu_2598_p1.read() | ap_const_lv4_2);
}

void estimate_FR_2::thread_or_ln12_2_fu_2831_p2() {
    or_ln12_2_fu_2831_p2 = (empty_46_fu_2598_p1.read() | ap_const_lv4_3);
}

void estimate_FR_2::thread_or_ln12_fu_2655_p2() {
    or_ln12_fu_2655_p2 = (empty_46_fu_2598_p1.read() | ap_const_lv4_1);
}

void estimate_FR_2::thread_or_ln14_1_fu_2753_p2() {
    or_ln14_1_fu_2753_p2 = (tmp_83_fu_2696_p3.read() | ap_const_lv6_1);
}

void estimate_FR_2::thread_or_ln14_2_fu_3455_p2() {
    or_ln14_2_fu_3455_p2 = (tmp_94_fu_3414_p3.read() | ap_const_lv6_1);
}

void estimate_FR_2::thread_or_ln14_3_fu_2900_p2() {
    or_ln14_3_fu_2900_p2 = (shl_ln13_8_fu_2872_p3.read() | ap_const_lv7_1);
}

void estimate_FR_2::thread_or_ln14_4_fu_3971_p2() {
    or_ln14_4_fu_3971_p2 = (tmp_116_reg_7100.read() | ap_const_lv7_1);
}

void estimate_FR_2::thread_or_ln14_5_fu_4116_p2() {
    or_ln14_5_fu_4116_p2 = (tmp_121_fu_4079_p3.read() | ap_const_lv7_1);
}

void estimate_FR_2::thread_or_ln14_6_fu_4255_p2() {
    or_ln14_6_fu_4255_p2 = (tmp_126_fu_4227_p3.read() | ap_const_lv7_1);
}

void estimate_FR_2::thread_or_ln14_fu_3206_p2() {
    or_ln14_fu_3206_p2 = (tmp_59_fu_3165_p3.read() | ap_const_lv6_1);
}

void estimate_FR_2::thread_or_ln15_1_fu_2779_p2() {
    or_ln15_1_fu_2779_p2 = (tmp_83_fu_2696_p3.read() | ap_const_lv6_2);
}

void estimate_FR_2::thread_or_ln15_2_fu_3501_p2() {
    or_ln15_2_fu_3501_p2 = (tmp_94_fu_3414_p3.read() | ap_const_lv6_2);
}

void estimate_FR_2::thread_or_ln15_3_fu_2926_p2() {
    or_ln15_3_fu_2926_p2 = (shl_ln13_8_fu_2872_p3.read() | ap_const_lv7_2);
}

void estimate_FR_2::thread_or_ln15_4_fu_4005_p2() {
    or_ln15_4_fu_4005_p2 = (tmp_116_reg_7100.read() | ap_const_lv7_2);
}

void estimate_FR_2::thread_or_ln15_5_fu_4151_p2() {
    or_ln15_5_fu_4151_p2 = (tmp_121_fu_4079_p3.read() | ap_const_lv7_2);
}

void estimate_FR_2::thread_or_ln15_6_fu_4281_p2() {
    or_ln15_6_fu_4281_p2 = (tmp_126_fu_4227_p3.read() | ap_const_lv7_2);
}

void estimate_FR_2::thread_or_ln15_fu_3252_p2() {
    or_ln15_fu_3252_p2 = (tmp_59_fu_3165_p3.read() | ap_const_lv6_2);
}

void estimate_FR_2::thread_or_ln16_1_fu_2805_p2() {
    or_ln16_1_fu_2805_p2 = (tmp_83_fu_2696_p3.read() | ap_const_lv6_3);
}

void estimate_FR_2::thread_or_ln16_2_fu_3547_p2() {
    or_ln16_2_fu_3547_p2 = (tmp_94_fu_3414_p3.read() | ap_const_lv6_3);
}

void estimate_FR_2::thread_or_ln16_3_fu_2952_p2() {
    or_ln16_3_fu_2952_p2 = (shl_ln13_8_fu_2872_p3.read() | ap_const_lv7_3);
}

void estimate_FR_2::thread_or_ln16_4_fu_4039_p2() {
    or_ln16_4_fu_4039_p2 = (tmp_116_reg_7100.read() | ap_const_lv7_3);
}

void estimate_FR_2::thread_or_ln16_5_fu_4186_p2() {
    or_ln16_5_fu_4186_p2 = (tmp_121_fu_4079_p3.read() | ap_const_lv7_3);
}

void estimate_FR_2::thread_or_ln16_6_fu_4307_p2() {
    or_ln16_6_fu_4307_p2 = (tmp_126_fu_4227_p3.read() | ap_const_lv7_3);
}

void estimate_FR_2::thread_or_ln16_fu_3298_p2() {
    or_ln16_fu_3298_p2 = (tmp_59_fu_3165_p3.read() | ap_const_lv6_3);
}

void estimate_FR_2::thread_or_ln31_1_fu_5260_p2() {
    or_ln31_1_fu_5260_p2 = (empty_51_fu_4897_p1.read() | ap_const_lv4_2);
}

void estimate_FR_2::thread_or_ln31_2_fu_5412_p2() {
    or_ln31_2_fu_5412_p2 = (empty_51_fu_4897_p1.read() | ap_const_lv4_3);
}

void estimate_FR_2::thread_or_ln31_fu_5108_p2() {
    or_ln31_fu_5108_p2 = (empty_51_fu_4897_p1.read() | ap_const_lv4_1);
}

void estimate_FR_2::thread_or_ln321_1_fu_3076_p2() {
    or_ln321_1_fu_3076_p2 = (tmp_37_fu_3057_p3.read() | ap_const_lv6_2);
}

void estimate_FR_2::thread_or_ln321_2_fu_3130_p2() {
    or_ln321_2_fu_3130_p2 = (tmp_49_fu_3111_p3.read() | ap_const_lv6_3);
}

void estimate_FR_2::thread_or_ln321_fu_3022_p2() {
    or_ln321_fu_3022_p2 = (tmp_27_fu_3003_p3.read() | ap_const_lv6_1);
}

void estimate_FR_2::thread_or_ln33_1_fu_5304_p2() {
    or_ln33_1_fu_5304_p2 = (tmp_147_fu_5266_p3.read() | ap_const_lv6_1);
}

void estimate_FR_2::thread_or_ln33_2_fu_5456_p2() {
    or_ln33_2_fu_5456_p2 = (tmp_154_fu_5418_p3.read() | ap_const_lv6_1);
}

void estimate_FR_2::thread_or_ln33_3_fu_5618_p2() {
    or_ln33_3_fu_5618_p2 = (shl_ln32_8_fu_5590_p3.read() | ap_const_lv7_1);
}

void estimate_FR_2::thread_or_ln33_4_fu_6198_p2() {
    or_ln33_4_fu_6198_p2 = (tmp_170_fu_6160_p3.read() | ap_const_lv7_1);
}

void estimate_FR_2::thread_or_ln33_5_fu_6350_p2() {
    or_ln33_5_fu_6350_p2 = (tmp_176_fu_6312_p3.read() | ap_const_lv7_1);
}

void estimate_FR_2::thread_or_ln33_6_fu_6502_p2() {
    or_ln33_6_fu_6502_p2 = (tmp_182_fu_6464_p3.read() | ap_const_lv7_1);
}

void estimate_FR_2::thread_or_ln33_fu_5152_p2() {
    or_ln33_fu_5152_p2 = (tmp_140_fu_5114_p3.read() | ap_const_lv6_1);
}

void estimate_FR_2::thread_or_ln34_1_fu_5340_p2() {
    or_ln34_1_fu_5340_p2 = (tmp_147_fu_5266_p3.read() | ap_const_lv6_2);
}

void estimate_FR_2::thread_or_ln34_2_fu_5492_p2() {
    or_ln34_2_fu_5492_p2 = (tmp_154_fu_5418_p3.read() | ap_const_lv6_2);
}

void estimate_FR_2::thread_or_ln34_3_fu_6084_p2() {
    or_ln34_3_fu_6084_p2 = (shl_ln32_8_reg_7824.read() | ap_const_lv7_2);
}

void estimate_FR_2::thread_or_ln34_4_fu_6234_p2() {
    or_ln34_4_fu_6234_p2 = (tmp_170_fu_6160_p3.read() | ap_const_lv7_2);
}

void estimate_FR_2::thread_or_ln34_5_fu_6386_p2() {
    or_ln34_5_fu_6386_p2 = (tmp_176_fu_6312_p3.read() | ap_const_lv7_2);
}

void estimate_FR_2::thread_or_ln34_6_fu_6538_p2() {
    or_ln34_6_fu_6538_p2 = (tmp_182_fu_6464_p3.read() | ap_const_lv7_2);
}

void estimate_FR_2::thread_or_ln34_fu_5188_p2() {
    or_ln34_fu_5188_p2 = (tmp_140_fu_5114_p3.read() | ap_const_lv6_2);
}

void estimate_FR_2::thread_or_ln35_1_fu_5376_p2() {
    or_ln35_1_fu_5376_p2 = (tmp_147_fu_5266_p3.read() | ap_const_lv6_3);
}

void estimate_FR_2::thread_or_ln35_2_fu_5528_p2() {
    or_ln35_2_fu_5528_p2 = (tmp_154_fu_5418_p3.read() | ap_const_lv6_3);
}

void estimate_FR_2::thread_or_ln35_3_fu_6119_p2() {
    or_ln35_3_fu_6119_p2 = (shl_ln32_8_reg_7824.read() | ap_const_lv7_3);
}

void estimate_FR_2::thread_or_ln35_4_fu_6270_p2() {
    or_ln35_4_fu_6270_p2 = (tmp_170_fu_6160_p3.read() | ap_const_lv7_3);
}

void estimate_FR_2::thread_or_ln35_5_fu_6422_p2() {
    or_ln35_5_fu_6422_p2 = (tmp_176_fu_6312_p3.read() | ap_const_lv7_3);
}

void estimate_FR_2::thread_or_ln35_6_fu_6574_p2() {
    or_ln35_6_fu_6574_p2 = (tmp_182_fu_6464_p3.read() | ap_const_lv7_3);
}

void estimate_FR_2::thread_or_ln35_fu_5224_p2() {
    or_ln35_fu_5224_p2 = (tmp_140_fu_5114_p3.read() | ap_const_lv6_3);
}

void estimate_FR_2::thread_or_ln555_1_fu_5015_p2() {
    or_ln555_1_fu_5015_p2 = (tmp_135_fu_5007_p3.read() | ap_const_lv6_2);
}

void estimate_FR_2::thread_or_ln555_2_fu_5059_p2() {
    or_ln555_2_fu_5059_p2 = (tmp_137_fu_5051_p3.read() | ap_const_lv6_3);
}

void estimate_FR_2::thread_or_ln555_fu_4971_p2() {
    or_ln555_fu_4971_p2 = (tmp_133_fu_4963_p3.read() | ap_const_lv6_1);
}

void estimate_FR_2::thread_outputs_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            outputs_0_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            outputs_0_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
        } else {
            outputs_0_address0 =  (sc_lv<1>) ("X");
        }
    } else {
        outputs_0_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        outputs_0_ce0 = ap_const_logic_1;
    } else {
        outputs_0_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            outputs_0_d0 = zext_ln42_fu_5691_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            outputs_0_d0 = ap_const_lv32_1;
        } else {
            outputs_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        outputs_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())))) {
        outputs_0_we0 = ap_const_logic_1;
    } else {
        outputs_0_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_10_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567_pp2_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_10_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
    } else {
        outputs_10_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_10_ce0 = ap_const_logic_1;
    } else {
        outputs_10_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_10_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_10_d0 = zext_ln42_10_fu_6886_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_10_d0 = ap_const_lv32_1;
    } else {
        outputs_10_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_10_we0 = ap_const_logic_1;
    } else {
        outputs_10_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_11_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567_pp2_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_11_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
    } else {
        outputs_11_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_11_ce0 = ap_const_logic_1;
    } else {
        outputs_11_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_11_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_11_d0 = zext_ln42_11_fu_6911_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_11_d0 = ap_const_lv32_1;
    } else {
        outputs_11_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_11_we0 = ap_const_logic_1;
    } else {
        outputs_11_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_1_addr_gep_fu_1938_p3() {
    outputs_1_addr_gep_fu_1938_p3 =  (sc_lv<1>) (zext_ln36_3_fu_5742_p1.read());
}

void estimate_FR_2::thread_outputs_1_address0() {
    if (esl_seteq<1,1,1>(ap_condition_1634.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1)) {
            outputs_1_address0 = outputs_1_addr_gep_fu_1938_p3.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) {
            outputs_1_address0 =  (sc_lv<1>) (zext_ln36_3_fu_5742_p1.read());
        } else {
            outputs_1_address0 =  (sc_lv<1>) ("X");
        }
    } else {
        outputs_1_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)))) {
        outputs_1_ce0 = ap_const_logic_1;
    } else {
        outputs_1_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_1_d0() {
    if (esl_seteq<1,1,1>(ap_condition_1634.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1)) {
            outputs_1_d0 = zext_ln42_1_fu_5773_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) {
            outputs_1_d0 = ap_const_lv32_1;
        } else {
            outputs_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        outputs_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)))) {
        outputs_1_we0 = ap_const_logic_1;
    } else {
        outputs_1_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_2_addr_gep_fu_1968_p3() {
    outputs_2_addr_gep_fu_1968_p3 =  (sc_lv<1>) (zext_ln36_5_fu_5824_p1.read());
}

void estimate_FR_2::thread_outputs_2_address0() {
    if (esl_seteq<1,1,1>(ap_condition_1634.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1)) {
            outputs_2_address0 = outputs_2_addr_gep_fu_1968_p3.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) {
            outputs_2_address0 =  (sc_lv<1>) (zext_ln36_5_fu_5824_p1.read());
        } else {
            outputs_2_address0 =  (sc_lv<1>) ("X");
        }
    } else {
        outputs_2_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)))) {
        outputs_2_ce0 = ap_const_logic_1;
    } else {
        outputs_2_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_2_d0() {
    if (esl_seteq<1,1,1>(ap_condition_1634.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1)) {
            outputs_2_d0 = zext_ln42_2_fu_5855_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) {
            outputs_2_d0 = ap_const_lv32_1;
        } else {
            outputs_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        outputs_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)))) {
        outputs_2_we0 = ap_const_logic_1;
    } else {
        outputs_2_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_3_addr_gep_fu_1998_p3() {
    outputs_3_addr_gep_fu_1998_p3 =  (sc_lv<1>) (zext_ln36_7_fu_5906_p1.read());
}

void estimate_FR_2::thread_outputs_3_address0() {
    if (esl_seteq<1,1,1>(ap_condition_1634.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1)) {
            outputs_3_address0 = outputs_3_addr_gep_fu_1998_p3.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) {
            outputs_3_address0 =  (sc_lv<1>) (zext_ln36_7_fu_5906_p1.read());
        } else {
            outputs_3_address0 =  (sc_lv<1>) ("X");
        }
    } else {
        outputs_3_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)))) {
        outputs_3_ce0 = ap_const_logic_1;
    } else {
        outputs_3_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_3_d0() {
    if (esl_seteq<1,1,1>(ap_condition_1634.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1)) {
            outputs_3_d0 = zext_ln42_3_fu_5937_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) {
            outputs_3_d0 = ap_const_lv32_1;
        } else {
            outputs_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        outputs_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)))) {
        outputs_3_we0 = ap_const_logic_1;
    } else {
        outputs_3_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            outputs_4_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            outputs_4_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
        } else {
            outputs_4_address0 =  (sc_lv<1>) ("X");
        }
    } else {
        outputs_4_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        outputs_4_ce0 = ap_const_logic_1;
    } else {
        outputs_4_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            outputs_4_d0 = zext_ln42_4_fu_5989_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            outputs_4_d0 = ap_const_lv32_1;
        } else {
            outputs_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        outputs_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())))) {
        outputs_4_we0 = ap_const_logic_1;
    } else {
        outputs_4_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            outputs_5_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            outputs_5_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
        } else {
            outputs_5_address0 =  (sc_lv<1>) ("X");
        }
    } else {
        outputs_5_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0)))) {
        outputs_5_ce0 = ap_const_logic_1;
    } else {
        outputs_5_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
            outputs_5_d0 = zext_ln42_5_fu_6041_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
            outputs_5_d0 = ap_const_lv32_1;
        } else {
            outputs_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        outputs_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_reg_7538.read())))) {
        outputs_5_we0 = ap_const_logic_1;
    } else {
        outputs_5_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_6_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567_pp2_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_6_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
    } else {
        outputs_6_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_6_ce0 = ap_const_logic_1;
    } else {
        outputs_6_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_6_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_6_d0 = zext_ln42_6_fu_6786_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_6_d0 = ap_const_lv32_1;
    } else {
        outputs_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_6_we0 = ap_const_logic_1;
    } else {
        outputs_6_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_7_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567_pp2_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_7_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
    } else {
        outputs_7_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_7_ce0 = ap_const_logic_1;
    } else {
        outputs_7_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_7_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_7_d0 = zext_ln42_7_fu_6811_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_7_d0 = ap_const_lv32_1;
    } else {
        outputs_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_7_we0 = ap_const_logic_1;
    } else {
        outputs_7_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_8_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567_pp2_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_8_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
    } else {
        outputs_8_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_8_ce0 = ap_const_logic_1;
    } else {
        outputs_8_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_8_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_8_d0 = zext_ln42_8_fu_6836_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_8_d0 = ap_const_lv32_1;
    } else {
        outputs_8_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_8_we0 = ap_const_logic_1;
    } else {
        outputs_8_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_9_address0 =  (sc_lv<1>) (zext_ln36_1_reg_7567_pp2_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_9_address0 =  (sc_lv<1>) (zext_ln36_1_fu_5095_p1.read());
    } else {
        outputs_9_address0 =  (sc_lv<1>) ("X");
    }
}

void estimate_FR_2::thread_outputs_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_9_ce0 = ap_const_logic_1;
    } else {
        outputs_9_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_9_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage1.read(), ap_const_boolean_0))) {
        outputs_9_d0 = zext_ln42_9_fu_6861_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        outputs_9_d0 = ap_const_lv32_1;
    } else {
        outputs_9_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void estimate_FR_2::thread_outputs_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln31_fu_4901_p2.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_2528.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        outputs_9_we0 = ap_const_logic_1;
    } else {
        outputs_9_we0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_sext_ln13_1_fu_2724_p1() {
    sext_ln13_1_fu_2724_p1 = esl_sext<4,2>(tmp_84_fu_2714_p4.read());
}

void estimate_FR_2::thread_sext_ln13_2_fu_2857_p1() {
    sext_ln13_2_fu_2857_p1 = esl_sext<4,2>(tmp_95_fu_2847_p4.read());
}

void estimate_FR_2::thread_sext_ln13_fu_2681_p1() {
    sext_ln13_fu_2681_p1 = esl_sext<4,2>(tmp_64_fu_2671_p4.read());
}

void estimate_FR_2::thread_sext_ln321_10_fu_3387_p1() {
    sext_ln321_10_fu_3387_p1 = esl_sext<6,4>(tmp_92_reg_6960.read());
}

void estimate_FR_2::thread_sext_ln321_11_fu_3406_p1() {
    sext_ln321_11_fu_3406_p1 = esl_sext<6,4>(tmp_93_reg_6965.read());
}

void estimate_FR_2::thread_sext_ln321_12_fu_3446_p1() {
    sext_ln321_12_fu_3446_p1 = esl_sext<6,4>(tmp_96_fu_3436_p4.read());
}

void estimate_FR_2::thread_sext_ln321_13_fu_3492_p1() {
    sext_ln321_13_fu_3492_p1 = esl_sext<6,4>(tmp_101_fu_3482_p4.read());
}

void estimate_FR_2::thread_sext_ln321_14_fu_3538_p1() {
    sext_ln321_14_fu_3538_p1 = esl_sext<6,4>(tmp_102_fu_3528_p4.read());
}

void estimate_FR_2::thread_sext_ln321_15_fu_3584_p1() {
    sext_ln321_15_fu_3584_p1 = esl_sext<6,4>(tmp_107_fu_3574_p4.read());
}

void estimate_FR_2::thread_sext_ln321_16_fu_3931_p1() {
    sext_ln321_16_fu_3931_p1 = esl_sext<7,5>(tmp_108_reg_7005.read());
}

void estimate_FR_2::thread_sext_ln321_17_fu_3939_p1() {
    sext_ln321_17_fu_3939_p1 = esl_sext<7,5>(tmp_113_reg_7010.read());
}

void estimate_FR_2::thread_sext_ln321_18_fu_3947_p1() {
    sext_ln321_18_fu_3947_p1 = esl_sext<7,5>(tmp_114_reg_7015.read());
}

void estimate_FR_2::thread_sext_ln321_19_fu_3955_p1() {
    sext_ln321_19_fu_3955_p1 = esl_sext<7,5>(tmp_115_reg_7020.read());
}

void estimate_FR_2::thread_sext_ln321_1_fu_3048_p1() {
    sext_ln321_1_fu_3048_p1 = esl_sext<6,4>(tmp_31_fu_3038_p4.read());
}

void estimate_FR_2::thread_sext_ln321_20_fu_3963_p1() {
    sext_ln321_20_fu_3963_p1 = esl_sext<7,5>(tmp_117_reg_7112.read());
}

void estimate_FR_2::thread_sext_ln321_21_fu_3996_p1() {
    sext_ln321_21_fu_3996_p1 = esl_sext<7,5>(tmp_118_fu_3986_p4.read());
}

void estimate_FR_2::thread_sext_ln321_22_fu_4030_p1() {
    sext_ln321_22_fu_4030_p1 = esl_sext<7,5>(tmp_119_fu_4020_p4.read());
}

void estimate_FR_2::thread_sext_ln321_23_fu_4064_p1() {
    sext_ln321_23_fu_4064_p1 = esl_sext<7,5>(tmp_120_fu_4054_p4.read());
}

void estimate_FR_2::thread_sext_ln321_24_fu_4107_p1() {
    sext_ln321_24_fu_4107_p1 = esl_sext<7,5>(tmp_122_fu_4097_p4.read());
}

void estimate_FR_2::thread_sext_ln321_25_fu_4142_p1() {
    sext_ln321_25_fu_4142_p1 = esl_sext<7,5>(tmp_123_fu_4132_p4.read());
}

void estimate_FR_2::thread_sext_ln321_26_fu_4177_p1() {
    sext_ln321_26_fu_4177_p1 = esl_sext<7,5>(tmp_124_fu_4167_p4.read());
}

void estimate_FR_2::thread_sext_ln321_27_fu_4212_p1() {
    sext_ln321_27_fu_4212_p1 = esl_sext<7,5>(tmp_125_fu_4202_p4.read());
}

void estimate_FR_2::thread_sext_ln321_28_fu_4339_p1() {
    sext_ln321_28_fu_4339_p1 = esl_sext<7,5>(tmp_127_reg_7172.read());
}

void estimate_FR_2::thread_sext_ln321_29_fu_4347_p1() {
    sext_ln321_29_fu_4347_p1 = esl_sext<7,5>(tmp_128_reg_7177.read());
}

void estimate_FR_2::thread_sext_ln321_2_fu_3102_p1() {
    sext_ln321_2_fu_3102_p1 = esl_sext<6,4>(tmp_43_fu_3092_p4.read());
}

void estimate_FR_2::thread_sext_ln321_30_fu_4355_p1() {
    sext_ln321_30_fu_4355_p1 = esl_sext<7,5>(tmp_129_reg_7182.read());
}

void estimate_FR_2::thread_sext_ln321_31_fu_4363_p1() {
    sext_ln321_31_fu_4363_p1 = esl_sext<7,5>(tmp_130_reg_7187.read());
}

void estimate_FR_2::thread_sext_ln321_3_fu_3156_p1() {
    sext_ln321_3_fu_3156_p1 = esl_sext<6,4>(tmp_54_fu_3146_p4.read());
}

void estimate_FR_2::thread_sext_ln321_4_fu_3197_p1() {
    sext_ln321_4_fu_3197_p1 = esl_sext<6,4>(tmp_69_fu_3187_p4.read());
}

void estimate_FR_2::thread_sext_ln321_5_fu_3243_p1() {
    sext_ln321_5_fu_3243_p1 = esl_sext<6,4>(tmp_70_fu_3233_p4.read());
}

void estimate_FR_2::thread_sext_ln321_6_fu_3289_p1() {
    sext_ln321_6_fu_3289_p1 = esl_sext<6,4>(tmp_76_fu_3279_p4.read());
}

void estimate_FR_2::thread_sext_ln321_7_fu_3335_p1() {
    sext_ln321_7_fu_3335_p1 = esl_sext<6,4>(tmp_77_fu_3325_p4.read());
}

void estimate_FR_2::thread_sext_ln321_8_fu_3349_p1() {
    sext_ln321_8_fu_3349_p1 = esl_sext<6,4>(tmp_90_reg_6950.read());
}

void estimate_FR_2::thread_sext_ln321_9_fu_3368_p1() {
    sext_ln321_9_fu_3368_p1 = esl_sext<6,4>(tmp_91_reg_6955.read());
}

void estimate_FR_2::thread_sext_ln321_fu_2995_p1() {
    sext_ln321_fu_2995_p1 = esl_sext<6,4>(tmp_26_reg_6930.read());
}

void estimate_FR_2::thread_sext_ln36_1_fu_5820_p1() {
    sext_ln36_1_fu_5820_p1 = esl_sext<4,2>(tmp_152_fu_5810_p4.read());
}

void estimate_FR_2::thread_sext_ln36_2_fu_5902_p1() {
    sext_ln36_2_fu_5902_p1 = esl_sext<4,2>(tmp_159_fu_5892_p4.read());
}

void estimate_FR_2::thread_sext_ln36_fu_5738_p1() {
    sext_ln36_fu_5738_p1 = esl_sext<4,2>(tmp_145_fu_5728_p4.read());
}

void estimate_FR_2::thread_sext_ln555_10_fu_5366_p1() {
    sext_ln555_10_fu_5366_p1 = esl_sext<6,4>(tmp_150_fu_5356_p4.read());
}

void estimate_FR_2::thread_sext_ln555_11_fu_5402_p1() {
    sext_ln555_11_fu_5402_p1 = esl_sext<6,4>(tmp_151_fu_5392_p4.read());
}

void estimate_FR_2::thread_sext_ln555_12_fu_5446_p1() {
    sext_ln555_12_fu_5446_p1 = esl_sext<6,4>(tmp_155_fu_5436_p4.read());
}

void estimate_FR_2::thread_sext_ln555_13_fu_5482_p1() {
    sext_ln555_13_fu_5482_p1 = esl_sext<6,4>(tmp_156_fu_5472_p4.read());
}

void estimate_FR_2::thread_sext_ln555_14_fu_5518_p1() {
    sext_ln555_14_fu_5518_p1 = esl_sext<6,4>(tmp_157_fu_5508_p4.read());
}

void estimate_FR_2::thread_sext_ln555_15_fu_5554_p1() {
    sext_ln555_15_fu_5554_p1 = esl_sext<6,4>(tmp_158_fu_5544_p4.read());
}

void estimate_FR_2::thread_sext_ln555_16_fu_6066_p1() {
    sext_ln555_16_fu_6066_p1 = esl_sext<7,5>(tmp_165_reg_7830.read());
}

void estimate_FR_2::thread_sext_ln555_17_fu_6075_p1() {
    sext_ln555_17_fu_6075_p1 = esl_sext<7,5>(tmp_166_reg_7835.read());
}

void estimate_FR_2::thread_sext_ln555_18_fu_6109_p1() {
    sext_ln555_18_fu_6109_p1 = esl_sext<7,5>(tmp_167_fu_6099_p4.read());
}

void estimate_FR_2::thread_sext_ln555_19_fu_6144_p1() {
    sext_ln555_19_fu_6144_p1 = esl_sext<7,5>(tmp_168_fu_6134_p4.read());
}

void estimate_FR_2::thread_sext_ln555_1_fu_4997_p1() {
    sext_ln555_1_fu_4997_p1 = esl_sext<6,4>(tmp_134_fu_4987_p4.read());
}

void estimate_FR_2::thread_sext_ln555_20_fu_6188_p1() {
    sext_ln555_20_fu_6188_p1 = esl_sext<7,5>(tmp_171_fu_6178_p4.read());
}

void estimate_FR_2::thread_sext_ln555_21_fu_6224_p1() {
    sext_ln555_21_fu_6224_p1 = esl_sext<7,5>(tmp_172_fu_6214_p4.read());
}

void estimate_FR_2::thread_sext_ln555_22_fu_6260_p1() {
    sext_ln555_22_fu_6260_p1 = esl_sext<7,5>(tmp_173_fu_6250_p4.read());
}

void estimate_FR_2::thread_sext_ln555_23_fu_6296_p1() {
    sext_ln555_23_fu_6296_p1 = esl_sext<7,5>(tmp_174_fu_6286_p4.read());
}

void estimate_FR_2::thread_sext_ln555_24_fu_6340_p1() {
    sext_ln555_24_fu_6340_p1 = esl_sext<7,5>(tmp_177_fu_6330_p4.read());
}

void estimate_FR_2::thread_sext_ln555_25_fu_6376_p1() {
    sext_ln555_25_fu_6376_p1 = esl_sext<7,5>(tmp_178_fu_6366_p4.read());
}

void estimate_FR_2::thread_sext_ln555_26_fu_6412_p1() {
    sext_ln555_26_fu_6412_p1 = esl_sext<7,5>(tmp_179_fu_6402_p4.read());
}

void estimate_FR_2::thread_sext_ln555_27_fu_6448_p1() {
    sext_ln555_27_fu_6448_p1 = esl_sext<7,5>(tmp_180_fu_6438_p4.read());
}

void estimate_FR_2::thread_sext_ln555_28_fu_6492_p1() {
    sext_ln555_28_fu_6492_p1 = esl_sext<7,5>(tmp_183_fu_6482_p4.read());
}

void estimate_FR_2::thread_sext_ln555_29_fu_6528_p1() {
    sext_ln555_29_fu_6528_p1 = esl_sext<7,5>(tmp_184_fu_6518_p4.read());
}

void estimate_FR_2::thread_sext_ln555_2_fu_5041_p1() {
    sext_ln555_2_fu_5041_p1 = esl_sext<6,4>(tmp_136_fu_5031_p4.read());
}

void estimate_FR_2::thread_sext_ln555_30_fu_6564_p1() {
    sext_ln555_30_fu_6564_p1 = esl_sext<7,5>(tmp_185_fu_6554_p4.read());
}

void estimate_FR_2::thread_sext_ln555_31_fu_6600_p1() {
    sext_ln555_31_fu_6600_p1 = esl_sext<7,5>(tmp_186_fu_6590_p4.read());
}

void estimate_FR_2::thread_sext_ln555_3_fu_5085_p1() {
    sext_ln555_3_fu_5085_p1 = esl_sext<6,4>(tmp_138_fu_5075_p4.read());
}

void estimate_FR_2::thread_sext_ln555_4_fu_5142_p1() {
    sext_ln555_4_fu_5142_p1 = esl_sext<6,4>(tmp_141_fu_5132_p4.read());
}

void estimate_FR_2::thread_sext_ln555_5_fu_5178_p1() {
    sext_ln555_5_fu_5178_p1 = esl_sext<6,4>(tmp_142_fu_5168_p4.read());
}

void estimate_FR_2::thread_sext_ln555_6_fu_5214_p1() {
    sext_ln555_6_fu_5214_p1 = esl_sext<6,4>(tmp_143_fu_5204_p4.read());
}

void estimate_FR_2::thread_sext_ln555_7_fu_5250_p1() {
    sext_ln555_7_fu_5250_p1 = esl_sext<6,4>(tmp_144_fu_5240_p4.read());
}

void estimate_FR_2::thread_sext_ln555_8_fu_5294_p1() {
    sext_ln555_8_fu_5294_p1 = esl_sext<6,4>(tmp_148_fu_5284_p4.read());
}

void estimate_FR_2::thread_sext_ln555_9_fu_5330_p1() {
    sext_ln555_9_fu_5330_p1 = esl_sext<6,4>(tmp_149_fu_5320_p4.read());
}

void estimate_FR_2::thread_sext_ln555_fu_4953_p1() {
    sext_ln555_fu_4953_p1 = esl_sext<6,4>(tmp_132_fu_4943_p4.read());
}

void estimate_FR_2::thread_shl_ln13_8_fu_2872_p3() {
    shl_ln13_8_fu_2872_p3 = esl_concat<5,2>(add_ln12_fu_2866_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_shl_ln13_tr_fu_2627_p3() {
    shl_ln13_tr_fu_2627_p3 = esl_concat<4,2>(empty_46_fu_2598_p1.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_shl_ln1503_10_fu_4855_p2() {
    shl_ln1503_10_fu_4855_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_10_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_11_fu_4876_p2() {
    shl_ln1503_11_fu_4876_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_11_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_1_fu_4666_p2() {
    shl_ln1503_1_fu_4666_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_1_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_2_fu_4687_p2() {
    shl_ln1503_2_fu_4687_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_2_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_3_fu_4708_p2() {
    shl_ln1503_3_fu_4708_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_3_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_4_fu_4729_p2() {
    shl_ln1503_4_fu_4729_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_4_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_5_fu_4750_p2() {
    shl_ln1503_5_fu_4750_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_5_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_6_fu_4771_p2() {
    shl_ln1503_6_fu_4771_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_6_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_7_fu_4792_p2() {
    shl_ln1503_7_fu_4792_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_7_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_8_fu_4813_p2() {
    shl_ln1503_8_fu_4813_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_8_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_9_fu_4834_p2() {
    shl_ln1503_9_fu_4834_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_9_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln1503_fu_4645_p2() {
    shl_ln1503_fu_4645_p2 = (!ap_const_lv6_2.is_01())? sc_lv<6>(): cnt_0_V_q1.read() << (unsigned short)ap_const_lv6_2.to_uint();
}

void estimate_FR_2::thread_shl_ln32_8_fu_5590_p3() {
    shl_ln32_8_fu_5590_p3 = esl_concat<5,2>(add_ln31_fu_5584_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_shl_ln32_tr_fu_4925_p3() {
    shl_ln32_tr_fu_4925_p3 = esl_concat<4,2>(empty_51_fu_4897_p1.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_101_fu_3482_p4() {
    tmp_101_fu_3482_p4 = mul_ln321_13_fu_3476_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_102_fu_3528_p4() {
    tmp_102_fu_3528_p4 = mul_ln321_14_fu_3522_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_107_fu_3574_p4() {
    tmp_107_fu_3574_p4 = mul_ln321_15_fu_3568_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_10_fu_6674_p8() {
    tmp_10_fu_6674_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_11_V_q0.read(), ap_const_lv2_0), cnt_10_V_q0.read()), ap_const_lv2_0), cnt_9_V_q0.read()), ap_const_lv2_0), cnt_8_V_q0.read());
}

void estimate_FR_2::thread_tmp_116_fu_3789_p3() {
    tmp_116_fu_3789_p3 = esl_concat<5,2>(add_ln12_1_fu_3783_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_118_fu_3986_p4() {
    tmp_118_fu_3986_p4 = mul_ln321_21_fu_3980_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_119_fu_4020_p4() {
    tmp_119_fu_4020_p4 = mul_ln321_22_fu_4014_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_11_fu_6697_p8() {
    tmp_11_fu_6697_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_3_V_q1.read(), ap_const_lv2_0), cnt_2_V_q1.read()), ap_const_lv2_0), cnt_1_V_q1.read()), ap_const_lv2_0), cnt_0_V_q1.read());
}

void estimate_FR_2::thread_tmp_120_fu_4054_p4() {
    tmp_120_fu_4054_p4 = mul_ln321_23_fu_4048_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_121_fu_4079_p3() {
    tmp_121_fu_4079_p3 = esl_concat<5,2>(add_ln12_2_fu_4073_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_122_fu_4097_p4() {
    tmp_122_fu_4097_p4 = mul_ln321_24_fu_4091_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_123_fu_4132_p4() {
    tmp_123_fu_4132_p4 = mul_ln321_25_fu_4126_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_124_fu_4167_p4() {
    tmp_124_fu_4167_p4 = mul_ln321_26_fu_4161_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_125_fu_4202_p4() {
    tmp_125_fu_4202_p4 = mul_ln321_27_fu_4196_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_126_fu_4227_p3() {
    tmp_126_fu_4227_p3 = esl_concat<5,2>(add_ln12_3_fu_4221_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_12_fu_6720_p8() {
    tmp_12_fu_6720_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_7_V_q1.read(), ap_const_lv2_0), cnt_6_V_q1.read()), ap_const_lv2_0), cnt_5_V_q1.read()), ap_const_lv2_0), cnt_4_V_q1.read());
}

void estimate_FR_2::thread_tmp_132_fu_4943_p4() {
    tmp_132_fu_4943_p4 = mul_ln555_fu_4937_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_133_fu_4963_p3() {
    tmp_133_fu_4963_p3 = esl_concat<4,2>(trunc_ln32_2_fu_4921_p1.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_134_fu_4987_p4() {
    tmp_134_fu_4987_p4 = mul_ln555_1_fu_4981_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_135_fu_5007_p3() {
    tmp_135_fu_5007_p3 = esl_concat<4,2>(trunc_ln32_1_fu_4917_p1.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_136_fu_5031_p4() {
    tmp_136_fu_5031_p4 = mul_ln555_2_fu_5025_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_137_fu_5051_p3() {
    tmp_137_fu_5051_p3 = esl_concat<4,2>(trunc_ln32_fu_4913_p1.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_138_fu_5075_p4() {
    tmp_138_fu_5075_p4 = mul_ln555_3_fu_5069_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_13_fu_6743_p8() {
    tmp_13_fu_6743_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_11_V_q1.read(), ap_const_lv2_0), cnt_10_V_q1.read()), ap_const_lv2_0), cnt_9_V_q1.read()), ap_const_lv2_0), cnt_8_V_q1.read());
}

void estimate_FR_2::thread_tmp_140_fu_5114_p3() {
    tmp_140_fu_5114_p3 = esl_concat<4,2>(or_ln31_fu_5108_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_141_fu_5132_p4() {
    tmp_141_fu_5132_p4 = mul_ln555_4_fu_5126_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_142_fu_5168_p4() {
    tmp_142_fu_5168_p4 = mul_ln555_5_fu_5162_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_143_fu_5204_p4() {
    tmp_143_fu_5204_p4 = mul_ln555_6_fu_5198_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_144_fu_5240_p4() {
    tmp_144_fu_5240_p4 = mul_ln555_7_fu_5234_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_145_fu_5728_p4() {
    tmp_145_fu_5728_p4 = mul_ln36_fu_5722_p2.read().range(9, 8);
}

void estimate_FR_2::thread_tmp_147_fu_5266_p3() {
    tmp_147_fu_5266_p3 = esl_concat<4,2>(or_ln31_1_fu_5260_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_148_fu_5284_p4() {
    tmp_148_fu_5284_p4 = mul_ln555_8_fu_5278_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_149_fu_5320_p4() {
    tmp_149_fu_5320_p4 = mul_ln555_9_fu_5314_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_14_fu_5679_p5() {
    tmp_14_fu_5679_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_3_V_q0.read(), zext_ln555_23_fu_5675_p1.read()), zext_ln555_22_fu_5671_p1.read()), zext_ln555_21_fu_5667_p1.read());
}

void estimate_FR_2::thread_tmp_150_fu_5356_p4() {
    tmp_150_fu_5356_p4 = mul_ln555_10_fu_5350_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_151_fu_5392_p4() {
    tmp_151_fu_5392_p4 = mul_ln555_11_fu_5386_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_152_fu_5810_p4() {
    tmp_152_fu_5810_p4 = mul_ln36_1_fu_5804_p2.read().range(9, 8);
}

void estimate_FR_2::thread_tmp_154_fu_5418_p3() {
    tmp_154_fu_5418_p3 = esl_concat<4,2>(or_ln31_2_fu_5412_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_155_fu_5436_p4() {
    tmp_155_fu_5436_p4 = mul_ln555_12_fu_5430_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_156_fu_5472_p4() {
    tmp_156_fu_5472_p4 = mul_ln555_13_fu_5466_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_157_fu_5508_p4() {
    tmp_157_fu_5508_p4 = mul_ln555_14_fu_5502_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_158_fu_5544_p4() {
    tmp_158_fu_5544_p4 = mul_ln555_15_fu_5538_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_159_fu_5892_p4() {
    tmp_159_fu_5892_p4 = mul_ln36_2_fu_5886_p2.read().range(9, 8);
}

void estimate_FR_2::thread_tmp_15_fu_5761_p5() {
    tmp_15_fu_5761_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_7_V_q0.read(), zext_ln555_31_fu_5757_p1.read()), zext_ln555_30_fu_5753_p1.read()), zext_ln555_29_fu_5749_p1.read());
}

void estimate_FR_2::thread_tmp_167_fu_6099_p4() {
    tmp_167_fu_6099_p4 = mul_ln555_18_fu_6093_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_168_fu_6134_p4() {
    tmp_168_fu_6134_p4 = mul_ln555_19_fu_6128_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_16_fu_5843_p5() {
    tmp_16_fu_5843_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_11_V_q0.read(), zext_ln555_54_fu_5839_p1.read()), zext_ln555_53_fu_5835_p1.read()), zext_ln555_52_fu_5831_p1.read());
}

void estimate_FR_2::thread_tmp_170_fu_6160_p3() {
    tmp_170_fu_6160_p3 = esl_concat<5,2>(add_ln31_1_fu_6154_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_171_fu_6178_p4() {
    tmp_171_fu_6178_p4 = mul_ln555_20_fu_6172_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_172_fu_6214_p4() {
    tmp_172_fu_6214_p4 = mul_ln555_21_fu_6208_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_173_fu_6250_p4() {
    tmp_173_fu_6250_p4 = mul_ln555_22_fu_6244_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_174_fu_6286_p4() {
    tmp_174_fu_6286_p4 = mul_ln555_23_fu_6280_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_176_fu_6312_p3() {
    tmp_176_fu_6312_p3 = esl_concat<5,2>(add_ln31_2_fu_6306_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_177_fu_6330_p4() {
    tmp_177_fu_6330_p4 = mul_ln555_24_fu_6324_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_178_fu_6366_p4() {
    tmp_178_fu_6366_p4 = mul_ln555_25_fu_6360_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_179_fu_6402_p4() {
    tmp_179_fu_6402_p4 = mul_ln555_26_fu_6396_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_17_fu_5925_p5() {
    tmp_17_fu_5925_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_3_V_q1.read(), zext_ln555_59_fu_5921_p1.read()), zext_ln555_58_fu_5917_p1.read()), zext_ln555_57_fu_5913_p1.read());
}

void estimate_FR_2::thread_tmp_180_fu_6438_p4() {
    tmp_180_fu_6438_p4 = mul_ln555_27_fu_6432_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_182_fu_6464_p3() {
    tmp_182_fu_6464_p3 = esl_concat<5,2>(add_ln31_3_fu_6458_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_183_fu_6482_p4() {
    tmp_183_fu_6482_p4 = mul_ln555_28_fu_6476_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_184_fu_6518_p4() {
    tmp_184_fu_6518_p4 = mul_ln555_29_fu_6512_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_185_fu_6554_p4() {
    tmp_185_fu_6554_p4 = mul_ln555_30_fu_6548_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_186_fu_6590_p4() {
    tmp_186_fu_6590_p4 = mul_ln555_31_fu_6584_p2.read().range(15, 11);
}

void estimate_FR_2::thread_tmp_18_fu_5977_p5() {
    tmp_18_fu_5977_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_7_V_q1.read(), zext_ln555_62_fu_5973_p1.read()), zext_ln555_61_fu_5969_p1.read()), zext_ln555_60_fu_5965_p1.read());
}

void estimate_FR_2::thread_tmp_19_fu_6029_p5() {
    tmp_19_fu_6029_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_11_V_q1.read(), zext_ln555_65_fu_6025_p1.read()), zext_ln555_64_fu_6021_p1.read()), zext_ln555_63_fu_6017_p1.read());
}

void estimate_FR_2::thread_tmp_20_fu_6775_p5() {
    tmp_20_fu_6775_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_3_V_load_2_reg_8110.read(), zext_ln555_68_fu_6772_p1.read()), zext_ln555_67_fu_6769_p1.read()), zext_ln555_66_fu_6766_p1.read());
}

void estimate_FR_2::thread_tmp_21_fu_6800_p5() {
    tmp_21_fu_6800_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_7_V_load_2_reg_8130.read(), zext_ln555_71_fu_6797_p1.read()), zext_ln555_70_fu_6794_p1.read()), zext_ln555_69_fu_6791_p1.read());
}

void estimate_FR_2::thread_tmp_22_fu_6825_p5() {
    tmp_22_fu_6825_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_11_V_load_2_reg_8150.read(), zext_ln555_74_fu_6822_p1.read()), zext_ln555_73_fu_6819_p1.read()), zext_ln555_72_fu_6816_p1.read());
}

void estimate_FR_2::thread_tmp_23_fu_6850_p5() {
    tmp_23_fu_6850_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_3_V_load_3_reg_8170.read(), zext_ln555_77_fu_6847_p1.read()), zext_ln555_76_fu_6844_p1.read()), zext_ln555_75_fu_6841_p1.read());
}

void estimate_FR_2::thread_tmp_24_fu_6875_p5() {
    tmp_24_fu_6875_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_7_V_load_3_reg_8190.read(), zext_ln555_80_fu_6872_p1.read()), zext_ln555_79_fu_6869_p1.read()), zext_ln555_78_fu_6866_p1.read());
}

void estimate_FR_2::thread_tmp_25_fu_6900_p5() {
    tmp_25_fu_6900_p5 = esl_concat<23,8>(esl_concat<15,8>(esl_concat<7,8>(FR_11_V_load_3_reg_8210.read(), zext_ln555_83_fu_6897_p1.read()), zext_ln555_82_fu_6894_p1.read()), zext_ln555_81_fu_6891_p1.read());
}

void estimate_FR_2::thread_tmp_27_fu_3003_p3() {
    tmp_27_fu_3003_p3 = esl_concat<4,2>(trunc_ln13_2_fu_2986_p1.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_31_fu_3038_p4() {
    tmp_31_fu_3038_p4 = mul_ln321_1_fu_3032_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_37_fu_3057_p3() {
    tmp_37_fu_3057_p3 = esl_concat<4,2>(trunc_ln13_1_fu_2982_p1.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_3_fu_5644_p8() {
    tmp_3_fu_5644_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_3_V_q0.read(), ap_const_lv2_0), cnt_2_V_q0.read()), ap_const_lv2_0), cnt_1_V_q0.read()), ap_const_lv2_0), cnt_0_V_q0.read());
}

void estimate_FR_2::thread_tmp_43_fu_3092_p4() {
    tmp_43_fu_3092_p4 = mul_ln321_2_fu_3086_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_49_fu_3111_p3() {
    tmp_49_fu_3111_p3 = esl_concat<4,2>(trunc_ln13_fu_2978_p1.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_4_fu_5696_p8() {
    tmp_4_fu_5696_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_7_V_q0.read(), ap_const_lv2_0), cnt_6_V_q0.read()), ap_const_lv2_0), cnt_5_V_q0.read()), ap_const_lv2_0), cnt_4_V_q0.read());
}

void estimate_FR_2::thread_tmp_54_fu_3146_p4() {
    tmp_54_fu_3146_p4 = mul_ln321_3_fu_3140_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_59_fu_3165_p3() {
    tmp_59_fu_3165_p3 = esl_concat<4,2>(or_ln12_reg_6935.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_5_fu_5778_p8() {
    tmp_5_fu_5778_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_11_V_q0.read(), ap_const_lv2_0), cnt_10_V_q0.read()), ap_const_lv2_0), cnt_9_V_q0.read()), ap_const_lv2_0), cnt_8_V_q0.read());
}

void estimate_FR_2::thread_tmp_64_fu_2671_p4() {
    tmp_64_fu_2671_p4 = mul_ln13_fu_2665_p2.read().range(9, 8);
}

void estimate_FR_2::thread_tmp_69_fu_3187_p4() {
    tmp_69_fu_3187_p4 = mul_ln321_4_fu_3181_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_6_fu_5860_p8() {
    tmp_6_fu_5860_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_3_V_q1.read(), ap_const_lv2_0), cnt_2_V_q1.read()), ap_const_lv2_0), cnt_1_V_q1.read()), ap_const_lv2_0), cnt_0_V_q1.read());
}

void estimate_FR_2::thread_tmp_70_fu_3233_p4() {
    tmp_70_fu_3233_p4 = mul_ln321_5_fu_3227_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_76_fu_3279_p4() {
    tmp_76_fu_3279_p4 = mul_ln321_6_fu_3273_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_77_fu_3325_p4() {
    tmp_77_fu_3325_p4 = mul_ln321_7_fu_3319_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_7_fu_5942_p8() {
    tmp_7_fu_5942_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_7_V_q1.read(), ap_const_lv2_0), cnt_6_V_q1.read()), ap_const_lv2_0), cnt_5_V_q1.read()), ap_const_lv2_0), cnt_4_V_q1.read());
}

void estimate_FR_2::thread_tmp_83_fu_2696_p3() {
    tmp_83_fu_2696_p3 = esl_concat<4,2>(or_ln12_1_fu_2690_p2.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_84_fu_2714_p4() {
    tmp_84_fu_2714_p4 = mul_ln13_1_fu_2708_p2.read().range(9, 8);
}

void estimate_FR_2::thread_tmp_8_fu_5994_p8() {
    tmp_8_fu_5994_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_11_V_q1.read(), ap_const_lv2_0), cnt_10_V_q1.read()), ap_const_lv2_0), cnt_9_V_q1.read()), ap_const_lv2_0), cnt_8_V_q1.read());
}

void estimate_FR_2::thread_tmp_94_fu_3414_p3() {
    tmp_94_fu_3414_p3 = esl_concat<4,2>(or_ln12_2_reg_6970.read(), ap_const_lv2_0);
}

void estimate_FR_2::thread_tmp_95_fu_2847_p4() {
    tmp_95_fu_2847_p4 = mul_ln13_2_fu_2841_p2.read().range(9, 8);
}

void estimate_FR_2::thread_tmp_96_fu_3436_p4() {
    tmp_96_fu_3436_p4 = mul_ln321_12_fu_3430_p2.read().range(13, 10);
}

void estimate_FR_2::thread_tmp_9_fu_6628_p8() {
    tmp_9_fu_6628_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_3_V_q0.read(), ap_const_lv2_0), cnt_2_V_q0.read()), ap_const_lv2_0), cnt_1_V_q0.read()), ap_const_lv2_0), cnt_0_V_q0.read());
}

void estimate_FR_2::thread_tmp_s_fu_6651_p8() {
    tmp_s_fu_6651_p8 = esl_concat<24,6>(esl_concat<22,2>(esl_concat<16,6>(esl_concat<14,2>(esl_concat<8,6>(esl_concat<6,2>(cnt_7_V_q0.read(), ap_const_lv2_0), cnt_6_V_q0.read()), ap_const_lv2_0), cnt_5_V_q0.read()), ap_const_lv2_0), cnt_4_V_q0.read());
}

void estimate_FR_2::thread_trunc_ln13_1_fu_2982_p1() {
    trunc_ln13_1_fu_2982_p1 = j_0_0_reg_2505.read().range(4-1, 0);
}

void estimate_FR_2::thread_trunc_ln13_2_fu_2986_p1() {
    trunc_ln13_2_fu_2986_p1 = j_0_0_reg_2505.read().range(4-1, 0);
}

void estimate_FR_2::thread_trunc_ln13_fu_2978_p1() {
    trunc_ln13_fu_2978_p1 = j_0_0_reg_2505.read().range(4-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_11_fu_3593_p1() {
    trunc_ln301_11_fu_3593_p1 = counts_4_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_14_fu_3643_p1() {
    trunc_ln301_14_fu_3643_p1 = counts_5_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_17_fu_3681_p1() {
    trunc_ln301_17_fu_3681_p1 = counts_6_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_20_fu_3715_p1() {
    trunc_ln301_20_fu_3715_p1 = counts_7_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_23_fu_3749_p1() {
    trunc_ln301_23_fu_3749_p1 = counts_8_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_26_fu_3797_p1() {
    trunc_ln301_26_fu_3797_p1 = counts_9_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_29_fu_3851_p1() {
    trunc_ln301_29_fu_3851_p1 = counts_10_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_32_fu_3885_p1() {
    trunc_ln301_32_fu_3885_p1 = counts_11_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_35_fu_4417_p1() {
    trunc_ln301_35_fu_4417_p1 = inputs_0_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_36_fu_4429_p1() {
    trunc_ln301_36_fu_4429_p1 = inputs_1_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_37_fu_4441_p1() {
    trunc_ln301_37_fu_4441_p1 = inputs_2_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_38_fu_4453_p1() {
    trunc_ln301_38_fu_4453_p1 = inputs_3_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_39_fu_4465_p1() {
    trunc_ln301_39_fu_4465_p1 = inputs_4_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_3_fu_3172_p1() {
    trunc_ln301_3_fu_3172_p1 = counts_1_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_40_fu_4477_p1() {
    trunc_ln301_40_fu_4477_p1 = inputs_5_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_41_fu_4489_p1() {
    trunc_ln301_41_fu_4489_p1 = inputs_6_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_42_fu_4501_p1() {
    trunc_ln301_42_fu_4501_p1 = inputs_7_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_43_fu_4513_p1() {
    trunc_ln301_43_fu_4513_p1 = inputs_8_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_44_fu_4525_p1() {
    trunc_ln301_44_fu_4525_p1 = inputs_9_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_45_fu_4537_p1() {
    trunc_ln301_45_fu_4537_p1 = inputs_10_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_46_fu_4549_p1() {
    trunc_ln301_46_fu_4549_p1 = inputs_11_q0.read().range(1-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_5_fu_3344_p1() {
    trunc_ln301_5_fu_3344_p1 = counts_2_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_8_fu_3421_p1() {
    trunc_ln301_8_fu_3421_p1 = counts_3_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln301_fu_2990_p1() {
    trunc_ln301_fu_2990_p1 = counts_0_q0.read().range(6-1, 0);
}

void estimate_FR_2::thread_trunc_ln32_1_fu_4917_p1() {
    trunc_ln32_1_fu_4917_p1 = ap_phi_mux_k_0_0_phi_fu_2590_p4.read().range(4-1, 0);
}

void estimate_FR_2::thread_trunc_ln32_2_fu_4921_p1() {
    trunc_ln32_2_fu_4921_p1 = ap_phi_mux_k_0_0_phi_fu_2590_p4.read().range(4-1, 0);
}

void estimate_FR_2::thread_trunc_ln32_fu_4913_p1() {
    trunc_ln32_fu_4913_p1 = ap_phi_mux_k_0_0_phi_fu_2590_p4.read().range(4-1, 0);
}

void estimate_FR_2::thread_zext_ln13_1_fu_2685_p1() {
    zext_ln13_1_fu_2685_p1 = esl_zext<64,4>(sext_ln13_fu_2681_p1.read());
}

void estimate_FR_2::thread_zext_ln13_2_fu_2728_p1() {
    zext_ln13_2_fu_2728_p1 = esl_zext<64,4>(sext_ln13_1_fu_2724_p1.read());
}

void estimate_FR_2::thread_zext_ln13_3_fu_2861_p1() {
    zext_ln13_3_fu_2861_p1 = esl_zext<64,4>(sext_ln13_2_fu_2857_p1.read());
}

void estimate_FR_2::thread_zext_ln13_fu_2614_p1() {
    zext_ln13_fu_2614_p1 = esl_zext<64,2>(ap_phi_mux_indvars_iv125_phi_fu_2474_p4.read());
}

void estimate_FR_2::thread_zext_ln209_10_fu_4756_p1() {
    zext_ln209_10_fu_4756_p1 = esl_zext<7,6>(shl_ln1503_5_fu_4750_p2.read());
}

void estimate_FR_2::thread_zext_ln209_11_fu_4760_p1() {
    zext_ln209_11_fu_4760_p1 = esl_zext<7,6>(cnt_5_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_12_fu_4777_p1() {
    zext_ln209_12_fu_4777_p1 = esl_zext<7,6>(shl_ln1503_6_fu_4771_p2.read());
}

void estimate_FR_2::thread_zext_ln209_13_fu_4781_p1() {
    zext_ln209_13_fu_4781_p1 = esl_zext<7,6>(cnt_6_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_14_fu_4798_p1() {
    zext_ln209_14_fu_4798_p1 = esl_zext<7,6>(shl_ln1503_7_fu_4792_p2.read());
}

void estimate_FR_2::thread_zext_ln209_15_fu_4802_p1() {
    zext_ln209_15_fu_4802_p1 = esl_zext<7,6>(cnt_7_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_16_fu_4819_p1() {
    zext_ln209_16_fu_4819_p1 = esl_zext<7,6>(shl_ln1503_8_fu_4813_p2.read());
}

void estimate_FR_2::thread_zext_ln209_17_fu_4823_p1() {
    zext_ln209_17_fu_4823_p1 = esl_zext<7,6>(cnt_8_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_18_fu_4840_p1() {
    zext_ln209_18_fu_4840_p1 = esl_zext<7,6>(shl_ln1503_9_fu_4834_p2.read());
}

void estimate_FR_2::thread_zext_ln209_19_fu_4844_p1() {
    zext_ln209_19_fu_4844_p1 = esl_zext<7,6>(cnt_9_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_1_fu_4655_p1() {
    zext_ln209_1_fu_4655_p1 = esl_zext<7,6>(cnt_0_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_20_fu_4861_p1() {
    zext_ln209_20_fu_4861_p1 = esl_zext<7,6>(shl_ln1503_10_fu_4855_p2.read());
}

void estimate_FR_2::thread_zext_ln209_21_fu_4865_p1() {
    zext_ln209_21_fu_4865_p1 = esl_zext<7,6>(cnt_10_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_22_fu_4882_p1() {
    zext_ln209_22_fu_4882_p1 = esl_zext<7,6>(shl_ln1503_11_fu_4876_p2.read());
}

void estimate_FR_2::thread_zext_ln209_23_fu_4886_p1() {
    zext_ln209_23_fu_4886_p1 = esl_zext<7,6>(cnt_11_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_2_fu_4672_p1() {
    zext_ln209_2_fu_4672_p1 = esl_zext<7,6>(shl_ln1503_1_fu_4666_p2.read());
}

void estimate_FR_2::thread_zext_ln209_3_fu_4676_p1() {
    zext_ln209_3_fu_4676_p1 = esl_zext<7,6>(cnt_1_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_4_fu_4693_p1() {
    zext_ln209_4_fu_4693_p1 = esl_zext<7,6>(shl_ln1503_2_fu_4687_p2.read());
}

void estimate_FR_2::thread_zext_ln209_5_fu_4697_p1() {
    zext_ln209_5_fu_4697_p1 = esl_zext<7,6>(cnt_2_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_6_fu_4714_p1() {
    zext_ln209_6_fu_4714_p1 = esl_zext<7,6>(shl_ln1503_3_fu_4708_p2.read());
}

void estimate_FR_2::thread_zext_ln209_7_fu_4718_p1() {
    zext_ln209_7_fu_4718_p1 = esl_zext<7,6>(cnt_3_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_8_fu_4735_p1() {
    zext_ln209_8_fu_4735_p1 = esl_zext<7,6>(shl_ln1503_4_fu_4729_p2.read());
}

void estimate_FR_2::thread_zext_ln209_9_fu_4739_p1() {
    zext_ln209_9_fu_4739_p1 = esl_zext<7,6>(cnt_4_V_q1.read());
}

void estimate_FR_2::thread_zext_ln209_fu_4651_p1() {
    zext_ln209_fu_4651_p1 = esl_zext<7,6>(shl_ln1503_fu_4645_p2.read());
}

void estimate_FR_2::thread_zext_ln20_fu_4395_p1() {
    zext_ln20_fu_4395_p1 = esl_zext<64,4>(ap_phi_mux_indvars_iv206_phi_fu_2521_p4.read());
}

void estimate_FR_2::thread_zext_ln321_10_fu_3390_p1() {
    zext_ln321_10_fu_3390_p1 = esl_zext<64,6>(sext_ln321_10_fu_3387_p1.read());
}

void estimate_FR_2::thread_zext_ln321_11_fu_3409_p1() {
    zext_ln321_11_fu_3409_p1 = esl_zext<64,6>(sext_ln321_11_fu_3406_p1.read());
}

void estimate_FR_2::thread_zext_ln321_12_fu_3450_p1() {
    zext_ln321_12_fu_3450_p1 = esl_zext<64,6>(sext_ln321_12_fu_3446_p1.read());
}

void estimate_FR_2::thread_zext_ln321_13_fu_3496_p1() {
    zext_ln321_13_fu_3496_p1 = esl_zext<64,6>(sext_ln321_13_fu_3492_p1.read());
}

void estimate_FR_2::thread_zext_ln321_14_fu_3542_p1() {
    zext_ln321_14_fu_3542_p1 = esl_zext<64,6>(sext_ln321_14_fu_3538_p1.read());
}

void estimate_FR_2::thread_zext_ln321_15_fu_3588_p1() {
    zext_ln321_15_fu_3588_p1 = esl_zext<64,6>(sext_ln321_15_fu_3584_p1.read());
}

void estimate_FR_2::thread_zext_ln321_16_fu_3598_p1() {
    zext_ln321_16_fu_3598_p1 = esl_zext<64,4>(indvars_iv60_reg_2481.read());
}

void estimate_FR_2::thread_zext_ln321_1_fu_3052_p1() {
    zext_ln321_1_fu_3052_p1 = esl_zext<64,6>(sext_ln321_1_fu_3048_p1.read());
}

void estimate_FR_2::thread_zext_ln321_24_fu_3919_p1() {
    zext_ln321_24_fu_3919_p1 = esl_zext<64,4>(indvars_iv40_reg_2493.read());
}

void estimate_FR_2::thread_zext_ln321_2_fu_3106_p1() {
    zext_ln321_2_fu_3106_p1 = esl_zext<64,6>(sext_ln321_2_fu_3102_p1.read());
}

void estimate_FR_2::thread_zext_ln321_32_fu_3934_p1() {
    zext_ln321_32_fu_3934_p1 = esl_zext<64,7>(sext_ln321_16_fu_3931_p1.read());
}

void estimate_FR_2::thread_zext_ln321_33_fu_3942_p1() {
    zext_ln321_33_fu_3942_p1 = esl_zext<64,7>(sext_ln321_17_fu_3939_p1.read());
}

void estimate_FR_2::thread_zext_ln321_34_fu_3950_p1() {
    zext_ln321_34_fu_3950_p1 = esl_zext<64,7>(sext_ln321_18_fu_3947_p1.read());
}

void estimate_FR_2::thread_zext_ln321_35_fu_3958_p1() {
    zext_ln321_35_fu_3958_p1 = esl_zext<64,7>(sext_ln321_19_fu_3955_p1.read());
}

void estimate_FR_2::thread_zext_ln321_36_fu_3966_p1() {
    zext_ln321_36_fu_3966_p1 = esl_zext<64,7>(sext_ln321_20_fu_3963_p1.read());
}

void estimate_FR_2::thread_zext_ln321_37_fu_4000_p1() {
    zext_ln321_37_fu_4000_p1 = esl_zext<64,7>(sext_ln321_21_fu_3996_p1.read());
}

void estimate_FR_2::thread_zext_ln321_38_fu_4034_p1() {
    zext_ln321_38_fu_4034_p1 = esl_zext<64,7>(sext_ln321_22_fu_4030_p1.read());
}

void estimate_FR_2::thread_zext_ln321_39_fu_4068_p1() {
    zext_ln321_39_fu_4068_p1 = esl_zext<64,7>(sext_ln321_23_fu_4064_p1.read());
}

void estimate_FR_2::thread_zext_ln321_3_fu_3160_p1() {
    zext_ln321_3_fu_3160_p1 = esl_zext<64,6>(sext_ln321_3_fu_3156_p1.read());
}

void estimate_FR_2::thread_zext_ln321_40_fu_4111_p1() {
    zext_ln321_40_fu_4111_p1 = esl_zext<64,7>(sext_ln321_24_fu_4107_p1.read());
}

void estimate_FR_2::thread_zext_ln321_41_fu_4146_p1() {
    zext_ln321_41_fu_4146_p1 = esl_zext<64,7>(sext_ln321_25_fu_4142_p1.read());
}

void estimate_FR_2::thread_zext_ln321_42_fu_4181_p1() {
    zext_ln321_42_fu_4181_p1 = esl_zext<64,7>(sext_ln321_26_fu_4177_p1.read());
}

void estimate_FR_2::thread_zext_ln321_43_fu_4216_p1() {
    zext_ln321_43_fu_4216_p1 = esl_zext<64,7>(sext_ln321_27_fu_4212_p1.read());
}

void estimate_FR_2::thread_zext_ln321_44_fu_4342_p1() {
    zext_ln321_44_fu_4342_p1 = esl_zext<64,7>(sext_ln321_28_fu_4339_p1.read());
}

void estimate_FR_2::thread_zext_ln321_45_fu_4350_p1() {
    zext_ln321_45_fu_4350_p1 = esl_zext<64,7>(sext_ln321_29_fu_4347_p1.read());
}

void estimate_FR_2::thread_zext_ln321_46_fu_4358_p1() {
    zext_ln321_46_fu_4358_p1 = esl_zext<64,7>(sext_ln321_30_fu_4355_p1.read());
}

void estimate_FR_2::thread_zext_ln321_47_fu_4366_p1() {
    zext_ln321_47_fu_4366_p1 = esl_zext<64,7>(sext_ln321_31_fu_4363_p1.read());
}

void estimate_FR_2::thread_zext_ln321_4_fu_3201_p1() {
    zext_ln321_4_fu_3201_p1 = esl_zext<64,6>(sext_ln321_4_fu_3197_p1.read());
}

void estimate_FR_2::thread_zext_ln321_5_fu_3247_p1() {
    zext_ln321_5_fu_3247_p1 = esl_zext<64,6>(sext_ln321_5_fu_3243_p1.read());
}

void estimate_FR_2::thread_zext_ln321_6_fu_3293_p1() {
    zext_ln321_6_fu_3293_p1 = esl_zext<64,6>(sext_ln321_6_fu_3289_p1.read());
}

void estimate_FR_2::thread_zext_ln321_7_fu_3339_p1() {
    zext_ln321_7_fu_3339_p1 = esl_zext<64,6>(sext_ln321_7_fu_3335_p1.read());
}

void estimate_FR_2::thread_zext_ln321_8_fu_3352_p1() {
    zext_ln321_8_fu_3352_p1 = esl_zext<64,6>(sext_ln321_8_fu_3349_p1.read());
}

void estimate_FR_2::thread_zext_ln321_9_fu_3371_p1() {
    zext_ln321_9_fu_3371_p1 = esl_zext<64,6>(sext_ln321_9_fu_3368_p1.read());
}

void estimate_FR_2::thread_zext_ln321_fu_2998_p1() {
    zext_ln321_fu_2998_p1 = esl_zext<64,6>(sext_ln321_fu_2995_p1.read());
}

void estimate_FR_2::thread_zext_ln36_1_fu_5095_p1() {
    zext_ln36_1_fu_5095_p1 = esl_zext<64,2>(ap_phi_mux_indvars_iv369_phi_fu_2555_p4.read());
}

void estimate_FR_2::thread_zext_ln36_3_fu_5742_p1() {
    zext_ln36_3_fu_5742_p1 = esl_zext<64,4>(sext_ln36_fu_5738_p1.read());
}

void estimate_FR_2::thread_zext_ln36_5_fu_5824_p1() {
    zext_ln36_5_fu_5824_p1 = esl_zext<64,4>(sext_ln36_1_fu_5820_p1.read());
}

void estimate_FR_2::thread_zext_ln36_7_fu_5906_p1() {
    zext_ln36_7_fu_5906_p1 = esl_zext<64,4>(sext_ln36_2_fu_5902_p1.read());
}

void estimate_FR_2::thread_zext_ln42_10_fu_6886_p1() {
    zext_ln42_10_fu_6886_p1 = esl_zext<32,31>(tmp_24_fu_6875_p5.read());
}

void estimate_FR_2::thread_zext_ln42_11_fu_6911_p1() {
    zext_ln42_11_fu_6911_p1 = esl_zext<32,31>(tmp_25_fu_6900_p5.read());
}

void estimate_FR_2::thread_zext_ln42_1_fu_5773_p1() {
    zext_ln42_1_fu_5773_p1 = esl_zext<32,31>(tmp_15_fu_5761_p5.read());
}

void estimate_FR_2::thread_zext_ln42_2_fu_5855_p1() {
    zext_ln42_2_fu_5855_p1 = esl_zext<32,31>(tmp_16_fu_5843_p5.read());
}

void estimate_FR_2::thread_zext_ln42_3_fu_5937_p1() {
    zext_ln42_3_fu_5937_p1 = esl_zext<32,31>(tmp_17_fu_5925_p5.read());
}

void estimate_FR_2::thread_zext_ln42_4_fu_5989_p1() {
    zext_ln42_4_fu_5989_p1 = esl_zext<32,31>(tmp_18_fu_5977_p5.read());
}

void estimate_FR_2::thread_zext_ln42_5_fu_6041_p1() {
    zext_ln42_5_fu_6041_p1 = esl_zext<32,31>(tmp_19_fu_6029_p5.read());
}

void estimate_FR_2::thread_zext_ln42_6_fu_6786_p1() {
    zext_ln42_6_fu_6786_p1 = esl_zext<32,31>(tmp_20_fu_6775_p5.read());
}

void estimate_FR_2::thread_zext_ln42_7_fu_6811_p1() {
    zext_ln42_7_fu_6811_p1 = esl_zext<32,31>(tmp_21_fu_6800_p5.read());
}

void estimate_FR_2::thread_zext_ln42_8_fu_6836_p1() {
    zext_ln42_8_fu_6836_p1 = esl_zext<32,31>(tmp_22_fu_6825_p5.read());
}

void estimate_FR_2::thread_zext_ln42_9_fu_6861_p1() {
    zext_ln42_9_fu_6861_p1 = esl_zext<32,31>(tmp_23_fu_6850_p5.read());
}

void estimate_FR_2::thread_zext_ln42_fu_5691_p1() {
    zext_ln42_fu_5691_p1 = esl_zext<32,31>(tmp_14_fu_5679_p5.read());
}

void estimate_FR_2::thread_zext_ln555_10_fu_5370_p1() {
    zext_ln555_10_fu_5370_p1 = esl_zext<64,6>(sext_ln555_10_fu_5366_p1.read());
}

void estimate_FR_2::thread_zext_ln555_11_fu_5406_p1() {
    zext_ln555_11_fu_5406_p1 = esl_zext<64,6>(sext_ln555_11_fu_5402_p1.read());
}

void estimate_FR_2::thread_zext_ln555_12_fu_5450_p1() {
    zext_ln555_12_fu_5450_p1 = esl_zext<64,6>(sext_ln555_12_fu_5446_p1.read());
}

void estimate_FR_2::thread_zext_ln555_13_fu_5486_p1() {
    zext_ln555_13_fu_5486_p1 = esl_zext<64,6>(sext_ln555_13_fu_5482_p1.read());
}

void estimate_FR_2::thread_zext_ln555_14_fu_5522_p1() {
    zext_ln555_14_fu_5522_p1 = esl_zext<64,6>(sext_ln555_14_fu_5518_p1.read());
}

void estimate_FR_2::thread_zext_ln555_15_fu_5558_p1() {
    zext_ln555_15_fu_5558_p1 = esl_zext<64,6>(sext_ln555_15_fu_5554_p1.read());
}

void estimate_FR_2::thread_zext_ln555_16_fu_5564_p1() {
    zext_ln555_16_fu_5564_p1 = esl_zext<64,4>(ap_phi_mux_indvars_iv296_phi_fu_2578_p4.read());
}

void estimate_FR_2::thread_zext_ln555_1_fu_5001_p1() {
    zext_ln555_1_fu_5001_p1 = esl_zext<64,6>(sext_ln555_1_fu_4997_p1.read());
}

void estimate_FR_2::thread_zext_ln555_21_fu_5667_p1() {
    zext_ln555_21_fu_5667_p1 = esl_zext<8,7>(FR_0_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_22_fu_5671_p1() {
    zext_ln555_22_fu_5671_p1 = esl_zext<8,7>(FR_1_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_23_fu_5675_p1() {
    zext_ln555_23_fu_5675_p1 = esl_zext<8,7>(FR_2_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_24_fu_6046_p1() {
    zext_ln555_24_fu_6046_p1 = esl_zext<64,4>(ap_phi_mux_indvars_iv316_phi_fu_2566_p4.read());
}

void estimate_FR_2::thread_zext_ln555_29_fu_5749_p1() {
    zext_ln555_29_fu_5749_p1 = esl_zext<8,7>(FR_4_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_2_fu_5045_p1() {
    zext_ln555_2_fu_5045_p1 = esl_zext<64,6>(sext_ln555_2_fu_5041_p1.read());
}

void estimate_FR_2::thread_zext_ln555_30_fu_5753_p1() {
    zext_ln555_30_fu_5753_p1 = esl_zext<8,7>(FR_5_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_31_fu_5757_p1() {
    zext_ln555_31_fu_5757_p1 = esl_zext<8,7>(FR_6_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_32_fu_6069_p1() {
    zext_ln555_32_fu_6069_p1 = esl_zext<64,7>(sext_ln555_16_fu_6066_p1.read());
}

void estimate_FR_2::thread_zext_ln555_33_fu_6078_p1() {
    zext_ln555_33_fu_6078_p1 = esl_zext<64,7>(sext_ln555_17_fu_6075_p1.read());
}

void estimate_FR_2::thread_zext_ln555_34_fu_6113_p1() {
    zext_ln555_34_fu_6113_p1 = esl_zext<64,7>(sext_ln555_18_fu_6109_p1.read());
}

void estimate_FR_2::thread_zext_ln555_35_fu_6148_p1() {
    zext_ln555_35_fu_6148_p1 = esl_zext<64,7>(sext_ln555_19_fu_6144_p1.read());
}

void estimate_FR_2::thread_zext_ln555_36_fu_6192_p1() {
    zext_ln555_36_fu_6192_p1 = esl_zext<64,7>(sext_ln555_20_fu_6188_p1.read());
}

void estimate_FR_2::thread_zext_ln555_37_fu_6228_p1() {
    zext_ln555_37_fu_6228_p1 = esl_zext<64,7>(sext_ln555_21_fu_6224_p1.read());
}

void estimate_FR_2::thread_zext_ln555_38_fu_6264_p1() {
    zext_ln555_38_fu_6264_p1 = esl_zext<64,7>(sext_ln555_22_fu_6260_p1.read());
}

void estimate_FR_2::thread_zext_ln555_39_fu_6300_p1() {
    zext_ln555_39_fu_6300_p1 = esl_zext<64,7>(sext_ln555_23_fu_6296_p1.read());
}

void estimate_FR_2::thread_zext_ln555_3_fu_5089_p1() {
    zext_ln555_3_fu_5089_p1 = esl_zext<64,6>(sext_ln555_3_fu_5085_p1.read());
}

void estimate_FR_2::thread_zext_ln555_40_fu_6344_p1() {
    zext_ln555_40_fu_6344_p1 = esl_zext<64,7>(sext_ln555_24_fu_6340_p1.read());
}

void estimate_FR_2::thread_zext_ln555_41_fu_6380_p1() {
    zext_ln555_41_fu_6380_p1 = esl_zext<64,7>(sext_ln555_25_fu_6376_p1.read());
}

void estimate_FR_2::thread_zext_ln555_42_fu_6416_p1() {
    zext_ln555_42_fu_6416_p1 = esl_zext<64,7>(sext_ln555_26_fu_6412_p1.read());
}

void estimate_FR_2::thread_zext_ln555_43_fu_6452_p1() {
    zext_ln555_43_fu_6452_p1 = esl_zext<64,7>(sext_ln555_27_fu_6448_p1.read());
}

void estimate_FR_2::thread_zext_ln555_44_fu_6496_p1() {
    zext_ln555_44_fu_6496_p1 = esl_zext<64,7>(sext_ln555_28_fu_6492_p1.read());
}

void estimate_FR_2::thread_zext_ln555_45_fu_6532_p1() {
    zext_ln555_45_fu_6532_p1 = esl_zext<64,7>(sext_ln555_29_fu_6528_p1.read());
}

void estimate_FR_2::thread_zext_ln555_46_fu_6568_p1() {
    zext_ln555_46_fu_6568_p1 = esl_zext<64,7>(sext_ln555_30_fu_6564_p1.read());
}

void estimate_FR_2::thread_zext_ln555_47_fu_6604_p1() {
    zext_ln555_47_fu_6604_p1 = esl_zext<64,7>(sext_ln555_31_fu_6600_p1.read());
}

void estimate_FR_2::thread_zext_ln555_4_fu_5146_p1() {
    zext_ln555_4_fu_5146_p1 = esl_zext<64,6>(sext_ln555_4_fu_5142_p1.read());
}

void estimate_FR_2::thread_zext_ln555_52_fu_5831_p1() {
    zext_ln555_52_fu_5831_p1 = esl_zext<8,7>(FR_8_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_53_fu_5835_p1() {
    zext_ln555_53_fu_5835_p1 = esl_zext<8,7>(FR_9_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_54_fu_5839_p1() {
    zext_ln555_54_fu_5839_p1 = esl_zext<8,7>(FR_10_V_q0.read());
}

void estimate_FR_2::thread_zext_ln555_57_fu_5913_p1() {
    zext_ln555_57_fu_5913_p1 = esl_zext<8,7>(FR_0_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_58_fu_5917_p1() {
    zext_ln555_58_fu_5917_p1 = esl_zext<8,7>(FR_1_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_59_fu_5921_p1() {
    zext_ln555_59_fu_5921_p1 = esl_zext<8,7>(FR_2_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_5_fu_5182_p1() {
    zext_ln555_5_fu_5182_p1 = esl_zext<64,6>(sext_ln555_5_fu_5178_p1.read());
}

void estimate_FR_2::thread_zext_ln555_60_fu_5965_p1() {
    zext_ln555_60_fu_5965_p1 = esl_zext<8,7>(FR_4_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_61_fu_5969_p1() {
    zext_ln555_61_fu_5969_p1 = esl_zext<8,7>(FR_5_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_62_fu_5973_p1() {
    zext_ln555_62_fu_5973_p1 = esl_zext<8,7>(FR_6_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_63_fu_6017_p1() {
    zext_ln555_63_fu_6017_p1 = esl_zext<8,7>(FR_8_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_64_fu_6021_p1() {
    zext_ln555_64_fu_6021_p1 = esl_zext<8,7>(FR_9_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_65_fu_6025_p1() {
    zext_ln555_65_fu_6025_p1 = esl_zext<8,7>(FR_10_V_q1.read());
}

void estimate_FR_2::thread_zext_ln555_66_fu_6766_p1() {
    zext_ln555_66_fu_6766_p1 = esl_zext<8,7>(FR_0_V_load_2_reg_8095.read());
}

void estimate_FR_2::thread_zext_ln555_67_fu_6769_p1() {
    zext_ln555_67_fu_6769_p1 = esl_zext<8,7>(FR_1_V_load_2_reg_8100.read());
}

void estimate_FR_2::thread_zext_ln555_68_fu_6772_p1() {
    zext_ln555_68_fu_6772_p1 = esl_zext<8,7>(FR_2_V_load_2_reg_8105.read());
}

void estimate_FR_2::thread_zext_ln555_69_fu_6791_p1() {
    zext_ln555_69_fu_6791_p1 = esl_zext<8,7>(FR_4_V_load_2_reg_8115.read());
}

void estimate_FR_2::thread_zext_ln555_6_fu_5218_p1() {
    zext_ln555_6_fu_5218_p1 = esl_zext<64,6>(sext_ln555_6_fu_5214_p1.read());
}

}

