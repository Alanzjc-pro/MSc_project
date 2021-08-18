#include "estimate_FR_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void estimate_FR_2::thread_cnt_11_3_V_18_fu_9369_p3() {
    cnt_11_3_V_18_fu_9369_p3 = (!and_ln700_33_fu_9239_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_33_fu_9239_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_20_phi_fu_2134_p4.read(): cnt_11_3_V_17_fu_9361_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_19_fu_9377_p3() {
    cnt_11_3_V_19_fu_9377_p3 = (!and_ln700_34_fu_9253_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_34_fu_9253_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_20_phi_fu_2134_p4.read(): cnt_11_3_V_18_fu_9369_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_20_fu_9385_p3() {
    cnt_11_3_V_20_fu_9385_p3 = (!and_ln700_35_fu_9267_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_35_fu_9267_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_20_phi_fu_2134_p4.read(): cnt_11_3_V_19_fu_9377_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_22_fu_16907_p3() {
    cnt_11_3_V_22_fu_16907_p3 = (!and_ln700_33_reg_23553.read()[0].is_01())? sc_lv<6>(): ((and_ln700_33_reg_23553.read()[0].to_bool())? cnt_11_3_V_30_reg_23547.read(): cnt_11_3_V_21_reg_2371.read());
}

void estimate_FR_2::thread_cnt_11_3_V_23_fu_16913_p3() {
    cnt_11_3_V_23_fu_16913_p3 = (!and_ln700_34_reg_23558.read()[0].is_01())? sc_lv<6>(): ((and_ln700_34_reg_23558.read()[0].to_bool())? cnt_11_3_V_21_reg_2371.read(): cnt_11_3_V_22_fu_16907_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_24_fu_16920_p3() {
    cnt_11_3_V_24_fu_16920_p3 = (!and_ln700_35_reg_23564.read()[0].is_01())? sc_lv<6>(): ((and_ln700_35_reg_23564.read()[0].to_bool())? cnt_11_3_V_21_reg_2371.read(): cnt_11_3_V_23_fu_16913_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_26_fu_16927_p3() {
    cnt_11_3_V_26_fu_16927_p3 = (!and_ln700_34_reg_23558.read()[0].is_01())? sc_lv<6>(): ((and_ln700_34_reg_23558.read()[0].to_bool())? cnt_11_3_V_30_reg_23547.read(): cnt_11_3_V_25_reg_2611.read());
}

void estimate_FR_2::thread_cnt_11_3_V_27_fu_16933_p3() {
    cnt_11_3_V_27_fu_16933_p3 = (!and_ln700_35_reg_23564.read()[0].is_01())? sc_lv<6>(): ((and_ln700_35_reg_23564.read()[0].to_bool())? cnt_11_3_V_25_reg_2611.read(): cnt_11_3_V_26_fu_16927_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_29_fu_9393_p3() {
    cnt_11_3_V_29_fu_9393_p3 = (!and_ln700_35_fu_9267_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_35_fu_9267_p2.read()[0].to_bool())? cnt_11_3_V_30_fu_9233_p2.read(): ap_phi_mux_cnt_11_3_V_28_phi_fu_2854_p4.read());
}

void estimate_FR_2::thread_cnt_11_3_V_2_fu_9245_p3() {
    cnt_11_3_V_2_fu_9245_p3 = (!and_ln700_33_fu_9239_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_33_fu_9239_p2.read()[0].to_bool())? ap_phi_mux_cnt_11_3_V_0_phi_fu_1534_p4.read(): cnt_11_3_V_30_fu_9233_p2.read());
}

void estimate_FR_2::thread_cnt_11_3_V_30_fu_9233_p2() {
    cnt_11_3_V_30_fu_9233_p2 = (!ap_const_lv6_1.is_01() || !tmp_59_fu_9220_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_59_fu_9220_p6.read()));
}

void estimate_FR_2::thread_cnt_11_3_V_3_fu_9259_p3() {
    cnt_11_3_V_3_fu_9259_p3 = (!and_ln700_34_fu_9253_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_34_fu_9253_p2.read()[0].to_bool())? ap_phi_mux_cnt_11_3_V_0_phi_fu_1534_p4.read(): cnt_11_3_V_2_fu_9245_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_4_fu_9273_p3() {
    cnt_11_3_V_4_fu_9273_p3 = (!and_ln700_35_fu_9267_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_35_fu_9267_p2.read()[0].to_bool())? ap_phi_mux_cnt_11_3_V_0_phi_fu_1534_p4.read(): cnt_11_3_V_3_fu_9259_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_5_fu_9281_p3() {
    cnt_11_3_V_5_fu_9281_p3 = (!trunc_ln301_11_fu_9208_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_11_fu_9208_p1.read()[0].to_bool())? cnt_11_3_V_4_fu_9273_p3.read(): ap_phi_mux_cnt_11_3_V_0_phi_fu_1534_p4.read());
}

void estimate_FR_2::thread_cnt_11_3_V_6_fu_9289_p3() {
    cnt_11_3_V_6_fu_9289_p3 = (!and_ln700_33_fu_9239_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_33_fu_9239_p2.read()[0].to_bool())? cnt_11_3_V_30_fu_9233_p2.read(): ap_phi_mux_cnt_11_2_V_0_phi_fu_1544_p4.read());
}

void estimate_FR_2::thread_cnt_11_3_V_7_fu_9297_p3() {
    cnt_11_3_V_7_fu_9297_p3 = (!and_ln700_34_fu_9253_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_34_fu_9253_p2.read()[0].to_bool())? ap_phi_mux_cnt_11_2_V_0_phi_fu_1544_p4.read(): cnt_11_3_V_6_fu_9289_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_8_fu_9305_p3() {
    cnt_11_3_V_8_fu_9305_p3 = (!and_ln700_35_fu_9267_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_35_fu_9267_p2.read()[0].to_bool())? ap_phi_mux_cnt_11_2_V_0_phi_fu_1544_p4.read(): cnt_11_3_V_7_fu_9297_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_9_fu_9313_p3() {
    cnt_11_3_V_9_fu_9313_p3 = (!trunc_ln301_11_fu_9208_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_11_fu_9208_p1.read()[0].to_bool())? cnt_11_3_V_8_fu_9305_p3.read(): ap_phi_mux_cnt_11_2_V_0_phi_fu_1544_p4.read());
}

void estimate_FR_2::thread_cnt_12_0_V_fu_4381_p1() {
    cnt_12_0_V_fu_4381_p1 = counts_3_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_12_1_V_fu_4585_p1() {
    cnt_12_1_V_fu_4585_p1 = counts_9_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_12_2_V_fu_4789_p1() {
    cnt_12_2_V_fu_4789_p1 = counts_15_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_12_3_V_11_fu_9689_p3() {
    cnt_12_3_V_11_fu_9689_p3 = (!and_ln700_37_fu_9621_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_37_fu_9621_p2.read()[0].to_bool())? cnt_12_3_V_30_fu_9601_p2.read(): ap_phi_mux_cnt_12_3_V_10_phi_fu_1514_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_12_fu_9697_p3() {
    cnt_12_3_V_12_fu_9697_p3 = (!and_ln700_38_fu_9635_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_38_fu_9635_p2.read()[0].to_bool())? ap_phi_mux_cnt_12_3_V_10_phi_fu_1514_p4.read(): cnt_12_3_V_11_fu_9689_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_13_fu_9705_p3() {
    cnt_12_3_V_13_fu_9705_p3 = (!trunc_ln301_12_fu_9576_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_12_fu_9576_p1.read()[0].to_bool())? cnt_12_3_V_12_fu_9697_p3.read(): ap_phi_mux_cnt_12_3_V_10_phi_fu_1514_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_15_fu_9713_p3() {
    cnt_12_3_V_15_fu_9713_p3 = (!and_ln700_38_fu_9635_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_38_fu_9635_p2.read()[0].to_bool())? cnt_12_3_V_30_fu_9601_p2.read(): ap_phi_mux_cnt_12_3_V_14_phi_fu_1524_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_16_fu_9721_p3() {
    cnt_12_3_V_16_fu_9721_p3 = (!trunc_ln301_12_fu_9576_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_12_fu_9576_p1.read()[0].to_bool())? cnt_12_3_V_15_fu_9713_p3.read(): ap_phi_mux_cnt_12_3_V_14_phi_fu_1524_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_17_fu_9729_p3() {
    cnt_12_3_V_17_fu_9729_p3 = (!trunc_ln301_12_fu_9576_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_12_fu_9576_p1.read()[0].to_bool())? cnt_12_3_V_30_fu_9601_p2.read(): ap_phi_mux_cnt_V_load_21_c_phi_fu_2124_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_18_fu_9737_p3() {
    cnt_12_3_V_18_fu_9737_p3 = (!and_ln700_36_fu_9607_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_36_fu_9607_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_21_c_phi_fu_2124_p4.read(): cnt_12_3_V_17_fu_9729_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_19_fu_9745_p3() {
    cnt_12_3_V_19_fu_9745_p3 = (!and_ln700_37_fu_9621_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_37_fu_9621_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_21_c_phi_fu_2124_p4.read(): cnt_12_3_V_18_fu_9737_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_20_fu_9753_p3() {
    cnt_12_3_V_20_fu_9753_p3 = (!and_ln700_38_fu_9635_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_38_fu_9635_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_21_c_phi_fu_2124_p4.read(): cnt_12_3_V_19_fu_9745_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_22_fu_17172_p3() {
    cnt_12_3_V_22_fu_17172_p3 = (!and_ln700_36_reg_23649.read()[0].is_01())? sc_lv<6>(): ((and_ln700_36_reg_23649.read()[0].to_bool())? cnt_12_3_V_30_reg_23643.read(): cnt_12_3_V_21_reg_2361.read());
}

void estimate_FR_2::thread_cnt_12_3_V_23_fu_17178_p3() {
    cnt_12_3_V_23_fu_17178_p3 = (!and_ln700_37_reg_23654.read()[0].is_01())? sc_lv<6>(): ((and_ln700_37_reg_23654.read()[0].to_bool())? cnt_12_3_V_21_reg_2361.read(): cnt_12_3_V_22_fu_17172_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_24_fu_17185_p3() {
    cnt_12_3_V_24_fu_17185_p3 = (!and_ln700_38_reg_23660.read()[0].is_01())? sc_lv<6>(): ((and_ln700_38_reg_23660.read()[0].to_bool())? cnt_12_3_V_21_reg_2361.read(): cnt_12_3_V_23_fu_17178_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_26_fu_17192_p3() {
    cnt_12_3_V_26_fu_17192_p3 = (!and_ln700_37_reg_23654.read()[0].is_01())? sc_lv<6>(): ((and_ln700_37_reg_23654.read()[0].to_bool())? cnt_12_3_V_30_reg_23643.read(): cnt_12_3_V_25_reg_2601.read());
}

void estimate_FR_2::thread_cnt_12_3_V_27_fu_17198_p3() {
    cnt_12_3_V_27_fu_17198_p3 = (!and_ln700_38_reg_23660.read()[0].is_01())? sc_lv<6>(): ((and_ln700_38_reg_23660.read()[0].to_bool())? cnt_12_3_V_25_reg_2601.read(): cnt_12_3_V_26_fu_17192_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_29_fu_9761_p3() {
    cnt_12_3_V_29_fu_9761_p3 = (!and_ln700_38_fu_9635_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_38_fu_9635_p2.read()[0].to_bool())? cnt_12_3_V_30_fu_9601_p2.read(): ap_phi_mux_cnt_12_3_V_28_phi_fu_2844_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_2_fu_9613_p3() {
    cnt_12_3_V_2_fu_9613_p3 = (!and_ln700_36_fu_9607_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_36_fu_9607_p2.read()[0].to_bool())? ap_phi_mux_cnt_12_3_V_0_phi_fu_1494_p4.read(): cnt_12_3_V_30_fu_9601_p2.read());
}

void estimate_FR_2::thread_cnt_12_3_V_30_fu_9601_p2() {
    cnt_12_3_V_30_fu_9601_p2 = (!ap_const_lv6_1.is_01() || !tmp_61_fu_9588_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_61_fu_9588_p6.read()));
}

void estimate_FR_2::thread_cnt_12_3_V_3_fu_9627_p3() {
    cnt_12_3_V_3_fu_9627_p3 = (!and_ln700_37_fu_9621_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_37_fu_9621_p2.read()[0].to_bool())? ap_phi_mux_cnt_12_3_V_0_phi_fu_1494_p4.read(): cnt_12_3_V_2_fu_9613_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_4_fu_9641_p3() {
    cnt_12_3_V_4_fu_9641_p3 = (!and_ln700_38_fu_9635_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_38_fu_9635_p2.read()[0].to_bool())? ap_phi_mux_cnt_12_3_V_0_phi_fu_1494_p4.read(): cnt_12_3_V_3_fu_9627_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_5_fu_9649_p3() {
    cnt_12_3_V_5_fu_9649_p3 = (!trunc_ln301_12_fu_9576_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_12_fu_9576_p1.read()[0].to_bool())? cnt_12_3_V_4_fu_9641_p3.read(): ap_phi_mux_cnt_12_3_V_0_phi_fu_1494_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_6_fu_9657_p3() {
    cnt_12_3_V_6_fu_9657_p3 = (!and_ln700_36_fu_9607_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_36_fu_9607_p2.read()[0].to_bool())? cnt_12_3_V_30_fu_9601_p2.read(): ap_phi_mux_cnt_12_2_V_0_phi_fu_1504_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_7_fu_9665_p3() {
    cnt_12_3_V_7_fu_9665_p3 = (!and_ln700_37_fu_9621_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_37_fu_9621_p2.read()[0].to_bool())? ap_phi_mux_cnt_12_2_V_0_phi_fu_1504_p4.read(): cnt_12_3_V_6_fu_9657_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_8_fu_9673_p3() {
    cnt_12_3_V_8_fu_9673_p3 = (!and_ln700_38_fu_9635_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_38_fu_9635_p2.read()[0].to_bool())? ap_phi_mux_cnt_12_2_V_0_phi_fu_1504_p4.read(): cnt_12_3_V_7_fu_9665_p3.read());
}

void estimate_FR_2::thread_cnt_12_3_V_9_fu_9681_p3() {
    cnt_12_3_V_9_fu_9681_p3 = (!trunc_ln301_12_fu_9576_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_12_fu_9576_p1.read()[0].to_bool())? cnt_12_3_V_8_fu_9673_p3.read(): ap_phi_mux_cnt_12_2_V_0_phi_fu_1504_p4.read());
}

void estimate_FR_2::thread_cnt_12_3_V_fu_4993_p1() {
    cnt_12_3_V_fu_4993_p1 = counts_21_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_13_3_V_11_fu_10057_p3() {
    cnt_13_3_V_11_fu_10057_p3 = (!and_ln700_40_fu_9989_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_40_fu_9989_p2.read()[0].to_bool())? cnt_13_3_V_30_fu_9969_p2.read(): ap_phi_mux_cnt_13_3_V_10_phi_fu_1474_p4.read());
}

void estimate_FR_2::thread_cnt_13_3_V_12_fu_10065_p3() {
    cnt_13_3_V_12_fu_10065_p3 = (!and_ln700_41_fu_10003_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_41_fu_10003_p2.read()[0].to_bool())? ap_phi_mux_cnt_13_3_V_10_phi_fu_1474_p4.read(): cnt_13_3_V_11_fu_10057_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_13_fu_10073_p3() {
    cnt_13_3_V_13_fu_10073_p3 = (!trunc_ln301_13_fu_9944_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_13_fu_9944_p1.read()[0].to_bool())? cnt_13_3_V_12_fu_10065_p3.read(): ap_phi_mux_cnt_13_3_V_10_phi_fu_1474_p4.read());
}

void estimate_FR_2::thread_cnt_13_3_V_15_fu_10081_p3() {
    cnt_13_3_V_15_fu_10081_p3 = (!and_ln700_41_fu_10003_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_41_fu_10003_p2.read()[0].to_bool())? cnt_13_3_V_30_fu_9969_p2.read(): ap_phi_mux_cnt_13_3_V_14_phi_fu_1484_p4.read());
}

void estimate_FR_2::thread_cnt_13_3_V_16_fu_10089_p3() {
    cnt_13_3_V_16_fu_10089_p3 = (!trunc_ln301_13_fu_9944_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_13_fu_9944_p1.read()[0].to_bool())? cnt_13_3_V_15_fu_10081_p3.read(): ap_phi_mux_cnt_13_3_V_14_phi_fu_1484_p4.read());
}

void estimate_FR_2::thread_cnt_13_3_V_17_fu_10097_p3() {
    cnt_13_3_V_17_fu_10097_p3 = (!trunc_ln301_13_fu_9944_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_13_fu_9944_p1.read()[0].to_bool())? cnt_13_3_V_30_fu_9969_p2.read(): ap_phi_mux_cnt_V_load_1_21_c_phi_fu_2114_p4.read());
}

void estimate_FR_2::thread_cnt_13_3_V_18_fu_10105_p3() {
    cnt_13_3_V_18_fu_10105_p3 = (!and_ln700_39_fu_9975_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_39_fu_9975_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_21_c_phi_fu_2114_p4.read(): cnt_13_3_V_17_fu_10097_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_19_fu_10113_p3() {
    cnt_13_3_V_19_fu_10113_p3 = (!and_ln700_40_fu_9989_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_40_fu_9989_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_21_c_phi_fu_2114_p4.read(): cnt_13_3_V_18_fu_10105_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_20_fu_10121_p3() {
    cnt_13_3_V_20_fu_10121_p3 = (!and_ln700_41_fu_10003_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_41_fu_10003_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_21_c_phi_fu_2114_p4.read(): cnt_13_3_V_19_fu_10113_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_22_fu_17437_p3() {
    cnt_13_3_V_22_fu_17437_p3 = (!and_ln700_39_reg_23745.read()[0].is_01())? sc_lv<6>(): ((and_ln700_39_reg_23745.read()[0].to_bool())? cnt_13_3_V_30_reg_23739.read(): cnt_13_3_V_21_reg_2351.read());
}

void estimate_FR_2::thread_cnt_13_3_V_23_fu_17443_p3() {
    cnt_13_3_V_23_fu_17443_p3 = (!and_ln700_40_reg_23750.read()[0].is_01())? sc_lv<6>(): ((and_ln700_40_reg_23750.read()[0].to_bool())? cnt_13_3_V_21_reg_2351.read(): cnt_13_3_V_22_fu_17437_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_24_fu_17450_p3() {
    cnt_13_3_V_24_fu_17450_p3 = (!and_ln700_41_reg_23756.read()[0].is_01())? sc_lv<6>(): ((and_ln700_41_reg_23756.read()[0].to_bool())? cnt_13_3_V_21_reg_2351.read(): cnt_13_3_V_23_fu_17443_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_26_fu_17457_p3() {
    cnt_13_3_V_26_fu_17457_p3 = (!and_ln700_40_reg_23750.read()[0].is_01())? sc_lv<6>(): ((and_ln700_40_reg_23750.read()[0].to_bool())? cnt_13_3_V_30_reg_23739.read(): cnt_13_3_V_25_reg_2591.read());
}

void estimate_FR_2::thread_cnt_13_3_V_27_fu_17463_p3() {
    cnt_13_3_V_27_fu_17463_p3 = (!and_ln700_41_reg_23756.read()[0].is_01())? sc_lv<6>(): ((and_ln700_41_reg_23756.read()[0].to_bool())? cnt_13_3_V_25_reg_2591.read(): cnt_13_3_V_26_fu_17457_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_29_fu_10129_p3() {
    cnt_13_3_V_29_fu_10129_p3 = (!and_ln700_41_fu_10003_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_41_fu_10003_p2.read()[0].to_bool())? cnt_13_3_V_30_fu_9969_p2.read(): ap_phi_mux_cnt_13_3_V_28_phi_fu_2834_p4.read());
}

void estimate_FR_2::thread_cnt_13_3_V_2_fu_9981_p3() {
    cnt_13_3_V_2_fu_9981_p3 = (!and_ln700_39_fu_9975_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_39_fu_9975_p2.read()[0].to_bool())? ap_phi_mux_cnt_13_3_V_0_phi_fu_1454_p4.read(): cnt_13_3_V_30_fu_9969_p2.read());
}

void estimate_FR_2::thread_cnt_13_3_V_30_fu_9969_p2() {
    cnt_13_3_V_30_fu_9969_p2 = (!ap_const_lv6_1.is_01() || !tmp_63_fu_9956_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_63_fu_9956_p6.read()));
}

void estimate_FR_2::thread_cnt_13_3_V_3_fu_9995_p3() {
    cnt_13_3_V_3_fu_9995_p3 = (!and_ln700_40_fu_9989_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_40_fu_9989_p2.read()[0].to_bool())? ap_phi_mux_cnt_13_3_V_0_phi_fu_1454_p4.read(): cnt_13_3_V_2_fu_9981_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_4_fu_10009_p3() {
    cnt_13_3_V_4_fu_10009_p3 = (!and_ln700_41_fu_10003_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_41_fu_10003_p2.read()[0].to_bool())? ap_phi_mux_cnt_13_3_V_0_phi_fu_1454_p4.read(): cnt_13_3_V_3_fu_9995_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_5_fu_10017_p3() {
    cnt_13_3_V_5_fu_10017_p3 = (!trunc_ln301_13_fu_9944_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_13_fu_9944_p1.read()[0].to_bool())? cnt_13_3_V_4_fu_10009_p3.read(): ap_phi_mux_cnt_13_3_V_0_phi_fu_1454_p4.read());
}

void estimate_FR_2::thread_cnt_13_3_V_6_fu_10025_p3() {
    cnt_13_3_V_6_fu_10025_p3 = (!and_ln700_39_fu_9975_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_39_fu_9975_p2.read()[0].to_bool())? cnt_13_3_V_30_fu_9969_p2.read(): ap_phi_mux_cnt_13_2_V_0_phi_fu_1464_p4.read());
}

void estimate_FR_2::thread_cnt_13_3_V_7_fu_10033_p3() {
    cnt_13_3_V_7_fu_10033_p3 = (!and_ln700_40_fu_9989_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_40_fu_9989_p2.read()[0].to_bool())? ap_phi_mux_cnt_13_2_V_0_phi_fu_1464_p4.read(): cnt_13_3_V_6_fu_10025_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_8_fu_10041_p3() {
    cnt_13_3_V_8_fu_10041_p3 = (!and_ln700_41_fu_10003_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_41_fu_10003_p2.read()[0].to_bool())? ap_phi_mux_cnt_13_2_V_0_phi_fu_1464_p4.read(): cnt_13_3_V_7_fu_10033_p3.read());
}

void estimate_FR_2::thread_cnt_13_3_V_9_fu_10049_p3() {
    cnt_13_3_V_9_fu_10049_p3 = (!trunc_ln301_13_fu_9944_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_13_fu_9944_p1.read()[0].to_bool())? cnt_13_3_V_8_fu_10041_p3.read(): ap_phi_mux_cnt_13_2_V_0_phi_fu_1464_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_11_fu_10425_p3() {
    cnt_14_3_V_11_fu_10425_p3 = (!and_ln700_43_fu_10357_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_43_fu_10357_p2.read()[0].to_bool())? cnt_14_3_V_30_fu_10337_p2.read(): ap_phi_mux_cnt_14_3_V_10_phi_fu_1434_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_12_fu_10433_p3() {
    cnt_14_3_V_12_fu_10433_p3 = (!and_ln700_44_fu_10371_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_44_fu_10371_p2.read()[0].to_bool())? ap_phi_mux_cnt_14_3_V_10_phi_fu_1434_p4.read(): cnt_14_3_V_11_fu_10425_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_13_fu_10441_p3() {
    cnt_14_3_V_13_fu_10441_p3 = (!trunc_ln301_14_fu_10312_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_14_fu_10312_p1.read()[0].to_bool())? cnt_14_3_V_12_fu_10433_p3.read(): ap_phi_mux_cnt_14_3_V_10_phi_fu_1434_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_15_fu_10449_p3() {
    cnt_14_3_V_15_fu_10449_p3 = (!and_ln700_44_fu_10371_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_44_fu_10371_p2.read()[0].to_bool())? cnt_14_3_V_30_fu_10337_p2.read(): ap_phi_mux_cnt_14_3_V_14_phi_fu_1444_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_16_fu_10457_p3() {
    cnt_14_3_V_16_fu_10457_p3 = (!trunc_ln301_14_fu_10312_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_14_fu_10312_p1.read()[0].to_bool())? cnt_14_3_V_15_fu_10449_p3.read(): ap_phi_mux_cnt_14_3_V_14_phi_fu_1444_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_17_fu_10465_p3() {
    cnt_14_3_V_17_fu_10465_p3 = (!trunc_ln301_14_fu_10312_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_14_fu_10312_p1.read()[0].to_bool())? cnt_14_3_V_30_fu_10337_p2.read(): ap_phi_mux_cnt_V_load_2_21_c_phi_fu_2104_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_18_fu_10473_p3() {
    cnt_14_3_V_18_fu_10473_p3 = (!and_ln700_42_fu_10343_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_42_fu_10343_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_21_c_phi_fu_2104_p4.read(): cnt_14_3_V_17_fu_10465_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_19_fu_10481_p3() {
    cnt_14_3_V_19_fu_10481_p3 = (!and_ln700_43_fu_10357_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_43_fu_10357_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_21_c_phi_fu_2104_p4.read(): cnt_14_3_V_18_fu_10473_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_20_fu_10489_p3() {
    cnt_14_3_V_20_fu_10489_p3 = (!and_ln700_44_fu_10371_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_44_fu_10371_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_21_c_phi_fu_2104_p4.read(): cnt_14_3_V_19_fu_10481_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_22_fu_17702_p3() {
    cnt_14_3_V_22_fu_17702_p3 = (!and_ln700_42_reg_23841.read()[0].is_01())? sc_lv<6>(): ((and_ln700_42_reg_23841.read()[0].to_bool())? cnt_14_3_V_30_reg_23835.read(): cnt_14_3_V_21_reg_2341.read());
}

void estimate_FR_2::thread_cnt_14_3_V_23_fu_17708_p3() {
    cnt_14_3_V_23_fu_17708_p3 = (!and_ln700_43_reg_23846.read()[0].is_01())? sc_lv<6>(): ((and_ln700_43_reg_23846.read()[0].to_bool())? cnt_14_3_V_21_reg_2341.read(): cnt_14_3_V_22_fu_17702_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_24_fu_17715_p3() {
    cnt_14_3_V_24_fu_17715_p3 = (!and_ln700_44_reg_23852.read()[0].is_01())? sc_lv<6>(): ((and_ln700_44_reg_23852.read()[0].to_bool())? cnt_14_3_V_21_reg_2341.read(): cnt_14_3_V_23_fu_17708_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_26_fu_17722_p3() {
    cnt_14_3_V_26_fu_17722_p3 = (!and_ln700_43_reg_23846.read()[0].is_01())? sc_lv<6>(): ((and_ln700_43_reg_23846.read()[0].to_bool())? cnt_14_3_V_30_reg_23835.read(): cnt_14_3_V_25_reg_2581.read());
}

void estimate_FR_2::thread_cnt_14_3_V_27_fu_17728_p3() {
    cnt_14_3_V_27_fu_17728_p3 = (!and_ln700_44_reg_23852.read()[0].is_01())? sc_lv<6>(): ((and_ln700_44_reg_23852.read()[0].to_bool())? cnt_14_3_V_25_reg_2581.read(): cnt_14_3_V_26_fu_17722_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_29_fu_10497_p3() {
    cnt_14_3_V_29_fu_10497_p3 = (!and_ln700_44_fu_10371_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_44_fu_10371_p2.read()[0].to_bool())? cnt_14_3_V_30_fu_10337_p2.read(): ap_phi_mux_cnt_14_3_V_28_phi_fu_2824_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_2_fu_10349_p3() {
    cnt_14_3_V_2_fu_10349_p3 = (!and_ln700_42_fu_10343_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_42_fu_10343_p2.read()[0].to_bool())? ap_phi_mux_cnt_14_3_V_0_phi_fu_1414_p4.read(): cnt_14_3_V_30_fu_10337_p2.read());
}

void estimate_FR_2::thread_cnt_14_3_V_30_fu_10337_p2() {
    cnt_14_3_V_30_fu_10337_p2 = (!ap_const_lv6_1.is_01() || !tmp_65_fu_10324_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_65_fu_10324_p6.read()));
}

void estimate_FR_2::thread_cnt_14_3_V_3_fu_10363_p3() {
    cnt_14_3_V_3_fu_10363_p3 = (!and_ln700_43_fu_10357_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_43_fu_10357_p2.read()[0].to_bool())? ap_phi_mux_cnt_14_3_V_0_phi_fu_1414_p4.read(): cnt_14_3_V_2_fu_10349_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_4_fu_10377_p3() {
    cnt_14_3_V_4_fu_10377_p3 = (!and_ln700_44_fu_10371_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_44_fu_10371_p2.read()[0].to_bool())? ap_phi_mux_cnt_14_3_V_0_phi_fu_1414_p4.read(): cnt_14_3_V_3_fu_10363_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_5_fu_10385_p3() {
    cnt_14_3_V_5_fu_10385_p3 = (!trunc_ln301_14_fu_10312_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_14_fu_10312_p1.read()[0].to_bool())? cnt_14_3_V_4_fu_10377_p3.read(): ap_phi_mux_cnt_14_3_V_0_phi_fu_1414_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_6_fu_10393_p3() {
    cnt_14_3_V_6_fu_10393_p3 = (!and_ln700_42_fu_10343_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_42_fu_10343_p2.read()[0].to_bool())? cnt_14_3_V_30_fu_10337_p2.read(): ap_phi_mux_cnt_14_2_V_0_phi_fu_1424_p4.read());
}

void estimate_FR_2::thread_cnt_14_3_V_7_fu_10401_p3() {
    cnt_14_3_V_7_fu_10401_p3 = (!and_ln700_43_fu_10357_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_43_fu_10357_p2.read()[0].to_bool())? ap_phi_mux_cnt_14_2_V_0_phi_fu_1424_p4.read(): cnt_14_3_V_6_fu_10393_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_8_fu_10409_p3() {
    cnt_14_3_V_8_fu_10409_p3 = (!and_ln700_44_fu_10371_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_44_fu_10371_p2.read()[0].to_bool())? ap_phi_mux_cnt_14_2_V_0_phi_fu_1424_p4.read(): cnt_14_3_V_7_fu_10401_p3.read());
}

void estimate_FR_2::thread_cnt_14_3_V_9_fu_10417_p3() {
    cnt_14_3_V_9_fu_10417_p3 = (!trunc_ln301_14_fu_10312_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_14_fu_10312_p1.read()[0].to_bool())? cnt_14_3_V_8_fu_10409_p3.read(): ap_phi_mux_cnt_14_2_V_0_phi_fu_1424_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_11_fu_10793_p3() {
    cnt_15_3_V_11_fu_10793_p3 = (!and_ln700_46_fu_10725_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_46_fu_10725_p2.read()[0].to_bool())? cnt_15_3_V_30_fu_10705_p2.read(): ap_phi_mux_cnt_15_3_V_10_phi_fu_1394_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_12_fu_10801_p3() {
    cnt_15_3_V_12_fu_10801_p3 = (!and_ln700_47_fu_10739_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_47_fu_10739_p2.read()[0].to_bool())? ap_phi_mux_cnt_15_3_V_10_phi_fu_1394_p4.read(): cnt_15_3_V_11_fu_10793_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_13_fu_10809_p3() {
    cnt_15_3_V_13_fu_10809_p3 = (!trunc_ln301_15_fu_10680_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_15_fu_10680_p1.read()[0].to_bool())? cnt_15_3_V_12_fu_10801_p3.read(): ap_phi_mux_cnt_15_3_V_10_phi_fu_1394_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_15_fu_10817_p3() {
    cnt_15_3_V_15_fu_10817_p3 = (!and_ln700_47_fu_10739_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_47_fu_10739_p2.read()[0].to_bool())? cnt_15_3_V_30_fu_10705_p2.read(): ap_phi_mux_cnt_15_3_V_14_phi_fu_1404_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_16_fu_10825_p3() {
    cnt_15_3_V_16_fu_10825_p3 = (!trunc_ln301_15_fu_10680_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_15_fu_10680_p1.read()[0].to_bool())? cnt_15_3_V_15_fu_10817_p3.read(): ap_phi_mux_cnt_15_3_V_14_phi_fu_1404_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_17_fu_10833_p3() {
    cnt_15_3_V_17_fu_10833_p3 = (!trunc_ln301_15_fu_10680_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_15_fu_10680_p1.read()[0].to_bool())? cnt_15_3_V_30_fu_10705_p2.read(): ap_phi_mux_cnt_V_load_3_21_c_phi_fu_2094_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_18_fu_10841_p3() {
    cnt_15_3_V_18_fu_10841_p3 = (!and_ln700_45_fu_10711_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_45_fu_10711_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_21_c_phi_fu_2094_p4.read(): cnt_15_3_V_17_fu_10833_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_19_fu_10849_p3() {
    cnt_15_3_V_19_fu_10849_p3 = (!and_ln700_46_fu_10725_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_46_fu_10725_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_21_c_phi_fu_2094_p4.read(): cnt_15_3_V_18_fu_10841_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_20_fu_10857_p3() {
    cnt_15_3_V_20_fu_10857_p3 = (!and_ln700_47_fu_10739_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_47_fu_10739_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_21_c_phi_fu_2094_p4.read(): cnt_15_3_V_19_fu_10849_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_22_fu_17967_p3() {
    cnt_15_3_V_22_fu_17967_p3 = (!and_ln700_45_reg_23937.read()[0].is_01())? sc_lv<6>(): ((and_ln700_45_reg_23937.read()[0].to_bool())? cnt_15_3_V_30_reg_23931.read(): cnt_15_3_V_21_reg_2331.read());
}

void estimate_FR_2::thread_cnt_15_3_V_23_fu_17973_p3() {
    cnt_15_3_V_23_fu_17973_p3 = (!and_ln700_46_reg_23942.read()[0].is_01())? sc_lv<6>(): ((and_ln700_46_reg_23942.read()[0].to_bool())? cnt_15_3_V_21_reg_2331.read(): cnt_15_3_V_22_fu_17967_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_24_fu_17980_p3() {
    cnt_15_3_V_24_fu_17980_p3 = (!and_ln700_47_reg_23948.read()[0].is_01())? sc_lv<6>(): ((and_ln700_47_reg_23948.read()[0].to_bool())? cnt_15_3_V_21_reg_2331.read(): cnt_15_3_V_23_fu_17973_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_26_fu_17987_p3() {
    cnt_15_3_V_26_fu_17987_p3 = (!and_ln700_46_reg_23942.read()[0].is_01())? sc_lv<6>(): ((and_ln700_46_reg_23942.read()[0].to_bool())? cnt_15_3_V_30_reg_23931.read(): cnt_15_3_V_25_reg_2571.read());
}

void estimate_FR_2::thread_cnt_15_3_V_27_fu_17993_p3() {
    cnt_15_3_V_27_fu_17993_p3 = (!and_ln700_47_reg_23948.read()[0].is_01())? sc_lv<6>(): ((and_ln700_47_reg_23948.read()[0].to_bool())? cnt_15_3_V_25_reg_2571.read(): cnt_15_3_V_26_fu_17987_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_29_fu_10865_p3() {
    cnt_15_3_V_29_fu_10865_p3 = (!and_ln700_47_fu_10739_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_47_fu_10739_p2.read()[0].to_bool())? cnt_15_3_V_30_fu_10705_p2.read(): ap_phi_mux_cnt_15_3_V_28_phi_fu_2814_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_2_fu_10717_p3() {
    cnt_15_3_V_2_fu_10717_p3 = (!and_ln700_45_fu_10711_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_45_fu_10711_p2.read()[0].to_bool())? ap_phi_mux_cnt_15_3_V_0_phi_fu_1374_p4.read(): cnt_15_3_V_30_fu_10705_p2.read());
}

void estimate_FR_2::thread_cnt_15_3_V_30_fu_10705_p2() {
    cnt_15_3_V_30_fu_10705_p2 = (!ap_const_lv6_1.is_01() || !tmp_67_fu_10692_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_67_fu_10692_p6.read()));
}

void estimate_FR_2::thread_cnt_15_3_V_3_fu_10731_p3() {
    cnt_15_3_V_3_fu_10731_p3 = (!and_ln700_46_fu_10725_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_46_fu_10725_p2.read()[0].to_bool())? ap_phi_mux_cnt_15_3_V_0_phi_fu_1374_p4.read(): cnt_15_3_V_2_fu_10717_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_4_fu_10745_p3() {
    cnt_15_3_V_4_fu_10745_p3 = (!and_ln700_47_fu_10739_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_47_fu_10739_p2.read()[0].to_bool())? ap_phi_mux_cnt_15_3_V_0_phi_fu_1374_p4.read(): cnt_15_3_V_3_fu_10731_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_5_fu_10753_p3() {
    cnt_15_3_V_5_fu_10753_p3 = (!trunc_ln301_15_fu_10680_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_15_fu_10680_p1.read()[0].to_bool())? cnt_15_3_V_4_fu_10745_p3.read(): ap_phi_mux_cnt_15_3_V_0_phi_fu_1374_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_6_fu_10761_p3() {
    cnt_15_3_V_6_fu_10761_p3 = (!and_ln700_45_fu_10711_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_45_fu_10711_p2.read()[0].to_bool())? cnt_15_3_V_30_fu_10705_p2.read(): ap_phi_mux_cnt_15_2_V_0_phi_fu_1384_p4.read());
}

void estimate_FR_2::thread_cnt_15_3_V_7_fu_10769_p3() {
    cnt_15_3_V_7_fu_10769_p3 = (!and_ln700_46_fu_10725_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_46_fu_10725_p2.read()[0].to_bool())? ap_phi_mux_cnt_15_2_V_0_phi_fu_1384_p4.read(): cnt_15_3_V_6_fu_10761_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_8_fu_10777_p3() {
    cnt_15_3_V_8_fu_10777_p3 = (!and_ln700_47_fu_10739_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_47_fu_10739_p2.read()[0].to_bool())? ap_phi_mux_cnt_15_2_V_0_phi_fu_1384_p4.read(): cnt_15_3_V_7_fu_10769_p3.read());
}

void estimate_FR_2::thread_cnt_15_3_V_9_fu_10785_p3() {
    cnt_15_3_V_9_fu_10785_p3 = (!trunc_ln301_15_fu_10680_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_15_fu_10680_p1.read()[0].to_bool())? cnt_15_3_V_8_fu_10777_p3.read(): ap_phi_mux_cnt_15_2_V_0_phi_fu_1384_p4.read());
}

void estimate_FR_2::thread_cnt_16_0_V_fu_4415_p1() {
    cnt_16_0_V_fu_4415_p1 = counts_4_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_16_1_V_fu_4619_p1() {
    cnt_16_1_V_fu_4619_p1 = counts_10_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_16_2_V_fu_4823_p1() {
    cnt_16_2_V_fu_4823_p1 = counts_16_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_16_3_V_11_fu_11161_p3() {
    cnt_16_3_V_11_fu_11161_p3 = (!and_ln700_49_fu_11093_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_49_fu_11093_p2.read()[0].to_bool())? cnt_16_3_V_30_fu_11073_p2.read(): ap_phi_mux_cnt_16_3_V_10_phi_fu_1354_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_12_fu_11169_p3() {
    cnt_16_3_V_12_fu_11169_p3 = (!and_ln700_50_fu_11107_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_50_fu_11107_p2.read()[0].to_bool())? ap_phi_mux_cnt_16_3_V_10_phi_fu_1354_p4.read(): cnt_16_3_V_11_fu_11161_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_13_fu_11177_p3() {
    cnt_16_3_V_13_fu_11177_p3 = (!trunc_ln301_16_fu_11048_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_16_fu_11048_p1.read()[0].to_bool())? cnt_16_3_V_12_fu_11169_p3.read(): ap_phi_mux_cnt_16_3_V_10_phi_fu_1354_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_15_fu_11185_p3() {
    cnt_16_3_V_15_fu_11185_p3 = (!and_ln700_50_fu_11107_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_50_fu_11107_p2.read()[0].to_bool())? cnt_16_3_V_30_fu_11073_p2.read(): ap_phi_mux_cnt_16_3_V_14_phi_fu_1364_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_16_fu_11193_p3() {
    cnt_16_3_V_16_fu_11193_p3 = (!trunc_ln301_16_fu_11048_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_16_fu_11048_p1.read()[0].to_bool())? cnt_16_3_V_15_fu_11185_p3.read(): ap_phi_mux_cnt_16_3_V_14_phi_fu_1364_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_17_fu_11201_p3() {
    cnt_16_3_V_17_fu_11201_p3 = (!trunc_ln301_16_fu_11048_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_16_fu_11048_p1.read()[0].to_bool())? cnt_16_3_V_30_fu_11073_p2.read(): ap_phi_mux_cnt_V_load_22_phi_fu_2084_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_18_fu_11209_p3() {
    cnt_16_3_V_18_fu_11209_p3 = (!and_ln700_48_fu_11079_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_48_fu_11079_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_22_phi_fu_2084_p4.read(): cnt_16_3_V_17_fu_11201_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_19_fu_11217_p3() {
    cnt_16_3_V_19_fu_11217_p3 = (!and_ln700_49_fu_11093_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_49_fu_11093_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_22_phi_fu_2084_p4.read(): cnt_16_3_V_18_fu_11209_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_20_fu_11225_p3() {
    cnt_16_3_V_20_fu_11225_p3 = (!and_ln700_50_fu_11107_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_50_fu_11107_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_22_phi_fu_2084_p4.read(): cnt_16_3_V_19_fu_11217_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_22_fu_18232_p3() {
    cnt_16_3_V_22_fu_18232_p3 = (!and_ln700_48_reg_24033.read()[0].is_01())? sc_lv<6>(): ((and_ln700_48_reg_24033.read()[0].to_bool())? cnt_16_3_V_30_reg_24027.read(): cnt_16_3_V_21_reg_2321.read());
}

void estimate_FR_2::thread_cnt_16_3_V_23_fu_18238_p3() {
    cnt_16_3_V_23_fu_18238_p3 = (!and_ln700_49_reg_24038.read()[0].is_01())? sc_lv<6>(): ((and_ln700_49_reg_24038.read()[0].to_bool())? cnt_16_3_V_21_reg_2321.read(): cnt_16_3_V_22_fu_18232_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_24_fu_18245_p3() {
    cnt_16_3_V_24_fu_18245_p3 = (!and_ln700_50_reg_24044.read()[0].is_01())? sc_lv<6>(): ((and_ln700_50_reg_24044.read()[0].to_bool())? cnt_16_3_V_21_reg_2321.read(): cnt_16_3_V_23_fu_18238_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_26_fu_18252_p3() {
    cnt_16_3_V_26_fu_18252_p3 = (!and_ln700_49_reg_24038.read()[0].is_01())? sc_lv<6>(): ((and_ln700_49_reg_24038.read()[0].to_bool())? cnt_16_3_V_30_reg_24027.read(): cnt_16_3_V_25_reg_2561.read());
}

void estimate_FR_2::thread_cnt_16_3_V_27_fu_18258_p3() {
    cnt_16_3_V_27_fu_18258_p3 = (!and_ln700_50_reg_24044.read()[0].is_01())? sc_lv<6>(): ((and_ln700_50_reg_24044.read()[0].to_bool())? cnt_16_3_V_25_reg_2561.read(): cnt_16_3_V_26_fu_18252_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_29_fu_11233_p3() {
    cnt_16_3_V_29_fu_11233_p3 = (!and_ln700_50_fu_11107_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_50_fu_11107_p2.read()[0].to_bool())? cnt_16_3_V_30_fu_11073_p2.read(): ap_phi_mux_cnt_16_3_V_28_phi_fu_2804_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_2_fu_11085_p3() {
    cnt_16_3_V_2_fu_11085_p3 = (!and_ln700_48_fu_11079_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_48_fu_11079_p2.read()[0].to_bool())? ap_phi_mux_cnt_16_3_V_0_phi_fu_1334_p4.read(): cnt_16_3_V_30_fu_11073_p2.read());
}

void estimate_FR_2::thread_cnt_16_3_V_30_fu_11073_p2() {
    cnt_16_3_V_30_fu_11073_p2 = (!ap_const_lv6_1.is_01() || !tmp_69_fu_11060_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_69_fu_11060_p6.read()));
}

void estimate_FR_2::thread_cnt_16_3_V_3_fu_11099_p3() {
    cnt_16_3_V_3_fu_11099_p3 = (!and_ln700_49_fu_11093_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_49_fu_11093_p2.read()[0].to_bool())? ap_phi_mux_cnt_16_3_V_0_phi_fu_1334_p4.read(): cnt_16_3_V_2_fu_11085_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_4_fu_11113_p3() {
    cnt_16_3_V_4_fu_11113_p3 = (!and_ln700_50_fu_11107_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_50_fu_11107_p2.read()[0].to_bool())? ap_phi_mux_cnt_16_3_V_0_phi_fu_1334_p4.read(): cnt_16_3_V_3_fu_11099_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_5_fu_11121_p3() {
    cnt_16_3_V_5_fu_11121_p3 = (!trunc_ln301_16_fu_11048_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_16_fu_11048_p1.read()[0].to_bool())? cnt_16_3_V_4_fu_11113_p3.read(): ap_phi_mux_cnt_16_3_V_0_phi_fu_1334_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_6_fu_11129_p3() {
    cnt_16_3_V_6_fu_11129_p3 = (!and_ln700_48_fu_11079_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_48_fu_11079_p2.read()[0].to_bool())? cnt_16_3_V_30_fu_11073_p2.read(): ap_phi_mux_cnt_16_2_V_0_phi_fu_1344_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_7_fu_11137_p3() {
    cnt_16_3_V_7_fu_11137_p3 = (!and_ln700_49_fu_11093_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_49_fu_11093_p2.read()[0].to_bool())? ap_phi_mux_cnt_16_2_V_0_phi_fu_1344_p4.read(): cnt_16_3_V_6_fu_11129_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_8_fu_11145_p3() {
    cnt_16_3_V_8_fu_11145_p3 = (!and_ln700_50_fu_11107_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_50_fu_11107_p2.read()[0].to_bool())? ap_phi_mux_cnt_16_2_V_0_phi_fu_1344_p4.read(): cnt_16_3_V_7_fu_11137_p3.read());
}

void estimate_FR_2::thread_cnt_16_3_V_9_fu_11153_p3() {
    cnt_16_3_V_9_fu_11153_p3 = (!trunc_ln301_16_fu_11048_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_16_fu_11048_p1.read()[0].to_bool())? cnt_16_3_V_8_fu_11145_p3.read(): ap_phi_mux_cnt_16_2_V_0_phi_fu_1344_p4.read());
}

void estimate_FR_2::thread_cnt_16_3_V_fu_5027_p1() {
    cnt_16_3_V_fu_5027_p1 = counts_22_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_17_3_V_11_fu_11529_p3() {
    cnt_17_3_V_11_fu_11529_p3 = (!and_ln700_52_fu_11461_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_52_fu_11461_p2.read()[0].to_bool())? cnt_17_3_V_30_fu_11441_p2.read(): ap_phi_mux_cnt_17_3_V_10_phi_fu_1314_p4.read());
}

void estimate_FR_2::thread_cnt_17_3_V_12_fu_11537_p3() {
    cnt_17_3_V_12_fu_11537_p3 = (!and_ln700_53_fu_11475_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_53_fu_11475_p2.read()[0].to_bool())? ap_phi_mux_cnt_17_3_V_10_phi_fu_1314_p4.read(): cnt_17_3_V_11_fu_11529_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_13_fu_11545_p3() {
    cnt_17_3_V_13_fu_11545_p3 = (!trunc_ln301_17_fu_11416_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_17_fu_11416_p1.read()[0].to_bool())? cnt_17_3_V_12_fu_11537_p3.read(): ap_phi_mux_cnt_17_3_V_10_phi_fu_1314_p4.read());
}

void estimate_FR_2::thread_cnt_17_3_V_15_fu_11553_p3() {
    cnt_17_3_V_15_fu_11553_p3 = (!and_ln700_53_fu_11475_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_53_fu_11475_p2.read()[0].to_bool())? cnt_17_3_V_30_fu_11441_p2.read(): ap_phi_mux_cnt_17_3_V_14_phi_fu_1324_p4.read());
}

void estimate_FR_2::thread_cnt_17_3_V_16_fu_11561_p3() {
    cnt_17_3_V_16_fu_11561_p3 = (!trunc_ln301_17_fu_11416_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_17_fu_11416_p1.read()[0].to_bool())? cnt_17_3_V_15_fu_11553_p3.read(): ap_phi_mux_cnt_17_3_V_14_phi_fu_1324_p4.read());
}

void estimate_FR_2::thread_cnt_17_3_V_17_fu_11569_p3() {
    cnt_17_3_V_17_fu_11569_p3 = (!trunc_ln301_17_fu_11416_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_17_fu_11416_p1.read()[0].to_bool())? cnt_17_3_V_30_fu_11441_p2.read(): ap_phi_mux_cnt_V_load_1_22_phi_fu_2074_p4.read());
}

void estimate_FR_2::thread_cnt_17_3_V_18_fu_11577_p3() {
    cnt_17_3_V_18_fu_11577_p3 = (!and_ln700_51_fu_11447_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_51_fu_11447_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_22_phi_fu_2074_p4.read(): cnt_17_3_V_17_fu_11569_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_19_fu_11585_p3() {
    cnt_17_3_V_19_fu_11585_p3 = (!and_ln700_52_fu_11461_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_52_fu_11461_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_22_phi_fu_2074_p4.read(): cnt_17_3_V_18_fu_11577_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_20_fu_11593_p3() {
    cnt_17_3_V_20_fu_11593_p3 = (!and_ln700_53_fu_11475_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_53_fu_11475_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_22_phi_fu_2074_p4.read(): cnt_17_3_V_19_fu_11585_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_22_fu_18497_p3() {
    cnt_17_3_V_22_fu_18497_p3 = (!and_ln700_51_reg_24129.read()[0].is_01())? sc_lv<6>(): ((and_ln700_51_reg_24129.read()[0].to_bool())? cnt_17_3_V_30_reg_24123.read(): cnt_17_3_V_21_reg_2311.read());
}

void estimate_FR_2::thread_cnt_17_3_V_23_fu_18503_p3() {
    cnt_17_3_V_23_fu_18503_p3 = (!and_ln700_52_reg_24134.read()[0].is_01())? sc_lv<6>(): ((and_ln700_52_reg_24134.read()[0].to_bool())? cnt_17_3_V_21_reg_2311.read(): cnt_17_3_V_22_fu_18497_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_24_fu_18510_p3() {
    cnt_17_3_V_24_fu_18510_p3 = (!and_ln700_53_reg_24140.read()[0].is_01())? sc_lv<6>(): ((and_ln700_53_reg_24140.read()[0].to_bool())? cnt_17_3_V_21_reg_2311.read(): cnt_17_3_V_23_fu_18503_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_26_fu_18517_p3() {
    cnt_17_3_V_26_fu_18517_p3 = (!and_ln700_52_reg_24134.read()[0].is_01())? sc_lv<6>(): ((and_ln700_52_reg_24134.read()[0].to_bool())? cnt_17_3_V_30_reg_24123.read(): cnt_17_3_V_25_reg_2551.read());
}

void estimate_FR_2::thread_cnt_17_3_V_27_fu_18523_p3() {
    cnt_17_3_V_27_fu_18523_p3 = (!and_ln700_53_reg_24140.read()[0].is_01())? sc_lv<6>(): ((and_ln700_53_reg_24140.read()[0].to_bool())? cnt_17_3_V_25_reg_2551.read(): cnt_17_3_V_26_fu_18517_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_29_fu_11601_p3() {
    cnt_17_3_V_29_fu_11601_p3 = (!and_ln700_53_fu_11475_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_53_fu_11475_p2.read()[0].to_bool())? cnt_17_3_V_30_fu_11441_p2.read(): ap_phi_mux_cnt_17_3_V_28_phi_fu_2794_p4.read());
}

void estimate_FR_2::thread_cnt_17_3_V_2_fu_11453_p3() {
    cnt_17_3_V_2_fu_11453_p3 = (!and_ln700_51_fu_11447_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_51_fu_11447_p2.read()[0].to_bool())? ap_phi_mux_cnt_17_3_V_0_phi_fu_1294_p4.read(): cnt_17_3_V_30_fu_11441_p2.read());
}

void estimate_FR_2::thread_cnt_17_3_V_30_fu_11441_p2() {
    cnt_17_3_V_30_fu_11441_p2 = (!ap_const_lv6_1.is_01() || !tmp_71_fu_11428_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_71_fu_11428_p6.read()));
}

void estimate_FR_2::thread_cnt_17_3_V_3_fu_11467_p3() {
    cnt_17_3_V_3_fu_11467_p3 = (!and_ln700_52_fu_11461_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_52_fu_11461_p2.read()[0].to_bool())? ap_phi_mux_cnt_17_3_V_0_phi_fu_1294_p4.read(): cnt_17_3_V_2_fu_11453_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_4_fu_11481_p3() {
    cnt_17_3_V_4_fu_11481_p3 = (!and_ln700_53_fu_11475_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_53_fu_11475_p2.read()[0].to_bool())? ap_phi_mux_cnt_17_3_V_0_phi_fu_1294_p4.read(): cnt_17_3_V_3_fu_11467_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_5_fu_11489_p3() {
    cnt_17_3_V_5_fu_11489_p3 = (!trunc_ln301_17_fu_11416_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_17_fu_11416_p1.read()[0].to_bool())? cnt_17_3_V_4_fu_11481_p3.read(): ap_phi_mux_cnt_17_3_V_0_phi_fu_1294_p4.read());
}

void estimate_FR_2::thread_cnt_17_3_V_6_fu_11497_p3() {
    cnt_17_3_V_6_fu_11497_p3 = (!and_ln700_51_fu_11447_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_51_fu_11447_p2.read()[0].to_bool())? cnt_17_3_V_30_fu_11441_p2.read(): ap_phi_mux_cnt_17_2_V_0_phi_fu_1304_p4.read());
}

void estimate_FR_2::thread_cnt_17_3_V_7_fu_11505_p3() {
    cnt_17_3_V_7_fu_11505_p3 = (!and_ln700_52_fu_11461_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_52_fu_11461_p2.read()[0].to_bool())? ap_phi_mux_cnt_17_2_V_0_phi_fu_1304_p4.read(): cnt_17_3_V_6_fu_11497_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_8_fu_11513_p3() {
    cnt_17_3_V_8_fu_11513_p3 = (!and_ln700_53_fu_11475_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_53_fu_11475_p2.read()[0].to_bool())? ap_phi_mux_cnt_17_2_V_0_phi_fu_1304_p4.read(): cnt_17_3_V_7_fu_11505_p3.read());
}

void estimate_FR_2::thread_cnt_17_3_V_9_fu_11521_p3() {
    cnt_17_3_V_9_fu_11521_p3 = (!trunc_ln301_17_fu_11416_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_17_fu_11416_p1.read()[0].to_bool())? cnt_17_3_V_8_fu_11513_p3.read(): ap_phi_mux_cnt_17_2_V_0_phi_fu_1304_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_11_fu_11897_p3() {
    cnt_18_3_V_11_fu_11897_p3 = (!and_ln700_55_fu_11829_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_55_fu_11829_p2.read()[0].to_bool())? cnt_18_3_V_30_fu_11809_p2.read(): ap_phi_mux_cnt_18_3_V_10_phi_fu_1274_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_12_fu_11905_p3() {
    cnt_18_3_V_12_fu_11905_p3 = (!and_ln700_56_fu_11843_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_56_fu_11843_p2.read()[0].to_bool())? ap_phi_mux_cnt_18_3_V_10_phi_fu_1274_p4.read(): cnt_18_3_V_11_fu_11897_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_13_fu_11913_p3() {
    cnt_18_3_V_13_fu_11913_p3 = (!trunc_ln301_18_fu_11784_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_18_fu_11784_p1.read()[0].to_bool())? cnt_18_3_V_12_fu_11905_p3.read(): ap_phi_mux_cnt_18_3_V_10_phi_fu_1274_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_15_fu_11921_p3() {
    cnt_18_3_V_15_fu_11921_p3 = (!and_ln700_56_fu_11843_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_56_fu_11843_p2.read()[0].to_bool())? cnt_18_3_V_30_fu_11809_p2.read(): ap_phi_mux_cnt_18_3_V_14_phi_fu_1284_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_16_fu_11929_p3() {
    cnt_18_3_V_16_fu_11929_p3 = (!trunc_ln301_18_fu_11784_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_18_fu_11784_p1.read()[0].to_bool())? cnt_18_3_V_15_fu_11921_p3.read(): ap_phi_mux_cnt_18_3_V_14_phi_fu_1284_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_17_fu_11937_p3() {
    cnt_18_3_V_17_fu_11937_p3 = (!trunc_ln301_18_fu_11784_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_18_fu_11784_p1.read()[0].to_bool())? cnt_18_3_V_30_fu_11809_p2.read(): ap_phi_mux_cnt_V_load_2_22_phi_fu_2064_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_18_fu_11945_p3() {
    cnt_18_3_V_18_fu_11945_p3 = (!and_ln700_54_fu_11815_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_54_fu_11815_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_22_phi_fu_2064_p4.read(): cnt_18_3_V_17_fu_11937_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_19_fu_11953_p3() {
    cnt_18_3_V_19_fu_11953_p3 = (!and_ln700_55_fu_11829_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_55_fu_11829_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_22_phi_fu_2064_p4.read(): cnt_18_3_V_18_fu_11945_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_20_fu_11961_p3() {
    cnt_18_3_V_20_fu_11961_p3 = (!and_ln700_56_fu_11843_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_56_fu_11843_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_22_phi_fu_2064_p4.read(): cnt_18_3_V_19_fu_11953_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_22_fu_18762_p3() {
    cnt_18_3_V_22_fu_18762_p3 = (!and_ln700_54_reg_24225.read()[0].is_01())? sc_lv<6>(): ((and_ln700_54_reg_24225.read()[0].to_bool())? cnt_18_3_V_30_reg_24219.read(): cnt_18_3_V_21_reg_2301.read());
}

void estimate_FR_2::thread_cnt_18_3_V_23_fu_18768_p3() {
    cnt_18_3_V_23_fu_18768_p3 = (!and_ln700_55_reg_24230.read()[0].is_01())? sc_lv<6>(): ((and_ln700_55_reg_24230.read()[0].to_bool())? cnt_18_3_V_21_reg_2301.read(): cnt_18_3_V_22_fu_18762_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_24_fu_18775_p3() {
    cnt_18_3_V_24_fu_18775_p3 = (!and_ln700_56_reg_24236.read()[0].is_01())? sc_lv<6>(): ((and_ln700_56_reg_24236.read()[0].to_bool())? cnt_18_3_V_21_reg_2301.read(): cnt_18_3_V_23_fu_18768_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_26_fu_18782_p3() {
    cnt_18_3_V_26_fu_18782_p3 = (!and_ln700_55_reg_24230.read()[0].is_01())? sc_lv<6>(): ((and_ln700_55_reg_24230.read()[0].to_bool())? cnt_18_3_V_30_reg_24219.read(): cnt_18_3_V_25_reg_2541.read());
}

void estimate_FR_2::thread_cnt_18_3_V_27_fu_18788_p3() {
    cnt_18_3_V_27_fu_18788_p3 = (!and_ln700_56_reg_24236.read()[0].is_01())? sc_lv<6>(): ((and_ln700_56_reg_24236.read()[0].to_bool())? cnt_18_3_V_25_reg_2541.read(): cnt_18_3_V_26_fu_18782_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_29_fu_11969_p3() {
    cnt_18_3_V_29_fu_11969_p3 = (!and_ln700_56_fu_11843_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_56_fu_11843_p2.read()[0].to_bool())? cnt_18_3_V_30_fu_11809_p2.read(): ap_phi_mux_cnt_18_3_V_28_phi_fu_2784_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_2_fu_11821_p3() {
    cnt_18_3_V_2_fu_11821_p3 = (!and_ln700_54_fu_11815_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_54_fu_11815_p2.read()[0].to_bool())? ap_phi_mux_cnt_18_3_V_0_phi_fu_1254_p4.read(): cnt_18_3_V_30_fu_11809_p2.read());
}

void estimate_FR_2::thread_cnt_18_3_V_30_fu_11809_p2() {
    cnt_18_3_V_30_fu_11809_p2 = (!ap_const_lv6_1.is_01() || !tmp_73_fu_11796_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_73_fu_11796_p6.read()));
}

void estimate_FR_2::thread_cnt_18_3_V_3_fu_11835_p3() {
    cnt_18_3_V_3_fu_11835_p3 = (!and_ln700_55_fu_11829_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_55_fu_11829_p2.read()[0].to_bool())? ap_phi_mux_cnt_18_3_V_0_phi_fu_1254_p4.read(): cnt_18_3_V_2_fu_11821_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_4_fu_11849_p3() {
    cnt_18_3_V_4_fu_11849_p3 = (!and_ln700_56_fu_11843_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_56_fu_11843_p2.read()[0].to_bool())? ap_phi_mux_cnt_18_3_V_0_phi_fu_1254_p4.read(): cnt_18_3_V_3_fu_11835_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_5_fu_11857_p3() {
    cnt_18_3_V_5_fu_11857_p3 = (!trunc_ln301_18_fu_11784_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_18_fu_11784_p1.read()[0].to_bool())? cnt_18_3_V_4_fu_11849_p3.read(): ap_phi_mux_cnt_18_3_V_0_phi_fu_1254_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_6_fu_11865_p3() {
    cnt_18_3_V_6_fu_11865_p3 = (!and_ln700_54_fu_11815_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_54_fu_11815_p2.read()[0].to_bool())? cnt_18_3_V_30_fu_11809_p2.read(): ap_phi_mux_cnt_18_2_V_0_phi_fu_1264_p4.read());
}

void estimate_FR_2::thread_cnt_18_3_V_7_fu_11873_p3() {
    cnt_18_3_V_7_fu_11873_p3 = (!and_ln700_55_fu_11829_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_55_fu_11829_p2.read()[0].to_bool())? ap_phi_mux_cnt_18_2_V_0_phi_fu_1264_p4.read(): cnt_18_3_V_6_fu_11865_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_8_fu_11881_p3() {
    cnt_18_3_V_8_fu_11881_p3 = (!and_ln700_56_fu_11843_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_56_fu_11843_p2.read()[0].to_bool())? ap_phi_mux_cnt_18_2_V_0_phi_fu_1264_p4.read(): cnt_18_3_V_7_fu_11873_p3.read());
}

void estimate_FR_2::thread_cnt_18_3_V_9_fu_11889_p3() {
    cnt_18_3_V_9_fu_11889_p3 = (!trunc_ln301_18_fu_11784_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_18_fu_11784_p1.read()[0].to_bool())? cnt_18_3_V_8_fu_11881_p3.read(): ap_phi_mux_cnt_18_2_V_0_phi_fu_1264_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_11_fu_12265_p3() {
    cnt_19_3_V_11_fu_12265_p3 = (!and_ln700_58_fu_12197_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_58_fu_12197_p2.read()[0].to_bool())? cnt_19_3_V_30_fu_12177_p2.read(): ap_phi_mux_cnt_19_3_V_10_phi_fu_1234_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_12_fu_12273_p3() {
    cnt_19_3_V_12_fu_12273_p3 = (!and_ln700_59_fu_12211_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_59_fu_12211_p2.read()[0].to_bool())? ap_phi_mux_cnt_19_3_V_10_phi_fu_1234_p4.read(): cnt_19_3_V_11_fu_12265_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_13_fu_12281_p3() {
    cnt_19_3_V_13_fu_12281_p3 = (!trunc_ln301_19_fu_12152_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_19_fu_12152_p1.read()[0].to_bool())? cnt_19_3_V_12_fu_12273_p3.read(): ap_phi_mux_cnt_19_3_V_10_phi_fu_1234_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_15_fu_12289_p3() {
    cnt_19_3_V_15_fu_12289_p3 = (!and_ln700_59_fu_12211_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_59_fu_12211_p2.read()[0].to_bool())? cnt_19_3_V_30_fu_12177_p2.read(): ap_phi_mux_cnt_19_3_V_14_phi_fu_1244_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_16_fu_12297_p3() {
    cnt_19_3_V_16_fu_12297_p3 = (!trunc_ln301_19_fu_12152_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_19_fu_12152_p1.read()[0].to_bool())? cnt_19_3_V_15_fu_12289_p3.read(): ap_phi_mux_cnt_19_3_V_14_phi_fu_1244_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_17_fu_12305_p3() {
    cnt_19_3_V_17_fu_12305_p3 = (!trunc_ln301_19_fu_12152_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_19_fu_12152_p1.read()[0].to_bool())? cnt_19_3_V_30_fu_12177_p2.read(): ap_phi_mux_cnt_V_load_3_22_phi_fu_2054_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_18_fu_12313_p3() {
    cnt_19_3_V_18_fu_12313_p3 = (!and_ln700_57_fu_12183_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_57_fu_12183_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_22_phi_fu_2054_p4.read(): cnt_19_3_V_17_fu_12305_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_19_fu_12321_p3() {
    cnt_19_3_V_19_fu_12321_p3 = (!and_ln700_58_fu_12197_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_58_fu_12197_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_22_phi_fu_2054_p4.read(): cnt_19_3_V_18_fu_12313_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_20_fu_12329_p3() {
    cnt_19_3_V_20_fu_12329_p3 = (!and_ln700_59_fu_12211_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_59_fu_12211_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_22_phi_fu_2054_p4.read(): cnt_19_3_V_19_fu_12321_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_22_fu_19027_p3() {
    cnt_19_3_V_22_fu_19027_p3 = (!and_ln700_57_reg_24321.read()[0].is_01())? sc_lv<6>(): ((and_ln700_57_reg_24321.read()[0].to_bool())? cnt_19_3_V_30_reg_24315.read(): cnt_19_3_V_21_reg_2291.read());
}

void estimate_FR_2::thread_cnt_19_3_V_23_fu_19033_p3() {
    cnt_19_3_V_23_fu_19033_p3 = (!and_ln700_58_reg_24326.read()[0].is_01())? sc_lv<6>(): ((and_ln700_58_reg_24326.read()[0].to_bool())? cnt_19_3_V_21_reg_2291.read(): cnt_19_3_V_22_fu_19027_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_24_fu_19040_p3() {
    cnt_19_3_V_24_fu_19040_p3 = (!and_ln700_59_reg_24332.read()[0].is_01())? sc_lv<6>(): ((and_ln700_59_reg_24332.read()[0].to_bool())? cnt_19_3_V_21_reg_2291.read(): cnt_19_3_V_23_fu_19033_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_26_fu_19047_p3() {
    cnt_19_3_V_26_fu_19047_p3 = (!and_ln700_58_reg_24326.read()[0].is_01())? sc_lv<6>(): ((and_ln700_58_reg_24326.read()[0].to_bool())? cnt_19_3_V_30_reg_24315.read(): cnt_19_3_V_25_reg_2531.read());
}

void estimate_FR_2::thread_cnt_19_3_V_27_fu_19053_p3() {
    cnt_19_3_V_27_fu_19053_p3 = (!and_ln700_59_reg_24332.read()[0].is_01())? sc_lv<6>(): ((and_ln700_59_reg_24332.read()[0].to_bool())? cnt_19_3_V_25_reg_2531.read(): cnt_19_3_V_26_fu_19047_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_29_fu_12337_p3() {
    cnt_19_3_V_29_fu_12337_p3 = (!and_ln700_59_fu_12211_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_59_fu_12211_p2.read()[0].to_bool())? cnt_19_3_V_30_fu_12177_p2.read(): ap_phi_mux_cnt_19_3_V_28_phi_fu_2774_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_2_fu_12189_p3() {
    cnt_19_3_V_2_fu_12189_p3 = (!and_ln700_57_fu_12183_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_57_fu_12183_p2.read()[0].to_bool())? ap_phi_mux_cnt_19_3_V_0_phi_fu_1214_p4.read(): cnt_19_3_V_30_fu_12177_p2.read());
}

void estimate_FR_2::thread_cnt_19_3_V_30_fu_12177_p2() {
    cnt_19_3_V_30_fu_12177_p2 = (!ap_const_lv6_1.is_01() || !tmp_75_fu_12164_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_75_fu_12164_p6.read()));
}

void estimate_FR_2::thread_cnt_19_3_V_3_fu_12203_p3() {
    cnt_19_3_V_3_fu_12203_p3 = (!and_ln700_58_fu_12197_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_58_fu_12197_p2.read()[0].to_bool())? ap_phi_mux_cnt_19_3_V_0_phi_fu_1214_p4.read(): cnt_19_3_V_2_fu_12189_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_4_fu_12217_p3() {
    cnt_19_3_V_4_fu_12217_p3 = (!and_ln700_59_fu_12211_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_59_fu_12211_p2.read()[0].to_bool())? ap_phi_mux_cnt_19_3_V_0_phi_fu_1214_p4.read(): cnt_19_3_V_3_fu_12203_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_5_fu_12225_p3() {
    cnt_19_3_V_5_fu_12225_p3 = (!trunc_ln301_19_fu_12152_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_19_fu_12152_p1.read()[0].to_bool())? cnt_19_3_V_4_fu_12217_p3.read(): ap_phi_mux_cnt_19_3_V_0_phi_fu_1214_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_6_fu_12233_p3() {
    cnt_19_3_V_6_fu_12233_p3 = (!and_ln700_57_fu_12183_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_57_fu_12183_p2.read()[0].to_bool())? cnt_19_3_V_30_fu_12177_p2.read(): ap_phi_mux_cnt_19_2_V_0_phi_fu_1224_p4.read());
}

void estimate_FR_2::thread_cnt_19_3_V_7_fu_12241_p3() {
    cnt_19_3_V_7_fu_12241_p3 = (!and_ln700_58_fu_12197_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_58_fu_12197_p2.read()[0].to_bool())? ap_phi_mux_cnt_19_2_V_0_phi_fu_1224_p4.read(): cnt_19_3_V_6_fu_12233_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_8_fu_12249_p3() {
    cnt_19_3_V_8_fu_12249_p3 = (!and_ln700_59_fu_12211_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_59_fu_12211_p2.read()[0].to_bool())? ap_phi_mux_cnt_19_2_V_0_phi_fu_1224_p4.read(): cnt_19_3_V_7_fu_12241_p3.read());
}

void estimate_FR_2::thread_cnt_19_3_V_9_fu_12257_p3() {
    cnt_19_3_V_9_fu_12257_p3 = (!trunc_ln301_19_fu_12152_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_19_fu_12152_p1.read()[0].to_bool())? cnt_19_3_V_8_fu_12249_p3.read(): ap_phi_mux_cnt_19_2_V_0_phi_fu_1224_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_11_fu_5641_p3() {
    cnt_1_3_V_11_fu_5641_p3 = (!and_ln700_4_fu_5573_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_4_fu_5573_p2.read()[0].to_bool())? cnt_1_3_V_30_fu_5553_p2.read(): ap_phi_mux_cnt_1_3_V_10_phi_fu_1954_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_12_fu_5649_p3() {
    cnt_1_3_V_12_fu_5649_p3 = (!and_ln700_5_fu_5587_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_5_fu_5587_p2.read()[0].to_bool())? ap_phi_mux_cnt_1_3_V_10_phi_fu_1954_p4.read(): cnt_1_3_V_11_fu_5641_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_13_fu_5657_p3() {
    cnt_1_3_V_13_fu_5657_p3 = (!trunc_ln301_1_fu_5528_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_1_fu_5528_p1.read()[0].to_bool())? cnt_1_3_V_12_fu_5649_p3.read(): ap_phi_mux_cnt_1_3_V_10_phi_fu_1954_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_15_fu_5665_p3() {
    cnt_1_3_V_15_fu_5665_p3 = (!and_ln700_5_fu_5587_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_5_fu_5587_p2.read()[0].to_bool())? cnt_1_3_V_30_fu_5553_p2.read(): ap_phi_mux_cnt_1_3_V_14_phi_fu_1964_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_16_fu_5673_p3() {
    cnt_1_3_V_16_fu_5673_p3 = (!trunc_ln301_1_fu_5528_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_1_fu_5528_p1.read()[0].to_bool())? cnt_1_3_V_15_fu_5665_p3.read(): ap_phi_mux_cnt_1_3_V_14_phi_fu_1964_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_17_fu_5681_p3() {
    cnt_1_3_V_17_fu_5681_p3 = (!trunc_ln301_1_fu_5528_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_1_fu_5528_p1.read()[0].to_bool())? cnt_1_3_V_30_fu_5553_p2.read(): ap_phi_mux_cnt_V_load_1_18_phi_fu_2234_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_18_fu_5689_p3() {
    cnt_1_3_V_18_fu_5689_p3 = (!and_ln700_3_fu_5559_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_3_fu_5559_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_18_phi_fu_2234_p4.read(): cnt_1_3_V_17_fu_5681_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_19_fu_5697_p3() {
    cnt_1_3_V_19_fu_5697_p3 = (!and_ln700_4_fu_5573_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_4_fu_5573_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_18_phi_fu_2234_p4.read(): cnt_1_3_V_18_fu_5689_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_20_fu_5705_p3() {
    cnt_1_3_V_20_fu_5705_p3 = (!and_ln700_5_fu_5587_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_5_fu_5587_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_18_phi_fu_2234_p4.read(): cnt_1_3_V_19_fu_5697_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_22_fu_14257_p3() {
    cnt_1_3_V_22_fu_14257_p3 = (!and_ln700_3_reg_22593.read()[0].is_01())? sc_lv<6>(): ((and_ln700_3_reg_22593.read()[0].to_bool())? cnt_1_3_V_30_reg_22587.read(): cnt_1_3_V_21_reg_2471.read());
}

void estimate_FR_2::thread_cnt_1_3_V_23_fu_14263_p3() {
    cnt_1_3_V_23_fu_14263_p3 = (!and_ln700_4_reg_22598.read()[0].is_01())? sc_lv<6>(): ((and_ln700_4_reg_22598.read()[0].to_bool())? cnt_1_3_V_21_reg_2471.read(): cnt_1_3_V_22_fu_14257_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_24_fu_14270_p3() {
    cnt_1_3_V_24_fu_14270_p3 = (!and_ln700_5_reg_22604.read()[0].is_01())? sc_lv<6>(): ((and_ln700_5_reg_22604.read()[0].to_bool())? cnt_1_3_V_21_reg_2471.read(): cnt_1_3_V_23_fu_14263_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_26_fu_14277_p3() {
    cnt_1_3_V_26_fu_14277_p3 = (!and_ln700_4_reg_22598.read()[0].is_01())? sc_lv<6>(): ((and_ln700_4_reg_22598.read()[0].to_bool())? cnt_1_3_V_30_reg_22587.read(): cnt_1_3_V_25_reg_2711.read());
}

void estimate_FR_2::thread_cnt_1_3_V_27_fu_14283_p3() {
    cnt_1_3_V_27_fu_14283_p3 = (!and_ln700_5_reg_22604.read()[0].is_01())? sc_lv<6>(): ((and_ln700_5_reg_22604.read()[0].to_bool())? cnt_1_3_V_25_reg_2711.read(): cnt_1_3_V_26_fu_14277_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_29_fu_5713_p3() {
    cnt_1_3_V_29_fu_5713_p3 = (!and_ln700_5_fu_5587_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_5_fu_5587_p2.read()[0].to_bool())? cnt_1_3_V_30_fu_5553_p2.read(): ap_phi_mux_cnt_1_3_V_28_phi_fu_2954_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_2_fu_5565_p3() {
    cnt_1_3_V_2_fu_5565_p3 = (!and_ln700_3_fu_5559_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_3_fu_5559_p2.read()[0].to_bool())? ap_phi_mux_cnt_1_3_V_0_phi_fu_1934_p4.read(): cnt_1_3_V_30_fu_5553_p2.read());
}

void estimate_FR_2::thread_cnt_1_3_V_30_fu_5553_p2() {
    cnt_1_3_V_30_fu_5553_p2 = (!ap_const_lv6_1.is_01() || !tmp_22_fu_5540_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_22_fu_5540_p6.read()));
}

void estimate_FR_2::thread_cnt_1_3_V_3_fu_5579_p3() {
    cnt_1_3_V_3_fu_5579_p3 = (!and_ln700_4_fu_5573_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_4_fu_5573_p2.read()[0].to_bool())? ap_phi_mux_cnt_1_3_V_0_phi_fu_1934_p4.read(): cnt_1_3_V_2_fu_5565_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_4_fu_5593_p3() {
    cnt_1_3_V_4_fu_5593_p3 = (!and_ln700_5_fu_5587_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_5_fu_5587_p2.read()[0].to_bool())? ap_phi_mux_cnt_1_3_V_0_phi_fu_1934_p4.read(): cnt_1_3_V_3_fu_5579_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_5_fu_5601_p3() {
    cnt_1_3_V_5_fu_5601_p3 = (!trunc_ln301_1_fu_5528_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_1_fu_5528_p1.read()[0].to_bool())? cnt_1_3_V_4_fu_5593_p3.read(): ap_phi_mux_cnt_1_3_V_0_phi_fu_1934_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_6_fu_5609_p3() {
    cnt_1_3_V_6_fu_5609_p3 = (!and_ln700_3_fu_5559_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_3_fu_5559_p2.read()[0].to_bool())? cnt_1_3_V_30_fu_5553_p2.read(): ap_phi_mux_cnt_1_2_V_0_phi_fu_1944_p4.read());
}

void estimate_FR_2::thread_cnt_1_3_V_7_fu_5617_p3() {
    cnt_1_3_V_7_fu_5617_p3 = (!and_ln700_4_fu_5573_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_4_fu_5573_p2.read()[0].to_bool())? ap_phi_mux_cnt_1_2_V_0_phi_fu_1944_p4.read(): cnt_1_3_V_6_fu_5609_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_8_fu_5625_p3() {
    cnt_1_3_V_8_fu_5625_p3 = (!and_ln700_5_fu_5587_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_5_fu_5587_p2.read()[0].to_bool())? ap_phi_mux_cnt_1_2_V_0_phi_fu_1944_p4.read(): cnt_1_3_V_7_fu_5617_p3.read());
}

void estimate_FR_2::thread_cnt_1_3_V_9_fu_5633_p3() {
    cnt_1_3_V_9_fu_5633_p3 = (!trunc_ln301_1_fu_5528_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_1_fu_5528_p1.read()[0].to_bool())? cnt_1_3_V_8_fu_5625_p3.read(): ap_phi_mux_cnt_1_2_V_0_phi_fu_1944_p4.read());
}

void estimate_FR_2::thread_cnt_20_0_V_fu_4449_p1() {
    cnt_20_0_V_fu_4449_p1 = counts_5_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_20_1_V_fu_4653_p1() {
    cnt_20_1_V_fu_4653_p1 = counts_11_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_20_2_V_fu_4857_p1() {
    cnt_20_2_V_fu_4857_p1 = counts_17_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_20_3_V_11_fu_12633_p3() {
    cnt_20_3_V_11_fu_12633_p3 = (!and_ln700_61_fu_12565_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_61_fu_12565_p2.read()[0].to_bool())? cnt_20_3_V_30_fu_12545_p2.read(): ap_phi_mux_cnt_20_3_V_10_phi_fu_1194_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_12_fu_12641_p3() {
    cnt_20_3_V_12_fu_12641_p3 = (!and_ln700_62_fu_12579_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_62_fu_12579_p2.read()[0].to_bool())? ap_phi_mux_cnt_20_3_V_10_phi_fu_1194_p4.read(): cnt_20_3_V_11_fu_12633_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_13_fu_12649_p3() {
    cnt_20_3_V_13_fu_12649_p3 = (!trunc_ln301_20_fu_12520_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_20_fu_12520_p1.read()[0].to_bool())? cnt_20_3_V_12_fu_12641_p3.read(): ap_phi_mux_cnt_20_3_V_10_phi_fu_1194_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_15_fu_12657_p3() {
    cnt_20_3_V_15_fu_12657_p3 = (!and_ln700_62_fu_12579_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_62_fu_12579_p2.read()[0].to_bool())? cnt_20_3_V_30_fu_12545_p2.read(): ap_phi_mux_cnt_20_3_V_14_phi_fu_1204_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_16_fu_12665_p3() {
    cnt_20_3_V_16_fu_12665_p3 = (!trunc_ln301_20_fu_12520_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_20_fu_12520_p1.read()[0].to_bool())? cnt_20_3_V_15_fu_12657_p3.read(): ap_phi_mux_cnt_20_3_V_14_phi_fu_1204_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_17_fu_12673_p3() {
    cnt_20_3_V_17_fu_12673_p3 = (!trunc_ln301_20_fu_12520_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_20_fu_12520_p1.read()[0].to_bool())? cnt_20_3_V_30_fu_12545_p2.read(): ap_phi_mux_cnt_V_load_23_c_phi_fu_2044_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_18_fu_12681_p3() {
    cnt_20_3_V_18_fu_12681_p3 = (!and_ln700_60_fu_12551_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_60_fu_12551_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_23_c_phi_fu_2044_p4.read(): cnt_20_3_V_17_fu_12673_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_19_fu_12689_p3() {
    cnt_20_3_V_19_fu_12689_p3 = (!and_ln700_61_fu_12565_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_61_fu_12565_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_23_c_phi_fu_2044_p4.read(): cnt_20_3_V_18_fu_12681_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_20_fu_12697_p3() {
    cnt_20_3_V_20_fu_12697_p3 = (!and_ln700_62_fu_12579_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_62_fu_12579_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_23_c_phi_fu_2044_p4.read(): cnt_20_3_V_19_fu_12689_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_22_fu_19292_p3() {
    cnt_20_3_V_22_fu_19292_p3 = (!and_ln700_60_reg_24417.read()[0].is_01())? sc_lv<6>(): ((and_ln700_60_reg_24417.read()[0].to_bool())? cnt_20_3_V_30_reg_24411.read(): cnt_20_3_V_21_reg_2281.read());
}

void estimate_FR_2::thread_cnt_20_3_V_23_fu_19298_p3() {
    cnt_20_3_V_23_fu_19298_p3 = (!and_ln700_61_reg_24422.read()[0].is_01())? sc_lv<6>(): ((and_ln700_61_reg_24422.read()[0].to_bool())? cnt_20_3_V_21_reg_2281.read(): cnt_20_3_V_22_fu_19292_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_24_fu_19305_p3() {
    cnt_20_3_V_24_fu_19305_p3 = (!and_ln700_62_reg_24428.read()[0].is_01())? sc_lv<6>(): ((and_ln700_62_reg_24428.read()[0].to_bool())? cnt_20_3_V_21_reg_2281.read(): cnt_20_3_V_23_fu_19298_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_26_fu_19312_p3() {
    cnt_20_3_V_26_fu_19312_p3 = (!and_ln700_61_reg_24422.read()[0].is_01())? sc_lv<6>(): ((and_ln700_61_reg_24422.read()[0].to_bool())? cnt_20_3_V_30_reg_24411.read(): cnt_20_3_V_25_reg_2521.read());
}

void estimate_FR_2::thread_cnt_20_3_V_27_fu_19318_p3() {
    cnt_20_3_V_27_fu_19318_p3 = (!and_ln700_62_reg_24428.read()[0].is_01())? sc_lv<6>(): ((and_ln700_62_reg_24428.read()[0].to_bool())? cnt_20_3_V_25_reg_2521.read(): cnt_20_3_V_26_fu_19312_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_29_fu_12705_p3() {
    cnt_20_3_V_29_fu_12705_p3 = (!and_ln700_62_fu_12579_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_62_fu_12579_p2.read()[0].to_bool())? cnt_20_3_V_30_fu_12545_p2.read(): ap_phi_mux_cnt_20_3_V_28_phi_fu_2764_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_2_fu_12557_p3() {
    cnt_20_3_V_2_fu_12557_p3 = (!and_ln700_60_fu_12551_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_60_fu_12551_p2.read()[0].to_bool())? ap_phi_mux_cnt_20_3_V_0_phi_fu_1174_p4.read(): cnt_20_3_V_30_fu_12545_p2.read());
}

void estimate_FR_2::thread_cnt_20_3_V_30_fu_12545_p2() {
    cnt_20_3_V_30_fu_12545_p2 = (!ap_const_lv6_1.is_01() || !tmp_77_fu_12532_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_77_fu_12532_p6.read()));
}

void estimate_FR_2::thread_cnt_20_3_V_3_fu_12571_p3() {
    cnt_20_3_V_3_fu_12571_p3 = (!and_ln700_61_fu_12565_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_61_fu_12565_p2.read()[0].to_bool())? ap_phi_mux_cnt_20_3_V_0_phi_fu_1174_p4.read(): cnt_20_3_V_2_fu_12557_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_4_fu_12585_p3() {
    cnt_20_3_V_4_fu_12585_p3 = (!and_ln700_62_fu_12579_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_62_fu_12579_p2.read()[0].to_bool())? ap_phi_mux_cnt_20_3_V_0_phi_fu_1174_p4.read(): cnt_20_3_V_3_fu_12571_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_5_fu_12593_p3() {
    cnt_20_3_V_5_fu_12593_p3 = (!trunc_ln301_20_fu_12520_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_20_fu_12520_p1.read()[0].to_bool())? cnt_20_3_V_4_fu_12585_p3.read(): ap_phi_mux_cnt_20_3_V_0_phi_fu_1174_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_6_fu_12601_p3() {
    cnt_20_3_V_6_fu_12601_p3 = (!and_ln700_60_fu_12551_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_60_fu_12551_p2.read()[0].to_bool())? cnt_20_3_V_30_fu_12545_p2.read(): ap_phi_mux_cnt_20_2_V_0_phi_fu_1184_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_7_fu_12609_p3() {
    cnt_20_3_V_7_fu_12609_p3 = (!and_ln700_61_fu_12565_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_61_fu_12565_p2.read()[0].to_bool())? ap_phi_mux_cnt_20_2_V_0_phi_fu_1184_p4.read(): cnt_20_3_V_6_fu_12601_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_8_fu_12617_p3() {
    cnt_20_3_V_8_fu_12617_p3 = (!and_ln700_62_fu_12579_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_62_fu_12579_p2.read()[0].to_bool())? ap_phi_mux_cnt_20_2_V_0_phi_fu_1184_p4.read(): cnt_20_3_V_7_fu_12609_p3.read());
}

void estimate_FR_2::thread_cnt_20_3_V_9_fu_12625_p3() {
    cnt_20_3_V_9_fu_12625_p3 = (!trunc_ln301_20_fu_12520_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_20_fu_12520_p1.read()[0].to_bool())? cnt_20_3_V_8_fu_12617_p3.read(): ap_phi_mux_cnt_20_2_V_0_phi_fu_1184_p4.read());
}

void estimate_FR_2::thread_cnt_20_3_V_fu_5061_p1() {
    cnt_20_3_V_fu_5061_p1 = counts_23_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_21_3_V_11_fu_13001_p3() {
    cnt_21_3_V_11_fu_13001_p3 = (!and_ln700_64_fu_12933_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_64_fu_12933_p2.read()[0].to_bool())? cnt_21_3_V_30_fu_12913_p2.read(): ap_phi_mux_cnt_21_3_V_10_phi_fu_1154_p4.read());
}

void estimate_FR_2::thread_cnt_21_3_V_12_fu_13009_p3() {
    cnt_21_3_V_12_fu_13009_p3 = (!and_ln700_65_fu_12947_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_65_fu_12947_p2.read()[0].to_bool())? ap_phi_mux_cnt_21_3_V_10_phi_fu_1154_p4.read(): cnt_21_3_V_11_fu_13001_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_13_fu_13017_p3() {
    cnt_21_3_V_13_fu_13017_p3 = (!trunc_ln301_21_fu_12888_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_21_fu_12888_p1.read()[0].to_bool())? cnt_21_3_V_12_fu_13009_p3.read(): ap_phi_mux_cnt_21_3_V_10_phi_fu_1154_p4.read());
}

void estimate_FR_2::thread_cnt_21_3_V_15_fu_13025_p3() {
    cnt_21_3_V_15_fu_13025_p3 = (!and_ln700_65_fu_12947_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_65_fu_12947_p2.read()[0].to_bool())? cnt_21_3_V_30_fu_12913_p2.read(): ap_phi_mux_cnt_21_3_V_14_phi_fu_1164_p4.read());
}

void estimate_FR_2::thread_cnt_21_3_V_16_fu_13033_p3() {
    cnt_21_3_V_16_fu_13033_p3 = (!trunc_ln301_21_fu_12888_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_21_fu_12888_p1.read()[0].to_bool())? cnt_21_3_V_15_fu_13025_p3.read(): ap_phi_mux_cnt_21_3_V_14_phi_fu_1164_p4.read());
}

void estimate_FR_2::thread_cnt_21_3_V_17_fu_13041_p3() {
    cnt_21_3_V_17_fu_13041_p3 = (!trunc_ln301_21_fu_12888_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_21_fu_12888_p1.read()[0].to_bool())? cnt_21_3_V_30_fu_12913_p2.read(): ap_phi_mux_cnt_V_load_1_23_c_phi_fu_2034_p4.read());
}

void estimate_FR_2::thread_cnt_21_3_V_18_fu_13049_p3() {
    cnt_21_3_V_18_fu_13049_p3 = (!and_ln700_63_fu_12919_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_63_fu_12919_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_23_c_phi_fu_2034_p4.read(): cnt_21_3_V_17_fu_13041_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_19_fu_13057_p3() {
    cnt_21_3_V_19_fu_13057_p3 = (!and_ln700_64_fu_12933_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_64_fu_12933_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_23_c_phi_fu_2034_p4.read(): cnt_21_3_V_18_fu_13049_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_20_fu_13065_p3() {
    cnt_21_3_V_20_fu_13065_p3 = (!and_ln700_65_fu_12947_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_65_fu_12947_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_23_c_phi_fu_2034_p4.read(): cnt_21_3_V_19_fu_13057_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_22_fu_19557_p3() {
    cnt_21_3_V_22_fu_19557_p3 = (!and_ln700_63_reg_24513.read()[0].is_01())? sc_lv<6>(): ((and_ln700_63_reg_24513.read()[0].to_bool())? cnt_21_3_V_30_reg_24507.read(): cnt_21_3_V_21_reg_2271.read());
}

void estimate_FR_2::thread_cnt_21_3_V_23_fu_19563_p3() {
    cnt_21_3_V_23_fu_19563_p3 = (!and_ln700_64_reg_24518.read()[0].is_01())? sc_lv<6>(): ((and_ln700_64_reg_24518.read()[0].to_bool())? cnt_21_3_V_21_reg_2271.read(): cnt_21_3_V_22_fu_19557_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_24_fu_19570_p3() {
    cnt_21_3_V_24_fu_19570_p3 = (!and_ln700_65_reg_24524.read()[0].is_01())? sc_lv<6>(): ((and_ln700_65_reg_24524.read()[0].to_bool())? cnt_21_3_V_21_reg_2271.read(): cnt_21_3_V_23_fu_19563_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_26_fu_19577_p3() {
    cnt_21_3_V_26_fu_19577_p3 = (!and_ln700_64_reg_24518.read()[0].is_01())? sc_lv<6>(): ((and_ln700_64_reg_24518.read()[0].to_bool())? cnt_21_3_V_30_reg_24507.read(): cnt_21_3_V_25_reg_2511.read());
}

void estimate_FR_2::thread_cnt_21_3_V_27_fu_19583_p3() {
    cnt_21_3_V_27_fu_19583_p3 = (!and_ln700_65_reg_24524.read()[0].is_01())? sc_lv<6>(): ((and_ln700_65_reg_24524.read()[0].to_bool())? cnt_21_3_V_25_reg_2511.read(): cnt_21_3_V_26_fu_19577_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_29_fu_13073_p3() {
    cnt_21_3_V_29_fu_13073_p3 = (!and_ln700_65_fu_12947_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_65_fu_12947_p2.read()[0].to_bool())? cnt_21_3_V_30_fu_12913_p2.read(): ap_phi_mux_cnt_21_3_V_28_phi_fu_2754_p4.read());
}

void estimate_FR_2::thread_cnt_21_3_V_2_fu_12925_p3() {
    cnt_21_3_V_2_fu_12925_p3 = (!and_ln700_63_fu_12919_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_63_fu_12919_p2.read()[0].to_bool())? ap_phi_mux_cnt_21_3_V_0_phi_fu_1134_p4.read(): cnt_21_3_V_30_fu_12913_p2.read());
}

void estimate_FR_2::thread_cnt_21_3_V_30_fu_12913_p2() {
    cnt_21_3_V_30_fu_12913_p2 = (!ap_const_lv6_1.is_01() || !tmp_79_fu_12900_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_79_fu_12900_p6.read()));
}

void estimate_FR_2::thread_cnt_21_3_V_3_fu_12939_p3() {
    cnt_21_3_V_3_fu_12939_p3 = (!and_ln700_64_fu_12933_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_64_fu_12933_p2.read()[0].to_bool())? ap_phi_mux_cnt_21_3_V_0_phi_fu_1134_p4.read(): cnt_21_3_V_2_fu_12925_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_4_fu_12953_p3() {
    cnt_21_3_V_4_fu_12953_p3 = (!and_ln700_65_fu_12947_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_65_fu_12947_p2.read()[0].to_bool())? ap_phi_mux_cnt_21_3_V_0_phi_fu_1134_p4.read(): cnt_21_3_V_3_fu_12939_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_5_fu_12961_p3() {
    cnt_21_3_V_5_fu_12961_p3 = (!trunc_ln301_21_fu_12888_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_21_fu_12888_p1.read()[0].to_bool())? cnt_21_3_V_4_fu_12953_p3.read(): ap_phi_mux_cnt_21_3_V_0_phi_fu_1134_p4.read());
}

void estimate_FR_2::thread_cnt_21_3_V_6_fu_12969_p3() {
    cnt_21_3_V_6_fu_12969_p3 = (!and_ln700_63_fu_12919_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_63_fu_12919_p2.read()[0].to_bool())? cnt_21_3_V_30_fu_12913_p2.read(): ap_phi_mux_cnt_21_2_V_0_phi_fu_1144_p4.read());
}

void estimate_FR_2::thread_cnt_21_3_V_7_fu_12977_p3() {
    cnt_21_3_V_7_fu_12977_p3 = (!and_ln700_64_fu_12933_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_64_fu_12933_p2.read()[0].to_bool())? ap_phi_mux_cnt_21_2_V_0_phi_fu_1144_p4.read(): cnt_21_3_V_6_fu_12969_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_8_fu_12985_p3() {
    cnt_21_3_V_8_fu_12985_p3 = (!and_ln700_65_fu_12947_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_65_fu_12947_p2.read()[0].to_bool())? ap_phi_mux_cnt_21_2_V_0_phi_fu_1144_p4.read(): cnt_21_3_V_7_fu_12977_p3.read());
}

void estimate_FR_2::thread_cnt_21_3_V_9_fu_12993_p3() {
    cnt_21_3_V_9_fu_12993_p3 = (!trunc_ln301_21_fu_12888_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_21_fu_12888_p1.read()[0].to_bool())? cnt_21_3_V_8_fu_12985_p3.read(): ap_phi_mux_cnt_21_2_V_0_phi_fu_1144_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_11_fu_13369_p3() {
    cnt_22_3_V_11_fu_13369_p3 = (!and_ln700_67_fu_13301_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_67_fu_13301_p2.read()[0].to_bool())? cnt_22_3_V_30_fu_13281_p2.read(): ap_phi_mux_cnt_22_3_V_10_phi_fu_1114_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_12_fu_13377_p3() {
    cnt_22_3_V_12_fu_13377_p3 = (!and_ln700_68_fu_13315_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_68_fu_13315_p2.read()[0].to_bool())? ap_phi_mux_cnt_22_3_V_10_phi_fu_1114_p4.read(): cnt_22_3_V_11_fu_13369_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_13_fu_13385_p3() {
    cnt_22_3_V_13_fu_13385_p3 = (!trunc_ln301_22_fu_13256_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_22_fu_13256_p1.read()[0].to_bool())? cnt_22_3_V_12_fu_13377_p3.read(): ap_phi_mux_cnt_22_3_V_10_phi_fu_1114_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_15_fu_13393_p3() {
    cnt_22_3_V_15_fu_13393_p3 = (!and_ln700_68_fu_13315_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_68_fu_13315_p2.read()[0].to_bool())? cnt_22_3_V_30_fu_13281_p2.read(): ap_phi_mux_cnt_22_3_V_14_phi_fu_1124_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_16_fu_13401_p3() {
    cnt_22_3_V_16_fu_13401_p3 = (!trunc_ln301_22_fu_13256_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_22_fu_13256_p1.read()[0].to_bool())? cnt_22_3_V_15_fu_13393_p3.read(): ap_phi_mux_cnt_22_3_V_14_phi_fu_1124_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_17_fu_13409_p3() {
    cnt_22_3_V_17_fu_13409_p3 = (!trunc_ln301_22_fu_13256_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_22_fu_13256_p1.read()[0].to_bool())? cnt_22_3_V_30_fu_13281_p2.read(): ap_phi_mux_cnt_V_load_2_23_c_phi_fu_2024_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_18_fu_13417_p3() {
    cnt_22_3_V_18_fu_13417_p3 = (!and_ln700_66_fu_13287_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_66_fu_13287_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_23_c_phi_fu_2024_p4.read(): cnt_22_3_V_17_fu_13409_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_19_fu_13425_p3() {
    cnt_22_3_V_19_fu_13425_p3 = (!and_ln700_67_fu_13301_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_67_fu_13301_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_23_c_phi_fu_2024_p4.read(): cnt_22_3_V_18_fu_13417_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_20_fu_13433_p3() {
    cnt_22_3_V_20_fu_13433_p3 = (!and_ln700_68_fu_13315_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_68_fu_13315_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_23_c_phi_fu_2024_p4.read(): cnt_22_3_V_19_fu_13425_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_22_fu_19822_p3() {
    cnt_22_3_V_22_fu_19822_p3 = (!and_ln700_66_reg_24609.read()[0].is_01())? sc_lv<6>(): ((and_ln700_66_reg_24609.read()[0].to_bool())? cnt_22_3_V_30_reg_24603.read(): cnt_22_3_V_21_reg_2261.read());
}

void estimate_FR_2::thread_cnt_22_3_V_23_fu_19828_p3() {
    cnt_22_3_V_23_fu_19828_p3 = (!and_ln700_67_reg_24614.read()[0].is_01())? sc_lv<6>(): ((and_ln700_67_reg_24614.read()[0].to_bool())? cnt_22_3_V_21_reg_2261.read(): cnt_22_3_V_22_fu_19822_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_24_fu_19835_p3() {
    cnt_22_3_V_24_fu_19835_p3 = (!and_ln700_68_reg_24620.read()[0].is_01())? sc_lv<6>(): ((and_ln700_68_reg_24620.read()[0].to_bool())? cnt_22_3_V_21_reg_2261.read(): cnt_22_3_V_23_fu_19828_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_26_fu_19842_p3() {
    cnt_22_3_V_26_fu_19842_p3 = (!and_ln700_67_reg_24614.read()[0].is_01())? sc_lv<6>(): ((and_ln700_67_reg_24614.read()[0].to_bool())? cnt_22_3_V_30_reg_24603.read(): cnt_22_3_V_25_reg_2501.read());
}

void estimate_FR_2::thread_cnt_22_3_V_27_fu_19848_p3() {
    cnt_22_3_V_27_fu_19848_p3 = (!and_ln700_68_reg_24620.read()[0].is_01())? sc_lv<6>(): ((and_ln700_68_reg_24620.read()[0].to_bool())? cnt_22_3_V_25_reg_2501.read(): cnt_22_3_V_26_fu_19842_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_29_fu_13441_p3() {
    cnt_22_3_V_29_fu_13441_p3 = (!and_ln700_68_fu_13315_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_68_fu_13315_p2.read()[0].to_bool())? cnt_22_3_V_30_fu_13281_p2.read(): ap_phi_mux_cnt_22_3_V_28_phi_fu_2744_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_2_fu_13293_p3() {
    cnt_22_3_V_2_fu_13293_p3 = (!and_ln700_66_fu_13287_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_66_fu_13287_p2.read()[0].to_bool())? ap_phi_mux_cnt_22_3_V_0_phi_fu_1094_p4.read(): cnt_22_3_V_30_fu_13281_p2.read());
}

void estimate_FR_2::thread_cnt_22_3_V_30_fu_13281_p2() {
    cnt_22_3_V_30_fu_13281_p2 = (!ap_const_lv6_1.is_01() || !tmp_81_fu_13268_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_81_fu_13268_p6.read()));
}

void estimate_FR_2::thread_cnt_22_3_V_3_fu_13307_p3() {
    cnt_22_3_V_3_fu_13307_p3 = (!and_ln700_67_fu_13301_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_67_fu_13301_p2.read()[0].to_bool())? ap_phi_mux_cnt_22_3_V_0_phi_fu_1094_p4.read(): cnt_22_3_V_2_fu_13293_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_4_fu_13321_p3() {
    cnt_22_3_V_4_fu_13321_p3 = (!and_ln700_68_fu_13315_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_68_fu_13315_p2.read()[0].to_bool())? ap_phi_mux_cnt_22_3_V_0_phi_fu_1094_p4.read(): cnt_22_3_V_3_fu_13307_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_5_fu_13329_p3() {
    cnt_22_3_V_5_fu_13329_p3 = (!trunc_ln301_22_fu_13256_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_22_fu_13256_p1.read()[0].to_bool())? cnt_22_3_V_4_fu_13321_p3.read(): ap_phi_mux_cnt_22_3_V_0_phi_fu_1094_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_6_fu_13337_p3() {
    cnt_22_3_V_6_fu_13337_p3 = (!and_ln700_66_fu_13287_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_66_fu_13287_p2.read()[0].to_bool())? cnt_22_3_V_30_fu_13281_p2.read(): ap_phi_mux_cnt_22_2_V_0_phi_fu_1104_p4.read());
}

void estimate_FR_2::thread_cnt_22_3_V_7_fu_13345_p3() {
    cnt_22_3_V_7_fu_13345_p3 = (!and_ln700_67_fu_13301_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_67_fu_13301_p2.read()[0].to_bool())? ap_phi_mux_cnt_22_2_V_0_phi_fu_1104_p4.read(): cnt_22_3_V_6_fu_13337_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_8_fu_13353_p3() {
    cnt_22_3_V_8_fu_13353_p3 = (!and_ln700_68_fu_13315_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_68_fu_13315_p2.read()[0].to_bool())? ap_phi_mux_cnt_22_2_V_0_phi_fu_1104_p4.read(): cnt_22_3_V_7_fu_13345_p3.read());
}

void estimate_FR_2::thread_cnt_22_3_V_9_fu_13361_p3() {
    cnt_22_3_V_9_fu_13361_p3 = (!trunc_ln301_22_fu_13256_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_22_fu_13256_p1.read()[0].to_bool())? cnt_22_3_V_8_fu_13353_p3.read(): ap_phi_mux_cnt_22_2_V_0_phi_fu_1104_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_11_fu_13737_p3() {
    cnt_23_3_V_11_fu_13737_p3 = (!and_ln700_70_fu_13669_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_70_fu_13669_p2.read()[0].to_bool())? cnt_23_3_V_30_fu_13649_p2.read(): ap_phi_mux_cnt_23_3_V_10_phi_fu_1074_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_12_fu_13745_p3() {
    cnt_23_3_V_12_fu_13745_p3 = (!and_ln700_71_fu_13683_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_71_fu_13683_p2.read()[0].to_bool())? ap_phi_mux_cnt_23_3_V_10_phi_fu_1074_p4.read(): cnt_23_3_V_11_fu_13737_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_13_fu_13753_p3() {
    cnt_23_3_V_13_fu_13753_p3 = (!trunc_ln301_23_fu_13624_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_23_fu_13624_p1.read()[0].to_bool())? cnt_23_3_V_12_fu_13745_p3.read(): ap_phi_mux_cnt_23_3_V_10_phi_fu_1074_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_15_fu_13761_p3() {
    cnt_23_3_V_15_fu_13761_p3 = (!and_ln700_71_fu_13683_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_71_fu_13683_p2.read()[0].to_bool())? cnt_23_3_V_30_fu_13649_p2.read(): ap_phi_mux_cnt_23_3_V_14_phi_fu_1084_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_16_fu_13769_p3() {
    cnt_23_3_V_16_fu_13769_p3 = (!trunc_ln301_23_fu_13624_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_23_fu_13624_p1.read()[0].to_bool())? cnt_23_3_V_15_fu_13761_p3.read(): ap_phi_mux_cnt_23_3_V_14_phi_fu_1084_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_17_fu_13777_p3() {
    cnt_23_3_V_17_fu_13777_p3 = (!trunc_ln301_23_fu_13624_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_23_fu_13624_p1.read()[0].to_bool())? cnt_23_3_V_30_fu_13649_p2.read(): ap_phi_mux_cnt_V_load_3_23_c_phi_fu_2014_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_18_fu_13785_p3() {
    cnt_23_3_V_18_fu_13785_p3 = (!and_ln700_69_fu_13655_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_69_fu_13655_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_23_c_phi_fu_2014_p4.read(): cnt_23_3_V_17_fu_13777_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_19_fu_13793_p3() {
    cnt_23_3_V_19_fu_13793_p3 = (!and_ln700_70_fu_13669_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_70_fu_13669_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_23_c_phi_fu_2014_p4.read(): cnt_23_3_V_18_fu_13785_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_20_fu_13801_p3() {
    cnt_23_3_V_20_fu_13801_p3 = (!and_ln700_71_fu_13683_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_71_fu_13683_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_23_c_phi_fu_2014_p4.read(): cnt_23_3_V_19_fu_13793_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_22_fu_20087_p3() {
    cnt_23_3_V_22_fu_20087_p3 = (!and_ln700_69_reg_24706.read()[0].is_01())? sc_lv<6>(): ((and_ln700_69_reg_24706.read()[0].to_bool())? cnt_23_3_V_30_reg_24700.read(): cnt_23_3_V_21_reg_2251.read());
}

void estimate_FR_2::thread_cnt_23_3_V_23_fu_20093_p3() {
    cnt_23_3_V_23_fu_20093_p3 = (!and_ln700_70_reg_24711.read()[0].is_01())? sc_lv<6>(): ((and_ln700_70_reg_24711.read()[0].to_bool())? cnt_23_3_V_21_reg_2251.read(): cnt_23_3_V_22_fu_20087_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_24_fu_20100_p3() {
    cnt_23_3_V_24_fu_20100_p3 = (!and_ln700_71_reg_24717.read()[0].is_01())? sc_lv<6>(): ((and_ln700_71_reg_24717.read()[0].to_bool())? cnt_23_3_V_21_reg_2251.read(): cnt_23_3_V_23_fu_20093_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_26_fu_20107_p3() {
    cnt_23_3_V_26_fu_20107_p3 = (!and_ln700_70_reg_24711.read()[0].is_01())? sc_lv<6>(): ((and_ln700_70_reg_24711.read()[0].to_bool())? cnt_23_3_V_30_reg_24700.read(): cnt_23_3_V_25_reg_2491.read());
}

void estimate_FR_2::thread_cnt_23_3_V_27_fu_20113_p3() {
    cnt_23_3_V_27_fu_20113_p3 = (!and_ln700_71_reg_24717.read()[0].is_01())? sc_lv<6>(): ((and_ln700_71_reg_24717.read()[0].to_bool())? cnt_23_3_V_25_reg_2491.read(): cnt_23_3_V_26_fu_20107_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_29_fu_13809_p3() {
    cnt_23_3_V_29_fu_13809_p3 = (!and_ln700_71_fu_13683_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_71_fu_13683_p2.read()[0].to_bool())? cnt_23_3_V_30_fu_13649_p2.read(): ap_phi_mux_cnt_23_3_V_28_phi_fu_2734_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_2_fu_13661_p3() {
    cnt_23_3_V_2_fu_13661_p3 = (!and_ln700_69_fu_13655_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_69_fu_13655_p2.read()[0].to_bool())? ap_phi_mux_cnt_23_3_V_0_phi_fu_1054_p4.read(): cnt_23_3_V_30_fu_13649_p2.read());
}

void estimate_FR_2::thread_cnt_23_3_V_30_fu_13649_p2() {
    cnt_23_3_V_30_fu_13649_p2 = (!ap_const_lv6_1.is_01() || !tmp_83_fu_13636_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_83_fu_13636_p6.read()));
}

void estimate_FR_2::thread_cnt_23_3_V_3_fu_13675_p3() {
    cnt_23_3_V_3_fu_13675_p3 = (!and_ln700_70_fu_13669_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_70_fu_13669_p2.read()[0].to_bool())? ap_phi_mux_cnt_23_3_V_0_phi_fu_1054_p4.read(): cnt_23_3_V_2_fu_13661_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_4_fu_13689_p3() {
    cnt_23_3_V_4_fu_13689_p3 = (!and_ln700_71_fu_13683_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_71_fu_13683_p2.read()[0].to_bool())? ap_phi_mux_cnt_23_3_V_0_phi_fu_1054_p4.read(): cnt_23_3_V_3_fu_13675_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_5_fu_13697_p3() {
    cnt_23_3_V_5_fu_13697_p3 = (!trunc_ln301_23_fu_13624_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_23_fu_13624_p1.read()[0].to_bool())? cnt_23_3_V_4_fu_13689_p3.read(): ap_phi_mux_cnt_23_3_V_0_phi_fu_1054_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_6_fu_13705_p3() {
    cnt_23_3_V_6_fu_13705_p3 = (!and_ln700_69_fu_13655_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_69_fu_13655_p2.read()[0].to_bool())? cnt_23_3_V_30_fu_13649_p2.read(): ap_phi_mux_cnt_23_2_V_0_phi_fu_1064_p4.read());
}

void estimate_FR_2::thread_cnt_23_3_V_7_fu_13713_p3() {
    cnt_23_3_V_7_fu_13713_p3 = (!and_ln700_70_fu_13669_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_70_fu_13669_p2.read()[0].to_bool())? ap_phi_mux_cnt_23_2_V_0_phi_fu_1064_p4.read(): cnt_23_3_V_6_fu_13705_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_8_fu_13721_p3() {
    cnt_23_3_V_8_fu_13721_p3 = (!and_ln700_71_fu_13683_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_71_fu_13683_p2.read()[0].to_bool())? ap_phi_mux_cnt_23_2_V_0_phi_fu_1064_p4.read(): cnt_23_3_V_7_fu_13713_p3.read());
}

void estimate_FR_2::thread_cnt_23_3_V_9_fu_13729_p3() {
    cnt_23_3_V_9_fu_13729_p3 = (!trunc_ln301_23_fu_13624_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_23_fu_13624_p1.read()[0].to_bool())? cnt_23_3_V_8_fu_13721_p3.read(): ap_phi_mux_cnt_23_2_V_0_phi_fu_1064_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_11_fu_6009_p3() {
    cnt_2_3_V_11_fu_6009_p3 = (!and_ln700_7_fu_5941_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_7_fu_5941_p2.read()[0].to_bool())? cnt_2_3_V_30_fu_5921_p2.read(): ap_phi_mux_cnt_2_3_V_10_phi_fu_1914_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_12_fu_6017_p3() {
    cnt_2_3_V_12_fu_6017_p3 = (!and_ln700_8_fu_5955_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_8_fu_5955_p2.read()[0].to_bool())? ap_phi_mux_cnt_2_3_V_10_phi_fu_1914_p4.read(): cnt_2_3_V_11_fu_6009_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_13_fu_6025_p3() {
    cnt_2_3_V_13_fu_6025_p3 = (!trunc_ln301_2_fu_5896_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_2_fu_5896_p1.read()[0].to_bool())? cnt_2_3_V_12_fu_6017_p3.read(): ap_phi_mux_cnt_2_3_V_10_phi_fu_1914_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_15_fu_6033_p3() {
    cnt_2_3_V_15_fu_6033_p3 = (!and_ln700_8_fu_5955_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_8_fu_5955_p2.read()[0].to_bool())? cnt_2_3_V_30_fu_5921_p2.read(): ap_phi_mux_cnt_2_3_V_14_phi_fu_1924_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_16_fu_6041_p3() {
    cnt_2_3_V_16_fu_6041_p3 = (!trunc_ln301_2_fu_5896_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_2_fu_5896_p1.read()[0].to_bool())? cnt_2_3_V_15_fu_6033_p3.read(): ap_phi_mux_cnt_2_3_V_14_phi_fu_1924_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_17_fu_6049_p3() {
    cnt_2_3_V_17_fu_6049_p3 = (!trunc_ln301_2_fu_5896_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_2_fu_5896_p1.read()[0].to_bool())? cnt_2_3_V_30_fu_5921_p2.read(): ap_phi_mux_cnt_V_load_2_18_phi_fu_2224_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_18_fu_6057_p3() {
    cnt_2_3_V_18_fu_6057_p3 = (!and_ln700_6_fu_5927_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_6_fu_5927_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_18_phi_fu_2224_p4.read(): cnt_2_3_V_17_fu_6049_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_19_fu_6065_p3() {
    cnt_2_3_V_19_fu_6065_p3 = (!and_ln700_7_fu_5941_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_7_fu_5941_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_18_phi_fu_2224_p4.read(): cnt_2_3_V_18_fu_6057_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_20_fu_6073_p3() {
    cnt_2_3_V_20_fu_6073_p3 = (!and_ln700_8_fu_5955_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_8_fu_5955_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_18_phi_fu_2224_p4.read(): cnt_2_3_V_19_fu_6065_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_22_fu_14522_p3() {
    cnt_2_3_V_22_fu_14522_p3 = (!and_ln700_6_reg_22689.read()[0].is_01())? sc_lv<6>(): ((and_ln700_6_reg_22689.read()[0].to_bool())? cnt_2_3_V_30_reg_22683.read(): cnt_2_3_V_21_reg_2461.read());
}

void estimate_FR_2::thread_cnt_2_3_V_23_fu_14528_p3() {
    cnt_2_3_V_23_fu_14528_p3 = (!and_ln700_7_reg_22694.read()[0].is_01())? sc_lv<6>(): ((and_ln700_7_reg_22694.read()[0].to_bool())? cnt_2_3_V_21_reg_2461.read(): cnt_2_3_V_22_fu_14522_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_24_fu_14535_p3() {
    cnt_2_3_V_24_fu_14535_p3 = (!and_ln700_8_reg_22700.read()[0].is_01())? sc_lv<6>(): ((and_ln700_8_reg_22700.read()[0].to_bool())? cnt_2_3_V_21_reg_2461.read(): cnt_2_3_V_23_fu_14528_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_26_fu_14542_p3() {
    cnt_2_3_V_26_fu_14542_p3 = (!and_ln700_7_reg_22694.read()[0].is_01())? sc_lv<6>(): ((and_ln700_7_reg_22694.read()[0].to_bool())? cnt_2_3_V_30_reg_22683.read(): cnt_2_3_V_25_reg_2701.read());
}

void estimate_FR_2::thread_cnt_2_3_V_27_fu_14548_p3() {
    cnt_2_3_V_27_fu_14548_p3 = (!and_ln700_8_reg_22700.read()[0].is_01())? sc_lv<6>(): ((and_ln700_8_reg_22700.read()[0].to_bool())? cnt_2_3_V_25_reg_2701.read(): cnt_2_3_V_26_fu_14542_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_29_fu_6081_p3() {
    cnt_2_3_V_29_fu_6081_p3 = (!and_ln700_8_fu_5955_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_8_fu_5955_p2.read()[0].to_bool())? cnt_2_3_V_30_fu_5921_p2.read(): ap_phi_mux_cnt_2_3_V_28_phi_fu_2944_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_2_fu_5933_p3() {
    cnt_2_3_V_2_fu_5933_p3 = (!and_ln700_6_fu_5927_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_6_fu_5927_p2.read()[0].to_bool())? ap_phi_mux_cnt_2_3_V_0_phi_fu_1894_p4.read(): cnt_2_3_V_30_fu_5921_p2.read());
}

void estimate_FR_2::thread_cnt_2_3_V_30_fu_5921_p2() {
    cnt_2_3_V_30_fu_5921_p2 = (!ap_const_lv6_1.is_01() || !tmp_38_fu_5908_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_38_fu_5908_p6.read()));
}

void estimate_FR_2::thread_cnt_2_3_V_3_fu_5947_p3() {
    cnt_2_3_V_3_fu_5947_p3 = (!and_ln700_7_fu_5941_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_7_fu_5941_p2.read()[0].to_bool())? ap_phi_mux_cnt_2_3_V_0_phi_fu_1894_p4.read(): cnt_2_3_V_2_fu_5933_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_4_fu_5961_p3() {
    cnt_2_3_V_4_fu_5961_p3 = (!and_ln700_8_fu_5955_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_8_fu_5955_p2.read()[0].to_bool())? ap_phi_mux_cnt_2_3_V_0_phi_fu_1894_p4.read(): cnt_2_3_V_3_fu_5947_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_5_fu_5969_p3() {
    cnt_2_3_V_5_fu_5969_p3 = (!trunc_ln301_2_fu_5896_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_2_fu_5896_p1.read()[0].to_bool())? cnt_2_3_V_4_fu_5961_p3.read(): ap_phi_mux_cnt_2_3_V_0_phi_fu_1894_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_6_fu_5977_p3() {
    cnt_2_3_V_6_fu_5977_p3 = (!and_ln700_6_fu_5927_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_6_fu_5927_p2.read()[0].to_bool())? cnt_2_3_V_30_fu_5921_p2.read(): ap_phi_mux_cnt_2_2_V_0_phi_fu_1904_p4.read());
}

void estimate_FR_2::thread_cnt_2_3_V_7_fu_5985_p3() {
    cnt_2_3_V_7_fu_5985_p3 = (!and_ln700_7_fu_5941_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_7_fu_5941_p2.read()[0].to_bool())? ap_phi_mux_cnt_2_2_V_0_phi_fu_1904_p4.read(): cnt_2_3_V_6_fu_5977_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_8_fu_5993_p3() {
    cnt_2_3_V_8_fu_5993_p3 = (!and_ln700_8_fu_5955_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_8_fu_5955_p2.read()[0].to_bool())? ap_phi_mux_cnt_2_2_V_0_phi_fu_1904_p4.read(): cnt_2_3_V_7_fu_5985_p3.read());
}

void estimate_FR_2::thread_cnt_2_3_V_9_fu_6001_p3() {
    cnt_2_3_V_9_fu_6001_p3 = (!trunc_ln301_2_fu_5896_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_2_fu_5896_p1.read()[0].to_bool())? cnt_2_3_V_8_fu_5993_p3.read(): ap_phi_mux_cnt_2_2_V_0_phi_fu_1904_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_11_fu_6377_p3() {
    cnt_3_3_V_11_fu_6377_p3 = (!and_ln700_10_fu_6309_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_10_fu_6309_p2.read()[0].to_bool())? cnt_3_3_V_30_fu_6289_p2.read(): ap_phi_mux_cnt_3_3_V_10_phi_fu_1874_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_12_fu_6385_p3() {
    cnt_3_3_V_12_fu_6385_p3 = (!and_ln700_11_fu_6323_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_11_fu_6323_p2.read()[0].to_bool())? ap_phi_mux_cnt_3_3_V_10_phi_fu_1874_p4.read(): cnt_3_3_V_11_fu_6377_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_13_fu_6393_p3() {
    cnt_3_3_V_13_fu_6393_p3 = (!trunc_ln301_3_fu_6264_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_3_fu_6264_p1.read()[0].to_bool())? cnt_3_3_V_12_fu_6385_p3.read(): ap_phi_mux_cnt_3_3_V_10_phi_fu_1874_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_15_fu_6401_p3() {
    cnt_3_3_V_15_fu_6401_p3 = (!and_ln700_11_fu_6323_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_11_fu_6323_p2.read()[0].to_bool())? cnt_3_3_V_30_fu_6289_p2.read(): ap_phi_mux_cnt_3_3_V_14_phi_fu_1884_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_16_fu_6409_p3() {
    cnt_3_3_V_16_fu_6409_p3 = (!trunc_ln301_3_fu_6264_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_3_fu_6264_p1.read()[0].to_bool())? cnt_3_3_V_15_fu_6401_p3.read(): ap_phi_mux_cnt_3_3_V_14_phi_fu_1884_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_17_fu_6417_p3() {
    cnt_3_3_V_17_fu_6417_p3 = (!trunc_ln301_3_fu_6264_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_3_fu_6264_p1.read()[0].to_bool())? cnt_3_3_V_30_fu_6289_p2.read(): ap_phi_mux_cnt_V_load_3_18_phi_fu_2214_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_18_fu_6425_p3() {
    cnt_3_3_V_18_fu_6425_p3 = (!and_ln700_9_fu_6295_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_9_fu_6295_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_18_phi_fu_2214_p4.read(): cnt_3_3_V_17_fu_6417_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_19_fu_6433_p3() {
    cnt_3_3_V_19_fu_6433_p3 = (!and_ln700_10_fu_6309_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_10_fu_6309_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_18_phi_fu_2214_p4.read(): cnt_3_3_V_18_fu_6425_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_20_fu_6441_p3() {
    cnt_3_3_V_20_fu_6441_p3 = (!and_ln700_11_fu_6323_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_11_fu_6323_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_18_phi_fu_2214_p4.read(): cnt_3_3_V_19_fu_6433_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_22_fu_14787_p3() {
    cnt_3_3_V_22_fu_14787_p3 = (!and_ln700_9_reg_22785.read()[0].is_01())? sc_lv<6>(): ((and_ln700_9_reg_22785.read()[0].to_bool())? cnt_3_3_V_30_reg_22779.read(): cnt_3_3_V_21_reg_2451.read());
}

void estimate_FR_2::thread_cnt_3_3_V_23_fu_14793_p3() {
    cnt_3_3_V_23_fu_14793_p3 = (!and_ln700_10_reg_22790.read()[0].is_01())? sc_lv<6>(): ((and_ln700_10_reg_22790.read()[0].to_bool())? cnt_3_3_V_21_reg_2451.read(): cnt_3_3_V_22_fu_14787_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_24_fu_14800_p3() {
    cnt_3_3_V_24_fu_14800_p3 = (!and_ln700_11_reg_22796.read()[0].is_01())? sc_lv<6>(): ((and_ln700_11_reg_22796.read()[0].to_bool())? cnt_3_3_V_21_reg_2451.read(): cnt_3_3_V_23_fu_14793_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_26_fu_14807_p3() {
    cnt_3_3_V_26_fu_14807_p3 = (!and_ln700_10_reg_22790.read()[0].is_01())? sc_lv<6>(): ((and_ln700_10_reg_22790.read()[0].to_bool())? cnt_3_3_V_30_reg_22779.read(): cnt_3_3_V_25_reg_2691.read());
}

void estimate_FR_2::thread_cnt_3_3_V_27_fu_14813_p3() {
    cnt_3_3_V_27_fu_14813_p3 = (!and_ln700_11_reg_22796.read()[0].is_01())? sc_lv<6>(): ((and_ln700_11_reg_22796.read()[0].to_bool())? cnt_3_3_V_25_reg_2691.read(): cnt_3_3_V_26_fu_14807_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_29_fu_6449_p3() {
    cnt_3_3_V_29_fu_6449_p3 = (!and_ln700_11_fu_6323_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_11_fu_6323_p2.read()[0].to_bool())? cnt_3_3_V_30_fu_6289_p2.read(): ap_phi_mux_cnt_3_3_V_28_phi_fu_2934_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_2_fu_6301_p3() {
    cnt_3_3_V_2_fu_6301_p3 = (!and_ln700_9_fu_6295_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_9_fu_6295_p2.read()[0].to_bool())? ap_phi_mux_cnt_3_3_V_0_phi_fu_1854_p4.read(): cnt_3_3_V_30_fu_6289_p2.read());
}

void estimate_FR_2::thread_cnt_3_3_V_30_fu_6289_p2() {
    cnt_3_3_V_30_fu_6289_p2 = (!ap_const_lv6_1.is_01() || !tmp_43_fu_6276_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_43_fu_6276_p6.read()));
}

void estimate_FR_2::thread_cnt_3_3_V_3_fu_6315_p3() {
    cnt_3_3_V_3_fu_6315_p3 = (!and_ln700_10_fu_6309_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_10_fu_6309_p2.read()[0].to_bool())? ap_phi_mux_cnt_3_3_V_0_phi_fu_1854_p4.read(): cnt_3_3_V_2_fu_6301_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_4_fu_6329_p3() {
    cnt_3_3_V_4_fu_6329_p3 = (!and_ln700_11_fu_6323_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_11_fu_6323_p2.read()[0].to_bool())? ap_phi_mux_cnt_3_3_V_0_phi_fu_1854_p4.read(): cnt_3_3_V_3_fu_6315_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_5_fu_6337_p3() {
    cnt_3_3_V_5_fu_6337_p3 = (!trunc_ln301_3_fu_6264_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_3_fu_6264_p1.read()[0].to_bool())? cnt_3_3_V_4_fu_6329_p3.read(): ap_phi_mux_cnt_3_3_V_0_phi_fu_1854_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_6_fu_6345_p3() {
    cnt_3_3_V_6_fu_6345_p3 = (!and_ln700_9_fu_6295_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_9_fu_6295_p2.read()[0].to_bool())? cnt_3_3_V_30_fu_6289_p2.read(): ap_phi_mux_cnt_3_2_V_0_phi_fu_1864_p4.read());
}

void estimate_FR_2::thread_cnt_3_3_V_7_fu_6353_p3() {
    cnt_3_3_V_7_fu_6353_p3 = (!and_ln700_10_fu_6309_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_10_fu_6309_p2.read()[0].to_bool())? ap_phi_mux_cnt_3_2_V_0_phi_fu_1864_p4.read(): cnt_3_3_V_6_fu_6345_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_8_fu_6361_p3() {
    cnt_3_3_V_8_fu_6361_p3 = (!and_ln700_11_fu_6323_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_11_fu_6323_p2.read()[0].to_bool())? ap_phi_mux_cnt_3_2_V_0_phi_fu_1864_p4.read(): cnt_3_3_V_7_fu_6353_p3.read());
}

void estimate_FR_2::thread_cnt_3_3_V_9_fu_6369_p3() {
    cnt_3_3_V_9_fu_6369_p3 = (!trunc_ln301_3_fu_6264_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_3_fu_6264_p1.read()[0].to_bool())? cnt_3_3_V_8_fu_6361_p3.read(): ap_phi_mux_cnt_3_2_V_0_phi_fu_1864_p4.read());
}

void estimate_FR_2::thread_cnt_4_0_V_fu_4313_p1() {
    cnt_4_0_V_fu_4313_p1 = counts_1_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_4_1_V_fu_4517_p1() {
    cnt_4_1_V_fu_4517_p1 = counts_7_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_4_2_V_fu_4721_p1() {
    cnt_4_2_V_fu_4721_p1 = counts_13_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_4_3_V_11_fu_6745_p3() {
    cnt_4_3_V_11_fu_6745_p3 = (!and_ln700_13_fu_6677_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_13_fu_6677_p2.read()[0].to_bool())? cnt_4_3_V_30_fu_6657_p2.read(): ap_phi_mux_cnt_4_3_V_10_phi_fu_1834_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_12_fu_6753_p3() {
    cnt_4_3_V_12_fu_6753_p3 = (!and_ln700_14_fu_6691_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_14_fu_6691_p2.read()[0].to_bool())? ap_phi_mux_cnt_4_3_V_10_phi_fu_1834_p4.read(): cnt_4_3_V_11_fu_6745_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_13_fu_6761_p3() {
    cnt_4_3_V_13_fu_6761_p3 = (!trunc_ln301_4_fu_6632_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_4_fu_6632_p1.read()[0].to_bool())? cnt_4_3_V_12_fu_6753_p3.read(): ap_phi_mux_cnt_4_3_V_10_phi_fu_1834_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_15_fu_6769_p3() {
    cnt_4_3_V_15_fu_6769_p3 = (!and_ln700_14_fu_6691_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_14_fu_6691_p2.read()[0].to_bool())? cnt_4_3_V_30_fu_6657_p2.read(): ap_phi_mux_cnt_4_3_V_14_phi_fu_1844_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_16_fu_6777_p3() {
    cnt_4_3_V_16_fu_6777_p3 = (!trunc_ln301_4_fu_6632_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_4_fu_6632_p1.read()[0].to_bool())? cnt_4_3_V_15_fu_6769_p3.read(): ap_phi_mux_cnt_4_3_V_14_phi_fu_1844_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_17_fu_6785_p3() {
    cnt_4_3_V_17_fu_6785_p3 = (!trunc_ln301_4_fu_6632_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_4_fu_6632_p1.read()[0].to_bool())? cnt_4_3_V_30_fu_6657_p2.read(): ap_phi_mux_cnt_V_load_19_c_phi_fu_2204_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_18_fu_6793_p3() {
    cnt_4_3_V_18_fu_6793_p3 = (!and_ln700_12_fu_6663_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_12_fu_6663_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_19_c_phi_fu_2204_p4.read(): cnt_4_3_V_17_fu_6785_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_19_fu_6801_p3() {
    cnt_4_3_V_19_fu_6801_p3 = (!and_ln700_13_fu_6677_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_13_fu_6677_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_19_c_phi_fu_2204_p4.read(): cnt_4_3_V_18_fu_6793_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_20_fu_6809_p3() {
    cnt_4_3_V_20_fu_6809_p3 = (!and_ln700_14_fu_6691_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_14_fu_6691_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_19_c_phi_fu_2204_p4.read(): cnt_4_3_V_19_fu_6801_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_22_fu_15052_p3() {
    cnt_4_3_V_22_fu_15052_p3 = (!and_ln700_12_reg_22881.read()[0].is_01())? sc_lv<6>(): ((and_ln700_12_reg_22881.read()[0].to_bool())? cnt_4_3_V_30_reg_22875.read(): cnt_4_3_V_21_reg_2441.read());
}

void estimate_FR_2::thread_cnt_4_3_V_23_fu_15058_p3() {
    cnt_4_3_V_23_fu_15058_p3 = (!and_ln700_13_reg_22886.read()[0].is_01())? sc_lv<6>(): ((and_ln700_13_reg_22886.read()[0].to_bool())? cnt_4_3_V_21_reg_2441.read(): cnt_4_3_V_22_fu_15052_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_24_fu_15065_p3() {
    cnt_4_3_V_24_fu_15065_p3 = (!and_ln700_14_reg_22892.read()[0].is_01())? sc_lv<6>(): ((and_ln700_14_reg_22892.read()[0].to_bool())? cnt_4_3_V_21_reg_2441.read(): cnt_4_3_V_23_fu_15058_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_26_fu_15072_p3() {
    cnt_4_3_V_26_fu_15072_p3 = (!and_ln700_13_reg_22886.read()[0].is_01())? sc_lv<6>(): ((and_ln700_13_reg_22886.read()[0].to_bool())? cnt_4_3_V_30_reg_22875.read(): cnt_4_3_V_25_reg_2681.read());
}

void estimate_FR_2::thread_cnt_4_3_V_27_fu_15078_p3() {
    cnt_4_3_V_27_fu_15078_p3 = (!and_ln700_14_reg_22892.read()[0].is_01())? sc_lv<6>(): ((and_ln700_14_reg_22892.read()[0].to_bool())? cnt_4_3_V_25_reg_2681.read(): cnt_4_3_V_26_fu_15072_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_29_fu_6817_p3() {
    cnt_4_3_V_29_fu_6817_p3 = (!and_ln700_14_fu_6691_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_14_fu_6691_p2.read()[0].to_bool())? cnt_4_3_V_30_fu_6657_p2.read(): ap_phi_mux_cnt_4_3_V_28_phi_fu_2924_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_2_fu_6669_p3() {
    cnt_4_3_V_2_fu_6669_p3 = (!and_ln700_12_fu_6663_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_12_fu_6663_p2.read()[0].to_bool())? ap_phi_mux_cnt_4_3_V_0_phi_fu_1814_p4.read(): cnt_4_3_V_30_fu_6657_p2.read());
}

void estimate_FR_2::thread_cnt_4_3_V_30_fu_6657_p2() {
    cnt_4_3_V_30_fu_6657_p2 = (!ap_const_lv6_1.is_01() || !tmp_45_fu_6644_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_45_fu_6644_p6.read()));
}

void estimate_FR_2::thread_cnt_4_3_V_3_fu_6683_p3() {
    cnt_4_3_V_3_fu_6683_p3 = (!and_ln700_13_fu_6677_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_13_fu_6677_p2.read()[0].to_bool())? ap_phi_mux_cnt_4_3_V_0_phi_fu_1814_p4.read(): cnt_4_3_V_2_fu_6669_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_4_fu_6697_p3() {
    cnt_4_3_V_4_fu_6697_p3 = (!and_ln700_14_fu_6691_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_14_fu_6691_p2.read()[0].to_bool())? ap_phi_mux_cnt_4_3_V_0_phi_fu_1814_p4.read(): cnt_4_3_V_3_fu_6683_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_5_fu_6705_p3() {
    cnt_4_3_V_5_fu_6705_p3 = (!trunc_ln301_4_fu_6632_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_4_fu_6632_p1.read()[0].to_bool())? cnt_4_3_V_4_fu_6697_p3.read(): ap_phi_mux_cnt_4_3_V_0_phi_fu_1814_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_6_fu_6713_p3() {
    cnt_4_3_V_6_fu_6713_p3 = (!and_ln700_12_fu_6663_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_12_fu_6663_p2.read()[0].to_bool())? cnt_4_3_V_30_fu_6657_p2.read(): ap_phi_mux_cnt_4_2_V_0_phi_fu_1824_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_7_fu_6721_p3() {
    cnt_4_3_V_7_fu_6721_p3 = (!and_ln700_13_fu_6677_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_13_fu_6677_p2.read()[0].to_bool())? ap_phi_mux_cnt_4_2_V_0_phi_fu_1824_p4.read(): cnt_4_3_V_6_fu_6713_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_8_fu_6729_p3() {
    cnt_4_3_V_8_fu_6729_p3 = (!and_ln700_14_fu_6691_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_14_fu_6691_p2.read()[0].to_bool())? ap_phi_mux_cnt_4_2_V_0_phi_fu_1824_p4.read(): cnt_4_3_V_7_fu_6721_p3.read());
}

void estimate_FR_2::thread_cnt_4_3_V_9_fu_6737_p3() {
    cnt_4_3_V_9_fu_6737_p3 = (!trunc_ln301_4_fu_6632_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_4_fu_6632_p1.read()[0].to_bool())? cnt_4_3_V_8_fu_6729_p3.read(): ap_phi_mux_cnt_4_2_V_0_phi_fu_1824_p4.read());
}

void estimate_FR_2::thread_cnt_4_3_V_fu_4925_p1() {
    cnt_4_3_V_fu_4925_p1 = counts_19_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_5_3_V_11_fu_7113_p3() {
    cnt_5_3_V_11_fu_7113_p3 = (!and_ln700_16_fu_7045_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_16_fu_7045_p2.read()[0].to_bool())? cnt_5_3_V_30_fu_7025_p2.read(): ap_phi_mux_cnt_5_3_V_10_phi_fu_1794_p4.read());
}

void estimate_FR_2::thread_cnt_5_3_V_12_fu_7121_p3() {
    cnt_5_3_V_12_fu_7121_p3 = (!and_ln700_17_fu_7059_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_17_fu_7059_p2.read()[0].to_bool())? ap_phi_mux_cnt_5_3_V_10_phi_fu_1794_p4.read(): cnt_5_3_V_11_fu_7113_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_13_fu_7129_p3() {
    cnt_5_3_V_13_fu_7129_p3 = (!trunc_ln301_5_fu_7000_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_5_fu_7000_p1.read()[0].to_bool())? cnt_5_3_V_12_fu_7121_p3.read(): ap_phi_mux_cnt_5_3_V_10_phi_fu_1794_p4.read());
}

void estimate_FR_2::thread_cnt_5_3_V_15_fu_7137_p3() {
    cnt_5_3_V_15_fu_7137_p3 = (!and_ln700_17_fu_7059_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_17_fu_7059_p2.read()[0].to_bool())? cnt_5_3_V_30_fu_7025_p2.read(): ap_phi_mux_cnt_5_3_V_14_phi_fu_1804_p4.read());
}

void estimate_FR_2::thread_cnt_5_3_V_16_fu_7145_p3() {
    cnt_5_3_V_16_fu_7145_p3 = (!trunc_ln301_5_fu_7000_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_5_fu_7000_p1.read()[0].to_bool())? cnt_5_3_V_15_fu_7137_p3.read(): ap_phi_mux_cnt_5_3_V_14_phi_fu_1804_p4.read());
}

void estimate_FR_2::thread_cnt_5_3_V_17_fu_7153_p3() {
    cnt_5_3_V_17_fu_7153_p3 = (!trunc_ln301_5_fu_7000_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_5_fu_7000_p1.read()[0].to_bool())? cnt_5_3_V_30_fu_7025_p2.read(): ap_phi_mux_cnt_V_load_1_19_c_phi_fu_2194_p4.read());
}

void estimate_FR_2::thread_cnt_5_3_V_18_fu_7161_p3() {
    cnt_5_3_V_18_fu_7161_p3 = (!and_ln700_15_fu_7031_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_15_fu_7031_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_19_c_phi_fu_2194_p4.read(): cnt_5_3_V_17_fu_7153_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_19_fu_7169_p3() {
    cnt_5_3_V_19_fu_7169_p3 = (!and_ln700_16_fu_7045_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_16_fu_7045_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_19_c_phi_fu_2194_p4.read(): cnt_5_3_V_18_fu_7161_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_20_fu_7177_p3() {
    cnt_5_3_V_20_fu_7177_p3 = (!and_ln700_17_fu_7059_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_17_fu_7059_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_19_c_phi_fu_2194_p4.read(): cnt_5_3_V_19_fu_7169_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_22_fu_15317_p3() {
    cnt_5_3_V_22_fu_15317_p3 = (!and_ln700_15_reg_22977.read()[0].is_01())? sc_lv<6>(): ((and_ln700_15_reg_22977.read()[0].to_bool())? cnt_5_3_V_30_reg_22971.read(): cnt_5_3_V_21_reg_2431.read());
}

void estimate_FR_2::thread_cnt_5_3_V_23_fu_15323_p3() {
    cnt_5_3_V_23_fu_15323_p3 = (!and_ln700_16_reg_22982.read()[0].is_01())? sc_lv<6>(): ((and_ln700_16_reg_22982.read()[0].to_bool())? cnt_5_3_V_21_reg_2431.read(): cnt_5_3_V_22_fu_15317_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_24_fu_15330_p3() {
    cnt_5_3_V_24_fu_15330_p3 = (!and_ln700_17_reg_22988.read()[0].is_01())? sc_lv<6>(): ((and_ln700_17_reg_22988.read()[0].to_bool())? cnt_5_3_V_21_reg_2431.read(): cnt_5_3_V_23_fu_15323_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_26_fu_15337_p3() {
    cnt_5_3_V_26_fu_15337_p3 = (!and_ln700_16_reg_22982.read()[0].is_01())? sc_lv<6>(): ((and_ln700_16_reg_22982.read()[0].to_bool())? cnt_5_3_V_30_reg_22971.read(): cnt_5_3_V_25_reg_2671.read());
}

void estimate_FR_2::thread_cnt_5_3_V_27_fu_15343_p3() {
    cnt_5_3_V_27_fu_15343_p3 = (!and_ln700_17_reg_22988.read()[0].is_01())? sc_lv<6>(): ((and_ln700_17_reg_22988.read()[0].to_bool())? cnt_5_3_V_25_reg_2671.read(): cnt_5_3_V_26_fu_15337_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_29_fu_7185_p3() {
    cnt_5_3_V_29_fu_7185_p3 = (!and_ln700_17_fu_7059_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_17_fu_7059_p2.read()[0].to_bool())? cnt_5_3_V_30_fu_7025_p2.read(): ap_phi_mux_cnt_5_3_V_28_phi_fu_2914_p4.read());
}

void estimate_FR_2::thread_cnt_5_3_V_2_fu_7037_p3() {
    cnt_5_3_V_2_fu_7037_p3 = (!and_ln700_15_fu_7031_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_15_fu_7031_p2.read()[0].to_bool())? ap_phi_mux_cnt_5_3_V_0_phi_fu_1774_p4.read(): cnt_5_3_V_30_fu_7025_p2.read());
}

void estimate_FR_2::thread_cnt_5_3_V_30_fu_7025_p2() {
    cnt_5_3_V_30_fu_7025_p2 = (!ap_const_lv6_1.is_01() || !tmp_47_fu_7012_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_47_fu_7012_p6.read()));
}

void estimate_FR_2::thread_cnt_5_3_V_3_fu_7051_p3() {
    cnt_5_3_V_3_fu_7051_p3 = (!and_ln700_16_fu_7045_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_16_fu_7045_p2.read()[0].to_bool())? ap_phi_mux_cnt_5_3_V_0_phi_fu_1774_p4.read(): cnt_5_3_V_2_fu_7037_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_4_fu_7065_p3() {
    cnt_5_3_V_4_fu_7065_p3 = (!and_ln700_17_fu_7059_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_17_fu_7059_p2.read()[0].to_bool())? ap_phi_mux_cnt_5_3_V_0_phi_fu_1774_p4.read(): cnt_5_3_V_3_fu_7051_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_5_fu_7073_p3() {
    cnt_5_3_V_5_fu_7073_p3 = (!trunc_ln301_5_fu_7000_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_5_fu_7000_p1.read()[0].to_bool())? cnt_5_3_V_4_fu_7065_p3.read(): ap_phi_mux_cnt_5_3_V_0_phi_fu_1774_p4.read());
}

void estimate_FR_2::thread_cnt_5_3_V_6_fu_7081_p3() {
    cnt_5_3_V_6_fu_7081_p3 = (!and_ln700_15_fu_7031_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_15_fu_7031_p2.read()[0].to_bool())? cnt_5_3_V_30_fu_7025_p2.read(): ap_phi_mux_cnt_5_2_V_0_phi_fu_1784_p4.read());
}

void estimate_FR_2::thread_cnt_5_3_V_7_fu_7089_p3() {
    cnt_5_3_V_7_fu_7089_p3 = (!and_ln700_16_fu_7045_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_16_fu_7045_p2.read()[0].to_bool())? ap_phi_mux_cnt_5_2_V_0_phi_fu_1784_p4.read(): cnt_5_3_V_6_fu_7081_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_8_fu_7097_p3() {
    cnt_5_3_V_8_fu_7097_p3 = (!and_ln700_17_fu_7059_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_17_fu_7059_p2.read()[0].to_bool())? ap_phi_mux_cnt_5_2_V_0_phi_fu_1784_p4.read(): cnt_5_3_V_7_fu_7089_p3.read());
}

void estimate_FR_2::thread_cnt_5_3_V_9_fu_7105_p3() {
    cnt_5_3_V_9_fu_7105_p3 = (!trunc_ln301_5_fu_7000_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_5_fu_7000_p1.read()[0].to_bool())? cnt_5_3_V_8_fu_7097_p3.read(): ap_phi_mux_cnt_5_2_V_0_phi_fu_1784_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_11_fu_7481_p3() {
    cnt_6_3_V_11_fu_7481_p3 = (!and_ln700_19_fu_7413_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_19_fu_7413_p2.read()[0].to_bool())? cnt_6_3_V_30_fu_7393_p2.read(): ap_phi_mux_cnt_6_3_V_10_phi_fu_1754_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_12_fu_7489_p3() {
    cnt_6_3_V_12_fu_7489_p3 = (!and_ln700_20_fu_7427_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_20_fu_7427_p2.read()[0].to_bool())? ap_phi_mux_cnt_6_3_V_10_phi_fu_1754_p4.read(): cnt_6_3_V_11_fu_7481_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_13_fu_7497_p3() {
    cnt_6_3_V_13_fu_7497_p3 = (!trunc_ln301_6_fu_7368_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_6_fu_7368_p1.read()[0].to_bool())? cnt_6_3_V_12_fu_7489_p3.read(): ap_phi_mux_cnt_6_3_V_10_phi_fu_1754_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_15_fu_7505_p3() {
    cnt_6_3_V_15_fu_7505_p3 = (!and_ln700_20_fu_7427_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_20_fu_7427_p2.read()[0].to_bool())? cnt_6_3_V_30_fu_7393_p2.read(): ap_phi_mux_cnt_6_3_V_14_phi_fu_1764_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_16_fu_7513_p3() {
    cnt_6_3_V_16_fu_7513_p3 = (!trunc_ln301_6_fu_7368_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_6_fu_7368_p1.read()[0].to_bool())? cnt_6_3_V_15_fu_7505_p3.read(): ap_phi_mux_cnt_6_3_V_14_phi_fu_1764_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_17_fu_7521_p3() {
    cnt_6_3_V_17_fu_7521_p3 = (!trunc_ln301_6_fu_7368_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_6_fu_7368_p1.read()[0].to_bool())? cnt_6_3_V_30_fu_7393_p2.read(): ap_phi_mux_cnt_V_load_2_19_c_phi_fu_2184_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_18_fu_7529_p3() {
    cnt_6_3_V_18_fu_7529_p3 = (!and_ln700_18_fu_7399_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_18_fu_7399_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_19_c_phi_fu_2184_p4.read(): cnt_6_3_V_17_fu_7521_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_19_fu_7537_p3() {
    cnt_6_3_V_19_fu_7537_p3 = (!and_ln700_19_fu_7413_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_19_fu_7413_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_19_c_phi_fu_2184_p4.read(): cnt_6_3_V_18_fu_7529_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_20_fu_7545_p3() {
    cnt_6_3_V_20_fu_7545_p3 = (!and_ln700_20_fu_7427_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_20_fu_7427_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_19_c_phi_fu_2184_p4.read(): cnt_6_3_V_19_fu_7537_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_22_fu_15582_p3() {
    cnt_6_3_V_22_fu_15582_p3 = (!and_ln700_18_reg_23073.read()[0].is_01())? sc_lv<6>(): ((and_ln700_18_reg_23073.read()[0].to_bool())? cnt_6_3_V_30_reg_23067.read(): cnt_6_3_V_21_reg_2421.read());
}

void estimate_FR_2::thread_cnt_6_3_V_23_fu_15588_p3() {
    cnt_6_3_V_23_fu_15588_p3 = (!and_ln700_19_reg_23078.read()[0].is_01())? sc_lv<6>(): ((and_ln700_19_reg_23078.read()[0].to_bool())? cnt_6_3_V_21_reg_2421.read(): cnt_6_3_V_22_fu_15582_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_24_fu_15595_p3() {
    cnt_6_3_V_24_fu_15595_p3 = (!and_ln700_20_reg_23084.read()[0].is_01())? sc_lv<6>(): ((and_ln700_20_reg_23084.read()[0].to_bool())? cnt_6_3_V_21_reg_2421.read(): cnt_6_3_V_23_fu_15588_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_26_fu_15602_p3() {
    cnt_6_3_V_26_fu_15602_p3 = (!and_ln700_19_reg_23078.read()[0].is_01())? sc_lv<6>(): ((and_ln700_19_reg_23078.read()[0].to_bool())? cnt_6_3_V_30_reg_23067.read(): cnt_6_3_V_25_reg_2661.read());
}

void estimate_FR_2::thread_cnt_6_3_V_27_fu_15608_p3() {
    cnt_6_3_V_27_fu_15608_p3 = (!and_ln700_20_reg_23084.read()[0].is_01())? sc_lv<6>(): ((and_ln700_20_reg_23084.read()[0].to_bool())? cnt_6_3_V_25_reg_2661.read(): cnt_6_3_V_26_fu_15602_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_29_fu_7553_p3() {
    cnt_6_3_V_29_fu_7553_p3 = (!and_ln700_20_fu_7427_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_20_fu_7427_p2.read()[0].to_bool())? cnt_6_3_V_30_fu_7393_p2.read(): ap_phi_mux_cnt_6_3_V_28_phi_fu_2904_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_2_fu_7405_p3() {
    cnt_6_3_V_2_fu_7405_p3 = (!and_ln700_18_fu_7399_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_18_fu_7399_p2.read()[0].to_bool())? ap_phi_mux_cnt_6_3_V_0_phi_fu_1734_p4.read(): cnt_6_3_V_30_fu_7393_p2.read());
}

void estimate_FR_2::thread_cnt_6_3_V_30_fu_7393_p2() {
    cnt_6_3_V_30_fu_7393_p2 = (!ap_const_lv6_1.is_01() || !tmp_49_fu_7380_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_49_fu_7380_p6.read()));
}

void estimate_FR_2::thread_cnt_6_3_V_3_fu_7419_p3() {
    cnt_6_3_V_3_fu_7419_p3 = (!and_ln700_19_fu_7413_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_19_fu_7413_p2.read()[0].to_bool())? ap_phi_mux_cnt_6_3_V_0_phi_fu_1734_p4.read(): cnt_6_3_V_2_fu_7405_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_4_fu_7433_p3() {
    cnt_6_3_V_4_fu_7433_p3 = (!and_ln700_20_fu_7427_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_20_fu_7427_p2.read()[0].to_bool())? ap_phi_mux_cnt_6_3_V_0_phi_fu_1734_p4.read(): cnt_6_3_V_3_fu_7419_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_5_fu_7441_p3() {
    cnt_6_3_V_5_fu_7441_p3 = (!trunc_ln301_6_fu_7368_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_6_fu_7368_p1.read()[0].to_bool())? cnt_6_3_V_4_fu_7433_p3.read(): ap_phi_mux_cnt_6_3_V_0_phi_fu_1734_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_6_fu_7449_p3() {
    cnt_6_3_V_6_fu_7449_p3 = (!and_ln700_18_fu_7399_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_18_fu_7399_p2.read()[0].to_bool())? cnt_6_3_V_30_fu_7393_p2.read(): ap_phi_mux_cnt_6_2_V_0_phi_fu_1744_p4.read());
}

void estimate_FR_2::thread_cnt_6_3_V_7_fu_7457_p3() {
    cnt_6_3_V_7_fu_7457_p3 = (!and_ln700_19_fu_7413_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_19_fu_7413_p2.read()[0].to_bool())? ap_phi_mux_cnt_6_2_V_0_phi_fu_1744_p4.read(): cnt_6_3_V_6_fu_7449_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_8_fu_7465_p3() {
    cnt_6_3_V_8_fu_7465_p3 = (!and_ln700_20_fu_7427_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_20_fu_7427_p2.read()[0].to_bool())? ap_phi_mux_cnt_6_2_V_0_phi_fu_1744_p4.read(): cnt_6_3_V_7_fu_7457_p3.read());
}

void estimate_FR_2::thread_cnt_6_3_V_9_fu_7473_p3() {
    cnt_6_3_V_9_fu_7473_p3 = (!trunc_ln301_6_fu_7368_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_6_fu_7368_p1.read()[0].to_bool())? cnt_6_3_V_8_fu_7465_p3.read(): ap_phi_mux_cnt_6_2_V_0_phi_fu_1744_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_11_fu_7849_p3() {
    cnt_7_3_V_11_fu_7849_p3 = (!and_ln700_22_fu_7781_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_22_fu_7781_p2.read()[0].to_bool())? cnt_7_3_V_30_fu_7761_p2.read(): ap_phi_mux_cnt_7_3_V_10_phi_fu_1714_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_12_fu_7857_p3() {
    cnt_7_3_V_12_fu_7857_p3 = (!and_ln700_23_fu_7795_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_23_fu_7795_p2.read()[0].to_bool())? ap_phi_mux_cnt_7_3_V_10_phi_fu_1714_p4.read(): cnt_7_3_V_11_fu_7849_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_13_fu_7865_p3() {
    cnt_7_3_V_13_fu_7865_p3 = (!trunc_ln301_7_fu_7736_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_7_fu_7736_p1.read()[0].to_bool())? cnt_7_3_V_12_fu_7857_p3.read(): ap_phi_mux_cnt_7_3_V_10_phi_fu_1714_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_15_fu_7873_p3() {
    cnt_7_3_V_15_fu_7873_p3 = (!and_ln700_23_fu_7795_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_23_fu_7795_p2.read()[0].to_bool())? cnt_7_3_V_30_fu_7761_p2.read(): ap_phi_mux_cnt_7_3_V_14_phi_fu_1724_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_16_fu_7881_p3() {
    cnt_7_3_V_16_fu_7881_p3 = (!trunc_ln301_7_fu_7736_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_7_fu_7736_p1.read()[0].to_bool())? cnt_7_3_V_15_fu_7873_p3.read(): ap_phi_mux_cnt_7_3_V_14_phi_fu_1724_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_17_fu_7889_p3() {
    cnt_7_3_V_17_fu_7889_p3 = (!trunc_ln301_7_fu_7736_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_7_fu_7736_p1.read()[0].to_bool())? cnt_7_3_V_30_fu_7761_p2.read(): ap_phi_mux_cnt_V_load_3_19_c_phi_fu_2174_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_18_fu_7897_p3() {
    cnt_7_3_V_18_fu_7897_p3 = (!and_ln700_21_fu_7767_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_21_fu_7767_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_19_c_phi_fu_2174_p4.read(): cnt_7_3_V_17_fu_7889_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_19_fu_7905_p3() {
    cnt_7_3_V_19_fu_7905_p3 = (!and_ln700_22_fu_7781_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_22_fu_7781_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_19_c_phi_fu_2174_p4.read(): cnt_7_3_V_18_fu_7897_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_20_fu_7913_p3() {
    cnt_7_3_V_20_fu_7913_p3 = (!and_ln700_23_fu_7795_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_23_fu_7795_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_3_19_c_phi_fu_2174_p4.read(): cnt_7_3_V_19_fu_7905_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_22_fu_15847_p3() {
    cnt_7_3_V_22_fu_15847_p3 = (!and_ln700_21_reg_23169.read()[0].is_01())? sc_lv<6>(): ((and_ln700_21_reg_23169.read()[0].to_bool())? cnt_7_3_V_30_reg_23163.read(): cnt_7_3_V_21_reg_2411.read());
}

void estimate_FR_2::thread_cnt_7_3_V_23_fu_15853_p3() {
    cnt_7_3_V_23_fu_15853_p3 = (!and_ln700_22_reg_23174.read()[0].is_01())? sc_lv<6>(): ((and_ln700_22_reg_23174.read()[0].to_bool())? cnt_7_3_V_21_reg_2411.read(): cnt_7_3_V_22_fu_15847_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_24_fu_15860_p3() {
    cnt_7_3_V_24_fu_15860_p3 = (!and_ln700_23_reg_23180.read()[0].is_01())? sc_lv<6>(): ((and_ln700_23_reg_23180.read()[0].to_bool())? cnt_7_3_V_21_reg_2411.read(): cnt_7_3_V_23_fu_15853_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_26_fu_15867_p3() {
    cnt_7_3_V_26_fu_15867_p3 = (!and_ln700_22_reg_23174.read()[0].is_01())? sc_lv<6>(): ((and_ln700_22_reg_23174.read()[0].to_bool())? cnt_7_3_V_30_reg_23163.read(): cnt_7_3_V_25_reg_2651.read());
}

void estimate_FR_2::thread_cnt_7_3_V_27_fu_15873_p3() {
    cnt_7_3_V_27_fu_15873_p3 = (!and_ln700_23_reg_23180.read()[0].is_01())? sc_lv<6>(): ((and_ln700_23_reg_23180.read()[0].to_bool())? cnt_7_3_V_25_reg_2651.read(): cnt_7_3_V_26_fu_15867_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_29_fu_7921_p3() {
    cnt_7_3_V_29_fu_7921_p3 = (!and_ln700_23_fu_7795_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_23_fu_7795_p2.read()[0].to_bool())? cnt_7_3_V_30_fu_7761_p2.read(): ap_phi_mux_cnt_7_3_V_28_phi_fu_2894_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_2_fu_7773_p3() {
    cnt_7_3_V_2_fu_7773_p3 = (!and_ln700_21_fu_7767_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_21_fu_7767_p2.read()[0].to_bool())? ap_phi_mux_cnt_7_3_V_0_phi_fu_1694_p4.read(): cnt_7_3_V_30_fu_7761_p2.read());
}

void estimate_FR_2::thread_cnt_7_3_V_30_fu_7761_p2() {
    cnt_7_3_V_30_fu_7761_p2 = (!ap_const_lv6_1.is_01() || !tmp_51_fu_7748_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_51_fu_7748_p6.read()));
}

void estimate_FR_2::thread_cnt_7_3_V_3_fu_7787_p3() {
    cnt_7_3_V_3_fu_7787_p3 = (!and_ln700_22_fu_7781_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_22_fu_7781_p2.read()[0].to_bool())? ap_phi_mux_cnt_7_3_V_0_phi_fu_1694_p4.read(): cnt_7_3_V_2_fu_7773_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_4_fu_7801_p3() {
    cnt_7_3_V_4_fu_7801_p3 = (!and_ln700_23_fu_7795_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_23_fu_7795_p2.read()[0].to_bool())? ap_phi_mux_cnt_7_3_V_0_phi_fu_1694_p4.read(): cnt_7_3_V_3_fu_7787_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_5_fu_7809_p3() {
    cnt_7_3_V_5_fu_7809_p3 = (!trunc_ln301_7_fu_7736_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_7_fu_7736_p1.read()[0].to_bool())? cnt_7_3_V_4_fu_7801_p3.read(): ap_phi_mux_cnt_7_3_V_0_phi_fu_1694_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_6_fu_7817_p3() {
    cnt_7_3_V_6_fu_7817_p3 = (!and_ln700_21_fu_7767_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_21_fu_7767_p2.read()[0].to_bool())? cnt_7_3_V_30_fu_7761_p2.read(): ap_phi_mux_cnt_7_2_V_0_phi_fu_1704_p4.read());
}

void estimate_FR_2::thread_cnt_7_3_V_7_fu_7825_p3() {
    cnt_7_3_V_7_fu_7825_p3 = (!and_ln700_22_fu_7781_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_22_fu_7781_p2.read()[0].to_bool())? ap_phi_mux_cnt_7_2_V_0_phi_fu_1704_p4.read(): cnt_7_3_V_6_fu_7817_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_8_fu_7833_p3() {
    cnt_7_3_V_8_fu_7833_p3 = (!and_ln700_23_fu_7795_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_23_fu_7795_p2.read()[0].to_bool())? ap_phi_mux_cnt_7_2_V_0_phi_fu_1704_p4.read(): cnt_7_3_V_7_fu_7825_p3.read());
}

void estimate_FR_2::thread_cnt_7_3_V_9_fu_7841_p3() {
    cnt_7_3_V_9_fu_7841_p3 = (!trunc_ln301_7_fu_7736_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_7_fu_7736_p1.read()[0].to_bool())? cnt_7_3_V_8_fu_7833_p3.read(): ap_phi_mux_cnt_7_2_V_0_phi_fu_1704_p4.read());
}

void estimate_FR_2::thread_cnt_8_0_V_fu_4347_p1() {
    cnt_8_0_V_fu_4347_p1 = counts_2_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_8_1_V_fu_4551_p1() {
    cnt_8_1_V_fu_4551_p1 = counts_8_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_8_2_V_fu_4755_p1() {
    cnt_8_2_V_fu_4755_p1 = counts_14_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_8_3_V_11_fu_8217_p3() {
    cnt_8_3_V_11_fu_8217_p3 = (!and_ln700_25_fu_8149_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_25_fu_8149_p2.read()[0].to_bool())? cnt_8_3_V_30_fu_8129_p2.read(): ap_phi_mux_cnt_8_3_V_10_phi_fu_1674_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_12_fu_8225_p3() {
    cnt_8_3_V_12_fu_8225_p3 = (!and_ln700_26_fu_8163_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_26_fu_8163_p2.read()[0].to_bool())? ap_phi_mux_cnt_8_3_V_10_phi_fu_1674_p4.read(): cnt_8_3_V_11_fu_8217_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_13_fu_8233_p3() {
    cnt_8_3_V_13_fu_8233_p3 = (!trunc_ln301_8_fu_8104_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_8_fu_8104_p1.read()[0].to_bool())? cnt_8_3_V_12_fu_8225_p3.read(): ap_phi_mux_cnt_8_3_V_10_phi_fu_1674_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_15_fu_8241_p3() {
    cnt_8_3_V_15_fu_8241_p3 = (!and_ln700_26_fu_8163_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_26_fu_8163_p2.read()[0].to_bool())? cnt_8_3_V_30_fu_8129_p2.read(): ap_phi_mux_cnt_8_3_V_14_phi_fu_1684_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_16_fu_8249_p3() {
    cnt_8_3_V_16_fu_8249_p3 = (!trunc_ln301_8_fu_8104_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_8_fu_8104_p1.read()[0].to_bool())? cnt_8_3_V_15_fu_8241_p3.read(): ap_phi_mux_cnt_8_3_V_14_phi_fu_1684_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_17_fu_8257_p3() {
    cnt_8_3_V_17_fu_8257_p3 = (!trunc_ln301_8_fu_8104_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_8_fu_8104_p1.read()[0].to_bool())? cnt_8_3_V_30_fu_8129_p2.read(): ap_phi_mux_cnt_V_load_20_phi_fu_2164_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_18_fu_8265_p3() {
    cnt_8_3_V_18_fu_8265_p3 = (!and_ln700_24_fu_8135_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_24_fu_8135_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_20_phi_fu_2164_p4.read(): cnt_8_3_V_17_fu_8257_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_19_fu_8273_p3() {
    cnt_8_3_V_19_fu_8273_p3 = (!and_ln700_25_fu_8149_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_25_fu_8149_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_20_phi_fu_2164_p4.read(): cnt_8_3_V_18_fu_8265_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_20_fu_8281_p3() {
    cnt_8_3_V_20_fu_8281_p3 = (!and_ln700_26_fu_8163_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_26_fu_8163_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_20_phi_fu_2164_p4.read(): cnt_8_3_V_19_fu_8273_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_22_fu_16112_p3() {
    cnt_8_3_V_22_fu_16112_p3 = (!and_ln700_24_reg_23265.read()[0].is_01())? sc_lv<6>(): ((and_ln700_24_reg_23265.read()[0].to_bool())? cnt_8_3_V_30_reg_23259.read(): cnt_8_3_V_21_reg_2401.read());
}

void estimate_FR_2::thread_cnt_8_3_V_23_fu_16118_p3() {
    cnt_8_3_V_23_fu_16118_p3 = (!and_ln700_25_reg_23270.read()[0].is_01())? sc_lv<6>(): ((and_ln700_25_reg_23270.read()[0].to_bool())? cnt_8_3_V_21_reg_2401.read(): cnt_8_3_V_22_fu_16112_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_24_fu_16125_p3() {
    cnt_8_3_V_24_fu_16125_p3 = (!and_ln700_26_reg_23276.read()[0].is_01())? sc_lv<6>(): ((and_ln700_26_reg_23276.read()[0].to_bool())? cnt_8_3_V_21_reg_2401.read(): cnt_8_3_V_23_fu_16118_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_26_fu_16132_p3() {
    cnt_8_3_V_26_fu_16132_p3 = (!and_ln700_25_reg_23270.read()[0].is_01())? sc_lv<6>(): ((and_ln700_25_reg_23270.read()[0].to_bool())? cnt_8_3_V_30_reg_23259.read(): cnt_8_3_V_25_reg_2641.read());
}

void estimate_FR_2::thread_cnt_8_3_V_27_fu_16138_p3() {
    cnt_8_3_V_27_fu_16138_p3 = (!and_ln700_26_reg_23276.read()[0].is_01())? sc_lv<6>(): ((and_ln700_26_reg_23276.read()[0].to_bool())? cnt_8_3_V_25_reg_2641.read(): cnt_8_3_V_26_fu_16132_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_29_fu_8289_p3() {
    cnt_8_3_V_29_fu_8289_p3 = (!and_ln700_26_fu_8163_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_26_fu_8163_p2.read()[0].to_bool())? cnt_8_3_V_30_fu_8129_p2.read(): ap_phi_mux_cnt_8_3_V_28_phi_fu_2884_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_2_fu_8141_p3() {
    cnt_8_3_V_2_fu_8141_p3 = (!and_ln700_24_fu_8135_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_24_fu_8135_p2.read()[0].to_bool())? ap_phi_mux_cnt_8_3_V_0_phi_fu_1654_p4.read(): cnt_8_3_V_30_fu_8129_p2.read());
}

void estimate_FR_2::thread_cnt_8_3_V_30_fu_8129_p2() {
    cnt_8_3_V_30_fu_8129_p2 = (!ap_const_lv6_1.is_01() || !tmp_53_fu_8116_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_53_fu_8116_p6.read()));
}

void estimate_FR_2::thread_cnt_8_3_V_3_fu_8155_p3() {
    cnt_8_3_V_3_fu_8155_p3 = (!and_ln700_25_fu_8149_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_25_fu_8149_p2.read()[0].to_bool())? ap_phi_mux_cnt_8_3_V_0_phi_fu_1654_p4.read(): cnt_8_3_V_2_fu_8141_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_4_fu_8169_p3() {
    cnt_8_3_V_4_fu_8169_p3 = (!and_ln700_26_fu_8163_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_26_fu_8163_p2.read()[0].to_bool())? ap_phi_mux_cnt_8_3_V_0_phi_fu_1654_p4.read(): cnt_8_3_V_3_fu_8155_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_5_fu_8177_p3() {
    cnt_8_3_V_5_fu_8177_p3 = (!trunc_ln301_8_fu_8104_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_8_fu_8104_p1.read()[0].to_bool())? cnt_8_3_V_4_fu_8169_p3.read(): ap_phi_mux_cnt_8_3_V_0_phi_fu_1654_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_6_fu_8185_p3() {
    cnt_8_3_V_6_fu_8185_p3 = (!and_ln700_24_fu_8135_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_24_fu_8135_p2.read()[0].to_bool())? cnt_8_3_V_30_fu_8129_p2.read(): ap_phi_mux_cnt_8_2_V_0_phi_fu_1664_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_7_fu_8193_p3() {
    cnt_8_3_V_7_fu_8193_p3 = (!and_ln700_25_fu_8149_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_25_fu_8149_p2.read()[0].to_bool())? ap_phi_mux_cnt_8_2_V_0_phi_fu_1664_p4.read(): cnt_8_3_V_6_fu_8185_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_8_fu_8201_p3() {
    cnt_8_3_V_8_fu_8201_p3 = (!and_ln700_26_fu_8163_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_26_fu_8163_p2.read()[0].to_bool())? ap_phi_mux_cnt_8_2_V_0_phi_fu_1664_p4.read(): cnt_8_3_V_7_fu_8193_p3.read());
}

void estimate_FR_2::thread_cnt_8_3_V_9_fu_8209_p3() {
    cnt_8_3_V_9_fu_8209_p3 = (!trunc_ln301_8_fu_8104_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_8_fu_8104_p1.read()[0].to_bool())? cnt_8_3_V_8_fu_8201_p3.read(): ap_phi_mux_cnt_8_2_V_0_phi_fu_1664_p4.read());
}

void estimate_FR_2::thread_cnt_8_3_V_fu_4959_p1() {
    cnt_8_3_V_fu_4959_p1 = counts_20_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_9_3_V_11_fu_8585_p3() {
    cnt_9_3_V_11_fu_8585_p3 = (!and_ln700_28_fu_8517_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_28_fu_8517_p2.read()[0].to_bool())? cnt_9_3_V_30_fu_8497_p2.read(): ap_phi_mux_cnt_9_3_V_10_phi_fu_1634_p4.read());
}

void estimate_FR_2::thread_cnt_9_3_V_12_fu_8593_p3() {
    cnt_9_3_V_12_fu_8593_p3 = (!and_ln700_29_fu_8531_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_29_fu_8531_p2.read()[0].to_bool())? ap_phi_mux_cnt_9_3_V_10_phi_fu_1634_p4.read(): cnt_9_3_V_11_fu_8585_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_13_fu_8601_p3() {
    cnt_9_3_V_13_fu_8601_p3 = (!trunc_ln301_9_fu_8472_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_9_fu_8472_p1.read()[0].to_bool())? cnt_9_3_V_12_fu_8593_p3.read(): ap_phi_mux_cnt_9_3_V_10_phi_fu_1634_p4.read());
}

void estimate_FR_2::thread_cnt_9_3_V_15_fu_8609_p3() {
    cnt_9_3_V_15_fu_8609_p3 = (!and_ln700_29_fu_8531_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_29_fu_8531_p2.read()[0].to_bool())? cnt_9_3_V_30_fu_8497_p2.read(): ap_phi_mux_cnt_9_3_V_14_phi_fu_1644_p4.read());
}

void estimate_FR_2::thread_cnt_9_3_V_16_fu_8617_p3() {
    cnt_9_3_V_16_fu_8617_p3 = (!trunc_ln301_9_fu_8472_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_9_fu_8472_p1.read()[0].to_bool())? cnt_9_3_V_15_fu_8609_p3.read(): ap_phi_mux_cnt_9_3_V_14_phi_fu_1644_p4.read());
}

void estimate_FR_2::thread_cnt_9_3_V_17_fu_8625_p3() {
    cnt_9_3_V_17_fu_8625_p3 = (!trunc_ln301_9_fu_8472_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_9_fu_8472_p1.read()[0].to_bool())? cnt_9_3_V_30_fu_8497_p2.read(): ap_phi_mux_cnt_V_load_1_20_phi_fu_2154_p4.read());
}

void estimate_FR_2::thread_cnt_9_3_V_18_fu_8633_p3() {
    cnt_9_3_V_18_fu_8633_p3 = (!and_ln700_27_fu_8503_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_27_fu_8503_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_20_phi_fu_2154_p4.read(): cnt_9_3_V_17_fu_8625_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_19_fu_8641_p3() {
    cnt_9_3_V_19_fu_8641_p3 = (!and_ln700_28_fu_8517_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_28_fu_8517_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_20_phi_fu_2154_p4.read(): cnt_9_3_V_18_fu_8633_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_20_fu_8649_p3() {
    cnt_9_3_V_20_fu_8649_p3 = (!and_ln700_29_fu_8531_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_29_fu_8531_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_1_20_phi_fu_2154_p4.read(): cnt_9_3_V_19_fu_8641_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_22_fu_16377_p3() {
    cnt_9_3_V_22_fu_16377_p3 = (!and_ln700_27_reg_23361.read()[0].is_01())? sc_lv<6>(): ((and_ln700_27_reg_23361.read()[0].to_bool())? cnt_9_3_V_30_reg_23355.read(): cnt_9_3_V_21_reg_2391.read());
}

void estimate_FR_2::thread_cnt_9_3_V_23_fu_16383_p3() {
    cnt_9_3_V_23_fu_16383_p3 = (!and_ln700_28_reg_23366.read()[0].is_01())? sc_lv<6>(): ((and_ln700_28_reg_23366.read()[0].to_bool())? cnt_9_3_V_21_reg_2391.read(): cnt_9_3_V_22_fu_16377_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_24_fu_16390_p3() {
    cnt_9_3_V_24_fu_16390_p3 = (!and_ln700_29_reg_23372.read()[0].is_01())? sc_lv<6>(): ((and_ln700_29_reg_23372.read()[0].to_bool())? cnt_9_3_V_21_reg_2391.read(): cnt_9_3_V_23_fu_16383_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_26_fu_16397_p3() {
    cnt_9_3_V_26_fu_16397_p3 = (!and_ln700_28_reg_23366.read()[0].is_01())? sc_lv<6>(): ((and_ln700_28_reg_23366.read()[0].to_bool())? cnt_9_3_V_30_reg_23355.read(): cnt_9_3_V_25_reg_2631.read());
}

void estimate_FR_2::thread_cnt_9_3_V_27_fu_16403_p3() {
    cnt_9_3_V_27_fu_16403_p3 = (!and_ln700_29_reg_23372.read()[0].is_01())? sc_lv<6>(): ((and_ln700_29_reg_23372.read()[0].to_bool())? cnt_9_3_V_25_reg_2631.read(): cnt_9_3_V_26_fu_16397_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_29_fu_8657_p3() {
    cnt_9_3_V_29_fu_8657_p3 = (!and_ln700_29_fu_8531_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_29_fu_8531_p2.read()[0].to_bool())? cnt_9_3_V_30_fu_8497_p2.read(): ap_phi_mux_cnt_9_3_V_28_phi_fu_2874_p4.read());
}

void estimate_FR_2::thread_cnt_9_3_V_2_fu_8509_p3() {
    cnt_9_3_V_2_fu_8509_p3 = (!and_ln700_27_fu_8503_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_27_fu_8503_p2.read()[0].to_bool())? ap_phi_mux_cnt_9_3_V_0_phi_fu_1614_p4.read(): cnt_9_3_V_30_fu_8497_p2.read());
}

void estimate_FR_2::thread_cnt_9_3_V_30_fu_8497_p2() {
    cnt_9_3_V_30_fu_8497_p2 = (!ap_const_lv6_1.is_01() || !tmp_55_fu_8484_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_55_fu_8484_p6.read()));
}

void estimate_FR_2::thread_cnt_9_3_V_3_fu_8523_p3() {
    cnt_9_3_V_3_fu_8523_p3 = (!and_ln700_28_fu_8517_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_28_fu_8517_p2.read()[0].to_bool())? ap_phi_mux_cnt_9_3_V_0_phi_fu_1614_p4.read(): cnt_9_3_V_2_fu_8509_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_4_fu_8537_p3() {
    cnt_9_3_V_4_fu_8537_p3 = (!and_ln700_29_fu_8531_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_29_fu_8531_p2.read()[0].to_bool())? ap_phi_mux_cnt_9_3_V_0_phi_fu_1614_p4.read(): cnt_9_3_V_3_fu_8523_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_5_fu_8545_p3() {
    cnt_9_3_V_5_fu_8545_p3 = (!trunc_ln301_9_fu_8472_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_9_fu_8472_p1.read()[0].to_bool())? cnt_9_3_V_4_fu_8537_p3.read(): ap_phi_mux_cnt_9_3_V_0_phi_fu_1614_p4.read());
}

void estimate_FR_2::thread_cnt_9_3_V_6_fu_8553_p3() {
    cnt_9_3_V_6_fu_8553_p3 = (!and_ln700_27_fu_8503_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_27_fu_8503_p2.read()[0].to_bool())? cnt_9_3_V_30_fu_8497_p2.read(): ap_phi_mux_cnt_9_2_V_0_phi_fu_1624_p4.read());
}

void estimate_FR_2::thread_cnt_9_3_V_7_fu_8561_p3() {
    cnt_9_3_V_7_fu_8561_p3 = (!and_ln700_28_fu_8517_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_28_fu_8517_p2.read()[0].to_bool())? ap_phi_mux_cnt_9_2_V_0_phi_fu_1624_p4.read(): cnt_9_3_V_6_fu_8553_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_8_fu_8569_p3() {
    cnt_9_3_V_8_fu_8569_p3 = (!and_ln700_29_fu_8531_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_29_fu_8531_p2.read()[0].to_bool())? ap_phi_mux_cnt_9_2_V_0_phi_fu_1624_p4.read(): cnt_9_3_V_7_fu_8561_p3.read());
}

void estimate_FR_2::thread_cnt_9_3_V_9_fu_8577_p3() {
    cnt_9_3_V_9_fu_8577_p3 = (!trunc_ln301_9_fu_8472_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_9_fu_8472_p1.read()[0].to_bool())? cnt_9_3_V_8_fu_8569_p3.read(): ap_phi_mux_cnt_9_2_V_0_phi_fu_1624_p4.read());
}

void estimate_FR_2::thread_counts_0_o() {
    counts_0_o = esl_zext<32,30>(tmp_fu_20352_p8.read());
}

void estimate_FR_2::thread_counts_0_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        counts_0_o_ap_vld = ap_const_logic_1;
    } else {
        counts_0_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_10_o() {
    counts_10_o = esl_zext<32,30>(tmp_16_fu_20825_p8.read());
}

void estimate_FR_2::thread_counts_10_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_10_o_ap_vld = ap_const_logic_1;
    } else {
        counts_10_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_11_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_11_o = zext_ln36_16_fu_20902_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_11_o = zext_ln36_17_fu_20866_p1.read();
        } else {
            counts_11_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_11_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_11_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_11_o_ap_vld = ap_const_logic_1;
    } else {
        counts_11_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_12_o() {
    counts_12_o = esl_zext<32,30>(tmp_20_fu_20920_p8.read());
}

void estimate_FR_2::thread_counts_12_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_12_o_ap_vld = ap_const_logic_1;
    } else {
        counts_12_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_13_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_13_o = zext_ln36_19_fu_20997_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_13_o = zext_ln36_20_fu_20961_p1.read();
        } else {
            counts_13_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_13_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_13_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_13_o_ap_vld = ap_const_logic_1;
    } else {
        counts_13_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_14_o() {
    counts_14_o = esl_zext<32,30>(tmp_24_fu_21015_p8.read());
}

void estimate_FR_2::thread_counts_14_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_14_o_ap_vld = ap_const_logic_1;
    } else {
        counts_14_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_15_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_15_o = zext_ln36_22_fu_21092_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_15_o = zext_ln36_23_fu_21056_p1.read();
        } else {
            counts_15_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_15_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_15_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_15_o_ap_vld = ap_const_logic_1;
    } else {
        counts_15_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_16_o() {
    counts_16_o = esl_zext<32,30>(tmp_27_fu_21110_p8.read());
}

void estimate_FR_2::thread_counts_16_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_16_o_ap_vld = ap_const_logic_1;
    } else {
        counts_16_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_17_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_17_o = zext_ln36_25_fu_21187_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_17_o = zext_ln36_26_fu_21151_p1.read();
        } else {
            counts_17_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_17_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_17_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_17_o_ap_vld = ap_const_logic_1;
    } else {
        counts_17_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_18_o() {
    counts_18_o = esl_zext<32,30>(tmp_30_fu_21205_p8.read());
}

void estimate_FR_2::thread_counts_18_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_18_o_ap_vld = ap_const_logic_1;
    } else {
        counts_18_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_19_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_19_o = zext_ln36_28_fu_21282_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_19_o = zext_ln36_29_fu_21246_p1.read();
        } else {
            counts_19_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_19_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_19_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_19_o_ap_vld = ap_const_logic_1;
    } else {
        counts_19_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_1_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_1_o = zext_ln36_1_fu_20429_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_1_o = zext_ln36_2_fu_20393_p1.read();
        } else {
            counts_1_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_1_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_1_o_ap_vld() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)))) {
        counts_1_o_ap_vld = ap_const_logic_1;
    } else {
        counts_1_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_20_o() {
    counts_20_o = esl_zext<32,30>(tmp_34_fu_21300_p8.read());
}

void estimate_FR_2::thread_counts_20_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_20_o_ap_vld = ap_const_logic_1;
    } else {
        counts_20_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_21_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_21_o = zext_ln36_31_fu_21377_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_21_o = zext_ln36_32_fu_21341_p1.read();
        } else {
            counts_21_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_21_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_21_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_21_o_ap_vld = ap_const_logic_1;
    } else {
        counts_21_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_22_o() {
    counts_22_o = esl_zext<32,30>(tmp_37_fu_21395_p8.read());
}

void estimate_FR_2::thread_counts_22_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_22_o_ap_vld = ap_const_logic_1;
    } else {
        counts_22_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_23_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_23_o = zext_ln36_34_fu_21472_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_23_o = zext_ln36_35_fu_21436_p1.read();
        } else {
            counts_23_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_23_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_23_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_23_o_ap_vld = ap_const_logic_1;
    } else {
        counts_23_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_2_o() {
    counts_2_o = esl_zext<32,30>(tmp_5_reg_25513.read());
}

void estimate_FR_2::thread_counts_2_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_2_o_ap_vld = ap_const_logic_1;
    } else {
        counts_2_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_3_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_3_o = zext_ln36_4_fu_20522_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_3_o = zext_ln36_5_fu_20486_p1.read();
        } else {
            counts_3_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_3_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_3_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_3_o_ap_vld = ap_const_logic_1;
    } else {
        counts_3_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_4_o() {
    counts_4_o = esl_zext<32,30>(tmp_8_fu_20540_p8.read());
}

void estimate_FR_2::thread_counts_4_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_4_o_ap_vld = ap_const_logic_1;
    } else {
        counts_4_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_5_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_5_o = zext_ln36_7_fu_20617_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_5_o = zext_ln36_8_fu_20581_p1.read();
        } else {
            counts_5_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_5_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_5_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_5_o_ap_vld = ap_const_logic_1;
    } else {
        counts_5_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_6_o() {
    counts_6_o = esl_zext<32,30>(tmp_10_fu_20635_p8.read());
}

void estimate_FR_2::thread_counts_6_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_6_o_ap_vld = ap_const_logic_1;
    } else {
        counts_6_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_7_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_7_o = zext_ln36_10_fu_20712_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_7_o = zext_ln36_11_fu_20676_p1.read();
        } else {
            counts_7_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_7_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_7_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_7_o_ap_vld = ap_const_logic_1;
    } else {
        counts_7_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_8_o() {
    counts_8_o = esl_zext<32,30>(tmp_13_fu_20730_p8.read());
}

void estimate_FR_2::thread_counts_8_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        counts_8_o_ap_vld = ap_const_logic_1;
    } else {
        counts_8_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_counts_9_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            counts_9_o = zext_ln36_13_fu_20807_p1.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            counts_9_o = zext_ln36_14_fu_20771_p1.read();
        } else {
            counts_9_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        counts_9_o = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_counts_9_o_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        counts_9_o_ap_vld = ap_const_logic_1;
    } else {
        counts_9_o_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_icmp_ln19_fu_5095_p2() {
    icmp_ln19_fu_5095_p2 = (!i_0_0_reg_4135.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(i_0_0_reg_4135.read() == ap_const_lv7_60);
}

void estimate_FR_2::thread_icmp_ln700_1_fu_5195_p2() {
    icmp_ln700_1_fu_5195_p2 = (!trunc_ln738_reg_22080.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln738_reg_22080.read() == ap_const_lv2_1);
}

void estimate_FR_2::thread_icmp_ln700_2_fu_5214_p2() {
    icmp_ln700_2_fu_5214_p2 = (!trunc_ln738_reg_22080.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln738_reg_22080.read() == ap_const_lv2_0);
}

void estimate_FR_2::thread_icmp_ln700_fu_5176_p2() {
    icmp_ln700_fu_5176_p2 = (!trunc_ln738_reg_22080.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln738_reg_22080.read() == ap_const_lv2_2);
}

void estimate_FR_2::thread_inputs_0_address0() {
    inputs_0_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_0_ce0 = ap_const_logic_1;
    } else {
        inputs_0_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_10_address0() {
    inputs_10_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_10_ce0 = ap_const_logic_1;
    } else {
        inputs_10_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_11_address0() {
    inputs_11_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_11_ce0 = ap_const_logic_1;
    } else {
        inputs_11_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_12_address0() {
    inputs_12_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_12_ce0 = ap_const_logic_1;
    } else {
        inputs_12_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_13_address0() {
    inputs_13_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_13_ce0 = ap_const_logic_1;
    } else {
        inputs_13_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_14_address0() {
    inputs_14_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_14_ce0 = ap_const_logic_1;
    } else {
        inputs_14_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_15_address0() {
    inputs_15_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_15_ce0 = ap_const_logic_1;
    } else {
        inputs_15_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_16_address0() {
    inputs_16_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_16_ce0 = ap_const_logic_1;
    } else {
        inputs_16_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_17_address0() {
    inputs_17_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_17_ce0 = ap_const_logic_1;
    } else {
        inputs_17_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_18_address0() {
    inputs_18_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_18_ce0 = ap_const_logic_1;
    } else {
        inputs_18_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_19_address0() {
    inputs_19_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_19_ce0 = ap_const_logic_1;
    } else {
        inputs_19_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_1_address0() {
    inputs_1_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_1_ce0 = ap_const_logic_1;
    } else {
        inputs_1_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_20_address0() {
    inputs_20_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_20_ce0 = ap_const_logic_1;
    } else {
        inputs_20_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_21_address0() {
    inputs_21_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_21_ce0 = ap_const_logic_1;
    } else {
        inputs_21_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_22_address0() {
    inputs_22_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_22_ce0 = ap_const_logic_1;
    } else {
        inputs_22_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_23_address0() {
    inputs_23_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_23_ce0 = ap_const_logic_1;
    } else {
        inputs_23_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_2_address0() {
    inputs_2_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_2_ce0 = ap_const_logic_1;
    } else {
        inputs_2_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_3_address0() {
    inputs_3_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_3_ce0 = ap_const_logic_1;
    } else {
        inputs_3_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_4_address0() {
    inputs_4_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_4_ce0 = ap_const_logic_1;
    } else {
        inputs_4_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_5_address0() {
    inputs_5_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_5_ce0 = ap_const_logic_1;
    } else {
        inputs_5_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_6_address0() {
    inputs_6_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_6_ce0 = ap_const_logic_1;
    } else {
        inputs_6_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_7_address0() {
    inputs_7_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_7_ce0 = ap_const_logic_1;
    } else {
        inputs_7_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_8_address0() {
    inputs_8_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_8_ce0 = ap_const_logic_1;
    } else {
        inputs_8_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_inputs_9_address0() {
    inputs_9_address0 =  (sc_lv<2>) (zext_ln20_fu_5107_p1.read());
}

void estimate_FR_2::thread_inputs_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        inputs_9_ce0 = ap_const_logic_1;
    } else {
        inputs_9_ce0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_or_ln42_2_10_fu_20907_p5() {
    or_ln42_2_10_fu_20907_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_23_3_V_6_reg_2995.read(), FR_22_3_V_6_reg_3043.read()), FR_21_3_V_6_reg_3091.read()), FR_20_3_V_6_reg_3139.read());
}

void estimate_FR_2::thread_or_ln42_2_11_fu_20966_p5() {
    or_ln42_2_11_fu_20966_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_3_2_010477_reg_3943.read(), FR_V_2_2_010473_reg_3991.read()), FR_V_1_2_010469_reg_4039.read()), FR_V_0_2_010465_reg_4087.read());
}

void estimate_FR_2::thread_or_ln42_2_12_fu_21002_p5() {
    or_ln42_2_12_fu_21002_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_7_2_010493_reg_3751.read(), FR_V_6_2_010489_reg_3799.read()), FR_V_5_2_010485_reg_3847.read()), FR_V_4_2_010481_reg_3895.read());
}

void estimate_FR_2::thread_or_ln42_2_13_fu_21061_p5() {
    or_ln42_2_13_fu_21061_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_11_2_010509_reg_3559.read(), FR_V_10_2_010505_reg_3607.read()), FR_V_9_2_010501_reg_3655.read()), FR_V_8_2_010497_reg_3703.read());
}

void estimate_FR_2::thread_or_ln42_2_14_fu_21097_p5() {
    or_ln42_2_14_fu_21097_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_15_2_010525_reg_3367.read(), FR_V_14_2_010521_reg_3415.read()), FR_V_13_2_010517_reg_3463.read()), FR_V_12_2_010513_reg_3511.read());
}

void estimate_FR_2::thread_or_ln42_2_15_fu_21156_p5() {
    or_ln42_2_15_fu_21156_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_19_2_010541_reg_3175.read(), FR_V_18_2_010537_reg_3223.read()), FR_V_17_2_010533_reg_3271.read()), FR_V_16_2_010529_reg_3319.read());
}

void estimate_FR_2::thread_or_ln42_2_16_fu_21192_p5() {
    or_ln42_2_16_fu_21192_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_23_2_010557_reg_2983.read(), FR_V_22_2_010553_reg_3031.read()), FR_V_21_2_010549_reg_3079.read()), FR_V_20_2_010545_reg_3127.read());
}

void estimate_FR_2::thread_or_ln42_2_17_fu_21251_p5() {
    or_ln42_2_17_fu_21251_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_3_3_010478_reg_3931.read(), FR_V_2_3_010474_reg_3979.read()), FR_V_1_3_010470_reg_4027.read()), FR_V_0_3_010466_reg_4075.read());
}

void estimate_FR_2::thread_or_ln42_2_18_fu_21287_p5() {
    or_ln42_2_18_fu_21287_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_7_3_010494_reg_3739.read(), FR_V_6_3_010490_reg_3787.read()), FR_V_5_3_010486_reg_3835.read()), FR_V_4_3_010482_reg_3883.read());
}

void estimate_FR_2::thread_or_ln42_2_19_fu_21346_p5() {
    or_ln42_2_19_fu_21346_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_11_3_010510_reg_3547.read(), FR_V_10_3_010506_reg_3595.read()), FR_V_9_3_010502_reg_3643.read()), FR_V_8_3_010498_reg_3691.read());
}

void estimate_FR_2::thread_or_ln42_2_1_fu_20434_p5() {
    or_ln42_2_1_fu_20434_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_7_3_V_9_reg_3775.read(), FR_6_3_V_9_reg_3823.read()), FR_5_3_V_9_reg_3871.read()), FR_4_3_V_9_reg_3919.read());
}

void estimate_FR_2::thread_or_ln42_2_20_fu_21382_p5() {
    or_ln42_2_20_fu_21382_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_15_3_010526_reg_3355.read(), FR_V_14_3_010522_reg_3403.read()), FR_V_13_3_010518_reg_3451.read()), FR_V_12_3_010514_reg_3499.read());
}

void estimate_FR_2::thread_or_ln42_2_21_fu_21441_p5() {
    or_ln42_2_21_fu_21441_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_19_3_010542_reg_3163.read(), FR_V_18_3_010538_reg_3211.read()), FR_V_17_3_010534_reg_3259.read()), FR_V_16_3_010530_reg_3307.read());
}

void estimate_FR_2::thread_or_ln42_2_22_fu_21477_p5() {
    or_ln42_2_22_fu_21477_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_V_23_3_010558_reg_2971.read(), FR_V_22_3_010554_reg_3019.read()), FR_V_21_3_010550_reg_3067.read()), FR_V_20_3_010546_reg_3115.read());
}

void estimate_FR_2::thread_or_ln42_2_2_fu_20491_p5() {
    or_ln42_2_2_fu_20491_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_11_3_V_9_reg_3583.read(), FR_10_3_V_9_reg_3631.read()), FR_9_3_V_9_reg_3679.read()), FR_8_3_V_9_reg_3727.read());
}

void estimate_FR_2::thread_or_ln42_2_3_fu_20527_p5() {
    or_ln42_2_3_fu_20527_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_15_3_V_9_reg_3391.read(), FR_14_3_V_9_reg_3439.read()), FR_13_3_V_9_reg_3487.read()), FR_12_3_V_9_reg_3535.read());
}

void estimate_FR_2::thread_or_ln42_2_4_fu_20586_p5() {
    or_ln42_2_4_fu_20586_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_19_3_V_9_reg_3199.read(), FR_18_3_V_9_reg_3247.read()), FR_17_3_V_9_reg_3295.read()), FR_16_3_V_9_reg_3343.read());
}

void estimate_FR_2::thread_or_ln42_2_5_fu_20622_p5() {
    or_ln42_2_5_fu_20622_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_23_3_V_9_reg_3007.read(), FR_22_3_V_9_reg_3055.read()), FR_21_3_V_9_reg_3103.read()), FR_20_3_V_9_reg_3151.read());
}

void estimate_FR_2::thread_or_ln42_2_6_fu_20681_p5() {
    or_ln42_2_6_fu_20681_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_3_3_V_6_reg_3955.read(), FR_2_3_V_6_reg_4003.read()), FR_1_3_V_6_reg_4051.read()), FR_0_3_V_6_reg_4099.read());
}

void estimate_FR_2::thread_or_ln42_2_7_fu_20717_p5() {
    or_ln42_2_7_fu_20717_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_7_3_V_6_reg_3763.read(), FR_6_3_V_6_reg_3811.read()), FR_5_3_V_6_reg_3859.read()), FR_4_3_V_6_reg_3907.read());
}

void estimate_FR_2::thread_or_ln42_2_8_fu_20776_p5() {
    or_ln42_2_8_fu_20776_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_11_3_V_6_reg_3571.read(), FR_10_3_V_6_reg_3619.read()), FR_9_3_V_6_reg_3667.read()), FR_8_3_V_6_reg_3715.read());
}

void estimate_FR_2::thread_or_ln42_2_9_fu_20812_p5() {
    or_ln42_2_9_fu_20812_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_15_3_V_6_reg_3379.read(), FR_14_3_V_6_reg_3427.read()), FR_13_3_V_6_reg_3475.read()), FR_12_3_V_6_reg_3523.read());
}

void estimate_FR_2::thread_or_ln42_2_fu_20398_p5() {
    or_ln42_2_fu_20398_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_3_3_V_9_reg_3967.read(), FR_2_3_V_9_reg_4015.read()), FR_1_3_V_9_reg_4063.read()), FR_0_3_V_9_reg_4111.read());
}

void estimate_FR_2::thread_or_ln42_2_s_fu_20871_p5() {
    or_ln42_2_s_fu_20871_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(FR_19_3_V_6_reg_3187.read(), FR_18_3_V_6_reg_3235.read()), FR_17_3_V_6_reg_3283.read()), FR_16_3_V_6_reg_3331.read());
}

void estimate_FR_2::thread_outputs_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_0 = or_ln42_2_fu_20398_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_0 = ap_const_lv32_1;
        } else {
            outputs_0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_0_ap_vld() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)))) {
        outputs_0_ap_vld = ap_const_logic_1;
    } else {
        outputs_0_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_10() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_10 = or_ln42_2_s_fu_20871_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_10 = ap_const_lv32_1;
        } else {
            outputs_10 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_10 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_10_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_10_ap_vld = ap_const_logic_1;
    } else {
        outputs_10_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_11_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_11_ap_vld = ap_const_logic_1;
    } else {
        outputs_11_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_12() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_12 = or_ln42_2_11_fu_20966_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_12 = ap_const_lv32_1;
        } else {
            outputs_12 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_12 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_12_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_12_ap_vld = ap_const_logic_1;
    } else {
        outputs_12_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_13_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_13_ap_vld = ap_const_logic_1;
    } else {
        outputs_13_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_14() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_14 = or_ln42_2_13_fu_21061_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_14 = ap_const_lv32_1;
        } else {
            outputs_14 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_14 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_14_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_14_ap_vld = ap_const_logic_1;
    } else {
        outputs_14_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_15_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_15_ap_vld = ap_const_logic_1;
    } else {
        outputs_15_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_16() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_16 = or_ln42_2_15_fu_21156_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_16 = ap_const_lv32_1;
        } else {
            outputs_16 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_16 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_16_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_16_ap_vld = ap_const_logic_1;
    } else {
        outputs_16_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_17_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_17_ap_vld = ap_const_logic_1;
    } else {
        outputs_17_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_18() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_18 = or_ln42_2_17_fu_21251_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_18 = ap_const_lv32_1;
        } else {
            outputs_18 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_18 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_18_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_18_ap_vld = ap_const_logic_1;
    } else {
        outputs_18_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_19_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_19_ap_vld = ap_const_logic_1;
    } else {
        outputs_19_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_1_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_1_ap_vld = ap_const_logic_1;
    } else {
        outputs_1_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_2 = or_ln42_2_2_fu_20491_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_2 = ap_const_lv32_1;
        } else {
            outputs_2 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_2 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_20() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_20 = or_ln42_2_19_fu_21346_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_20 = ap_const_lv32_1;
        } else {
            outputs_20 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_20 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_20_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_20_ap_vld = ap_const_logic_1;
    } else {
        outputs_20_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_21_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_21_ap_vld = ap_const_logic_1;
    } else {
        outputs_21_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_22() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_22 = or_ln42_2_21_fu_21441_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_22 = ap_const_lv32_1;
        } else {
            outputs_22 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_22 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_22_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_22_ap_vld = ap_const_logic_1;
    } else {
        outputs_22_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_23_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_23_ap_vld = ap_const_logic_1;
    } else {
        outputs_23_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_2_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_2_ap_vld = ap_const_logic_1;
    } else {
        outputs_2_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_3_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_3_ap_vld = ap_const_logic_1;
    } else {
        outputs_3_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_4 = or_ln42_2_4_fu_20586_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_4 = ap_const_lv32_1;
        } else {
            outputs_4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_4_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_4_ap_vld = ap_const_logic_1;
    } else {
        outputs_4_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_5_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_5_ap_vld = ap_const_logic_1;
    } else {
        outputs_5_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_6() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_6 = or_ln42_2_6_fu_20681_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_6 = ap_const_lv32_1;
        } else {
            outputs_6 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_6 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_6_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_6_ap_vld = ap_const_logic_1;
    } else {
        outputs_6_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_7_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_7_ap_vld = ap_const_logic_1;
    } else {
        outputs_7_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_8() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            outputs_8 = or_ln42_2_8_fu_20776_p5.read();
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            outputs_8 = ap_const_lv32_1;
        } else {
            outputs_8 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        outputs_8 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_outputs_8_ap_vld() {
    if (((esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) || 
         (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())))) {
        outputs_8_ap_vld = ap_const_logic_1;
    } else {
        outputs_8_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_outputs_9_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        outputs_9_ap_vld = ap_const_logic_1;
    } else {
        outputs_9_ap_vld = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_select_ln301_100_fu_8040_p3() {
    select_ln301_100_fu_8040_p3 = (!tmp_91_fu_7740_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_91_fu_7740_p3.read()[0].to_bool())? select_ln321_280_fu_8032_p3.read(): cnt_7_3_V_13_fu_7865_p3.read());
}

void estimate_FR_2::thread_select_ln301_101_fu_8056_p3() {
    select_ln301_101_fu_8056_p3 = (!tmp_91_fu_7740_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_91_fu_7740_p3.read()[0].to_bool())? select_ln321_281_fu_8048_p3.read(): cnt_7_3_V_16_fu_7881_p3.read());
}

void estimate_FR_2::thread_select_ln301_102_fu_8064_p3() {
    select_ln301_102_fu_8064_p3 = (!tmp_91_fu_7740_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_91_fu_7740_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_7_3_V_20_fu_7913_p3.read());
}

void estimate_FR_2::thread_select_ln301_112_fu_8352_p3() {
    select_ln301_112_fu_8352_p3 = (!tmp_92_fu_8108_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_92_fu_8108_p3.read()[0].to_bool())? select_ln321_314_fu_8344_p3.read(): cnt_8_3_V_5_fu_8177_p3.read());
}

void estimate_FR_2::thread_select_ln301_113_fu_8384_p3() {
    select_ln301_113_fu_8384_p3 = (!tmp_92_fu_8108_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_92_fu_8108_p3.read()[0].to_bool())? select_ln321_317_fu_8376_p3.read(): cnt_8_3_V_9_fu_8209_p3.read());
}

void estimate_FR_2::thread_select_ln301_114_fu_8408_p3() {
    select_ln301_114_fu_8408_p3 = (!tmp_92_fu_8108_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_92_fu_8108_p3.read()[0].to_bool())? select_ln321_319_fu_8400_p3.read(): cnt_8_3_V_13_fu_8233_p3.read());
}

void estimate_FR_2::thread_select_ln301_115_fu_8424_p3() {
    select_ln301_115_fu_8424_p3 = (!tmp_92_fu_8108_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_92_fu_8108_p3.read()[0].to_bool())? select_ln321_320_fu_8416_p3.read(): cnt_8_3_V_16_fu_8249_p3.read());
}

void estimate_FR_2::thread_select_ln301_116_fu_8432_p3() {
    select_ln301_116_fu_8432_p3 = (!tmp_92_fu_8108_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_92_fu_8108_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_8_3_V_20_fu_8281_p3.read());
}

void estimate_FR_2::thread_select_ln301_126_fu_8720_p3() {
    select_ln301_126_fu_8720_p3 = (!tmp_93_fu_8476_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_93_fu_8476_p3.read()[0].to_bool())? select_ln321_353_fu_8712_p3.read(): cnt_9_3_V_5_fu_8545_p3.read());
}

void estimate_FR_2::thread_select_ln301_127_fu_8752_p3() {
    select_ln301_127_fu_8752_p3 = (!tmp_93_fu_8476_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_93_fu_8476_p3.read()[0].to_bool())? select_ln321_356_fu_8744_p3.read(): cnt_9_3_V_9_fu_8577_p3.read());
}

void estimate_FR_2::thread_select_ln301_128_fu_8776_p3() {
    select_ln301_128_fu_8776_p3 = (!tmp_93_fu_8476_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_93_fu_8476_p3.read()[0].to_bool())? select_ln321_358_fu_8768_p3.read(): cnt_9_3_V_13_fu_8601_p3.read());
}

void estimate_FR_2::thread_select_ln301_129_fu_8792_p3() {
    select_ln301_129_fu_8792_p3 = (!tmp_93_fu_8476_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_93_fu_8476_p3.read()[0].to_bool())? select_ln321_359_fu_8784_p3.read(): cnt_9_3_V_16_fu_8617_p3.read());
}

void estimate_FR_2::thread_select_ln301_130_fu_8800_p3() {
    select_ln301_130_fu_8800_p3 = (!tmp_93_fu_8476_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_93_fu_8476_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_9_3_V_20_fu_8649_p3.read());
}

void estimate_FR_2::thread_select_ln301_140_fu_9088_p3() {
    select_ln301_140_fu_9088_p3 = (!tmp_94_fu_8844_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_94_fu_8844_p3.read()[0].to_bool())? select_ln321_392_fu_9080_p3.read(): cnt_10_3_V_5_fu_8913_p3.read());
}

void estimate_FR_2::thread_select_ln301_141_fu_9120_p3() {
    select_ln301_141_fu_9120_p3 = (!tmp_94_fu_8844_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_94_fu_8844_p3.read()[0].to_bool())? select_ln321_395_fu_9112_p3.read(): cnt_10_3_V_9_fu_8945_p3.read());
}

void estimate_FR_2::thread_select_ln301_142_fu_9144_p3() {
    select_ln301_142_fu_9144_p3 = (!tmp_94_fu_8844_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_94_fu_8844_p3.read()[0].to_bool())? select_ln321_397_fu_9136_p3.read(): cnt_10_3_V_13_fu_8969_p3.read());
}

void estimate_FR_2::thread_select_ln301_143_fu_9160_p3() {
    select_ln301_143_fu_9160_p3 = (!tmp_94_fu_8844_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_94_fu_8844_p3.read()[0].to_bool())? select_ln321_398_fu_9152_p3.read(): cnt_10_3_V_16_fu_8985_p3.read());
}

void estimate_FR_2::thread_select_ln301_144_fu_9168_p3() {
    select_ln301_144_fu_9168_p3 = (!tmp_94_fu_8844_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_94_fu_8844_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_10_3_V_20_fu_9017_p3.read());
}

void estimate_FR_2::thread_select_ln301_14_fu_5776_p3() {
    select_ln301_14_fu_5776_p3 = (!tmp_85_fu_5532_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_85_fu_5532_p3.read()[0].to_bool())? select_ln321_41_fu_5768_p3.read(): cnt_1_3_V_5_fu_5601_p3.read());
}

void estimate_FR_2::thread_select_ln301_154_fu_9456_p3() {
    select_ln301_154_fu_9456_p3 = (!tmp_95_fu_9212_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_95_fu_9212_p3.read()[0].to_bool())? select_ln321_431_fu_9448_p3.read(): cnt_11_3_V_5_fu_9281_p3.read());
}

void estimate_FR_2::thread_select_ln301_155_fu_9488_p3() {
    select_ln301_155_fu_9488_p3 = (!tmp_95_fu_9212_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_95_fu_9212_p3.read()[0].to_bool())? select_ln321_434_fu_9480_p3.read(): cnt_11_3_V_9_fu_9313_p3.read());
}

void estimate_FR_2::thread_select_ln301_156_fu_9512_p3() {
    select_ln301_156_fu_9512_p3 = (!tmp_95_fu_9212_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_95_fu_9212_p3.read()[0].to_bool())? select_ln321_436_fu_9504_p3.read(): cnt_11_3_V_13_fu_9337_p3.read());
}

void estimate_FR_2::thread_select_ln301_157_fu_9528_p3() {
    select_ln301_157_fu_9528_p3 = (!tmp_95_fu_9212_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_95_fu_9212_p3.read()[0].to_bool())? select_ln321_437_fu_9520_p3.read(): cnt_11_3_V_16_fu_9353_p3.read());
}

void estimate_FR_2::thread_select_ln301_158_fu_9536_p3() {
    select_ln301_158_fu_9536_p3 = (!tmp_95_fu_9212_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_95_fu_9212_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_11_3_V_20_fu_9385_p3.read());
}

void estimate_FR_2::thread_select_ln301_15_fu_5808_p3() {
    select_ln301_15_fu_5808_p3 = (!tmp_85_fu_5532_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_85_fu_5532_p3.read()[0].to_bool())? select_ln321_44_fu_5800_p3.read(): cnt_1_3_V_9_fu_5633_p3.read());
}

void estimate_FR_2::thread_select_ln301_168_fu_9824_p3() {
    select_ln301_168_fu_9824_p3 = (!tmp_96_fu_9580_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_96_fu_9580_p3.read()[0].to_bool())? select_ln321_470_fu_9816_p3.read(): cnt_12_3_V_5_fu_9649_p3.read());
}

void estimate_FR_2::thread_select_ln301_169_fu_9856_p3() {
    select_ln301_169_fu_9856_p3 = (!tmp_96_fu_9580_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_96_fu_9580_p3.read()[0].to_bool())? select_ln321_473_fu_9848_p3.read(): cnt_12_3_V_9_fu_9681_p3.read());
}

void estimate_FR_2::thread_select_ln301_16_fu_5832_p3() {
    select_ln301_16_fu_5832_p3 = (!tmp_85_fu_5532_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_85_fu_5532_p3.read()[0].to_bool())? select_ln321_46_fu_5824_p3.read(): cnt_1_3_V_13_fu_5657_p3.read());
}

void estimate_FR_2::thread_select_ln301_170_fu_9880_p3() {
    select_ln301_170_fu_9880_p3 = (!tmp_96_fu_9580_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_96_fu_9580_p3.read()[0].to_bool())? select_ln321_475_fu_9872_p3.read(): cnt_12_3_V_13_fu_9705_p3.read());
}

void estimate_FR_2::thread_select_ln301_171_fu_9896_p3() {
    select_ln301_171_fu_9896_p3 = (!tmp_96_fu_9580_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_96_fu_9580_p3.read()[0].to_bool())? select_ln321_476_fu_9888_p3.read(): cnt_12_3_V_16_fu_9721_p3.read());
}

void estimate_FR_2::thread_select_ln301_172_fu_9904_p3() {
    select_ln301_172_fu_9904_p3 = (!tmp_96_fu_9580_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_96_fu_9580_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_12_3_V_20_fu_9753_p3.read());
}

void estimate_FR_2::thread_select_ln301_17_fu_5848_p3() {
    select_ln301_17_fu_5848_p3 = (!tmp_85_fu_5532_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_85_fu_5532_p3.read()[0].to_bool())? select_ln321_47_fu_5840_p3.read(): cnt_1_3_V_16_fu_5673_p3.read());
}

void estimate_FR_2::thread_select_ln301_182_fu_10192_p3() {
    select_ln301_182_fu_10192_p3 = (!tmp_97_fu_9948_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_97_fu_9948_p3.read()[0].to_bool())? select_ln321_509_fu_10184_p3.read(): cnt_13_3_V_5_fu_10017_p3.read());
}

void estimate_FR_2::thread_select_ln301_183_fu_10224_p3() {
    select_ln301_183_fu_10224_p3 = (!tmp_97_fu_9948_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_97_fu_9948_p3.read()[0].to_bool())? select_ln321_512_fu_10216_p3.read(): cnt_13_3_V_9_fu_10049_p3.read());
}

void estimate_FR_2::thread_select_ln301_184_fu_10248_p3() {
    select_ln301_184_fu_10248_p3 = (!tmp_97_fu_9948_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_97_fu_9948_p3.read()[0].to_bool())? select_ln321_514_fu_10240_p3.read(): cnt_13_3_V_13_fu_10073_p3.read());
}

void estimate_FR_2::thread_select_ln301_185_fu_10264_p3() {
    select_ln301_185_fu_10264_p3 = (!tmp_97_fu_9948_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_97_fu_9948_p3.read()[0].to_bool())? select_ln321_515_fu_10256_p3.read(): cnt_13_3_V_16_fu_10089_p3.read());
}

void estimate_FR_2::thread_select_ln301_186_fu_10272_p3() {
    select_ln301_186_fu_10272_p3 = (!tmp_97_fu_9948_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_97_fu_9948_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_13_3_V_20_fu_10121_p3.read());
}

void estimate_FR_2::thread_select_ln301_18_fu_5856_p3() {
    select_ln301_18_fu_5856_p3 = (!tmp_85_fu_5532_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_85_fu_5532_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_1_3_V_20_fu_5705_p3.read());
}

void estimate_FR_2::thread_select_ln301_196_fu_10560_p3() {
    select_ln301_196_fu_10560_p3 = (!tmp_98_fu_10316_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_98_fu_10316_p3.read()[0].to_bool())? select_ln321_548_fu_10552_p3.read(): cnt_14_3_V_5_fu_10385_p3.read());
}

void estimate_FR_2::thread_select_ln301_197_fu_10592_p3() {
    select_ln301_197_fu_10592_p3 = (!tmp_98_fu_10316_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_98_fu_10316_p3.read()[0].to_bool())? select_ln321_551_fu_10584_p3.read(): cnt_14_3_V_9_fu_10417_p3.read());
}

void estimate_FR_2::thread_select_ln301_198_fu_10616_p3() {
    select_ln301_198_fu_10616_p3 = (!tmp_98_fu_10316_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_98_fu_10316_p3.read()[0].to_bool())? select_ln321_553_fu_10608_p3.read(): cnt_14_3_V_13_fu_10441_p3.read());
}

void estimate_FR_2::thread_select_ln301_199_fu_10632_p3() {
    select_ln301_199_fu_10632_p3 = (!tmp_98_fu_10316_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_98_fu_10316_p3.read()[0].to_bool())? select_ln321_554_fu_10624_p3.read(): cnt_14_3_V_16_fu_10457_p3.read());
}

void estimate_FR_2::thread_select_ln301_1_fu_5440_p3() {
    select_ln301_1_fu_5440_p3 = (!tmp_41_fu_5149_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_41_fu_5149_p3.read()[0].to_bool())? select_ln321_5_fu_5432_p3.read(): cnt_0_3_V_9_fu_5265_p3.read());
}

void estimate_FR_2::thread_select_ln301_200_fu_10640_p3() {
    select_ln301_200_fu_10640_p3 = (!tmp_98_fu_10316_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_98_fu_10316_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_14_3_V_20_fu_10489_p3.read());
}

void estimate_FR_2::thread_select_ln301_210_fu_10928_p3() {
    select_ln301_210_fu_10928_p3 = (!tmp_99_fu_10684_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_99_fu_10684_p3.read()[0].to_bool())? select_ln321_587_fu_10920_p3.read(): cnt_15_3_V_5_fu_10753_p3.read());
}

void estimate_FR_2::thread_select_ln301_211_fu_10960_p3() {
    select_ln301_211_fu_10960_p3 = (!tmp_99_fu_10684_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_99_fu_10684_p3.read()[0].to_bool())? select_ln321_590_fu_10952_p3.read(): cnt_15_3_V_9_fu_10785_p3.read());
}

void estimate_FR_2::thread_select_ln301_212_fu_10984_p3() {
    select_ln301_212_fu_10984_p3 = (!tmp_99_fu_10684_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_99_fu_10684_p3.read()[0].to_bool())? select_ln321_592_fu_10976_p3.read(): cnt_15_3_V_13_fu_10809_p3.read());
}

void estimate_FR_2::thread_select_ln301_213_fu_11000_p3() {
    select_ln301_213_fu_11000_p3 = (!tmp_99_fu_10684_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_99_fu_10684_p3.read()[0].to_bool())? select_ln321_593_fu_10992_p3.read(): cnt_15_3_V_16_fu_10825_p3.read());
}

void estimate_FR_2::thread_select_ln301_214_fu_11008_p3() {
    select_ln301_214_fu_11008_p3 = (!tmp_99_fu_10684_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_99_fu_10684_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_15_3_V_20_fu_10857_p3.read());
}

void estimate_FR_2::thread_select_ln301_224_fu_11296_p3() {
    select_ln301_224_fu_11296_p3 = (!tmp_100_fu_11052_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_100_fu_11052_p3.read()[0].to_bool())? select_ln321_626_fu_11288_p3.read(): cnt_16_3_V_5_fu_11121_p3.read());
}

void estimate_FR_2::thread_select_ln301_225_fu_11328_p3() {
    select_ln301_225_fu_11328_p3 = (!tmp_100_fu_11052_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_100_fu_11052_p3.read()[0].to_bool())? select_ln321_629_fu_11320_p3.read(): cnt_16_3_V_9_fu_11153_p3.read());
}

void estimate_FR_2::thread_select_ln301_226_fu_11352_p3() {
    select_ln301_226_fu_11352_p3 = (!tmp_100_fu_11052_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_100_fu_11052_p3.read()[0].to_bool())? select_ln321_631_fu_11344_p3.read(): cnt_16_3_V_13_fu_11177_p3.read());
}

void estimate_FR_2::thread_select_ln301_227_fu_11368_p3() {
    select_ln301_227_fu_11368_p3 = (!tmp_100_fu_11052_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_100_fu_11052_p3.read()[0].to_bool())? select_ln321_632_fu_11360_p3.read(): cnt_16_3_V_16_fu_11193_p3.read());
}

void estimate_FR_2::thread_select_ln301_228_fu_11376_p3() {
    select_ln301_228_fu_11376_p3 = (!tmp_100_fu_11052_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_100_fu_11052_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_16_3_V_20_fu_11225_p3.read());
}

void estimate_FR_2::thread_select_ln301_238_fu_11664_p3() {
    select_ln301_238_fu_11664_p3 = (!tmp_101_fu_11420_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_101_fu_11420_p3.read()[0].to_bool())? select_ln321_665_fu_11656_p3.read(): cnt_17_3_V_5_fu_11489_p3.read());
}

void estimate_FR_2::thread_select_ln301_239_fu_11696_p3() {
    select_ln301_239_fu_11696_p3 = (!tmp_101_fu_11420_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_101_fu_11420_p3.read()[0].to_bool())? select_ln321_668_fu_11688_p3.read(): cnt_17_3_V_9_fu_11521_p3.read());
}

void estimate_FR_2::thread_select_ln301_240_fu_11720_p3() {
    select_ln301_240_fu_11720_p3 = (!tmp_101_fu_11420_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_101_fu_11420_p3.read()[0].to_bool())? select_ln321_670_fu_11712_p3.read(): cnt_17_3_V_13_fu_11545_p3.read());
}

void estimate_FR_2::thread_select_ln301_241_fu_11736_p3() {
    select_ln301_241_fu_11736_p3 = (!tmp_101_fu_11420_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_101_fu_11420_p3.read()[0].to_bool())? select_ln321_671_fu_11728_p3.read(): cnt_17_3_V_16_fu_11561_p3.read());
}

void estimate_FR_2::thread_select_ln301_242_fu_11744_p3() {
    select_ln301_242_fu_11744_p3 = (!tmp_101_fu_11420_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_101_fu_11420_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_17_3_V_20_fu_11593_p3.read());
}

void estimate_FR_2::thread_select_ln301_252_fu_12032_p3() {
    select_ln301_252_fu_12032_p3 = (!tmp_102_fu_11788_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_102_fu_11788_p3.read()[0].to_bool())? select_ln321_704_fu_12024_p3.read(): cnt_18_3_V_5_fu_11857_p3.read());
}

void estimate_FR_2::thread_select_ln301_253_fu_12064_p3() {
    select_ln301_253_fu_12064_p3 = (!tmp_102_fu_11788_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_102_fu_11788_p3.read()[0].to_bool())? select_ln321_707_fu_12056_p3.read(): cnt_18_3_V_9_fu_11889_p3.read());
}

void estimate_FR_2::thread_select_ln301_254_fu_12088_p3() {
    select_ln301_254_fu_12088_p3 = (!tmp_102_fu_11788_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_102_fu_11788_p3.read()[0].to_bool())? select_ln321_709_fu_12080_p3.read(): cnt_18_3_V_13_fu_11913_p3.read());
}

void estimate_FR_2::thread_select_ln301_255_fu_12104_p3() {
    select_ln301_255_fu_12104_p3 = (!tmp_102_fu_11788_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_102_fu_11788_p3.read()[0].to_bool())? select_ln321_710_fu_12096_p3.read(): cnt_18_3_V_16_fu_11929_p3.read());
}

void estimate_FR_2::thread_select_ln301_256_fu_12112_p3() {
    select_ln301_256_fu_12112_p3 = (!tmp_102_fu_11788_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_102_fu_11788_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_18_3_V_20_fu_11961_p3.read());
}

void estimate_FR_2::thread_select_ln301_266_fu_12400_p3() {
    select_ln301_266_fu_12400_p3 = (!tmp_103_fu_12156_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_103_fu_12156_p3.read()[0].to_bool())? select_ln321_743_fu_12392_p3.read(): cnt_19_3_V_5_fu_12225_p3.read());
}

void estimate_FR_2::thread_select_ln301_267_fu_12432_p3() {
    select_ln301_267_fu_12432_p3 = (!tmp_103_fu_12156_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_103_fu_12156_p3.read()[0].to_bool())? select_ln321_746_fu_12424_p3.read(): cnt_19_3_V_9_fu_12257_p3.read());
}

void estimate_FR_2::thread_select_ln301_268_fu_12456_p3() {
    select_ln301_268_fu_12456_p3 = (!tmp_103_fu_12156_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_103_fu_12156_p3.read()[0].to_bool())? select_ln321_748_fu_12448_p3.read(): cnt_19_3_V_13_fu_12281_p3.read());
}

void estimate_FR_2::thread_select_ln301_269_fu_12472_p3() {
    select_ln301_269_fu_12472_p3 = (!tmp_103_fu_12156_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_103_fu_12156_p3.read()[0].to_bool())? select_ln321_749_fu_12464_p3.read(): cnt_19_3_V_16_fu_12297_p3.read());
}

void estimate_FR_2::thread_select_ln301_270_fu_12480_p3() {
    select_ln301_270_fu_12480_p3 = (!tmp_103_fu_12156_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_103_fu_12156_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_19_3_V_20_fu_12329_p3.read());
}

void estimate_FR_2::thread_select_ln301_280_fu_12768_p3() {
    select_ln301_280_fu_12768_p3 = (!tmp_104_fu_12524_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_104_fu_12524_p3.read()[0].to_bool())? select_ln321_782_fu_12760_p3.read(): cnt_20_3_V_5_fu_12593_p3.read());
}

void estimate_FR_2::thread_select_ln301_281_fu_12800_p3() {
    select_ln301_281_fu_12800_p3 = (!tmp_104_fu_12524_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_104_fu_12524_p3.read()[0].to_bool())? select_ln321_785_fu_12792_p3.read(): cnt_20_3_V_9_fu_12625_p3.read());
}

void estimate_FR_2::thread_select_ln301_282_fu_12824_p3() {
    select_ln301_282_fu_12824_p3 = (!tmp_104_fu_12524_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_104_fu_12524_p3.read()[0].to_bool())? select_ln321_787_fu_12816_p3.read(): cnt_20_3_V_13_fu_12649_p3.read());
}

void estimate_FR_2::thread_select_ln301_283_fu_12840_p3() {
    select_ln301_283_fu_12840_p3 = (!tmp_104_fu_12524_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_104_fu_12524_p3.read()[0].to_bool())? select_ln321_788_fu_12832_p3.read(): cnt_20_3_V_16_fu_12665_p3.read());
}

void estimate_FR_2::thread_select_ln301_284_fu_12848_p3() {
    select_ln301_284_fu_12848_p3 = (!tmp_104_fu_12524_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_104_fu_12524_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_20_3_V_20_fu_12697_p3.read());
}

void estimate_FR_2::thread_select_ln301_28_fu_6144_p3() {
    select_ln301_28_fu_6144_p3 = (!tmp_86_fu_5900_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_86_fu_5900_p3.read()[0].to_bool())? select_ln321_80_fu_6136_p3.read(): cnt_2_3_V_5_fu_5969_p3.read());
}

void estimate_FR_2::thread_select_ln301_294_fu_13136_p3() {
    select_ln301_294_fu_13136_p3 = (!tmp_105_fu_12892_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_105_fu_12892_p3.read()[0].to_bool())? select_ln321_821_fu_13128_p3.read(): cnt_21_3_V_5_fu_12961_p3.read());
}

void estimate_FR_2::thread_select_ln301_295_fu_13168_p3() {
    select_ln301_295_fu_13168_p3 = (!tmp_105_fu_12892_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_105_fu_12892_p3.read()[0].to_bool())? select_ln321_824_fu_13160_p3.read(): cnt_21_3_V_9_fu_12993_p3.read());
}

void estimate_FR_2::thread_select_ln301_296_fu_13192_p3() {
    select_ln301_296_fu_13192_p3 = (!tmp_105_fu_12892_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_105_fu_12892_p3.read()[0].to_bool())? select_ln321_826_fu_13184_p3.read(): cnt_21_3_V_13_fu_13017_p3.read());
}

void estimate_FR_2::thread_select_ln301_297_fu_13208_p3() {
    select_ln301_297_fu_13208_p3 = (!tmp_105_fu_12892_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_105_fu_12892_p3.read()[0].to_bool())? select_ln321_827_fu_13200_p3.read(): cnt_21_3_V_16_fu_13033_p3.read());
}

void estimate_FR_2::thread_select_ln301_298_fu_13216_p3() {
    select_ln301_298_fu_13216_p3 = (!tmp_105_fu_12892_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_105_fu_12892_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_21_3_V_20_fu_13065_p3.read());
}

void estimate_FR_2::thread_select_ln301_29_fu_6176_p3() {
    select_ln301_29_fu_6176_p3 = (!tmp_86_fu_5900_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_86_fu_5900_p3.read()[0].to_bool())? select_ln321_83_fu_6168_p3.read(): cnt_2_3_V_9_fu_6001_p3.read());
}

void estimate_FR_2::thread_select_ln301_2_fu_5464_p3() {
    select_ln301_2_fu_5464_p3 = (!tmp_41_fu_5149_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_41_fu_5149_p3.read()[0].to_bool())? select_ln321_7_fu_5456_p3.read(): cnt_0_3_V_13_fu_5289_p3.read());
}

void estimate_FR_2::thread_select_ln301_308_fu_13504_p3() {
    select_ln301_308_fu_13504_p3 = (!tmp_106_fu_13260_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_106_fu_13260_p3.read()[0].to_bool())? select_ln321_860_fu_13496_p3.read(): cnt_22_3_V_5_fu_13329_p3.read());
}

void estimate_FR_2::thread_select_ln301_309_fu_13536_p3() {
    select_ln301_309_fu_13536_p3 = (!tmp_106_fu_13260_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_106_fu_13260_p3.read()[0].to_bool())? select_ln321_863_fu_13528_p3.read(): cnt_22_3_V_9_fu_13361_p3.read());
}

void estimate_FR_2::thread_select_ln301_30_fu_6200_p3() {
    select_ln301_30_fu_6200_p3 = (!tmp_86_fu_5900_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_86_fu_5900_p3.read()[0].to_bool())? select_ln321_85_fu_6192_p3.read(): cnt_2_3_V_13_fu_6025_p3.read());
}

void estimate_FR_2::thread_select_ln301_310_fu_13560_p3() {
    select_ln301_310_fu_13560_p3 = (!tmp_106_fu_13260_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_106_fu_13260_p3.read()[0].to_bool())? select_ln321_865_fu_13552_p3.read(): cnt_22_3_V_13_fu_13385_p3.read());
}

void estimate_FR_2::thread_select_ln301_311_fu_13576_p3() {
    select_ln301_311_fu_13576_p3 = (!tmp_106_fu_13260_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_106_fu_13260_p3.read()[0].to_bool())? select_ln321_866_fu_13568_p3.read(): cnt_22_3_V_16_fu_13401_p3.read());
}

void estimate_FR_2::thread_select_ln301_312_fu_13584_p3() {
    select_ln301_312_fu_13584_p3 = (!tmp_106_fu_13260_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_106_fu_13260_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_22_3_V_20_fu_13433_p3.read());
}

void estimate_FR_2::thread_select_ln301_31_fu_6216_p3() {
    select_ln301_31_fu_6216_p3 = (!tmp_86_fu_5900_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_86_fu_5900_p3.read()[0].to_bool())? select_ln321_86_fu_6208_p3.read(): cnt_2_3_V_16_fu_6041_p3.read());
}

void estimate_FR_2::thread_select_ln301_322_fu_13872_p3() {
    select_ln301_322_fu_13872_p3 = (!tmp_107_fu_13628_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_107_fu_13628_p3.read()[0].to_bool())? select_ln321_899_fu_13864_p3.read(): cnt_23_3_V_5_fu_13697_p3.read());
}

void estimate_FR_2::thread_select_ln301_323_fu_13904_p3() {
    select_ln301_323_fu_13904_p3 = (!tmp_107_fu_13628_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_107_fu_13628_p3.read()[0].to_bool())? select_ln321_902_fu_13896_p3.read(): cnt_23_3_V_9_fu_13729_p3.read());
}

void estimate_FR_2::thread_select_ln301_324_fu_13928_p3() {
    select_ln301_324_fu_13928_p3 = (!tmp_107_fu_13628_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_107_fu_13628_p3.read()[0].to_bool())? select_ln321_904_fu_13920_p3.read(): cnt_23_3_V_13_fu_13753_p3.read());
}

void estimate_FR_2::thread_select_ln301_325_fu_13944_p3() {
    select_ln301_325_fu_13944_p3 = (!tmp_107_fu_13628_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_107_fu_13628_p3.read()[0].to_bool())? select_ln321_905_fu_13936_p3.read(): cnt_23_3_V_16_fu_13769_p3.read());
}

void estimate_FR_2::thread_select_ln301_326_fu_13952_p3() {
    select_ln301_326_fu_13952_p3 = (!tmp_107_fu_13628_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_107_fu_13628_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_23_3_V_20_fu_13801_p3.read());
}

void estimate_FR_2::thread_select_ln301_32_fu_6224_p3() {
    select_ln301_32_fu_6224_p3 = (!tmp_86_fu_5900_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_86_fu_5900_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_2_3_V_20_fu_6073_p3.read());
}

void estimate_FR_2::thread_select_ln301_3_fu_5480_p3() {
    select_ln301_3_fu_5480_p3 = (!tmp_41_fu_5149_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_41_fu_5149_p3.read()[0].to_bool())? select_ln321_8_fu_5472_p3.read(): cnt_0_3_V_16_fu_5305_p3.read());
}

void estimate_FR_2::thread_select_ln301_42_fu_6512_p3() {
    select_ln301_42_fu_6512_p3 = (!tmp_87_fu_6268_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_87_fu_6268_p3.read()[0].to_bool())? select_ln321_119_fu_6504_p3.read(): cnt_3_3_V_5_fu_6337_p3.read());
}

void estimate_FR_2::thread_select_ln301_43_fu_6544_p3() {
    select_ln301_43_fu_6544_p3 = (!tmp_87_fu_6268_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_87_fu_6268_p3.read()[0].to_bool())? select_ln321_122_fu_6536_p3.read(): cnt_3_3_V_9_fu_6369_p3.read());
}

void estimate_FR_2::thread_select_ln301_44_fu_6568_p3() {
    select_ln301_44_fu_6568_p3 = (!tmp_87_fu_6268_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_87_fu_6268_p3.read()[0].to_bool())? select_ln321_124_fu_6560_p3.read(): cnt_3_3_V_13_fu_6393_p3.read());
}

void estimate_FR_2::thread_select_ln301_45_fu_6584_p3() {
    select_ln301_45_fu_6584_p3 = (!tmp_87_fu_6268_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_87_fu_6268_p3.read()[0].to_bool())? select_ln321_125_fu_6576_p3.read(): cnt_3_3_V_16_fu_6409_p3.read());
}

void estimate_FR_2::thread_select_ln301_46_fu_6592_p3() {
    select_ln301_46_fu_6592_p3 = (!tmp_87_fu_6268_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_87_fu_6268_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_3_3_V_20_fu_6441_p3.read());
}

void estimate_FR_2::thread_select_ln301_4_fu_5488_p3() {
    select_ln301_4_fu_5488_p3 = (!tmp_41_fu_5149_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_41_fu_5149_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_0_3_V_20_fu_5337_p3.read());
}

void estimate_FR_2::thread_select_ln301_56_fu_6880_p3() {
    select_ln301_56_fu_6880_p3 = (!tmp_88_fu_6636_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_88_fu_6636_p3.read()[0].to_bool())? select_ln321_158_fu_6872_p3.read(): cnt_4_3_V_5_fu_6705_p3.read());
}

void estimate_FR_2::thread_select_ln301_57_fu_6912_p3() {
    select_ln301_57_fu_6912_p3 = (!tmp_88_fu_6636_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_88_fu_6636_p3.read()[0].to_bool())? select_ln321_161_fu_6904_p3.read(): cnt_4_3_V_9_fu_6737_p3.read());
}

void estimate_FR_2::thread_select_ln301_58_fu_6936_p3() {
    select_ln301_58_fu_6936_p3 = (!tmp_88_fu_6636_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_88_fu_6636_p3.read()[0].to_bool())? select_ln321_163_fu_6928_p3.read(): cnt_4_3_V_13_fu_6761_p3.read());
}

void estimate_FR_2::thread_select_ln301_59_fu_6952_p3() {
    select_ln301_59_fu_6952_p3 = (!tmp_88_fu_6636_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_88_fu_6636_p3.read()[0].to_bool())? select_ln321_164_fu_6944_p3.read(): cnt_4_3_V_16_fu_6777_p3.read());
}

void estimate_FR_2::thread_select_ln301_60_fu_6960_p3() {
    select_ln301_60_fu_6960_p3 = (!tmp_88_fu_6636_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_88_fu_6636_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_4_3_V_20_fu_6809_p3.read());
}

void estimate_FR_2::thread_select_ln301_70_fu_7248_p3() {
    select_ln301_70_fu_7248_p3 = (!tmp_89_fu_7004_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_89_fu_7004_p3.read()[0].to_bool())? select_ln321_197_fu_7240_p3.read(): cnt_5_3_V_5_fu_7073_p3.read());
}

void estimate_FR_2::thread_select_ln301_71_fu_7280_p3() {
    select_ln301_71_fu_7280_p3 = (!tmp_89_fu_7004_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_89_fu_7004_p3.read()[0].to_bool())? select_ln321_200_fu_7272_p3.read(): cnt_5_3_V_9_fu_7105_p3.read());
}

void estimate_FR_2::thread_select_ln301_72_fu_7304_p3() {
    select_ln301_72_fu_7304_p3 = (!tmp_89_fu_7004_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_89_fu_7004_p3.read()[0].to_bool())? select_ln321_202_fu_7296_p3.read(): cnt_5_3_V_13_fu_7129_p3.read());
}

void estimate_FR_2::thread_select_ln301_73_fu_7320_p3() {
    select_ln301_73_fu_7320_p3 = (!tmp_89_fu_7004_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_89_fu_7004_p3.read()[0].to_bool())? select_ln321_203_fu_7312_p3.read(): cnt_5_3_V_16_fu_7145_p3.read());
}

void estimate_FR_2::thread_select_ln301_74_fu_7328_p3() {
    select_ln301_74_fu_7328_p3 = (!tmp_89_fu_7004_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_89_fu_7004_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_5_3_V_20_fu_7177_p3.read());
}

void estimate_FR_2::thread_select_ln301_84_fu_7616_p3() {
    select_ln301_84_fu_7616_p3 = (!tmp_90_fu_7372_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_90_fu_7372_p3.read()[0].to_bool())? select_ln321_236_fu_7608_p3.read(): cnt_6_3_V_5_fu_7441_p3.read());
}

void estimate_FR_2::thread_select_ln301_85_fu_7648_p3() {
    select_ln301_85_fu_7648_p3 = (!tmp_90_fu_7372_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_90_fu_7372_p3.read()[0].to_bool())? select_ln321_239_fu_7640_p3.read(): cnt_6_3_V_9_fu_7473_p3.read());
}

void estimate_FR_2::thread_select_ln301_86_fu_7672_p3() {
    select_ln301_86_fu_7672_p3 = (!tmp_90_fu_7372_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_90_fu_7372_p3.read()[0].to_bool())? select_ln321_241_fu_7664_p3.read(): cnt_6_3_V_13_fu_7497_p3.read());
}

void estimate_FR_2::thread_select_ln301_87_fu_7688_p3() {
    select_ln301_87_fu_7688_p3 = (!tmp_90_fu_7372_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_90_fu_7372_p3.read()[0].to_bool())? select_ln321_242_fu_7680_p3.read(): cnt_6_3_V_16_fu_7513_p3.read());
}

void estimate_FR_2::thread_select_ln301_88_fu_7696_p3() {
    select_ln301_88_fu_7696_p3 = (!tmp_90_fu_7372_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_90_fu_7372_p3.read()[0].to_bool())? ap_const_lv6_0: cnt_6_3_V_20_fu_7545_p3.read());
}

void estimate_FR_2::thread_select_ln301_98_fu_7984_p3() {
    select_ln301_98_fu_7984_p3 = (!tmp_91_fu_7740_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_91_fu_7740_p3.read()[0].to_bool())? select_ln321_275_fu_7976_p3.read(): cnt_7_3_V_5_fu_7809_p3.read());
}

void estimate_FR_2::thread_select_ln301_99_fu_8016_p3() {
    select_ln301_99_fu_8016_p3 = (!tmp_91_fu_7740_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_91_fu_7740_p3.read()[0].to_bool())? select_ln321_278_fu_8008_p3.read(): cnt_7_3_V_9_fu_7841_p3.read());
}

void estimate_FR_2::thread_select_ln301_fu_5408_p3() {
    select_ln301_fu_5408_p3 = (!tmp_41_fu_5149_p3.read()[0].is_01())? sc_lv<6>(): ((tmp_41_fu_5149_p3.read()[0].to_bool())? select_ln321_2_fu_5400_p3.read(): cnt_0_3_V_5_fu_5233_p3.read());
}

void estimate_FR_2::thread_select_ln321_10_fu_5504_p3() {
    select_ln321_10_fu_5504_p3 = (!and_ln321_1_fu_5380_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_1_fu_5380_p2.read()[0].to_bool())? cnt_0_3_V_20_fu_5337_p3.read(): select_ln321_9_fu_5496_p3.read());
}

void estimate_FR_2::thread_select_ln321_117_fu_6476_p3() {
    select_ln321_117_fu_6476_p3 = (!and_ln321_9_fu_6470_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_9_fu_6470_p2.read()[0].to_bool())? cnt_3_3_V_5_fu_6337_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_118_fu_6490_p3() {
    select_ln321_118_fu_6490_p3 = (!and_ln321_10_fu_6484_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_10_fu_6484_p2.read()[0].to_bool())? cnt_3_3_V_5_fu_6337_p3.read(): select_ln321_117_fu_6476_p3.read());
}

void estimate_FR_2::thread_select_ln321_119_fu_6504_p3() {
    select_ln321_119_fu_6504_p3 = (!and_ln321_11_fu_6498_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_11_fu_6498_p2.read()[0].to_bool())? cnt_3_3_V_5_fu_6337_p3.read(): select_ln321_118_fu_6490_p3.read());
}

void estimate_FR_2::thread_select_ln321_11_fu_5512_p3() {
    select_ln321_11_fu_5512_p3 = (!and_ln321_2_fu_5394_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_2_fu_5394_p2.read()[0].to_bool())? cnt_0_3_V_20_fu_5337_p3.read(): select_ln321_10_fu_5504_p3.read());
}

void estimate_FR_2::thread_select_ln321_120_fu_6520_p3() {
    select_ln321_120_fu_6520_p3 = (!and_ln321_9_fu_6470_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_9_fu_6470_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_3_3_V_9_fu_6369_p3.read());
}

void estimate_FR_2::thread_select_ln321_121_fu_6528_p3() {
    select_ln321_121_fu_6528_p3 = (!and_ln321_10_fu_6484_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_10_fu_6484_p2.read()[0].to_bool())? cnt_3_3_V_9_fu_6369_p3.read(): select_ln321_120_fu_6520_p3.read());
}

void estimate_FR_2::thread_select_ln321_122_fu_6536_p3() {
    select_ln321_122_fu_6536_p3 = (!and_ln321_11_fu_6498_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_11_fu_6498_p2.read()[0].to_bool())? cnt_3_3_V_9_fu_6369_p3.read(): select_ln321_121_fu_6528_p3.read());
}

void estimate_FR_2::thread_select_ln321_123_fu_6552_p3() {
    select_ln321_123_fu_6552_p3 = (!and_ln321_10_fu_6484_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_10_fu_6484_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_3_3_V_13_fu_6393_p3.read());
}

void estimate_FR_2::thread_select_ln321_124_fu_6560_p3() {
    select_ln321_124_fu_6560_p3 = (!and_ln321_11_fu_6498_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_11_fu_6498_p2.read()[0].to_bool())? cnt_3_3_V_13_fu_6393_p3.read(): select_ln321_123_fu_6552_p3.read());
}

void estimate_FR_2::thread_select_ln321_125_fu_6576_p3() {
    select_ln321_125_fu_6576_p3 = (!and_ln321_11_fu_6498_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_11_fu_6498_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_3_3_V_16_fu_6409_p3.read());
}

void estimate_FR_2::thread_select_ln321_126_fu_6600_p3() {
    select_ln321_126_fu_6600_p3 = (!and_ln321_9_fu_6470_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_9_fu_6470_p2.read()[0].to_bool())? cnt_3_3_V_20_fu_6441_p3.read(): select_ln301_46_fu_6592_p3.read());
}

void estimate_FR_2::thread_select_ln321_127_fu_6608_p3() {
    select_ln321_127_fu_6608_p3 = (!and_ln321_10_fu_6484_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_10_fu_6484_p2.read()[0].to_bool())? cnt_3_3_V_20_fu_6441_p3.read(): select_ln321_126_fu_6600_p3.read());
}

void estimate_FR_2::thread_select_ln321_128_fu_6616_p3() {
    select_ln321_128_fu_6616_p3 = (!and_ln321_11_fu_6498_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_11_fu_6498_p2.read()[0].to_bool())? cnt_3_3_V_20_fu_6441_p3.read(): select_ln321_127_fu_6608_p3.read());
}

void estimate_FR_2::thread_select_ln321_129_fu_14905_p3() {
    select_ln321_129_fu_14905_p3 = (!and_ln321_9_reg_22808.read()[0].is_01())? sc_lv<6>(): ((and_ln321_9_reg_22808.read()[0].to_bool())? ap_const_lv6_0: cnt_3_3_V_24_fu_14800_p3.read());
}

void estimate_FR_2::thread_select_ln321_12_fu_14110_p3() {
    select_ln321_12_fu_14110_p3 = (!and_ln321_reg_22520.read()[0].is_01())? sc_lv<6>(): ((and_ln321_reg_22520.read()[0].to_bool())? ap_const_lv6_0: cnt_0_3_V_24_fu_14005_p3.read());
}

void estimate_FR_2::thread_select_ln321_130_fu_14912_p3() {
    select_ln321_130_fu_14912_p3 = (!and_ln321_10_reg_22817.read()[0].is_01())? sc_lv<6>(): ((and_ln321_10_reg_22817.read()[0].to_bool())? cnt_3_3_V_24_fu_14800_p3.read(): select_ln321_129_fu_14905_p3.read());
}

void estimate_FR_2::thread_select_ln321_131_fu_14919_p3() {
    select_ln321_131_fu_14919_p3 = (!and_ln321_11_reg_22827.read()[0].is_01())? sc_lv<6>(): ((and_ln321_11_reg_22827.read()[0].to_bool())? cnt_3_3_V_24_fu_14800_p3.read(): select_ln321_130_fu_14912_p3.read());
}

void estimate_FR_2::thread_select_ln321_132_fu_14926_p3() {
    select_ln321_132_fu_14926_p3 = (!and_ln321_10_reg_22817.read()[0].is_01())? sc_lv<6>(): ((and_ln321_10_reg_22817.read()[0].to_bool())? ap_const_lv6_0: cnt_3_3_V_27_fu_14813_p3.read());
}

void estimate_FR_2::thread_select_ln321_133_fu_14933_p3() {
    select_ln321_133_fu_14933_p3 = (!and_ln321_11_reg_22827.read()[0].is_01())? sc_lv<6>(): ((and_ln321_11_reg_22827.read()[0].to_bool())? cnt_3_3_V_27_fu_14813_p3.read(): select_ln321_132_fu_14926_p3.read());
}

void estimate_FR_2::thread_select_ln321_134_fu_6624_p3() {
    select_ln321_134_fu_6624_p3 = (!and_ln321_11_fu_6498_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_11_fu_6498_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_3_3_V_29_fu_6449_p3.read());
}

void estimate_FR_2::thread_select_ln321_13_fu_14117_p3() {
    select_ln321_13_fu_14117_p3 = (!and_ln321_1_reg_22529.read()[0].is_01())? sc_lv<6>(): ((and_ln321_1_reg_22529.read()[0].to_bool())? cnt_0_3_V_24_fu_14005_p3.read(): select_ln321_12_fu_14110_p3.read());
}

void estimate_FR_2::thread_select_ln321_14_fu_14124_p3() {
    select_ln321_14_fu_14124_p3 = (!and_ln321_2_reg_22539.read()[0].is_01())? sc_lv<6>(): ((and_ln321_2_reg_22539.read()[0].to_bool())? cnt_0_3_V_24_fu_14005_p3.read(): select_ln321_13_fu_14117_p3.read());
}

void estimate_FR_2::thread_select_ln321_156_fu_6844_p3() {
    select_ln321_156_fu_6844_p3 = (!and_ln321_12_fu_6838_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_12_fu_6838_p2.read()[0].to_bool())? cnt_4_3_V_5_fu_6705_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_157_fu_6858_p3() {
    select_ln321_157_fu_6858_p3 = (!and_ln321_13_fu_6852_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_13_fu_6852_p2.read()[0].to_bool())? cnt_4_3_V_5_fu_6705_p3.read(): select_ln321_156_fu_6844_p3.read());
}

void estimate_FR_2::thread_select_ln321_158_fu_6872_p3() {
    select_ln321_158_fu_6872_p3 = (!and_ln321_14_fu_6866_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_14_fu_6866_p2.read()[0].to_bool())? cnt_4_3_V_5_fu_6705_p3.read(): select_ln321_157_fu_6858_p3.read());
}

void estimate_FR_2::thread_select_ln321_159_fu_6888_p3() {
    select_ln321_159_fu_6888_p3 = (!and_ln321_12_fu_6838_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_12_fu_6838_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_4_3_V_9_fu_6737_p3.read());
}

void estimate_FR_2::thread_select_ln321_15_fu_14131_p3() {
    select_ln321_15_fu_14131_p3 = (!and_ln321_1_reg_22529.read()[0].is_01())? sc_lv<6>(): ((and_ln321_1_reg_22529.read()[0].to_bool())? ap_const_lv6_0: cnt_0_3_V_27_fu_14018_p3.read());
}

void estimate_FR_2::thread_select_ln321_160_fu_6896_p3() {
    select_ln321_160_fu_6896_p3 = (!and_ln321_13_fu_6852_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_13_fu_6852_p2.read()[0].to_bool())? cnt_4_3_V_9_fu_6737_p3.read(): select_ln321_159_fu_6888_p3.read());
}

void estimate_FR_2::thread_select_ln321_161_fu_6904_p3() {
    select_ln321_161_fu_6904_p3 = (!and_ln321_14_fu_6866_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_14_fu_6866_p2.read()[0].to_bool())? cnt_4_3_V_9_fu_6737_p3.read(): select_ln321_160_fu_6896_p3.read());
}

void estimate_FR_2::thread_select_ln321_162_fu_6920_p3() {
    select_ln321_162_fu_6920_p3 = (!and_ln321_13_fu_6852_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_13_fu_6852_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_4_3_V_13_fu_6761_p3.read());
}

void estimate_FR_2::thread_select_ln321_163_fu_6928_p3() {
    select_ln321_163_fu_6928_p3 = (!and_ln321_14_fu_6866_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_14_fu_6866_p2.read()[0].to_bool())? cnt_4_3_V_13_fu_6761_p3.read(): select_ln321_162_fu_6920_p3.read());
}

void estimate_FR_2::thread_select_ln321_164_fu_6944_p3() {
    select_ln321_164_fu_6944_p3 = (!and_ln321_14_fu_6866_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_14_fu_6866_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_4_3_V_16_fu_6777_p3.read());
}

void estimate_FR_2::thread_select_ln321_165_fu_6968_p3() {
    select_ln321_165_fu_6968_p3 = (!and_ln321_12_fu_6838_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_12_fu_6838_p2.read()[0].to_bool())? cnt_4_3_V_20_fu_6809_p3.read(): select_ln301_60_fu_6960_p3.read());
}

void estimate_FR_2::thread_select_ln321_166_fu_6976_p3() {
    select_ln321_166_fu_6976_p3 = (!and_ln321_13_fu_6852_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_13_fu_6852_p2.read()[0].to_bool())? cnt_4_3_V_20_fu_6809_p3.read(): select_ln321_165_fu_6968_p3.read());
}

void estimate_FR_2::thread_select_ln321_167_fu_6984_p3() {
    select_ln321_167_fu_6984_p3 = (!and_ln321_14_fu_6866_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_14_fu_6866_p2.read()[0].to_bool())? cnt_4_3_V_20_fu_6809_p3.read(): select_ln321_166_fu_6976_p3.read());
}

void estimate_FR_2::thread_select_ln321_168_fu_15170_p3() {
    select_ln321_168_fu_15170_p3 = (!and_ln321_12_reg_22904.read()[0].is_01())? sc_lv<6>(): ((and_ln321_12_reg_22904.read()[0].to_bool())? ap_const_lv6_0: cnt_4_3_V_24_fu_15065_p3.read());
}

void estimate_FR_2::thread_select_ln321_169_fu_15177_p3() {
    select_ln321_169_fu_15177_p3 = (!and_ln321_13_reg_22913.read()[0].is_01())? sc_lv<6>(): ((and_ln321_13_reg_22913.read()[0].to_bool())? cnt_4_3_V_24_fu_15065_p3.read(): select_ln321_168_fu_15170_p3.read());
}

void estimate_FR_2::thread_select_ln321_16_fu_14138_p3() {
    select_ln321_16_fu_14138_p3 = (!and_ln321_2_reg_22539.read()[0].is_01())? sc_lv<6>(): ((and_ln321_2_reg_22539.read()[0].to_bool())? cnt_0_3_V_27_fu_14018_p3.read(): select_ln321_15_fu_14131_p3.read());
}

void estimate_FR_2::thread_select_ln321_170_fu_15184_p3() {
    select_ln321_170_fu_15184_p3 = (!and_ln321_14_reg_22923.read()[0].is_01())? sc_lv<6>(): ((and_ln321_14_reg_22923.read()[0].to_bool())? cnt_4_3_V_24_fu_15065_p3.read(): select_ln321_169_fu_15177_p3.read());
}

void estimate_FR_2::thread_select_ln321_171_fu_15191_p3() {
    select_ln321_171_fu_15191_p3 = (!and_ln321_13_reg_22913.read()[0].is_01())? sc_lv<6>(): ((and_ln321_13_reg_22913.read()[0].to_bool())? ap_const_lv6_0: cnt_4_3_V_27_fu_15078_p3.read());
}

void estimate_FR_2::thread_select_ln321_172_fu_15198_p3() {
    select_ln321_172_fu_15198_p3 = (!and_ln321_14_reg_22923.read()[0].is_01())? sc_lv<6>(): ((and_ln321_14_reg_22923.read()[0].to_bool())? cnt_4_3_V_27_fu_15078_p3.read(): select_ln321_171_fu_15191_p3.read());
}

void estimate_FR_2::thread_select_ln321_173_fu_6992_p3() {
    select_ln321_173_fu_6992_p3 = (!and_ln321_14_fu_6866_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_14_fu_6866_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_4_3_V_29_fu_6817_p3.read());
}

void estimate_FR_2::thread_select_ln321_17_fu_5520_p3() {
    select_ln321_17_fu_5520_p3 = (!and_ln321_2_fu_5394_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_2_fu_5394_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_0_3_V_29_fu_5345_p3.read());
}

void estimate_FR_2::thread_select_ln321_195_fu_7212_p3() {
    select_ln321_195_fu_7212_p3 = (!and_ln321_15_fu_7206_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_15_fu_7206_p2.read()[0].to_bool())? cnt_5_3_V_5_fu_7073_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_196_fu_7226_p3() {
    select_ln321_196_fu_7226_p3 = (!and_ln321_16_fu_7220_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_16_fu_7220_p2.read()[0].to_bool())? cnt_5_3_V_5_fu_7073_p3.read(): select_ln321_195_fu_7212_p3.read());
}

void estimate_FR_2::thread_select_ln321_197_fu_7240_p3() {
    select_ln321_197_fu_7240_p3 = (!and_ln321_17_fu_7234_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_17_fu_7234_p2.read()[0].to_bool())? cnt_5_3_V_5_fu_7073_p3.read(): select_ln321_196_fu_7226_p3.read());
}

void estimate_FR_2::thread_select_ln321_198_fu_7256_p3() {
    select_ln321_198_fu_7256_p3 = (!and_ln321_15_fu_7206_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_15_fu_7206_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_5_3_V_9_fu_7105_p3.read());
}

void estimate_FR_2::thread_select_ln321_199_fu_7264_p3() {
    select_ln321_199_fu_7264_p3 = (!and_ln321_16_fu_7220_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_16_fu_7220_p2.read()[0].to_bool())? cnt_5_3_V_9_fu_7105_p3.read(): select_ln321_198_fu_7256_p3.read());
}

void estimate_FR_2::thread_select_ln321_1_fu_5386_p3() {
    select_ln321_1_fu_5386_p3 = (!and_ln321_1_fu_5380_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_1_fu_5380_p2.read()[0].to_bool())? cnt_0_3_V_5_fu_5233_p3.read(): select_ln321_fu_5372_p3.read());
}

void estimate_FR_2::thread_select_ln321_200_fu_7272_p3() {
    select_ln321_200_fu_7272_p3 = (!and_ln321_17_fu_7234_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_17_fu_7234_p2.read()[0].to_bool())? cnt_5_3_V_9_fu_7105_p3.read(): select_ln321_199_fu_7264_p3.read());
}

void estimate_FR_2::thread_select_ln321_201_fu_7288_p3() {
    select_ln321_201_fu_7288_p3 = (!and_ln321_16_fu_7220_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_16_fu_7220_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_5_3_V_13_fu_7129_p3.read());
}

void estimate_FR_2::thread_select_ln321_202_fu_7296_p3() {
    select_ln321_202_fu_7296_p3 = (!and_ln321_17_fu_7234_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_17_fu_7234_p2.read()[0].to_bool())? cnt_5_3_V_13_fu_7129_p3.read(): select_ln321_201_fu_7288_p3.read());
}

void estimate_FR_2::thread_select_ln321_203_fu_7312_p3() {
    select_ln321_203_fu_7312_p3 = (!and_ln321_17_fu_7234_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_17_fu_7234_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_5_3_V_16_fu_7145_p3.read());
}

void estimate_FR_2::thread_select_ln321_204_fu_7336_p3() {
    select_ln321_204_fu_7336_p3 = (!and_ln321_15_fu_7206_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_15_fu_7206_p2.read()[0].to_bool())? cnt_5_3_V_20_fu_7177_p3.read(): select_ln301_74_fu_7328_p3.read());
}

void estimate_FR_2::thread_select_ln321_205_fu_7344_p3() {
    select_ln321_205_fu_7344_p3 = (!and_ln321_16_fu_7220_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_16_fu_7220_p2.read()[0].to_bool())? cnt_5_3_V_20_fu_7177_p3.read(): select_ln321_204_fu_7336_p3.read());
}

void estimate_FR_2::thread_select_ln321_206_fu_7352_p3() {
    select_ln321_206_fu_7352_p3 = (!and_ln321_17_fu_7234_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_17_fu_7234_p2.read()[0].to_bool())? cnt_5_3_V_20_fu_7177_p3.read(): select_ln321_205_fu_7344_p3.read());
}

void estimate_FR_2::thread_select_ln321_207_fu_15435_p3() {
    select_ln321_207_fu_15435_p3 = (!and_ln321_15_reg_23000.read()[0].is_01())? sc_lv<6>(): ((and_ln321_15_reg_23000.read()[0].to_bool())? ap_const_lv6_0: cnt_5_3_V_24_fu_15330_p3.read());
}

void estimate_FR_2::thread_select_ln321_208_fu_15442_p3() {
    select_ln321_208_fu_15442_p3 = (!and_ln321_16_reg_23009.read()[0].is_01())? sc_lv<6>(): ((and_ln321_16_reg_23009.read()[0].to_bool())? cnt_5_3_V_24_fu_15330_p3.read(): select_ln321_207_fu_15435_p3.read());
}

void estimate_FR_2::thread_select_ln321_209_fu_15449_p3() {
    select_ln321_209_fu_15449_p3 = (!and_ln321_17_reg_23019.read()[0].is_01())? sc_lv<6>(): ((and_ln321_17_reg_23019.read()[0].to_bool())? cnt_5_3_V_24_fu_15330_p3.read(): select_ln321_208_fu_15442_p3.read());
}

void estimate_FR_2::thread_select_ln321_210_fu_15456_p3() {
    select_ln321_210_fu_15456_p3 = (!and_ln321_16_reg_23009.read()[0].is_01())? sc_lv<6>(): ((and_ln321_16_reg_23009.read()[0].to_bool())? ap_const_lv6_0: cnt_5_3_V_27_fu_15343_p3.read());
}

void estimate_FR_2::thread_select_ln321_211_fu_15463_p3() {
    select_ln321_211_fu_15463_p3 = (!and_ln321_17_reg_23019.read()[0].is_01())? sc_lv<6>(): ((and_ln321_17_reg_23019.read()[0].to_bool())? cnt_5_3_V_27_fu_15343_p3.read(): select_ln321_210_fu_15456_p3.read());
}

void estimate_FR_2::thread_select_ln321_212_fu_7360_p3() {
    select_ln321_212_fu_7360_p3 = (!and_ln321_17_fu_7234_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_17_fu_7234_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_5_3_V_29_fu_7185_p3.read());
}

void estimate_FR_2::thread_select_ln321_234_fu_7580_p3() {
    select_ln321_234_fu_7580_p3 = (!and_ln321_18_fu_7574_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_18_fu_7574_p2.read()[0].to_bool())? cnt_6_3_V_5_fu_7441_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_235_fu_7594_p3() {
    select_ln321_235_fu_7594_p3 = (!and_ln321_19_fu_7588_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_19_fu_7588_p2.read()[0].to_bool())? cnt_6_3_V_5_fu_7441_p3.read(): select_ln321_234_fu_7580_p3.read());
}

void estimate_FR_2::thread_select_ln321_236_fu_7608_p3() {
    select_ln321_236_fu_7608_p3 = (!and_ln321_20_fu_7602_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_20_fu_7602_p2.read()[0].to_bool())? cnt_6_3_V_5_fu_7441_p3.read(): select_ln321_235_fu_7594_p3.read());
}

void estimate_FR_2::thread_select_ln321_237_fu_7624_p3() {
    select_ln321_237_fu_7624_p3 = (!and_ln321_18_fu_7574_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_18_fu_7574_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_6_3_V_9_fu_7473_p3.read());
}

void estimate_FR_2::thread_select_ln321_238_fu_7632_p3() {
    select_ln321_238_fu_7632_p3 = (!and_ln321_19_fu_7588_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_19_fu_7588_p2.read()[0].to_bool())? cnt_6_3_V_9_fu_7473_p3.read(): select_ln321_237_fu_7624_p3.read());
}

void estimate_FR_2::thread_select_ln321_239_fu_7640_p3() {
    select_ln321_239_fu_7640_p3 = (!and_ln321_20_fu_7602_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_20_fu_7602_p2.read()[0].to_bool())? cnt_6_3_V_9_fu_7473_p3.read(): select_ln321_238_fu_7632_p3.read());
}

void estimate_FR_2::thread_select_ln321_240_fu_7656_p3() {
    select_ln321_240_fu_7656_p3 = (!and_ln321_19_fu_7588_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_19_fu_7588_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_6_3_V_13_fu_7497_p3.read());
}

void estimate_FR_2::thread_select_ln321_241_fu_7664_p3() {
    select_ln321_241_fu_7664_p3 = (!and_ln321_20_fu_7602_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_20_fu_7602_p2.read()[0].to_bool())? cnt_6_3_V_13_fu_7497_p3.read(): select_ln321_240_fu_7656_p3.read());
}

void estimate_FR_2::thread_select_ln321_242_fu_7680_p3() {
    select_ln321_242_fu_7680_p3 = (!and_ln321_20_fu_7602_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_20_fu_7602_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_6_3_V_16_fu_7513_p3.read());
}

void estimate_FR_2::thread_select_ln321_243_fu_7704_p3() {
    select_ln321_243_fu_7704_p3 = (!and_ln321_18_fu_7574_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_18_fu_7574_p2.read()[0].to_bool())? cnt_6_3_V_20_fu_7545_p3.read(): select_ln301_88_fu_7696_p3.read());
}

void estimate_FR_2::thread_select_ln321_244_fu_7712_p3() {
    select_ln321_244_fu_7712_p3 = (!and_ln321_19_fu_7588_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_19_fu_7588_p2.read()[0].to_bool())? cnt_6_3_V_20_fu_7545_p3.read(): select_ln321_243_fu_7704_p3.read());
}

void estimate_FR_2::thread_select_ln321_245_fu_7720_p3() {
    select_ln321_245_fu_7720_p3 = (!and_ln321_20_fu_7602_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_20_fu_7602_p2.read()[0].to_bool())? cnt_6_3_V_20_fu_7545_p3.read(): select_ln321_244_fu_7712_p3.read());
}

void estimate_FR_2::thread_select_ln321_246_fu_15700_p3() {
    select_ln321_246_fu_15700_p3 = (!and_ln321_18_reg_23096.read()[0].is_01())? sc_lv<6>(): ((and_ln321_18_reg_23096.read()[0].to_bool())? ap_const_lv6_0: cnt_6_3_V_24_fu_15595_p3.read());
}

void estimate_FR_2::thread_select_ln321_247_fu_15707_p3() {
    select_ln321_247_fu_15707_p3 = (!and_ln321_19_reg_23105.read()[0].is_01())? sc_lv<6>(): ((and_ln321_19_reg_23105.read()[0].to_bool())? cnt_6_3_V_24_fu_15595_p3.read(): select_ln321_246_fu_15700_p3.read());
}

void estimate_FR_2::thread_select_ln321_248_fu_15714_p3() {
    select_ln321_248_fu_15714_p3 = (!and_ln321_20_reg_23115.read()[0].is_01())? sc_lv<6>(): ((and_ln321_20_reg_23115.read()[0].to_bool())? cnt_6_3_V_24_fu_15595_p3.read(): select_ln321_247_fu_15707_p3.read());
}

void estimate_FR_2::thread_select_ln321_249_fu_15721_p3() {
    select_ln321_249_fu_15721_p3 = (!and_ln321_19_reg_23105.read()[0].is_01())? sc_lv<6>(): ((and_ln321_19_reg_23105.read()[0].to_bool())? ap_const_lv6_0: cnt_6_3_V_27_fu_15608_p3.read());
}

void estimate_FR_2::thread_select_ln321_250_fu_15728_p3() {
    select_ln321_250_fu_15728_p3 = (!and_ln321_20_reg_23115.read()[0].is_01())? sc_lv<6>(): ((and_ln321_20_reg_23115.read()[0].to_bool())? cnt_6_3_V_27_fu_15608_p3.read(): select_ln321_249_fu_15721_p3.read());
}

void estimate_FR_2::thread_select_ln321_251_fu_7728_p3() {
    select_ln321_251_fu_7728_p3 = (!and_ln321_20_fu_7602_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_20_fu_7602_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_6_3_V_29_fu_7553_p3.read());
}

void estimate_FR_2::thread_select_ln321_273_fu_7948_p3() {
    select_ln321_273_fu_7948_p3 = (!and_ln321_21_fu_7942_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_21_fu_7942_p2.read()[0].to_bool())? cnt_7_3_V_5_fu_7809_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_274_fu_7962_p3() {
    select_ln321_274_fu_7962_p3 = (!and_ln321_22_fu_7956_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_22_fu_7956_p2.read()[0].to_bool())? cnt_7_3_V_5_fu_7809_p3.read(): select_ln321_273_fu_7948_p3.read());
}

void estimate_FR_2::thread_select_ln321_275_fu_7976_p3() {
    select_ln321_275_fu_7976_p3 = (!and_ln321_23_fu_7970_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_23_fu_7970_p2.read()[0].to_bool())? cnt_7_3_V_5_fu_7809_p3.read(): select_ln321_274_fu_7962_p3.read());
}

void estimate_FR_2::thread_select_ln321_276_fu_7992_p3() {
    select_ln321_276_fu_7992_p3 = (!and_ln321_21_fu_7942_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_21_fu_7942_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_7_3_V_9_fu_7841_p3.read());
}

void estimate_FR_2::thread_select_ln321_277_fu_8000_p3() {
    select_ln321_277_fu_8000_p3 = (!and_ln321_22_fu_7956_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_22_fu_7956_p2.read()[0].to_bool())? cnt_7_3_V_9_fu_7841_p3.read(): select_ln321_276_fu_7992_p3.read());
}

void estimate_FR_2::thread_select_ln321_278_fu_8008_p3() {
    select_ln321_278_fu_8008_p3 = (!and_ln321_23_fu_7970_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_23_fu_7970_p2.read()[0].to_bool())? cnt_7_3_V_9_fu_7841_p3.read(): select_ln321_277_fu_8000_p3.read());
}

void estimate_FR_2::thread_select_ln321_279_fu_8024_p3() {
    select_ln321_279_fu_8024_p3 = (!and_ln321_22_fu_7956_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_22_fu_7956_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_7_3_V_13_fu_7865_p3.read());
}

void estimate_FR_2::thread_select_ln321_280_fu_8032_p3() {
    select_ln321_280_fu_8032_p3 = (!and_ln321_23_fu_7970_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_23_fu_7970_p2.read()[0].to_bool())? cnt_7_3_V_13_fu_7865_p3.read(): select_ln321_279_fu_8024_p3.read());
}

void estimate_FR_2::thread_select_ln321_281_fu_8048_p3() {
    select_ln321_281_fu_8048_p3 = (!and_ln321_23_fu_7970_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_23_fu_7970_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_7_3_V_16_fu_7881_p3.read());
}

void estimate_FR_2::thread_select_ln321_282_fu_8072_p3() {
    select_ln321_282_fu_8072_p3 = (!and_ln321_21_fu_7942_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_21_fu_7942_p2.read()[0].to_bool())? cnt_7_3_V_20_fu_7913_p3.read(): select_ln301_102_fu_8064_p3.read());
}

void estimate_FR_2::thread_select_ln321_283_fu_8080_p3() {
    select_ln321_283_fu_8080_p3 = (!and_ln321_22_fu_7956_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_22_fu_7956_p2.read()[0].to_bool())? cnt_7_3_V_20_fu_7913_p3.read(): select_ln321_282_fu_8072_p3.read());
}

void estimate_FR_2::thread_select_ln321_284_fu_8088_p3() {
    select_ln321_284_fu_8088_p3 = (!and_ln321_23_fu_7970_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_23_fu_7970_p2.read()[0].to_bool())? cnt_7_3_V_20_fu_7913_p3.read(): select_ln321_283_fu_8080_p3.read());
}

void estimate_FR_2::thread_select_ln321_285_fu_15965_p3() {
    select_ln321_285_fu_15965_p3 = (!and_ln321_21_reg_23192.read()[0].is_01())? sc_lv<6>(): ((and_ln321_21_reg_23192.read()[0].to_bool())? ap_const_lv6_0: cnt_7_3_V_24_fu_15860_p3.read());
}

void estimate_FR_2::thread_select_ln321_286_fu_15972_p3() {
    select_ln321_286_fu_15972_p3 = (!and_ln321_22_reg_23201.read()[0].is_01())? sc_lv<6>(): ((and_ln321_22_reg_23201.read()[0].to_bool())? cnt_7_3_V_24_fu_15860_p3.read(): select_ln321_285_fu_15965_p3.read());
}

void estimate_FR_2::thread_select_ln321_287_fu_15979_p3() {
    select_ln321_287_fu_15979_p3 = (!and_ln321_23_reg_23211.read()[0].is_01())? sc_lv<6>(): ((and_ln321_23_reg_23211.read()[0].to_bool())? cnt_7_3_V_24_fu_15860_p3.read(): select_ln321_286_fu_15972_p3.read());
}

void estimate_FR_2::thread_select_ln321_288_fu_15986_p3() {
    select_ln321_288_fu_15986_p3 = (!and_ln321_22_reg_23201.read()[0].is_01())? sc_lv<6>(): ((and_ln321_22_reg_23201.read()[0].to_bool())? ap_const_lv6_0: cnt_7_3_V_27_fu_15873_p3.read());
}

void estimate_FR_2::thread_select_ln321_289_fu_15993_p3() {
    select_ln321_289_fu_15993_p3 = (!and_ln321_23_reg_23211.read()[0].is_01())? sc_lv<6>(): ((and_ln321_23_reg_23211.read()[0].to_bool())? cnt_7_3_V_27_fu_15873_p3.read(): select_ln321_288_fu_15986_p3.read());
}

void estimate_FR_2::thread_select_ln321_290_fu_8096_p3() {
    select_ln321_290_fu_8096_p3 = (!and_ln321_23_fu_7970_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_23_fu_7970_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_7_3_V_29_fu_7921_p3.read());
}

void estimate_FR_2::thread_select_ln321_2_fu_5400_p3() {
    select_ln321_2_fu_5400_p3 = (!and_ln321_2_fu_5394_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_2_fu_5394_p2.read()[0].to_bool())? cnt_0_3_V_5_fu_5233_p3.read(): select_ln321_1_fu_5386_p3.read());
}

void estimate_FR_2::thread_select_ln321_312_fu_8316_p3() {
    select_ln321_312_fu_8316_p3 = (!and_ln321_24_fu_8310_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_24_fu_8310_p2.read()[0].to_bool())? cnt_8_3_V_5_fu_8177_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_313_fu_8330_p3() {
    select_ln321_313_fu_8330_p3 = (!and_ln321_25_fu_8324_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_25_fu_8324_p2.read()[0].to_bool())? cnt_8_3_V_5_fu_8177_p3.read(): select_ln321_312_fu_8316_p3.read());
}

void estimate_FR_2::thread_select_ln321_314_fu_8344_p3() {
    select_ln321_314_fu_8344_p3 = (!and_ln321_26_fu_8338_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_26_fu_8338_p2.read()[0].to_bool())? cnt_8_3_V_5_fu_8177_p3.read(): select_ln321_313_fu_8330_p3.read());
}

void estimate_FR_2::thread_select_ln321_315_fu_8360_p3() {
    select_ln321_315_fu_8360_p3 = (!and_ln321_24_fu_8310_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_24_fu_8310_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_8_3_V_9_fu_8209_p3.read());
}

void estimate_FR_2::thread_select_ln321_316_fu_8368_p3() {
    select_ln321_316_fu_8368_p3 = (!and_ln321_25_fu_8324_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_25_fu_8324_p2.read()[0].to_bool())? cnt_8_3_V_9_fu_8209_p3.read(): select_ln321_315_fu_8360_p3.read());
}

void estimate_FR_2::thread_select_ln321_317_fu_8376_p3() {
    select_ln321_317_fu_8376_p3 = (!and_ln321_26_fu_8338_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_26_fu_8338_p2.read()[0].to_bool())? cnt_8_3_V_9_fu_8209_p3.read(): select_ln321_316_fu_8368_p3.read());
}

void estimate_FR_2::thread_select_ln321_318_fu_8392_p3() {
    select_ln321_318_fu_8392_p3 = (!and_ln321_25_fu_8324_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_25_fu_8324_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_8_3_V_13_fu_8233_p3.read());
}

void estimate_FR_2::thread_select_ln321_319_fu_8400_p3() {
    select_ln321_319_fu_8400_p3 = (!and_ln321_26_fu_8338_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_26_fu_8338_p2.read()[0].to_bool())? cnt_8_3_V_13_fu_8233_p3.read(): select_ln321_318_fu_8392_p3.read());
}

void estimate_FR_2::thread_select_ln321_320_fu_8416_p3() {
    select_ln321_320_fu_8416_p3 = (!and_ln321_26_fu_8338_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_26_fu_8338_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_8_3_V_16_fu_8249_p3.read());
}

void estimate_FR_2::thread_select_ln321_321_fu_8440_p3() {
    select_ln321_321_fu_8440_p3 = (!and_ln321_24_fu_8310_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_24_fu_8310_p2.read()[0].to_bool())? cnt_8_3_V_20_fu_8281_p3.read(): select_ln301_116_fu_8432_p3.read());
}

void estimate_FR_2::thread_select_ln321_322_fu_8448_p3() {
    select_ln321_322_fu_8448_p3 = (!and_ln321_25_fu_8324_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_25_fu_8324_p2.read()[0].to_bool())? cnt_8_3_V_20_fu_8281_p3.read(): select_ln321_321_fu_8440_p3.read());
}

void estimate_FR_2::thread_select_ln321_323_fu_8456_p3() {
    select_ln321_323_fu_8456_p3 = (!and_ln321_26_fu_8338_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_26_fu_8338_p2.read()[0].to_bool())? cnt_8_3_V_20_fu_8281_p3.read(): select_ln321_322_fu_8448_p3.read());
}

void estimate_FR_2::thread_select_ln321_324_fu_16230_p3() {
    select_ln321_324_fu_16230_p3 = (!and_ln321_24_reg_23288.read()[0].is_01())? sc_lv<6>(): ((and_ln321_24_reg_23288.read()[0].to_bool())? ap_const_lv6_0: cnt_8_3_V_24_fu_16125_p3.read());
}

void estimate_FR_2::thread_select_ln321_325_fu_16237_p3() {
    select_ln321_325_fu_16237_p3 = (!and_ln321_25_reg_23297.read()[0].is_01())? sc_lv<6>(): ((and_ln321_25_reg_23297.read()[0].to_bool())? cnt_8_3_V_24_fu_16125_p3.read(): select_ln321_324_fu_16230_p3.read());
}

void estimate_FR_2::thread_select_ln321_326_fu_16244_p3() {
    select_ln321_326_fu_16244_p3 = (!and_ln321_26_reg_23307.read()[0].is_01())? sc_lv<6>(): ((and_ln321_26_reg_23307.read()[0].to_bool())? cnt_8_3_V_24_fu_16125_p3.read(): select_ln321_325_fu_16237_p3.read());
}

void estimate_FR_2::thread_select_ln321_327_fu_16251_p3() {
    select_ln321_327_fu_16251_p3 = (!and_ln321_25_reg_23297.read()[0].is_01())? sc_lv<6>(): ((and_ln321_25_reg_23297.read()[0].to_bool())? ap_const_lv6_0: cnt_8_3_V_27_fu_16138_p3.read());
}

void estimate_FR_2::thread_select_ln321_328_fu_16258_p3() {
    select_ln321_328_fu_16258_p3 = (!and_ln321_26_reg_23307.read()[0].is_01())? sc_lv<6>(): ((and_ln321_26_reg_23307.read()[0].to_bool())? cnt_8_3_V_27_fu_16138_p3.read(): select_ln321_327_fu_16251_p3.read());
}

void estimate_FR_2::thread_select_ln321_329_fu_8464_p3() {
    select_ln321_329_fu_8464_p3 = (!and_ln321_26_fu_8338_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_26_fu_8338_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_8_3_V_29_fu_8289_p3.read());
}

void estimate_FR_2::thread_select_ln321_351_fu_8684_p3() {
    select_ln321_351_fu_8684_p3 = (!and_ln321_27_fu_8678_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_27_fu_8678_p2.read()[0].to_bool())? cnt_9_3_V_5_fu_8545_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_352_fu_8698_p3() {
    select_ln321_352_fu_8698_p3 = (!and_ln321_28_fu_8692_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_28_fu_8692_p2.read()[0].to_bool())? cnt_9_3_V_5_fu_8545_p3.read(): select_ln321_351_fu_8684_p3.read());
}

void estimate_FR_2::thread_select_ln321_353_fu_8712_p3() {
    select_ln321_353_fu_8712_p3 = (!and_ln321_29_fu_8706_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_29_fu_8706_p2.read()[0].to_bool())? cnt_9_3_V_5_fu_8545_p3.read(): select_ln321_352_fu_8698_p3.read());
}

void estimate_FR_2::thread_select_ln321_354_fu_8728_p3() {
    select_ln321_354_fu_8728_p3 = (!and_ln321_27_fu_8678_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_27_fu_8678_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_9_3_V_9_fu_8577_p3.read());
}

void estimate_FR_2::thread_select_ln321_355_fu_8736_p3() {
    select_ln321_355_fu_8736_p3 = (!and_ln321_28_fu_8692_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_28_fu_8692_p2.read()[0].to_bool())? cnt_9_3_V_9_fu_8577_p3.read(): select_ln321_354_fu_8728_p3.read());
}

void estimate_FR_2::thread_select_ln321_356_fu_8744_p3() {
    select_ln321_356_fu_8744_p3 = (!and_ln321_29_fu_8706_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_29_fu_8706_p2.read()[0].to_bool())? cnt_9_3_V_9_fu_8577_p3.read(): select_ln321_355_fu_8736_p3.read());
}

void estimate_FR_2::thread_select_ln321_357_fu_8760_p3() {
    select_ln321_357_fu_8760_p3 = (!and_ln321_28_fu_8692_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_28_fu_8692_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_9_3_V_13_fu_8601_p3.read());
}

void estimate_FR_2::thread_select_ln321_358_fu_8768_p3() {
    select_ln321_358_fu_8768_p3 = (!and_ln321_29_fu_8706_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_29_fu_8706_p2.read()[0].to_bool())? cnt_9_3_V_13_fu_8601_p3.read(): select_ln321_357_fu_8760_p3.read());
}

void estimate_FR_2::thread_select_ln321_359_fu_8784_p3() {
    select_ln321_359_fu_8784_p3 = (!and_ln321_29_fu_8706_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_29_fu_8706_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_9_3_V_16_fu_8617_p3.read());
}

void estimate_FR_2::thread_select_ln321_360_fu_8808_p3() {
    select_ln321_360_fu_8808_p3 = (!and_ln321_27_fu_8678_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_27_fu_8678_p2.read()[0].to_bool())? cnt_9_3_V_20_fu_8649_p3.read(): select_ln301_130_fu_8800_p3.read());
}

void estimate_FR_2::thread_select_ln321_361_fu_8816_p3() {
    select_ln321_361_fu_8816_p3 = (!and_ln321_28_fu_8692_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_28_fu_8692_p2.read()[0].to_bool())? cnt_9_3_V_20_fu_8649_p3.read(): select_ln321_360_fu_8808_p3.read());
}

void estimate_FR_2::thread_select_ln321_362_fu_8824_p3() {
    select_ln321_362_fu_8824_p3 = (!and_ln321_29_fu_8706_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_29_fu_8706_p2.read()[0].to_bool())? cnt_9_3_V_20_fu_8649_p3.read(): select_ln321_361_fu_8816_p3.read());
}

void estimate_FR_2::thread_select_ln321_363_fu_16495_p3() {
    select_ln321_363_fu_16495_p3 = (!and_ln321_27_reg_23384.read()[0].is_01())? sc_lv<6>(): ((and_ln321_27_reg_23384.read()[0].to_bool())? ap_const_lv6_0: cnt_9_3_V_24_fu_16390_p3.read());
}

void estimate_FR_2::thread_select_ln321_364_fu_16502_p3() {
    select_ln321_364_fu_16502_p3 = (!and_ln321_28_reg_23393.read()[0].is_01())? sc_lv<6>(): ((and_ln321_28_reg_23393.read()[0].to_bool())? cnt_9_3_V_24_fu_16390_p3.read(): select_ln321_363_fu_16495_p3.read());
}

void estimate_FR_2::thread_select_ln321_365_fu_16509_p3() {
    select_ln321_365_fu_16509_p3 = (!and_ln321_29_reg_23403.read()[0].is_01())? sc_lv<6>(): ((and_ln321_29_reg_23403.read()[0].to_bool())? cnt_9_3_V_24_fu_16390_p3.read(): select_ln321_364_fu_16502_p3.read());
}

void estimate_FR_2::thread_select_ln321_366_fu_16516_p3() {
    select_ln321_366_fu_16516_p3 = (!and_ln321_28_reg_23393.read()[0].is_01())? sc_lv<6>(): ((and_ln321_28_reg_23393.read()[0].to_bool())? ap_const_lv6_0: cnt_9_3_V_27_fu_16403_p3.read());
}

void estimate_FR_2::thread_select_ln321_367_fu_16523_p3() {
    select_ln321_367_fu_16523_p3 = (!and_ln321_29_reg_23403.read()[0].is_01())? sc_lv<6>(): ((and_ln321_29_reg_23403.read()[0].to_bool())? cnt_9_3_V_27_fu_16403_p3.read(): select_ln321_366_fu_16516_p3.read());
}

void estimate_FR_2::thread_select_ln321_368_fu_8832_p3() {
    select_ln321_368_fu_8832_p3 = (!and_ln321_29_fu_8706_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_29_fu_8706_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_9_3_V_29_fu_8657_p3.read());
}

void estimate_FR_2::thread_select_ln321_390_fu_9052_p3() {
    select_ln321_390_fu_9052_p3 = (!and_ln321_30_fu_9046_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_30_fu_9046_p2.read()[0].to_bool())? cnt_10_3_V_5_fu_8913_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_391_fu_9066_p3() {
    select_ln321_391_fu_9066_p3 = (!and_ln321_31_fu_9060_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_31_fu_9060_p2.read()[0].to_bool())? cnt_10_3_V_5_fu_8913_p3.read(): select_ln321_390_fu_9052_p3.read());
}

void estimate_FR_2::thread_select_ln321_392_fu_9080_p3() {
    select_ln321_392_fu_9080_p3 = (!and_ln321_32_fu_9074_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_32_fu_9074_p2.read()[0].to_bool())? cnt_10_3_V_5_fu_8913_p3.read(): select_ln321_391_fu_9066_p3.read());
}

void estimate_FR_2::thread_select_ln321_393_fu_9096_p3() {
    select_ln321_393_fu_9096_p3 = (!and_ln321_30_fu_9046_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_30_fu_9046_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_10_3_V_9_fu_8945_p3.read());
}

void estimate_FR_2::thread_select_ln321_394_fu_9104_p3() {
    select_ln321_394_fu_9104_p3 = (!and_ln321_31_fu_9060_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_31_fu_9060_p2.read()[0].to_bool())? cnt_10_3_V_9_fu_8945_p3.read(): select_ln321_393_fu_9096_p3.read());
}

void estimate_FR_2::thread_select_ln321_395_fu_9112_p3() {
    select_ln321_395_fu_9112_p3 = (!and_ln321_32_fu_9074_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_32_fu_9074_p2.read()[0].to_bool())? cnt_10_3_V_9_fu_8945_p3.read(): select_ln321_394_fu_9104_p3.read());
}

void estimate_FR_2::thread_select_ln321_396_fu_9128_p3() {
    select_ln321_396_fu_9128_p3 = (!and_ln321_31_fu_9060_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_31_fu_9060_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_10_3_V_13_fu_8969_p3.read());
}

void estimate_FR_2::thread_select_ln321_397_fu_9136_p3() {
    select_ln321_397_fu_9136_p3 = (!and_ln321_32_fu_9074_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_32_fu_9074_p2.read()[0].to_bool())? cnt_10_3_V_13_fu_8969_p3.read(): select_ln321_396_fu_9128_p3.read());
}

void estimate_FR_2::thread_select_ln321_398_fu_9152_p3() {
    select_ln321_398_fu_9152_p3 = (!and_ln321_32_fu_9074_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_32_fu_9074_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_10_3_V_16_fu_8985_p3.read());
}

void estimate_FR_2::thread_select_ln321_399_fu_9176_p3() {
    select_ln321_399_fu_9176_p3 = (!and_ln321_30_fu_9046_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_30_fu_9046_p2.read()[0].to_bool())? cnt_10_3_V_20_fu_9017_p3.read(): select_ln301_144_fu_9168_p3.read());
}

void estimate_FR_2::thread_select_ln321_39_fu_5740_p3() {
    select_ln321_39_fu_5740_p3 = (!and_ln321_3_fu_5734_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_3_fu_5734_p2.read()[0].to_bool())? cnt_1_3_V_5_fu_5601_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_3_fu_5416_p3() {
    select_ln321_3_fu_5416_p3 = (!and_ln321_fu_5366_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_fu_5366_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_0_3_V_9_fu_5265_p3.read());
}

void estimate_FR_2::thread_select_ln321_400_fu_9184_p3() {
    select_ln321_400_fu_9184_p3 = (!and_ln321_31_fu_9060_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_31_fu_9060_p2.read()[0].to_bool())? cnt_10_3_V_20_fu_9017_p3.read(): select_ln321_399_fu_9176_p3.read());
}

void estimate_FR_2::thread_select_ln321_401_fu_9192_p3() {
    select_ln321_401_fu_9192_p3 = (!and_ln321_32_fu_9074_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_32_fu_9074_p2.read()[0].to_bool())? cnt_10_3_V_20_fu_9017_p3.read(): select_ln321_400_fu_9184_p3.read());
}

void estimate_FR_2::thread_select_ln321_402_fu_16760_p3() {
    select_ln321_402_fu_16760_p3 = (!and_ln321_30_reg_23480.read()[0].is_01())? sc_lv<6>(): ((and_ln321_30_reg_23480.read()[0].to_bool())? ap_const_lv6_0: cnt_10_3_V_24_fu_16655_p3.read());
}

void estimate_FR_2::thread_select_ln321_403_fu_16767_p3() {
    select_ln321_403_fu_16767_p3 = (!and_ln321_31_reg_23489.read()[0].is_01())? sc_lv<6>(): ((and_ln321_31_reg_23489.read()[0].to_bool())? cnt_10_3_V_24_fu_16655_p3.read(): select_ln321_402_fu_16760_p3.read());
}

void estimate_FR_2::thread_select_ln321_404_fu_16774_p3() {
    select_ln321_404_fu_16774_p3 = (!and_ln321_32_reg_23499.read()[0].is_01())? sc_lv<6>(): ((and_ln321_32_reg_23499.read()[0].to_bool())? cnt_10_3_V_24_fu_16655_p3.read(): select_ln321_403_fu_16767_p3.read());
}

void estimate_FR_2::thread_select_ln321_405_fu_16781_p3() {
    select_ln321_405_fu_16781_p3 = (!and_ln321_31_reg_23489.read()[0].is_01())? sc_lv<6>(): ((and_ln321_31_reg_23489.read()[0].to_bool())? ap_const_lv6_0: cnt_10_3_V_27_fu_16668_p3.read());
}

void estimate_FR_2::thread_select_ln321_406_fu_16788_p3() {
    select_ln321_406_fu_16788_p3 = (!and_ln321_32_reg_23499.read()[0].is_01())? sc_lv<6>(): ((and_ln321_32_reg_23499.read()[0].to_bool())? cnt_10_3_V_27_fu_16668_p3.read(): select_ln321_405_fu_16781_p3.read());
}

void estimate_FR_2::thread_select_ln321_407_fu_9200_p3() {
    select_ln321_407_fu_9200_p3 = (!and_ln321_32_fu_9074_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_32_fu_9074_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_10_3_V_29_fu_9025_p3.read());
}

void estimate_FR_2::thread_select_ln321_40_fu_5754_p3() {
    select_ln321_40_fu_5754_p3 = (!and_ln321_4_fu_5748_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_4_fu_5748_p2.read()[0].to_bool())? cnt_1_3_V_5_fu_5601_p3.read(): select_ln321_39_fu_5740_p3.read());
}

void estimate_FR_2::thread_select_ln321_41_fu_5768_p3() {
    select_ln321_41_fu_5768_p3 = (!and_ln321_5_fu_5762_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_5_fu_5762_p2.read()[0].to_bool())? cnt_1_3_V_5_fu_5601_p3.read(): select_ln321_40_fu_5754_p3.read());
}

void estimate_FR_2::thread_select_ln321_429_fu_9420_p3() {
    select_ln321_429_fu_9420_p3 = (!and_ln321_33_fu_9414_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_33_fu_9414_p2.read()[0].to_bool())? cnt_11_3_V_5_fu_9281_p3.read(): ap_const_lv6_0);
}

void estimate_FR_2::thread_select_ln321_42_fu_5784_p3() {
    select_ln321_42_fu_5784_p3 = (!and_ln321_3_fu_5734_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_3_fu_5734_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_1_3_V_9_fu_5633_p3.read());
}

void estimate_FR_2::thread_select_ln321_430_fu_9434_p3() {
    select_ln321_430_fu_9434_p3 = (!and_ln321_34_fu_9428_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_34_fu_9428_p2.read()[0].to_bool())? cnt_11_3_V_5_fu_9281_p3.read(): select_ln321_429_fu_9420_p3.read());
}

void estimate_FR_2::thread_select_ln321_431_fu_9448_p3() {
    select_ln321_431_fu_9448_p3 = (!and_ln321_35_fu_9442_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_35_fu_9442_p2.read()[0].to_bool())? cnt_11_3_V_5_fu_9281_p3.read(): select_ln321_430_fu_9434_p3.read());
}

void estimate_FR_2::thread_select_ln321_432_fu_9464_p3() {
    select_ln321_432_fu_9464_p3 = (!and_ln321_33_fu_9414_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_33_fu_9414_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_11_3_V_9_fu_9313_p3.read());
}

void estimate_FR_2::thread_select_ln321_433_fu_9472_p3() {
    select_ln321_433_fu_9472_p3 = (!and_ln321_34_fu_9428_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_34_fu_9428_p2.read()[0].to_bool())? cnt_11_3_V_9_fu_9313_p3.read(): select_ln321_432_fu_9464_p3.read());
}

void estimate_FR_2::thread_select_ln321_434_fu_9480_p3() {
    select_ln321_434_fu_9480_p3 = (!and_ln321_35_fu_9442_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_35_fu_9442_p2.read()[0].to_bool())? cnt_11_3_V_9_fu_9313_p3.read(): select_ln321_433_fu_9472_p3.read());
}

void estimate_FR_2::thread_select_ln321_435_fu_9496_p3() {
    select_ln321_435_fu_9496_p3 = (!and_ln321_34_fu_9428_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_34_fu_9428_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_11_3_V_13_fu_9337_p3.read());
}

void estimate_FR_2::thread_select_ln321_436_fu_9504_p3() {
    select_ln321_436_fu_9504_p3 = (!and_ln321_35_fu_9442_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_35_fu_9442_p2.read()[0].to_bool())? cnt_11_3_V_13_fu_9337_p3.read(): select_ln321_435_fu_9496_p3.read());
}

void estimate_FR_2::thread_select_ln321_437_fu_9520_p3() {
    select_ln321_437_fu_9520_p3 = (!and_ln321_35_fu_9442_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_35_fu_9442_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_11_3_V_16_fu_9353_p3.read());
}

void estimate_FR_2::thread_select_ln321_438_fu_9544_p3() {
    select_ln321_438_fu_9544_p3 = (!and_ln321_33_fu_9414_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_33_fu_9414_p2.read()[0].to_bool())? cnt_11_3_V_20_fu_9385_p3.read(): select_ln301_158_fu_9536_p3.read());
}

void estimate_FR_2::thread_select_ln321_439_fu_9552_p3() {
    select_ln321_439_fu_9552_p3 = (!and_ln321_34_fu_9428_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_34_fu_9428_p2.read()[0].to_bool())? cnt_11_3_V_20_fu_9385_p3.read(): select_ln321_438_fu_9544_p3.read());
}

void estimate_FR_2::thread_select_ln321_43_fu_5792_p3() {
    select_ln321_43_fu_5792_p3 = (!and_ln321_4_fu_5748_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_4_fu_5748_p2.read()[0].to_bool())? cnt_1_3_V_9_fu_5633_p3.read(): select_ln321_42_fu_5784_p3.read());
}

void estimate_FR_2::thread_select_ln321_440_fu_9560_p3() {
    select_ln321_440_fu_9560_p3 = (!and_ln321_35_fu_9442_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_35_fu_9442_p2.read()[0].to_bool())? cnt_11_3_V_20_fu_9385_p3.read(): select_ln321_439_fu_9552_p3.read());
}

void estimate_FR_2::thread_select_ln321_441_fu_17025_p3() {
    select_ln321_441_fu_17025_p3 = (!and_ln321_33_reg_23576.read()[0].is_01())? sc_lv<6>(): ((and_ln321_33_reg_23576.read()[0].to_bool())? ap_const_lv6_0: cnt_11_3_V_24_fu_16920_p3.read());
}

void estimate_FR_2::thread_select_ln321_442_fu_17032_p3() {
    select_ln321_442_fu_17032_p3 = (!and_ln321_34_reg_23585.read()[0].is_01())? sc_lv<6>(): ((and_ln321_34_reg_23585.read()[0].to_bool())? cnt_11_3_V_24_fu_16920_p3.read(): select_ln321_441_fu_17025_p3.read());
}

void estimate_FR_2::thread_select_ln321_443_fu_17039_p3() {
    select_ln321_443_fu_17039_p3 = (!and_ln321_35_reg_23595.read()[0].is_01())? sc_lv<6>(): ((and_ln321_35_reg_23595.read()[0].to_bool())? cnt_11_3_V_24_fu_16920_p3.read(): select_ln321_442_fu_17032_p3.read());
}

void estimate_FR_2::thread_select_ln321_444_fu_17046_p3() {
    select_ln321_444_fu_17046_p3 = (!and_ln321_34_reg_23585.read()[0].is_01())? sc_lv<6>(): ((and_ln321_34_reg_23585.read()[0].to_bool())? ap_const_lv6_0: cnt_11_3_V_27_fu_16933_p3.read());
}

void estimate_FR_2::thread_select_ln321_445_fu_17053_p3() {
    select_ln321_445_fu_17053_p3 = (!and_ln321_35_reg_23595.read()[0].is_01())? sc_lv<6>(): ((and_ln321_35_reg_23595.read()[0].to_bool())? cnt_11_3_V_27_fu_16933_p3.read(): select_ln321_444_fu_17046_p3.read());
}

void estimate_FR_2::thread_select_ln321_446_fu_9568_p3() {
    select_ln321_446_fu_9568_p3 = (!and_ln321_35_fu_9442_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln321_35_fu_9442_p2.read()[0].to_bool())? ap_const_lv6_0: cnt_11_3_V_29_fu_9393_p3.read());
}

}

