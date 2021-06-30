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
    spksTime_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    spksTime_V_ce0 : OUT STD_LOGIC;
    spksTime_V_q0 : IN STD_LOGIC_VECTOR (19 downto 0);
    spksTime_V_address1 : OUT STD_LOGIC_VECTOR (6 downto 0);
    spksTime_V_ce1 : OUT STD_LOGIC;
    spksTime_V_q1 : IN STD_LOGIC_VECTOR (19 downto 0);
    FR_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    FR_V_ce0 : OUT STD_LOGIC;
    FR_V_we0 : OUT STD_LOGIC;
    FR_V_d0 : OUT STD_LOGIC_VECTOR (16 downto 0);
    FR_V_q0 : IN STD_LOGIC_VECTOR (16 downto 0);
    ISI_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    ISI_V_ce0 : OUT STD_LOGIC;
    ISI_V_we0 : OUT STD_LOGIC;
    ISI_V_d0 : OUT STD_LOGIC_VECTOR (16 downto 0);
    ISI_V_q0 : IN STD_LOGIC_VECTOR (16 downto 0) );
end;


architecture behav of estimate_FR is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "estimate_FR,hls_ip_2019_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.614688,HLS_SYN_LAT=2413,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=398,HLS_SYN_LUT=578,HLS_VERSION=2019_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000001000000000000";
    constant ap_ST_fsm_state14 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000010000000000000";
    constant ap_ST_fsm_state15 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000100000000000000";
    constant ap_ST_fsm_state16 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000001000000000000000";
    constant ap_ST_fsm_state17 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000010000000000000000";
    constant ap_ST_fsm_state18 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000100000000000000000";
    constant ap_ST_fsm_state19 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000001000000000000000000";
    constant ap_ST_fsm_state20 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000010000000000000000000";
    constant ap_ST_fsm_state21 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000100000000000000000000";
    constant ap_ST_fsm_state22 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000001000000000000000000000";
    constant ap_ST_fsm_state23 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000010000000000000000000000";
    constant ap_ST_fsm_state24 : STD_LOGIC_VECTOR (33 downto 0) := "0000000000100000000000000000000000";
    constant ap_ST_fsm_state25 : STD_LOGIC_VECTOR (33 downto 0) := "0000000001000000000000000000000000";
    constant ap_ST_fsm_state26 : STD_LOGIC_VECTOR (33 downto 0) := "0000000010000000000000000000000000";
    constant ap_ST_fsm_state27 : STD_LOGIC_VECTOR (33 downto 0) := "0000000100000000000000000000000000";
    constant ap_ST_fsm_state28 : STD_LOGIC_VECTOR (33 downto 0) := "0000001000000000000000000000000000";
    constant ap_ST_fsm_state29 : STD_LOGIC_VECTOR (33 downto 0) := "0000010000000000000000000000000000";
    constant ap_ST_fsm_state30 : STD_LOGIC_VECTOR (33 downto 0) := "0000100000000000000000000000000000";
    constant ap_ST_fsm_state31 : STD_LOGIC_VECTOR (33 downto 0) := "0001000000000000000000000000000000";
    constant ap_ST_fsm_state32 : STD_LOGIC_VECTOR (33 downto 0) := "0010000000000000000000000000000000";
    constant ap_ST_fsm_state33 : STD_LOGIC_VECTOR (33 downto 0) := "0100000000000000000000000000000000";
    constant ap_ST_fsm_state34 : STD_LOGIC_VECTOR (33 downto 0) := "1000000000000000000000000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_21 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100001";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv17_0 : STD_LOGIC_VECTOR (16 downto 0) := "00000000000000000";
    constant ap_const_lv7_4A : STD_LOGIC_VECTOR (6 downto 0) := "1001010";
    constant ap_const_lv25_800000 : STD_LOGIC_VECTOR (24 downto 0) := "0100000000000000000000000";
    constant ap_const_lv7_7F : STD_LOGIC_VECTOR (6 downto 0) := "1111111";
    constant ap_const_lv32_14 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010100";
    constant ap_const_lv18_3C0 : STD_LOGIC_VECTOR (17 downto 0) := "000000001111000000";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (33 downto 0) := "0000000000000000000000000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_fu_155_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal i_reg_279 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal zext_ln11_fu_161_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln11_reg_284 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln10_fu_149_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal icmp_ln14_fu_186_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal FR_V_addr_1_reg_307 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal ap_CS_fsm_state32 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state32 : signal is "none";
    signal icmp_ln1494_fu_244_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln1494_reg_322 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state33 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state33 : signal is "none";
    signal add_ln703_fu_264_p2 : STD_LOGIC_VECTOR (16 downto 0);
    signal add_ln703_reg_326 : STD_LOGIC_VECTOR (16 downto 0);
    signal j_fu_270_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state34 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state34 : signal is "none";
    signal i_0_reg_126 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal j_0_reg_137 : STD_LOGIC_VECTOR (6 downto 0);
    signal zext_ln11_1_fu_166_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln15_fu_192_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln16_fu_214_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal p_Val2_3_fu_219_p4 : STD_LOGIC_VECTOR (16 downto 0);
    signal trunc_ln703_fu_171_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal trunc_ln703_1_fu_175_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal add_ln16_fu_208_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal grp_fu_202_p2 : STD_LOGIC_VECTOR (24 downto 0);
    signal lhs_V_fu_230_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal rhs_V_fu_234_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal ret_V_fu_238_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal trunc_ln1_fu_250_p4 : STD_LOGIC_VECTOR (12 downto 0);
    signal p_Val2_5_fu_260_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal grp_fu_202_ap_start : STD_LOGIC;
    signal grp_fu_202_ap_done : STD_LOGIC;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (33 downto 0);

    component estimate_FR_sdiv_25ns_17s_25_29_seq_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        start : IN STD_LOGIC;
        done : OUT STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (24 downto 0);
        din1 : IN STD_LOGIC_VECTOR (16 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (24 downto 0) );
    end component;



begin
    estimate_FR_sdiv_25ns_17s_25_29_seq_1_U1 : component estimate_FR_sdiv_25ns_17s_25_29_seq_1
    generic map (
        ID => 1,
        NUM_STAGE => 29,
        din0_WIDTH => 25,
        din1_WIDTH => 17,
        dout_WIDTH => 25)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        start => grp_fu_202_ap_start,
        done => grp_fu_202_ap_done,
        din0 => ap_const_lv25_800000,
        din1 => ISI_V_q0,
        ce => ap_const_logic_1,
        dout => grp_fu_202_p2);





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


    i_0_reg_126_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                i_0_reg_126 <= i_reg_279;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_reg_126 <= ap_const_lv7_0;
            end if; 
        end if;
    end process;

    j_0_reg_137_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln10_fu_149_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                j_0_reg_137 <= ap_const_lv7_1;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state34)) then 
                j_0_reg_137 <= j_fu_270_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln14_fu_186_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                FR_V_addr_1_reg_307 <= zext_ln15_fu_192_p1(7 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state33) and (icmp_ln1494_fu_244_p2 = ap_const_lv1_1))) then
                add_ln703_reg_326 <= add_ln703_fu_264_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_reg_279 <= i_fu_155_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state33)) then
                icmp_ln1494_reg_322 <= icmp_ln1494_fu_244_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln10_fu_149_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    zext_ln11_reg_284(6 downto 0) <= zext_ln11_fu_161_p1(6 downto 0);
            end if;
        end if;
    end process;
    zext_ln11_reg_284(63 downto 7) <= "000000000000000000000000000000000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln10_fu_149_p2, ap_CS_fsm_state4, icmp_ln14_fu_186_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln10_fu_149_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln14_fu_186_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
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
                ap_NS_fsm <= ap_ST_fsm_state16;
            when ap_ST_fsm_state16 => 
                ap_NS_fsm <= ap_ST_fsm_state17;
            when ap_ST_fsm_state17 => 
                ap_NS_fsm <= ap_ST_fsm_state18;
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
                ap_NS_fsm <= ap_ST_fsm_state4;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end case;
    end process;

    FR_V_address0_assign_proc : process(ap_CS_fsm_state1, FR_V_addr_1_reg_307, ap_CS_fsm_state32, ap_CS_fsm_state33, ap_CS_fsm_state34, zext_ln16_fu_214_p1)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state34) or (ap_const_logic_1 = ap_CS_fsm_state33))) then 
            FR_V_address0 <= FR_V_addr_1_reg_307;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state32)) then 
            FR_V_address0 <= zext_ln16_fu_214_p1(7 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            FR_V_address0 <= ap_const_lv64_0(7 - 1 downto 0);
        else 
            FR_V_address0 <= "XXXXXXX";
        end if; 
    end process;


    FR_V_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state32, ap_CS_fsm_state33, ap_CS_fsm_state34)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state34) or (ap_const_logic_1 = ap_CS_fsm_state33) or (ap_const_logic_1 = ap_CS_fsm_state32) or ((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            FR_V_ce0 <= ap_const_logic_1;
        else 
            FR_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    FR_V_d0_assign_proc : process(ap_CS_fsm_state1, ap_CS_fsm_state33, add_ln703_reg_326, ap_CS_fsm_state34, grp_fu_202_p2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state34)) then 
            FR_V_d0 <= add_ln703_reg_326;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state33)) then 
            FR_V_d0 <= grp_fu_202_p2(20 downto 4);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            FR_V_d0 <= ap_const_lv17_0;
        else 
            FR_V_d0 <= "XXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    FR_V_we0_assign_proc : process(ap_start, ap_CS_fsm_state1, icmp_ln1494_reg_322, ap_CS_fsm_state33, ap_CS_fsm_state34)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state33) or ((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state34) and (icmp_ln1494_reg_322 = ap_const_lv1_1)))) then 
            FR_V_we0 <= ap_const_logic_1;
        else 
            FR_V_we0 <= ap_const_logic_0;
        end if; 
    end process;


    ISI_V_address0_assign_proc : process(zext_ln11_reg_284, ap_CS_fsm_state4, ap_CS_fsm_state3, zext_ln15_fu_192_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            ISI_V_address0 <= zext_ln15_fu_192_p1(7 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            ISI_V_address0 <= zext_ln11_reg_284(7 - 1 downto 0);
        else 
            ISI_V_address0 <= "XXXXXXX";
        end if; 
    end process;


    ISI_V_ce0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            ISI_V_ce0 <= ap_const_logic_1;
        else 
            ISI_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ISI_V_d0 <= std_logic_vector(unsigned(trunc_ln703_fu_171_p1) - unsigned(trunc_ln703_1_fu_175_p1));

    ISI_V_we0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            ISI_V_we0 <= ap_const_logic_1;
        else 
            ISI_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    add_ln16_fu_208_p2 <= std_logic_vector(unsigned(j_0_reg_137) + unsigned(ap_const_lv7_7F));
    add_ln703_fu_264_p2 <= std_logic_vector(unsigned(FR_V_q0) + unsigned(p_Val2_5_fu_260_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state32 <= ap_CS_fsm(31);
    ap_CS_fsm_state33 <= ap_CS_fsm(32);
    ap_CS_fsm_state34 <= ap_CS_fsm(33);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_CS_fsm_state4, icmp_ln14_fu_186_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln14_fu_186_p2 = ap_const_lv1_1))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state4, icmp_ln14_fu_186_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) and (icmp_ln14_fu_186_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    grp_fu_202_ap_start_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            grp_fu_202_ap_start <= ap_const_logic_1;
        else 
            grp_fu_202_ap_start <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_155_p2 <= std_logic_vector(unsigned(i_0_reg_126) + unsigned(ap_const_lv7_1));
    icmp_ln10_fu_149_p2 <= "1" when (i_0_reg_126 = ap_const_lv7_4A) else "0";
    icmp_ln1494_fu_244_p2 <= "1" when (signed(ret_V_fu_238_p2) > signed(ap_const_lv18_3C0)) else "0";
    icmp_ln14_fu_186_p2 <= "1" when (j_0_reg_137 = ap_const_lv7_4A) else "0";
    j_fu_270_p2 <= std_logic_vector(unsigned(j_0_reg_137) + unsigned(ap_const_lv7_1));
    lhs_V_fu_230_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Val2_3_fu_219_p4),18));
    p_Val2_3_fu_219_p4 <= grp_fu_202_p2(20 downto 4);
    p_Val2_5_fu_260_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln1_fu_250_p4),17));
    ret_V_fu_238_p2 <= std_logic_vector(unsigned(lhs_V_fu_230_p1) - unsigned(rhs_V_fu_234_p1));
    rhs_V_fu_234_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(FR_V_q0),18));
    spksTime_V_address0 <= zext_ln11_1_fu_166_p1(7 - 1 downto 0);
    spksTime_V_address1 <= zext_ln11_fu_161_p1(7 - 1 downto 0);

    spksTime_V_ce0_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            spksTime_V_ce0 <= ap_const_logic_1;
        else 
            spksTime_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    spksTime_V_ce1_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            spksTime_V_ce1 <= ap_const_logic_1;
        else 
            spksTime_V_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    trunc_ln1_fu_250_p4 <= ret_V_fu_238_p2(17 downto 5);
    trunc_ln703_1_fu_175_p1 <= spksTime_V_q1(17 - 1 downto 0);
    trunc_ln703_fu_171_p1 <= spksTime_V_q0(17 - 1 downto 0);
    zext_ln11_1_fu_166_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_fu_155_p2),64));
    zext_ln11_fu_161_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_reg_126),64));
    zext_ln15_fu_192_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_0_reg_137),64));
    zext_ln16_fu_214_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln16_fu_208_p2),64));
end behav;
