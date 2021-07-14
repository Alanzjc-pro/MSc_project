-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2019.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity estimate_ISI is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    spksTime_V_address0 : OUT STD_LOGIC_VECTOR (11 downto 0);
    spksTime_V_ce0 : OUT STD_LOGIC;
    spksTime_V_q0 : IN STD_LOGIC_VECTOR (17 downto 0);
    spksPre_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    spksPre_V_ce0 : OUT STD_LOGIC;
    spksPre_V_we0 : OUT STD_LOGIC;
    spksPre_V_d0 : OUT STD_LOGIC_VECTOR (17 downto 0);
    spksPre_V_q0 : IN STD_LOGIC_VECTOR (17 downto 0);
    ISI_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    ISI_V_ce0 : OUT STD_LOGIC;
    ISI_V_we0 : OUT STD_LOGIC;
    ISI_V_d0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    ISI_V_q0 : IN STD_LOGIC_VECTOR (9 downto 0);
    ISIpre_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    ISIpre_V_ce0 : OUT STD_LOGIC;
    ISIpre_V_we0 : OUT STD_LOGIC;
    ISIpre_V_d0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    ISIpre_V_q0 : IN STD_LOGIC_VECTOR (9 downto 0);
    elements_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    elements_V_ce0 : OUT STD_LOGIC;
    elements_V_q0 : IN STD_LOGIC_VECTOR (5 downto 0) );
end;


architecture behav of estimate_ISI is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "estimate_ISI,hls_ip_2019_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.685000,HLS_SYN_LAT=13729,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=1,HLS_SYN_FF=163,HLS_SYN_LUT=261,HLS_VERSION=2019_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (10 downto 0) := "00000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (10 downto 0) := "00000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (10 downto 0) := "00000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (10 downto 0) := "00000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (10 downto 0) := "00000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (10 downto 0) := "00001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (10 downto 0) := "00010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (10 downto 0) := "00100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (10 downto 0) := "01000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (10 downto 0) := "10000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv10_100 : STD_LOGIC_VECTOR (9 downto 0) := "0100000000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv7_60 : STD_LOGIC_VECTOR (6 downto 0) := "1100000";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv18_0 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000000";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_V_fu_169_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal i_V_reg_352 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal add_ln1498_fu_207_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln1498_reg_357 : STD_LOGIC_VECTOR (12 downto 0);
    signal icmp_ln7_fu_163_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal elements_V_addr_reg_362 : STD_LOGIC_VECTOR (6 downto 0);
    signal ISI_V_addr_reg_367 : STD_LOGIC_VECTOR (6 downto 0);
    signal spksPre_V_addr_reg_372 : STD_LOGIC_VECTOR (6 downto 0);
    signal ISIpre_V_addr_reg_377 : STD_LOGIC_VECTOR (6 downto 0);
    signal j_V_fu_219_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal j_V_reg_385 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal icmp_ln887_fu_213_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_s_reg_395 : STD_LOGIC_VECTOR (17 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal icmp_ln1498_fu_239_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln1498_reg_401 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln703_1_fu_245_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal trunc_ln703_1_reg_405 : STD_LOGIC_VECTOR (13 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ret_V_2_fu_252_p2 : STD_LOGIC_VECTOR (13 downto 0);
    signal ret_V_2_reg_410 : STD_LOGIC_VECTOR (13 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal p_Val2_4_fu_257_p4 : STD_LOGIC_VECTOR (9 downto 0);
    signal p_Val2_4_reg_415 : STD_LOGIC_VECTOR (9 downto 0);
    signal p_Val2_3_reg_421 : STD_LOGIC_VECTOR (9 downto 0);
    signal trunc_ln1_reg_428 : STD_LOGIC_VECTOR (9 downto 0);
    signal icmp_ln1496_fu_299_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln1496_reg_433 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal sub_ln703_1_fu_336_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal sub_ln703_1_reg_437 : STD_LOGIC_VECTOR (9 downto 0);
    signal t_V_reg_141 : STD_LOGIC_VECTOR (6 downto 0);
    signal t_V_1_reg_152 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal zext_ln544_fu_175_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln1498_3_fu_234_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal tmp_1_fu_183_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_2_fu_195_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal zext_ln1498_1_fu_203_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal zext_ln1498_fu_191_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal zext_ln1498_2_fu_225_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln1498_1_fu_229_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal trunc_ln703_fu_249_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal r_V_fu_342_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal lhs_V_fu_284_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal rhs_V_fu_287_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal ret_V_fu_290_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal zext_ln1496_fu_296_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal r_V_3_fu_305_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal trunc_ln2_fu_318_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal r_V_5_fu_327_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal sub_ln703_fu_331_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal r_V_4_fu_314_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal r_V_fu_342_p0 : STD_LOGIC_VECTOR (9 downto 0);
    signal r_V_fu_342_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (10 downto 0);
    signal r_V_fu_342_p00 : STD_LOGIC_VECTOR (12 downto 0);
    signal r_V_fu_342_p10 : STD_LOGIC_VECTOR (12 downto 0);

    component estimate_ISI_mul_mul_10ns_10ns_13_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (9 downto 0);
        din1 : IN STD_LOGIC_VECTOR (9 downto 0);
        dout : OUT STD_LOGIC_VECTOR (12 downto 0) );
    end component;



begin
    estimate_ISI_mul_mul_10ns_10ns_13_1_1_U1 : component estimate_ISI_mul_mul_10ns_10ns_13_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 10,
        din1_WIDTH => 10,
        dout_WIDTH => 13)
    port map (
        din0 => r_V_fu_342_p0,
        din1 => r_V_fu_342_p1,
        dout => r_V_fu_342_p2);





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


    t_V_1_reg_152_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln7_fu_163_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                t_V_1_reg_152 <= ap_const_lv6_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
                t_V_1_reg_152 <= j_V_reg_385;
            end if; 
        end if;
    end process;

    t_V_reg_141_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln887_fu_213_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                t_V_reg_141 <= i_V_reg_352;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                t_V_reg_141 <= ap_const_lv7_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln7_fu_163_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                ISI_V_addr_reg_367 <= zext_ln544_fu_175_p1(7 - 1 downto 0);
                ISIpre_V_addr_reg_377 <= zext_ln544_fu_175_p1(7 - 1 downto 0);
                    add_ln1498_reg_357(12 downto 3) <= add_ln1498_fu_207_p2(12 downto 3);
                elements_V_addr_reg_362 <= zext_ln544_fu_175_p1(7 - 1 downto 0);
                spksPre_V_addr_reg_372 <= zext_ln544_fu_175_p1(7 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_V_reg_352 <= i_V_fu_169_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                icmp_ln1496_reg_433 <= icmp_ln1496_fu_299_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                icmp_ln1498_reg_401 <= icmp_ln1498_fu_239_p2;
                p_Val2_s_reg_395 <= spksTime_V_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                j_V_reg_385 <= j_V_fu_219_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                p_Val2_3_reg_421 <= ISIpre_V_q0;
                p_Val2_4_reg_415 <= ret_V_2_fu_252_p2(13 downto 4);
                ret_V_2_reg_410 <= ret_V_2_fu_252_p2;
                trunc_ln1_reg_428 <= r_V_fu_342_p2(12 downto 3);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln1496_fu_299_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state8))) then
                sub_ln703_1_reg_437 <= sub_ln703_1_fu_336_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                trunc_ln703_1_reg_405 <= trunc_ln703_1_fu_245_p1;
            end if;
        end if;
    end process;
    add_ln1498_reg_357(2 downto 0) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln7_fu_163_p2, ap_CS_fsm_state4, icmp_ln887_fu_213_p2, ap_CS_fsm_state5, icmp_ln1498_fu_239_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln7_fu_163_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                if (((icmp_ln887_fu_213_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                if (((icmp_ln1498_fu_239_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state11;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
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
                ap_NS_fsm <= ap_ST_fsm_state3;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXX";
        end case;
    end process;
    ISI_V_address0 <= ISI_V_addr_reg_367;

    ISI_V_ce0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state8, ap_CS_fsm_state9, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            ISI_V_ce0 <= ap_const_logic_1;
        else 
            ISI_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    ISI_V_d0_assign_proc : process(ap_CS_fsm_state5, p_Val2_4_reg_415, ap_CS_fsm_state8, sub_ln703_1_reg_437, ap_CS_fsm_state9)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            ISI_V_d0 <= sub_ln703_1_reg_437;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            ISI_V_d0 <= p_Val2_4_reg_415;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            ISI_V_d0 <= ap_const_lv10_100;
        else 
            ISI_V_d0 <= "XXXXXXXXXX";
        end if; 
    end process;


    ISI_V_we0_assign_proc : process(ap_CS_fsm_state5, icmp_ln1498_fu_239_p2, icmp_ln1496_reg_433, ap_CS_fsm_state8, ap_CS_fsm_state9)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or ((icmp_ln1496_reg_433 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state9)) or ((icmp_ln1498_fu_239_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5)))) then 
            ISI_V_we0 <= ap_const_logic_1;
        else 
            ISI_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ISIpre_V_address0 <= ISIpre_V_addr_reg_377;

    ISIpre_V_ce0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state11) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            ISIpre_V_ce0 <= ap_const_logic_1;
        else 
            ISIpre_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ISIpre_V_d0 <= ISI_V_q0;

    ISIpre_V_we0_assign_proc : process(icmp_ln1498_reg_401, ap_CS_fsm_state11)
    begin
        if (((icmp_ln1498_reg_401 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state11))) then 
            ISIpre_V_we0 <= ap_const_logic_1;
        else 
            ISIpre_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    add_ln1498_1_fu_229_p2 <= std_logic_vector(unsigned(add_ln1498_reg_357) + unsigned(zext_ln1498_2_fu_225_p1));
    add_ln1498_fu_207_p2 <= std_logic_vector(unsigned(zext_ln1498_1_fu_203_p1) + unsigned(zext_ln1498_fu_191_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_CS_fsm_state2, icmp_ln7_fu_163_p2)
    begin
        if (((icmp_ln7_fu_163_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln7_fu_163_p2)
    begin
        if (((icmp_ln7_fu_163_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    elements_V_address0 <= elements_V_addr_reg_362;

    elements_V_ce0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            elements_V_ce0 <= ap_const_logic_1;
        else 
            elements_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    i_V_fu_169_p2 <= std_logic_vector(unsigned(t_V_reg_141) + unsigned(ap_const_lv7_1));
    icmp_ln1496_fu_299_p2 <= "1" when (signed(ret_V_fu_290_p2) < signed(zext_ln1496_fu_296_p1)) else "0";
    icmp_ln1498_fu_239_p2 <= "1" when (spksTime_V_q0 = ap_const_lv18_0) else "0";
    icmp_ln7_fu_163_p2 <= "1" when (t_V_reg_141 = ap_const_lv7_60) else "0";
    icmp_ln887_fu_213_p2 <= "1" when (unsigned(t_V_1_reg_152) < unsigned(elements_V_q0)) else "0";
    j_V_fu_219_p2 <= std_logic_vector(unsigned(t_V_1_reg_152) + unsigned(ap_const_lv6_1));
    lhs_V_fu_284_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Val2_3_reg_421),11));
    p_Val2_4_fu_257_p4 <= ret_V_2_fu_252_p2(13 downto 4);
    r_V_3_fu_305_p4 <= p_Val2_3_reg_421(9 downto 5);
    r_V_4_fu_314_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_V_3_fu_305_p4),10));
    r_V_5_fu_327_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln2_fu_318_p4),10));
    r_V_fu_342_p0 <= r_V_fu_342_p00(10 - 1 downto 0);
    r_V_fu_342_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Val2_4_fu_257_p4),13));
    r_V_fu_342_p1 <= r_V_fu_342_p10(10 - 1 downto 0);
    r_V_fu_342_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ISIpre_V_q0),13));
    ret_V_2_fu_252_p2 <= std_logic_vector(unsigned(trunc_ln703_fu_249_p1) - unsigned(trunc_ln703_1_reg_405));
    ret_V_fu_290_p2 <= std_logic_vector(unsigned(lhs_V_fu_284_p1) - unsigned(rhs_V_fu_287_p1));
    rhs_V_fu_287_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Val2_4_reg_415),11));
    spksPre_V_address0 <= spksPre_V_addr_reg_372;

    spksPre_V_ce0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state9)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            spksPre_V_ce0 <= ap_const_logic_1;
        else 
            spksPre_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    spksPre_V_d0 <= p_Val2_s_reg_395;

    spksPre_V_we0_assign_proc : process(ap_CS_fsm_state9)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            spksPre_V_we0 <= ap_const_logic_1;
        else 
            spksPre_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    spksTime_V_address0 <= zext_ln1498_3_fu_234_p1(12 - 1 downto 0);

    spksTime_V_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            spksTime_V_ce0 <= ap_const_logic_1;
        else 
            spksTime_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    sub_ln703_1_fu_336_p2 <= std_logic_vector(unsigned(sub_ln703_fu_331_p2) - unsigned(r_V_4_fu_314_p1));
    sub_ln703_fu_331_p2 <= std_logic_vector(unsigned(p_Val2_3_reg_421) - unsigned(r_V_5_fu_327_p1));
    tmp_1_fu_183_p3 <= (t_V_reg_141 & ap_const_lv5_0);
    tmp_2_fu_195_p3 <= (t_V_reg_141 & ap_const_lv3_0);
    trunc_ln2_fu_318_p4 <= ret_V_2_reg_410(13 downto 9);
    trunc_ln703_1_fu_245_p1 <= spksPre_V_q0(14 - 1 downto 0);
    trunc_ln703_fu_249_p1 <= p_Val2_s_reg_395(14 - 1 downto 0);
    zext_ln1496_fu_296_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln1_reg_428),11));
    zext_ln1498_1_fu_203_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_fu_195_p3),13));
    zext_ln1498_2_fu_225_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(t_V_1_reg_152),13));
    zext_ln1498_3_fu_234_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln1498_1_fu_229_p2),64));
    zext_ln1498_fu_191_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_1_fu_183_p3),13));
    zext_ln544_fu_175_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(t_V_reg_141),64));
end behav;