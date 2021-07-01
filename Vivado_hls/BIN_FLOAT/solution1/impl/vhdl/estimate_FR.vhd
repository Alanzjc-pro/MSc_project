-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity estimate_FR is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    spksTime_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    spksTime_ce0 : OUT STD_LOGIC;
    spksTime_q0 : IN STD_LOGIC_VECTOR (63 downto 0);
    FR_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    FR_ce0 : OUT STD_LOGIC;
    FR_we0 : OUT STD_LOGIC;
    FR_d0 : OUT STD_LOGIC_VECTOR (63 downto 0) );
end;


architecture behav of estimate_FR is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "estimate_FR,hls_ip_2019_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.714000,HLS_SYN_LAT=55201,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=22,HLS_SYN_FF=5498,HLS_SYN_LUT=7586,HLS_VERSION=2019_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000001000000000000";
    constant ap_ST_fsm_state14 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000010000000000000";
    constant ap_ST_fsm_state15 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000100000000000000";
    constant ap_ST_fsm_state16 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000001000000000000000";
    constant ap_ST_fsm_state17 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000010000000000000000";
    constant ap_ST_fsm_state18 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000100000000000000000";
    constant ap_ST_fsm_state19 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000001000000000000000000";
    constant ap_ST_fsm_state20 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000010000000000000000000";
    constant ap_ST_fsm_state21 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000100000000000000000000";
    constant ap_ST_fsm_state22 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000001000000000000000000000";
    constant ap_ST_fsm_state23 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000010000000000000000000000";
    constant ap_ST_fsm_state24 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000100000000000000000000000";
    constant ap_ST_fsm_state25 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000001000000000000000000000000";
    constant ap_ST_fsm_state26 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000010000000000000000000000000";
    constant ap_ST_fsm_state27 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000100000000000000000000000000";
    constant ap_ST_fsm_state28 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000001000000000000000000000000000";
    constant ap_ST_fsm_state29 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000010000000000000000000000000000";
    constant ap_ST_fsm_state30 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000100000000000000000000000000000";
    constant ap_ST_fsm_state31 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000001000000000000000000000000000000";
    constant ap_ST_fsm_state32 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000010000000000000000000000000000000";
    constant ap_ST_fsm_state33 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000100000000000000000000000000000000";
    constant ap_ST_fsm_state34 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000001000000000000000000000000000000000";
    constant ap_ST_fsm_state35 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000010000000000000000000000000000000000";
    constant ap_ST_fsm_state36 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000100000000000000000000000000000000000";
    constant ap_ST_fsm_state37 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000001000000000000000000000000000000000000";
    constant ap_ST_fsm_state38 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000010000000000000000000000000000000000000";
    constant ap_ST_fsm_state39 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000100000000000000000000000000000000000000";
    constant ap_ST_fsm_state40 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000001000000000000000000000000000000000000000";
    constant ap_ST_fsm_state41 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000010000000000000000000000000000000000000000";
    constant ap_ST_fsm_state42 : STD_LOGIC_VECTOR (53 downto 0) := "000000000000100000000000000000000000000000000000000000";
    constant ap_ST_fsm_state43 : STD_LOGIC_VECTOR (53 downto 0) := "000000000001000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state44 : STD_LOGIC_VECTOR (53 downto 0) := "000000000010000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state45 : STD_LOGIC_VECTOR (53 downto 0) := "000000000100000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state46 : STD_LOGIC_VECTOR (53 downto 0) := "000000001000000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state47 : STD_LOGIC_VECTOR (53 downto 0) := "000000010000000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state48 : STD_LOGIC_VECTOR (53 downto 0) := "000000100000000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state49 : STD_LOGIC_VECTOR (53 downto 0) := "000001000000000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state50 : STD_LOGIC_VECTOR (53 downto 0) := "000010000000000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state51 : STD_LOGIC_VECTOR (53 downto 0) := "000100000000000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state52 : STD_LOGIC_VECTOR (53 downto 0) := "001000000000000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state53 : STD_LOGIC_VECTOR (53 downto 0) := "010000000000000000000000000000000000000000000000000000";
    constant ap_ST_fsm_state54 : STD_LOGIC_VECTOR (53 downto 0) := "100000000000000000000000000000000000000000000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_15 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010101";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_34 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110100";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_35 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000110101";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv64_3FB999999999999A : STD_LOGIC_VECTOR (63 downto 0) := "0011111110111001100110011001100110011001100110011001100110011010";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_16 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010110";
    constant ap_const_lv8_C8 : STD_LOGIC_VECTOR (7 downto 0) := "11001000";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv52_0 : STD_LOGIC_VECTOR (51 downto 0) := "0000000000000000000000000000000000000000000000000000";
    constant ap_const_lv7_4B : STD_LOGIC_VECTOR (6 downto 0) := "1001011";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv32_3E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111110";
    constant ap_const_lv11_7FF : STD_LOGIC_VECTOR (10 downto 0) := "11111111111";
    constant ap_const_lv5_3 : STD_LOGIC_VECTOR (4 downto 0) := "00011";
    constant ap_const_lv5_5 : STD_LOGIC_VECTOR (4 downto 0) := "00101";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (53 downto 0) := "000000000000000000000000000000000000000000000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal grp_fu_132_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal reg_139 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal ap_CS_fsm_state22 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state22 : signal is "none";
    signal zext_ln8_fu_145_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal i_fu_156_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_reg_339 : STD_LOGIC_VECTOR (7 downto 0);
    signal icmp_ln8_fu_150_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_135_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_reg_349 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_fu_107_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_1_reg_354 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal grp_fu_112_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_3_reg_360 : STD_LOGIC_VECTOR (63 downto 0);
    signal bitcast_ln10_1_fu_167_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal bitcast_ln10_1_reg_366 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state14 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state14 : signal is "none";
    signal icmp_ln10_3_fu_174_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln10_3_reg_371 : STD_LOGIC_VECTOR (0 downto 0);
    signal bitcast_ln10_2_fu_180_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal bitcast_ln10_2_reg_376 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln10_4_fu_187_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln10_4_reg_381 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_fu_199_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal j_reg_389 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state15 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state15 : signal is "none";
    signal icmp_ln9_fu_193_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln10_2_fu_219_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln10_2_reg_399 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln10_5_fu_234_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln10_5_reg_404 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state16 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state16 : signal is "none";
    signal or_ln10_fu_270_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln10_reg_415 : STD_LOGIC_VECTOR (0 downto 0);
    signal count_2_fu_318_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state17 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state17 : signal is "none";
    signal grp_fu_117_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_5_reg_426 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state53 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state53 : signal is "none";
    signal i_0_reg_72 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state54 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state54 : signal is "none";
    signal count_1_reg_84 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_0_reg_96 : STD_LOGIC_VECTOR (6 downto 0);
    signal zext_ln10_fu_205_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln14_fu_326_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal ap_CS_fsm_state23 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state23 : signal is "none";
    signal grp_fu_132_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_135_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln10_fu_170_p1 : STD_LOGIC_VECTOR (51 downto 0);
    signal trunc_ln10_1_fu_183_p1 : STD_LOGIC_VECTOR (51 downto 0);
    signal tmp_7_fu_210_p4 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_s_fu_225_p4 : STD_LOGIC_VECTOR (10 downto 0);
    signal bitcast_ln10_fu_240_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_6_fu_244_p4 : STD_LOGIC_VECTOR (10 downto 0);
    signal trunc_ln10_2_fu_254_p1 : STD_LOGIC_VECTOR (51 downto 0);
    signal icmp_ln10_1_fu_264_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln10_fu_258_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln10_1_fu_276_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln10_fu_280_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_122_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln10_2_fu_291_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln10_2_fu_295_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_127_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln10_1_fu_285_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln10_3_fu_300_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln10_4_fu_306_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal count_fu_312_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (53 downto 0);

    component estimate_FR_dmul_64ns_64ns_64_6_max_dsp_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (63 downto 0);
        din1 : IN STD_LOGIC_VECTOR (63 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (63 downto 0) );
    end component;


    component estimate_FR_ddiv_64ns_64ns_64_31_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (63 downto 0);
        din1 : IN STD_LOGIC_VECTOR (63 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (63 downto 0) );
    end component;


    component estimate_FR_dcmp_64ns_64ns_1_2_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (63 downto 0);
        din1 : IN STD_LOGIC_VECTOR (63 downto 0);
        ce : IN STD_LOGIC;
        opcode : IN STD_LOGIC_VECTOR (4 downto 0);
        dout : OUT STD_LOGIC_VECTOR (0 downto 0) );
    end component;


    component estimate_FR_sitodp_32ns_64_6_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (63 downto 0) );
    end component;



begin
    estimate_FR_dmul_64ns_64ns_64_6_max_dsp_1_U1 : component estimate_FR_dmul_64ns_64ns_64_6_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 6,
        din0_WIDTH => 64,
        din1_WIDTH => 64,
        dout_WIDTH => 64)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => reg_139,
        din1 => ap_const_lv64_3FB999999999999A,
        ce => ap_const_logic_1,
        dout => grp_fu_107_p2);

    estimate_FR_dmul_64ns_64ns_64_6_max_dsp_1_U2 : component estimate_FR_dmul_64ns_64ns_64_6_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 6,
        din0_WIDTH => 64,
        din1_WIDTH => 64,
        dout_WIDTH => 64)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_2_reg_349,
        din1 => ap_const_lv64_3FB999999999999A,
        ce => ap_const_logic_1,
        dout => grp_fu_112_p2);

    estimate_FR_ddiv_64ns_64ns_64_31_1_U3 : component estimate_FR_ddiv_64ns_64ns_64_31_1
    generic map (
        ID => 1,
        NUM_STAGE => 31,
        din0_WIDTH => 64,
        din1_WIDTH => 64,
        dout_WIDTH => 64)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => reg_139,
        din1 => ap_const_lv64_3FB999999999999A,
        ce => ap_const_logic_1,
        dout => grp_fu_117_p2);

    estimate_FR_dcmp_64ns_64ns_1_2_1_U4 : component estimate_FR_dcmp_64ns_64ns_1_2_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 64,
        din1_WIDTH => 64,
        dout_WIDTH => 1)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => spksTime_q0,
        din1 => tmp_1_reg_354,
        ce => ap_const_logic_1,
        opcode => ap_const_lv5_3,
        dout => grp_fu_122_p2);

    estimate_FR_dcmp_64ns_64ns_1_2_1_U5 : component estimate_FR_dcmp_64ns_64ns_1_2_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 64,
        din1_WIDTH => 64,
        dout_WIDTH => 1)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => spksTime_q0,
        din1 => tmp_3_reg_360,
        ce => ap_const_logic_1,
        opcode => ap_const_lv5_5,
        dout => grp_fu_127_p2);

    estimate_FR_sitodp_32ns_64_6_1_U6 : component estimate_FR_sitodp_32ns_64_6_1
    generic map (
        ID => 1,
        NUM_STAGE => 6,
        din0_WIDTH => 32,
        dout_WIDTH => 64)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_132_p0,
        ce => ap_const_logic_1,
        dout => grp_fu_132_p1);

    estimate_FR_sitodp_32ns_64_6_1_U7 : component estimate_FR_sitodp_32ns_64_6_1
    generic map (
        ID => 1,
        NUM_STAGE => 6,
        din0_WIDTH => 32,
        dout_WIDTH => 64)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_135_p0,
        ce => ap_const_logic_1,
        dout => grp_fu_135_p1);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    count_1_reg_84_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
                count_1_reg_84 <= ap_const_lv32_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state17)) then 
                count_1_reg_84 <= count_2_fu_318_p3;
            end if; 
        end if;
    end process;

    i_0_reg_72_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state54)) then 
                i_0_reg_72 <= i_reg_339;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_reg_72 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;

    j_0_reg_96_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
                j_0_reg_96 <= ap_const_lv7_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state17)) then 
                j_0_reg_96 <= j_reg_389;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state14)) then
                bitcast_ln10_1_reg_366 <= bitcast_ln10_1_fu_167_p1;
                bitcast_ln10_2_reg_376 <= bitcast_ln10_2_fu_180_p1;
                icmp_ln10_3_reg_371 <= icmp_ln10_3_fu_174_p2;
                icmp_ln10_4_reg_381 <= icmp_ln10_4_fu_187_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_reg_339 <= i_fu_156_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state15) and (icmp_ln9_fu_193_p2 = ap_const_lv1_0))) then
                icmp_ln10_2_reg_399 <= icmp_ln10_2_fu_219_p2;
                icmp_ln10_5_reg_404 <= icmp_ln10_5_fu_234_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state15)) then
                j_reg_389 <= j_fu_199_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state16)) then
                or_ln10_reg_415 <= or_ln10_fu_270_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state22) or (ap_const_logic_1 = ap_CS_fsm_state7))) then
                reg_139 <= grp_fu_132_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state13)) then
                tmp_1_reg_354 <= grp_fu_107_p2;
                tmp_3_reg_360 <= grp_fu_112_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                tmp_2_reg_349 <= grp_fu_135_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state53)) then
                tmp_5_reg_426 <= grp_fu_117_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln8_fu_150_p2, ap_CS_fsm_state15, icmp_ln9_fu_193_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln8_fu_150_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state12;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state13;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state14;
            when ap_ST_fsm_state14 => 
                ap_NS_fsm <= ap_ST_fsm_state15;
            when ap_ST_fsm_state15 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state15) and (icmp_ln9_fu_193_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state18;
                else
                    ap_NS_fsm <= ap_ST_fsm_state16;
                end if;
            when ap_ST_fsm_state16 => 
                ap_NS_fsm <= ap_ST_fsm_state17;
            when ap_ST_fsm_state17 => 
                ap_NS_fsm <= ap_ST_fsm_state15;
            when ap_ST_fsm_state18 => 
                ap_NS_fsm <= ap_ST_fsm_state19;
            when ap_ST_fsm_state19 => 
                ap_NS_fsm <= ap_ST_fsm_state20;
            when ap_ST_fsm_state20 => 
                ap_NS_fsm <= ap_ST_fsm_state21;
            when ap_ST_fsm_state21 => 
                ap_NS_fsm <= ap_ST_fsm_state22;
            when ap_ST_fsm_state22 => 
                ap_NS_fsm <= ap_ST_fsm_state23;
            when ap_ST_fsm_state23 => 
                ap_NS_fsm <= ap_ST_fsm_state24;
            when ap_ST_fsm_state24 => 
                ap_NS_fsm <= ap_ST_fsm_state25;
            when ap_ST_fsm_state25 => 
                ap_NS_fsm <= ap_ST_fsm_state26;
            when ap_ST_fsm_state26 => 
                ap_NS_fsm <= ap_ST_fsm_state27;
            when ap_ST_fsm_state27 => 
                ap_NS_fsm <= ap_ST_fsm_state28;
            when ap_ST_fsm_state28 => 
                ap_NS_fsm <= ap_ST_fsm_state29;
            when ap_ST_fsm_state29 => 
                ap_NS_fsm <= ap_ST_fsm_state30;
            when ap_ST_fsm_state30 => 
                ap_NS_fsm <= ap_ST_fsm_state31;
            when ap_ST_fsm_state31 => 
                ap_NS_fsm <= ap_ST_fsm_state32;
            when ap_ST_fsm_state32 => 
                ap_NS_fsm <= ap_ST_fsm_state33;
            when ap_ST_fsm_state33 => 
                ap_NS_fsm <= ap_ST_fsm_state34;
            when ap_ST_fsm_state34 => 
                ap_NS_fsm <= ap_ST_fsm_state35;
            when ap_ST_fsm_state35 => 
                ap_NS_fsm <= ap_ST_fsm_state36;
            when ap_ST_fsm_state36 => 
                ap_NS_fsm <= ap_ST_fsm_state37;
            when ap_ST_fsm_state37 => 
                ap_NS_fsm <= ap_ST_fsm_state38;
            when ap_ST_fsm_state38 => 
                ap_NS_fsm <= ap_ST_fsm_state39;
            when ap_ST_fsm_state39 => 
                ap_NS_fsm <= ap_ST_fsm_state40;
            when ap_ST_fsm_state40 => 
                ap_NS_fsm <= ap_ST_fsm_state41;
            when ap_ST_fsm_state41 => 
                ap_NS_fsm <= ap_ST_fsm_state42;
            when ap_ST_fsm_state42 => 
                ap_NS_fsm <= ap_ST_fsm_state43;
            when ap_ST_fsm_state43 => 
                ap_NS_fsm <= ap_ST_fsm_state44;
            when ap_ST_fsm_state44 => 
                ap_NS_fsm <= ap_ST_fsm_state45;
            when ap_ST_fsm_state45 => 
                ap_NS_fsm <= ap_ST_fsm_state46;
            when ap_ST_fsm_state46 => 
                ap_NS_fsm <= ap_ST_fsm_state47;
            when ap_ST_fsm_state47 => 
                ap_NS_fsm <= ap_ST_fsm_state48;
            when ap_ST_fsm_state48 => 
                ap_NS_fsm <= ap_ST_fsm_state49;
            when ap_ST_fsm_state49 => 
                ap_NS_fsm <= ap_ST_fsm_state50;
            when ap_ST_fsm_state50 => 
                ap_NS_fsm <= ap_ST_fsm_state51;
            when ap_ST_fsm_state51 => 
                ap_NS_fsm <= ap_ST_fsm_state52;
            when ap_ST_fsm_state52 => 
                ap_NS_fsm <= ap_ST_fsm_state53;
            when ap_ST_fsm_state53 => 
                ap_NS_fsm <= ap_ST_fsm_state54;
            when ap_ST_fsm_state54 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end case;
    end process;
    FR_address0 <= zext_ln14_fu_326_p1(8 - 1 downto 0);

    FR_ce0_assign_proc : process(ap_CS_fsm_state54)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state54)) then 
            FR_ce0 <= ap_const_logic_1;
        else 
            FR_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    FR_d0 <= tmp_5_reg_426;

    FR_we0_assign_proc : process(ap_CS_fsm_state54)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state54)) then 
            FR_we0 <= ap_const_logic_1;
        else 
            FR_we0 <= ap_const_logic_0;
        end if; 
    end process;

    and_ln10_1_fu_285_p2 <= (grp_fu_122_p2 and and_ln10_fu_280_p2);
    and_ln10_2_fu_295_p2 <= (or_ln10_reg_415 and or_ln10_2_fu_291_p2);
    and_ln10_3_fu_300_p2 <= (grp_fu_127_p2 and and_ln10_2_fu_295_p2);
    and_ln10_4_fu_306_p2 <= (and_ln10_3_fu_300_p2 and and_ln10_1_fu_285_p2);
    and_ln10_fu_280_p2 <= (or_ln10_reg_415 and or_ln10_1_fu_276_p2);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state14 <= ap_CS_fsm(13);
    ap_CS_fsm_state15 <= ap_CS_fsm(14);
    ap_CS_fsm_state16 <= ap_CS_fsm(15);
    ap_CS_fsm_state17 <= ap_CS_fsm(16);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state22 <= ap_CS_fsm(21);
    ap_CS_fsm_state23 <= ap_CS_fsm(22);
    ap_CS_fsm_state53 <= ap_CS_fsm(52);
    ap_CS_fsm_state54 <= ap_CS_fsm(53);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);

    ap_done_assign_proc : process(ap_CS_fsm_state2, icmp_ln8_fu_150_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln8_fu_150_p2 = ap_const_lv1_1))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln8_fu_150_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (icmp_ln8_fu_150_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    bitcast_ln10_1_fu_167_p1 <= tmp_1_reg_354;
    bitcast_ln10_2_fu_180_p1 <= tmp_3_reg_360;
    bitcast_ln10_fu_240_p1 <= spksTime_q0;
    count_2_fu_318_p3 <= 
        count_fu_312_p2 when (and_ln10_4_fu_306_p2(0) = '1') else 
        count_1_reg_84;
    count_fu_312_p2 <= std_logic_vector(unsigned(ap_const_lv32_1) + unsigned(count_1_reg_84));

    grp_fu_132_p0_assign_proc : process(zext_ln8_fu_145_p1, ap_CS_fsm_state2, ap_CS_fsm_state15, count_1_reg_84)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state15)) then 
            grp_fu_132_p0 <= count_1_reg_84;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            grp_fu_132_p0 <= zext_ln8_fu_145_p1;
        else 
            grp_fu_132_p0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;

    grp_fu_135_p0 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_fu_156_p2),32));
    i_fu_156_p2 <= std_logic_vector(unsigned(i_0_reg_72) + unsigned(ap_const_lv8_1));
    icmp_ln10_1_fu_264_p2 <= "1" when (trunc_ln10_2_fu_254_p1 = ap_const_lv52_0) else "0";
    icmp_ln10_2_fu_219_p2 <= "0" when (tmp_7_fu_210_p4 = ap_const_lv11_7FF) else "1";
    icmp_ln10_3_fu_174_p2 <= "1" when (trunc_ln10_fu_170_p1 = ap_const_lv52_0) else "0";
    icmp_ln10_4_fu_187_p2 <= "1" when (trunc_ln10_1_fu_183_p1 = ap_const_lv52_0) else "0";
    icmp_ln10_5_fu_234_p2 <= "0" when (tmp_s_fu_225_p4 = ap_const_lv11_7FF) else "1";
    icmp_ln10_fu_258_p2 <= "0" when (tmp_6_fu_244_p4 = ap_const_lv11_7FF) else "1";
    icmp_ln8_fu_150_p2 <= "1" when (i_0_reg_72 = ap_const_lv8_C8) else "0";
    icmp_ln9_fu_193_p2 <= "1" when (j_0_reg_96 = ap_const_lv7_4B) else "0";
    j_fu_199_p2 <= std_logic_vector(unsigned(j_0_reg_96) + unsigned(ap_const_lv7_1));
    or_ln10_1_fu_276_p2 <= (icmp_ln10_3_reg_371 or icmp_ln10_2_reg_399);
    or_ln10_2_fu_291_p2 <= (icmp_ln10_5_reg_404 or icmp_ln10_4_reg_381);
    or_ln10_fu_270_p2 <= (icmp_ln10_fu_258_p2 or icmp_ln10_1_fu_264_p2);
    spksTime_address0 <= zext_ln10_fu_205_p1(7 - 1 downto 0);

    spksTime_ce0_assign_proc : process(ap_CS_fsm_state15)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state15)) then 
            spksTime_ce0 <= ap_const_logic_1;
        else 
            spksTime_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_6_fu_244_p4 <= bitcast_ln10_fu_240_p1(62 downto 52);
    tmp_7_fu_210_p4 <= bitcast_ln10_1_reg_366(62 downto 52);
    tmp_s_fu_225_p4 <= bitcast_ln10_2_reg_376(62 downto 52);
    trunc_ln10_1_fu_183_p1 <= bitcast_ln10_2_fu_180_p1(52 - 1 downto 0);
    trunc_ln10_2_fu_254_p1 <= bitcast_ln10_fu_240_p1(52 - 1 downto 0);
    trunc_ln10_fu_170_p1 <= bitcast_ln10_1_fu_167_p1(52 - 1 downto 0);
    zext_ln10_fu_205_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_0_reg_96),64));
    zext_ln14_fu_326_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_reg_72),64));
    zext_ln8_fu_145_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_reg_72),32));
end behav;
