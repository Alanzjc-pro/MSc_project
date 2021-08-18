#include "estimate_FR_2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void estimate_FR_2::thread_FR_0_0_V_fu_14037_p2() {
    FR_0_0_V_fu_14037_p2 = (!zext_ln209_1_fu_14034_p1.read().is_01() || !zext_ln209_fu_14030_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_1_fu_14034_p1.read()) + sc_biguint<7>(zext_ln209_fu_14030_p1.read()));
}

void estimate_FR_2::thread_FR_0_3_V_10_fu_14096_p3() {
    FR_0_3_V_10_fu_14096_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_0_3_V_6_reg_4099.read(): FR_0_3_V_8_fu_14089_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_11_fu_14103_p3() {
    FR_0_3_V_11_fu_14103_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_2_fu_14043_p1.read(): FR_0_3_V_9_reg_4111.read());
}

void estimate_FR_2::thread_FR_0_3_V_12_fu_14145_p3() {
    FR_0_3_V_12_fu_14145_p3 = (!tmp_41_reg_22255.read()[0].is_01())? sc_lv<8>(): ((tmp_41_reg_22255.read()[0].to_bool())? FR_0_3_V_3_fu_14061_p3.read(): FR_V_0_3_010466_reg_4075.read());
}

void estimate_FR_2::thread_FR_0_3_V_13_fu_14152_p3() {
    FR_0_3_V_13_fu_14152_p3 = (!and_ln321_reg_22520.read()[0].is_01())? sc_lv<8>(): ((and_ln321_reg_22520.read()[0].to_bool())? FR_0_3_V_3_fu_14061_p3.read(): FR_0_3_V_12_fu_14145_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_14_fu_14159_p3() {
    FR_0_3_V_14_fu_14159_p3 = (!and_ln321_1_reg_22529.read()[0].is_01())? sc_lv<8>(): ((and_ln321_1_reg_22529.read()[0].to_bool())? FR_0_3_V_3_fu_14061_p3.read(): FR_0_3_V_13_fu_14152_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_15_fu_14166_p3() {
    FR_0_3_V_15_fu_14166_p3 = (!and_ln321_2_reg_22539.read()[0].is_01())? sc_lv<8>(): ((and_ln321_2_reg_22539.read()[0].to_bool())? FR_0_3_V_3_fu_14061_p3.read(): FR_0_3_V_14_fu_14159_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_16_fu_14173_p3() {
    FR_0_3_V_16_fu_14173_p3 = (!tmp_41_reg_22255.read()[0].is_01())? sc_lv<8>(): ((tmp_41_reg_22255.read()[0].to_bool())? FR_0_3_V_7_fu_14082_p3.read(): FR_V_0_2_010465_reg_4087.read());
}

void estimate_FR_2::thread_FR_0_3_V_17_fu_14180_p3() {
    FR_0_3_V_17_fu_14180_p3 = (!and_ln321_reg_22520.read()[0].is_01())? sc_lv<8>(): ((and_ln321_reg_22520.read()[0].to_bool())? FR_0_3_V_7_fu_14082_p3.read(): FR_0_3_V_16_fu_14173_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_18_fu_14187_p3() {
    FR_0_3_V_18_fu_14187_p3 = (!and_ln321_1_reg_22529.read()[0].is_01())? sc_lv<8>(): ((and_ln321_1_reg_22529.read()[0].to_bool())? FR_0_3_V_7_fu_14082_p3.read(): FR_0_3_V_17_fu_14180_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_19_fu_14194_p3() {
    FR_0_3_V_19_fu_14194_p3 = (!and_ln321_2_reg_22539.read()[0].is_01())? sc_lv<8>(): ((and_ln321_2_reg_22539.read()[0].to_bool())? FR_0_3_V_7_fu_14082_p3.read(): FR_0_3_V_18_fu_14187_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_20_fu_14201_p3() {
    FR_0_3_V_20_fu_14201_p3 = (!tmp_41_reg_22255.read()[0].is_01())? sc_lv<8>(): ((tmp_41_reg_22255.read()[0].to_bool())? FR_0_3_V_10_fu_14096_p3.read(): FR_0_3_V_6_reg_4099.read());
}

void estimate_FR_2::thread_FR_0_3_V_21_fu_14208_p3() {
    FR_0_3_V_21_fu_14208_p3 = (!and_ln321_reg_22520.read()[0].is_01())? sc_lv<8>(): ((and_ln321_reg_22520.read()[0].to_bool())? FR_0_3_V_10_fu_14096_p3.read(): FR_0_3_V_20_fu_14201_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_22_fu_14215_p3() {
    FR_0_3_V_22_fu_14215_p3 = (!and_ln321_1_reg_22529.read()[0].is_01())? sc_lv<8>(): ((and_ln321_1_reg_22529.read()[0].to_bool())? FR_0_3_V_10_fu_14096_p3.read(): FR_0_3_V_21_fu_14208_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_23_fu_14222_p3() {
    FR_0_3_V_23_fu_14222_p3 = (!and_ln321_2_reg_22539.read()[0].is_01())? sc_lv<8>(): ((and_ln321_2_reg_22539.read()[0].to_bool())? FR_0_3_V_10_fu_14096_p3.read(): FR_0_3_V_22_fu_14215_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_24_fu_14229_p3() {
    FR_0_3_V_24_fu_14229_p3 = (!tmp_41_reg_22255.read()[0].is_01())? sc_lv<8>(): ((tmp_41_reg_22255.read()[0].to_bool())? FR_0_3_V_11_fu_14103_p3.read(): FR_0_3_V_9_reg_4111.read());
}

void estimate_FR_2::thread_FR_0_3_V_25_fu_14236_p3() {
    FR_0_3_V_25_fu_14236_p3 = (!and_ln321_reg_22520.read()[0].is_01())? sc_lv<8>(): ((and_ln321_reg_22520.read()[0].to_bool())? FR_0_3_V_11_fu_14103_p3.read(): FR_0_3_V_24_fu_14229_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_26_fu_14243_p3() {
    FR_0_3_V_26_fu_14243_p3 = (!and_ln321_1_reg_22529.read()[0].is_01())? sc_lv<8>(): ((and_ln321_1_reg_22529.read()[0].to_bool())? FR_0_3_V_11_fu_14103_p3.read(): FR_0_3_V_25_fu_14236_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_27_fu_14250_p3() {
    FR_0_3_V_27_fu_14250_p3 = (!and_ln321_2_reg_22539.read()[0].is_01())? sc_lv<8>(): ((and_ln321_2_reg_22539.read()[0].to_bool())? FR_0_3_V_11_fu_14103_p3.read(): FR_0_3_V_26_fu_14243_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_2_fu_14054_p3() {
    FR_0_3_V_2_fu_14054_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_0_3_010466_reg_4075.read(): FR_0_3_V_fu_14047_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_3_fu_14061_p3() {
    FR_0_3_V_3_fu_14061_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_0_3_010466_reg_4075.read(): FR_0_3_V_2_fu_14054_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_4_fu_14068_p3() {
    FR_0_3_V_4_fu_14068_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_2_fu_14043_p1.read(): FR_V_0_2_010465_reg_4087.read());
}

void estimate_FR_2::thread_FR_0_3_V_5_fu_14075_p3() {
    FR_0_3_V_5_fu_14075_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_0_2_010465_reg_4087.read(): FR_0_3_V_4_fu_14068_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_7_fu_14082_p3() {
    FR_0_3_V_7_fu_14082_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_0_2_010465_reg_4087.read(): FR_0_3_V_5_fu_14075_p3.read());
}

void estimate_FR_2::thread_FR_0_3_V_8_fu_14089_p3() {
    FR_0_3_V_8_fu_14089_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_2_fu_14043_p1.read(): FR_0_3_V_6_reg_4099.read());
}

void estimate_FR_2::thread_FR_0_3_V_fu_14047_p3() {
    FR_0_3_V_fu_14047_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_0_3_010466_reg_4075.read(): zext_ln209_2_fu_14043_p1.read());
}

void estimate_FR_2::thread_FR_10_0_V_fu_16687_p2() {
    FR_10_0_V_fu_16687_p2 = (!zext_ln209_31_fu_16684_p1.read().is_01() || !zext_ln209_30_fu_16680_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_31_fu_16684_p1.read()) + sc_biguint<7>(zext_ln209_30_fu_16680_p1.read()));
}

void estimate_FR_2::thread_FR_10_3_V_10_fu_16746_p3() {
    FR_10_3_V_10_fu_16746_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_10_3_V_6_reg_3619.read(): FR_10_3_V_8_fu_16739_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_11_fu_16753_p3() {
    FR_10_3_V_11_fu_16753_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_32_fu_16693_p1.read(): FR_10_3_V_9_reg_3631.read());
}

void estimate_FR_2::thread_FR_10_3_V_12_fu_16795_p3() {
    FR_10_3_V_12_fu_16795_p3 = (!tmp_94_reg_23443.read()[0].is_01())? sc_lv<8>(): ((tmp_94_reg_23443.read()[0].to_bool())? FR_10_3_V_3_fu_16711_p3.read(): FR_V_10_3_010506_reg_3595.read());
}

void estimate_FR_2::thread_FR_10_3_V_13_fu_16802_p3() {
    FR_10_3_V_13_fu_16802_p3 = (!and_ln321_30_reg_23480.read()[0].is_01())? sc_lv<8>(): ((and_ln321_30_reg_23480.read()[0].to_bool())? FR_10_3_V_3_fu_16711_p3.read(): FR_10_3_V_12_fu_16795_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_14_fu_16809_p3() {
    FR_10_3_V_14_fu_16809_p3 = (!and_ln321_31_reg_23489.read()[0].is_01())? sc_lv<8>(): ((and_ln321_31_reg_23489.read()[0].to_bool())? FR_10_3_V_3_fu_16711_p3.read(): FR_10_3_V_13_fu_16802_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_15_fu_16816_p3() {
    FR_10_3_V_15_fu_16816_p3 = (!and_ln321_32_reg_23499.read()[0].is_01())? sc_lv<8>(): ((and_ln321_32_reg_23499.read()[0].to_bool())? FR_10_3_V_3_fu_16711_p3.read(): FR_10_3_V_14_fu_16809_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_16_fu_16823_p3() {
    FR_10_3_V_16_fu_16823_p3 = (!tmp_94_reg_23443.read()[0].is_01())? sc_lv<8>(): ((tmp_94_reg_23443.read()[0].to_bool())? FR_10_3_V_7_fu_16732_p3.read(): FR_V_10_2_010505_reg_3607.read());
}

void estimate_FR_2::thread_FR_10_3_V_17_fu_16830_p3() {
    FR_10_3_V_17_fu_16830_p3 = (!and_ln321_30_reg_23480.read()[0].is_01())? sc_lv<8>(): ((and_ln321_30_reg_23480.read()[0].to_bool())? FR_10_3_V_7_fu_16732_p3.read(): FR_10_3_V_16_fu_16823_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_18_fu_16837_p3() {
    FR_10_3_V_18_fu_16837_p3 = (!and_ln321_31_reg_23489.read()[0].is_01())? sc_lv<8>(): ((and_ln321_31_reg_23489.read()[0].to_bool())? FR_10_3_V_7_fu_16732_p3.read(): FR_10_3_V_17_fu_16830_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_19_fu_16844_p3() {
    FR_10_3_V_19_fu_16844_p3 = (!and_ln321_32_reg_23499.read()[0].is_01())? sc_lv<8>(): ((and_ln321_32_reg_23499.read()[0].to_bool())? FR_10_3_V_7_fu_16732_p3.read(): FR_10_3_V_18_fu_16837_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_20_fu_16851_p3() {
    FR_10_3_V_20_fu_16851_p3 = (!tmp_94_reg_23443.read()[0].is_01())? sc_lv<8>(): ((tmp_94_reg_23443.read()[0].to_bool())? FR_10_3_V_10_fu_16746_p3.read(): FR_10_3_V_6_reg_3619.read());
}

void estimate_FR_2::thread_FR_10_3_V_21_fu_16858_p3() {
    FR_10_3_V_21_fu_16858_p3 = (!and_ln321_30_reg_23480.read()[0].is_01())? sc_lv<8>(): ((and_ln321_30_reg_23480.read()[0].to_bool())? FR_10_3_V_10_fu_16746_p3.read(): FR_10_3_V_20_fu_16851_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_22_fu_16865_p3() {
    FR_10_3_V_22_fu_16865_p3 = (!and_ln321_31_reg_23489.read()[0].is_01())? sc_lv<8>(): ((and_ln321_31_reg_23489.read()[0].to_bool())? FR_10_3_V_10_fu_16746_p3.read(): FR_10_3_V_21_fu_16858_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_23_fu_16872_p3() {
    FR_10_3_V_23_fu_16872_p3 = (!and_ln321_32_reg_23499.read()[0].is_01())? sc_lv<8>(): ((and_ln321_32_reg_23499.read()[0].to_bool())? FR_10_3_V_10_fu_16746_p3.read(): FR_10_3_V_22_fu_16865_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_24_fu_16879_p3() {
    FR_10_3_V_24_fu_16879_p3 = (!tmp_94_reg_23443.read()[0].is_01())? sc_lv<8>(): ((tmp_94_reg_23443.read()[0].to_bool())? FR_10_3_V_11_fu_16753_p3.read(): FR_10_3_V_9_reg_3631.read());
}

void estimate_FR_2::thread_FR_10_3_V_25_fu_16886_p3() {
    FR_10_3_V_25_fu_16886_p3 = (!and_ln321_30_reg_23480.read()[0].is_01())? sc_lv<8>(): ((and_ln321_30_reg_23480.read()[0].to_bool())? FR_10_3_V_11_fu_16753_p3.read(): FR_10_3_V_24_fu_16879_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_26_fu_16893_p3() {
    FR_10_3_V_26_fu_16893_p3 = (!and_ln321_31_reg_23489.read()[0].is_01())? sc_lv<8>(): ((and_ln321_31_reg_23489.read()[0].to_bool())? FR_10_3_V_11_fu_16753_p3.read(): FR_10_3_V_25_fu_16886_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_27_fu_16900_p3() {
    FR_10_3_V_27_fu_16900_p3 = (!and_ln321_32_reg_23499.read()[0].is_01())? sc_lv<8>(): ((and_ln321_32_reg_23499.read()[0].to_bool())? FR_10_3_V_11_fu_16753_p3.read(): FR_10_3_V_26_fu_16893_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_2_fu_16704_p3() {
    FR_10_3_V_2_fu_16704_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_10_3_010506_reg_3595.read(): FR_10_3_V_fu_16697_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_3_fu_16711_p3() {
    FR_10_3_V_3_fu_16711_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_10_3_010506_reg_3595.read(): FR_10_3_V_2_fu_16704_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_4_fu_16718_p3() {
    FR_10_3_V_4_fu_16718_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_32_fu_16693_p1.read(): FR_V_10_2_010505_reg_3607.read());
}

void estimate_FR_2::thread_FR_10_3_V_5_fu_16725_p3() {
    FR_10_3_V_5_fu_16725_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_10_2_010505_reg_3607.read(): FR_10_3_V_4_fu_16718_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_7_fu_16732_p3() {
    FR_10_3_V_7_fu_16732_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_10_2_010505_reg_3607.read(): FR_10_3_V_5_fu_16725_p3.read());
}

void estimate_FR_2::thread_FR_10_3_V_8_fu_16739_p3() {
    FR_10_3_V_8_fu_16739_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_32_fu_16693_p1.read(): FR_10_3_V_6_reg_3619.read());
}

void estimate_FR_2::thread_FR_10_3_V_fu_16697_p3() {
    FR_10_3_V_fu_16697_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_10_3_010506_reg_3595.read(): zext_ln209_32_fu_16693_p1.read());
}

void estimate_FR_2::thread_FR_11_0_V_fu_16952_p2() {
    FR_11_0_V_fu_16952_p2 = (!zext_ln209_34_fu_16949_p1.read().is_01() || !zext_ln209_33_fu_16945_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_34_fu_16949_p1.read()) + sc_biguint<7>(zext_ln209_33_fu_16945_p1.read()));
}

void estimate_FR_2::thread_FR_11_3_V_10_fu_17011_p3() {
    FR_11_3_V_10_fu_17011_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_11_3_V_6_reg_3571.read(): FR_11_3_V_8_fu_17004_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_11_fu_17018_p3() {
    FR_11_3_V_11_fu_17018_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_35_fu_16958_p1.read(): FR_11_3_V_9_reg_3583.read());
}

void estimate_FR_2::thread_FR_11_3_V_12_fu_17060_p3() {
    FR_11_3_V_12_fu_17060_p3 = (!tmp_95_reg_23539.read()[0].is_01())? sc_lv<8>(): ((tmp_95_reg_23539.read()[0].to_bool())? FR_11_3_V_3_fu_16976_p3.read(): FR_V_11_3_010510_reg_3547.read());
}

void estimate_FR_2::thread_FR_11_3_V_13_fu_17067_p3() {
    FR_11_3_V_13_fu_17067_p3 = (!and_ln321_33_reg_23576.read()[0].is_01())? sc_lv<8>(): ((and_ln321_33_reg_23576.read()[0].to_bool())? FR_11_3_V_3_fu_16976_p3.read(): FR_11_3_V_12_fu_17060_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_14_fu_17074_p3() {
    FR_11_3_V_14_fu_17074_p3 = (!and_ln321_34_reg_23585.read()[0].is_01())? sc_lv<8>(): ((and_ln321_34_reg_23585.read()[0].to_bool())? FR_11_3_V_3_fu_16976_p3.read(): FR_11_3_V_13_fu_17067_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_15_fu_17081_p3() {
    FR_11_3_V_15_fu_17081_p3 = (!and_ln321_35_reg_23595.read()[0].is_01())? sc_lv<8>(): ((and_ln321_35_reg_23595.read()[0].to_bool())? FR_11_3_V_3_fu_16976_p3.read(): FR_11_3_V_14_fu_17074_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_16_fu_17088_p3() {
    FR_11_3_V_16_fu_17088_p3 = (!tmp_95_reg_23539.read()[0].is_01())? sc_lv<8>(): ((tmp_95_reg_23539.read()[0].to_bool())? FR_11_3_V_7_fu_16997_p3.read(): FR_V_11_2_010509_reg_3559.read());
}

void estimate_FR_2::thread_FR_11_3_V_17_fu_17095_p3() {
    FR_11_3_V_17_fu_17095_p3 = (!and_ln321_33_reg_23576.read()[0].is_01())? sc_lv<8>(): ((and_ln321_33_reg_23576.read()[0].to_bool())? FR_11_3_V_7_fu_16997_p3.read(): FR_11_3_V_16_fu_17088_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_18_fu_17102_p3() {
    FR_11_3_V_18_fu_17102_p3 = (!and_ln321_34_reg_23585.read()[0].is_01())? sc_lv<8>(): ((and_ln321_34_reg_23585.read()[0].to_bool())? FR_11_3_V_7_fu_16997_p3.read(): FR_11_3_V_17_fu_17095_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_19_fu_17109_p3() {
    FR_11_3_V_19_fu_17109_p3 = (!and_ln321_35_reg_23595.read()[0].is_01())? sc_lv<8>(): ((and_ln321_35_reg_23595.read()[0].to_bool())? FR_11_3_V_7_fu_16997_p3.read(): FR_11_3_V_18_fu_17102_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_20_fu_17116_p3() {
    FR_11_3_V_20_fu_17116_p3 = (!tmp_95_reg_23539.read()[0].is_01())? sc_lv<8>(): ((tmp_95_reg_23539.read()[0].to_bool())? FR_11_3_V_10_fu_17011_p3.read(): FR_11_3_V_6_reg_3571.read());
}

void estimate_FR_2::thread_FR_11_3_V_21_fu_17123_p3() {
    FR_11_3_V_21_fu_17123_p3 = (!and_ln321_33_reg_23576.read()[0].is_01())? sc_lv<8>(): ((and_ln321_33_reg_23576.read()[0].to_bool())? FR_11_3_V_10_fu_17011_p3.read(): FR_11_3_V_20_fu_17116_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_22_fu_17130_p3() {
    FR_11_3_V_22_fu_17130_p3 = (!and_ln321_34_reg_23585.read()[0].is_01())? sc_lv<8>(): ((and_ln321_34_reg_23585.read()[0].to_bool())? FR_11_3_V_10_fu_17011_p3.read(): FR_11_3_V_21_fu_17123_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_23_fu_17137_p3() {
    FR_11_3_V_23_fu_17137_p3 = (!and_ln321_35_reg_23595.read()[0].is_01())? sc_lv<8>(): ((and_ln321_35_reg_23595.read()[0].to_bool())? FR_11_3_V_10_fu_17011_p3.read(): FR_11_3_V_22_fu_17130_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_24_fu_17144_p3() {
    FR_11_3_V_24_fu_17144_p3 = (!tmp_95_reg_23539.read()[0].is_01())? sc_lv<8>(): ((tmp_95_reg_23539.read()[0].to_bool())? FR_11_3_V_11_fu_17018_p3.read(): FR_11_3_V_9_reg_3583.read());
}

void estimate_FR_2::thread_FR_11_3_V_25_fu_17151_p3() {
    FR_11_3_V_25_fu_17151_p3 = (!and_ln321_33_reg_23576.read()[0].is_01())? sc_lv<8>(): ((and_ln321_33_reg_23576.read()[0].to_bool())? FR_11_3_V_11_fu_17018_p3.read(): FR_11_3_V_24_fu_17144_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_26_fu_17158_p3() {
    FR_11_3_V_26_fu_17158_p3 = (!and_ln321_34_reg_23585.read()[0].is_01())? sc_lv<8>(): ((and_ln321_34_reg_23585.read()[0].to_bool())? FR_11_3_V_11_fu_17018_p3.read(): FR_11_3_V_25_fu_17151_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_27_fu_17165_p3() {
    FR_11_3_V_27_fu_17165_p3 = (!and_ln321_35_reg_23595.read()[0].is_01())? sc_lv<8>(): ((and_ln321_35_reg_23595.read()[0].to_bool())? FR_11_3_V_11_fu_17018_p3.read(): FR_11_3_V_26_fu_17158_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_2_fu_16969_p3() {
    FR_11_3_V_2_fu_16969_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_11_3_010510_reg_3547.read(): FR_11_3_V_fu_16962_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_3_fu_16976_p3() {
    FR_11_3_V_3_fu_16976_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_11_3_010510_reg_3547.read(): FR_11_3_V_2_fu_16969_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_4_fu_16983_p3() {
    FR_11_3_V_4_fu_16983_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_35_fu_16958_p1.read(): FR_V_11_2_010509_reg_3559.read());
}

void estimate_FR_2::thread_FR_11_3_V_5_fu_16990_p3() {
    FR_11_3_V_5_fu_16990_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_11_2_010509_reg_3559.read(): FR_11_3_V_4_fu_16983_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_7_fu_16997_p3() {
    FR_11_3_V_7_fu_16997_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_11_2_010509_reg_3559.read(): FR_11_3_V_5_fu_16990_p3.read());
}

void estimate_FR_2::thread_FR_11_3_V_8_fu_17004_p3() {
    FR_11_3_V_8_fu_17004_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_35_fu_16958_p1.read(): FR_11_3_V_6_reg_3571.read());
}

void estimate_FR_2::thread_FR_11_3_V_fu_16962_p3() {
    FR_11_3_V_fu_16962_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_11_3_010510_reg_3547.read(): zext_ln209_35_fu_16958_p1.read());
}

void estimate_FR_2::thread_FR_12_0_V_fu_17217_p2() {
    FR_12_0_V_fu_17217_p2 = (!zext_ln209_37_fu_17214_p1.read().is_01() || !zext_ln209_36_fu_17210_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_37_fu_17214_p1.read()) + sc_biguint<7>(zext_ln209_36_fu_17210_p1.read()));
}

void estimate_FR_2::thread_FR_12_3_V_10_fu_17276_p3() {
    FR_12_3_V_10_fu_17276_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_12_3_V_6_reg_3523.read(): FR_12_3_V_8_fu_17269_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_11_fu_17283_p3() {
    FR_12_3_V_11_fu_17283_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_38_fu_17223_p1.read(): FR_12_3_V_9_reg_3535.read());
}

void estimate_FR_2::thread_FR_12_3_V_12_fu_17325_p3() {
    FR_12_3_V_12_fu_17325_p3 = (!tmp_96_reg_23635.read()[0].is_01())? sc_lv<8>(): ((tmp_96_reg_23635.read()[0].to_bool())? FR_12_3_V_3_fu_17241_p3.read(): FR_V_12_3_010514_reg_3499.read());
}

void estimate_FR_2::thread_FR_12_3_V_13_fu_17332_p3() {
    FR_12_3_V_13_fu_17332_p3 = (!and_ln321_36_reg_23672.read()[0].is_01())? sc_lv<8>(): ((and_ln321_36_reg_23672.read()[0].to_bool())? FR_12_3_V_3_fu_17241_p3.read(): FR_12_3_V_12_fu_17325_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_14_fu_17339_p3() {
    FR_12_3_V_14_fu_17339_p3 = (!and_ln321_37_reg_23681.read()[0].is_01())? sc_lv<8>(): ((and_ln321_37_reg_23681.read()[0].to_bool())? FR_12_3_V_3_fu_17241_p3.read(): FR_12_3_V_13_fu_17332_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_15_fu_17346_p3() {
    FR_12_3_V_15_fu_17346_p3 = (!and_ln321_38_reg_23691.read()[0].is_01())? sc_lv<8>(): ((and_ln321_38_reg_23691.read()[0].to_bool())? FR_12_3_V_3_fu_17241_p3.read(): FR_12_3_V_14_fu_17339_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_16_fu_17353_p3() {
    FR_12_3_V_16_fu_17353_p3 = (!tmp_96_reg_23635.read()[0].is_01())? sc_lv<8>(): ((tmp_96_reg_23635.read()[0].to_bool())? FR_12_3_V_7_fu_17262_p3.read(): FR_V_12_2_010513_reg_3511.read());
}

void estimate_FR_2::thread_FR_12_3_V_17_fu_17360_p3() {
    FR_12_3_V_17_fu_17360_p3 = (!and_ln321_36_reg_23672.read()[0].is_01())? sc_lv<8>(): ((and_ln321_36_reg_23672.read()[0].to_bool())? FR_12_3_V_7_fu_17262_p3.read(): FR_12_3_V_16_fu_17353_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_18_fu_17367_p3() {
    FR_12_3_V_18_fu_17367_p3 = (!and_ln321_37_reg_23681.read()[0].is_01())? sc_lv<8>(): ((and_ln321_37_reg_23681.read()[0].to_bool())? FR_12_3_V_7_fu_17262_p3.read(): FR_12_3_V_17_fu_17360_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_19_fu_17374_p3() {
    FR_12_3_V_19_fu_17374_p3 = (!and_ln321_38_reg_23691.read()[0].is_01())? sc_lv<8>(): ((and_ln321_38_reg_23691.read()[0].to_bool())? FR_12_3_V_7_fu_17262_p3.read(): FR_12_3_V_18_fu_17367_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_20_fu_17381_p3() {
    FR_12_3_V_20_fu_17381_p3 = (!tmp_96_reg_23635.read()[0].is_01())? sc_lv<8>(): ((tmp_96_reg_23635.read()[0].to_bool())? FR_12_3_V_10_fu_17276_p3.read(): FR_12_3_V_6_reg_3523.read());
}

void estimate_FR_2::thread_FR_12_3_V_21_fu_17388_p3() {
    FR_12_3_V_21_fu_17388_p3 = (!and_ln321_36_reg_23672.read()[0].is_01())? sc_lv<8>(): ((and_ln321_36_reg_23672.read()[0].to_bool())? FR_12_3_V_10_fu_17276_p3.read(): FR_12_3_V_20_fu_17381_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_22_fu_17395_p3() {
    FR_12_3_V_22_fu_17395_p3 = (!and_ln321_37_reg_23681.read()[0].is_01())? sc_lv<8>(): ((and_ln321_37_reg_23681.read()[0].to_bool())? FR_12_3_V_10_fu_17276_p3.read(): FR_12_3_V_21_fu_17388_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_23_fu_17402_p3() {
    FR_12_3_V_23_fu_17402_p3 = (!and_ln321_38_reg_23691.read()[0].is_01())? sc_lv<8>(): ((and_ln321_38_reg_23691.read()[0].to_bool())? FR_12_3_V_10_fu_17276_p3.read(): FR_12_3_V_22_fu_17395_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_24_fu_17409_p3() {
    FR_12_3_V_24_fu_17409_p3 = (!tmp_96_reg_23635.read()[0].is_01())? sc_lv<8>(): ((tmp_96_reg_23635.read()[0].to_bool())? FR_12_3_V_11_fu_17283_p3.read(): FR_12_3_V_9_reg_3535.read());
}

void estimate_FR_2::thread_FR_12_3_V_25_fu_17416_p3() {
    FR_12_3_V_25_fu_17416_p3 = (!and_ln321_36_reg_23672.read()[0].is_01())? sc_lv<8>(): ((and_ln321_36_reg_23672.read()[0].to_bool())? FR_12_3_V_11_fu_17283_p3.read(): FR_12_3_V_24_fu_17409_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_26_fu_17423_p3() {
    FR_12_3_V_26_fu_17423_p3 = (!and_ln321_37_reg_23681.read()[0].is_01())? sc_lv<8>(): ((and_ln321_37_reg_23681.read()[0].to_bool())? FR_12_3_V_11_fu_17283_p3.read(): FR_12_3_V_25_fu_17416_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_27_fu_17430_p3() {
    FR_12_3_V_27_fu_17430_p3 = (!and_ln321_38_reg_23691.read()[0].is_01())? sc_lv<8>(): ((and_ln321_38_reg_23691.read()[0].to_bool())? FR_12_3_V_11_fu_17283_p3.read(): FR_12_3_V_26_fu_17423_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_2_fu_17234_p3() {
    FR_12_3_V_2_fu_17234_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_12_3_010514_reg_3499.read(): FR_12_3_V_fu_17227_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_3_fu_17241_p3() {
    FR_12_3_V_3_fu_17241_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_12_3_010514_reg_3499.read(): FR_12_3_V_2_fu_17234_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_4_fu_17248_p3() {
    FR_12_3_V_4_fu_17248_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_38_fu_17223_p1.read(): FR_V_12_2_010513_reg_3511.read());
}

void estimate_FR_2::thread_FR_12_3_V_5_fu_17255_p3() {
    FR_12_3_V_5_fu_17255_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_12_2_010513_reg_3511.read(): FR_12_3_V_4_fu_17248_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_7_fu_17262_p3() {
    FR_12_3_V_7_fu_17262_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_12_2_010513_reg_3511.read(): FR_12_3_V_5_fu_17255_p3.read());
}

void estimate_FR_2::thread_FR_12_3_V_8_fu_17269_p3() {
    FR_12_3_V_8_fu_17269_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_38_fu_17223_p1.read(): FR_12_3_V_6_reg_3523.read());
}

void estimate_FR_2::thread_FR_12_3_V_fu_17227_p3() {
    FR_12_3_V_fu_17227_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_12_3_010514_reg_3499.read(): zext_ln209_38_fu_17223_p1.read());
}

void estimate_FR_2::thread_FR_13_0_V_fu_17482_p2() {
    FR_13_0_V_fu_17482_p2 = (!zext_ln209_40_fu_17479_p1.read().is_01() || !zext_ln209_39_fu_17475_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_40_fu_17479_p1.read()) + sc_biguint<7>(zext_ln209_39_fu_17475_p1.read()));
}

void estimate_FR_2::thread_FR_13_3_V_10_fu_17541_p3() {
    FR_13_3_V_10_fu_17541_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_13_3_V_6_reg_3475.read(): FR_13_3_V_8_fu_17534_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_11_fu_17548_p3() {
    FR_13_3_V_11_fu_17548_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_41_fu_17488_p1.read(): FR_13_3_V_9_reg_3487.read());
}

void estimate_FR_2::thread_FR_13_3_V_12_fu_17590_p3() {
    FR_13_3_V_12_fu_17590_p3 = (!tmp_97_reg_23731.read()[0].is_01())? sc_lv<8>(): ((tmp_97_reg_23731.read()[0].to_bool())? FR_13_3_V_3_fu_17506_p3.read(): FR_V_13_3_010518_reg_3451.read());
}

void estimate_FR_2::thread_FR_13_3_V_13_fu_17597_p3() {
    FR_13_3_V_13_fu_17597_p3 = (!and_ln321_39_reg_23768.read()[0].is_01())? sc_lv<8>(): ((and_ln321_39_reg_23768.read()[0].to_bool())? FR_13_3_V_3_fu_17506_p3.read(): FR_13_3_V_12_fu_17590_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_14_fu_17604_p3() {
    FR_13_3_V_14_fu_17604_p3 = (!and_ln321_40_reg_23777.read()[0].is_01())? sc_lv<8>(): ((and_ln321_40_reg_23777.read()[0].to_bool())? FR_13_3_V_3_fu_17506_p3.read(): FR_13_3_V_13_fu_17597_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_15_fu_17611_p3() {
    FR_13_3_V_15_fu_17611_p3 = (!and_ln321_41_reg_23787.read()[0].is_01())? sc_lv<8>(): ((and_ln321_41_reg_23787.read()[0].to_bool())? FR_13_3_V_3_fu_17506_p3.read(): FR_13_3_V_14_fu_17604_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_16_fu_17618_p3() {
    FR_13_3_V_16_fu_17618_p3 = (!tmp_97_reg_23731.read()[0].is_01())? sc_lv<8>(): ((tmp_97_reg_23731.read()[0].to_bool())? FR_13_3_V_7_fu_17527_p3.read(): FR_V_13_2_010517_reg_3463.read());
}

void estimate_FR_2::thread_FR_13_3_V_17_fu_17625_p3() {
    FR_13_3_V_17_fu_17625_p3 = (!and_ln321_39_reg_23768.read()[0].is_01())? sc_lv<8>(): ((and_ln321_39_reg_23768.read()[0].to_bool())? FR_13_3_V_7_fu_17527_p3.read(): FR_13_3_V_16_fu_17618_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_18_fu_17632_p3() {
    FR_13_3_V_18_fu_17632_p3 = (!and_ln321_40_reg_23777.read()[0].is_01())? sc_lv<8>(): ((and_ln321_40_reg_23777.read()[0].to_bool())? FR_13_3_V_7_fu_17527_p3.read(): FR_13_3_V_17_fu_17625_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_19_fu_17639_p3() {
    FR_13_3_V_19_fu_17639_p3 = (!and_ln321_41_reg_23787.read()[0].is_01())? sc_lv<8>(): ((and_ln321_41_reg_23787.read()[0].to_bool())? FR_13_3_V_7_fu_17527_p3.read(): FR_13_3_V_18_fu_17632_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_20_fu_17646_p3() {
    FR_13_3_V_20_fu_17646_p3 = (!tmp_97_reg_23731.read()[0].is_01())? sc_lv<8>(): ((tmp_97_reg_23731.read()[0].to_bool())? FR_13_3_V_10_fu_17541_p3.read(): FR_13_3_V_6_reg_3475.read());
}

void estimate_FR_2::thread_FR_13_3_V_21_fu_17653_p3() {
    FR_13_3_V_21_fu_17653_p3 = (!and_ln321_39_reg_23768.read()[0].is_01())? sc_lv<8>(): ((and_ln321_39_reg_23768.read()[0].to_bool())? FR_13_3_V_10_fu_17541_p3.read(): FR_13_3_V_20_fu_17646_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_22_fu_17660_p3() {
    FR_13_3_V_22_fu_17660_p3 = (!and_ln321_40_reg_23777.read()[0].is_01())? sc_lv<8>(): ((and_ln321_40_reg_23777.read()[0].to_bool())? FR_13_3_V_10_fu_17541_p3.read(): FR_13_3_V_21_fu_17653_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_23_fu_17667_p3() {
    FR_13_3_V_23_fu_17667_p3 = (!and_ln321_41_reg_23787.read()[0].is_01())? sc_lv<8>(): ((and_ln321_41_reg_23787.read()[0].to_bool())? FR_13_3_V_10_fu_17541_p3.read(): FR_13_3_V_22_fu_17660_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_24_fu_17674_p3() {
    FR_13_3_V_24_fu_17674_p3 = (!tmp_97_reg_23731.read()[0].is_01())? sc_lv<8>(): ((tmp_97_reg_23731.read()[0].to_bool())? FR_13_3_V_11_fu_17548_p3.read(): FR_13_3_V_9_reg_3487.read());
}

void estimate_FR_2::thread_FR_13_3_V_25_fu_17681_p3() {
    FR_13_3_V_25_fu_17681_p3 = (!and_ln321_39_reg_23768.read()[0].is_01())? sc_lv<8>(): ((and_ln321_39_reg_23768.read()[0].to_bool())? FR_13_3_V_11_fu_17548_p3.read(): FR_13_3_V_24_fu_17674_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_26_fu_17688_p3() {
    FR_13_3_V_26_fu_17688_p3 = (!and_ln321_40_reg_23777.read()[0].is_01())? sc_lv<8>(): ((and_ln321_40_reg_23777.read()[0].to_bool())? FR_13_3_V_11_fu_17548_p3.read(): FR_13_3_V_25_fu_17681_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_27_fu_17695_p3() {
    FR_13_3_V_27_fu_17695_p3 = (!and_ln321_41_reg_23787.read()[0].is_01())? sc_lv<8>(): ((and_ln321_41_reg_23787.read()[0].to_bool())? FR_13_3_V_11_fu_17548_p3.read(): FR_13_3_V_26_fu_17688_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_2_fu_17499_p3() {
    FR_13_3_V_2_fu_17499_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_13_3_010518_reg_3451.read(): FR_13_3_V_fu_17492_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_3_fu_17506_p3() {
    FR_13_3_V_3_fu_17506_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_13_3_010518_reg_3451.read(): FR_13_3_V_2_fu_17499_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_4_fu_17513_p3() {
    FR_13_3_V_4_fu_17513_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_41_fu_17488_p1.read(): FR_V_13_2_010517_reg_3463.read());
}

void estimate_FR_2::thread_FR_13_3_V_5_fu_17520_p3() {
    FR_13_3_V_5_fu_17520_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_13_2_010517_reg_3463.read(): FR_13_3_V_4_fu_17513_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_7_fu_17527_p3() {
    FR_13_3_V_7_fu_17527_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_13_2_010517_reg_3463.read(): FR_13_3_V_5_fu_17520_p3.read());
}

void estimate_FR_2::thread_FR_13_3_V_8_fu_17534_p3() {
    FR_13_3_V_8_fu_17534_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_41_fu_17488_p1.read(): FR_13_3_V_6_reg_3475.read());
}

void estimate_FR_2::thread_FR_13_3_V_fu_17492_p3() {
    FR_13_3_V_fu_17492_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_13_3_010518_reg_3451.read(): zext_ln209_41_fu_17488_p1.read());
}

void estimate_FR_2::thread_FR_14_0_V_fu_17747_p2() {
    FR_14_0_V_fu_17747_p2 = (!zext_ln209_43_fu_17744_p1.read().is_01() || !zext_ln209_42_fu_17740_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_43_fu_17744_p1.read()) + sc_biguint<7>(zext_ln209_42_fu_17740_p1.read()));
}

void estimate_FR_2::thread_FR_14_3_V_10_fu_17806_p3() {
    FR_14_3_V_10_fu_17806_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_14_3_V_6_reg_3427.read(): FR_14_3_V_8_fu_17799_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_11_fu_17813_p3() {
    FR_14_3_V_11_fu_17813_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_44_fu_17753_p1.read(): FR_14_3_V_9_reg_3439.read());
}

void estimate_FR_2::thread_FR_14_3_V_12_fu_17855_p3() {
    FR_14_3_V_12_fu_17855_p3 = (!tmp_98_reg_23827.read()[0].is_01())? sc_lv<8>(): ((tmp_98_reg_23827.read()[0].to_bool())? FR_14_3_V_3_fu_17771_p3.read(): FR_V_14_3_010522_reg_3403.read());
}

void estimate_FR_2::thread_FR_14_3_V_13_fu_17862_p3() {
    FR_14_3_V_13_fu_17862_p3 = (!and_ln321_42_reg_23864.read()[0].is_01())? sc_lv<8>(): ((and_ln321_42_reg_23864.read()[0].to_bool())? FR_14_3_V_3_fu_17771_p3.read(): FR_14_3_V_12_fu_17855_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_14_fu_17869_p3() {
    FR_14_3_V_14_fu_17869_p3 = (!and_ln321_43_reg_23873.read()[0].is_01())? sc_lv<8>(): ((and_ln321_43_reg_23873.read()[0].to_bool())? FR_14_3_V_3_fu_17771_p3.read(): FR_14_3_V_13_fu_17862_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_15_fu_17876_p3() {
    FR_14_3_V_15_fu_17876_p3 = (!and_ln321_44_reg_23883.read()[0].is_01())? sc_lv<8>(): ((and_ln321_44_reg_23883.read()[0].to_bool())? FR_14_3_V_3_fu_17771_p3.read(): FR_14_3_V_14_fu_17869_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_16_fu_17883_p3() {
    FR_14_3_V_16_fu_17883_p3 = (!tmp_98_reg_23827.read()[0].is_01())? sc_lv<8>(): ((tmp_98_reg_23827.read()[0].to_bool())? FR_14_3_V_7_fu_17792_p3.read(): FR_V_14_2_010521_reg_3415.read());
}

void estimate_FR_2::thread_FR_14_3_V_17_fu_17890_p3() {
    FR_14_3_V_17_fu_17890_p3 = (!and_ln321_42_reg_23864.read()[0].is_01())? sc_lv<8>(): ((and_ln321_42_reg_23864.read()[0].to_bool())? FR_14_3_V_7_fu_17792_p3.read(): FR_14_3_V_16_fu_17883_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_18_fu_17897_p3() {
    FR_14_3_V_18_fu_17897_p3 = (!and_ln321_43_reg_23873.read()[0].is_01())? sc_lv<8>(): ((and_ln321_43_reg_23873.read()[0].to_bool())? FR_14_3_V_7_fu_17792_p3.read(): FR_14_3_V_17_fu_17890_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_19_fu_17904_p3() {
    FR_14_3_V_19_fu_17904_p3 = (!and_ln321_44_reg_23883.read()[0].is_01())? sc_lv<8>(): ((and_ln321_44_reg_23883.read()[0].to_bool())? FR_14_3_V_7_fu_17792_p3.read(): FR_14_3_V_18_fu_17897_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_20_fu_17911_p3() {
    FR_14_3_V_20_fu_17911_p3 = (!tmp_98_reg_23827.read()[0].is_01())? sc_lv<8>(): ((tmp_98_reg_23827.read()[0].to_bool())? FR_14_3_V_10_fu_17806_p3.read(): FR_14_3_V_6_reg_3427.read());
}

void estimate_FR_2::thread_FR_14_3_V_21_fu_17918_p3() {
    FR_14_3_V_21_fu_17918_p3 = (!and_ln321_42_reg_23864.read()[0].is_01())? sc_lv<8>(): ((and_ln321_42_reg_23864.read()[0].to_bool())? FR_14_3_V_10_fu_17806_p3.read(): FR_14_3_V_20_fu_17911_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_22_fu_17925_p3() {
    FR_14_3_V_22_fu_17925_p3 = (!and_ln321_43_reg_23873.read()[0].is_01())? sc_lv<8>(): ((and_ln321_43_reg_23873.read()[0].to_bool())? FR_14_3_V_10_fu_17806_p3.read(): FR_14_3_V_21_fu_17918_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_23_fu_17932_p3() {
    FR_14_3_V_23_fu_17932_p3 = (!and_ln321_44_reg_23883.read()[0].is_01())? sc_lv<8>(): ((and_ln321_44_reg_23883.read()[0].to_bool())? FR_14_3_V_10_fu_17806_p3.read(): FR_14_3_V_22_fu_17925_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_24_fu_17939_p3() {
    FR_14_3_V_24_fu_17939_p3 = (!tmp_98_reg_23827.read()[0].is_01())? sc_lv<8>(): ((tmp_98_reg_23827.read()[0].to_bool())? FR_14_3_V_11_fu_17813_p3.read(): FR_14_3_V_9_reg_3439.read());
}

void estimate_FR_2::thread_FR_14_3_V_25_fu_17946_p3() {
    FR_14_3_V_25_fu_17946_p3 = (!and_ln321_42_reg_23864.read()[0].is_01())? sc_lv<8>(): ((and_ln321_42_reg_23864.read()[0].to_bool())? FR_14_3_V_11_fu_17813_p3.read(): FR_14_3_V_24_fu_17939_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_26_fu_17953_p3() {
    FR_14_3_V_26_fu_17953_p3 = (!and_ln321_43_reg_23873.read()[0].is_01())? sc_lv<8>(): ((and_ln321_43_reg_23873.read()[0].to_bool())? FR_14_3_V_11_fu_17813_p3.read(): FR_14_3_V_25_fu_17946_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_27_fu_17960_p3() {
    FR_14_3_V_27_fu_17960_p3 = (!and_ln321_44_reg_23883.read()[0].is_01())? sc_lv<8>(): ((and_ln321_44_reg_23883.read()[0].to_bool())? FR_14_3_V_11_fu_17813_p3.read(): FR_14_3_V_26_fu_17953_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_2_fu_17764_p3() {
    FR_14_3_V_2_fu_17764_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_14_3_010522_reg_3403.read(): FR_14_3_V_fu_17757_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_3_fu_17771_p3() {
    FR_14_3_V_3_fu_17771_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_14_3_010522_reg_3403.read(): FR_14_3_V_2_fu_17764_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_4_fu_17778_p3() {
    FR_14_3_V_4_fu_17778_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_44_fu_17753_p1.read(): FR_V_14_2_010521_reg_3415.read());
}

void estimate_FR_2::thread_FR_14_3_V_5_fu_17785_p3() {
    FR_14_3_V_5_fu_17785_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_14_2_010521_reg_3415.read(): FR_14_3_V_4_fu_17778_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_7_fu_17792_p3() {
    FR_14_3_V_7_fu_17792_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_14_2_010521_reg_3415.read(): FR_14_3_V_5_fu_17785_p3.read());
}

void estimate_FR_2::thread_FR_14_3_V_8_fu_17799_p3() {
    FR_14_3_V_8_fu_17799_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_44_fu_17753_p1.read(): FR_14_3_V_6_reg_3427.read());
}

void estimate_FR_2::thread_FR_14_3_V_fu_17757_p3() {
    FR_14_3_V_fu_17757_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_14_3_010522_reg_3403.read(): zext_ln209_44_fu_17753_p1.read());
}

void estimate_FR_2::thread_FR_15_0_V_fu_18012_p2() {
    FR_15_0_V_fu_18012_p2 = (!zext_ln209_46_fu_18009_p1.read().is_01() || !zext_ln209_45_fu_18005_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_46_fu_18009_p1.read()) + sc_biguint<7>(zext_ln209_45_fu_18005_p1.read()));
}

void estimate_FR_2::thread_FR_15_3_V_10_fu_18071_p3() {
    FR_15_3_V_10_fu_18071_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_15_3_V_6_reg_3379.read(): FR_15_3_V_8_fu_18064_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_11_fu_18078_p3() {
    FR_15_3_V_11_fu_18078_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_47_fu_18018_p1.read(): FR_15_3_V_9_reg_3391.read());
}

void estimate_FR_2::thread_FR_15_3_V_12_fu_18120_p3() {
    FR_15_3_V_12_fu_18120_p3 = (!tmp_99_reg_23923.read()[0].is_01())? sc_lv<8>(): ((tmp_99_reg_23923.read()[0].to_bool())? FR_15_3_V_3_fu_18036_p3.read(): FR_V_15_3_010526_reg_3355.read());
}

void estimate_FR_2::thread_FR_15_3_V_13_fu_18127_p3() {
    FR_15_3_V_13_fu_18127_p3 = (!and_ln321_45_reg_23960.read()[0].is_01())? sc_lv<8>(): ((and_ln321_45_reg_23960.read()[0].to_bool())? FR_15_3_V_3_fu_18036_p3.read(): FR_15_3_V_12_fu_18120_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_14_fu_18134_p3() {
    FR_15_3_V_14_fu_18134_p3 = (!and_ln321_46_reg_23969.read()[0].is_01())? sc_lv<8>(): ((and_ln321_46_reg_23969.read()[0].to_bool())? FR_15_3_V_3_fu_18036_p3.read(): FR_15_3_V_13_fu_18127_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_15_fu_18141_p3() {
    FR_15_3_V_15_fu_18141_p3 = (!and_ln321_47_reg_23979.read()[0].is_01())? sc_lv<8>(): ((and_ln321_47_reg_23979.read()[0].to_bool())? FR_15_3_V_3_fu_18036_p3.read(): FR_15_3_V_14_fu_18134_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_16_fu_18148_p3() {
    FR_15_3_V_16_fu_18148_p3 = (!tmp_99_reg_23923.read()[0].is_01())? sc_lv<8>(): ((tmp_99_reg_23923.read()[0].to_bool())? FR_15_3_V_7_fu_18057_p3.read(): FR_V_15_2_010525_reg_3367.read());
}

void estimate_FR_2::thread_FR_15_3_V_17_fu_18155_p3() {
    FR_15_3_V_17_fu_18155_p3 = (!and_ln321_45_reg_23960.read()[0].is_01())? sc_lv<8>(): ((and_ln321_45_reg_23960.read()[0].to_bool())? FR_15_3_V_7_fu_18057_p3.read(): FR_15_3_V_16_fu_18148_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_18_fu_18162_p3() {
    FR_15_3_V_18_fu_18162_p3 = (!and_ln321_46_reg_23969.read()[0].is_01())? sc_lv<8>(): ((and_ln321_46_reg_23969.read()[0].to_bool())? FR_15_3_V_7_fu_18057_p3.read(): FR_15_3_V_17_fu_18155_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_19_fu_18169_p3() {
    FR_15_3_V_19_fu_18169_p3 = (!and_ln321_47_reg_23979.read()[0].is_01())? sc_lv<8>(): ((and_ln321_47_reg_23979.read()[0].to_bool())? FR_15_3_V_7_fu_18057_p3.read(): FR_15_3_V_18_fu_18162_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_20_fu_18176_p3() {
    FR_15_3_V_20_fu_18176_p3 = (!tmp_99_reg_23923.read()[0].is_01())? sc_lv<8>(): ((tmp_99_reg_23923.read()[0].to_bool())? FR_15_3_V_10_fu_18071_p3.read(): FR_15_3_V_6_reg_3379.read());
}

void estimate_FR_2::thread_FR_15_3_V_21_fu_18183_p3() {
    FR_15_3_V_21_fu_18183_p3 = (!and_ln321_45_reg_23960.read()[0].is_01())? sc_lv<8>(): ((and_ln321_45_reg_23960.read()[0].to_bool())? FR_15_3_V_10_fu_18071_p3.read(): FR_15_3_V_20_fu_18176_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_22_fu_18190_p3() {
    FR_15_3_V_22_fu_18190_p3 = (!and_ln321_46_reg_23969.read()[0].is_01())? sc_lv<8>(): ((and_ln321_46_reg_23969.read()[0].to_bool())? FR_15_3_V_10_fu_18071_p3.read(): FR_15_3_V_21_fu_18183_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_23_fu_18197_p3() {
    FR_15_3_V_23_fu_18197_p3 = (!and_ln321_47_reg_23979.read()[0].is_01())? sc_lv<8>(): ((and_ln321_47_reg_23979.read()[0].to_bool())? FR_15_3_V_10_fu_18071_p3.read(): FR_15_3_V_22_fu_18190_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_24_fu_18204_p3() {
    FR_15_3_V_24_fu_18204_p3 = (!tmp_99_reg_23923.read()[0].is_01())? sc_lv<8>(): ((tmp_99_reg_23923.read()[0].to_bool())? FR_15_3_V_11_fu_18078_p3.read(): FR_15_3_V_9_reg_3391.read());
}

void estimate_FR_2::thread_FR_15_3_V_25_fu_18211_p3() {
    FR_15_3_V_25_fu_18211_p3 = (!and_ln321_45_reg_23960.read()[0].is_01())? sc_lv<8>(): ((and_ln321_45_reg_23960.read()[0].to_bool())? FR_15_3_V_11_fu_18078_p3.read(): FR_15_3_V_24_fu_18204_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_26_fu_18218_p3() {
    FR_15_3_V_26_fu_18218_p3 = (!and_ln321_46_reg_23969.read()[0].is_01())? sc_lv<8>(): ((and_ln321_46_reg_23969.read()[0].to_bool())? FR_15_3_V_11_fu_18078_p3.read(): FR_15_3_V_25_fu_18211_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_27_fu_18225_p3() {
    FR_15_3_V_27_fu_18225_p3 = (!and_ln321_47_reg_23979.read()[0].is_01())? sc_lv<8>(): ((and_ln321_47_reg_23979.read()[0].to_bool())? FR_15_3_V_11_fu_18078_p3.read(): FR_15_3_V_26_fu_18218_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_2_fu_18029_p3() {
    FR_15_3_V_2_fu_18029_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_15_3_010526_reg_3355.read(): FR_15_3_V_fu_18022_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_3_fu_18036_p3() {
    FR_15_3_V_3_fu_18036_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_15_3_010526_reg_3355.read(): FR_15_3_V_2_fu_18029_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_4_fu_18043_p3() {
    FR_15_3_V_4_fu_18043_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_47_fu_18018_p1.read(): FR_V_15_2_010525_reg_3367.read());
}

void estimate_FR_2::thread_FR_15_3_V_5_fu_18050_p3() {
    FR_15_3_V_5_fu_18050_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_15_2_010525_reg_3367.read(): FR_15_3_V_4_fu_18043_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_7_fu_18057_p3() {
    FR_15_3_V_7_fu_18057_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_15_2_010525_reg_3367.read(): FR_15_3_V_5_fu_18050_p3.read());
}

void estimate_FR_2::thread_FR_15_3_V_8_fu_18064_p3() {
    FR_15_3_V_8_fu_18064_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_47_fu_18018_p1.read(): FR_15_3_V_6_reg_3379.read());
}

void estimate_FR_2::thread_FR_15_3_V_fu_18022_p3() {
    FR_15_3_V_fu_18022_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_15_3_010526_reg_3355.read(): zext_ln209_47_fu_18018_p1.read());
}

void estimate_FR_2::thread_FR_16_0_V_fu_18277_p2() {
    FR_16_0_V_fu_18277_p2 = (!zext_ln209_49_fu_18274_p1.read().is_01() || !zext_ln209_48_fu_18270_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_49_fu_18274_p1.read()) + sc_biguint<7>(zext_ln209_48_fu_18270_p1.read()));
}

void estimate_FR_2::thread_FR_16_3_V_10_fu_18336_p3() {
    FR_16_3_V_10_fu_18336_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_16_3_V_6_reg_3331.read(): FR_16_3_V_8_fu_18329_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_11_fu_18343_p3() {
    FR_16_3_V_11_fu_18343_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_50_fu_18283_p1.read(): FR_16_3_V_9_reg_3343.read());
}

void estimate_FR_2::thread_FR_16_3_V_12_fu_18385_p3() {
    FR_16_3_V_12_fu_18385_p3 = (!tmp_100_reg_24019.read()[0].is_01())? sc_lv<8>(): ((tmp_100_reg_24019.read()[0].to_bool())? FR_16_3_V_3_fu_18301_p3.read(): FR_V_16_3_010530_reg_3307.read());
}

void estimate_FR_2::thread_FR_16_3_V_13_fu_18392_p3() {
    FR_16_3_V_13_fu_18392_p3 = (!and_ln321_48_reg_24056.read()[0].is_01())? sc_lv<8>(): ((and_ln321_48_reg_24056.read()[0].to_bool())? FR_16_3_V_3_fu_18301_p3.read(): FR_16_3_V_12_fu_18385_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_14_fu_18399_p3() {
    FR_16_3_V_14_fu_18399_p3 = (!and_ln321_49_reg_24065.read()[0].is_01())? sc_lv<8>(): ((and_ln321_49_reg_24065.read()[0].to_bool())? FR_16_3_V_3_fu_18301_p3.read(): FR_16_3_V_13_fu_18392_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_15_fu_18406_p3() {
    FR_16_3_V_15_fu_18406_p3 = (!and_ln321_50_reg_24075.read()[0].is_01())? sc_lv<8>(): ((and_ln321_50_reg_24075.read()[0].to_bool())? FR_16_3_V_3_fu_18301_p3.read(): FR_16_3_V_14_fu_18399_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_16_fu_18413_p3() {
    FR_16_3_V_16_fu_18413_p3 = (!tmp_100_reg_24019.read()[0].is_01())? sc_lv<8>(): ((tmp_100_reg_24019.read()[0].to_bool())? FR_16_3_V_7_fu_18322_p3.read(): FR_V_16_2_010529_reg_3319.read());
}

void estimate_FR_2::thread_FR_16_3_V_17_fu_18420_p3() {
    FR_16_3_V_17_fu_18420_p3 = (!and_ln321_48_reg_24056.read()[0].is_01())? sc_lv<8>(): ((and_ln321_48_reg_24056.read()[0].to_bool())? FR_16_3_V_7_fu_18322_p3.read(): FR_16_3_V_16_fu_18413_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_18_fu_18427_p3() {
    FR_16_3_V_18_fu_18427_p3 = (!and_ln321_49_reg_24065.read()[0].is_01())? sc_lv<8>(): ((and_ln321_49_reg_24065.read()[0].to_bool())? FR_16_3_V_7_fu_18322_p3.read(): FR_16_3_V_17_fu_18420_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_19_fu_18434_p3() {
    FR_16_3_V_19_fu_18434_p3 = (!and_ln321_50_reg_24075.read()[0].is_01())? sc_lv<8>(): ((and_ln321_50_reg_24075.read()[0].to_bool())? FR_16_3_V_7_fu_18322_p3.read(): FR_16_3_V_18_fu_18427_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_20_fu_18441_p3() {
    FR_16_3_V_20_fu_18441_p3 = (!tmp_100_reg_24019.read()[0].is_01())? sc_lv<8>(): ((tmp_100_reg_24019.read()[0].to_bool())? FR_16_3_V_10_fu_18336_p3.read(): FR_16_3_V_6_reg_3331.read());
}

void estimate_FR_2::thread_FR_16_3_V_21_fu_18448_p3() {
    FR_16_3_V_21_fu_18448_p3 = (!and_ln321_48_reg_24056.read()[0].is_01())? sc_lv<8>(): ((and_ln321_48_reg_24056.read()[0].to_bool())? FR_16_3_V_10_fu_18336_p3.read(): FR_16_3_V_20_fu_18441_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_22_fu_18455_p3() {
    FR_16_3_V_22_fu_18455_p3 = (!and_ln321_49_reg_24065.read()[0].is_01())? sc_lv<8>(): ((and_ln321_49_reg_24065.read()[0].to_bool())? FR_16_3_V_10_fu_18336_p3.read(): FR_16_3_V_21_fu_18448_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_23_fu_18462_p3() {
    FR_16_3_V_23_fu_18462_p3 = (!and_ln321_50_reg_24075.read()[0].is_01())? sc_lv<8>(): ((and_ln321_50_reg_24075.read()[0].to_bool())? FR_16_3_V_10_fu_18336_p3.read(): FR_16_3_V_22_fu_18455_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_24_fu_18469_p3() {
    FR_16_3_V_24_fu_18469_p3 = (!tmp_100_reg_24019.read()[0].is_01())? sc_lv<8>(): ((tmp_100_reg_24019.read()[0].to_bool())? FR_16_3_V_11_fu_18343_p3.read(): FR_16_3_V_9_reg_3343.read());
}

void estimate_FR_2::thread_FR_16_3_V_25_fu_18476_p3() {
    FR_16_3_V_25_fu_18476_p3 = (!and_ln321_48_reg_24056.read()[0].is_01())? sc_lv<8>(): ((and_ln321_48_reg_24056.read()[0].to_bool())? FR_16_3_V_11_fu_18343_p3.read(): FR_16_3_V_24_fu_18469_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_26_fu_18483_p3() {
    FR_16_3_V_26_fu_18483_p3 = (!and_ln321_49_reg_24065.read()[0].is_01())? sc_lv<8>(): ((and_ln321_49_reg_24065.read()[0].to_bool())? FR_16_3_V_11_fu_18343_p3.read(): FR_16_3_V_25_fu_18476_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_27_fu_18490_p3() {
    FR_16_3_V_27_fu_18490_p3 = (!and_ln321_50_reg_24075.read()[0].is_01())? sc_lv<8>(): ((and_ln321_50_reg_24075.read()[0].to_bool())? FR_16_3_V_11_fu_18343_p3.read(): FR_16_3_V_26_fu_18483_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_2_fu_18294_p3() {
    FR_16_3_V_2_fu_18294_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_16_3_010530_reg_3307.read(): FR_16_3_V_fu_18287_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_3_fu_18301_p3() {
    FR_16_3_V_3_fu_18301_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_16_3_010530_reg_3307.read(): FR_16_3_V_2_fu_18294_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_4_fu_18308_p3() {
    FR_16_3_V_4_fu_18308_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_50_fu_18283_p1.read(): FR_V_16_2_010529_reg_3319.read());
}

void estimate_FR_2::thread_FR_16_3_V_5_fu_18315_p3() {
    FR_16_3_V_5_fu_18315_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_16_2_010529_reg_3319.read(): FR_16_3_V_4_fu_18308_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_7_fu_18322_p3() {
    FR_16_3_V_7_fu_18322_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_16_2_010529_reg_3319.read(): FR_16_3_V_5_fu_18315_p3.read());
}

void estimate_FR_2::thread_FR_16_3_V_8_fu_18329_p3() {
    FR_16_3_V_8_fu_18329_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_50_fu_18283_p1.read(): FR_16_3_V_6_reg_3331.read());
}

void estimate_FR_2::thread_FR_16_3_V_fu_18287_p3() {
    FR_16_3_V_fu_18287_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_16_3_010530_reg_3307.read(): zext_ln209_50_fu_18283_p1.read());
}

void estimate_FR_2::thread_FR_17_0_V_fu_18542_p2() {
    FR_17_0_V_fu_18542_p2 = (!zext_ln209_52_fu_18539_p1.read().is_01() || !zext_ln209_51_fu_18535_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_52_fu_18539_p1.read()) + sc_biguint<7>(zext_ln209_51_fu_18535_p1.read()));
}

void estimate_FR_2::thread_FR_17_3_V_10_fu_18601_p3() {
    FR_17_3_V_10_fu_18601_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_17_3_V_6_reg_3283.read(): FR_17_3_V_8_fu_18594_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_11_fu_18608_p3() {
    FR_17_3_V_11_fu_18608_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_53_fu_18548_p1.read(): FR_17_3_V_9_reg_3295.read());
}

void estimate_FR_2::thread_FR_17_3_V_12_fu_18650_p3() {
    FR_17_3_V_12_fu_18650_p3 = (!tmp_101_reg_24115.read()[0].is_01())? sc_lv<8>(): ((tmp_101_reg_24115.read()[0].to_bool())? FR_17_3_V_3_fu_18566_p3.read(): FR_V_17_3_010534_reg_3259.read());
}

void estimate_FR_2::thread_FR_17_3_V_13_fu_18657_p3() {
    FR_17_3_V_13_fu_18657_p3 = (!and_ln321_51_reg_24152.read()[0].is_01())? sc_lv<8>(): ((and_ln321_51_reg_24152.read()[0].to_bool())? FR_17_3_V_3_fu_18566_p3.read(): FR_17_3_V_12_fu_18650_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_14_fu_18664_p3() {
    FR_17_3_V_14_fu_18664_p3 = (!and_ln321_52_reg_24161.read()[0].is_01())? sc_lv<8>(): ((and_ln321_52_reg_24161.read()[0].to_bool())? FR_17_3_V_3_fu_18566_p3.read(): FR_17_3_V_13_fu_18657_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_15_fu_18671_p3() {
    FR_17_3_V_15_fu_18671_p3 = (!and_ln321_53_reg_24171.read()[0].is_01())? sc_lv<8>(): ((and_ln321_53_reg_24171.read()[0].to_bool())? FR_17_3_V_3_fu_18566_p3.read(): FR_17_3_V_14_fu_18664_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_16_fu_18678_p3() {
    FR_17_3_V_16_fu_18678_p3 = (!tmp_101_reg_24115.read()[0].is_01())? sc_lv<8>(): ((tmp_101_reg_24115.read()[0].to_bool())? FR_17_3_V_7_fu_18587_p3.read(): FR_V_17_2_010533_reg_3271.read());
}

void estimate_FR_2::thread_FR_17_3_V_17_fu_18685_p3() {
    FR_17_3_V_17_fu_18685_p3 = (!and_ln321_51_reg_24152.read()[0].is_01())? sc_lv<8>(): ((and_ln321_51_reg_24152.read()[0].to_bool())? FR_17_3_V_7_fu_18587_p3.read(): FR_17_3_V_16_fu_18678_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_18_fu_18692_p3() {
    FR_17_3_V_18_fu_18692_p3 = (!and_ln321_52_reg_24161.read()[0].is_01())? sc_lv<8>(): ((and_ln321_52_reg_24161.read()[0].to_bool())? FR_17_3_V_7_fu_18587_p3.read(): FR_17_3_V_17_fu_18685_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_19_fu_18699_p3() {
    FR_17_3_V_19_fu_18699_p3 = (!and_ln321_53_reg_24171.read()[0].is_01())? sc_lv<8>(): ((and_ln321_53_reg_24171.read()[0].to_bool())? FR_17_3_V_7_fu_18587_p3.read(): FR_17_3_V_18_fu_18692_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_20_fu_18706_p3() {
    FR_17_3_V_20_fu_18706_p3 = (!tmp_101_reg_24115.read()[0].is_01())? sc_lv<8>(): ((tmp_101_reg_24115.read()[0].to_bool())? FR_17_3_V_10_fu_18601_p3.read(): FR_17_3_V_6_reg_3283.read());
}

void estimate_FR_2::thread_FR_17_3_V_21_fu_18713_p3() {
    FR_17_3_V_21_fu_18713_p3 = (!and_ln321_51_reg_24152.read()[0].is_01())? sc_lv<8>(): ((and_ln321_51_reg_24152.read()[0].to_bool())? FR_17_3_V_10_fu_18601_p3.read(): FR_17_3_V_20_fu_18706_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_22_fu_18720_p3() {
    FR_17_3_V_22_fu_18720_p3 = (!and_ln321_52_reg_24161.read()[0].is_01())? sc_lv<8>(): ((and_ln321_52_reg_24161.read()[0].to_bool())? FR_17_3_V_10_fu_18601_p3.read(): FR_17_3_V_21_fu_18713_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_23_fu_18727_p3() {
    FR_17_3_V_23_fu_18727_p3 = (!and_ln321_53_reg_24171.read()[0].is_01())? sc_lv<8>(): ((and_ln321_53_reg_24171.read()[0].to_bool())? FR_17_3_V_10_fu_18601_p3.read(): FR_17_3_V_22_fu_18720_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_24_fu_18734_p3() {
    FR_17_3_V_24_fu_18734_p3 = (!tmp_101_reg_24115.read()[0].is_01())? sc_lv<8>(): ((tmp_101_reg_24115.read()[0].to_bool())? FR_17_3_V_11_fu_18608_p3.read(): FR_17_3_V_9_reg_3295.read());
}

void estimate_FR_2::thread_FR_17_3_V_25_fu_18741_p3() {
    FR_17_3_V_25_fu_18741_p3 = (!and_ln321_51_reg_24152.read()[0].is_01())? sc_lv<8>(): ((and_ln321_51_reg_24152.read()[0].to_bool())? FR_17_3_V_11_fu_18608_p3.read(): FR_17_3_V_24_fu_18734_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_26_fu_18748_p3() {
    FR_17_3_V_26_fu_18748_p3 = (!and_ln321_52_reg_24161.read()[0].is_01())? sc_lv<8>(): ((and_ln321_52_reg_24161.read()[0].to_bool())? FR_17_3_V_11_fu_18608_p3.read(): FR_17_3_V_25_fu_18741_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_27_fu_18755_p3() {
    FR_17_3_V_27_fu_18755_p3 = (!and_ln321_53_reg_24171.read()[0].is_01())? sc_lv<8>(): ((and_ln321_53_reg_24171.read()[0].to_bool())? FR_17_3_V_11_fu_18608_p3.read(): FR_17_3_V_26_fu_18748_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_2_fu_18559_p3() {
    FR_17_3_V_2_fu_18559_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_17_3_010534_reg_3259.read(): FR_17_3_V_fu_18552_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_3_fu_18566_p3() {
    FR_17_3_V_3_fu_18566_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_17_3_010534_reg_3259.read(): FR_17_3_V_2_fu_18559_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_4_fu_18573_p3() {
    FR_17_3_V_4_fu_18573_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_53_fu_18548_p1.read(): FR_V_17_2_010533_reg_3271.read());
}

void estimate_FR_2::thread_FR_17_3_V_5_fu_18580_p3() {
    FR_17_3_V_5_fu_18580_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_17_2_010533_reg_3271.read(): FR_17_3_V_4_fu_18573_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_7_fu_18587_p3() {
    FR_17_3_V_7_fu_18587_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_17_2_010533_reg_3271.read(): FR_17_3_V_5_fu_18580_p3.read());
}

void estimate_FR_2::thread_FR_17_3_V_8_fu_18594_p3() {
    FR_17_3_V_8_fu_18594_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_53_fu_18548_p1.read(): FR_17_3_V_6_reg_3283.read());
}

void estimate_FR_2::thread_FR_17_3_V_fu_18552_p3() {
    FR_17_3_V_fu_18552_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_17_3_010534_reg_3259.read(): zext_ln209_53_fu_18548_p1.read());
}

void estimate_FR_2::thread_FR_18_0_V_fu_18807_p2() {
    FR_18_0_V_fu_18807_p2 = (!zext_ln209_55_fu_18804_p1.read().is_01() || !zext_ln209_54_fu_18800_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_55_fu_18804_p1.read()) + sc_biguint<7>(zext_ln209_54_fu_18800_p1.read()));
}

void estimate_FR_2::thread_FR_18_3_V_10_fu_18866_p3() {
    FR_18_3_V_10_fu_18866_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_18_3_V_6_reg_3235.read(): FR_18_3_V_8_fu_18859_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_11_fu_18873_p3() {
    FR_18_3_V_11_fu_18873_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_56_fu_18813_p1.read(): FR_18_3_V_9_reg_3247.read());
}

void estimate_FR_2::thread_FR_18_3_V_12_fu_18915_p3() {
    FR_18_3_V_12_fu_18915_p3 = (!tmp_102_reg_24211.read()[0].is_01())? sc_lv<8>(): ((tmp_102_reg_24211.read()[0].to_bool())? FR_18_3_V_3_fu_18831_p3.read(): FR_V_18_3_010538_reg_3211.read());
}

void estimate_FR_2::thread_FR_18_3_V_13_fu_18922_p3() {
    FR_18_3_V_13_fu_18922_p3 = (!and_ln321_54_reg_24248.read()[0].is_01())? sc_lv<8>(): ((and_ln321_54_reg_24248.read()[0].to_bool())? FR_18_3_V_3_fu_18831_p3.read(): FR_18_3_V_12_fu_18915_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_14_fu_18929_p3() {
    FR_18_3_V_14_fu_18929_p3 = (!and_ln321_55_reg_24257.read()[0].is_01())? sc_lv<8>(): ((and_ln321_55_reg_24257.read()[0].to_bool())? FR_18_3_V_3_fu_18831_p3.read(): FR_18_3_V_13_fu_18922_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_15_fu_18936_p3() {
    FR_18_3_V_15_fu_18936_p3 = (!and_ln321_56_reg_24267.read()[0].is_01())? sc_lv<8>(): ((and_ln321_56_reg_24267.read()[0].to_bool())? FR_18_3_V_3_fu_18831_p3.read(): FR_18_3_V_14_fu_18929_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_16_fu_18943_p3() {
    FR_18_3_V_16_fu_18943_p3 = (!tmp_102_reg_24211.read()[0].is_01())? sc_lv<8>(): ((tmp_102_reg_24211.read()[0].to_bool())? FR_18_3_V_7_fu_18852_p3.read(): FR_V_18_2_010537_reg_3223.read());
}

void estimate_FR_2::thread_FR_18_3_V_17_fu_18950_p3() {
    FR_18_3_V_17_fu_18950_p3 = (!and_ln321_54_reg_24248.read()[0].is_01())? sc_lv<8>(): ((and_ln321_54_reg_24248.read()[0].to_bool())? FR_18_3_V_7_fu_18852_p3.read(): FR_18_3_V_16_fu_18943_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_18_fu_18957_p3() {
    FR_18_3_V_18_fu_18957_p3 = (!and_ln321_55_reg_24257.read()[0].is_01())? sc_lv<8>(): ((and_ln321_55_reg_24257.read()[0].to_bool())? FR_18_3_V_7_fu_18852_p3.read(): FR_18_3_V_17_fu_18950_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_19_fu_18964_p3() {
    FR_18_3_V_19_fu_18964_p3 = (!and_ln321_56_reg_24267.read()[0].is_01())? sc_lv<8>(): ((and_ln321_56_reg_24267.read()[0].to_bool())? FR_18_3_V_7_fu_18852_p3.read(): FR_18_3_V_18_fu_18957_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_20_fu_18971_p3() {
    FR_18_3_V_20_fu_18971_p3 = (!tmp_102_reg_24211.read()[0].is_01())? sc_lv<8>(): ((tmp_102_reg_24211.read()[0].to_bool())? FR_18_3_V_10_fu_18866_p3.read(): FR_18_3_V_6_reg_3235.read());
}

void estimate_FR_2::thread_FR_18_3_V_21_fu_18978_p3() {
    FR_18_3_V_21_fu_18978_p3 = (!and_ln321_54_reg_24248.read()[0].is_01())? sc_lv<8>(): ((and_ln321_54_reg_24248.read()[0].to_bool())? FR_18_3_V_10_fu_18866_p3.read(): FR_18_3_V_20_fu_18971_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_22_fu_18985_p3() {
    FR_18_3_V_22_fu_18985_p3 = (!and_ln321_55_reg_24257.read()[0].is_01())? sc_lv<8>(): ((and_ln321_55_reg_24257.read()[0].to_bool())? FR_18_3_V_10_fu_18866_p3.read(): FR_18_3_V_21_fu_18978_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_23_fu_18992_p3() {
    FR_18_3_V_23_fu_18992_p3 = (!and_ln321_56_reg_24267.read()[0].is_01())? sc_lv<8>(): ((and_ln321_56_reg_24267.read()[0].to_bool())? FR_18_3_V_10_fu_18866_p3.read(): FR_18_3_V_22_fu_18985_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_24_fu_18999_p3() {
    FR_18_3_V_24_fu_18999_p3 = (!tmp_102_reg_24211.read()[0].is_01())? sc_lv<8>(): ((tmp_102_reg_24211.read()[0].to_bool())? FR_18_3_V_11_fu_18873_p3.read(): FR_18_3_V_9_reg_3247.read());
}

void estimate_FR_2::thread_FR_18_3_V_25_fu_19006_p3() {
    FR_18_3_V_25_fu_19006_p3 = (!and_ln321_54_reg_24248.read()[0].is_01())? sc_lv<8>(): ((and_ln321_54_reg_24248.read()[0].to_bool())? FR_18_3_V_11_fu_18873_p3.read(): FR_18_3_V_24_fu_18999_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_26_fu_19013_p3() {
    FR_18_3_V_26_fu_19013_p3 = (!and_ln321_55_reg_24257.read()[0].is_01())? sc_lv<8>(): ((and_ln321_55_reg_24257.read()[0].to_bool())? FR_18_3_V_11_fu_18873_p3.read(): FR_18_3_V_25_fu_19006_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_27_fu_19020_p3() {
    FR_18_3_V_27_fu_19020_p3 = (!and_ln321_56_reg_24267.read()[0].is_01())? sc_lv<8>(): ((and_ln321_56_reg_24267.read()[0].to_bool())? FR_18_3_V_11_fu_18873_p3.read(): FR_18_3_V_26_fu_19013_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_2_fu_18824_p3() {
    FR_18_3_V_2_fu_18824_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_18_3_010538_reg_3211.read(): FR_18_3_V_fu_18817_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_3_fu_18831_p3() {
    FR_18_3_V_3_fu_18831_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_18_3_010538_reg_3211.read(): FR_18_3_V_2_fu_18824_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_4_fu_18838_p3() {
    FR_18_3_V_4_fu_18838_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_56_fu_18813_p1.read(): FR_V_18_2_010537_reg_3223.read());
}

void estimate_FR_2::thread_FR_18_3_V_5_fu_18845_p3() {
    FR_18_3_V_5_fu_18845_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_18_2_010537_reg_3223.read(): FR_18_3_V_4_fu_18838_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_7_fu_18852_p3() {
    FR_18_3_V_7_fu_18852_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_18_2_010537_reg_3223.read(): FR_18_3_V_5_fu_18845_p3.read());
}

void estimate_FR_2::thread_FR_18_3_V_8_fu_18859_p3() {
    FR_18_3_V_8_fu_18859_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_56_fu_18813_p1.read(): FR_18_3_V_6_reg_3235.read());
}

void estimate_FR_2::thread_FR_18_3_V_fu_18817_p3() {
    FR_18_3_V_fu_18817_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_18_3_010538_reg_3211.read(): zext_ln209_56_fu_18813_p1.read());
}

void estimate_FR_2::thread_FR_19_0_V_fu_19072_p2() {
    FR_19_0_V_fu_19072_p2 = (!zext_ln209_58_fu_19069_p1.read().is_01() || !zext_ln209_57_fu_19065_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_58_fu_19069_p1.read()) + sc_biguint<7>(zext_ln209_57_fu_19065_p1.read()));
}

void estimate_FR_2::thread_FR_19_3_V_10_fu_19131_p3() {
    FR_19_3_V_10_fu_19131_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_19_3_V_6_reg_3187.read(): FR_19_3_V_8_fu_19124_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_11_fu_19138_p3() {
    FR_19_3_V_11_fu_19138_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_59_fu_19078_p1.read(): FR_19_3_V_9_reg_3199.read());
}

void estimate_FR_2::thread_FR_19_3_V_12_fu_19180_p3() {
    FR_19_3_V_12_fu_19180_p3 = (!tmp_103_reg_24307.read()[0].is_01())? sc_lv<8>(): ((tmp_103_reg_24307.read()[0].to_bool())? FR_19_3_V_3_fu_19096_p3.read(): FR_V_19_3_010542_reg_3163.read());
}

void estimate_FR_2::thread_FR_19_3_V_13_fu_19187_p3() {
    FR_19_3_V_13_fu_19187_p3 = (!and_ln321_57_reg_24344.read()[0].is_01())? sc_lv<8>(): ((and_ln321_57_reg_24344.read()[0].to_bool())? FR_19_3_V_3_fu_19096_p3.read(): FR_19_3_V_12_fu_19180_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_14_fu_19194_p3() {
    FR_19_3_V_14_fu_19194_p3 = (!and_ln321_58_reg_24353.read()[0].is_01())? sc_lv<8>(): ((and_ln321_58_reg_24353.read()[0].to_bool())? FR_19_3_V_3_fu_19096_p3.read(): FR_19_3_V_13_fu_19187_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_15_fu_19201_p3() {
    FR_19_3_V_15_fu_19201_p3 = (!and_ln321_59_reg_24363.read()[0].is_01())? sc_lv<8>(): ((and_ln321_59_reg_24363.read()[0].to_bool())? FR_19_3_V_3_fu_19096_p3.read(): FR_19_3_V_14_fu_19194_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_16_fu_19208_p3() {
    FR_19_3_V_16_fu_19208_p3 = (!tmp_103_reg_24307.read()[0].is_01())? sc_lv<8>(): ((tmp_103_reg_24307.read()[0].to_bool())? FR_19_3_V_7_fu_19117_p3.read(): FR_V_19_2_010541_reg_3175.read());
}

void estimate_FR_2::thread_FR_19_3_V_17_fu_19215_p3() {
    FR_19_3_V_17_fu_19215_p3 = (!and_ln321_57_reg_24344.read()[0].is_01())? sc_lv<8>(): ((and_ln321_57_reg_24344.read()[0].to_bool())? FR_19_3_V_7_fu_19117_p3.read(): FR_19_3_V_16_fu_19208_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_18_fu_19222_p3() {
    FR_19_3_V_18_fu_19222_p3 = (!and_ln321_58_reg_24353.read()[0].is_01())? sc_lv<8>(): ((and_ln321_58_reg_24353.read()[0].to_bool())? FR_19_3_V_7_fu_19117_p3.read(): FR_19_3_V_17_fu_19215_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_19_fu_19229_p3() {
    FR_19_3_V_19_fu_19229_p3 = (!and_ln321_59_reg_24363.read()[0].is_01())? sc_lv<8>(): ((and_ln321_59_reg_24363.read()[0].to_bool())? FR_19_3_V_7_fu_19117_p3.read(): FR_19_3_V_18_fu_19222_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_20_fu_19236_p3() {
    FR_19_3_V_20_fu_19236_p3 = (!tmp_103_reg_24307.read()[0].is_01())? sc_lv<8>(): ((tmp_103_reg_24307.read()[0].to_bool())? FR_19_3_V_10_fu_19131_p3.read(): FR_19_3_V_6_reg_3187.read());
}

void estimate_FR_2::thread_FR_19_3_V_21_fu_19243_p3() {
    FR_19_3_V_21_fu_19243_p3 = (!and_ln321_57_reg_24344.read()[0].is_01())? sc_lv<8>(): ((and_ln321_57_reg_24344.read()[0].to_bool())? FR_19_3_V_10_fu_19131_p3.read(): FR_19_3_V_20_fu_19236_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_22_fu_19250_p3() {
    FR_19_3_V_22_fu_19250_p3 = (!and_ln321_58_reg_24353.read()[0].is_01())? sc_lv<8>(): ((and_ln321_58_reg_24353.read()[0].to_bool())? FR_19_3_V_10_fu_19131_p3.read(): FR_19_3_V_21_fu_19243_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_23_fu_19257_p3() {
    FR_19_3_V_23_fu_19257_p3 = (!and_ln321_59_reg_24363.read()[0].is_01())? sc_lv<8>(): ((and_ln321_59_reg_24363.read()[0].to_bool())? FR_19_3_V_10_fu_19131_p3.read(): FR_19_3_V_22_fu_19250_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_24_fu_19264_p3() {
    FR_19_3_V_24_fu_19264_p3 = (!tmp_103_reg_24307.read()[0].is_01())? sc_lv<8>(): ((tmp_103_reg_24307.read()[0].to_bool())? FR_19_3_V_11_fu_19138_p3.read(): FR_19_3_V_9_reg_3199.read());
}

void estimate_FR_2::thread_FR_19_3_V_25_fu_19271_p3() {
    FR_19_3_V_25_fu_19271_p3 = (!and_ln321_57_reg_24344.read()[0].is_01())? sc_lv<8>(): ((and_ln321_57_reg_24344.read()[0].to_bool())? FR_19_3_V_11_fu_19138_p3.read(): FR_19_3_V_24_fu_19264_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_26_fu_19278_p3() {
    FR_19_3_V_26_fu_19278_p3 = (!and_ln321_58_reg_24353.read()[0].is_01())? sc_lv<8>(): ((and_ln321_58_reg_24353.read()[0].to_bool())? FR_19_3_V_11_fu_19138_p3.read(): FR_19_3_V_25_fu_19271_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_27_fu_19285_p3() {
    FR_19_3_V_27_fu_19285_p3 = (!and_ln321_59_reg_24363.read()[0].is_01())? sc_lv<8>(): ((and_ln321_59_reg_24363.read()[0].to_bool())? FR_19_3_V_11_fu_19138_p3.read(): FR_19_3_V_26_fu_19278_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_2_fu_19089_p3() {
    FR_19_3_V_2_fu_19089_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_19_3_010542_reg_3163.read(): FR_19_3_V_fu_19082_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_3_fu_19096_p3() {
    FR_19_3_V_3_fu_19096_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_19_3_010542_reg_3163.read(): FR_19_3_V_2_fu_19089_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_4_fu_19103_p3() {
    FR_19_3_V_4_fu_19103_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_59_fu_19078_p1.read(): FR_V_19_2_010541_reg_3175.read());
}

void estimate_FR_2::thread_FR_19_3_V_5_fu_19110_p3() {
    FR_19_3_V_5_fu_19110_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_19_2_010541_reg_3175.read(): FR_19_3_V_4_fu_19103_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_7_fu_19117_p3() {
    FR_19_3_V_7_fu_19117_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_19_2_010541_reg_3175.read(): FR_19_3_V_5_fu_19110_p3.read());
}

void estimate_FR_2::thread_FR_19_3_V_8_fu_19124_p3() {
    FR_19_3_V_8_fu_19124_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_59_fu_19078_p1.read(): FR_19_3_V_6_reg_3187.read());
}

void estimate_FR_2::thread_FR_19_3_V_fu_19082_p3() {
    FR_19_3_V_fu_19082_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_19_3_010542_reg_3163.read(): zext_ln209_59_fu_19078_p1.read());
}

void estimate_FR_2::thread_FR_1_0_V_fu_14302_p2() {
    FR_1_0_V_fu_14302_p2 = (!zext_ln209_4_fu_14299_p1.read().is_01() || !zext_ln209_3_fu_14295_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_4_fu_14299_p1.read()) + sc_biguint<7>(zext_ln209_3_fu_14295_p1.read()));
}

void estimate_FR_2::thread_FR_1_3_V_10_fu_14361_p3() {
    FR_1_3_V_10_fu_14361_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_1_3_V_6_reg_4051.read(): FR_1_3_V_8_fu_14354_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_11_fu_14368_p3() {
    FR_1_3_V_11_fu_14368_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_5_fu_14308_p1.read(): FR_1_3_V_9_reg_4063.read());
}

void estimate_FR_2::thread_FR_1_3_V_12_fu_14410_p3() {
    FR_1_3_V_12_fu_14410_p3 = (!tmp_85_reg_22579.read()[0].is_01())? sc_lv<8>(): ((tmp_85_reg_22579.read()[0].to_bool())? FR_1_3_V_3_fu_14326_p3.read(): FR_V_1_3_010470_reg_4027.read());
}

void estimate_FR_2::thread_FR_1_3_V_13_fu_14417_p3() {
    FR_1_3_V_13_fu_14417_p3 = (!and_ln321_3_reg_22616.read()[0].is_01())? sc_lv<8>(): ((and_ln321_3_reg_22616.read()[0].to_bool())? FR_1_3_V_3_fu_14326_p3.read(): FR_1_3_V_12_fu_14410_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_14_fu_14424_p3() {
    FR_1_3_V_14_fu_14424_p3 = (!and_ln321_4_reg_22625.read()[0].is_01())? sc_lv<8>(): ((and_ln321_4_reg_22625.read()[0].to_bool())? FR_1_3_V_3_fu_14326_p3.read(): FR_1_3_V_13_fu_14417_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_15_fu_14431_p3() {
    FR_1_3_V_15_fu_14431_p3 = (!and_ln321_5_reg_22635.read()[0].is_01())? sc_lv<8>(): ((and_ln321_5_reg_22635.read()[0].to_bool())? FR_1_3_V_3_fu_14326_p3.read(): FR_1_3_V_14_fu_14424_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_16_fu_14438_p3() {
    FR_1_3_V_16_fu_14438_p3 = (!tmp_85_reg_22579.read()[0].is_01())? sc_lv<8>(): ((tmp_85_reg_22579.read()[0].to_bool())? FR_1_3_V_7_fu_14347_p3.read(): FR_V_1_2_010469_reg_4039.read());
}

void estimate_FR_2::thread_FR_1_3_V_17_fu_14445_p3() {
    FR_1_3_V_17_fu_14445_p3 = (!and_ln321_3_reg_22616.read()[0].is_01())? sc_lv<8>(): ((and_ln321_3_reg_22616.read()[0].to_bool())? FR_1_3_V_7_fu_14347_p3.read(): FR_1_3_V_16_fu_14438_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_18_fu_14452_p3() {
    FR_1_3_V_18_fu_14452_p3 = (!and_ln321_4_reg_22625.read()[0].is_01())? sc_lv<8>(): ((and_ln321_4_reg_22625.read()[0].to_bool())? FR_1_3_V_7_fu_14347_p3.read(): FR_1_3_V_17_fu_14445_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_19_fu_14459_p3() {
    FR_1_3_V_19_fu_14459_p3 = (!and_ln321_5_reg_22635.read()[0].is_01())? sc_lv<8>(): ((and_ln321_5_reg_22635.read()[0].to_bool())? FR_1_3_V_7_fu_14347_p3.read(): FR_1_3_V_18_fu_14452_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_20_fu_14466_p3() {
    FR_1_3_V_20_fu_14466_p3 = (!tmp_85_reg_22579.read()[0].is_01())? sc_lv<8>(): ((tmp_85_reg_22579.read()[0].to_bool())? FR_1_3_V_10_fu_14361_p3.read(): FR_1_3_V_6_reg_4051.read());
}

void estimate_FR_2::thread_FR_1_3_V_21_fu_14473_p3() {
    FR_1_3_V_21_fu_14473_p3 = (!and_ln321_3_reg_22616.read()[0].is_01())? sc_lv<8>(): ((and_ln321_3_reg_22616.read()[0].to_bool())? FR_1_3_V_10_fu_14361_p3.read(): FR_1_3_V_20_fu_14466_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_22_fu_14480_p3() {
    FR_1_3_V_22_fu_14480_p3 = (!and_ln321_4_reg_22625.read()[0].is_01())? sc_lv<8>(): ((and_ln321_4_reg_22625.read()[0].to_bool())? FR_1_3_V_10_fu_14361_p3.read(): FR_1_3_V_21_fu_14473_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_23_fu_14487_p3() {
    FR_1_3_V_23_fu_14487_p3 = (!and_ln321_5_reg_22635.read()[0].is_01())? sc_lv<8>(): ((and_ln321_5_reg_22635.read()[0].to_bool())? FR_1_3_V_10_fu_14361_p3.read(): FR_1_3_V_22_fu_14480_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_24_fu_14494_p3() {
    FR_1_3_V_24_fu_14494_p3 = (!tmp_85_reg_22579.read()[0].is_01())? sc_lv<8>(): ((tmp_85_reg_22579.read()[0].to_bool())? FR_1_3_V_11_fu_14368_p3.read(): FR_1_3_V_9_reg_4063.read());
}

void estimate_FR_2::thread_FR_1_3_V_25_fu_14501_p3() {
    FR_1_3_V_25_fu_14501_p3 = (!and_ln321_3_reg_22616.read()[0].is_01())? sc_lv<8>(): ((and_ln321_3_reg_22616.read()[0].to_bool())? FR_1_3_V_11_fu_14368_p3.read(): FR_1_3_V_24_fu_14494_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_26_fu_14508_p3() {
    FR_1_3_V_26_fu_14508_p3 = (!and_ln321_4_reg_22625.read()[0].is_01())? sc_lv<8>(): ((and_ln321_4_reg_22625.read()[0].to_bool())? FR_1_3_V_11_fu_14368_p3.read(): FR_1_3_V_25_fu_14501_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_27_fu_14515_p3() {
    FR_1_3_V_27_fu_14515_p3 = (!and_ln321_5_reg_22635.read()[0].is_01())? sc_lv<8>(): ((and_ln321_5_reg_22635.read()[0].to_bool())? FR_1_3_V_11_fu_14368_p3.read(): FR_1_3_V_26_fu_14508_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_2_fu_14319_p3() {
    FR_1_3_V_2_fu_14319_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_1_3_010470_reg_4027.read(): FR_1_3_V_fu_14312_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_3_fu_14326_p3() {
    FR_1_3_V_3_fu_14326_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_1_3_010470_reg_4027.read(): FR_1_3_V_2_fu_14319_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_4_fu_14333_p3() {
    FR_1_3_V_4_fu_14333_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_5_fu_14308_p1.read(): FR_V_1_2_010469_reg_4039.read());
}

void estimate_FR_2::thread_FR_1_3_V_5_fu_14340_p3() {
    FR_1_3_V_5_fu_14340_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_1_2_010469_reg_4039.read(): FR_1_3_V_4_fu_14333_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_7_fu_14347_p3() {
    FR_1_3_V_7_fu_14347_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_1_2_010469_reg_4039.read(): FR_1_3_V_5_fu_14340_p3.read());
}

void estimate_FR_2::thread_FR_1_3_V_8_fu_14354_p3() {
    FR_1_3_V_8_fu_14354_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_5_fu_14308_p1.read(): FR_1_3_V_6_reg_4051.read());
}

void estimate_FR_2::thread_FR_1_3_V_fu_14312_p3() {
    FR_1_3_V_fu_14312_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_1_3_010470_reg_4027.read(): zext_ln209_5_fu_14308_p1.read());
}

void estimate_FR_2::thread_FR_20_0_V_fu_19337_p2() {
    FR_20_0_V_fu_19337_p2 = (!zext_ln209_61_fu_19334_p1.read().is_01() || !zext_ln209_60_fu_19330_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_61_fu_19334_p1.read()) + sc_biguint<7>(zext_ln209_60_fu_19330_p1.read()));
}

void estimate_FR_2::thread_FR_20_3_V_10_fu_19396_p3() {
    FR_20_3_V_10_fu_19396_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_20_3_V_6_reg_3139.read(): FR_20_3_V_8_fu_19389_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_11_fu_19403_p3() {
    FR_20_3_V_11_fu_19403_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_62_fu_19343_p1.read(): FR_20_3_V_9_reg_3151.read());
}

void estimate_FR_2::thread_FR_20_3_V_12_fu_19445_p3() {
    FR_20_3_V_12_fu_19445_p3 = (!tmp_104_reg_24403.read()[0].is_01())? sc_lv<8>(): ((tmp_104_reg_24403.read()[0].to_bool())? FR_20_3_V_3_fu_19361_p3.read(): FR_V_20_3_010546_reg_3115.read());
}

void estimate_FR_2::thread_FR_20_3_V_13_fu_19452_p3() {
    FR_20_3_V_13_fu_19452_p3 = (!and_ln321_60_reg_24440.read()[0].is_01())? sc_lv<8>(): ((and_ln321_60_reg_24440.read()[0].to_bool())? FR_20_3_V_3_fu_19361_p3.read(): FR_20_3_V_12_fu_19445_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_14_fu_19459_p3() {
    FR_20_3_V_14_fu_19459_p3 = (!and_ln321_61_reg_24449.read()[0].is_01())? sc_lv<8>(): ((and_ln321_61_reg_24449.read()[0].to_bool())? FR_20_3_V_3_fu_19361_p3.read(): FR_20_3_V_13_fu_19452_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_15_fu_19466_p3() {
    FR_20_3_V_15_fu_19466_p3 = (!and_ln321_62_reg_24459.read()[0].is_01())? sc_lv<8>(): ((and_ln321_62_reg_24459.read()[0].to_bool())? FR_20_3_V_3_fu_19361_p3.read(): FR_20_3_V_14_fu_19459_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_16_fu_19473_p3() {
    FR_20_3_V_16_fu_19473_p3 = (!tmp_104_reg_24403.read()[0].is_01())? sc_lv<8>(): ((tmp_104_reg_24403.read()[0].to_bool())? FR_20_3_V_7_fu_19382_p3.read(): FR_V_20_2_010545_reg_3127.read());
}

void estimate_FR_2::thread_FR_20_3_V_17_fu_19480_p3() {
    FR_20_3_V_17_fu_19480_p3 = (!and_ln321_60_reg_24440.read()[0].is_01())? sc_lv<8>(): ((and_ln321_60_reg_24440.read()[0].to_bool())? FR_20_3_V_7_fu_19382_p3.read(): FR_20_3_V_16_fu_19473_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_18_fu_19487_p3() {
    FR_20_3_V_18_fu_19487_p3 = (!and_ln321_61_reg_24449.read()[0].is_01())? sc_lv<8>(): ((and_ln321_61_reg_24449.read()[0].to_bool())? FR_20_3_V_7_fu_19382_p3.read(): FR_20_3_V_17_fu_19480_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_19_fu_19494_p3() {
    FR_20_3_V_19_fu_19494_p3 = (!and_ln321_62_reg_24459.read()[0].is_01())? sc_lv<8>(): ((and_ln321_62_reg_24459.read()[0].to_bool())? FR_20_3_V_7_fu_19382_p3.read(): FR_20_3_V_18_fu_19487_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_20_fu_19501_p3() {
    FR_20_3_V_20_fu_19501_p3 = (!tmp_104_reg_24403.read()[0].is_01())? sc_lv<8>(): ((tmp_104_reg_24403.read()[0].to_bool())? FR_20_3_V_10_fu_19396_p3.read(): FR_20_3_V_6_reg_3139.read());
}

void estimate_FR_2::thread_FR_20_3_V_21_fu_19508_p3() {
    FR_20_3_V_21_fu_19508_p3 = (!and_ln321_60_reg_24440.read()[0].is_01())? sc_lv<8>(): ((and_ln321_60_reg_24440.read()[0].to_bool())? FR_20_3_V_10_fu_19396_p3.read(): FR_20_3_V_20_fu_19501_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_22_fu_19515_p3() {
    FR_20_3_V_22_fu_19515_p3 = (!and_ln321_61_reg_24449.read()[0].is_01())? sc_lv<8>(): ((and_ln321_61_reg_24449.read()[0].to_bool())? FR_20_3_V_10_fu_19396_p3.read(): FR_20_3_V_21_fu_19508_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_23_fu_19522_p3() {
    FR_20_3_V_23_fu_19522_p3 = (!and_ln321_62_reg_24459.read()[0].is_01())? sc_lv<8>(): ((and_ln321_62_reg_24459.read()[0].to_bool())? FR_20_3_V_10_fu_19396_p3.read(): FR_20_3_V_22_fu_19515_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_24_fu_19529_p3() {
    FR_20_3_V_24_fu_19529_p3 = (!tmp_104_reg_24403.read()[0].is_01())? sc_lv<8>(): ((tmp_104_reg_24403.read()[0].to_bool())? FR_20_3_V_11_fu_19403_p3.read(): FR_20_3_V_9_reg_3151.read());
}

void estimate_FR_2::thread_FR_20_3_V_25_fu_19536_p3() {
    FR_20_3_V_25_fu_19536_p3 = (!and_ln321_60_reg_24440.read()[0].is_01())? sc_lv<8>(): ((and_ln321_60_reg_24440.read()[0].to_bool())? FR_20_3_V_11_fu_19403_p3.read(): FR_20_3_V_24_fu_19529_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_26_fu_19543_p3() {
    FR_20_3_V_26_fu_19543_p3 = (!and_ln321_61_reg_24449.read()[0].is_01())? sc_lv<8>(): ((and_ln321_61_reg_24449.read()[0].to_bool())? FR_20_3_V_11_fu_19403_p3.read(): FR_20_3_V_25_fu_19536_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_27_fu_19550_p3() {
    FR_20_3_V_27_fu_19550_p3 = (!and_ln321_62_reg_24459.read()[0].is_01())? sc_lv<8>(): ((and_ln321_62_reg_24459.read()[0].to_bool())? FR_20_3_V_11_fu_19403_p3.read(): FR_20_3_V_26_fu_19543_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_2_fu_19354_p3() {
    FR_20_3_V_2_fu_19354_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_20_3_010546_reg_3115.read(): FR_20_3_V_fu_19347_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_3_fu_19361_p3() {
    FR_20_3_V_3_fu_19361_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_20_3_010546_reg_3115.read(): FR_20_3_V_2_fu_19354_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_4_fu_19368_p3() {
    FR_20_3_V_4_fu_19368_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_62_fu_19343_p1.read(): FR_V_20_2_010545_reg_3127.read());
}

void estimate_FR_2::thread_FR_20_3_V_5_fu_19375_p3() {
    FR_20_3_V_5_fu_19375_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_20_2_010545_reg_3127.read(): FR_20_3_V_4_fu_19368_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_7_fu_19382_p3() {
    FR_20_3_V_7_fu_19382_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_20_2_010545_reg_3127.read(): FR_20_3_V_5_fu_19375_p3.read());
}

void estimate_FR_2::thread_FR_20_3_V_8_fu_19389_p3() {
    FR_20_3_V_8_fu_19389_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_62_fu_19343_p1.read(): FR_20_3_V_6_reg_3139.read());
}

void estimate_FR_2::thread_FR_20_3_V_fu_19347_p3() {
    FR_20_3_V_fu_19347_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_20_3_010546_reg_3115.read(): zext_ln209_62_fu_19343_p1.read());
}

void estimate_FR_2::thread_FR_21_0_V_fu_19602_p2() {
    FR_21_0_V_fu_19602_p2 = (!zext_ln209_64_fu_19599_p1.read().is_01() || !zext_ln209_63_fu_19595_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_64_fu_19599_p1.read()) + sc_biguint<7>(zext_ln209_63_fu_19595_p1.read()));
}

void estimate_FR_2::thread_FR_21_3_V_10_fu_19661_p3() {
    FR_21_3_V_10_fu_19661_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_21_3_V_6_reg_3091.read(): FR_21_3_V_8_fu_19654_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_11_fu_19668_p3() {
    FR_21_3_V_11_fu_19668_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_65_fu_19608_p1.read(): FR_21_3_V_9_reg_3103.read());
}

void estimate_FR_2::thread_FR_21_3_V_12_fu_19710_p3() {
    FR_21_3_V_12_fu_19710_p3 = (!tmp_105_reg_24499.read()[0].is_01())? sc_lv<8>(): ((tmp_105_reg_24499.read()[0].to_bool())? FR_21_3_V_3_fu_19626_p3.read(): FR_V_21_3_010550_reg_3067.read());
}

void estimate_FR_2::thread_FR_21_3_V_13_fu_19717_p3() {
    FR_21_3_V_13_fu_19717_p3 = (!and_ln321_63_reg_24536.read()[0].is_01())? sc_lv<8>(): ((and_ln321_63_reg_24536.read()[0].to_bool())? FR_21_3_V_3_fu_19626_p3.read(): FR_21_3_V_12_fu_19710_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_14_fu_19724_p3() {
    FR_21_3_V_14_fu_19724_p3 = (!and_ln321_64_reg_24545.read()[0].is_01())? sc_lv<8>(): ((and_ln321_64_reg_24545.read()[0].to_bool())? FR_21_3_V_3_fu_19626_p3.read(): FR_21_3_V_13_fu_19717_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_15_fu_19731_p3() {
    FR_21_3_V_15_fu_19731_p3 = (!and_ln321_65_reg_24555.read()[0].is_01())? sc_lv<8>(): ((and_ln321_65_reg_24555.read()[0].to_bool())? FR_21_3_V_3_fu_19626_p3.read(): FR_21_3_V_14_fu_19724_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_16_fu_19738_p3() {
    FR_21_3_V_16_fu_19738_p3 = (!tmp_105_reg_24499.read()[0].is_01())? sc_lv<8>(): ((tmp_105_reg_24499.read()[0].to_bool())? FR_21_3_V_7_fu_19647_p3.read(): FR_V_21_2_010549_reg_3079.read());
}

void estimate_FR_2::thread_FR_21_3_V_17_fu_19745_p3() {
    FR_21_3_V_17_fu_19745_p3 = (!and_ln321_63_reg_24536.read()[0].is_01())? sc_lv<8>(): ((and_ln321_63_reg_24536.read()[0].to_bool())? FR_21_3_V_7_fu_19647_p3.read(): FR_21_3_V_16_fu_19738_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_18_fu_19752_p3() {
    FR_21_3_V_18_fu_19752_p3 = (!and_ln321_64_reg_24545.read()[0].is_01())? sc_lv<8>(): ((and_ln321_64_reg_24545.read()[0].to_bool())? FR_21_3_V_7_fu_19647_p3.read(): FR_21_3_V_17_fu_19745_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_19_fu_19759_p3() {
    FR_21_3_V_19_fu_19759_p3 = (!and_ln321_65_reg_24555.read()[0].is_01())? sc_lv<8>(): ((and_ln321_65_reg_24555.read()[0].to_bool())? FR_21_3_V_7_fu_19647_p3.read(): FR_21_3_V_18_fu_19752_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_20_fu_19766_p3() {
    FR_21_3_V_20_fu_19766_p3 = (!tmp_105_reg_24499.read()[0].is_01())? sc_lv<8>(): ((tmp_105_reg_24499.read()[0].to_bool())? FR_21_3_V_10_fu_19661_p3.read(): FR_21_3_V_6_reg_3091.read());
}

void estimate_FR_2::thread_FR_21_3_V_21_fu_19773_p3() {
    FR_21_3_V_21_fu_19773_p3 = (!and_ln321_63_reg_24536.read()[0].is_01())? sc_lv<8>(): ((and_ln321_63_reg_24536.read()[0].to_bool())? FR_21_3_V_10_fu_19661_p3.read(): FR_21_3_V_20_fu_19766_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_22_fu_19780_p3() {
    FR_21_3_V_22_fu_19780_p3 = (!and_ln321_64_reg_24545.read()[0].is_01())? sc_lv<8>(): ((and_ln321_64_reg_24545.read()[0].to_bool())? FR_21_3_V_10_fu_19661_p3.read(): FR_21_3_V_21_fu_19773_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_23_fu_19787_p3() {
    FR_21_3_V_23_fu_19787_p3 = (!and_ln321_65_reg_24555.read()[0].is_01())? sc_lv<8>(): ((and_ln321_65_reg_24555.read()[0].to_bool())? FR_21_3_V_10_fu_19661_p3.read(): FR_21_3_V_22_fu_19780_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_24_fu_19794_p3() {
    FR_21_3_V_24_fu_19794_p3 = (!tmp_105_reg_24499.read()[0].is_01())? sc_lv<8>(): ((tmp_105_reg_24499.read()[0].to_bool())? FR_21_3_V_11_fu_19668_p3.read(): FR_21_3_V_9_reg_3103.read());
}

void estimate_FR_2::thread_FR_21_3_V_25_fu_19801_p3() {
    FR_21_3_V_25_fu_19801_p3 = (!and_ln321_63_reg_24536.read()[0].is_01())? sc_lv<8>(): ((and_ln321_63_reg_24536.read()[0].to_bool())? FR_21_3_V_11_fu_19668_p3.read(): FR_21_3_V_24_fu_19794_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_26_fu_19808_p3() {
    FR_21_3_V_26_fu_19808_p3 = (!and_ln321_64_reg_24545.read()[0].is_01())? sc_lv<8>(): ((and_ln321_64_reg_24545.read()[0].to_bool())? FR_21_3_V_11_fu_19668_p3.read(): FR_21_3_V_25_fu_19801_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_27_fu_19815_p3() {
    FR_21_3_V_27_fu_19815_p3 = (!and_ln321_65_reg_24555.read()[0].is_01())? sc_lv<8>(): ((and_ln321_65_reg_24555.read()[0].to_bool())? FR_21_3_V_11_fu_19668_p3.read(): FR_21_3_V_26_fu_19808_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_2_fu_19619_p3() {
    FR_21_3_V_2_fu_19619_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_21_3_010550_reg_3067.read(): FR_21_3_V_fu_19612_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_3_fu_19626_p3() {
    FR_21_3_V_3_fu_19626_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_21_3_010550_reg_3067.read(): FR_21_3_V_2_fu_19619_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_4_fu_19633_p3() {
    FR_21_3_V_4_fu_19633_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_65_fu_19608_p1.read(): FR_V_21_2_010549_reg_3079.read());
}

void estimate_FR_2::thread_FR_21_3_V_5_fu_19640_p3() {
    FR_21_3_V_5_fu_19640_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_21_2_010549_reg_3079.read(): FR_21_3_V_4_fu_19633_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_7_fu_19647_p3() {
    FR_21_3_V_7_fu_19647_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_21_2_010549_reg_3079.read(): FR_21_3_V_5_fu_19640_p3.read());
}

void estimate_FR_2::thread_FR_21_3_V_8_fu_19654_p3() {
    FR_21_3_V_8_fu_19654_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_65_fu_19608_p1.read(): FR_21_3_V_6_reg_3091.read());
}

void estimate_FR_2::thread_FR_21_3_V_fu_19612_p3() {
    FR_21_3_V_fu_19612_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_21_3_010550_reg_3067.read(): zext_ln209_65_fu_19608_p1.read());
}

void estimate_FR_2::thread_FR_22_0_V_fu_19867_p2() {
    FR_22_0_V_fu_19867_p2 = (!zext_ln209_67_fu_19864_p1.read().is_01() || !zext_ln209_66_fu_19860_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_67_fu_19864_p1.read()) + sc_biguint<7>(zext_ln209_66_fu_19860_p1.read()));
}

void estimate_FR_2::thread_FR_22_3_V_10_fu_19926_p3() {
    FR_22_3_V_10_fu_19926_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_22_3_V_6_reg_3043.read(): FR_22_3_V_8_fu_19919_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_11_fu_19933_p3() {
    FR_22_3_V_11_fu_19933_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_68_fu_19873_p1.read(): FR_22_3_V_9_reg_3055.read());
}

void estimate_FR_2::thread_FR_22_3_V_12_fu_19975_p3() {
    FR_22_3_V_12_fu_19975_p3 = (!tmp_106_reg_24595.read()[0].is_01())? sc_lv<8>(): ((tmp_106_reg_24595.read()[0].to_bool())? FR_22_3_V_3_fu_19891_p3.read(): FR_V_22_3_010554_reg_3019.read());
}

void estimate_FR_2::thread_FR_22_3_V_13_fu_19982_p3() {
    FR_22_3_V_13_fu_19982_p3 = (!and_ln321_66_reg_24632.read()[0].is_01())? sc_lv<8>(): ((and_ln321_66_reg_24632.read()[0].to_bool())? FR_22_3_V_3_fu_19891_p3.read(): FR_22_3_V_12_fu_19975_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_14_fu_19989_p3() {
    FR_22_3_V_14_fu_19989_p3 = (!and_ln321_67_reg_24641.read()[0].is_01())? sc_lv<8>(): ((and_ln321_67_reg_24641.read()[0].to_bool())? FR_22_3_V_3_fu_19891_p3.read(): FR_22_3_V_13_fu_19982_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_15_fu_19996_p3() {
    FR_22_3_V_15_fu_19996_p3 = (!and_ln321_68_reg_24651.read()[0].is_01())? sc_lv<8>(): ((and_ln321_68_reg_24651.read()[0].to_bool())? FR_22_3_V_3_fu_19891_p3.read(): FR_22_3_V_14_fu_19989_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_16_fu_20003_p3() {
    FR_22_3_V_16_fu_20003_p3 = (!tmp_106_reg_24595.read()[0].is_01())? sc_lv<8>(): ((tmp_106_reg_24595.read()[0].to_bool())? FR_22_3_V_7_fu_19912_p3.read(): FR_V_22_2_010553_reg_3031.read());
}

void estimate_FR_2::thread_FR_22_3_V_17_fu_20010_p3() {
    FR_22_3_V_17_fu_20010_p3 = (!and_ln321_66_reg_24632.read()[0].is_01())? sc_lv<8>(): ((and_ln321_66_reg_24632.read()[0].to_bool())? FR_22_3_V_7_fu_19912_p3.read(): FR_22_3_V_16_fu_20003_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_18_fu_20017_p3() {
    FR_22_3_V_18_fu_20017_p3 = (!and_ln321_67_reg_24641.read()[0].is_01())? sc_lv<8>(): ((and_ln321_67_reg_24641.read()[0].to_bool())? FR_22_3_V_7_fu_19912_p3.read(): FR_22_3_V_17_fu_20010_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_19_fu_20024_p3() {
    FR_22_3_V_19_fu_20024_p3 = (!and_ln321_68_reg_24651.read()[0].is_01())? sc_lv<8>(): ((and_ln321_68_reg_24651.read()[0].to_bool())? FR_22_3_V_7_fu_19912_p3.read(): FR_22_3_V_18_fu_20017_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_20_fu_20031_p3() {
    FR_22_3_V_20_fu_20031_p3 = (!tmp_106_reg_24595.read()[0].is_01())? sc_lv<8>(): ((tmp_106_reg_24595.read()[0].to_bool())? FR_22_3_V_10_fu_19926_p3.read(): FR_22_3_V_6_reg_3043.read());
}

void estimate_FR_2::thread_FR_22_3_V_21_fu_20038_p3() {
    FR_22_3_V_21_fu_20038_p3 = (!and_ln321_66_reg_24632.read()[0].is_01())? sc_lv<8>(): ((and_ln321_66_reg_24632.read()[0].to_bool())? FR_22_3_V_10_fu_19926_p3.read(): FR_22_3_V_20_fu_20031_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_22_fu_20045_p3() {
    FR_22_3_V_22_fu_20045_p3 = (!and_ln321_67_reg_24641.read()[0].is_01())? sc_lv<8>(): ((and_ln321_67_reg_24641.read()[0].to_bool())? FR_22_3_V_10_fu_19926_p3.read(): FR_22_3_V_21_fu_20038_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_23_fu_20052_p3() {
    FR_22_3_V_23_fu_20052_p3 = (!and_ln321_68_reg_24651.read()[0].is_01())? sc_lv<8>(): ((and_ln321_68_reg_24651.read()[0].to_bool())? FR_22_3_V_10_fu_19926_p3.read(): FR_22_3_V_22_fu_20045_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_24_fu_20059_p3() {
    FR_22_3_V_24_fu_20059_p3 = (!tmp_106_reg_24595.read()[0].is_01())? sc_lv<8>(): ((tmp_106_reg_24595.read()[0].to_bool())? FR_22_3_V_11_fu_19933_p3.read(): FR_22_3_V_9_reg_3055.read());
}

void estimate_FR_2::thread_FR_22_3_V_25_fu_20066_p3() {
    FR_22_3_V_25_fu_20066_p3 = (!and_ln321_66_reg_24632.read()[0].is_01())? sc_lv<8>(): ((and_ln321_66_reg_24632.read()[0].to_bool())? FR_22_3_V_11_fu_19933_p3.read(): FR_22_3_V_24_fu_20059_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_26_fu_20073_p3() {
    FR_22_3_V_26_fu_20073_p3 = (!and_ln321_67_reg_24641.read()[0].is_01())? sc_lv<8>(): ((and_ln321_67_reg_24641.read()[0].to_bool())? FR_22_3_V_11_fu_19933_p3.read(): FR_22_3_V_25_fu_20066_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_27_fu_20080_p3() {
    FR_22_3_V_27_fu_20080_p3 = (!and_ln321_68_reg_24651.read()[0].is_01())? sc_lv<8>(): ((and_ln321_68_reg_24651.read()[0].to_bool())? FR_22_3_V_11_fu_19933_p3.read(): FR_22_3_V_26_fu_20073_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_2_fu_19884_p3() {
    FR_22_3_V_2_fu_19884_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_22_3_010554_reg_3019.read(): FR_22_3_V_fu_19877_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_3_fu_19891_p3() {
    FR_22_3_V_3_fu_19891_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_22_3_010554_reg_3019.read(): FR_22_3_V_2_fu_19884_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_4_fu_19898_p3() {
    FR_22_3_V_4_fu_19898_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_68_fu_19873_p1.read(): FR_V_22_2_010553_reg_3031.read());
}

void estimate_FR_2::thread_FR_22_3_V_5_fu_19905_p3() {
    FR_22_3_V_5_fu_19905_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_22_2_010553_reg_3031.read(): FR_22_3_V_4_fu_19898_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_7_fu_19912_p3() {
    FR_22_3_V_7_fu_19912_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_22_2_010553_reg_3031.read(): FR_22_3_V_5_fu_19905_p3.read());
}

void estimate_FR_2::thread_FR_22_3_V_8_fu_19919_p3() {
    FR_22_3_V_8_fu_19919_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_68_fu_19873_p1.read(): FR_22_3_V_6_reg_3043.read());
}

void estimate_FR_2::thread_FR_22_3_V_fu_19877_p3() {
    FR_22_3_V_fu_19877_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_22_3_010554_reg_3019.read(): zext_ln209_68_fu_19873_p1.read());
}

void estimate_FR_2::thread_FR_23_0_V_fu_20132_p2() {
    FR_23_0_V_fu_20132_p2 = (!zext_ln209_70_fu_20129_p1.read().is_01() || !zext_ln209_69_fu_20125_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_70_fu_20129_p1.read()) + sc_biguint<7>(zext_ln209_69_fu_20125_p1.read()));
}

void estimate_FR_2::thread_FR_23_3_V_10_fu_20191_p3() {
    FR_23_3_V_10_fu_20191_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_23_3_V_6_reg_2995.read(): FR_23_3_V_8_fu_20184_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_11_fu_20198_p3() {
    FR_23_3_V_11_fu_20198_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_71_fu_20138_p1.read(): FR_23_3_V_9_reg_3007.read());
}

void estimate_FR_2::thread_FR_23_3_V_12_fu_20240_p3() {
    FR_23_3_V_12_fu_20240_p3 = (!tmp_107_reg_24691.read()[0].is_01())? sc_lv<8>(): ((tmp_107_reg_24691.read()[0].to_bool())? FR_23_3_V_3_fu_20156_p3.read(): FR_V_23_3_010558_reg_2971.read());
}

void estimate_FR_2::thread_FR_23_3_V_13_fu_20247_p3() {
    FR_23_3_V_13_fu_20247_p3 = (!and_ln321_69_reg_24729.read()[0].is_01())? sc_lv<8>(): ((and_ln321_69_reg_24729.read()[0].to_bool())? FR_23_3_V_3_fu_20156_p3.read(): FR_23_3_V_12_fu_20240_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_14_fu_20254_p3() {
    FR_23_3_V_14_fu_20254_p3 = (!and_ln321_70_reg_24738.read()[0].is_01())? sc_lv<8>(): ((and_ln321_70_reg_24738.read()[0].to_bool())? FR_23_3_V_3_fu_20156_p3.read(): FR_23_3_V_13_fu_20247_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_15_fu_20261_p3() {
    FR_23_3_V_15_fu_20261_p3 = (!and_ln321_71_reg_24748.read()[0].is_01())? sc_lv<8>(): ((and_ln321_71_reg_24748.read()[0].to_bool())? FR_23_3_V_3_fu_20156_p3.read(): FR_23_3_V_14_fu_20254_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_16_fu_20268_p3() {
    FR_23_3_V_16_fu_20268_p3 = (!tmp_107_reg_24691.read()[0].is_01())? sc_lv<8>(): ((tmp_107_reg_24691.read()[0].to_bool())? FR_23_3_V_7_fu_20177_p3.read(): FR_V_23_2_010557_reg_2983.read());
}

void estimate_FR_2::thread_FR_23_3_V_17_fu_20275_p3() {
    FR_23_3_V_17_fu_20275_p3 = (!and_ln321_69_reg_24729.read()[0].is_01())? sc_lv<8>(): ((and_ln321_69_reg_24729.read()[0].to_bool())? FR_23_3_V_7_fu_20177_p3.read(): FR_23_3_V_16_fu_20268_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_18_fu_20282_p3() {
    FR_23_3_V_18_fu_20282_p3 = (!and_ln321_70_reg_24738.read()[0].is_01())? sc_lv<8>(): ((and_ln321_70_reg_24738.read()[0].to_bool())? FR_23_3_V_7_fu_20177_p3.read(): FR_23_3_V_17_fu_20275_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_19_fu_20289_p3() {
    FR_23_3_V_19_fu_20289_p3 = (!and_ln321_71_reg_24748.read()[0].is_01())? sc_lv<8>(): ((and_ln321_71_reg_24748.read()[0].to_bool())? FR_23_3_V_7_fu_20177_p3.read(): FR_23_3_V_18_fu_20282_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_20_fu_20296_p3() {
    FR_23_3_V_20_fu_20296_p3 = (!tmp_107_reg_24691.read()[0].is_01())? sc_lv<8>(): ((tmp_107_reg_24691.read()[0].to_bool())? FR_23_3_V_10_fu_20191_p3.read(): FR_23_3_V_6_reg_2995.read());
}

void estimate_FR_2::thread_FR_23_3_V_21_fu_20303_p3() {
    FR_23_3_V_21_fu_20303_p3 = (!and_ln321_69_reg_24729.read()[0].is_01())? sc_lv<8>(): ((and_ln321_69_reg_24729.read()[0].to_bool())? FR_23_3_V_10_fu_20191_p3.read(): FR_23_3_V_20_fu_20296_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_22_fu_20310_p3() {
    FR_23_3_V_22_fu_20310_p3 = (!and_ln321_70_reg_24738.read()[0].is_01())? sc_lv<8>(): ((and_ln321_70_reg_24738.read()[0].to_bool())? FR_23_3_V_10_fu_20191_p3.read(): FR_23_3_V_21_fu_20303_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_23_fu_20317_p3() {
    FR_23_3_V_23_fu_20317_p3 = (!and_ln321_71_reg_24748.read()[0].is_01())? sc_lv<8>(): ((and_ln321_71_reg_24748.read()[0].to_bool())? FR_23_3_V_10_fu_20191_p3.read(): FR_23_3_V_22_fu_20310_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_24_fu_20324_p3() {
    FR_23_3_V_24_fu_20324_p3 = (!tmp_107_reg_24691.read()[0].is_01())? sc_lv<8>(): ((tmp_107_reg_24691.read()[0].to_bool())? FR_23_3_V_11_fu_20198_p3.read(): FR_23_3_V_9_reg_3007.read());
}

void estimate_FR_2::thread_FR_23_3_V_25_fu_20331_p3() {
    FR_23_3_V_25_fu_20331_p3 = (!and_ln321_69_reg_24729.read()[0].is_01())? sc_lv<8>(): ((and_ln321_69_reg_24729.read()[0].to_bool())? FR_23_3_V_11_fu_20198_p3.read(): FR_23_3_V_24_fu_20324_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_26_fu_20338_p3() {
    FR_23_3_V_26_fu_20338_p3 = (!and_ln321_70_reg_24738.read()[0].is_01())? sc_lv<8>(): ((and_ln321_70_reg_24738.read()[0].to_bool())? FR_23_3_V_11_fu_20198_p3.read(): FR_23_3_V_25_fu_20331_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_27_fu_20345_p3() {
    FR_23_3_V_27_fu_20345_p3 = (!and_ln321_71_reg_24748.read()[0].is_01())? sc_lv<8>(): ((and_ln321_71_reg_24748.read()[0].to_bool())? FR_23_3_V_11_fu_20198_p3.read(): FR_23_3_V_26_fu_20338_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_2_fu_20149_p3() {
    FR_23_3_V_2_fu_20149_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_23_3_010558_reg_2971.read(): FR_23_3_V_fu_20142_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_3_fu_20156_p3() {
    FR_23_3_V_3_fu_20156_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_23_3_010558_reg_2971.read(): FR_23_3_V_2_fu_20149_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_4_fu_20163_p3() {
    FR_23_3_V_4_fu_20163_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_71_fu_20138_p1.read(): FR_V_23_2_010557_reg_2983.read());
}

void estimate_FR_2::thread_FR_23_3_V_5_fu_20170_p3() {
    FR_23_3_V_5_fu_20170_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_23_2_010557_reg_2983.read(): FR_23_3_V_4_fu_20163_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_7_fu_20177_p3() {
    FR_23_3_V_7_fu_20177_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_23_2_010557_reg_2983.read(): FR_23_3_V_5_fu_20170_p3.read());
}

void estimate_FR_2::thread_FR_23_3_V_8_fu_20184_p3() {
    FR_23_3_V_8_fu_20184_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_71_fu_20138_p1.read(): FR_23_3_V_6_reg_2995.read());
}

void estimate_FR_2::thread_FR_23_3_V_fu_20142_p3() {
    FR_23_3_V_fu_20142_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_23_3_010558_reg_2971.read(): zext_ln209_71_fu_20138_p1.read());
}

void estimate_FR_2::thread_FR_2_0_V_fu_14567_p2() {
    FR_2_0_V_fu_14567_p2 = (!zext_ln209_7_fu_14564_p1.read().is_01() || !zext_ln209_6_fu_14560_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_7_fu_14564_p1.read()) + sc_biguint<7>(zext_ln209_6_fu_14560_p1.read()));
}

void estimate_FR_2::thread_FR_2_3_V_10_fu_14626_p3() {
    FR_2_3_V_10_fu_14626_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_2_3_V_6_reg_4003.read(): FR_2_3_V_8_fu_14619_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_11_fu_14633_p3() {
    FR_2_3_V_11_fu_14633_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_8_fu_14573_p1.read(): FR_2_3_V_9_reg_4015.read());
}

void estimate_FR_2::thread_FR_2_3_V_12_fu_14675_p3() {
    FR_2_3_V_12_fu_14675_p3 = (!tmp_86_reg_22675.read()[0].is_01())? sc_lv<8>(): ((tmp_86_reg_22675.read()[0].to_bool())? FR_2_3_V_3_fu_14591_p3.read(): FR_V_2_3_010474_reg_3979.read());
}

void estimate_FR_2::thread_FR_2_3_V_13_fu_14682_p3() {
    FR_2_3_V_13_fu_14682_p3 = (!and_ln321_6_reg_22712.read()[0].is_01())? sc_lv<8>(): ((and_ln321_6_reg_22712.read()[0].to_bool())? FR_2_3_V_3_fu_14591_p3.read(): FR_2_3_V_12_fu_14675_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_14_fu_14689_p3() {
    FR_2_3_V_14_fu_14689_p3 = (!and_ln321_7_reg_22721.read()[0].is_01())? sc_lv<8>(): ((and_ln321_7_reg_22721.read()[0].to_bool())? FR_2_3_V_3_fu_14591_p3.read(): FR_2_3_V_13_fu_14682_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_15_fu_14696_p3() {
    FR_2_3_V_15_fu_14696_p3 = (!and_ln321_8_reg_22731.read()[0].is_01())? sc_lv<8>(): ((and_ln321_8_reg_22731.read()[0].to_bool())? FR_2_3_V_3_fu_14591_p3.read(): FR_2_3_V_14_fu_14689_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_16_fu_14703_p3() {
    FR_2_3_V_16_fu_14703_p3 = (!tmp_86_reg_22675.read()[0].is_01())? sc_lv<8>(): ((tmp_86_reg_22675.read()[0].to_bool())? FR_2_3_V_7_fu_14612_p3.read(): FR_V_2_2_010473_reg_3991.read());
}

void estimate_FR_2::thread_FR_2_3_V_17_fu_14710_p3() {
    FR_2_3_V_17_fu_14710_p3 = (!and_ln321_6_reg_22712.read()[0].is_01())? sc_lv<8>(): ((and_ln321_6_reg_22712.read()[0].to_bool())? FR_2_3_V_7_fu_14612_p3.read(): FR_2_3_V_16_fu_14703_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_18_fu_14717_p3() {
    FR_2_3_V_18_fu_14717_p3 = (!and_ln321_7_reg_22721.read()[0].is_01())? sc_lv<8>(): ((and_ln321_7_reg_22721.read()[0].to_bool())? FR_2_3_V_7_fu_14612_p3.read(): FR_2_3_V_17_fu_14710_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_19_fu_14724_p3() {
    FR_2_3_V_19_fu_14724_p3 = (!and_ln321_8_reg_22731.read()[0].is_01())? sc_lv<8>(): ((and_ln321_8_reg_22731.read()[0].to_bool())? FR_2_3_V_7_fu_14612_p3.read(): FR_2_3_V_18_fu_14717_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_20_fu_14731_p3() {
    FR_2_3_V_20_fu_14731_p3 = (!tmp_86_reg_22675.read()[0].is_01())? sc_lv<8>(): ((tmp_86_reg_22675.read()[0].to_bool())? FR_2_3_V_10_fu_14626_p3.read(): FR_2_3_V_6_reg_4003.read());
}

void estimate_FR_2::thread_FR_2_3_V_21_fu_14738_p3() {
    FR_2_3_V_21_fu_14738_p3 = (!and_ln321_6_reg_22712.read()[0].is_01())? sc_lv<8>(): ((and_ln321_6_reg_22712.read()[0].to_bool())? FR_2_3_V_10_fu_14626_p3.read(): FR_2_3_V_20_fu_14731_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_22_fu_14745_p3() {
    FR_2_3_V_22_fu_14745_p3 = (!and_ln321_7_reg_22721.read()[0].is_01())? sc_lv<8>(): ((and_ln321_7_reg_22721.read()[0].to_bool())? FR_2_3_V_10_fu_14626_p3.read(): FR_2_3_V_21_fu_14738_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_23_fu_14752_p3() {
    FR_2_3_V_23_fu_14752_p3 = (!and_ln321_8_reg_22731.read()[0].is_01())? sc_lv<8>(): ((and_ln321_8_reg_22731.read()[0].to_bool())? FR_2_3_V_10_fu_14626_p3.read(): FR_2_3_V_22_fu_14745_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_24_fu_14759_p3() {
    FR_2_3_V_24_fu_14759_p3 = (!tmp_86_reg_22675.read()[0].is_01())? sc_lv<8>(): ((tmp_86_reg_22675.read()[0].to_bool())? FR_2_3_V_11_fu_14633_p3.read(): FR_2_3_V_9_reg_4015.read());
}

void estimate_FR_2::thread_FR_2_3_V_25_fu_14766_p3() {
    FR_2_3_V_25_fu_14766_p3 = (!and_ln321_6_reg_22712.read()[0].is_01())? sc_lv<8>(): ((and_ln321_6_reg_22712.read()[0].to_bool())? FR_2_3_V_11_fu_14633_p3.read(): FR_2_3_V_24_fu_14759_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_26_fu_14773_p3() {
    FR_2_3_V_26_fu_14773_p3 = (!and_ln321_7_reg_22721.read()[0].is_01())? sc_lv<8>(): ((and_ln321_7_reg_22721.read()[0].to_bool())? FR_2_3_V_11_fu_14633_p3.read(): FR_2_3_V_25_fu_14766_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_27_fu_14780_p3() {
    FR_2_3_V_27_fu_14780_p3 = (!and_ln321_8_reg_22731.read()[0].is_01())? sc_lv<8>(): ((and_ln321_8_reg_22731.read()[0].to_bool())? FR_2_3_V_11_fu_14633_p3.read(): FR_2_3_V_26_fu_14773_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_2_fu_14584_p3() {
    FR_2_3_V_2_fu_14584_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_2_3_010474_reg_3979.read(): FR_2_3_V_fu_14577_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_3_fu_14591_p3() {
    FR_2_3_V_3_fu_14591_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_2_3_010474_reg_3979.read(): FR_2_3_V_2_fu_14584_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_4_fu_14598_p3() {
    FR_2_3_V_4_fu_14598_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_8_fu_14573_p1.read(): FR_V_2_2_010473_reg_3991.read());
}

void estimate_FR_2::thread_FR_2_3_V_5_fu_14605_p3() {
    FR_2_3_V_5_fu_14605_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_2_2_010473_reg_3991.read(): FR_2_3_V_4_fu_14598_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_7_fu_14612_p3() {
    FR_2_3_V_7_fu_14612_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_2_2_010473_reg_3991.read(): FR_2_3_V_5_fu_14605_p3.read());
}

void estimate_FR_2::thread_FR_2_3_V_8_fu_14619_p3() {
    FR_2_3_V_8_fu_14619_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_8_fu_14573_p1.read(): FR_2_3_V_6_reg_4003.read());
}

void estimate_FR_2::thread_FR_2_3_V_fu_14577_p3() {
    FR_2_3_V_fu_14577_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_2_3_010474_reg_3979.read(): zext_ln209_8_fu_14573_p1.read());
}

void estimate_FR_2::thread_FR_3_0_V_fu_14832_p2() {
    FR_3_0_V_fu_14832_p2 = (!zext_ln209_10_fu_14829_p1.read().is_01() || !zext_ln209_9_fu_14825_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_10_fu_14829_p1.read()) + sc_biguint<7>(zext_ln209_9_fu_14825_p1.read()));
}

void estimate_FR_2::thread_FR_3_3_V_10_fu_14891_p3() {
    FR_3_3_V_10_fu_14891_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_3_3_V_6_reg_3955.read(): FR_3_3_V_8_fu_14884_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_11_fu_14898_p3() {
    FR_3_3_V_11_fu_14898_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_11_fu_14838_p1.read(): FR_3_3_V_9_reg_3967.read());
}

void estimate_FR_2::thread_FR_3_3_V_12_fu_14940_p3() {
    FR_3_3_V_12_fu_14940_p3 = (!tmp_87_reg_22771.read()[0].is_01())? sc_lv<8>(): ((tmp_87_reg_22771.read()[0].to_bool())? FR_3_3_V_3_fu_14856_p3.read(): FR_V_3_3_010478_reg_3931.read());
}

void estimate_FR_2::thread_FR_3_3_V_13_fu_14947_p3() {
    FR_3_3_V_13_fu_14947_p3 = (!and_ln321_9_reg_22808.read()[0].is_01())? sc_lv<8>(): ((and_ln321_9_reg_22808.read()[0].to_bool())? FR_3_3_V_3_fu_14856_p3.read(): FR_3_3_V_12_fu_14940_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_14_fu_14954_p3() {
    FR_3_3_V_14_fu_14954_p3 = (!and_ln321_10_reg_22817.read()[0].is_01())? sc_lv<8>(): ((and_ln321_10_reg_22817.read()[0].to_bool())? FR_3_3_V_3_fu_14856_p3.read(): FR_3_3_V_13_fu_14947_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_15_fu_14961_p3() {
    FR_3_3_V_15_fu_14961_p3 = (!and_ln321_11_reg_22827.read()[0].is_01())? sc_lv<8>(): ((and_ln321_11_reg_22827.read()[0].to_bool())? FR_3_3_V_3_fu_14856_p3.read(): FR_3_3_V_14_fu_14954_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_16_fu_14968_p3() {
    FR_3_3_V_16_fu_14968_p3 = (!tmp_87_reg_22771.read()[0].is_01())? sc_lv<8>(): ((tmp_87_reg_22771.read()[0].to_bool())? FR_3_3_V_7_fu_14877_p3.read(): FR_V_3_2_010477_reg_3943.read());
}

void estimate_FR_2::thread_FR_3_3_V_17_fu_14975_p3() {
    FR_3_3_V_17_fu_14975_p3 = (!and_ln321_9_reg_22808.read()[0].is_01())? sc_lv<8>(): ((and_ln321_9_reg_22808.read()[0].to_bool())? FR_3_3_V_7_fu_14877_p3.read(): FR_3_3_V_16_fu_14968_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_18_fu_14982_p3() {
    FR_3_3_V_18_fu_14982_p3 = (!and_ln321_10_reg_22817.read()[0].is_01())? sc_lv<8>(): ((and_ln321_10_reg_22817.read()[0].to_bool())? FR_3_3_V_7_fu_14877_p3.read(): FR_3_3_V_17_fu_14975_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_19_fu_14989_p3() {
    FR_3_3_V_19_fu_14989_p3 = (!and_ln321_11_reg_22827.read()[0].is_01())? sc_lv<8>(): ((and_ln321_11_reg_22827.read()[0].to_bool())? FR_3_3_V_7_fu_14877_p3.read(): FR_3_3_V_18_fu_14982_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_20_fu_14996_p3() {
    FR_3_3_V_20_fu_14996_p3 = (!tmp_87_reg_22771.read()[0].is_01())? sc_lv<8>(): ((tmp_87_reg_22771.read()[0].to_bool())? FR_3_3_V_10_fu_14891_p3.read(): FR_3_3_V_6_reg_3955.read());
}

void estimate_FR_2::thread_FR_3_3_V_21_fu_15003_p3() {
    FR_3_3_V_21_fu_15003_p3 = (!and_ln321_9_reg_22808.read()[0].is_01())? sc_lv<8>(): ((and_ln321_9_reg_22808.read()[0].to_bool())? FR_3_3_V_10_fu_14891_p3.read(): FR_3_3_V_20_fu_14996_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_22_fu_15010_p3() {
    FR_3_3_V_22_fu_15010_p3 = (!and_ln321_10_reg_22817.read()[0].is_01())? sc_lv<8>(): ((and_ln321_10_reg_22817.read()[0].to_bool())? FR_3_3_V_10_fu_14891_p3.read(): FR_3_3_V_21_fu_15003_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_23_fu_15017_p3() {
    FR_3_3_V_23_fu_15017_p3 = (!and_ln321_11_reg_22827.read()[0].is_01())? sc_lv<8>(): ((and_ln321_11_reg_22827.read()[0].to_bool())? FR_3_3_V_10_fu_14891_p3.read(): FR_3_3_V_22_fu_15010_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_24_fu_15024_p3() {
    FR_3_3_V_24_fu_15024_p3 = (!tmp_87_reg_22771.read()[0].is_01())? sc_lv<8>(): ((tmp_87_reg_22771.read()[0].to_bool())? FR_3_3_V_11_fu_14898_p3.read(): FR_3_3_V_9_reg_3967.read());
}

void estimate_FR_2::thread_FR_3_3_V_25_fu_15031_p3() {
    FR_3_3_V_25_fu_15031_p3 = (!and_ln321_9_reg_22808.read()[0].is_01())? sc_lv<8>(): ((and_ln321_9_reg_22808.read()[0].to_bool())? FR_3_3_V_11_fu_14898_p3.read(): FR_3_3_V_24_fu_15024_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_26_fu_15038_p3() {
    FR_3_3_V_26_fu_15038_p3 = (!and_ln321_10_reg_22817.read()[0].is_01())? sc_lv<8>(): ((and_ln321_10_reg_22817.read()[0].to_bool())? FR_3_3_V_11_fu_14898_p3.read(): FR_3_3_V_25_fu_15031_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_27_fu_15045_p3() {
    FR_3_3_V_27_fu_15045_p3 = (!and_ln321_11_reg_22827.read()[0].is_01())? sc_lv<8>(): ((and_ln321_11_reg_22827.read()[0].to_bool())? FR_3_3_V_11_fu_14898_p3.read(): FR_3_3_V_26_fu_15038_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_2_fu_14849_p3() {
    FR_3_3_V_2_fu_14849_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_3_3_010478_reg_3931.read(): FR_3_3_V_fu_14842_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_3_fu_14856_p3() {
    FR_3_3_V_3_fu_14856_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_3_3_010478_reg_3931.read(): FR_3_3_V_2_fu_14849_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_4_fu_14863_p3() {
    FR_3_3_V_4_fu_14863_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_11_fu_14838_p1.read(): FR_V_3_2_010477_reg_3943.read());
}

void estimate_FR_2::thread_FR_3_3_V_5_fu_14870_p3() {
    FR_3_3_V_5_fu_14870_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_3_2_010477_reg_3943.read(): FR_3_3_V_4_fu_14863_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_7_fu_14877_p3() {
    FR_3_3_V_7_fu_14877_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_3_2_010477_reg_3943.read(): FR_3_3_V_5_fu_14870_p3.read());
}

void estimate_FR_2::thread_FR_3_3_V_8_fu_14884_p3() {
    FR_3_3_V_8_fu_14884_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_11_fu_14838_p1.read(): FR_3_3_V_6_reg_3955.read());
}

void estimate_FR_2::thread_FR_3_3_V_fu_14842_p3() {
    FR_3_3_V_fu_14842_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_3_3_010478_reg_3931.read(): zext_ln209_11_fu_14838_p1.read());
}

void estimate_FR_2::thread_FR_4_0_V_fu_15097_p2() {
    FR_4_0_V_fu_15097_p2 = (!zext_ln209_13_fu_15094_p1.read().is_01() || !zext_ln209_12_fu_15090_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_13_fu_15094_p1.read()) + sc_biguint<7>(zext_ln209_12_fu_15090_p1.read()));
}

void estimate_FR_2::thread_FR_4_3_V_10_fu_15156_p3() {
    FR_4_3_V_10_fu_15156_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_4_3_V_6_reg_3907.read(): FR_4_3_V_8_fu_15149_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_11_fu_15163_p3() {
    FR_4_3_V_11_fu_15163_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_14_fu_15103_p1.read(): FR_4_3_V_9_reg_3919.read());
}

void estimate_FR_2::thread_FR_4_3_V_12_fu_15205_p3() {
    FR_4_3_V_12_fu_15205_p3 = (!tmp_88_reg_22867.read()[0].is_01())? sc_lv<8>(): ((tmp_88_reg_22867.read()[0].to_bool())? FR_4_3_V_3_fu_15121_p3.read(): FR_V_4_3_010482_reg_3883.read());
}

void estimate_FR_2::thread_FR_4_3_V_13_fu_15212_p3() {
    FR_4_3_V_13_fu_15212_p3 = (!and_ln321_12_reg_22904.read()[0].is_01())? sc_lv<8>(): ((and_ln321_12_reg_22904.read()[0].to_bool())? FR_4_3_V_3_fu_15121_p3.read(): FR_4_3_V_12_fu_15205_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_14_fu_15219_p3() {
    FR_4_3_V_14_fu_15219_p3 = (!and_ln321_13_reg_22913.read()[0].is_01())? sc_lv<8>(): ((and_ln321_13_reg_22913.read()[0].to_bool())? FR_4_3_V_3_fu_15121_p3.read(): FR_4_3_V_13_fu_15212_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_15_fu_15226_p3() {
    FR_4_3_V_15_fu_15226_p3 = (!and_ln321_14_reg_22923.read()[0].is_01())? sc_lv<8>(): ((and_ln321_14_reg_22923.read()[0].to_bool())? FR_4_3_V_3_fu_15121_p3.read(): FR_4_3_V_14_fu_15219_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_16_fu_15233_p3() {
    FR_4_3_V_16_fu_15233_p3 = (!tmp_88_reg_22867.read()[0].is_01())? sc_lv<8>(): ((tmp_88_reg_22867.read()[0].to_bool())? FR_4_3_V_7_fu_15142_p3.read(): FR_V_4_2_010481_reg_3895.read());
}

void estimate_FR_2::thread_FR_4_3_V_17_fu_15240_p3() {
    FR_4_3_V_17_fu_15240_p3 = (!and_ln321_12_reg_22904.read()[0].is_01())? sc_lv<8>(): ((and_ln321_12_reg_22904.read()[0].to_bool())? FR_4_3_V_7_fu_15142_p3.read(): FR_4_3_V_16_fu_15233_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_18_fu_15247_p3() {
    FR_4_3_V_18_fu_15247_p3 = (!and_ln321_13_reg_22913.read()[0].is_01())? sc_lv<8>(): ((and_ln321_13_reg_22913.read()[0].to_bool())? FR_4_3_V_7_fu_15142_p3.read(): FR_4_3_V_17_fu_15240_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_19_fu_15254_p3() {
    FR_4_3_V_19_fu_15254_p3 = (!and_ln321_14_reg_22923.read()[0].is_01())? sc_lv<8>(): ((and_ln321_14_reg_22923.read()[0].to_bool())? FR_4_3_V_7_fu_15142_p3.read(): FR_4_3_V_18_fu_15247_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_20_fu_15261_p3() {
    FR_4_3_V_20_fu_15261_p3 = (!tmp_88_reg_22867.read()[0].is_01())? sc_lv<8>(): ((tmp_88_reg_22867.read()[0].to_bool())? FR_4_3_V_10_fu_15156_p3.read(): FR_4_3_V_6_reg_3907.read());
}

void estimate_FR_2::thread_FR_4_3_V_21_fu_15268_p3() {
    FR_4_3_V_21_fu_15268_p3 = (!and_ln321_12_reg_22904.read()[0].is_01())? sc_lv<8>(): ((and_ln321_12_reg_22904.read()[0].to_bool())? FR_4_3_V_10_fu_15156_p3.read(): FR_4_3_V_20_fu_15261_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_22_fu_15275_p3() {
    FR_4_3_V_22_fu_15275_p3 = (!and_ln321_13_reg_22913.read()[0].is_01())? sc_lv<8>(): ((and_ln321_13_reg_22913.read()[0].to_bool())? FR_4_3_V_10_fu_15156_p3.read(): FR_4_3_V_21_fu_15268_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_23_fu_15282_p3() {
    FR_4_3_V_23_fu_15282_p3 = (!and_ln321_14_reg_22923.read()[0].is_01())? sc_lv<8>(): ((and_ln321_14_reg_22923.read()[0].to_bool())? FR_4_3_V_10_fu_15156_p3.read(): FR_4_3_V_22_fu_15275_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_24_fu_15289_p3() {
    FR_4_3_V_24_fu_15289_p3 = (!tmp_88_reg_22867.read()[0].is_01())? sc_lv<8>(): ((tmp_88_reg_22867.read()[0].to_bool())? FR_4_3_V_11_fu_15163_p3.read(): FR_4_3_V_9_reg_3919.read());
}

void estimate_FR_2::thread_FR_4_3_V_25_fu_15296_p3() {
    FR_4_3_V_25_fu_15296_p3 = (!and_ln321_12_reg_22904.read()[0].is_01())? sc_lv<8>(): ((and_ln321_12_reg_22904.read()[0].to_bool())? FR_4_3_V_11_fu_15163_p3.read(): FR_4_3_V_24_fu_15289_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_26_fu_15303_p3() {
    FR_4_3_V_26_fu_15303_p3 = (!and_ln321_13_reg_22913.read()[0].is_01())? sc_lv<8>(): ((and_ln321_13_reg_22913.read()[0].to_bool())? FR_4_3_V_11_fu_15163_p3.read(): FR_4_3_V_25_fu_15296_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_27_fu_15310_p3() {
    FR_4_3_V_27_fu_15310_p3 = (!and_ln321_14_reg_22923.read()[0].is_01())? sc_lv<8>(): ((and_ln321_14_reg_22923.read()[0].to_bool())? FR_4_3_V_11_fu_15163_p3.read(): FR_4_3_V_26_fu_15303_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_2_fu_15114_p3() {
    FR_4_3_V_2_fu_15114_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_4_3_010482_reg_3883.read(): FR_4_3_V_fu_15107_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_3_fu_15121_p3() {
    FR_4_3_V_3_fu_15121_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_4_3_010482_reg_3883.read(): FR_4_3_V_2_fu_15114_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_4_fu_15128_p3() {
    FR_4_3_V_4_fu_15128_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_14_fu_15103_p1.read(): FR_V_4_2_010481_reg_3895.read());
}

void estimate_FR_2::thread_FR_4_3_V_5_fu_15135_p3() {
    FR_4_3_V_5_fu_15135_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_4_2_010481_reg_3895.read(): FR_4_3_V_4_fu_15128_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_7_fu_15142_p3() {
    FR_4_3_V_7_fu_15142_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_4_2_010481_reg_3895.read(): FR_4_3_V_5_fu_15135_p3.read());
}

void estimate_FR_2::thread_FR_4_3_V_8_fu_15149_p3() {
    FR_4_3_V_8_fu_15149_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_14_fu_15103_p1.read(): FR_4_3_V_6_reg_3907.read());
}

void estimate_FR_2::thread_FR_4_3_V_fu_15107_p3() {
    FR_4_3_V_fu_15107_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_4_3_010482_reg_3883.read(): zext_ln209_14_fu_15103_p1.read());
}

void estimate_FR_2::thread_FR_5_0_V_fu_15362_p2() {
    FR_5_0_V_fu_15362_p2 = (!zext_ln209_16_fu_15359_p1.read().is_01() || !zext_ln209_15_fu_15355_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_16_fu_15359_p1.read()) + sc_biguint<7>(zext_ln209_15_fu_15355_p1.read()));
}

void estimate_FR_2::thread_FR_5_3_V_10_fu_15421_p3() {
    FR_5_3_V_10_fu_15421_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_5_3_V_6_reg_3859.read(): FR_5_3_V_8_fu_15414_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_11_fu_15428_p3() {
    FR_5_3_V_11_fu_15428_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_17_fu_15368_p1.read(): FR_5_3_V_9_reg_3871.read());
}

void estimate_FR_2::thread_FR_5_3_V_12_fu_15470_p3() {
    FR_5_3_V_12_fu_15470_p3 = (!tmp_89_reg_22963.read()[0].is_01())? sc_lv<8>(): ((tmp_89_reg_22963.read()[0].to_bool())? FR_5_3_V_3_fu_15386_p3.read(): FR_V_5_3_010486_reg_3835.read());
}

void estimate_FR_2::thread_FR_5_3_V_13_fu_15477_p3() {
    FR_5_3_V_13_fu_15477_p3 = (!and_ln321_15_reg_23000.read()[0].is_01())? sc_lv<8>(): ((and_ln321_15_reg_23000.read()[0].to_bool())? FR_5_3_V_3_fu_15386_p3.read(): FR_5_3_V_12_fu_15470_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_14_fu_15484_p3() {
    FR_5_3_V_14_fu_15484_p3 = (!and_ln321_16_reg_23009.read()[0].is_01())? sc_lv<8>(): ((and_ln321_16_reg_23009.read()[0].to_bool())? FR_5_3_V_3_fu_15386_p3.read(): FR_5_3_V_13_fu_15477_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_15_fu_15491_p3() {
    FR_5_3_V_15_fu_15491_p3 = (!and_ln321_17_reg_23019.read()[0].is_01())? sc_lv<8>(): ((and_ln321_17_reg_23019.read()[0].to_bool())? FR_5_3_V_3_fu_15386_p3.read(): FR_5_3_V_14_fu_15484_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_16_fu_15498_p3() {
    FR_5_3_V_16_fu_15498_p3 = (!tmp_89_reg_22963.read()[0].is_01())? sc_lv<8>(): ((tmp_89_reg_22963.read()[0].to_bool())? FR_5_3_V_7_fu_15407_p3.read(): FR_V_5_2_010485_reg_3847.read());
}

void estimate_FR_2::thread_FR_5_3_V_17_fu_15505_p3() {
    FR_5_3_V_17_fu_15505_p3 = (!and_ln321_15_reg_23000.read()[0].is_01())? sc_lv<8>(): ((and_ln321_15_reg_23000.read()[0].to_bool())? FR_5_3_V_7_fu_15407_p3.read(): FR_5_3_V_16_fu_15498_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_18_fu_15512_p3() {
    FR_5_3_V_18_fu_15512_p3 = (!and_ln321_16_reg_23009.read()[0].is_01())? sc_lv<8>(): ((and_ln321_16_reg_23009.read()[0].to_bool())? FR_5_3_V_7_fu_15407_p3.read(): FR_5_3_V_17_fu_15505_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_19_fu_15519_p3() {
    FR_5_3_V_19_fu_15519_p3 = (!and_ln321_17_reg_23019.read()[0].is_01())? sc_lv<8>(): ((and_ln321_17_reg_23019.read()[0].to_bool())? FR_5_3_V_7_fu_15407_p3.read(): FR_5_3_V_18_fu_15512_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_20_fu_15526_p3() {
    FR_5_3_V_20_fu_15526_p3 = (!tmp_89_reg_22963.read()[0].is_01())? sc_lv<8>(): ((tmp_89_reg_22963.read()[0].to_bool())? FR_5_3_V_10_fu_15421_p3.read(): FR_5_3_V_6_reg_3859.read());
}

void estimate_FR_2::thread_FR_5_3_V_21_fu_15533_p3() {
    FR_5_3_V_21_fu_15533_p3 = (!and_ln321_15_reg_23000.read()[0].is_01())? sc_lv<8>(): ((and_ln321_15_reg_23000.read()[0].to_bool())? FR_5_3_V_10_fu_15421_p3.read(): FR_5_3_V_20_fu_15526_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_22_fu_15540_p3() {
    FR_5_3_V_22_fu_15540_p3 = (!and_ln321_16_reg_23009.read()[0].is_01())? sc_lv<8>(): ((and_ln321_16_reg_23009.read()[0].to_bool())? FR_5_3_V_10_fu_15421_p3.read(): FR_5_3_V_21_fu_15533_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_23_fu_15547_p3() {
    FR_5_3_V_23_fu_15547_p3 = (!and_ln321_17_reg_23019.read()[0].is_01())? sc_lv<8>(): ((and_ln321_17_reg_23019.read()[0].to_bool())? FR_5_3_V_10_fu_15421_p3.read(): FR_5_3_V_22_fu_15540_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_24_fu_15554_p3() {
    FR_5_3_V_24_fu_15554_p3 = (!tmp_89_reg_22963.read()[0].is_01())? sc_lv<8>(): ((tmp_89_reg_22963.read()[0].to_bool())? FR_5_3_V_11_fu_15428_p3.read(): FR_5_3_V_9_reg_3871.read());
}

void estimate_FR_2::thread_FR_5_3_V_25_fu_15561_p3() {
    FR_5_3_V_25_fu_15561_p3 = (!and_ln321_15_reg_23000.read()[0].is_01())? sc_lv<8>(): ((and_ln321_15_reg_23000.read()[0].to_bool())? FR_5_3_V_11_fu_15428_p3.read(): FR_5_3_V_24_fu_15554_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_26_fu_15568_p3() {
    FR_5_3_V_26_fu_15568_p3 = (!and_ln321_16_reg_23009.read()[0].is_01())? sc_lv<8>(): ((and_ln321_16_reg_23009.read()[0].to_bool())? FR_5_3_V_11_fu_15428_p3.read(): FR_5_3_V_25_fu_15561_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_27_fu_15575_p3() {
    FR_5_3_V_27_fu_15575_p3 = (!and_ln321_17_reg_23019.read()[0].is_01())? sc_lv<8>(): ((and_ln321_17_reg_23019.read()[0].to_bool())? FR_5_3_V_11_fu_15428_p3.read(): FR_5_3_V_26_fu_15568_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_2_fu_15379_p3() {
    FR_5_3_V_2_fu_15379_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_5_3_010486_reg_3835.read(): FR_5_3_V_fu_15372_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_3_fu_15386_p3() {
    FR_5_3_V_3_fu_15386_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_5_3_010486_reg_3835.read(): FR_5_3_V_2_fu_15379_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_4_fu_15393_p3() {
    FR_5_3_V_4_fu_15393_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_17_fu_15368_p1.read(): FR_V_5_2_010485_reg_3847.read());
}

void estimate_FR_2::thread_FR_5_3_V_5_fu_15400_p3() {
    FR_5_3_V_5_fu_15400_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_5_2_010485_reg_3847.read(): FR_5_3_V_4_fu_15393_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_7_fu_15407_p3() {
    FR_5_3_V_7_fu_15407_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_5_2_010485_reg_3847.read(): FR_5_3_V_5_fu_15400_p3.read());
}

void estimate_FR_2::thread_FR_5_3_V_8_fu_15414_p3() {
    FR_5_3_V_8_fu_15414_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_17_fu_15368_p1.read(): FR_5_3_V_6_reg_3859.read());
}

void estimate_FR_2::thread_FR_5_3_V_fu_15372_p3() {
    FR_5_3_V_fu_15372_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_5_3_010486_reg_3835.read(): zext_ln209_17_fu_15368_p1.read());
}

void estimate_FR_2::thread_FR_6_0_V_fu_15627_p2() {
    FR_6_0_V_fu_15627_p2 = (!zext_ln209_19_fu_15624_p1.read().is_01() || !zext_ln209_18_fu_15620_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_19_fu_15624_p1.read()) + sc_biguint<7>(zext_ln209_18_fu_15620_p1.read()));
}

void estimate_FR_2::thread_FR_6_3_V_10_fu_15686_p3() {
    FR_6_3_V_10_fu_15686_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_6_3_V_6_reg_3811.read(): FR_6_3_V_8_fu_15679_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_11_fu_15693_p3() {
    FR_6_3_V_11_fu_15693_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_20_fu_15633_p1.read(): FR_6_3_V_9_reg_3823.read());
}

void estimate_FR_2::thread_FR_6_3_V_12_fu_15735_p3() {
    FR_6_3_V_12_fu_15735_p3 = (!tmp_90_reg_23059.read()[0].is_01())? sc_lv<8>(): ((tmp_90_reg_23059.read()[0].to_bool())? FR_6_3_V_3_fu_15651_p3.read(): FR_V_6_3_010490_reg_3787.read());
}

void estimate_FR_2::thread_FR_6_3_V_13_fu_15742_p3() {
    FR_6_3_V_13_fu_15742_p3 = (!and_ln321_18_reg_23096.read()[0].is_01())? sc_lv<8>(): ((and_ln321_18_reg_23096.read()[0].to_bool())? FR_6_3_V_3_fu_15651_p3.read(): FR_6_3_V_12_fu_15735_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_14_fu_15749_p3() {
    FR_6_3_V_14_fu_15749_p3 = (!and_ln321_19_reg_23105.read()[0].is_01())? sc_lv<8>(): ((and_ln321_19_reg_23105.read()[0].to_bool())? FR_6_3_V_3_fu_15651_p3.read(): FR_6_3_V_13_fu_15742_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_15_fu_15756_p3() {
    FR_6_3_V_15_fu_15756_p3 = (!and_ln321_20_reg_23115.read()[0].is_01())? sc_lv<8>(): ((and_ln321_20_reg_23115.read()[0].to_bool())? FR_6_3_V_3_fu_15651_p3.read(): FR_6_3_V_14_fu_15749_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_16_fu_15763_p3() {
    FR_6_3_V_16_fu_15763_p3 = (!tmp_90_reg_23059.read()[0].is_01())? sc_lv<8>(): ((tmp_90_reg_23059.read()[0].to_bool())? FR_6_3_V_7_fu_15672_p3.read(): FR_V_6_2_010489_reg_3799.read());
}

void estimate_FR_2::thread_FR_6_3_V_17_fu_15770_p3() {
    FR_6_3_V_17_fu_15770_p3 = (!and_ln321_18_reg_23096.read()[0].is_01())? sc_lv<8>(): ((and_ln321_18_reg_23096.read()[0].to_bool())? FR_6_3_V_7_fu_15672_p3.read(): FR_6_3_V_16_fu_15763_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_18_fu_15777_p3() {
    FR_6_3_V_18_fu_15777_p3 = (!and_ln321_19_reg_23105.read()[0].is_01())? sc_lv<8>(): ((and_ln321_19_reg_23105.read()[0].to_bool())? FR_6_3_V_7_fu_15672_p3.read(): FR_6_3_V_17_fu_15770_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_19_fu_15784_p3() {
    FR_6_3_V_19_fu_15784_p3 = (!and_ln321_20_reg_23115.read()[0].is_01())? sc_lv<8>(): ((and_ln321_20_reg_23115.read()[0].to_bool())? FR_6_3_V_7_fu_15672_p3.read(): FR_6_3_V_18_fu_15777_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_20_fu_15791_p3() {
    FR_6_3_V_20_fu_15791_p3 = (!tmp_90_reg_23059.read()[0].is_01())? sc_lv<8>(): ((tmp_90_reg_23059.read()[0].to_bool())? FR_6_3_V_10_fu_15686_p3.read(): FR_6_3_V_6_reg_3811.read());
}

void estimate_FR_2::thread_FR_6_3_V_21_fu_15798_p3() {
    FR_6_3_V_21_fu_15798_p3 = (!and_ln321_18_reg_23096.read()[0].is_01())? sc_lv<8>(): ((and_ln321_18_reg_23096.read()[0].to_bool())? FR_6_3_V_10_fu_15686_p3.read(): FR_6_3_V_20_fu_15791_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_22_fu_15805_p3() {
    FR_6_3_V_22_fu_15805_p3 = (!and_ln321_19_reg_23105.read()[0].is_01())? sc_lv<8>(): ((and_ln321_19_reg_23105.read()[0].to_bool())? FR_6_3_V_10_fu_15686_p3.read(): FR_6_3_V_21_fu_15798_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_23_fu_15812_p3() {
    FR_6_3_V_23_fu_15812_p3 = (!and_ln321_20_reg_23115.read()[0].is_01())? sc_lv<8>(): ((and_ln321_20_reg_23115.read()[0].to_bool())? FR_6_3_V_10_fu_15686_p3.read(): FR_6_3_V_22_fu_15805_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_24_fu_15819_p3() {
    FR_6_3_V_24_fu_15819_p3 = (!tmp_90_reg_23059.read()[0].is_01())? sc_lv<8>(): ((tmp_90_reg_23059.read()[0].to_bool())? FR_6_3_V_11_fu_15693_p3.read(): FR_6_3_V_9_reg_3823.read());
}

void estimate_FR_2::thread_FR_6_3_V_25_fu_15826_p3() {
    FR_6_3_V_25_fu_15826_p3 = (!and_ln321_18_reg_23096.read()[0].is_01())? sc_lv<8>(): ((and_ln321_18_reg_23096.read()[0].to_bool())? FR_6_3_V_11_fu_15693_p3.read(): FR_6_3_V_24_fu_15819_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_26_fu_15833_p3() {
    FR_6_3_V_26_fu_15833_p3 = (!and_ln321_19_reg_23105.read()[0].is_01())? sc_lv<8>(): ((and_ln321_19_reg_23105.read()[0].to_bool())? FR_6_3_V_11_fu_15693_p3.read(): FR_6_3_V_25_fu_15826_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_27_fu_15840_p3() {
    FR_6_3_V_27_fu_15840_p3 = (!and_ln321_20_reg_23115.read()[0].is_01())? sc_lv<8>(): ((and_ln321_20_reg_23115.read()[0].to_bool())? FR_6_3_V_11_fu_15693_p3.read(): FR_6_3_V_26_fu_15833_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_2_fu_15644_p3() {
    FR_6_3_V_2_fu_15644_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_6_3_010490_reg_3787.read(): FR_6_3_V_fu_15637_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_3_fu_15651_p3() {
    FR_6_3_V_3_fu_15651_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_6_3_010490_reg_3787.read(): FR_6_3_V_2_fu_15644_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_4_fu_15658_p3() {
    FR_6_3_V_4_fu_15658_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_20_fu_15633_p1.read(): FR_V_6_2_010489_reg_3799.read());
}

void estimate_FR_2::thread_FR_6_3_V_5_fu_15665_p3() {
    FR_6_3_V_5_fu_15665_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_6_2_010489_reg_3799.read(): FR_6_3_V_4_fu_15658_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_7_fu_15672_p3() {
    FR_6_3_V_7_fu_15672_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_6_2_010489_reg_3799.read(): FR_6_3_V_5_fu_15665_p3.read());
}

void estimate_FR_2::thread_FR_6_3_V_8_fu_15679_p3() {
    FR_6_3_V_8_fu_15679_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_20_fu_15633_p1.read(): FR_6_3_V_6_reg_3811.read());
}

void estimate_FR_2::thread_FR_6_3_V_fu_15637_p3() {
    FR_6_3_V_fu_15637_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_6_3_010490_reg_3787.read(): zext_ln209_20_fu_15633_p1.read());
}

void estimate_FR_2::thread_FR_7_0_V_fu_15892_p2() {
    FR_7_0_V_fu_15892_p2 = (!zext_ln209_22_fu_15889_p1.read().is_01() || !zext_ln209_21_fu_15885_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_22_fu_15889_p1.read()) + sc_biguint<7>(zext_ln209_21_fu_15885_p1.read()));
}

void estimate_FR_2::thread_FR_7_3_V_10_fu_15951_p3() {
    FR_7_3_V_10_fu_15951_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_7_3_V_6_reg_3763.read(): FR_7_3_V_8_fu_15944_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_11_fu_15958_p3() {
    FR_7_3_V_11_fu_15958_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_23_fu_15898_p1.read(): FR_7_3_V_9_reg_3775.read());
}

void estimate_FR_2::thread_FR_7_3_V_12_fu_16000_p3() {
    FR_7_3_V_12_fu_16000_p3 = (!tmp_91_reg_23155.read()[0].is_01())? sc_lv<8>(): ((tmp_91_reg_23155.read()[0].to_bool())? FR_7_3_V_3_fu_15916_p3.read(): FR_V_7_3_010494_reg_3739.read());
}

void estimate_FR_2::thread_FR_7_3_V_13_fu_16007_p3() {
    FR_7_3_V_13_fu_16007_p3 = (!and_ln321_21_reg_23192.read()[0].is_01())? sc_lv<8>(): ((and_ln321_21_reg_23192.read()[0].to_bool())? FR_7_3_V_3_fu_15916_p3.read(): FR_7_3_V_12_fu_16000_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_14_fu_16014_p3() {
    FR_7_3_V_14_fu_16014_p3 = (!and_ln321_22_reg_23201.read()[0].is_01())? sc_lv<8>(): ((and_ln321_22_reg_23201.read()[0].to_bool())? FR_7_3_V_3_fu_15916_p3.read(): FR_7_3_V_13_fu_16007_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_15_fu_16021_p3() {
    FR_7_3_V_15_fu_16021_p3 = (!and_ln321_23_reg_23211.read()[0].is_01())? sc_lv<8>(): ((and_ln321_23_reg_23211.read()[0].to_bool())? FR_7_3_V_3_fu_15916_p3.read(): FR_7_3_V_14_fu_16014_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_16_fu_16028_p3() {
    FR_7_3_V_16_fu_16028_p3 = (!tmp_91_reg_23155.read()[0].is_01())? sc_lv<8>(): ((tmp_91_reg_23155.read()[0].to_bool())? FR_7_3_V_7_fu_15937_p3.read(): FR_V_7_2_010493_reg_3751.read());
}

void estimate_FR_2::thread_FR_7_3_V_17_fu_16035_p3() {
    FR_7_3_V_17_fu_16035_p3 = (!and_ln321_21_reg_23192.read()[0].is_01())? sc_lv<8>(): ((and_ln321_21_reg_23192.read()[0].to_bool())? FR_7_3_V_7_fu_15937_p3.read(): FR_7_3_V_16_fu_16028_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_18_fu_16042_p3() {
    FR_7_3_V_18_fu_16042_p3 = (!and_ln321_22_reg_23201.read()[0].is_01())? sc_lv<8>(): ((and_ln321_22_reg_23201.read()[0].to_bool())? FR_7_3_V_7_fu_15937_p3.read(): FR_7_3_V_17_fu_16035_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_19_fu_16049_p3() {
    FR_7_3_V_19_fu_16049_p3 = (!and_ln321_23_reg_23211.read()[0].is_01())? sc_lv<8>(): ((and_ln321_23_reg_23211.read()[0].to_bool())? FR_7_3_V_7_fu_15937_p3.read(): FR_7_3_V_18_fu_16042_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_20_fu_16056_p3() {
    FR_7_3_V_20_fu_16056_p3 = (!tmp_91_reg_23155.read()[0].is_01())? sc_lv<8>(): ((tmp_91_reg_23155.read()[0].to_bool())? FR_7_3_V_10_fu_15951_p3.read(): FR_7_3_V_6_reg_3763.read());
}

void estimate_FR_2::thread_FR_7_3_V_21_fu_16063_p3() {
    FR_7_3_V_21_fu_16063_p3 = (!and_ln321_21_reg_23192.read()[0].is_01())? sc_lv<8>(): ((and_ln321_21_reg_23192.read()[0].to_bool())? FR_7_3_V_10_fu_15951_p3.read(): FR_7_3_V_20_fu_16056_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_22_fu_16070_p3() {
    FR_7_3_V_22_fu_16070_p3 = (!and_ln321_22_reg_23201.read()[0].is_01())? sc_lv<8>(): ((and_ln321_22_reg_23201.read()[0].to_bool())? FR_7_3_V_10_fu_15951_p3.read(): FR_7_3_V_21_fu_16063_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_23_fu_16077_p3() {
    FR_7_3_V_23_fu_16077_p3 = (!and_ln321_23_reg_23211.read()[0].is_01())? sc_lv<8>(): ((and_ln321_23_reg_23211.read()[0].to_bool())? FR_7_3_V_10_fu_15951_p3.read(): FR_7_3_V_22_fu_16070_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_24_fu_16084_p3() {
    FR_7_3_V_24_fu_16084_p3 = (!tmp_91_reg_23155.read()[0].is_01())? sc_lv<8>(): ((tmp_91_reg_23155.read()[0].to_bool())? FR_7_3_V_11_fu_15958_p3.read(): FR_7_3_V_9_reg_3775.read());
}

void estimate_FR_2::thread_FR_7_3_V_25_fu_16091_p3() {
    FR_7_3_V_25_fu_16091_p3 = (!and_ln321_21_reg_23192.read()[0].is_01())? sc_lv<8>(): ((and_ln321_21_reg_23192.read()[0].to_bool())? FR_7_3_V_11_fu_15958_p3.read(): FR_7_3_V_24_fu_16084_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_26_fu_16098_p3() {
    FR_7_3_V_26_fu_16098_p3 = (!and_ln321_22_reg_23201.read()[0].is_01())? sc_lv<8>(): ((and_ln321_22_reg_23201.read()[0].to_bool())? FR_7_3_V_11_fu_15958_p3.read(): FR_7_3_V_25_fu_16091_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_27_fu_16105_p3() {
    FR_7_3_V_27_fu_16105_p3 = (!and_ln321_23_reg_23211.read()[0].is_01())? sc_lv<8>(): ((and_ln321_23_reg_23211.read()[0].to_bool())? FR_7_3_V_11_fu_15958_p3.read(): FR_7_3_V_26_fu_16098_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_2_fu_15909_p3() {
    FR_7_3_V_2_fu_15909_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_7_3_010494_reg_3739.read(): FR_7_3_V_fu_15902_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_3_fu_15916_p3() {
    FR_7_3_V_3_fu_15916_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_7_3_010494_reg_3739.read(): FR_7_3_V_2_fu_15909_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_4_fu_15923_p3() {
    FR_7_3_V_4_fu_15923_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_23_fu_15898_p1.read(): FR_V_7_2_010493_reg_3751.read());
}

void estimate_FR_2::thread_FR_7_3_V_5_fu_15930_p3() {
    FR_7_3_V_5_fu_15930_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_7_2_010493_reg_3751.read(): FR_7_3_V_4_fu_15923_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_7_fu_15937_p3() {
    FR_7_3_V_7_fu_15937_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_7_2_010493_reg_3751.read(): FR_7_3_V_5_fu_15930_p3.read());
}

void estimate_FR_2::thread_FR_7_3_V_8_fu_15944_p3() {
    FR_7_3_V_8_fu_15944_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_23_fu_15898_p1.read(): FR_7_3_V_6_reg_3763.read());
}

void estimate_FR_2::thread_FR_7_3_V_fu_15902_p3() {
    FR_7_3_V_fu_15902_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_7_3_010494_reg_3739.read(): zext_ln209_23_fu_15898_p1.read());
}

void estimate_FR_2::thread_FR_8_0_V_fu_16157_p2() {
    FR_8_0_V_fu_16157_p2 = (!zext_ln209_25_fu_16154_p1.read().is_01() || !zext_ln209_24_fu_16150_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_25_fu_16154_p1.read()) + sc_biguint<7>(zext_ln209_24_fu_16150_p1.read()));
}

void estimate_FR_2::thread_FR_8_3_V_10_fu_16216_p3() {
    FR_8_3_V_10_fu_16216_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_8_3_V_6_reg_3715.read(): FR_8_3_V_8_fu_16209_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_11_fu_16223_p3() {
    FR_8_3_V_11_fu_16223_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_26_fu_16163_p1.read(): FR_8_3_V_9_reg_3727.read());
}

void estimate_FR_2::thread_FR_8_3_V_12_fu_16265_p3() {
    FR_8_3_V_12_fu_16265_p3 = (!tmp_92_reg_23251.read()[0].is_01())? sc_lv<8>(): ((tmp_92_reg_23251.read()[0].to_bool())? FR_8_3_V_3_fu_16181_p3.read(): FR_V_8_3_010498_reg_3691.read());
}

void estimate_FR_2::thread_FR_8_3_V_13_fu_16272_p3() {
    FR_8_3_V_13_fu_16272_p3 = (!and_ln321_24_reg_23288.read()[0].is_01())? sc_lv<8>(): ((and_ln321_24_reg_23288.read()[0].to_bool())? FR_8_3_V_3_fu_16181_p3.read(): FR_8_3_V_12_fu_16265_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_14_fu_16279_p3() {
    FR_8_3_V_14_fu_16279_p3 = (!and_ln321_25_reg_23297.read()[0].is_01())? sc_lv<8>(): ((and_ln321_25_reg_23297.read()[0].to_bool())? FR_8_3_V_3_fu_16181_p3.read(): FR_8_3_V_13_fu_16272_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_15_fu_16286_p3() {
    FR_8_3_V_15_fu_16286_p3 = (!and_ln321_26_reg_23307.read()[0].is_01())? sc_lv<8>(): ((and_ln321_26_reg_23307.read()[0].to_bool())? FR_8_3_V_3_fu_16181_p3.read(): FR_8_3_V_14_fu_16279_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_16_fu_16293_p3() {
    FR_8_3_V_16_fu_16293_p3 = (!tmp_92_reg_23251.read()[0].is_01())? sc_lv<8>(): ((tmp_92_reg_23251.read()[0].to_bool())? FR_8_3_V_7_fu_16202_p3.read(): FR_V_8_2_010497_reg_3703.read());
}

void estimate_FR_2::thread_FR_8_3_V_17_fu_16300_p3() {
    FR_8_3_V_17_fu_16300_p3 = (!and_ln321_24_reg_23288.read()[0].is_01())? sc_lv<8>(): ((and_ln321_24_reg_23288.read()[0].to_bool())? FR_8_3_V_7_fu_16202_p3.read(): FR_8_3_V_16_fu_16293_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_18_fu_16307_p3() {
    FR_8_3_V_18_fu_16307_p3 = (!and_ln321_25_reg_23297.read()[0].is_01())? sc_lv<8>(): ((and_ln321_25_reg_23297.read()[0].to_bool())? FR_8_3_V_7_fu_16202_p3.read(): FR_8_3_V_17_fu_16300_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_19_fu_16314_p3() {
    FR_8_3_V_19_fu_16314_p3 = (!and_ln321_26_reg_23307.read()[0].is_01())? sc_lv<8>(): ((and_ln321_26_reg_23307.read()[0].to_bool())? FR_8_3_V_7_fu_16202_p3.read(): FR_8_3_V_18_fu_16307_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_20_fu_16321_p3() {
    FR_8_3_V_20_fu_16321_p3 = (!tmp_92_reg_23251.read()[0].is_01())? sc_lv<8>(): ((tmp_92_reg_23251.read()[0].to_bool())? FR_8_3_V_10_fu_16216_p3.read(): FR_8_3_V_6_reg_3715.read());
}

void estimate_FR_2::thread_FR_8_3_V_21_fu_16328_p3() {
    FR_8_3_V_21_fu_16328_p3 = (!and_ln321_24_reg_23288.read()[0].is_01())? sc_lv<8>(): ((and_ln321_24_reg_23288.read()[0].to_bool())? FR_8_3_V_10_fu_16216_p3.read(): FR_8_3_V_20_fu_16321_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_22_fu_16335_p3() {
    FR_8_3_V_22_fu_16335_p3 = (!and_ln321_25_reg_23297.read()[0].is_01())? sc_lv<8>(): ((and_ln321_25_reg_23297.read()[0].to_bool())? FR_8_3_V_10_fu_16216_p3.read(): FR_8_3_V_21_fu_16328_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_23_fu_16342_p3() {
    FR_8_3_V_23_fu_16342_p3 = (!and_ln321_26_reg_23307.read()[0].is_01())? sc_lv<8>(): ((and_ln321_26_reg_23307.read()[0].to_bool())? FR_8_3_V_10_fu_16216_p3.read(): FR_8_3_V_22_fu_16335_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_24_fu_16349_p3() {
    FR_8_3_V_24_fu_16349_p3 = (!tmp_92_reg_23251.read()[0].is_01())? sc_lv<8>(): ((tmp_92_reg_23251.read()[0].to_bool())? FR_8_3_V_11_fu_16223_p3.read(): FR_8_3_V_9_reg_3727.read());
}

void estimate_FR_2::thread_FR_8_3_V_25_fu_16356_p3() {
    FR_8_3_V_25_fu_16356_p3 = (!and_ln321_24_reg_23288.read()[0].is_01())? sc_lv<8>(): ((and_ln321_24_reg_23288.read()[0].to_bool())? FR_8_3_V_11_fu_16223_p3.read(): FR_8_3_V_24_fu_16349_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_26_fu_16363_p3() {
    FR_8_3_V_26_fu_16363_p3 = (!and_ln321_25_reg_23297.read()[0].is_01())? sc_lv<8>(): ((and_ln321_25_reg_23297.read()[0].to_bool())? FR_8_3_V_11_fu_16223_p3.read(): FR_8_3_V_25_fu_16356_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_27_fu_16370_p3() {
    FR_8_3_V_27_fu_16370_p3 = (!and_ln321_26_reg_23307.read()[0].is_01())? sc_lv<8>(): ((and_ln321_26_reg_23307.read()[0].to_bool())? FR_8_3_V_11_fu_16223_p3.read(): FR_8_3_V_26_fu_16363_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_2_fu_16174_p3() {
    FR_8_3_V_2_fu_16174_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_8_3_010498_reg_3691.read(): FR_8_3_V_fu_16167_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_3_fu_16181_p3() {
    FR_8_3_V_3_fu_16181_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_8_3_010498_reg_3691.read(): FR_8_3_V_2_fu_16174_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_4_fu_16188_p3() {
    FR_8_3_V_4_fu_16188_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_26_fu_16163_p1.read(): FR_V_8_2_010497_reg_3703.read());
}

void estimate_FR_2::thread_FR_8_3_V_5_fu_16195_p3() {
    FR_8_3_V_5_fu_16195_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_8_2_010497_reg_3703.read(): FR_8_3_V_4_fu_16188_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_7_fu_16202_p3() {
    FR_8_3_V_7_fu_16202_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_8_2_010497_reg_3703.read(): FR_8_3_V_5_fu_16195_p3.read());
}

void estimate_FR_2::thread_FR_8_3_V_8_fu_16209_p3() {
    FR_8_3_V_8_fu_16209_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_26_fu_16163_p1.read(): FR_8_3_V_6_reg_3715.read());
}

void estimate_FR_2::thread_FR_8_3_V_fu_16167_p3() {
    FR_8_3_V_fu_16167_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_8_3_010498_reg_3691.read(): zext_ln209_26_fu_16163_p1.read());
}

void estimate_FR_2::thread_FR_9_0_V_fu_16422_p2() {
    FR_9_0_V_fu_16422_p2 = (!zext_ln209_28_fu_16419_p1.read().is_01() || !zext_ln209_27_fu_16415_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln209_28_fu_16419_p1.read()) + sc_biguint<7>(zext_ln209_27_fu_16415_p1.read()));
}

void estimate_FR_2::thread_FR_9_3_V_10_fu_16481_p3() {
    FR_9_3_V_10_fu_16481_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_9_3_V_6_reg_3667.read(): FR_9_3_V_8_fu_16474_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_11_fu_16488_p3() {
    FR_9_3_V_11_fu_16488_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? zext_ln209_29_fu_16428_p1.read(): FR_9_3_V_9_reg_3679.read());
}

void estimate_FR_2::thread_FR_9_3_V_12_fu_16530_p3() {
    FR_9_3_V_12_fu_16530_p3 = (!tmp_93_reg_23347.read()[0].is_01())? sc_lv<8>(): ((tmp_93_reg_23347.read()[0].to_bool())? FR_9_3_V_3_fu_16446_p3.read(): FR_V_9_3_010502_reg_3643.read());
}

void estimate_FR_2::thread_FR_9_3_V_13_fu_16537_p3() {
    FR_9_3_V_13_fu_16537_p3 = (!and_ln321_27_reg_23384.read()[0].is_01())? sc_lv<8>(): ((and_ln321_27_reg_23384.read()[0].to_bool())? FR_9_3_V_3_fu_16446_p3.read(): FR_9_3_V_12_fu_16530_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_14_fu_16544_p3() {
    FR_9_3_V_14_fu_16544_p3 = (!and_ln321_28_reg_23393.read()[0].is_01())? sc_lv<8>(): ((and_ln321_28_reg_23393.read()[0].to_bool())? FR_9_3_V_3_fu_16446_p3.read(): FR_9_3_V_13_fu_16537_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_15_fu_16551_p3() {
    FR_9_3_V_15_fu_16551_p3 = (!and_ln321_29_reg_23403.read()[0].is_01())? sc_lv<8>(): ((and_ln321_29_reg_23403.read()[0].to_bool())? FR_9_3_V_3_fu_16446_p3.read(): FR_9_3_V_14_fu_16544_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_16_fu_16558_p3() {
    FR_9_3_V_16_fu_16558_p3 = (!tmp_93_reg_23347.read()[0].is_01())? sc_lv<8>(): ((tmp_93_reg_23347.read()[0].to_bool())? FR_9_3_V_7_fu_16467_p3.read(): FR_V_9_2_010501_reg_3655.read());
}

void estimate_FR_2::thread_FR_9_3_V_17_fu_16565_p3() {
    FR_9_3_V_17_fu_16565_p3 = (!and_ln321_27_reg_23384.read()[0].is_01())? sc_lv<8>(): ((and_ln321_27_reg_23384.read()[0].to_bool())? FR_9_3_V_7_fu_16467_p3.read(): FR_9_3_V_16_fu_16558_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_18_fu_16572_p3() {
    FR_9_3_V_18_fu_16572_p3 = (!and_ln321_28_reg_23393.read()[0].is_01())? sc_lv<8>(): ((and_ln321_28_reg_23393.read()[0].to_bool())? FR_9_3_V_7_fu_16467_p3.read(): FR_9_3_V_17_fu_16565_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_19_fu_16579_p3() {
    FR_9_3_V_19_fu_16579_p3 = (!and_ln321_29_reg_23403.read()[0].is_01())? sc_lv<8>(): ((and_ln321_29_reg_23403.read()[0].to_bool())? FR_9_3_V_7_fu_16467_p3.read(): FR_9_3_V_18_fu_16572_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_20_fu_16586_p3() {
    FR_9_3_V_20_fu_16586_p3 = (!tmp_93_reg_23347.read()[0].is_01())? sc_lv<8>(): ((tmp_93_reg_23347.read()[0].to_bool())? FR_9_3_V_10_fu_16481_p3.read(): FR_9_3_V_6_reg_3667.read());
}

void estimate_FR_2::thread_FR_9_3_V_21_fu_16593_p3() {
    FR_9_3_V_21_fu_16593_p3 = (!and_ln321_27_reg_23384.read()[0].is_01())? sc_lv<8>(): ((and_ln321_27_reg_23384.read()[0].to_bool())? FR_9_3_V_10_fu_16481_p3.read(): FR_9_3_V_20_fu_16586_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_22_fu_16600_p3() {
    FR_9_3_V_22_fu_16600_p3 = (!and_ln321_28_reg_23393.read()[0].is_01())? sc_lv<8>(): ((and_ln321_28_reg_23393.read()[0].to_bool())? FR_9_3_V_10_fu_16481_p3.read(): FR_9_3_V_21_fu_16593_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_23_fu_16607_p3() {
    FR_9_3_V_23_fu_16607_p3 = (!and_ln321_29_reg_23403.read()[0].is_01())? sc_lv<8>(): ((and_ln321_29_reg_23403.read()[0].to_bool())? FR_9_3_V_10_fu_16481_p3.read(): FR_9_3_V_22_fu_16600_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_24_fu_16614_p3() {
    FR_9_3_V_24_fu_16614_p3 = (!tmp_93_reg_23347.read()[0].is_01())? sc_lv<8>(): ((tmp_93_reg_23347.read()[0].to_bool())? FR_9_3_V_11_fu_16488_p3.read(): FR_9_3_V_9_reg_3679.read());
}

void estimate_FR_2::thread_FR_9_3_V_25_fu_16621_p3() {
    FR_9_3_V_25_fu_16621_p3 = (!and_ln321_27_reg_23384.read()[0].is_01())? sc_lv<8>(): ((and_ln321_27_reg_23384.read()[0].to_bool())? FR_9_3_V_11_fu_16488_p3.read(): FR_9_3_V_24_fu_16614_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_26_fu_16628_p3() {
    FR_9_3_V_26_fu_16628_p3 = (!and_ln321_28_reg_23393.read()[0].is_01())? sc_lv<8>(): ((and_ln321_28_reg_23393.read()[0].to_bool())? FR_9_3_V_11_fu_16488_p3.read(): FR_9_3_V_25_fu_16621_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_27_fu_16635_p3() {
    FR_9_3_V_27_fu_16635_p3 = (!and_ln321_29_reg_23403.read()[0].is_01())? sc_lv<8>(): ((and_ln321_29_reg_23403.read()[0].to_bool())? FR_9_3_V_11_fu_16488_p3.read(): FR_9_3_V_26_fu_16628_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_2_fu_16439_p3() {
    FR_9_3_V_2_fu_16439_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_9_3_010502_reg_3643.read(): FR_9_3_V_fu_16432_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_3_fu_16446_p3() {
    FR_9_3_V_3_fu_16446_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_9_3_010502_reg_3643.read(): FR_9_3_V_2_fu_16439_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_4_fu_16453_p3() {
    FR_9_3_V_4_fu_16453_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? zext_ln209_29_fu_16428_p1.read(): FR_V_9_2_010501_reg_3655.read());
}

void estimate_FR_2::thread_FR_9_3_V_5_fu_16460_p3() {
    FR_9_3_V_5_fu_16460_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? FR_V_9_2_010501_reg_3655.read(): FR_9_3_V_4_fu_16453_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_7_fu_16467_p3() {
    FR_9_3_V_7_fu_16467_p3 = (!icmp_ln700_2_reg_22408.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_2_reg_22408.read()[0].to_bool())? FR_V_9_2_010501_reg_3655.read(): FR_9_3_V_5_fu_16460_p3.read());
}

void estimate_FR_2::thread_FR_9_3_V_8_fu_16474_p3() {
    FR_9_3_V_8_fu_16474_p3 = (!icmp_ln700_1_reg_22326.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_1_reg_22326.read()[0].to_bool())? zext_ln209_29_fu_16428_p1.read(): FR_9_3_V_6_reg_3667.read());
}

void estimate_FR_2::thread_FR_9_3_V_fu_16432_p3() {
    FR_9_3_V_fu_16432_p3 = (!icmp_ln700_reg_22269.read()[0].is_01())? sc_lv<8>(): ((icmp_ln700_reg_22269.read()[0].to_bool())? FR_V_9_3_010502_reg_3643.read(): zext_ln209_29_fu_16428_p1.read());
}

void estimate_FR_2::thread_add_ln19_1_fu_5101_p2() {
    add_ln19_1_fu_5101_p2 = (!indvars_iv45_reg_1040.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(indvars_iv45_reg_1040.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void estimate_FR_2::thread_add_ln19_fu_5139_p2() {
    add_ln19_fu_5139_p2 = (!ap_const_lv7_18.is_01() || !i_0_0_reg_4135.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_18) + sc_biguint<7>(i_0_0_reg_4135.read()));
}

void estimate_FR_2::thread_and_ln321_10_fu_6484_p2() {
    and_ln321_10_fu_6484_p2 = (tmp_87_fu_6268_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_11_fu_6498_p2() {
    and_ln321_11_fu_6498_p2 = (tmp_87_fu_6268_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_12_fu_6838_p2() {
    and_ln321_12_fu_6838_p2 = (tmp_88_fu_6636_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_13_fu_6852_p2() {
    and_ln321_13_fu_6852_p2 = (tmp_88_fu_6636_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_14_fu_6866_p2() {
    and_ln321_14_fu_6866_p2 = (tmp_88_fu_6636_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_15_fu_7206_p2() {
    and_ln321_15_fu_7206_p2 = (tmp_89_fu_7004_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_16_fu_7220_p2() {
    and_ln321_16_fu_7220_p2 = (tmp_89_fu_7004_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_17_fu_7234_p2() {
    and_ln321_17_fu_7234_p2 = (tmp_89_fu_7004_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_18_fu_7574_p2() {
    and_ln321_18_fu_7574_p2 = (tmp_90_fu_7372_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_19_fu_7588_p2() {
    and_ln321_19_fu_7588_p2 = (tmp_90_fu_7372_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_1_fu_5380_p2() {
    and_ln321_1_fu_5380_p2 = (tmp_41_fu_5149_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_20_fu_7602_p2() {
    and_ln321_20_fu_7602_p2 = (tmp_90_fu_7372_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_21_fu_7942_p2() {
    and_ln321_21_fu_7942_p2 = (tmp_91_fu_7740_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_22_fu_7956_p2() {
    and_ln321_22_fu_7956_p2 = (tmp_91_fu_7740_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_23_fu_7970_p2() {
    and_ln321_23_fu_7970_p2 = (tmp_91_fu_7740_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_24_fu_8310_p2() {
    and_ln321_24_fu_8310_p2 = (tmp_92_fu_8108_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_25_fu_8324_p2() {
    and_ln321_25_fu_8324_p2 = (tmp_92_fu_8108_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_26_fu_8338_p2() {
    and_ln321_26_fu_8338_p2 = (tmp_92_fu_8108_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_27_fu_8678_p2() {
    and_ln321_27_fu_8678_p2 = (tmp_93_fu_8476_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_28_fu_8692_p2() {
    and_ln321_28_fu_8692_p2 = (tmp_93_fu_8476_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_29_fu_8706_p2() {
    and_ln321_29_fu_8706_p2 = (tmp_93_fu_8476_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_2_fu_5394_p2() {
    and_ln321_2_fu_5394_p2 = (tmp_41_fu_5149_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_30_fu_9046_p2() {
    and_ln321_30_fu_9046_p2 = (tmp_94_fu_8844_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_31_fu_9060_p2() {
    and_ln321_31_fu_9060_p2 = (tmp_94_fu_8844_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_32_fu_9074_p2() {
    and_ln321_32_fu_9074_p2 = (tmp_94_fu_8844_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_33_fu_9414_p2() {
    and_ln321_33_fu_9414_p2 = (tmp_95_fu_9212_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_34_fu_9428_p2() {
    and_ln321_34_fu_9428_p2 = (tmp_95_fu_9212_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_35_fu_9442_p2() {
    and_ln321_35_fu_9442_p2 = (tmp_95_fu_9212_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_36_fu_9782_p2() {
    and_ln321_36_fu_9782_p2 = (tmp_96_fu_9580_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_37_fu_9796_p2() {
    and_ln321_37_fu_9796_p2 = (tmp_96_fu_9580_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_38_fu_9810_p2() {
    and_ln321_38_fu_9810_p2 = (tmp_96_fu_9580_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_39_fu_10150_p2() {
    and_ln321_39_fu_10150_p2 = (tmp_97_fu_9948_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_3_fu_5734_p2() {
    and_ln321_3_fu_5734_p2 = (tmp_85_fu_5532_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_40_fu_10164_p2() {
    and_ln321_40_fu_10164_p2 = (tmp_97_fu_9948_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_41_fu_10178_p2() {
    and_ln321_41_fu_10178_p2 = (tmp_97_fu_9948_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_42_fu_10518_p2() {
    and_ln321_42_fu_10518_p2 = (tmp_98_fu_10316_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_43_fu_10532_p2() {
    and_ln321_43_fu_10532_p2 = (tmp_98_fu_10316_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_44_fu_10546_p2() {
    and_ln321_44_fu_10546_p2 = (tmp_98_fu_10316_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_45_fu_10886_p2() {
    and_ln321_45_fu_10886_p2 = (tmp_99_fu_10684_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_46_fu_10900_p2() {
    and_ln321_46_fu_10900_p2 = (tmp_99_fu_10684_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_47_fu_10914_p2() {
    and_ln321_47_fu_10914_p2 = (tmp_99_fu_10684_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_48_fu_11254_p2() {
    and_ln321_48_fu_11254_p2 = (tmp_100_fu_11052_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_49_fu_11268_p2() {
    and_ln321_49_fu_11268_p2 = (tmp_100_fu_11052_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_4_fu_5748_p2() {
    and_ln321_4_fu_5748_p2 = (tmp_85_fu_5532_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_50_fu_11282_p2() {
    and_ln321_50_fu_11282_p2 = (tmp_100_fu_11052_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_51_fu_11622_p2() {
    and_ln321_51_fu_11622_p2 = (tmp_101_fu_11420_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_52_fu_11636_p2() {
    and_ln321_52_fu_11636_p2 = (tmp_101_fu_11420_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_53_fu_11650_p2() {
    and_ln321_53_fu_11650_p2 = (tmp_101_fu_11420_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_54_fu_11990_p2() {
    and_ln321_54_fu_11990_p2 = (tmp_102_fu_11788_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_55_fu_12004_p2() {
    and_ln321_55_fu_12004_p2 = (tmp_102_fu_11788_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_56_fu_12018_p2() {
    and_ln321_56_fu_12018_p2 = (tmp_102_fu_11788_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_57_fu_12358_p2() {
    and_ln321_57_fu_12358_p2 = (tmp_103_fu_12156_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_58_fu_12372_p2() {
    and_ln321_58_fu_12372_p2 = (tmp_103_fu_12156_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_59_fu_12386_p2() {
    and_ln321_59_fu_12386_p2 = (tmp_103_fu_12156_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_5_fu_5762_p2() {
    and_ln321_5_fu_5762_p2 = (tmp_85_fu_5532_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_60_fu_12726_p2() {
    and_ln321_60_fu_12726_p2 = (tmp_104_fu_12524_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_61_fu_12740_p2() {
    and_ln321_61_fu_12740_p2 = (tmp_104_fu_12524_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_62_fu_12754_p2() {
    and_ln321_62_fu_12754_p2 = (tmp_104_fu_12524_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_63_fu_13094_p2() {
    and_ln321_63_fu_13094_p2 = (tmp_105_fu_12892_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_64_fu_13108_p2() {
    and_ln321_64_fu_13108_p2 = (tmp_105_fu_12892_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_65_fu_13122_p2() {
    and_ln321_65_fu_13122_p2 = (tmp_105_fu_12892_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_66_fu_13462_p2() {
    and_ln321_66_fu_13462_p2 = (tmp_106_fu_13260_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_67_fu_13476_p2() {
    and_ln321_67_fu_13476_p2 = (tmp_106_fu_13260_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_68_fu_13490_p2() {
    and_ln321_68_fu_13490_p2 = (tmp_106_fu_13260_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_69_fu_13830_p2() {
    and_ln321_69_fu_13830_p2 = (tmp_107_fu_13628_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_6_fu_6102_p2() {
    and_ln321_6_fu_6102_p2 = (tmp_86_fu_5900_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_70_fu_13844_p2() {
    and_ln321_70_fu_13844_p2 = (tmp_107_fu_13628_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_71_fu_13858_p2() {
    and_ln321_71_fu_13858_p2 = (tmp_107_fu_13628_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_7_fu_6116_p2() {
    and_ln321_7_fu_6116_p2 = (tmp_86_fu_5900_p3.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln321_8_fu_6130_p2() {
    and_ln321_8_fu_6130_p2 = (tmp_86_fu_5900_p3.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln321_9_fu_6470_p2() {
    and_ln321_9_fu_6470_p2 = (tmp_87_fu_6268_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln321_fu_5366_p2() {
    and_ln321_fu_5366_p2 = (tmp_41_fu_5149_p3.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_10_fu_6309_p2() {
    and_ln700_10_fu_6309_p2 = (trunc_ln301_3_fu_6264_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_11_fu_6323_p2() {
    and_ln700_11_fu_6323_p2 = (trunc_ln301_3_fu_6264_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_12_fu_6663_p2() {
    and_ln700_12_fu_6663_p2 = (trunc_ln301_4_fu_6632_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_13_fu_6677_p2() {
    and_ln700_13_fu_6677_p2 = (trunc_ln301_4_fu_6632_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_14_fu_6691_p2() {
    and_ln700_14_fu_6691_p2 = (trunc_ln301_4_fu_6632_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_15_fu_7031_p2() {
    and_ln700_15_fu_7031_p2 = (trunc_ln301_5_fu_7000_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_16_fu_7045_p2() {
    and_ln700_16_fu_7045_p2 = (trunc_ln301_5_fu_7000_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_17_fu_7059_p2() {
    and_ln700_17_fu_7059_p2 = (trunc_ln301_5_fu_7000_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_18_fu_7399_p2() {
    and_ln700_18_fu_7399_p2 = (trunc_ln301_6_fu_7368_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_19_fu_7413_p2() {
    and_ln700_19_fu_7413_p2 = (trunc_ln301_6_fu_7368_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_1_fu_5200_p2() {
    and_ln700_1_fu_5200_p2 = (trunc_ln301_fu_5145_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_20_fu_7427_p2() {
    and_ln700_20_fu_7427_p2 = (trunc_ln301_6_fu_7368_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_21_fu_7767_p2() {
    and_ln700_21_fu_7767_p2 = (trunc_ln301_7_fu_7736_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_22_fu_7781_p2() {
    and_ln700_22_fu_7781_p2 = (trunc_ln301_7_fu_7736_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_23_fu_7795_p2() {
    and_ln700_23_fu_7795_p2 = (trunc_ln301_7_fu_7736_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_24_fu_8135_p2() {
    and_ln700_24_fu_8135_p2 = (trunc_ln301_8_fu_8104_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_25_fu_8149_p2() {
    and_ln700_25_fu_8149_p2 = (trunc_ln301_8_fu_8104_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_26_fu_8163_p2() {
    and_ln700_26_fu_8163_p2 = (trunc_ln301_8_fu_8104_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_27_fu_8503_p2() {
    and_ln700_27_fu_8503_p2 = (trunc_ln301_9_fu_8472_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_28_fu_8517_p2() {
    and_ln700_28_fu_8517_p2 = (trunc_ln301_9_fu_8472_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_29_fu_8531_p2() {
    and_ln700_29_fu_8531_p2 = (trunc_ln301_9_fu_8472_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_2_fu_5219_p2() {
    and_ln700_2_fu_5219_p2 = (trunc_ln301_fu_5145_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_30_fu_8871_p2() {
    and_ln700_30_fu_8871_p2 = (trunc_ln301_10_fu_8840_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_31_fu_8885_p2() {
    and_ln700_31_fu_8885_p2 = (trunc_ln301_10_fu_8840_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_32_fu_8899_p2() {
    and_ln700_32_fu_8899_p2 = (trunc_ln301_10_fu_8840_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_33_fu_9239_p2() {
    and_ln700_33_fu_9239_p2 = (trunc_ln301_11_fu_9208_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_34_fu_9253_p2() {
    and_ln700_34_fu_9253_p2 = (trunc_ln301_11_fu_9208_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_35_fu_9267_p2() {
    and_ln700_35_fu_9267_p2 = (trunc_ln301_11_fu_9208_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_36_fu_9607_p2() {
    and_ln700_36_fu_9607_p2 = (trunc_ln301_12_fu_9576_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_37_fu_9621_p2() {
    and_ln700_37_fu_9621_p2 = (trunc_ln301_12_fu_9576_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_38_fu_9635_p2() {
    and_ln700_38_fu_9635_p2 = (trunc_ln301_12_fu_9576_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_39_fu_9975_p2() {
    and_ln700_39_fu_9975_p2 = (trunc_ln301_13_fu_9944_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_3_fu_5559_p2() {
    and_ln700_3_fu_5559_p2 = (trunc_ln301_1_fu_5528_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_40_fu_9989_p2() {
    and_ln700_40_fu_9989_p2 = (trunc_ln301_13_fu_9944_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_41_fu_10003_p2() {
    and_ln700_41_fu_10003_p2 = (trunc_ln301_13_fu_9944_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_42_fu_10343_p2() {
    and_ln700_42_fu_10343_p2 = (trunc_ln301_14_fu_10312_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_43_fu_10357_p2() {
    and_ln700_43_fu_10357_p2 = (trunc_ln301_14_fu_10312_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_44_fu_10371_p2() {
    and_ln700_44_fu_10371_p2 = (trunc_ln301_14_fu_10312_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_45_fu_10711_p2() {
    and_ln700_45_fu_10711_p2 = (trunc_ln301_15_fu_10680_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_46_fu_10725_p2() {
    and_ln700_46_fu_10725_p2 = (trunc_ln301_15_fu_10680_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_47_fu_10739_p2() {
    and_ln700_47_fu_10739_p2 = (trunc_ln301_15_fu_10680_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_48_fu_11079_p2() {
    and_ln700_48_fu_11079_p2 = (trunc_ln301_16_fu_11048_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_49_fu_11093_p2() {
    and_ln700_49_fu_11093_p2 = (trunc_ln301_16_fu_11048_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_4_fu_5573_p2() {
    and_ln700_4_fu_5573_p2 = (trunc_ln301_1_fu_5528_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_50_fu_11107_p2() {
    and_ln700_50_fu_11107_p2 = (trunc_ln301_16_fu_11048_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_51_fu_11447_p2() {
    and_ln700_51_fu_11447_p2 = (trunc_ln301_17_fu_11416_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_52_fu_11461_p2() {
    and_ln700_52_fu_11461_p2 = (trunc_ln301_17_fu_11416_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_53_fu_11475_p2() {
    and_ln700_53_fu_11475_p2 = (trunc_ln301_17_fu_11416_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_54_fu_11815_p2() {
    and_ln700_54_fu_11815_p2 = (trunc_ln301_18_fu_11784_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_55_fu_11829_p2() {
    and_ln700_55_fu_11829_p2 = (trunc_ln301_18_fu_11784_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_56_fu_11843_p2() {
    and_ln700_56_fu_11843_p2 = (trunc_ln301_18_fu_11784_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_57_fu_12183_p2() {
    and_ln700_57_fu_12183_p2 = (trunc_ln301_19_fu_12152_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_58_fu_12197_p2() {
    and_ln700_58_fu_12197_p2 = (trunc_ln301_19_fu_12152_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_59_fu_12211_p2() {
    and_ln700_59_fu_12211_p2 = (trunc_ln301_19_fu_12152_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_5_fu_5587_p2() {
    and_ln700_5_fu_5587_p2 = (trunc_ln301_1_fu_5528_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_60_fu_12551_p2() {
    and_ln700_60_fu_12551_p2 = (trunc_ln301_20_fu_12520_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_61_fu_12565_p2() {
    and_ln700_61_fu_12565_p2 = (trunc_ln301_20_fu_12520_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_62_fu_12579_p2() {
    and_ln700_62_fu_12579_p2 = (trunc_ln301_20_fu_12520_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_63_fu_12919_p2() {
    and_ln700_63_fu_12919_p2 = (trunc_ln301_21_fu_12888_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_64_fu_12933_p2() {
    and_ln700_64_fu_12933_p2 = (trunc_ln301_21_fu_12888_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_65_fu_12947_p2() {
    and_ln700_65_fu_12947_p2 = (trunc_ln301_21_fu_12888_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_66_fu_13287_p2() {
    and_ln700_66_fu_13287_p2 = (trunc_ln301_22_fu_13256_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_67_fu_13301_p2() {
    and_ln700_67_fu_13301_p2 = (trunc_ln301_22_fu_13256_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_68_fu_13315_p2() {
    and_ln700_68_fu_13315_p2 = (trunc_ln301_22_fu_13256_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_69_fu_13655_p2() {
    and_ln700_69_fu_13655_p2 = (trunc_ln301_23_fu_13624_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_6_fu_5927_p2() {
    and_ln700_6_fu_5927_p2 = (trunc_ln301_2_fu_5896_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_70_fu_13669_p2() {
    and_ln700_70_fu_13669_p2 = (trunc_ln301_23_fu_13624_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_71_fu_13683_p2() {
    and_ln700_71_fu_13683_p2 = (trunc_ln301_23_fu_13624_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_7_fu_5941_p2() {
    and_ln700_7_fu_5941_p2 = (trunc_ln301_2_fu_5896_p1.read() & icmp_ln700_1_fu_5195_p2.read());
}

void estimate_FR_2::thread_and_ln700_8_fu_5955_p2() {
    and_ln700_8_fu_5955_p2 = (trunc_ln301_2_fu_5896_p1.read() & icmp_ln700_2_fu_5214_p2.read());
}

void estimate_FR_2::thread_and_ln700_9_fu_6295_p2() {
    and_ln700_9_fu_6295_p2 = (trunc_ln301_3_fu_6264_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_and_ln700_fu_5181_p2() {
    and_ln700_fu_5181_p2 = (trunc_ln301_fu_5145_p1.read() & icmp_ln700_fu_5176_p2.read());
}

void estimate_FR_2::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void estimate_FR_2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void estimate_FR_2::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[2];
}

void estimate_FR_2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[3];
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

void estimate_FR_2::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void estimate_FR_2::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln19_fu_5095_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_0_2_V_0_phi_fu_1984_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_0_2_V_0_phi_fu_1984_p4 = select_ln301_1_reg_22554.read();
    } else {
        ap_phi_mux_cnt_0_2_V_0_phi_fu_1984_p4 = cnt_0_2_V_0_reg_1981.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_0_3_V_0_phi_fu_1974_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_0_3_V_0_phi_fu_1974_p4 = select_ln301_reg_22549.read();
    } else {
        ap_phi_mux_cnt_0_3_V_0_phi_fu_1974_p4 = cnt_0_3_V_0_reg_1971.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_0_3_V_10_phi_fu_1994_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_0_3_V_10_phi_fu_1994_p4 = select_ln301_2_reg_22559.read();
    } else {
        ap_phi_mux_cnt_0_3_V_10_phi_fu_1994_p4 = cnt_0_3_V_10_reg_1991.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_0_3_V_14_phi_fu_2004_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_0_3_V_14_phi_fu_2004_p4 = select_ln301_3_reg_22564.read();
    } else {
        ap_phi_mux_cnt_0_3_V_14_phi_fu_2004_p4 = cnt_0_3_V_14_reg_2001.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_0_3_V_28_phi_fu_2964_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_0_3_V_28_phi_fu_2964_p4 = select_ln321_17_reg_22574.read();
    } else {
        ap_phi_mux_cnt_0_3_V_28_phi_fu_2964_p4 = cnt_0_3_V_28_reg_2961.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_10_2_V_0_phi_fu_1584_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_10_2_V_0_phi_fu_1584_p4 = select_ln301_141_reg_23514.read();
    } else {
        ap_phi_mux_cnt_10_2_V_0_phi_fu_1584_p4 = cnt_10_2_V_0_reg_1581.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_10_3_V_0_phi_fu_1574_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_10_3_V_0_phi_fu_1574_p4 = select_ln301_140_reg_23509.read();
    } else {
        ap_phi_mux_cnt_10_3_V_0_phi_fu_1574_p4 = cnt_10_3_V_0_reg_1571.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_10_3_V_10_phi_fu_1594_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_10_3_V_10_phi_fu_1594_p4 = select_ln301_142_reg_23519.read();
    } else {
        ap_phi_mux_cnt_10_3_V_10_phi_fu_1594_p4 = cnt_10_3_V_10_reg_1591.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_10_3_V_14_phi_fu_1604_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_10_3_V_14_phi_fu_1604_p4 = select_ln301_143_reg_23524.read();
    } else {
        ap_phi_mux_cnt_10_3_V_14_phi_fu_1604_p4 = cnt_10_3_V_14_reg_1601.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_10_3_V_28_phi_fu_2864_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_10_3_V_28_phi_fu_2864_p4 = select_ln321_407_reg_23534.read();
    } else {
        ap_phi_mux_cnt_10_3_V_28_phi_fu_2864_p4 = cnt_10_3_V_28_reg_2861.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_11_2_V_0_phi_fu_1544_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_11_2_V_0_phi_fu_1544_p4 = select_ln301_155_reg_23610.read();
    } else {
        ap_phi_mux_cnt_11_2_V_0_phi_fu_1544_p4 = cnt_11_2_V_0_reg_1541.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_11_3_V_0_phi_fu_1534_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_11_3_V_0_phi_fu_1534_p4 = select_ln301_154_reg_23605.read();
    } else {
        ap_phi_mux_cnt_11_3_V_0_phi_fu_1534_p4 = cnt_11_3_V_0_reg_1531.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_11_3_V_10_phi_fu_1554_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_11_3_V_10_phi_fu_1554_p4 = select_ln301_156_reg_23615.read();
    } else {
        ap_phi_mux_cnt_11_3_V_10_phi_fu_1554_p4 = cnt_11_3_V_10_reg_1551.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_11_3_V_14_phi_fu_1564_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_11_3_V_14_phi_fu_1564_p4 = select_ln301_157_reg_23620.read();
    } else {
        ap_phi_mux_cnt_11_3_V_14_phi_fu_1564_p4 = cnt_11_3_V_14_reg_1561.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_11_3_V_28_phi_fu_2854_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_11_3_V_28_phi_fu_2854_p4 = select_ln321_446_reg_23630.read();
    } else {
        ap_phi_mux_cnt_11_3_V_28_phi_fu_2854_p4 = cnt_11_3_V_28_reg_2851.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_12_2_V_0_phi_fu_1504_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_12_2_V_0_phi_fu_1504_p4 = select_ln301_169_reg_23706.read();
    } else {
        ap_phi_mux_cnt_12_2_V_0_phi_fu_1504_p4 = cnt_12_2_V_0_reg_1501.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_12_3_V_0_phi_fu_1494_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_12_3_V_0_phi_fu_1494_p4 = select_ln301_168_reg_23701.read();
    } else {
        ap_phi_mux_cnt_12_3_V_0_phi_fu_1494_p4 = cnt_12_3_V_0_reg_1491.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_12_3_V_10_phi_fu_1514_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_12_3_V_10_phi_fu_1514_p4 = select_ln301_170_reg_23711.read();
    } else {
        ap_phi_mux_cnt_12_3_V_10_phi_fu_1514_p4 = cnt_12_3_V_10_reg_1511.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_12_3_V_14_phi_fu_1524_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_12_3_V_14_phi_fu_1524_p4 = select_ln301_171_reg_23716.read();
    } else {
        ap_phi_mux_cnt_12_3_V_14_phi_fu_1524_p4 = cnt_12_3_V_14_reg_1521.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_12_3_V_28_phi_fu_2844_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_12_3_V_28_phi_fu_2844_p4 = select_ln321_485_reg_23726.read();
    } else {
        ap_phi_mux_cnt_12_3_V_28_phi_fu_2844_p4 = cnt_12_3_V_28_reg_2841.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_13_2_V_0_phi_fu_1464_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_13_2_V_0_phi_fu_1464_p4 = select_ln301_183_reg_23802.read();
    } else {
        ap_phi_mux_cnt_13_2_V_0_phi_fu_1464_p4 = cnt_13_2_V_0_reg_1461.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_13_3_V_0_phi_fu_1454_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_13_3_V_0_phi_fu_1454_p4 = select_ln301_182_reg_23797.read();
    } else {
        ap_phi_mux_cnt_13_3_V_0_phi_fu_1454_p4 = cnt_13_3_V_0_reg_1451.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_13_3_V_10_phi_fu_1474_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_13_3_V_10_phi_fu_1474_p4 = select_ln301_184_reg_23807.read();
    } else {
        ap_phi_mux_cnt_13_3_V_10_phi_fu_1474_p4 = cnt_13_3_V_10_reg_1471.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_13_3_V_14_phi_fu_1484_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_13_3_V_14_phi_fu_1484_p4 = select_ln301_185_reg_23812.read();
    } else {
        ap_phi_mux_cnt_13_3_V_14_phi_fu_1484_p4 = cnt_13_3_V_14_reg_1481.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_13_3_V_28_phi_fu_2834_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_13_3_V_28_phi_fu_2834_p4 = select_ln321_524_reg_23822.read();
    } else {
        ap_phi_mux_cnt_13_3_V_28_phi_fu_2834_p4 = cnt_13_3_V_28_reg_2831.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_14_2_V_0_phi_fu_1424_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_14_2_V_0_phi_fu_1424_p4 = select_ln301_197_reg_23898.read();
    } else {
        ap_phi_mux_cnt_14_2_V_0_phi_fu_1424_p4 = cnt_14_2_V_0_reg_1421.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_14_3_V_0_phi_fu_1414_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_14_3_V_0_phi_fu_1414_p4 = select_ln301_196_reg_23893.read();
    } else {
        ap_phi_mux_cnt_14_3_V_0_phi_fu_1414_p4 = cnt_14_3_V_0_reg_1411.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_14_3_V_10_phi_fu_1434_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_14_3_V_10_phi_fu_1434_p4 = select_ln301_198_reg_23903.read();
    } else {
        ap_phi_mux_cnt_14_3_V_10_phi_fu_1434_p4 = cnt_14_3_V_10_reg_1431.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_14_3_V_14_phi_fu_1444_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_14_3_V_14_phi_fu_1444_p4 = select_ln301_199_reg_23908.read();
    } else {
        ap_phi_mux_cnt_14_3_V_14_phi_fu_1444_p4 = cnt_14_3_V_14_reg_1441.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_14_3_V_28_phi_fu_2824_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_14_3_V_28_phi_fu_2824_p4 = select_ln321_563_reg_23918.read();
    } else {
        ap_phi_mux_cnt_14_3_V_28_phi_fu_2824_p4 = cnt_14_3_V_28_reg_2821.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_15_2_V_0_phi_fu_1384_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_15_2_V_0_phi_fu_1384_p4 = select_ln301_211_reg_23994.read();
    } else {
        ap_phi_mux_cnt_15_2_V_0_phi_fu_1384_p4 = cnt_15_2_V_0_reg_1381.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_15_3_V_0_phi_fu_1374_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_15_3_V_0_phi_fu_1374_p4 = select_ln301_210_reg_23989.read();
    } else {
        ap_phi_mux_cnt_15_3_V_0_phi_fu_1374_p4 = cnt_15_3_V_0_reg_1371.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_15_3_V_10_phi_fu_1394_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_15_3_V_10_phi_fu_1394_p4 = select_ln301_212_reg_23999.read();
    } else {
        ap_phi_mux_cnt_15_3_V_10_phi_fu_1394_p4 = cnt_15_3_V_10_reg_1391.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_15_3_V_14_phi_fu_1404_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_15_3_V_14_phi_fu_1404_p4 = select_ln301_213_reg_24004.read();
    } else {
        ap_phi_mux_cnt_15_3_V_14_phi_fu_1404_p4 = cnt_15_3_V_14_reg_1401.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_15_3_V_28_phi_fu_2814_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_15_3_V_28_phi_fu_2814_p4 = select_ln321_602_reg_24014.read();
    } else {
        ap_phi_mux_cnt_15_3_V_28_phi_fu_2814_p4 = cnt_15_3_V_28_reg_2811.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_16_2_V_0_phi_fu_1344_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_16_2_V_0_phi_fu_1344_p4 = select_ln301_225_reg_24090.read();
    } else {
        ap_phi_mux_cnt_16_2_V_0_phi_fu_1344_p4 = cnt_16_2_V_0_reg_1341.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_16_3_V_0_phi_fu_1334_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_16_3_V_0_phi_fu_1334_p4 = select_ln301_224_reg_24085.read();
    } else {
        ap_phi_mux_cnt_16_3_V_0_phi_fu_1334_p4 = cnt_16_3_V_0_reg_1331.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_16_3_V_10_phi_fu_1354_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_16_3_V_10_phi_fu_1354_p4 = select_ln301_226_reg_24095.read();
    } else {
        ap_phi_mux_cnt_16_3_V_10_phi_fu_1354_p4 = cnt_16_3_V_10_reg_1351.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_16_3_V_14_phi_fu_1364_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_16_3_V_14_phi_fu_1364_p4 = select_ln301_227_reg_24100.read();
    } else {
        ap_phi_mux_cnt_16_3_V_14_phi_fu_1364_p4 = cnt_16_3_V_14_reg_1361.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_16_3_V_28_phi_fu_2804_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_16_3_V_28_phi_fu_2804_p4 = select_ln321_641_reg_24110.read();
    } else {
        ap_phi_mux_cnt_16_3_V_28_phi_fu_2804_p4 = cnt_16_3_V_28_reg_2801.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_17_2_V_0_phi_fu_1304_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_17_2_V_0_phi_fu_1304_p4 = select_ln301_239_reg_24186.read();
    } else {
        ap_phi_mux_cnt_17_2_V_0_phi_fu_1304_p4 = cnt_17_2_V_0_reg_1301.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_17_3_V_0_phi_fu_1294_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_17_3_V_0_phi_fu_1294_p4 = select_ln301_238_reg_24181.read();
    } else {
        ap_phi_mux_cnt_17_3_V_0_phi_fu_1294_p4 = cnt_17_3_V_0_reg_1291.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_17_3_V_10_phi_fu_1314_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_17_3_V_10_phi_fu_1314_p4 = select_ln301_240_reg_24191.read();
    } else {
        ap_phi_mux_cnt_17_3_V_10_phi_fu_1314_p4 = cnt_17_3_V_10_reg_1311.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_17_3_V_14_phi_fu_1324_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_17_3_V_14_phi_fu_1324_p4 = select_ln301_241_reg_24196.read();
    } else {
        ap_phi_mux_cnt_17_3_V_14_phi_fu_1324_p4 = cnt_17_3_V_14_reg_1321.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_17_3_V_28_phi_fu_2794_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_17_3_V_28_phi_fu_2794_p4 = select_ln321_680_reg_24206.read();
    } else {
        ap_phi_mux_cnt_17_3_V_28_phi_fu_2794_p4 = cnt_17_3_V_28_reg_2791.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_18_2_V_0_phi_fu_1264_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_18_2_V_0_phi_fu_1264_p4 = select_ln301_253_reg_24282.read();
    } else {
        ap_phi_mux_cnt_18_2_V_0_phi_fu_1264_p4 = cnt_18_2_V_0_reg_1261.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_18_3_V_0_phi_fu_1254_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_18_3_V_0_phi_fu_1254_p4 = select_ln301_252_reg_24277.read();
    } else {
        ap_phi_mux_cnt_18_3_V_0_phi_fu_1254_p4 = cnt_18_3_V_0_reg_1251.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_18_3_V_10_phi_fu_1274_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_18_3_V_10_phi_fu_1274_p4 = select_ln301_254_reg_24287.read();
    } else {
        ap_phi_mux_cnt_18_3_V_10_phi_fu_1274_p4 = cnt_18_3_V_10_reg_1271.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_18_3_V_14_phi_fu_1284_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_18_3_V_14_phi_fu_1284_p4 = select_ln301_255_reg_24292.read();
    } else {
        ap_phi_mux_cnt_18_3_V_14_phi_fu_1284_p4 = cnt_18_3_V_14_reg_1281.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_18_3_V_28_phi_fu_2784_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_18_3_V_28_phi_fu_2784_p4 = select_ln321_719_reg_24302.read();
    } else {
        ap_phi_mux_cnt_18_3_V_28_phi_fu_2784_p4 = cnt_18_3_V_28_reg_2781.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_19_2_V_0_phi_fu_1224_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_19_2_V_0_phi_fu_1224_p4 = select_ln301_267_reg_24378.read();
    } else {
        ap_phi_mux_cnt_19_2_V_0_phi_fu_1224_p4 = cnt_19_2_V_0_reg_1221.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_19_3_V_0_phi_fu_1214_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_19_3_V_0_phi_fu_1214_p4 = select_ln301_266_reg_24373.read();
    } else {
        ap_phi_mux_cnt_19_3_V_0_phi_fu_1214_p4 = cnt_19_3_V_0_reg_1211.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_19_3_V_10_phi_fu_1234_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_19_3_V_10_phi_fu_1234_p4 = select_ln301_268_reg_24383.read();
    } else {
        ap_phi_mux_cnt_19_3_V_10_phi_fu_1234_p4 = cnt_19_3_V_10_reg_1231.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_19_3_V_14_phi_fu_1244_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_19_3_V_14_phi_fu_1244_p4 = select_ln301_269_reg_24388.read();
    } else {
        ap_phi_mux_cnt_19_3_V_14_phi_fu_1244_p4 = cnt_19_3_V_14_reg_1241.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_19_3_V_28_phi_fu_2774_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_19_3_V_28_phi_fu_2774_p4 = select_ln321_758_reg_24398.read();
    } else {
        ap_phi_mux_cnt_19_3_V_28_phi_fu_2774_p4 = cnt_19_3_V_28_reg_2771.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_1_2_V_0_phi_fu_1944_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_1_2_V_0_phi_fu_1944_p4 = select_ln301_15_reg_22650.read();
    } else {
        ap_phi_mux_cnt_1_2_V_0_phi_fu_1944_p4 = cnt_1_2_V_0_reg_1941.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_1_3_V_0_phi_fu_1934_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_1_3_V_0_phi_fu_1934_p4 = select_ln301_14_reg_22645.read();
    } else {
        ap_phi_mux_cnt_1_3_V_0_phi_fu_1934_p4 = cnt_1_3_V_0_reg_1931.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_1_3_V_10_phi_fu_1954_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_1_3_V_10_phi_fu_1954_p4 = select_ln301_16_reg_22655.read();
    } else {
        ap_phi_mux_cnt_1_3_V_10_phi_fu_1954_p4 = cnt_1_3_V_10_reg_1951.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_1_3_V_14_phi_fu_1964_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_1_3_V_14_phi_fu_1964_p4 = select_ln301_17_reg_22660.read();
    } else {
        ap_phi_mux_cnt_1_3_V_14_phi_fu_1964_p4 = cnt_1_3_V_14_reg_1961.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_1_3_V_28_phi_fu_2954_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_1_3_V_28_phi_fu_2954_p4 = select_ln321_56_reg_22670.read();
    } else {
        ap_phi_mux_cnt_1_3_V_28_phi_fu_2954_p4 = cnt_1_3_V_28_reg_2951.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_20_2_V_0_phi_fu_1184_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_20_2_V_0_phi_fu_1184_p4 = select_ln301_281_reg_24474.read();
    } else {
        ap_phi_mux_cnt_20_2_V_0_phi_fu_1184_p4 = cnt_20_2_V_0_reg_1181.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_20_3_V_0_phi_fu_1174_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_20_3_V_0_phi_fu_1174_p4 = select_ln301_280_reg_24469.read();
    } else {
        ap_phi_mux_cnt_20_3_V_0_phi_fu_1174_p4 = cnt_20_3_V_0_reg_1171.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_20_3_V_10_phi_fu_1194_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_20_3_V_10_phi_fu_1194_p4 = select_ln301_282_reg_24479.read();
    } else {
        ap_phi_mux_cnt_20_3_V_10_phi_fu_1194_p4 = cnt_20_3_V_10_reg_1191.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_20_3_V_14_phi_fu_1204_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_20_3_V_14_phi_fu_1204_p4 = select_ln301_283_reg_24484.read();
    } else {
        ap_phi_mux_cnt_20_3_V_14_phi_fu_1204_p4 = cnt_20_3_V_14_reg_1201.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_20_3_V_28_phi_fu_2764_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_20_3_V_28_phi_fu_2764_p4 = select_ln321_797_reg_24494.read();
    } else {
        ap_phi_mux_cnt_20_3_V_28_phi_fu_2764_p4 = cnt_20_3_V_28_reg_2761.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_21_2_V_0_phi_fu_1144_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_21_2_V_0_phi_fu_1144_p4 = select_ln301_295_reg_24570.read();
    } else {
        ap_phi_mux_cnt_21_2_V_0_phi_fu_1144_p4 = cnt_21_2_V_0_reg_1141.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_21_3_V_0_phi_fu_1134_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_21_3_V_0_phi_fu_1134_p4 = select_ln301_294_reg_24565.read();
    } else {
        ap_phi_mux_cnt_21_3_V_0_phi_fu_1134_p4 = cnt_21_3_V_0_reg_1131.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_21_3_V_10_phi_fu_1154_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_21_3_V_10_phi_fu_1154_p4 = select_ln301_296_reg_24575.read();
    } else {
        ap_phi_mux_cnt_21_3_V_10_phi_fu_1154_p4 = cnt_21_3_V_10_reg_1151.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_21_3_V_14_phi_fu_1164_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_21_3_V_14_phi_fu_1164_p4 = select_ln301_297_reg_24580.read();
    } else {
        ap_phi_mux_cnt_21_3_V_14_phi_fu_1164_p4 = cnt_21_3_V_14_reg_1161.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_21_3_V_28_phi_fu_2754_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_21_3_V_28_phi_fu_2754_p4 = select_ln321_836_reg_24590.read();
    } else {
        ap_phi_mux_cnt_21_3_V_28_phi_fu_2754_p4 = cnt_21_3_V_28_reg_2751.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_22_2_V_0_phi_fu_1104_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_22_2_V_0_phi_fu_1104_p4 = select_ln301_309_reg_24666.read();
    } else {
        ap_phi_mux_cnt_22_2_V_0_phi_fu_1104_p4 = cnt_22_2_V_0_reg_1101.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_22_3_V_0_phi_fu_1094_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_22_3_V_0_phi_fu_1094_p4 = select_ln301_308_reg_24661.read();
    } else {
        ap_phi_mux_cnt_22_3_V_0_phi_fu_1094_p4 = cnt_22_3_V_0_reg_1091.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_22_3_V_10_phi_fu_1114_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_22_3_V_10_phi_fu_1114_p4 = select_ln301_310_reg_24671.read();
    } else {
        ap_phi_mux_cnt_22_3_V_10_phi_fu_1114_p4 = cnt_22_3_V_10_reg_1111.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_22_3_V_14_phi_fu_1124_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_22_3_V_14_phi_fu_1124_p4 = select_ln301_311_reg_24676.read();
    } else {
        ap_phi_mux_cnt_22_3_V_14_phi_fu_1124_p4 = cnt_22_3_V_14_reg_1121.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_22_3_V_28_phi_fu_2744_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_22_3_V_28_phi_fu_2744_p4 = select_ln321_875_reg_24686.read();
    } else {
        ap_phi_mux_cnt_22_3_V_28_phi_fu_2744_p4 = cnt_22_3_V_28_reg_2741.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_23_2_V_0_phi_fu_1064_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_23_2_V_0_phi_fu_1064_p4 = select_ln301_323_reg_24763.read();
    } else {
        ap_phi_mux_cnt_23_2_V_0_phi_fu_1064_p4 = cnt_23_2_V_0_reg_1061.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_23_3_V_0_phi_fu_1054_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_23_3_V_0_phi_fu_1054_p4 = select_ln301_322_reg_24758.read();
    } else {
        ap_phi_mux_cnt_23_3_V_0_phi_fu_1054_p4 = cnt_23_3_V_0_reg_1051.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_23_3_V_10_phi_fu_1074_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_23_3_V_10_phi_fu_1074_p4 = select_ln301_324_reg_24768.read();
    } else {
        ap_phi_mux_cnt_23_3_V_10_phi_fu_1074_p4 = cnt_23_3_V_10_reg_1071.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_23_3_V_14_phi_fu_1084_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_23_3_V_14_phi_fu_1084_p4 = select_ln301_325_reg_24773.read();
    } else {
        ap_phi_mux_cnt_23_3_V_14_phi_fu_1084_p4 = cnt_23_3_V_14_reg_1081.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_23_3_V_28_phi_fu_2734_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_23_3_V_28_phi_fu_2734_p4 = select_ln321_914_reg_24783.read();
    } else {
        ap_phi_mux_cnt_23_3_V_28_phi_fu_2734_p4 = cnt_23_3_V_28_reg_2731.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_2_2_V_0_phi_fu_1904_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_2_2_V_0_phi_fu_1904_p4 = select_ln301_29_reg_22746.read();
    } else {
        ap_phi_mux_cnt_2_2_V_0_phi_fu_1904_p4 = cnt_2_2_V_0_reg_1901.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_2_3_V_0_phi_fu_1894_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_2_3_V_0_phi_fu_1894_p4 = select_ln301_28_reg_22741.read();
    } else {
        ap_phi_mux_cnt_2_3_V_0_phi_fu_1894_p4 = cnt_2_3_V_0_reg_1891.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_2_3_V_10_phi_fu_1914_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_2_3_V_10_phi_fu_1914_p4 = select_ln301_30_reg_22751.read();
    } else {
        ap_phi_mux_cnt_2_3_V_10_phi_fu_1914_p4 = cnt_2_3_V_10_reg_1911.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_2_3_V_14_phi_fu_1924_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_2_3_V_14_phi_fu_1924_p4 = select_ln301_31_reg_22756.read();
    } else {
        ap_phi_mux_cnt_2_3_V_14_phi_fu_1924_p4 = cnt_2_3_V_14_reg_1921.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_2_3_V_28_phi_fu_2944_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_2_3_V_28_phi_fu_2944_p4 = select_ln321_95_reg_22766.read();
    } else {
        ap_phi_mux_cnt_2_3_V_28_phi_fu_2944_p4 = cnt_2_3_V_28_reg_2941.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_3_2_V_0_phi_fu_1864_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_3_2_V_0_phi_fu_1864_p4 = select_ln301_43_reg_22842.read();
    } else {
        ap_phi_mux_cnt_3_2_V_0_phi_fu_1864_p4 = cnt_3_2_V_0_reg_1861.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_3_3_V_0_phi_fu_1854_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_3_3_V_0_phi_fu_1854_p4 = select_ln301_42_reg_22837.read();
    } else {
        ap_phi_mux_cnt_3_3_V_0_phi_fu_1854_p4 = cnt_3_3_V_0_reg_1851.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_3_3_V_10_phi_fu_1874_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_3_3_V_10_phi_fu_1874_p4 = select_ln301_44_reg_22847.read();
    } else {
        ap_phi_mux_cnt_3_3_V_10_phi_fu_1874_p4 = cnt_3_3_V_10_reg_1871.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_3_3_V_14_phi_fu_1884_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_3_3_V_14_phi_fu_1884_p4 = select_ln301_45_reg_22852.read();
    } else {
        ap_phi_mux_cnt_3_3_V_14_phi_fu_1884_p4 = cnt_3_3_V_14_reg_1881.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_3_3_V_28_phi_fu_2934_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_3_3_V_28_phi_fu_2934_p4 = select_ln321_134_reg_22862.read();
    } else {
        ap_phi_mux_cnt_3_3_V_28_phi_fu_2934_p4 = cnt_3_3_V_28_reg_2931.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_4_2_V_0_phi_fu_1824_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_4_2_V_0_phi_fu_1824_p4 = select_ln301_57_reg_22938.read();
    } else {
        ap_phi_mux_cnt_4_2_V_0_phi_fu_1824_p4 = cnt_4_2_V_0_reg_1821.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_4_3_V_0_phi_fu_1814_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_4_3_V_0_phi_fu_1814_p4 = select_ln301_56_reg_22933.read();
    } else {
        ap_phi_mux_cnt_4_3_V_0_phi_fu_1814_p4 = cnt_4_3_V_0_reg_1811.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_4_3_V_10_phi_fu_1834_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_4_3_V_10_phi_fu_1834_p4 = select_ln301_58_reg_22943.read();
    } else {
        ap_phi_mux_cnt_4_3_V_10_phi_fu_1834_p4 = cnt_4_3_V_10_reg_1831.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_4_3_V_14_phi_fu_1844_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_4_3_V_14_phi_fu_1844_p4 = select_ln301_59_reg_22948.read();
    } else {
        ap_phi_mux_cnt_4_3_V_14_phi_fu_1844_p4 = cnt_4_3_V_14_reg_1841.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_4_3_V_28_phi_fu_2924_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_4_3_V_28_phi_fu_2924_p4 = select_ln321_173_reg_22958.read();
    } else {
        ap_phi_mux_cnt_4_3_V_28_phi_fu_2924_p4 = cnt_4_3_V_28_reg_2921.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_5_2_V_0_phi_fu_1784_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_5_2_V_0_phi_fu_1784_p4 = select_ln301_71_reg_23034.read();
    } else {
        ap_phi_mux_cnt_5_2_V_0_phi_fu_1784_p4 = cnt_5_2_V_0_reg_1781.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_5_3_V_0_phi_fu_1774_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_5_3_V_0_phi_fu_1774_p4 = select_ln301_70_reg_23029.read();
    } else {
        ap_phi_mux_cnt_5_3_V_0_phi_fu_1774_p4 = cnt_5_3_V_0_reg_1771.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_5_3_V_10_phi_fu_1794_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_5_3_V_10_phi_fu_1794_p4 = select_ln301_72_reg_23039.read();
    } else {
        ap_phi_mux_cnt_5_3_V_10_phi_fu_1794_p4 = cnt_5_3_V_10_reg_1791.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_5_3_V_14_phi_fu_1804_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_5_3_V_14_phi_fu_1804_p4 = select_ln301_73_reg_23044.read();
    } else {
        ap_phi_mux_cnt_5_3_V_14_phi_fu_1804_p4 = cnt_5_3_V_14_reg_1801.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_5_3_V_28_phi_fu_2914_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_5_3_V_28_phi_fu_2914_p4 = select_ln321_212_reg_23054.read();
    } else {
        ap_phi_mux_cnt_5_3_V_28_phi_fu_2914_p4 = cnt_5_3_V_28_reg_2911.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_6_2_V_0_phi_fu_1744_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_6_2_V_0_phi_fu_1744_p4 = select_ln301_85_reg_23130.read();
    } else {
        ap_phi_mux_cnt_6_2_V_0_phi_fu_1744_p4 = cnt_6_2_V_0_reg_1741.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_6_3_V_0_phi_fu_1734_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_6_3_V_0_phi_fu_1734_p4 = select_ln301_84_reg_23125.read();
    } else {
        ap_phi_mux_cnt_6_3_V_0_phi_fu_1734_p4 = cnt_6_3_V_0_reg_1731.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_6_3_V_10_phi_fu_1754_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_6_3_V_10_phi_fu_1754_p4 = select_ln301_86_reg_23135.read();
    } else {
        ap_phi_mux_cnt_6_3_V_10_phi_fu_1754_p4 = cnt_6_3_V_10_reg_1751.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_6_3_V_14_phi_fu_1764_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_6_3_V_14_phi_fu_1764_p4 = select_ln301_87_reg_23140.read();
    } else {
        ap_phi_mux_cnt_6_3_V_14_phi_fu_1764_p4 = cnt_6_3_V_14_reg_1761.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_6_3_V_28_phi_fu_2904_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_6_3_V_28_phi_fu_2904_p4 = select_ln321_251_reg_23150.read();
    } else {
        ap_phi_mux_cnt_6_3_V_28_phi_fu_2904_p4 = cnt_6_3_V_28_reg_2901.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_7_2_V_0_phi_fu_1704_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_7_2_V_0_phi_fu_1704_p4 = select_ln301_99_reg_23226.read();
    } else {
        ap_phi_mux_cnt_7_2_V_0_phi_fu_1704_p4 = cnt_7_2_V_0_reg_1701.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_7_3_V_0_phi_fu_1694_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_7_3_V_0_phi_fu_1694_p4 = select_ln301_98_reg_23221.read();
    } else {
        ap_phi_mux_cnt_7_3_V_0_phi_fu_1694_p4 = cnt_7_3_V_0_reg_1691.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_7_3_V_10_phi_fu_1714_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_7_3_V_10_phi_fu_1714_p4 = select_ln301_100_reg_23231.read();
    } else {
        ap_phi_mux_cnt_7_3_V_10_phi_fu_1714_p4 = cnt_7_3_V_10_reg_1711.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_7_3_V_14_phi_fu_1724_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_7_3_V_14_phi_fu_1724_p4 = select_ln301_101_reg_23236.read();
    } else {
        ap_phi_mux_cnt_7_3_V_14_phi_fu_1724_p4 = cnt_7_3_V_14_reg_1721.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_7_3_V_28_phi_fu_2894_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_7_3_V_28_phi_fu_2894_p4 = select_ln321_290_reg_23246.read();
    } else {
        ap_phi_mux_cnt_7_3_V_28_phi_fu_2894_p4 = cnt_7_3_V_28_reg_2891.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_8_2_V_0_phi_fu_1664_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_8_2_V_0_phi_fu_1664_p4 = select_ln301_113_reg_23322.read();
    } else {
        ap_phi_mux_cnt_8_2_V_0_phi_fu_1664_p4 = cnt_8_2_V_0_reg_1661.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_8_3_V_0_phi_fu_1654_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_8_3_V_0_phi_fu_1654_p4 = select_ln301_112_reg_23317.read();
    } else {
        ap_phi_mux_cnt_8_3_V_0_phi_fu_1654_p4 = cnt_8_3_V_0_reg_1651.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_8_3_V_10_phi_fu_1674_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_8_3_V_10_phi_fu_1674_p4 = select_ln301_114_reg_23327.read();
    } else {
        ap_phi_mux_cnt_8_3_V_10_phi_fu_1674_p4 = cnt_8_3_V_10_reg_1671.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_8_3_V_14_phi_fu_1684_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_8_3_V_14_phi_fu_1684_p4 = select_ln301_115_reg_23332.read();
    } else {
        ap_phi_mux_cnt_8_3_V_14_phi_fu_1684_p4 = cnt_8_3_V_14_reg_1681.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_8_3_V_28_phi_fu_2884_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_8_3_V_28_phi_fu_2884_p4 = select_ln321_329_reg_23342.read();
    } else {
        ap_phi_mux_cnt_8_3_V_28_phi_fu_2884_p4 = cnt_8_3_V_28_reg_2881.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_9_2_V_0_phi_fu_1624_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_9_2_V_0_phi_fu_1624_p4 = select_ln301_127_reg_23418.read();
    } else {
        ap_phi_mux_cnt_9_2_V_0_phi_fu_1624_p4 = cnt_9_2_V_0_reg_1621.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_9_3_V_0_phi_fu_1614_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_9_3_V_0_phi_fu_1614_p4 = select_ln301_126_reg_23413.read();
    } else {
        ap_phi_mux_cnt_9_3_V_0_phi_fu_1614_p4 = cnt_9_3_V_0_reg_1611.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_9_3_V_10_phi_fu_1634_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_9_3_V_10_phi_fu_1634_p4 = select_ln301_128_reg_23423.read();
    } else {
        ap_phi_mux_cnt_9_3_V_10_phi_fu_1634_p4 = cnt_9_3_V_10_reg_1631.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_9_3_V_14_phi_fu_1644_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_9_3_V_14_phi_fu_1644_p4 = select_ln301_129_reg_23428.read();
    } else {
        ap_phi_mux_cnt_9_3_V_14_phi_fu_1644_p4 = cnt_9_3_V_14_reg_1641.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_9_3_V_28_phi_fu_2874_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_9_3_V_28_phi_fu_2874_p4 = select_ln321_368_reg_23438.read();
    } else {
        ap_phi_mux_cnt_9_3_V_28_phi_fu_2874_p4 = cnt_9_3_V_28_reg_2871.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_18_phi_fu_2244_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_18_phi_fu_2244_p4 = select_ln321_11_reg_22569.read();
    } else {
        ap_phi_mux_cnt_V_load_18_phi_fu_2244_p4 = cnt_V_load_18_reg_2241.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_19_c_phi_fu_2204_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_19_c_phi_fu_2204_p4 = select_ln321_167_reg_22953.read();
    } else {
        ap_phi_mux_cnt_V_load_19_c_phi_fu_2204_p4 = cnt_V_load_19_c_reg_2201.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_1_18_phi_fu_2234_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_1_18_phi_fu_2234_p4 = select_ln321_50_reg_22665.read();
    } else {
        ap_phi_mux_cnt_V_load_1_18_phi_fu_2234_p4 = cnt_V_load_1_18_reg_2231.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_1_19_c_phi_fu_2194_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_1_19_c_phi_fu_2194_p4 = select_ln321_206_reg_23049.read();
    } else {
        ap_phi_mux_cnt_V_load_1_19_c_phi_fu_2194_p4 = cnt_V_load_1_19_c_reg_2191.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_1_20_phi_fu_2154_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_1_20_phi_fu_2154_p4 = select_ln321_362_reg_23433.read();
    } else {
        ap_phi_mux_cnt_V_load_1_20_phi_fu_2154_p4 = cnt_V_load_1_20_reg_2151.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_1_21_c_phi_fu_2114_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_1_21_c_phi_fu_2114_p4 = select_ln321_518_reg_23817.read();
    } else {
        ap_phi_mux_cnt_V_load_1_21_c_phi_fu_2114_p4 = cnt_V_load_1_21_c_reg_2111.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_1_22_phi_fu_2074_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_1_22_phi_fu_2074_p4 = select_ln321_674_reg_24201.read();
    } else {
        ap_phi_mux_cnt_V_load_1_22_phi_fu_2074_p4 = cnt_V_load_1_22_reg_2071.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_1_23_c_phi_fu_2034_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_1_23_c_phi_fu_2034_p4 = select_ln321_830_reg_24585.read();
    } else {
        ap_phi_mux_cnt_V_load_1_23_c_phi_fu_2034_p4 = cnt_V_load_1_23_c_reg_2031.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_20_phi_fu_2164_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_20_phi_fu_2164_p4 = select_ln321_323_reg_23337.read();
    } else {
        ap_phi_mux_cnt_V_load_20_phi_fu_2164_p4 = cnt_V_load_20_reg_2161.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_21_c_phi_fu_2124_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_21_c_phi_fu_2124_p4 = select_ln321_479_reg_23721.read();
    } else {
        ap_phi_mux_cnt_V_load_21_c_phi_fu_2124_p4 = cnt_V_load_21_c_reg_2121.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_22_phi_fu_2084_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_22_phi_fu_2084_p4 = select_ln321_635_reg_24105.read();
    } else {
        ap_phi_mux_cnt_V_load_22_phi_fu_2084_p4 = cnt_V_load_22_reg_2081.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_23_c_phi_fu_2044_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_23_c_phi_fu_2044_p4 = select_ln321_791_reg_24489.read();
    } else {
        ap_phi_mux_cnt_V_load_23_c_phi_fu_2044_p4 = cnt_V_load_23_c_reg_2041.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_2_18_phi_fu_2224_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_2_18_phi_fu_2224_p4 = select_ln321_89_reg_22761.read();
    } else {
        ap_phi_mux_cnt_V_load_2_18_phi_fu_2224_p4 = cnt_V_load_2_18_reg_2221.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_2_19_c_phi_fu_2184_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_2_19_c_phi_fu_2184_p4 = select_ln321_245_reg_23145.read();
    } else {
        ap_phi_mux_cnt_V_load_2_19_c_phi_fu_2184_p4 = cnt_V_load_2_19_c_reg_2181.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_2_20_phi_fu_2144_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_2_20_phi_fu_2144_p4 = select_ln321_401_reg_23529.read();
    } else {
        ap_phi_mux_cnt_V_load_2_20_phi_fu_2144_p4 = cnt_V_load_2_20_reg_2141.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_2_21_c_phi_fu_2104_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_2_21_c_phi_fu_2104_p4 = select_ln321_557_reg_23913.read();
    } else {
        ap_phi_mux_cnt_V_load_2_21_c_phi_fu_2104_p4 = cnt_V_load_2_21_c_reg_2101.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_2_22_phi_fu_2064_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_2_22_phi_fu_2064_p4 = select_ln321_713_reg_24297.read();
    } else {
        ap_phi_mux_cnt_V_load_2_22_phi_fu_2064_p4 = cnt_V_load_2_22_reg_2061.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_2_23_c_phi_fu_2024_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_2_23_c_phi_fu_2024_p4 = select_ln321_869_reg_24681.read();
    } else {
        ap_phi_mux_cnt_V_load_2_23_c_phi_fu_2024_p4 = cnt_V_load_2_23_c_reg_2021.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_3_18_phi_fu_2214_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_3_18_phi_fu_2214_p4 = select_ln321_128_reg_22857.read();
    } else {
        ap_phi_mux_cnt_V_load_3_18_phi_fu_2214_p4 = cnt_V_load_3_18_reg_2211.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_3_19_c_phi_fu_2174_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_3_19_c_phi_fu_2174_p4 = select_ln321_284_reg_23241.read();
    } else {
        ap_phi_mux_cnt_V_load_3_19_c_phi_fu_2174_p4 = cnt_V_load_3_19_c_reg_2171.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_3_20_phi_fu_2134_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_3_20_phi_fu_2134_p4 = select_ln321_440_reg_23625.read();
    } else {
        ap_phi_mux_cnt_V_load_3_20_phi_fu_2134_p4 = cnt_V_load_3_20_reg_2131.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_3_21_c_phi_fu_2094_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_3_21_c_phi_fu_2094_p4 = select_ln321_596_reg_24009.read();
    } else {
        ap_phi_mux_cnt_V_load_3_21_c_phi_fu_2094_p4 = cnt_V_load_3_21_c_reg_2091.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_3_22_phi_fu_2054_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_3_22_phi_fu_2054_p4 = select_ln321_752_reg_24393.read();
    } else {
        ap_phi_mux_cnt_V_load_3_22_phi_fu_2054_p4 = cnt_V_load_3_22_reg_2051.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_cnt_V_load_3_23_c_phi_fu_2014_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(icmp_ln19_reg_22066_pp0_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_cnt_V_load_3_23_c_phi_fu_2014_p4 = select_ln321_908_reg_24778.read();
    } else {
        ap_phi_mux_cnt_V_load_3_23_c_phi_fu_2014_p4 = cnt_V_load_3_23_c_reg_2011.read();
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10441_phi_fu_4260_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10441_phi_fu_4260_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10441_phi_fu_4260_p4 = or_ln42_2_20_fu_21382_p5.read();
        } else {
            ap_phi_mux_storemerge10441_phi_fu_4260_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10441_phi_fu_4260_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10443_phi_fu_4249_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10443_phi_fu_4249_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10443_phi_fu_4249_p4 = or_ln42_2_18_fu_21287_p5.read();
        } else {
            ap_phi_mux_storemerge10443_phi_fu_4249_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10443_phi_fu_4249_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10445_phi_fu_4238_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10445_phi_fu_4238_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10445_phi_fu_4238_p4 = or_ln42_2_16_fu_21192_p5.read();
        } else {
            ap_phi_mux_storemerge10445_phi_fu_4238_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10445_phi_fu_4238_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10447_phi_fu_4227_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10447_phi_fu_4227_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10447_phi_fu_4227_p4 = or_ln42_2_14_fu_21097_p5.read();
        } else {
            ap_phi_mux_storemerge10447_phi_fu_4227_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10447_phi_fu_4227_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10449_phi_fu_4216_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10449_phi_fu_4216_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10449_phi_fu_4216_p4 = or_ln42_2_12_fu_21002_p5.read();
        } else {
            ap_phi_mux_storemerge10449_phi_fu_4216_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10449_phi_fu_4216_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10451_phi_fu_4205_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10451_phi_fu_4205_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10451_phi_fu_4205_p4 = or_ln42_2_10_fu_20907_p5.read();
        } else {
            ap_phi_mux_storemerge10451_phi_fu_4205_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10451_phi_fu_4205_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10453_phi_fu_4194_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10453_phi_fu_4194_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10453_phi_fu_4194_p4 = or_ln42_2_9_fu_20812_p5.read();
        } else {
            ap_phi_mux_storemerge10453_phi_fu_4194_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10453_phi_fu_4194_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10455_phi_fu_4183_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10455_phi_fu_4183_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10455_phi_fu_4183_p4 = or_ln42_2_7_fu_20717_p5.read();
        } else {
            ap_phi_mux_storemerge10455_phi_fu_4183_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10455_phi_fu_4183_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10457_phi_fu_4172_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10457_phi_fu_4172_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10457_phi_fu_4172_p4 = or_ln42_2_5_fu_20622_p5.read();
        } else {
            ap_phi_mux_storemerge10457_phi_fu_4172_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10457_phi_fu_4172_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge10459_phi_fu_4161_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge10459_phi_fu_4161_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge10459_phi_fu_4161_p4 = or_ln42_2_3_fu_20527_p5.read();
        } else {
            ap_phi_mux_storemerge10459_phi_fu_4161_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge10459_phi_fu_4161_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_phi_mux_storemerge_phi_fu_4271_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_0)) {
            ap_phi_mux_storemerge_phi_fu_4271_p4 = ap_const_lv32_1;
        } else if (esl_seteq<1,1,1>(p_090_0217_0_reg_4123.read(), ap_const_lv1_1)) {
            ap_phi_mux_storemerge_phi_fu_4271_p4 = or_ln42_2_22_fu_21477_p5.read();
        } else {
            ap_phi_mux_storemerge_phi_fu_4271_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        ap_phi_mux_storemerge_phi_fu_4271_p4 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void estimate_FR_2::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void estimate_FR_2::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void estimate_FR_2::thread_cnt_0_0_V_fu_4279_p1() {
    cnt_0_0_V_fu_4279_p1 = counts_0_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_0_1_V_fu_4483_p1() {
    cnt_0_1_V_fu_4483_p1 = counts_6_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_0_2_V_fu_4687_p1() {
    cnt_0_2_V_fu_4687_p1 = counts_12_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_0_3_V_11_fu_5273_p3() {
    cnt_0_3_V_11_fu_5273_p3 = (!and_ln700_1_fu_5200_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_1_fu_5200_p2.read()[0].to_bool())? cnt_0_3_V_30_fu_5170_p2.read(): ap_phi_mux_cnt_0_3_V_10_phi_fu_1994_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_12_fu_5281_p3() {
    cnt_0_3_V_12_fu_5281_p3 = (!and_ln700_2_fu_5219_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_2_fu_5219_p2.read()[0].to_bool())? ap_phi_mux_cnt_0_3_V_10_phi_fu_1994_p4.read(): cnt_0_3_V_11_fu_5273_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_13_fu_5289_p3() {
    cnt_0_3_V_13_fu_5289_p3 = (!trunc_ln301_fu_5145_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_fu_5145_p1.read()[0].to_bool())? cnt_0_3_V_12_fu_5281_p3.read(): ap_phi_mux_cnt_0_3_V_10_phi_fu_1994_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_15_fu_5297_p3() {
    cnt_0_3_V_15_fu_5297_p3 = (!and_ln700_2_fu_5219_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_2_fu_5219_p2.read()[0].to_bool())? cnt_0_3_V_30_fu_5170_p2.read(): ap_phi_mux_cnt_0_3_V_14_phi_fu_2004_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_16_fu_5305_p3() {
    cnt_0_3_V_16_fu_5305_p3 = (!trunc_ln301_fu_5145_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_fu_5145_p1.read()[0].to_bool())? cnt_0_3_V_15_fu_5297_p3.read(): ap_phi_mux_cnt_0_3_V_14_phi_fu_2004_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_17_fu_5313_p3() {
    cnt_0_3_V_17_fu_5313_p3 = (!trunc_ln301_fu_5145_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_fu_5145_p1.read()[0].to_bool())? cnt_0_3_V_30_fu_5170_p2.read(): ap_phi_mux_cnt_V_load_18_phi_fu_2244_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_18_fu_5321_p3() {
    cnt_0_3_V_18_fu_5321_p3 = (!and_ln700_fu_5181_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_fu_5181_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_18_phi_fu_2244_p4.read(): cnt_0_3_V_17_fu_5313_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_19_fu_5329_p3() {
    cnt_0_3_V_19_fu_5329_p3 = (!and_ln700_1_fu_5200_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_1_fu_5200_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_18_phi_fu_2244_p4.read(): cnt_0_3_V_18_fu_5321_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_20_fu_5337_p3() {
    cnt_0_3_V_20_fu_5337_p3 = (!and_ln700_2_fu_5219_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_2_fu_5219_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_18_phi_fu_2244_p4.read(): cnt_0_3_V_19_fu_5329_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_22_fu_13992_p3() {
    cnt_0_3_V_22_fu_13992_p3 = (!and_ln700_reg_22321.read()[0].is_01())? sc_lv<6>(): ((and_ln700_reg_22321.read()[0].to_bool())? cnt_0_3_V_30_reg_22263.read(): cnt_0_3_V_21_reg_2481.read());
}

void estimate_FR_2::thread_cnt_0_3_V_23_fu_13998_p3() {
    cnt_0_3_V_23_fu_13998_p3 = (!and_ln700_1_reg_22402.read()[0].is_01())? sc_lv<6>(): ((and_ln700_1_reg_22402.read()[0].to_bool())? cnt_0_3_V_21_reg_2481.read(): cnt_0_3_V_22_fu_13992_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_24_fu_14005_p3() {
    cnt_0_3_V_24_fu_14005_p3 = (!and_ln700_2_reg_22508.read()[0].is_01())? sc_lv<6>(): ((and_ln700_2_reg_22508.read()[0].to_bool())? cnt_0_3_V_21_reg_2481.read(): cnt_0_3_V_23_fu_13998_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_26_fu_14012_p3() {
    cnt_0_3_V_26_fu_14012_p3 = (!and_ln700_1_reg_22402.read()[0].is_01())? sc_lv<6>(): ((and_ln700_1_reg_22402.read()[0].to_bool())? cnt_0_3_V_30_reg_22263.read(): cnt_0_3_V_25_reg_2721.read());
}

void estimate_FR_2::thread_cnt_0_3_V_27_fu_14018_p3() {
    cnt_0_3_V_27_fu_14018_p3 = (!and_ln700_2_reg_22508.read()[0].is_01())? sc_lv<6>(): ((and_ln700_2_reg_22508.read()[0].to_bool())? cnt_0_3_V_25_reg_2721.read(): cnt_0_3_V_26_fu_14012_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_29_fu_5345_p3() {
    cnt_0_3_V_29_fu_5345_p3 = (!and_ln700_2_fu_5219_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_2_fu_5219_p2.read()[0].to_bool())? cnt_0_3_V_30_fu_5170_p2.read(): ap_phi_mux_cnt_0_3_V_28_phi_fu_2964_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_2_fu_5187_p3() {
    cnt_0_3_V_2_fu_5187_p3 = (!and_ln700_fu_5181_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_fu_5181_p2.read()[0].to_bool())? ap_phi_mux_cnt_0_3_V_0_phi_fu_1974_p4.read(): cnt_0_3_V_30_fu_5170_p2.read());
}

void estimate_FR_2::thread_cnt_0_3_V_30_fu_5170_p2() {
    cnt_0_3_V_30_fu_5170_p2 = (!ap_const_lv6_1.is_01() || !tmp_4_fu_5157_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_4_fu_5157_p6.read()));
}

void estimate_FR_2::thread_cnt_0_3_V_3_fu_5206_p3() {
    cnt_0_3_V_3_fu_5206_p3 = (!and_ln700_1_fu_5200_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_1_fu_5200_p2.read()[0].to_bool())? ap_phi_mux_cnt_0_3_V_0_phi_fu_1974_p4.read(): cnt_0_3_V_2_fu_5187_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_4_fu_5225_p3() {
    cnt_0_3_V_4_fu_5225_p3 = (!and_ln700_2_fu_5219_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_2_fu_5219_p2.read()[0].to_bool())? ap_phi_mux_cnt_0_3_V_0_phi_fu_1974_p4.read(): cnt_0_3_V_3_fu_5206_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_5_fu_5233_p3() {
    cnt_0_3_V_5_fu_5233_p3 = (!trunc_ln301_fu_5145_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_fu_5145_p1.read()[0].to_bool())? cnt_0_3_V_4_fu_5225_p3.read(): ap_phi_mux_cnt_0_3_V_0_phi_fu_1974_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_6_fu_5241_p3() {
    cnt_0_3_V_6_fu_5241_p3 = (!and_ln700_fu_5181_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_fu_5181_p2.read()[0].to_bool())? cnt_0_3_V_30_fu_5170_p2.read(): ap_phi_mux_cnt_0_2_V_0_phi_fu_1984_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_7_fu_5249_p3() {
    cnt_0_3_V_7_fu_5249_p3 = (!and_ln700_1_fu_5200_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_1_fu_5200_p2.read()[0].to_bool())? ap_phi_mux_cnt_0_2_V_0_phi_fu_1984_p4.read(): cnt_0_3_V_6_fu_5241_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_8_fu_5257_p3() {
    cnt_0_3_V_8_fu_5257_p3 = (!and_ln700_2_fu_5219_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_2_fu_5219_p2.read()[0].to_bool())? ap_phi_mux_cnt_0_2_V_0_phi_fu_1984_p4.read(): cnt_0_3_V_7_fu_5249_p3.read());
}

void estimate_FR_2::thread_cnt_0_3_V_9_fu_5265_p3() {
    cnt_0_3_V_9_fu_5265_p3 = (!trunc_ln301_fu_5145_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_fu_5145_p1.read()[0].to_bool())? cnt_0_3_V_8_fu_5257_p3.read(): ap_phi_mux_cnt_0_2_V_0_phi_fu_1984_p4.read());
}

void estimate_FR_2::thread_cnt_0_3_V_fu_4891_p1() {
    cnt_0_3_V_fu_4891_p1 = counts_18_i.read().range(6-1, 0);
}

void estimate_FR_2::thread_cnt_10_3_V_11_fu_8953_p3() {
    cnt_10_3_V_11_fu_8953_p3 = (!and_ln700_31_fu_8885_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_31_fu_8885_p2.read()[0].to_bool())? cnt_10_3_V_30_fu_8865_p2.read(): ap_phi_mux_cnt_10_3_V_10_phi_fu_1594_p4.read());
}

void estimate_FR_2::thread_cnt_10_3_V_12_fu_8961_p3() {
    cnt_10_3_V_12_fu_8961_p3 = (!and_ln700_32_fu_8899_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_32_fu_8899_p2.read()[0].to_bool())? ap_phi_mux_cnt_10_3_V_10_phi_fu_1594_p4.read(): cnt_10_3_V_11_fu_8953_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_13_fu_8969_p3() {
    cnt_10_3_V_13_fu_8969_p3 = (!trunc_ln301_10_fu_8840_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_10_fu_8840_p1.read()[0].to_bool())? cnt_10_3_V_12_fu_8961_p3.read(): ap_phi_mux_cnt_10_3_V_10_phi_fu_1594_p4.read());
}

void estimate_FR_2::thread_cnt_10_3_V_15_fu_8977_p3() {
    cnt_10_3_V_15_fu_8977_p3 = (!and_ln700_32_fu_8899_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_32_fu_8899_p2.read()[0].to_bool())? cnt_10_3_V_30_fu_8865_p2.read(): ap_phi_mux_cnt_10_3_V_14_phi_fu_1604_p4.read());
}

void estimate_FR_2::thread_cnt_10_3_V_16_fu_8985_p3() {
    cnt_10_3_V_16_fu_8985_p3 = (!trunc_ln301_10_fu_8840_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_10_fu_8840_p1.read()[0].to_bool())? cnt_10_3_V_15_fu_8977_p3.read(): ap_phi_mux_cnt_10_3_V_14_phi_fu_1604_p4.read());
}

void estimate_FR_2::thread_cnt_10_3_V_17_fu_8993_p3() {
    cnt_10_3_V_17_fu_8993_p3 = (!trunc_ln301_10_fu_8840_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_10_fu_8840_p1.read()[0].to_bool())? cnt_10_3_V_30_fu_8865_p2.read(): ap_phi_mux_cnt_V_load_2_20_phi_fu_2144_p4.read());
}

void estimate_FR_2::thread_cnt_10_3_V_18_fu_9001_p3() {
    cnt_10_3_V_18_fu_9001_p3 = (!and_ln700_30_fu_8871_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_30_fu_8871_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_20_phi_fu_2144_p4.read(): cnt_10_3_V_17_fu_8993_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_19_fu_9009_p3() {
    cnt_10_3_V_19_fu_9009_p3 = (!and_ln700_31_fu_8885_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_31_fu_8885_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_20_phi_fu_2144_p4.read(): cnt_10_3_V_18_fu_9001_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_20_fu_9017_p3() {
    cnt_10_3_V_20_fu_9017_p3 = (!and_ln700_32_fu_8899_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_32_fu_8899_p2.read()[0].to_bool())? ap_phi_mux_cnt_V_load_2_20_phi_fu_2144_p4.read(): cnt_10_3_V_19_fu_9009_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_22_fu_16642_p3() {
    cnt_10_3_V_22_fu_16642_p3 = (!and_ln700_30_reg_23457.read()[0].is_01())? sc_lv<6>(): ((and_ln700_30_reg_23457.read()[0].to_bool())? cnt_10_3_V_30_reg_23451.read(): cnt_10_3_V_21_reg_2381.read());
}

void estimate_FR_2::thread_cnt_10_3_V_23_fu_16648_p3() {
    cnt_10_3_V_23_fu_16648_p3 = (!and_ln700_31_reg_23462.read()[0].is_01())? sc_lv<6>(): ((and_ln700_31_reg_23462.read()[0].to_bool())? cnt_10_3_V_21_reg_2381.read(): cnt_10_3_V_22_fu_16642_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_24_fu_16655_p3() {
    cnt_10_3_V_24_fu_16655_p3 = (!and_ln700_32_reg_23468.read()[0].is_01())? sc_lv<6>(): ((and_ln700_32_reg_23468.read()[0].to_bool())? cnt_10_3_V_21_reg_2381.read(): cnt_10_3_V_23_fu_16648_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_26_fu_16662_p3() {
    cnt_10_3_V_26_fu_16662_p3 = (!and_ln700_31_reg_23462.read()[0].is_01())? sc_lv<6>(): ((and_ln700_31_reg_23462.read()[0].to_bool())? cnt_10_3_V_30_reg_23451.read(): cnt_10_3_V_25_reg_2621.read());
}

void estimate_FR_2::thread_cnt_10_3_V_27_fu_16668_p3() {
    cnt_10_3_V_27_fu_16668_p3 = (!and_ln700_32_reg_23468.read()[0].is_01())? sc_lv<6>(): ((and_ln700_32_reg_23468.read()[0].to_bool())? cnt_10_3_V_25_reg_2621.read(): cnt_10_3_V_26_fu_16662_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_29_fu_9025_p3() {
    cnt_10_3_V_29_fu_9025_p3 = (!and_ln700_32_fu_8899_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_32_fu_8899_p2.read()[0].to_bool())? cnt_10_3_V_30_fu_8865_p2.read(): ap_phi_mux_cnt_10_3_V_28_phi_fu_2864_p4.read());
}

void estimate_FR_2::thread_cnt_10_3_V_2_fu_8877_p3() {
    cnt_10_3_V_2_fu_8877_p3 = (!and_ln700_30_fu_8871_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_30_fu_8871_p2.read()[0].to_bool())? ap_phi_mux_cnt_10_3_V_0_phi_fu_1574_p4.read(): cnt_10_3_V_30_fu_8865_p2.read());
}

void estimate_FR_2::thread_cnt_10_3_V_30_fu_8865_p2() {
    cnt_10_3_V_30_fu_8865_p2 = (!ap_const_lv6_1.is_01() || !tmp_57_fu_8852_p6.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(tmp_57_fu_8852_p6.read()));
}

void estimate_FR_2::thread_cnt_10_3_V_3_fu_8891_p3() {
    cnt_10_3_V_3_fu_8891_p3 = (!and_ln700_31_fu_8885_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_31_fu_8885_p2.read()[0].to_bool())? ap_phi_mux_cnt_10_3_V_0_phi_fu_1574_p4.read(): cnt_10_3_V_2_fu_8877_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_4_fu_8905_p3() {
    cnt_10_3_V_4_fu_8905_p3 = (!and_ln700_32_fu_8899_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_32_fu_8899_p2.read()[0].to_bool())? ap_phi_mux_cnt_10_3_V_0_phi_fu_1574_p4.read(): cnt_10_3_V_3_fu_8891_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_5_fu_8913_p3() {
    cnt_10_3_V_5_fu_8913_p3 = (!trunc_ln301_10_fu_8840_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_10_fu_8840_p1.read()[0].to_bool())? cnt_10_3_V_4_fu_8905_p3.read(): ap_phi_mux_cnt_10_3_V_0_phi_fu_1574_p4.read());
}

void estimate_FR_2::thread_cnt_10_3_V_6_fu_8921_p3() {
    cnt_10_3_V_6_fu_8921_p3 = (!and_ln700_30_fu_8871_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_30_fu_8871_p2.read()[0].to_bool())? cnt_10_3_V_30_fu_8865_p2.read(): ap_phi_mux_cnt_10_2_V_0_phi_fu_1584_p4.read());
}

void estimate_FR_2::thread_cnt_10_3_V_7_fu_8929_p3() {
    cnt_10_3_V_7_fu_8929_p3 = (!and_ln700_31_fu_8885_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_31_fu_8885_p2.read()[0].to_bool())? ap_phi_mux_cnt_10_2_V_0_phi_fu_1584_p4.read(): cnt_10_3_V_6_fu_8921_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_8_fu_8937_p3() {
    cnt_10_3_V_8_fu_8937_p3 = (!and_ln700_32_fu_8899_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_32_fu_8899_p2.read()[0].to_bool())? ap_phi_mux_cnt_10_2_V_0_phi_fu_1584_p4.read(): cnt_10_3_V_7_fu_8929_p3.read());
}

void estimate_FR_2::thread_cnt_10_3_V_9_fu_8945_p3() {
    cnt_10_3_V_9_fu_8945_p3 = (!trunc_ln301_10_fu_8840_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_10_fu_8840_p1.read()[0].to_bool())? cnt_10_3_V_8_fu_8937_p3.read(): ap_phi_mux_cnt_10_2_V_0_phi_fu_1584_p4.read());
}

void estimate_FR_2::thread_cnt_11_3_V_11_fu_9321_p3() {
    cnt_11_3_V_11_fu_9321_p3 = (!and_ln700_34_fu_9253_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_34_fu_9253_p2.read()[0].to_bool())? cnt_11_3_V_30_fu_9233_p2.read(): ap_phi_mux_cnt_11_3_V_10_phi_fu_1554_p4.read());
}

void estimate_FR_2::thread_cnt_11_3_V_12_fu_9329_p3() {
    cnt_11_3_V_12_fu_9329_p3 = (!and_ln700_35_fu_9267_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_35_fu_9267_p2.read()[0].to_bool())? ap_phi_mux_cnt_11_3_V_10_phi_fu_1554_p4.read(): cnt_11_3_V_11_fu_9321_p3.read());
}

void estimate_FR_2::thread_cnt_11_3_V_13_fu_9337_p3() {
    cnt_11_3_V_13_fu_9337_p3 = (!trunc_ln301_11_fu_9208_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_11_fu_9208_p1.read()[0].to_bool())? cnt_11_3_V_12_fu_9329_p3.read(): ap_phi_mux_cnt_11_3_V_10_phi_fu_1554_p4.read());
}

void estimate_FR_2::thread_cnt_11_3_V_15_fu_9345_p3() {
    cnt_11_3_V_15_fu_9345_p3 = (!and_ln700_35_fu_9267_p2.read()[0].is_01())? sc_lv<6>(): ((and_ln700_35_fu_9267_p2.read()[0].to_bool())? cnt_11_3_V_30_fu_9233_p2.read(): ap_phi_mux_cnt_11_3_V_14_phi_fu_1564_p4.read());
}

void estimate_FR_2::thread_cnt_11_3_V_16_fu_9353_p3() {
    cnt_11_3_V_16_fu_9353_p3 = (!trunc_ln301_11_fu_9208_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_11_fu_9208_p1.read()[0].to_bool())? cnt_11_3_V_15_fu_9345_p3.read(): ap_phi_mux_cnt_11_3_V_14_phi_fu_1564_p4.read());
}

void estimate_FR_2::thread_cnt_11_3_V_17_fu_9361_p3() {
    cnt_11_3_V_17_fu_9361_p3 = (!trunc_ln301_11_fu_9208_p1.read()[0].is_01())? sc_lv<6>(): ((trunc_ln301_11_fu_9208_p1.read()[0].to_bool())? cnt_11_3_V_30_fu_9233_p2.read(): ap_phi_mux_cnt_V_load_3_20_phi_fu_2134_p4.read());
}

}

