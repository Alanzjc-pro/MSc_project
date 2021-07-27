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
    spksTime_V_address0 : OUT STD_LOGIC_VECTOR (11 downto 0);
    spksTime_V_ce0 : OUT STD_LOGIC;
    spksTime_V_q0 : IN STD_LOGIC_VECTOR (18 downto 0);
    elements_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    elements_V_ce0 : OUT STD_LOGIC;
    elements_V_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    FR_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    FR_V_ce0 : OUT STD_LOGIC;
    FR_V_we0 : OUT STD_LOGIC;
    FR_V_d0 : OUT STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of estimate_FR is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "estimate_FR,hls_ip_2019_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.460250,HLS_SYN_LAT=4225,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=85,HLS_SYN_LUT=241,HLS_VERSION=2019_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (5 downto 0) := "000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (5 downto 0) := "000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (5 downto 0) := "001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (5 downto 0) := "010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv7_60 : STD_LOGIC_VECTOR (6 downto 0) := "1100000";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv19_0 : STD_LOGIC_VECTOR (18 downto 0) := "0000000000000000000";
    constant ap_const_lv8_2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_fu_173_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal i_reg_271 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal zext_ln10_fu_179_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln10_reg_276 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln9_fu_167_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln1498_fu_208_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln1498_reg_288 : STD_LOGIC_VECTOR (12 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal c_V_addr_1_reg_293 : STD_LOGIC_VECTOR (6 downto 0);
    signal elements_V_load_reg_298 : STD_LOGIC_VECTOR (7 downto 0);
    signal j_fu_219_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal j_reg_306 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal icmp_ln10_fu_214_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_V_address0 : STD_LOGIC_VECTOR (6 downto 0);
    signal c_V_ce0 : STD_LOGIC;
    signal c_V_we0 : STD_LOGIC;
    signal c_V_d0 : STD_LOGIC_VECTOR (7 downto 0);
    signal c_V_q0 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_0_reg_139 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal i_op_assign_reg_151 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal zext_ln1498_3_fu_235_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal nospikes_0_load_load_fu_251_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal FR_V_addr_gep_fu_130_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal nospikes_0_fu_62 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln1498_fu_240_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal r_V_fu_254_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_2_fu_184_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_3_fu_196_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal zext_ln1498_1_fu_204_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal zext_ln1498_fu_192_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal zext_ln1498_2_fu_226_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal add_ln1498_1_fu_230_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (5 downto 0);

    component estimate_FR_c_V IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (6 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (7 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;



begin
    c_V_U : component estimate_FR_c_V
    generic map (
        DataWidth => 8,
        AddressRange => 95,
        AddressWidth => 7)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => c_V_address0,
        ce0 => c_V_ce0,
        we0 => c_V_we0,
        d0 => c_V_d0,
        q0 => c_V_q0);





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


    i_0_reg_139_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_0_reg_139 <= ap_const_lv7_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                i_0_reg_139 <= i_reg_271;
            end if; 
        end if;
    end process;

    i_op_assign_reg_151_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                i_op_assign_reg_151 <= j_reg_306;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                i_op_assign_reg_151 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;

    nospikes_0_fu_62_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                nospikes_0_fu_62 <= icmp_ln1498_fu_240_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                nospikes_0_fu_62 <= ap_const_lv1_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                    add_ln1498_reg_288(12 downto 3) <= add_ln1498_fu_208_p2(12 downto 3);
                c_V_addr_1_reg_293 <= zext_ln10_reg_276(7 - 1 downto 0);
                elements_V_load_reg_298 <= elements_V_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_reg_271 <= i_fu_173_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                j_reg_306 <= j_fu_219_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln9_fu_167_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    zext_ln10_reg_276(6 downto 0) <= zext_ln10_fu_179_p1(6 downto 0);
            end if;
        end if;
    end process;
    zext_ln10_reg_276(63 downto 7) <= "000000000000000000000000000000000000000000000000000000000";
    add_ln1498_reg_288(2 downto 0) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln9_fu_167_p2, ap_CS_fsm_state4, icmp_ln10_fu_214_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln9_fu_167_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                if (((icmp_ln10_fu_214_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXXXX";
        end case;
    end process;
    FR_V_addr_gep_fu_130_p3 <= zext_ln10_reg_276(7 - 1 downto 0);

    FR_V_address0_assign_proc : process(zext_ln10_reg_276, ap_CS_fsm_state6, nospikes_0_load_load_fu_251_p1, FR_V_addr_gep_fu_130_p3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
            if ((nospikes_0_load_load_fu_251_p1 = ap_const_lv1_1)) then 
                FR_V_address0 <= FR_V_addr_gep_fu_130_p3;
            elsif ((nospikes_0_load_load_fu_251_p1 = ap_const_lv1_0)) then 
                FR_V_address0 <= zext_ln10_reg_276(7 - 1 downto 0);
            else 
                FR_V_address0 <= "XXXXXXX";
            end if;
        else 
            FR_V_address0 <= "XXXXXXX";
        end if; 
    end process;


    FR_V_ce0_assign_proc : process(ap_CS_fsm_state6, nospikes_0_load_load_fu_251_p1)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state6) and (nospikes_0_load_load_fu_251_p1 = ap_const_lv1_1)) or ((nospikes_0_load_load_fu_251_p1 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6)))) then 
            FR_V_ce0 <= ap_const_logic_1;
        else 
            FR_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    FR_V_d0_assign_proc : process(ap_CS_fsm_state6, nospikes_0_load_load_fu_251_p1, r_V_fu_254_p2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
            if ((nospikes_0_load_load_fu_251_p1 = ap_const_lv1_1)) then 
                FR_V_d0 <= ap_const_lv8_0;
            elsif ((nospikes_0_load_load_fu_251_p1 = ap_const_lv1_0)) then 
                FR_V_d0 <= r_V_fu_254_p2;
            else 
                FR_V_d0 <= "XXXXXXXX";
            end if;
        else 
            FR_V_d0 <= "XXXXXXXX";
        end if; 
    end process;


    FR_V_we0_assign_proc : process(ap_CS_fsm_state6, nospikes_0_load_load_fu_251_p1)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state6) and (nospikes_0_load_load_fu_251_p1 = ap_const_lv1_1)) or ((nospikes_0_load_load_fu_251_p1 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6)))) then 
            FR_V_we0 <= ap_const_logic_1;
        else 
            FR_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    add_ln1498_1_fu_230_p2 <= std_logic_vector(unsigned(add_ln1498_reg_288) + unsigned(zext_ln1498_2_fu_226_p1));
    add_ln1498_fu_208_p2 <= std_logic_vector(unsigned(zext_ln1498_1_fu_204_p1) + unsigned(zext_ln1498_fu_192_p1));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);

    ap_done_assign_proc : process(ap_CS_fsm_state2, icmp_ln9_fu_167_p2)
    begin
        if (((icmp_ln9_fu_167_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln9_fu_167_p2)
    begin
        if (((icmp_ln9_fu_167_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    c_V_address0_assign_proc : process(ap_CS_fsm_state1, c_V_addr_1_reg_293, ap_CS_fsm_state4, icmp_ln10_fu_214_p2)
    begin
        if ((((icmp_ln10_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4)) or ((icmp_ln10_fu_214_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4)))) then 
            c_V_address0 <= c_V_addr_1_reg_293;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            c_V_address0 <= ap_const_lv64_0(7 - 1 downto 0);
        else 
            c_V_address0 <= "XXXXXXX";
        end if; 
    end process;


    c_V_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state4, icmp_ln10_fu_214_p2)
    begin
        if ((((icmp_ln10_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4)) or ((icmp_ln10_fu_214_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4)) or ((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1)))) then 
            c_V_ce0 <= ap_const_logic_1;
        else 
            c_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    c_V_d0_assign_proc : process(ap_CS_fsm_state1, j_fu_219_p2, ap_CS_fsm_state4, icmp_ln10_fu_214_p2)
    begin
        if (((icmp_ln10_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            c_V_d0 <= j_fu_219_p2;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            c_V_d0 <= ap_const_lv8_0;
        else 
            c_V_d0 <= "XXXXXXXX";
        end if; 
    end process;


    c_V_we0_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state4, icmp_ln10_fu_214_p2)
    begin
        if ((((icmp_ln10_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4)) or ((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1)))) then 
            c_V_we0 <= ap_const_logic_1;
        else 
            c_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    elements_V_address0 <= zext_ln10_fu_179_p1(7 - 1 downto 0);

    elements_V_ce0_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            elements_V_ce0 <= ap_const_logic_1;
        else 
            elements_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_173_p2 <= std_logic_vector(unsigned(i_0_reg_139) + unsigned(ap_const_lv7_1));
    icmp_ln10_fu_214_p2 <= "1" when (i_op_assign_reg_151 = elements_V_load_reg_298) else "0";
    icmp_ln1498_fu_240_p2 <= "1" when (spksTime_V_q0 = ap_const_lv19_0) else "0";
    icmp_ln9_fu_167_p2 <= "1" when (i_0_reg_139 = ap_const_lv7_60) else "0";
    j_fu_219_p2 <= std_logic_vector(unsigned(i_op_assign_reg_151) + unsigned(ap_const_lv8_1));
    nospikes_0_load_load_fu_251_p1 <= nospikes_0_fu_62;
    r_V_fu_254_p2 <= std_logic_vector(shift_left(unsigned(c_V_q0),to_integer(unsigned('0' & ap_const_lv8_2(8-1 downto 0)))));
    spksTime_V_address0 <= zext_ln1498_3_fu_235_p1(12 - 1 downto 0);

    spksTime_V_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            spksTime_V_ce0 <= ap_const_logic_1;
        else 
            spksTime_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_2_fu_184_p3 <= (i_0_reg_139 & ap_const_lv5_0);
    tmp_3_fu_196_p3 <= (i_0_reg_139 & ap_const_lv3_0);
    zext_ln10_fu_179_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_reg_139),64));
    zext_ln1498_1_fu_204_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_3_fu_196_p3),13));
    zext_ln1498_2_fu_226_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_op_assign_reg_151),13));
    zext_ln1498_3_fu_235_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln1498_1_fu_230_p2),64));
    zext_ln1498_fu_192_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_fu_184_p3),13));
end behav;