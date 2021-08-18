-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity estimate_FR_2_AXILiteS_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 10;
    C_S_AXI_DATA_WIDTH    : INTEGER := 32);
port (
    ACLK                  :in   STD_LOGIC;
    ARESET                :in   STD_LOGIC;
    ACLK_EN               :in   STD_LOGIC;
    AWADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    AWVALID               :in   STD_LOGIC;
    AWREADY               :out  STD_LOGIC;
    WDATA                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    WSTRB                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH/8-1 downto 0);
    WVALID                :in   STD_LOGIC;
    WREADY                :out  STD_LOGIC;
    BRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    BVALID                :out  STD_LOGIC;
    BREADY                :in   STD_LOGIC;
    ARADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    ARVALID               :in   STD_LOGIC;
    ARREADY               :out  STD_LOGIC;
    RDATA                 :out  STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    RRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    RVALID                :out  STD_LOGIC;
    RREADY                :in   STD_LOGIC;
    interrupt             :out  STD_LOGIC;
    ap_start              :out  STD_LOGIC;
    ap_done               :in   STD_LOGIC;
    ap_ready              :in   STD_LOGIC;
    ap_idle               :in   STD_LOGIC;
    inputs_0_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_0_ce0          :in   STD_LOGIC;
    inputs_0_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_1_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_1_ce0          :in   STD_LOGIC;
    inputs_1_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_2_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_2_ce0          :in   STD_LOGIC;
    inputs_2_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_3_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_3_ce0          :in   STD_LOGIC;
    inputs_3_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_4_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_4_ce0          :in   STD_LOGIC;
    inputs_4_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_5_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_5_ce0          :in   STD_LOGIC;
    inputs_5_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_6_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_6_ce0          :in   STD_LOGIC;
    inputs_6_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_7_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_7_ce0          :in   STD_LOGIC;
    inputs_7_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_8_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_8_ce0          :in   STD_LOGIC;
    inputs_8_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_9_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_9_ce0          :in   STD_LOGIC;
    inputs_9_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_10_address0    :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_10_ce0         :in   STD_LOGIC;
    inputs_10_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_11_address0    :in   STD_LOGIC_VECTOR(2 downto 0);
    inputs_11_ce0         :in   STD_LOGIC;
    inputs_11_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_0_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_0_ce0          :in   STD_LOGIC;
    counts_0_we0          :in   STD_LOGIC;
    counts_0_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_0_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_1_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_1_ce0          :in   STD_LOGIC;
    counts_1_we0          :in   STD_LOGIC;
    counts_1_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_1_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_2_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_2_ce0          :in   STD_LOGIC;
    counts_2_we0          :in   STD_LOGIC;
    counts_2_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_2_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_3_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_3_ce0          :in   STD_LOGIC;
    counts_3_we0          :in   STD_LOGIC;
    counts_3_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_3_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_4_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_4_ce0          :in   STD_LOGIC;
    counts_4_we0          :in   STD_LOGIC;
    counts_4_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_4_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_5_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_5_ce0          :in   STD_LOGIC;
    counts_5_we0          :in   STD_LOGIC;
    counts_5_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_5_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_6_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_6_ce0          :in   STD_LOGIC;
    counts_6_we0          :in   STD_LOGIC;
    counts_6_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_6_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_7_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_7_ce0          :in   STD_LOGIC;
    counts_7_we0          :in   STD_LOGIC;
    counts_7_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_7_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_8_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_8_ce0          :in   STD_LOGIC;
    counts_8_we0          :in   STD_LOGIC;
    counts_8_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_8_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_9_address0     :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_9_ce0          :in   STD_LOGIC;
    counts_9_we0          :in   STD_LOGIC;
    counts_9_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_9_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_10_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_10_ce0         :in   STD_LOGIC;
    counts_10_we0         :in   STD_LOGIC;
    counts_10_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_10_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_11_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    counts_11_ce0         :in   STD_LOGIC;
    counts_11_we0         :in   STD_LOGIC;
    counts_11_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_11_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    outputs_0_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_0_ce0         :in   STD_LOGIC;
    outputs_0_we0         :in   STD_LOGIC;
    outputs_0_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_1_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_1_ce0         :in   STD_LOGIC;
    outputs_1_we0         :in   STD_LOGIC;
    outputs_1_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_2_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_2_ce0         :in   STD_LOGIC;
    outputs_2_we0         :in   STD_LOGIC;
    outputs_2_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_3_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_3_ce0         :in   STD_LOGIC;
    outputs_3_we0         :in   STD_LOGIC;
    outputs_3_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_4_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_4_ce0         :in   STD_LOGIC;
    outputs_4_we0         :in   STD_LOGIC;
    outputs_4_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_5_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_5_ce0         :in   STD_LOGIC;
    outputs_5_we0         :in   STD_LOGIC;
    outputs_5_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_6_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_6_ce0         :in   STD_LOGIC;
    outputs_6_we0         :in   STD_LOGIC;
    outputs_6_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_7_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_7_ce0         :in   STD_LOGIC;
    outputs_7_we0         :in   STD_LOGIC;
    outputs_7_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_8_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_8_ce0         :in   STD_LOGIC;
    outputs_8_we0         :in   STD_LOGIC;
    outputs_8_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_9_address0    :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_9_ce0         :in   STD_LOGIC;
    outputs_9_we0         :in   STD_LOGIC;
    outputs_9_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_10_address0   :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_10_ce0        :in   STD_LOGIC;
    outputs_10_we0        :in   STD_LOGIC;
    outputs_10_d0         :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_11_address0   :in   STD_LOGIC_VECTOR(0 downto 0);
    outputs_11_ce0        :in   STD_LOGIC;
    outputs_11_we0        :in   STD_LOGIC;
    outputs_11_d0         :in   STD_LOGIC_VECTOR(31 downto 0)
);
end entity estimate_FR_2_AXILiteS_s_axi;

-- ------------------------Address Info-------------------
-- 0x000 : Control signals
--         bit 0  - ap_start (Read/Write/COH)
--         bit 1  - ap_done (Read/COR)
--         bit 2  - ap_idle (Read)
--         bit 3  - ap_ready (Read)
--         bit 7  - auto_restart (Read/Write)
--         others - reserved
-- 0x004 : Global Interrupt Enable Register
--         bit 0  - Global Interrupt Enable (Read/Write)
--         others - reserved
-- 0x008 : IP Interrupt Enable Register (Read/Write)
--         bit 0  - Channel 0 (ap_done)
--         bit 1  - Channel 1 (ap_ready)
--         others - reserved
-- 0x00c : IP Interrupt Status Register (Read/TOW)
--         bit 0  - Channel 0 (ap_done)
--         bit 1  - Channel 1 (ap_ready)
--         others - reserved
-- 0x020 ~
-- 0x03f : Memory 'inputs_0' (8 * 32b)
--         Word n : bit [31:0] - inputs_0[n]
-- 0x040 ~
-- 0x05f : Memory 'inputs_1' (8 * 32b)
--         Word n : bit [31:0] - inputs_1[n]
-- 0x060 ~
-- 0x07f : Memory 'inputs_2' (8 * 32b)
--         Word n : bit [31:0] - inputs_2[n]
-- 0x080 ~
-- 0x09f : Memory 'inputs_3' (8 * 32b)
--         Word n : bit [31:0] - inputs_3[n]
-- 0x0a0 ~
-- 0x0bf : Memory 'inputs_4' (8 * 32b)
--         Word n : bit [31:0] - inputs_4[n]
-- 0x0c0 ~
-- 0x0df : Memory 'inputs_5' (8 * 32b)
--         Word n : bit [31:0] - inputs_5[n]
-- 0x0e0 ~
-- 0x0ff : Memory 'inputs_6' (8 * 32b)
--         Word n : bit [31:0] - inputs_6[n]
-- 0x100 ~
-- 0x11f : Memory 'inputs_7' (8 * 32b)
--         Word n : bit [31:0] - inputs_7[n]
-- 0x120 ~
-- 0x13f : Memory 'inputs_8' (8 * 32b)
--         Word n : bit [31:0] - inputs_8[n]
-- 0x140 ~
-- 0x15f : Memory 'inputs_9' (8 * 32b)
--         Word n : bit [31:0] - inputs_9[n]
-- 0x160 ~
-- 0x17f : Memory 'inputs_10' (8 * 32b)
--         Word n : bit [31:0] - inputs_10[n]
-- 0x180 ~
-- 0x19f : Memory 'inputs_11' (8 * 32b)
--         Word n : bit [31:0] - inputs_11[n]
-- 0x1a0 ~
-- 0x1a7 : Memory 'counts_0' (2 * 32b)
--         Word n : bit [31:0] - counts_0[n]
-- 0x1a8 ~
-- 0x1af : Memory 'counts_1' (2 * 32b)
--         Word n : bit [31:0] - counts_1[n]
-- 0x1b0 ~
-- 0x1b7 : Memory 'counts_2' (2 * 32b)
--         Word n : bit [31:0] - counts_2[n]
-- 0x1b8 ~
-- 0x1bf : Memory 'counts_3' (2 * 32b)
--         Word n : bit [31:0] - counts_3[n]
-- 0x1c0 ~
-- 0x1c7 : Memory 'counts_4' (2 * 32b)
--         Word n : bit [31:0] - counts_4[n]
-- 0x1c8 ~
-- 0x1cf : Memory 'counts_5' (2 * 32b)
--         Word n : bit [31:0] - counts_5[n]
-- 0x1d0 ~
-- 0x1d7 : Memory 'counts_6' (2 * 32b)
--         Word n : bit [31:0] - counts_6[n]
-- 0x1d8 ~
-- 0x1df : Memory 'counts_7' (2 * 32b)
--         Word n : bit [31:0] - counts_7[n]
-- 0x1e0 ~
-- 0x1e7 : Memory 'counts_8' (2 * 32b)
--         Word n : bit [31:0] - counts_8[n]
-- 0x1e8 ~
-- 0x1ef : Memory 'counts_9' (2 * 32b)
--         Word n : bit [31:0] - counts_9[n]
-- 0x1f0 ~
-- 0x1f7 : Memory 'counts_10' (2 * 32b)
--         Word n : bit [31:0] - counts_10[n]
-- 0x1f8 ~
-- 0x1ff : Memory 'counts_11' (2 * 32b)
--         Word n : bit [31:0] - counts_11[n]
-- 0x200 ~
-- 0x207 : Memory 'outputs_0' (2 * 32b)
--         Word n : bit [31:0] - outputs_0[n]
-- 0x208 ~
-- 0x20f : Memory 'outputs_1' (2 * 32b)
--         Word n : bit [31:0] - outputs_1[n]
-- 0x210 ~
-- 0x217 : Memory 'outputs_2' (2 * 32b)
--         Word n : bit [31:0] - outputs_2[n]
-- 0x218 ~
-- 0x21f : Memory 'outputs_3' (2 * 32b)
--         Word n : bit [31:0] - outputs_3[n]
-- 0x220 ~
-- 0x227 : Memory 'outputs_4' (2 * 32b)
--         Word n : bit [31:0] - outputs_4[n]
-- 0x228 ~
-- 0x22f : Memory 'outputs_5' (2 * 32b)
--         Word n : bit [31:0] - outputs_5[n]
-- 0x230 ~
-- 0x237 : Memory 'outputs_6' (2 * 32b)
--         Word n : bit [31:0] - outputs_6[n]
-- 0x238 ~
-- 0x23f : Memory 'outputs_7' (2 * 32b)
--         Word n : bit [31:0] - outputs_7[n]
-- 0x240 ~
-- 0x247 : Memory 'outputs_8' (2 * 32b)
--         Word n : bit [31:0] - outputs_8[n]
-- 0x248 ~
-- 0x24f : Memory 'outputs_9' (2 * 32b)
--         Word n : bit [31:0] - outputs_9[n]
-- 0x250 ~
-- 0x257 : Memory 'outputs_10' (2 * 32b)
--         Word n : bit [31:0] - outputs_10[n]
-- 0x258 ~
-- 0x25f : Memory 'outputs_11' (2 * 32b)
--         Word n : bit [31:0] - outputs_11[n]
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of estimate_FR_2_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL         : INTEGER := 16#000#;
    constant ADDR_GIE             : INTEGER := 16#004#;
    constant ADDR_IER             : INTEGER := 16#008#;
    constant ADDR_ISR             : INTEGER := 16#00c#;
    constant ADDR_INPUTS_0_BASE   : INTEGER := 16#020#;
    constant ADDR_INPUTS_0_HIGH   : INTEGER := 16#03f#;
    constant ADDR_INPUTS_1_BASE   : INTEGER := 16#040#;
    constant ADDR_INPUTS_1_HIGH   : INTEGER := 16#05f#;
    constant ADDR_INPUTS_2_BASE   : INTEGER := 16#060#;
    constant ADDR_INPUTS_2_HIGH   : INTEGER := 16#07f#;
    constant ADDR_INPUTS_3_BASE   : INTEGER := 16#080#;
    constant ADDR_INPUTS_3_HIGH   : INTEGER := 16#09f#;
    constant ADDR_INPUTS_4_BASE   : INTEGER := 16#0a0#;
    constant ADDR_INPUTS_4_HIGH   : INTEGER := 16#0bf#;
    constant ADDR_INPUTS_5_BASE   : INTEGER := 16#0c0#;
    constant ADDR_INPUTS_5_HIGH   : INTEGER := 16#0df#;
    constant ADDR_INPUTS_6_BASE   : INTEGER := 16#0e0#;
    constant ADDR_INPUTS_6_HIGH   : INTEGER := 16#0ff#;
    constant ADDR_INPUTS_7_BASE   : INTEGER := 16#100#;
    constant ADDR_INPUTS_7_HIGH   : INTEGER := 16#11f#;
    constant ADDR_INPUTS_8_BASE   : INTEGER := 16#120#;
    constant ADDR_INPUTS_8_HIGH   : INTEGER := 16#13f#;
    constant ADDR_INPUTS_9_BASE   : INTEGER := 16#140#;
    constant ADDR_INPUTS_9_HIGH   : INTEGER := 16#15f#;
    constant ADDR_INPUTS_10_BASE  : INTEGER := 16#160#;
    constant ADDR_INPUTS_10_HIGH  : INTEGER := 16#17f#;
    constant ADDR_INPUTS_11_BASE  : INTEGER := 16#180#;
    constant ADDR_INPUTS_11_HIGH  : INTEGER := 16#19f#;
    constant ADDR_COUNTS_0_BASE   : INTEGER := 16#1a0#;
    constant ADDR_COUNTS_0_HIGH   : INTEGER := 16#1a7#;
    constant ADDR_COUNTS_1_BASE   : INTEGER := 16#1a8#;
    constant ADDR_COUNTS_1_HIGH   : INTEGER := 16#1af#;
    constant ADDR_COUNTS_2_BASE   : INTEGER := 16#1b0#;
    constant ADDR_COUNTS_2_HIGH   : INTEGER := 16#1b7#;
    constant ADDR_COUNTS_3_BASE   : INTEGER := 16#1b8#;
    constant ADDR_COUNTS_3_HIGH   : INTEGER := 16#1bf#;
    constant ADDR_COUNTS_4_BASE   : INTEGER := 16#1c0#;
    constant ADDR_COUNTS_4_HIGH   : INTEGER := 16#1c7#;
    constant ADDR_COUNTS_5_BASE   : INTEGER := 16#1c8#;
    constant ADDR_COUNTS_5_HIGH   : INTEGER := 16#1cf#;
    constant ADDR_COUNTS_6_BASE   : INTEGER := 16#1d0#;
    constant ADDR_COUNTS_6_HIGH   : INTEGER := 16#1d7#;
    constant ADDR_COUNTS_7_BASE   : INTEGER := 16#1d8#;
    constant ADDR_COUNTS_7_HIGH   : INTEGER := 16#1df#;
    constant ADDR_COUNTS_8_BASE   : INTEGER := 16#1e0#;
    constant ADDR_COUNTS_8_HIGH   : INTEGER := 16#1e7#;
    constant ADDR_COUNTS_9_BASE   : INTEGER := 16#1e8#;
    constant ADDR_COUNTS_9_HIGH   : INTEGER := 16#1ef#;
    constant ADDR_COUNTS_10_BASE  : INTEGER := 16#1f0#;
    constant ADDR_COUNTS_10_HIGH  : INTEGER := 16#1f7#;
    constant ADDR_COUNTS_11_BASE  : INTEGER := 16#1f8#;
    constant ADDR_COUNTS_11_HIGH  : INTEGER := 16#1ff#;
    constant ADDR_OUTPUTS_0_BASE  : INTEGER := 16#200#;
    constant ADDR_OUTPUTS_0_HIGH  : INTEGER := 16#207#;
    constant ADDR_OUTPUTS_1_BASE  : INTEGER := 16#208#;
    constant ADDR_OUTPUTS_1_HIGH  : INTEGER := 16#20f#;
    constant ADDR_OUTPUTS_2_BASE  : INTEGER := 16#210#;
    constant ADDR_OUTPUTS_2_HIGH  : INTEGER := 16#217#;
    constant ADDR_OUTPUTS_3_BASE  : INTEGER := 16#218#;
    constant ADDR_OUTPUTS_3_HIGH  : INTEGER := 16#21f#;
    constant ADDR_OUTPUTS_4_BASE  : INTEGER := 16#220#;
    constant ADDR_OUTPUTS_4_HIGH  : INTEGER := 16#227#;
    constant ADDR_OUTPUTS_5_BASE  : INTEGER := 16#228#;
    constant ADDR_OUTPUTS_5_HIGH  : INTEGER := 16#22f#;
    constant ADDR_OUTPUTS_6_BASE  : INTEGER := 16#230#;
    constant ADDR_OUTPUTS_6_HIGH  : INTEGER := 16#237#;
    constant ADDR_OUTPUTS_7_BASE  : INTEGER := 16#238#;
    constant ADDR_OUTPUTS_7_HIGH  : INTEGER := 16#23f#;
    constant ADDR_OUTPUTS_8_BASE  : INTEGER := 16#240#;
    constant ADDR_OUTPUTS_8_HIGH  : INTEGER := 16#247#;
    constant ADDR_OUTPUTS_9_BASE  : INTEGER := 16#248#;
    constant ADDR_OUTPUTS_9_HIGH  : INTEGER := 16#24f#;
    constant ADDR_OUTPUTS_10_BASE : INTEGER := 16#250#;
    constant ADDR_OUTPUTS_10_HIGH : INTEGER := 16#257#;
    constant ADDR_OUTPUTS_11_BASE : INTEGER := 16#258#;
    constant ADDR_OUTPUTS_11_HIGH : INTEGER := 16#25f#;
    constant ADDR_BITS         : INTEGER := 10;

    signal waddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal wmask               : UNSIGNED(31 downto 0);
    signal aw_hs               : STD_LOGIC;
    signal w_hs                : STD_LOGIC;
    signal rdata_data          : UNSIGNED(31 downto 0);
    signal ar_hs               : STD_LOGIC;
    signal raddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal AWREADY_t           : STD_LOGIC;
    signal WREADY_t            : STD_LOGIC;
    signal ARREADY_t           : STD_LOGIC;
    signal RVALID_t            : STD_LOGIC;
    -- internal registers
    signal int_ap_idle         : STD_LOGIC;
    signal int_ap_ready        : STD_LOGIC;
    signal int_ap_done         : STD_LOGIC := '0';
    signal int_ap_start        : STD_LOGIC := '0';
    signal int_auto_restart    : STD_LOGIC := '0';
    signal int_gie             : STD_LOGIC := '0';
    signal int_ier             : UNSIGNED(1 downto 0) := (others => '0');
    signal int_isr             : UNSIGNED(1 downto 0) := (others => '0');
    -- memory signals
    signal int_inputs_0_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_0_ce0    : STD_LOGIC;
    signal int_inputs_0_we0    : STD_LOGIC;
    signal int_inputs_0_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_0_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_0_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_0_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_0_ce1    : STD_LOGIC;
    signal int_inputs_0_we1    : STD_LOGIC;
    signal int_inputs_0_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_0_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_0_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_0_read   : STD_LOGIC;
    signal int_inputs_0_write  : STD_LOGIC;
    signal int_inputs_1_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_1_ce0    : STD_LOGIC;
    signal int_inputs_1_we0    : STD_LOGIC;
    signal int_inputs_1_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_1_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_1_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_1_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_1_ce1    : STD_LOGIC;
    signal int_inputs_1_we1    : STD_LOGIC;
    signal int_inputs_1_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_1_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_1_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_1_read   : STD_LOGIC;
    signal int_inputs_1_write  : STD_LOGIC;
    signal int_inputs_2_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_2_ce0    : STD_LOGIC;
    signal int_inputs_2_we0    : STD_LOGIC;
    signal int_inputs_2_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_2_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_2_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_2_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_2_ce1    : STD_LOGIC;
    signal int_inputs_2_we1    : STD_LOGIC;
    signal int_inputs_2_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_2_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_2_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_2_read   : STD_LOGIC;
    signal int_inputs_2_write  : STD_LOGIC;
    signal int_inputs_3_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_3_ce0    : STD_LOGIC;
    signal int_inputs_3_we0    : STD_LOGIC;
    signal int_inputs_3_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_3_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_3_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_3_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_3_ce1    : STD_LOGIC;
    signal int_inputs_3_we1    : STD_LOGIC;
    signal int_inputs_3_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_3_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_3_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_3_read   : STD_LOGIC;
    signal int_inputs_3_write  : STD_LOGIC;
    signal int_inputs_4_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_4_ce0    : STD_LOGIC;
    signal int_inputs_4_we0    : STD_LOGIC;
    signal int_inputs_4_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_4_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_4_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_4_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_4_ce1    : STD_LOGIC;
    signal int_inputs_4_we1    : STD_LOGIC;
    signal int_inputs_4_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_4_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_4_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_4_read   : STD_LOGIC;
    signal int_inputs_4_write  : STD_LOGIC;
    signal int_inputs_5_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_5_ce0    : STD_LOGIC;
    signal int_inputs_5_we0    : STD_LOGIC;
    signal int_inputs_5_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_5_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_5_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_5_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_5_ce1    : STD_LOGIC;
    signal int_inputs_5_we1    : STD_LOGIC;
    signal int_inputs_5_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_5_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_5_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_5_read   : STD_LOGIC;
    signal int_inputs_5_write  : STD_LOGIC;
    signal int_inputs_6_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_6_ce0    : STD_LOGIC;
    signal int_inputs_6_we0    : STD_LOGIC;
    signal int_inputs_6_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_6_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_6_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_6_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_6_ce1    : STD_LOGIC;
    signal int_inputs_6_we1    : STD_LOGIC;
    signal int_inputs_6_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_6_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_6_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_6_read   : STD_LOGIC;
    signal int_inputs_6_write  : STD_LOGIC;
    signal int_inputs_7_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_7_ce0    : STD_LOGIC;
    signal int_inputs_7_we0    : STD_LOGIC;
    signal int_inputs_7_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_7_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_7_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_7_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_7_ce1    : STD_LOGIC;
    signal int_inputs_7_we1    : STD_LOGIC;
    signal int_inputs_7_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_7_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_7_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_7_read   : STD_LOGIC;
    signal int_inputs_7_write  : STD_LOGIC;
    signal int_inputs_8_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_8_ce0    : STD_LOGIC;
    signal int_inputs_8_we0    : STD_LOGIC;
    signal int_inputs_8_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_8_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_8_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_8_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_8_ce1    : STD_LOGIC;
    signal int_inputs_8_we1    : STD_LOGIC;
    signal int_inputs_8_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_8_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_8_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_8_read   : STD_LOGIC;
    signal int_inputs_8_write  : STD_LOGIC;
    signal int_inputs_9_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_9_ce0    : STD_LOGIC;
    signal int_inputs_9_we0    : STD_LOGIC;
    signal int_inputs_9_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_9_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_9_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_9_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_9_ce1    : STD_LOGIC;
    signal int_inputs_9_we1    : STD_LOGIC;
    signal int_inputs_9_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_9_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_9_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_9_read   : STD_LOGIC;
    signal int_inputs_9_write  : STD_LOGIC;
    signal int_inputs_10_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_10_ce0   : STD_LOGIC;
    signal int_inputs_10_we0   : STD_LOGIC;
    signal int_inputs_10_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_10_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_10_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_10_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_10_ce1   : STD_LOGIC;
    signal int_inputs_10_we1   : STD_LOGIC;
    signal int_inputs_10_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_10_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_10_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_10_read  : STD_LOGIC;
    signal int_inputs_10_write : STD_LOGIC;
    signal int_inputs_11_address0 : UNSIGNED(2 downto 0);
    signal int_inputs_11_ce0   : STD_LOGIC;
    signal int_inputs_11_we0   : STD_LOGIC;
    signal int_inputs_11_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_11_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_11_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_11_address1 : UNSIGNED(2 downto 0);
    signal int_inputs_11_ce1   : STD_LOGIC;
    signal int_inputs_11_we1   : STD_LOGIC;
    signal int_inputs_11_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_11_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_11_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_11_read  : STD_LOGIC;
    signal int_inputs_11_write : STD_LOGIC;
    signal int_counts_0_address0 : UNSIGNED(0 downto 0);
    signal int_counts_0_ce0    : STD_LOGIC;
    signal int_counts_0_we0    : STD_LOGIC;
    signal int_counts_0_be0    : UNSIGNED(3 downto 0);
    signal int_counts_0_d0     : UNSIGNED(31 downto 0);
    signal int_counts_0_q0     : UNSIGNED(31 downto 0);
    signal int_counts_0_address1 : UNSIGNED(0 downto 0);
    signal int_counts_0_ce1    : STD_LOGIC;
    signal int_counts_0_we1    : STD_LOGIC;
    signal int_counts_0_be1    : UNSIGNED(3 downto 0);
    signal int_counts_0_d1     : UNSIGNED(31 downto 0);
    signal int_counts_0_q1     : UNSIGNED(31 downto 0);
    signal int_counts_0_read   : STD_LOGIC;
    signal int_counts_0_write  : STD_LOGIC;
    signal int_counts_1_address0 : UNSIGNED(0 downto 0);
    signal int_counts_1_ce0    : STD_LOGIC;
    signal int_counts_1_we0    : STD_LOGIC;
    signal int_counts_1_be0    : UNSIGNED(3 downto 0);
    signal int_counts_1_d0     : UNSIGNED(31 downto 0);
    signal int_counts_1_q0     : UNSIGNED(31 downto 0);
    signal int_counts_1_address1 : UNSIGNED(0 downto 0);
    signal int_counts_1_ce1    : STD_LOGIC;
    signal int_counts_1_we1    : STD_LOGIC;
    signal int_counts_1_be1    : UNSIGNED(3 downto 0);
    signal int_counts_1_d1     : UNSIGNED(31 downto 0);
    signal int_counts_1_q1     : UNSIGNED(31 downto 0);
    signal int_counts_1_read   : STD_LOGIC;
    signal int_counts_1_write  : STD_LOGIC;
    signal int_counts_2_address0 : UNSIGNED(0 downto 0);
    signal int_counts_2_ce0    : STD_LOGIC;
    signal int_counts_2_we0    : STD_LOGIC;
    signal int_counts_2_be0    : UNSIGNED(3 downto 0);
    signal int_counts_2_d0     : UNSIGNED(31 downto 0);
    signal int_counts_2_q0     : UNSIGNED(31 downto 0);
    signal int_counts_2_address1 : UNSIGNED(0 downto 0);
    signal int_counts_2_ce1    : STD_LOGIC;
    signal int_counts_2_we1    : STD_LOGIC;
    signal int_counts_2_be1    : UNSIGNED(3 downto 0);
    signal int_counts_2_d1     : UNSIGNED(31 downto 0);
    signal int_counts_2_q1     : UNSIGNED(31 downto 0);
    signal int_counts_2_read   : STD_LOGIC;
    signal int_counts_2_write  : STD_LOGIC;
    signal int_counts_3_address0 : UNSIGNED(0 downto 0);
    signal int_counts_3_ce0    : STD_LOGIC;
    signal int_counts_3_we0    : STD_LOGIC;
    signal int_counts_3_be0    : UNSIGNED(3 downto 0);
    signal int_counts_3_d0     : UNSIGNED(31 downto 0);
    signal int_counts_3_q0     : UNSIGNED(31 downto 0);
    signal int_counts_3_address1 : UNSIGNED(0 downto 0);
    signal int_counts_3_ce1    : STD_LOGIC;
    signal int_counts_3_we1    : STD_LOGIC;
    signal int_counts_3_be1    : UNSIGNED(3 downto 0);
    signal int_counts_3_d1     : UNSIGNED(31 downto 0);
    signal int_counts_3_q1     : UNSIGNED(31 downto 0);
    signal int_counts_3_read   : STD_LOGIC;
    signal int_counts_3_write  : STD_LOGIC;
    signal int_counts_4_address0 : UNSIGNED(0 downto 0);
    signal int_counts_4_ce0    : STD_LOGIC;
    signal int_counts_4_we0    : STD_LOGIC;
    signal int_counts_4_be0    : UNSIGNED(3 downto 0);
    signal int_counts_4_d0     : UNSIGNED(31 downto 0);
    signal int_counts_4_q0     : UNSIGNED(31 downto 0);
    signal int_counts_4_address1 : UNSIGNED(0 downto 0);
    signal int_counts_4_ce1    : STD_LOGIC;
    signal int_counts_4_we1    : STD_LOGIC;
    signal int_counts_4_be1    : UNSIGNED(3 downto 0);
    signal int_counts_4_d1     : UNSIGNED(31 downto 0);
    signal int_counts_4_q1     : UNSIGNED(31 downto 0);
    signal int_counts_4_read   : STD_LOGIC;
    signal int_counts_4_write  : STD_LOGIC;
    signal int_counts_5_address0 : UNSIGNED(0 downto 0);
    signal int_counts_5_ce0    : STD_LOGIC;
    signal int_counts_5_we0    : STD_LOGIC;
    signal int_counts_5_be0    : UNSIGNED(3 downto 0);
    signal int_counts_5_d0     : UNSIGNED(31 downto 0);
    signal int_counts_5_q0     : UNSIGNED(31 downto 0);
    signal int_counts_5_address1 : UNSIGNED(0 downto 0);
    signal int_counts_5_ce1    : STD_LOGIC;
    signal int_counts_5_we1    : STD_LOGIC;
    signal int_counts_5_be1    : UNSIGNED(3 downto 0);
    signal int_counts_5_d1     : UNSIGNED(31 downto 0);
    signal int_counts_5_q1     : UNSIGNED(31 downto 0);
    signal int_counts_5_read   : STD_LOGIC;
    signal int_counts_5_write  : STD_LOGIC;
    signal int_counts_6_address0 : UNSIGNED(0 downto 0);
    signal int_counts_6_ce0    : STD_LOGIC;
    signal int_counts_6_we0    : STD_LOGIC;
    signal int_counts_6_be0    : UNSIGNED(3 downto 0);
    signal int_counts_6_d0     : UNSIGNED(31 downto 0);
    signal int_counts_6_q0     : UNSIGNED(31 downto 0);
    signal int_counts_6_address1 : UNSIGNED(0 downto 0);
    signal int_counts_6_ce1    : STD_LOGIC;
    signal int_counts_6_we1    : STD_LOGIC;
    signal int_counts_6_be1    : UNSIGNED(3 downto 0);
    signal int_counts_6_d1     : UNSIGNED(31 downto 0);
    signal int_counts_6_q1     : UNSIGNED(31 downto 0);
    signal int_counts_6_read   : STD_LOGIC;
    signal int_counts_6_write  : STD_LOGIC;
    signal int_counts_7_address0 : UNSIGNED(0 downto 0);
    signal int_counts_7_ce0    : STD_LOGIC;
    signal int_counts_7_we0    : STD_LOGIC;
    signal int_counts_7_be0    : UNSIGNED(3 downto 0);
    signal int_counts_7_d0     : UNSIGNED(31 downto 0);
    signal int_counts_7_q0     : UNSIGNED(31 downto 0);
    signal int_counts_7_address1 : UNSIGNED(0 downto 0);
    signal int_counts_7_ce1    : STD_LOGIC;
    signal int_counts_7_we1    : STD_LOGIC;
    signal int_counts_7_be1    : UNSIGNED(3 downto 0);
    signal int_counts_7_d1     : UNSIGNED(31 downto 0);
    signal int_counts_7_q1     : UNSIGNED(31 downto 0);
    signal int_counts_7_read   : STD_LOGIC;
    signal int_counts_7_write  : STD_LOGIC;
    signal int_counts_8_address0 : UNSIGNED(0 downto 0);
    signal int_counts_8_ce0    : STD_LOGIC;
    signal int_counts_8_we0    : STD_LOGIC;
    signal int_counts_8_be0    : UNSIGNED(3 downto 0);
    signal int_counts_8_d0     : UNSIGNED(31 downto 0);
    signal int_counts_8_q0     : UNSIGNED(31 downto 0);
    signal int_counts_8_address1 : UNSIGNED(0 downto 0);
    signal int_counts_8_ce1    : STD_LOGIC;
    signal int_counts_8_we1    : STD_LOGIC;
    signal int_counts_8_be1    : UNSIGNED(3 downto 0);
    signal int_counts_8_d1     : UNSIGNED(31 downto 0);
    signal int_counts_8_q1     : UNSIGNED(31 downto 0);
    signal int_counts_8_read   : STD_LOGIC;
    signal int_counts_8_write  : STD_LOGIC;
    signal int_counts_9_address0 : UNSIGNED(0 downto 0);
    signal int_counts_9_ce0    : STD_LOGIC;
    signal int_counts_9_we0    : STD_LOGIC;
    signal int_counts_9_be0    : UNSIGNED(3 downto 0);
    signal int_counts_9_d0     : UNSIGNED(31 downto 0);
    signal int_counts_9_q0     : UNSIGNED(31 downto 0);
    signal int_counts_9_address1 : UNSIGNED(0 downto 0);
    signal int_counts_9_ce1    : STD_LOGIC;
    signal int_counts_9_we1    : STD_LOGIC;
    signal int_counts_9_be1    : UNSIGNED(3 downto 0);
    signal int_counts_9_d1     : UNSIGNED(31 downto 0);
    signal int_counts_9_q1     : UNSIGNED(31 downto 0);
    signal int_counts_9_read   : STD_LOGIC;
    signal int_counts_9_write  : STD_LOGIC;
    signal int_counts_10_address0 : UNSIGNED(0 downto 0);
    signal int_counts_10_ce0   : STD_LOGIC;
    signal int_counts_10_we0   : STD_LOGIC;
    signal int_counts_10_be0   : UNSIGNED(3 downto 0);
    signal int_counts_10_d0    : UNSIGNED(31 downto 0);
    signal int_counts_10_q0    : UNSIGNED(31 downto 0);
    signal int_counts_10_address1 : UNSIGNED(0 downto 0);
    signal int_counts_10_ce1   : STD_LOGIC;
    signal int_counts_10_we1   : STD_LOGIC;
    signal int_counts_10_be1   : UNSIGNED(3 downto 0);
    signal int_counts_10_d1    : UNSIGNED(31 downto 0);
    signal int_counts_10_q1    : UNSIGNED(31 downto 0);
    signal int_counts_10_read  : STD_LOGIC;
    signal int_counts_10_write : STD_LOGIC;
    signal int_counts_11_address0 : UNSIGNED(0 downto 0);
    signal int_counts_11_ce0   : STD_LOGIC;
    signal int_counts_11_we0   : STD_LOGIC;
    signal int_counts_11_be0   : UNSIGNED(3 downto 0);
    signal int_counts_11_d0    : UNSIGNED(31 downto 0);
    signal int_counts_11_q0    : UNSIGNED(31 downto 0);
    signal int_counts_11_address1 : UNSIGNED(0 downto 0);
    signal int_counts_11_ce1   : STD_LOGIC;
    signal int_counts_11_we1   : STD_LOGIC;
    signal int_counts_11_be1   : UNSIGNED(3 downto 0);
    signal int_counts_11_d1    : UNSIGNED(31 downto 0);
    signal int_counts_11_q1    : UNSIGNED(31 downto 0);
    signal int_counts_11_read  : STD_LOGIC;
    signal int_counts_11_write : STD_LOGIC;
    signal int_outputs_0_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_0_ce0   : STD_LOGIC;
    signal int_outputs_0_we0   : STD_LOGIC;
    signal int_outputs_0_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_0_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_0_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_0_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_0_ce1   : STD_LOGIC;
    signal int_outputs_0_we1   : STD_LOGIC;
    signal int_outputs_0_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_0_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_0_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_0_read  : STD_LOGIC;
    signal int_outputs_0_write : STD_LOGIC;
    signal int_outputs_1_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_1_ce0   : STD_LOGIC;
    signal int_outputs_1_we0   : STD_LOGIC;
    signal int_outputs_1_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_1_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_1_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_1_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_1_ce1   : STD_LOGIC;
    signal int_outputs_1_we1   : STD_LOGIC;
    signal int_outputs_1_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_1_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_1_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_1_read  : STD_LOGIC;
    signal int_outputs_1_write : STD_LOGIC;
    signal int_outputs_2_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_2_ce0   : STD_LOGIC;
    signal int_outputs_2_we0   : STD_LOGIC;
    signal int_outputs_2_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_2_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_2_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_2_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_2_ce1   : STD_LOGIC;
    signal int_outputs_2_we1   : STD_LOGIC;
    signal int_outputs_2_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_2_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_2_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_2_read  : STD_LOGIC;
    signal int_outputs_2_write : STD_LOGIC;
    signal int_outputs_3_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_3_ce0   : STD_LOGIC;
    signal int_outputs_3_we0   : STD_LOGIC;
    signal int_outputs_3_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_3_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_3_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_3_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_3_ce1   : STD_LOGIC;
    signal int_outputs_3_we1   : STD_LOGIC;
    signal int_outputs_3_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_3_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_3_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_3_read  : STD_LOGIC;
    signal int_outputs_3_write : STD_LOGIC;
    signal int_outputs_4_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_4_ce0   : STD_LOGIC;
    signal int_outputs_4_we0   : STD_LOGIC;
    signal int_outputs_4_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_4_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_4_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_4_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_4_ce1   : STD_LOGIC;
    signal int_outputs_4_we1   : STD_LOGIC;
    signal int_outputs_4_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_4_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_4_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_4_read  : STD_LOGIC;
    signal int_outputs_4_write : STD_LOGIC;
    signal int_outputs_5_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_5_ce0   : STD_LOGIC;
    signal int_outputs_5_we0   : STD_LOGIC;
    signal int_outputs_5_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_5_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_5_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_5_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_5_ce1   : STD_LOGIC;
    signal int_outputs_5_we1   : STD_LOGIC;
    signal int_outputs_5_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_5_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_5_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_5_read  : STD_LOGIC;
    signal int_outputs_5_write : STD_LOGIC;
    signal int_outputs_6_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_6_ce0   : STD_LOGIC;
    signal int_outputs_6_we0   : STD_LOGIC;
    signal int_outputs_6_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_6_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_6_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_6_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_6_ce1   : STD_LOGIC;
    signal int_outputs_6_we1   : STD_LOGIC;
    signal int_outputs_6_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_6_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_6_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_6_read  : STD_LOGIC;
    signal int_outputs_6_write : STD_LOGIC;
    signal int_outputs_7_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_7_ce0   : STD_LOGIC;
    signal int_outputs_7_we0   : STD_LOGIC;
    signal int_outputs_7_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_7_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_7_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_7_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_7_ce1   : STD_LOGIC;
    signal int_outputs_7_we1   : STD_LOGIC;
    signal int_outputs_7_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_7_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_7_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_7_read  : STD_LOGIC;
    signal int_outputs_7_write : STD_LOGIC;
    signal int_outputs_8_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_8_ce0   : STD_LOGIC;
    signal int_outputs_8_we0   : STD_LOGIC;
    signal int_outputs_8_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_8_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_8_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_8_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_8_ce1   : STD_LOGIC;
    signal int_outputs_8_we1   : STD_LOGIC;
    signal int_outputs_8_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_8_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_8_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_8_read  : STD_LOGIC;
    signal int_outputs_8_write : STD_LOGIC;
    signal int_outputs_9_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_9_ce0   : STD_LOGIC;
    signal int_outputs_9_we0   : STD_LOGIC;
    signal int_outputs_9_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_9_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_9_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_9_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_9_ce1   : STD_LOGIC;
    signal int_outputs_9_we1   : STD_LOGIC;
    signal int_outputs_9_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_9_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_9_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_9_read  : STD_LOGIC;
    signal int_outputs_9_write : STD_LOGIC;
    signal int_outputs_10_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_10_ce0  : STD_LOGIC;
    signal int_outputs_10_we0  : STD_LOGIC;
    signal int_outputs_10_be0  : UNSIGNED(3 downto 0);
    signal int_outputs_10_d0   : UNSIGNED(31 downto 0);
    signal int_outputs_10_q0   : UNSIGNED(31 downto 0);
    signal int_outputs_10_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_10_ce1  : STD_LOGIC;
    signal int_outputs_10_we1  : STD_LOGIC;
    signal int_outputs_10_be1  : UNSIGNED(3 downto 0);
    signal int_outputs_10_d1   : UNSIGNED(31 downto 0);
    signal int_outputs_10_q1   : UNSIGNED(31 downto 0);
    signal int_outputs_10_read : STD_LOGIC;
    signal int_outputs_10_write : STD_LOGIC;
    signal int_outputs_11_address0 : UNSIGNED(0 downto 0);
    signal int_outputs_11_ce0  : STD_LOGIC;
    signal int_outputs_11_we0  : STD_LOGIC;
    signal int_outputs_11_be0  : UNSIGNED(3 downto 0);
    signal int_outputs_11_d0   : UNSIGNED(31 downto 0);
    signal int_outputs_11_q0   : UNSIGNED(31 downto 0);
    signal int_outputs_11_address1 : UNSIGNED(0 downto 0);
    signal int_outputs_11_ce1  : STD_LOGIC;
    signal int_outputs_11_we1  : STD_LOGIC;
    signal int_outputs_11_be1  : UNSIGNED(3 downto 0);
    signal int_outputs_11_d1   : UNSIGNED(31 downto 0);
    signal int_outputs_11_q1   : UNSIGNED(31 downto 0);
    signal int_outputs_11_read : STD_LOGIC;
    signal int_outputs_11_write : STD_LOGIC;

    component estimate_FR_2_AXILiteS_s_axi_ram is
        generic (
            BYTES   : INTEGER :=4;
            DEPTH   : INTEGER :=256;
            AWIDTH  : INTEGER :=8);
        port (
            clk0    : in  STD_LOGIC;
            address0: in  UNSIGNED(AWIDTH-1 downto 0);
            ce0     : in  STD_LOGIC;
            we0     : in  STD_LOGIC;
            be0     : in  UNSIGNED(BYTES-1 downto 0);
            d0      : in  UNSIGNED(BYTES*8-1 downto 0);
            q0      : out UNSIGNED(BYTES*8-1 downto 0);
            clk1    : in  STD_LOGIC;
            address1: in  UNSIGNED(AWIDTH-1 downto 0);
            ce1     : in  STD_LOGIC;
            we1     : in  STD_LOGIC;
            be1     : in  UNSIGNED(BYTES-1 downto 0);
            d1      : in  UNSIGNED(BYTES*8-1 downto 0);
            q1      : out UNSIGNED(BYTES*8-1 downto 0));
    end component estimate_FR_2_AXILiteS_s_axi_ram;

    function log2 (x : INTEGER) return INTEGER is
        variable n, m : INTEGER;
    begin
        n := 1;
        m := 2;
        while m < x loop
            n := n + 1;
            m := m * 2;
        end loop;
        return n;
    end function log2;

begin
-- ----------------------- Instantiation------------------
-- int_inputs_0
int_inputs_0 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_0_address0,
     ce0      => int_inputs_0_ce0,
     we0      => int_inputs_0_we0,
     be0      => int_inputs_0_be0,
     d0       => int_inputs_0_d0,
     q0       => int_inputs_0_q0,
     clk1     => ACLK,
     address1 => int_inputs_0_address1,
     ce1      => int_inputs_0_ce1,
     we1      => int_inputs_0_we1,
     be1      => int_inputs_0_be1,
     d1       => int_inputs_0_d1,
     q1       => int_inputs_0_q1);
-- int_inputs_1
int_inputs_1 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_1_address0,
     ce0      => int_inputs_1_ce0,
     we0      => int_inputs_1_we0,
     be0      => int_inputs_1_be0,
     d0       => int_inputs_1_d0,
     q0       => int_inputs_1_q0,
     clk1     => ACLK,
     address1 => int_inputs_1_address1,
     ce1      => int_inputs_1_ce1,
     we1      => int_inputs_1_we1,
     be1      => int_inputs_1_be1,
     d1       => int_inputs_1_d1,
     q1       => int_inputs_1_q1);
-- int_inputs_2
int_inputs_2 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_2_address0,
     ce0      => int_inputs_2_ce0,
     we0      => int_inputs_2_we0,
     be0      => int_inputs_2_be0,
     d0       => int_inputs_2_d0,
     q0       => int_inputs_2_q0,
     clk1     => ACLK,
     address1 => int_inputs_2_address1,
     ce1      => int_inputs_2_ce1,
     we1      => int_inputs_2_we1,
     be1      => int_inputs_2_be1,
     d1       => int_inputs_2_d1,
     q1       => int_inputs_2_q1);
-- int_inputs_3
int_inputs_3 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_3_address0,
     ce0      => int_inputs_3_ce0,
     we0      => int_inputs_3_we0,
     be0      => int_inputs_3_be0,
     d0       => int_inputs_3_d0,
     q0       => int_inputs_3_q0,
     clk1     => ACLK,
     address1 => int_inputs_3_address1,
     ce1      => int_inputs_3_ce1,
     we1      => int_inputs_3_we1,
     be1      => int_inputs_3_be1,
     d1       => int_inputs_3_d1,
     q1       => int_inputs_3_q1);
-- int_inputs_4
int_inputs_4 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_4_address0,
     ce0      => int_inputs_4_ce0,
     we0      => int_inputs_4_we0,
     be0      => int_inputs_4_be0,
     d0       => int_inputs_4_d0,
     q0       => int_inputs_4_q0,
     clk1     => ACLK,
     address1 => int_inputs_4_address1,
     ce1      => int_inputs_4_ce1,
     we1      => int_inputs_4_we1,
     be1      => int_inputs_4_be1,
     d1       => int_inputs_4_d1,
     q1       => int_inputs_4_q1);
-- int_inputs_5
int_inputs_5 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_5_address0,
     ce0      => int_inputs_5_ce0,
     we0      => int_inputs_5_we0,
     be0      => int_inputs_5_be0,
     d0       => int_inputs_5_d0,
     q0       => int_inputs_5_q0,
     clk1     => ACLK,
     address1 => int_inputs_5_address1,
     ce1      => int_inputs_5_ce1,
     we1      => int_inputs_5_we1,
     be1      => int_inputs_5_be1,
     d1       => int_inputs_5_d1,
     q1       => int_inputs_5_q1);
-- int_inputs_6
int_inputs_6 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_6_address0,
     ce0      => int_inputs_6_ce0,
     we0      => int_inputs_6_we0,
     be0      => int_inputs_6_be0,
     d0       => int_inputs_6_d0,
     q0       => int_inputs_6_q0,
     clk1     => ACLK,
     address1 => int_inputs_6_address1,
     ce1      => int_inputs_6_ce1,
     we1      => int_inputs_6_we1,
     be1      => int_inputs_6_be1,
     d1       => int_inputs_6_d1,
     q1       => int_inputs_6_q1);
-- int_inputs_7
int_inputs_7 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_7_address0,
     ce0      => int_inputs_7_ce0,
     we0      => int_inputs_7_we0,
     be0      => int_inputs_7_be0,
     d0       => int_inputs_7_d0,
     q0       => int_inputs_7_q0,
     clk1     => ACLK,
     address1 => int_inputs_7_address1,
     ce1      => int_inputs_7_ce1,
     we1      => int_inputs_7_we1,
     be1      => int_inputs_7_be1,
     d1       => int_inputs_7_d1,
     q1       => int_inputs_7_q1);
-- int_inputs_8
int_inputs_8 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_8_address0,
     ce0      => int_inputs_8_ce0,
     we0      => int_inputs_8_we0,
     be0      => int_inputs_8_be0,
     d0       => int_inputs_8_d0,
     q0       => int_inputs_8_q0,
     clk1     => ACLK,
     address1 => int_inputs_8_address1,
     ce1      => int_inputs_8_ce1,
     we1      => int_inputs_8_we1,
     be1      => int_inputs_8_be1,
     d1       => int_inputs_8_d1,
     q1       => int_inputs_8_q1);
-- int_inputs_9
int_inputs_9 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_9_address0,
     ce0      => int_inputs_9_ce0,
     we0      => int_inputs_9_we0,
     be0      => int_inputs_9_be0,
     d0       => int_inputs_9_d0,
     q0       => int_inputs_9_q0,
     clk1     => ACLK,
     address1 => int_inputs_9_address1,
     ce1      => int_inputs_9_ce1,
     we1      => int_inputs_9_we1,
     be1      => int_inputs_9_be1,
     d1       => int_inputs_9_d1,
     q1       => int_inputs_9_q1);
-- int_inputs_10
int_inputs_10 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_10_address0,
     ce0      => int_inputs_10_ce0,
     we0      => int_inputs_10_we0,
     be0      => int_inputs_10_be0,
     d0       => int_inputs_10_d0,
     q0       => int_inputs_10_q0,
     clk1     => ACLK,
     address1 => int_inputs_10_address1,
     ce1      => int_inputs_10_ce1,
     we1      => int_inputs_10_we1,
     be1      => int_inputs_10_be1,
     d1       => int_inputs_10_d1,
     q1       => int_inputs_10_q1);
-- int_inputs_11
int_inputs_11 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_inputs_11_address0,
     ce0      => int_inputs_11_ce0,
     we0      => int_inputs_11_we0,
     be0      => int_inputs_11_be0,
     d0       => int_inputs_11_d0,
     q0       => int_inputs_11_q0,
     clk1     => ACLK,
     address1 => int_inputs_11_address1,
     ce1      => int_inputs_11_ce1,
     we1      => int_inputs_11_we1,
     be1      => int_inputs_11_be1,
     d1       => int_inputs_11_d1,
     q1       => int_inputs_11_q1);
-- int_counts_0
int_counts_0 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_0_address0,
     ce0      => int_counts_0_ce0,
     we0      => int_counts_0_we0,
     be0      => int_counts_0_be0,
     d0       => int_counts_0_d0,
     q0       => int_counts_0_q0,
     clk1     => ACLK,
     address1 => int_counts_0_address1,
     ce1      => int_counts_0_ce1,
     we1      => int_counts_0_we1,
     be1      => int_counts_0_be1,
     d1       => int_counts_0_d1,
     q1       => int_counts_0_q1);
-- int_counts_1
int_counts_1 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_1_address0,
     ce0      => int_counts_1_ce0,
     we0      => int_counts_1_we0,
     be0      => int_counts_1_be0,
     d0       => int_counts_1_d0,
     q0       => int_counts_1_q0,
     clk1     => ACLK,
     address1 => int_counts_1_address1,
     ce1      => int_counts_1_ce1,
     we1      => int_counts_1_we1,
     be1      => int_counts_1_be1,
     d1       => int_counts_1_d1,
     q1       => int_counts_1_q1);
-- int_counts_2
int_counts_2 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_2_address0,
     ce0      => int_counts_2_ce0,
     we0      => int_counts_2_we0,
     be0      => int_counts_2_be0,
     d0       => int_counts_2_d0,
     q0       => int_counts_2_q0,
     clk1     => ACLK,
     address1 => int_counts_2_address1,
     ce1      => int_counts_2_ce1,
     we1      => int_counts_2_we1,
     be1      => int_counts_2_be1,
     d1       => int_counts_2_d1,
     q1       => int_counts_2_q1);
-- int_counts_3
int_counts_3 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_3_address0,
     ce0      => int_counts_3_ce0,
     we0      => int_counts_3_we0,
     be0      => int_counts_3_be0,
     d0       => int_counts_3_d0,
     q0       => int_counts_3_q0,
     clk1     => ACLK,
     address1 => int_counts_3_address1,
     ce1      => int_counts_3_ce1,
     we1      => int_counts_3_we1,
     be1      => int_counts_3_be1,
     d1       => int_counts_3_d1,
     q1       => int_counts_3_q1);
-- int_counts_4
int_counts_4 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_4_address0,
     ce0      => int_counts_4_ce0,
     we0      => int_counts_4_we0,
     be0      => int_counts_4_be0,
     d0       => int_counts_4_d0,
     q0       => int_counts_4_q0,
     clk1     => ACLK,
     address1 => int_counts_4_address1,
     ce1      => int_counts_4_ce1,
     we1      => int_counts_4_we1,
     be1      => int_counts_4_be1,
     d1       => int_counts_4_d1,
     q1       => int_counts_4_q1);
-- int_counts_5
int_counts_5 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_5_address0,
     ce0      => int_counts_5_ce0,
     we0      => int_counts_5_we0,
     be0      => int_counts_5_be0,
     d0       => int_counts_5_d0,
     q0       => int_counts_5_q0,
     clk1     => ACLK,
     address1 => int_counts_5_address1,
     ce1      => int_counts_5_ce1,
     we1      => int_counts_5_we1,
     be1      => int_counts_5_be1,
     d1       => int_counts_5_d1,
     q1       => int_counts_5_q1);
-- int_counts_6
int_counts_6 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_6_address0,
     ce0      => int_counts_6_ce0,
     we0      => int_counts_6_we0,
     be0      => int_counts_6_be0,
     d0       => int_counts_6_d0,
     q0       => int_counts_6_q0,
     clk1     => ACLK,
     address1 => int_counts_6_address1,
     ce1      => int_counts_6_ce1,
     we1      => int_counts_6_we1,
     be1      => int_counts_6_be1,
     d1       => int_counts_6_d1,
     q1       => int_counts_6_q1);
-- int_counts_7
int_counts_7 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_7_address0,
     ce0      => int_counts_7_ce0,
     we0      => int_counts_7_we0,
     be0      => int_counts_7_be0,
     d0       => int_counts_7_d0,
     q0       => int_counts_7_q0,
     clk1     => ACLK,
     address1 => int_counts_7_address1,
     ce1      => int_counts_7_ce1,
     we1      => int_counts_7_we1,
     be1      => int_counts_7_be1,
     d1       => int_counts_7_d1,
     q1       => int_counts_7_q1);
-- int_counts_8
int_counts_8 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_8_address0,
     ce0      => int_counts_8_ce0,
     we0      => int_counts_8_we0,
     be0      => int_counts_8_be0,
     d0       => int_counts_8_d0,
     q0       => int_counts_8_q0,
     clk1     => ACLK,
     address1 => int_counts_8_address1,
     ce1      => int_counts_8_ce1,
     we1      => int_counts_8_we1,
     be1      => int_counts_8_be1,
     d1       => int_counts_8_d1,
     q1       => int_counts_8_q1);
-- int_counts_9
int_counts_9 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_9_address0,
     ce0      => int_counts_9_ce0,
     we0      => int_counts_9_we0,
     be0      => int_counts_9_be0,
     d0       => int_counts_9_d0,
     q0       => int_counts_9_q0,
     clk1     => ACLK,
     address1 => int_counts_9_address1,
     ce1      => int_counts_9_ce1,
     we1      => int_counts_9_we1,
     be1      => int_counts_9_be1,
     d1       => int_counts_9_d1,
     q1       => int_counts_9_q1);
-- int_counts_10
int_counts_10 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_10_address0,
     ce0      => int_counts_10_ce0,
     we0      => int_counts_10_we0,
     be0      => int_counts_10_be0,
     d0       => int_counts_10_d0,
     q0       => int_counts_10_q0,
     clk1     => ACLK,
     address1 => int_counts_10_address1,
     ce1      => int_counts_10_ce1,
     we1      => int_counts_10_we1,
     be1      => int_counts_10_be1,
     d1       => int_counts_10_d1,
     q1       => int_counts_10_q1);
-- int_counts_11
int_counts_11 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_counts_11_address0,
     ce0      => int_counts_11_ce0,
     we0      => int_counts_11_we0,
     be0      => int_counts_11_be0,
     d0       => int_counts_11_d0,
     q0       => int_counts_11_q0,
     clk1     => ACLK,
     address1 => int_counts_11_address1,
     ce1      => int_counts_11_ce1,
     we1      => int_counts_11_we1,
     be1      => int_counts_11_be1,
     d1       => int_counts_11_d1,
     q1       => int_counts_11_q1);
-- int_outputs_0
int_outputs_0 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_0_address0,
     ce0      => int_outputs_0_ce0,
     we0      => int_outputs_0_we0,
     be0      => int_outputs_0_be0,
     d0       => int_outputs_0_d0,
     q0       => int_outputs_0_q0,
     clk1     => ACLK,
     address1 => int_outputs_0_address1,
     ce1      => int_outputs_0_ce1,
     we1      => int_outputs_0_we1,
     be1      => int_outputs_0_be1,
     d1       => int_outputs_0_d1,
     q1       => int_outputs_0_q1);
-- int_outputs_1
int_outputs_1 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_1_address0,
     ce0      => int_outputs_1_ce0,
     we0      => int_outputs_1_we0,
     be0      => int_outputs_1_be0,
     d0       => int_outputs_1_d0,
     q0       => int_outputs_1_q0,
     clk1     => ACLK,
     address1 => int_outputs_1_address1,
     ce1      => int_outputs_1_ce1,
     we1      => int_outputs_1_we1,
     be1      => int_outputs_1_be1,
     d1       => int_outputs_1_d1,
     q1       => int_outputs_1_q1);
-- int_outputs_2
int_outputs_2 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_2_address0,
     ce0      => int_outputs_2_ce0,
     we0      => int_outputs_2_we0,
     be0      => int_outputs_2_be0,
     d0       => int_outputs_2_d0,
     q0       => int_outputs_2_q0,
     clk1     => ACLK,
     address1 => int_outputs_2_address1,
     ce1      => int_outputs_2_ce1,
     we1      => int_outputs_2_we1,
     be1      => int_outputs_2_be1,
     d1       => int_outputs_2_d1,
     q1       => int_outputs_2_q1);
-- int_outputs_3
int_outputs_3 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_3_address0,
     ce0      => int_outputs_3_ce0,
     we0      => int_outputs_3_we0,
     be0      => int_outputs_3_be0,
     d0       => int_outputs_3_d0,
     q0       => int_outputs_3_q0,
     clk1     => ACLK,
     address1 => int_outputs_3_address1,
     ce1      => int_outputs_3_ce1,
     we1      => int_outputs_3_we1,
     be1      => int_outputs_3_be1,
     d1       => int_outputs_3_d1,
     q1       => int_outputs_3_q1);
-- int_outputs_4
int_outputs_4 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_4_address0,
     ce0      => int_outputs_4_ce0,
     we0      => int_outputs_4_we0,
     be0      => int_outputs_4_be0,
     d0       => int_outputs_4_d0,
     q0       => int_outputs_4_q0,
     clk1     => ACLK,
     address1 => int_outputs_4_address1,
     ce1      => int_outputs_4_ce1,
     we1      => int_outputs_4_we1,
     be1      => int_outputs_4_be1,
     d1       => int_outputs_4_d1,
     q1       => int_outputs_4_q1);
-- int_outputs_5
int_outputs_5 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_5_address0,
     ce0      => int_outputs_5_ce0,
     we0      => int_outputs_5_we0,
     be0      => int_outputs_5_be0,
     d0       => int_outputs_5_d0,
     q0       => int_outputs_5_q0,
     clk1     => ACLK,
     address1 => int_outputs_5_address1,
     ce1      => int_outputs_5_ce1,
     we1      => int_outputs_5_we1,
     be1      => int_outputs_5_be1,
     d1       => int_outputs_5_d1,
     q1       => int_outputs_5_q1);
-- int_outputs_6
int_outputs_6 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_6_address0,
     ce0      => int_outputs_6_ce0,
     we0      => int_outputs_6_we0,
     be0      => int_outputs_6_be0,
     d0       => int_outputs_6_d0,
     q0       => int_outputs_6_q0,
     clk1     => ACLK,
     address1 => int_outputs_6_address1,
     ce1      => int_outputs_6_ce1,
     we1      => int_outputs_6_we1,
     be1      => int_outputs_6_be1,
     d1       => int_outputs_6_d1,
     q1       => int_outputs_6_q1);
-- int_outputs_7
int_outputs_7 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_7_address0,
     ce0      => int_outputs_7_ce0,
     we0      => int_outputs_7_we0,
     be0      => int_outputs_7_be0,
     d0       => int_outputs_7_d0,
     q0       => int_outputs_7_q0,
     clk1     => ACLK,
     address1 => int_outputs_7_address1,
     ce1      => int_outputs_7_ce1,
     we1      => int_outputs_7_we1,
     be1      => int_outputs_7_be1,
     d1       => int_outputs_7_d1,
     q1       => int_outputs_7_q1);
-- int_outputs_8
int_outputs_8 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_8_address0,
     ce0      => int_outputs_8_ce0,
     we0      => int_outputs_8_we0,
     be0      => int_outputs_8_be0,
     d0       => int_outputs_8_d0,
     q0       => int_outputs_8_q0,
     clk1     => ACLK,
     address1 => int_outputs_8_address1,
     ce1      => int_outputs_8_ce1,
     we1      => int_outputs_8_we1,
     be1      => int_outputs_8_be1,
     d1       => int_outputs_8_d1,
     q1       => int_outputs_8_q1);
-- int_outputs_9
int_outputs_9 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_9_address0,
     ce0      => int_outputs_9_ce0,
     we0      => int_outputs_9_we0,
     be0      => int_outputs_9_be0,
     d0       => int_outputs_9_d0,
     q0       => int_outputs_9_q0,
     clk1     => ACLK,
     address1 => int_outputs_9_address1,
     ce1      => int_outputs_9_ce1,
     we1      => int_outputs_9_we1,
     be1      => int_outputs_9_be1,
     d1       => int_outputs_9_d1,
     q1       => int_outputs_9_q1);
-- int_outputs_10
int_outputs_10 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_10_address0,
     ce0      => int_outputs_10_ce0,
     we0      => int_outputs_10_we0,
     be0      => int_outputs_10_be0,
     d0       => int_outputs_10_d0,
     q0       => int_outputs_10_q0,
     clk1     => ACLK,
     address1 => int_outputs_10_address1,
     ce1      => int_outputs_10_ce1,
     we1      => int_outputs_10_we1,
     be1      => int_outputs_10_be1,
     d1       => int_outputs_10_d1,
     q1       => int_outputs_10_q1);
-- int_outputs_11
int_outputs_11 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 2,
     AWIDTH   => log2(2))
port map (
     clk0     => ACLK,
     address0 => int_outputs_11_address0,
     ce0      => int_outputs_11_ce0,
     we0      => int_outputs_11_we0,
     be0      => int_outputs_11_be0,
     d0       => int_outputs_11_d0,
     q0       => int_outputs_11_q0,
     clk1     => ACLK,
     address1 => int_outputs_11_address1,
     ce1      => int_outputs_11_ce1,
     we1      => int_outputs_11_we1,
     be1      => int_outputs_11_be1,
     d1       => int_outputs_11_d1,
     q1       => int_outputs_11_q1);

-- ----------------------- AXI WRITE ---------------------
    AWREADY_t <=  '1' when wstate = wridle else '0';
    AWREADY   <=  AWREADY_t;
    WREADY_t  <=  '1' when wstate = wrdata else '0';
    WREADY    <=  WREADY_t;
    BRESP     <=  "00";  -- OKAY
    BVALID    <=  '1' when wstate = wrresp else '0';
    wmask     <=  (31 downto 24 => WSTRB(3), 23 downto 16 => WSTRB(2), 15 downto 8 => WSTRB(1), 7 downto 0 => WSTRB(0));
    aw_hs     <=  AWVALID and AWREADY_t;
    w_hs      <=  WVALID and WREADY_t;

    -- write FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                wstate <= wrreset;
            elsif (ACLK_EN = '1') then
                wstate <= wnext;
            end if;
        end if;
    end process;

    process (wstate, AWVALID, WVALID, BREADY)
    begin
        case (wstate) is
        when wridle =>
            if (AWVALID = '1') then
                wnext <= wrdata;
            else
                wnext <= wridle;
            end if;
        when wrdata =>
            if (WVALID = '1') then
                wnext <= wrresp;
            else
                wnext <= wrdata;
            end if;
        when wrresp =>
            if (BREADY = '1') then
                wnext <= wridle;
            else
                wnext <= wrresp;
            end if;
        when others =>
            wnext <= wridle;
        end case;
    end process;

    waddr_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (aw_hs = '1') then
                    waddr <= UNSIGNED(AWADDR(ADDR_BITS-1 downto 0));
                end if;
            end if;
        end if;
    end process;

-- ----------------------- AXI READ ----------------------
    ARREADY_t <= '1' when (rstate = rdidle) else '0';
    ARREADY <= ARREADY_t;
    RDATA   <= STD_LOGIC_VECTOR(rdata_data);
    RRESP   <= "00";  -- OKAY
    RVALID_t  <= '1' when (rstate = rddata) and (int_inputs_0_read = '0') and (int_inputs_1_read = '0') and (int_inputs_2_read = '0') and (int_inputs_3_read = '0') and (int_inputs_4_read = '0') and (int_inputs_5_read = '0') and (int_inputs_6_read = '0') and (int_inputs_7_read = '0') and (int_inputs_8_read = '0') and (int_inputs_9_read = '0') and (int_inputs_10_read = '0') and (int_inputs_11_read = '0') and (int_counts_0_read = '0') and (int_counts_1_read = '0') and (int_counts_2_read = '0') and (int_counts_3_read = '0') and (int_counts_4_read = '0') and (int_counts_5_read = '0') and (int_counts_6_read = '0') and (int_counts_7_read = '0') and (int_counts_8_read = '0') and (int_counts_9_read = '0') and (int_counts_10_read = '0') and (int_counts_11_read = '0') and (int_outputs_0_read = '0') and (int_outputs_1_read = '0') and (int_outputs_2_read = '0') and (int_outputs_3_read = '0') and (int_outputs_4_read = '0') and (int_outputs_5_read = '0') and (int_outputs_6_read = '0') and (int_outputs_7_read = '0') and (int_outputs_8_read = '0') and (int_outputs_9_read = '0') and (int_outputs_10_read = '0') and (int_outputs_11_read = '0') else '0';
    RVALID    <= RVALID_t;
    ar_hs   <= ARVALID and ARREADY_t;
    raddr   <= UNSIGNED(ARADDR(ADDR_BITS-1 downto 0));

    -- read FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                rstate <= rdreset;
            elsif (ACLK_EN = '1') then
                rstate <= rnext;
            end if;
        end if;
    end process;

    process (rstate, ARVALID, RREADY, RVALID_t)
    begin
        case (rstate) is
        when rdidle =>
            if (ARVALID = '1') then
                rnext <= rddata;
            else
                rnext <= rdidle;
            end if;
        when rddata =>
            if (RREADY = '1' and RVALID_t = '1') then
                rnext <= rdidle;
            else
                rnext <= rddata;
            end if;
        when others =>
            rnext <= rdidle;
        end case;
    end process;

    rdata_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (ar_hs = '1') then
                    case (TO_INTEGER(raddr)) is
                    when ADDR_AP_CTRL =>
                        rdata_data <= (7 => int_auto_restart, 3 => int_ap_ready, 2 => int_ap_idle, 1 => int_ap_done, 0 => int_ap_start, others => '0');
                    when ADDR_GIE =>
                        rdata_data <= (0 => int_gie, others => '0');
                    when ADDR_IER =>
                        rdata_data <= (1 => int_ier(1), 0 => int_ier(0), others => '0');
                    when ADDR_ISR =>
                        rdata_data <= (1 => int_isr(1), 0 => int_isr(0), others => '0');
                    when others =>
                        rdata_data <= (others => '0');
                    end case;
                elsif (int_inputs_0_read = '1') then
                    rdata_data <= int_inputs_0_q1;
                elsif (int_inputs_1_read = '1') then
                    rdata_data <= int_inputs_1_q1;
                elsif (int_inputs_2_read = '1') then
                    rdata_data <= int_inputs_2_q1;
                elsif (int_inputs_3_read = '1') then
                    rdata_data <= int_inputs_3_q1;
                elsif (int_inputs_4_read = '1') then
                    rdata_data <= int_inputs_4_q1;
                elsif (int_inputs_5_read = '1') then
                    rdata_data <= int_inputs_5_q1;
                elsif (int_inputs_6_read = '1') then
                    rdata_data <= int_inputs_6_q1;
                elsif (int_inputs_7_read = '1') then
                    rdata_data <= int_inputs_7_q1;
                elsif (int_inputs_8_read = '1') then
                    rdata_data <= int_inputs_8_q1;
                elsif (int_inputs_9_read = '1') then
                    rdata_data <= int_inputs_9_q1;
                elsif (int_inputs_10_read = '1') then
                    rdata_data <= int_inputs_10_q1;
                elsif (int_inputs_11_read = '1') then
                    rdata_data <= int_inputs_11_q1;
                elsif (int_counts_0_read = '1') then
                    rdata_data <= int_counts_0_q1;
                elsif (int_counts_1_read = '1') then
                    rdata_data <= int_counts_1_q1;
                elsif (int_counts_2_read = '1') then
                    rdata_data <= int_counts_2_q1;
                elsif (int_counts_3_read = '1') then
                    rdata_data <= int_counts_3_q1;
                elsif (int_counts_4_read = '1') then
                    rdata_data <= int_counts_4_q1;
                elsif (int_counts_5_read = '1') then
                    rdata_data <= int_counts_5_q1;
                elsif (int_counts_6_read = '1') then
                    rdata_data <= int_counts_6_q1;
                elsif (int_counts_7_read = '1') then
                    rdata_data <= int_counts_7_q1;
                elsif (int_counts_8_read = '1') then
                    rdata_data <= int_counts_8_q1;
                elsif (int_counts_9_read = '1') then
                    rdata_data <= int_counts_9_q1;
                elsif (int_counts_10_read = '1') then
                    rdata_data <= int_counts_10_q1;
                elsif (int_counts_11_read = '1') then
                    rdata_data <= int_counts_11_q1;
                elsif (int_outputs_0_read = '1') then
                    rdata_data <= int_outputs_0_q1;
                elsif (int_outputs_1_read = '1') then
                    rdata_data <= int_outputs_1_q1;
                elsif (int_outputs_2_read = '1') then
                    rdata_data <= int_outputs_2_q1;
                elsif (int_outputs_3_read = '1') then
                    rdata_data <= int_outputs_3_q1;
                elsif (int_outputs_4_read = '1') then
                    rdata_data <= int_outputs_4_q1;
                elsif (int_outputs_5_read = '1') then
                    rdata_data <= int_outputs_5_q1;
                elsif (int_outputs_6_read = '1') then
                    rdata_data <= int_outputs_6_q1;
                elsif (int_outputs_7_read = '1') then
                    rdata_data <= int_outputs_7_q1;
                elsif (int_outputs_8_read = '1') then
                    rdata_data <= int_outputs_8_q1;
                elsif (int_outputs_9_read = '1') then
                    rdata_data <= int_outputs_9_q1;
                elsif (int_outputs_10_read = '1') then
                    rdata_data <= int_outputs_10_q1;
                elsif (int_outputs_11_read = '1') then
                    rdata_data <= int_outputs_11_q1;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    interrupt            <= int_gie and (int_isr(0) or int_isr(1));
    ap_start             <= int_ap_start;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_start <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1' and WDATA(0) = '1') then
                    int_ap_start <= '1';
                elsif (ap_ready = '1') then
                    int_ap_start <= int_auto_restart; -- clear on handshake/auto restart
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_done <= '0';
            elsif (ACLK_EN = '1') then
                if (ap_done = '1') then
                    int_ap_done <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_AP_CTRL) then
                    int_ap_done <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_idle <= '0';
            elsif (ACLK_EN = '1') then
                if (true) then
                    int_ap_idle <= ap_idle;
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_ready <= '0';
            elsif (ACLK_EN = '1') then
                if (true) then
                    int_ap_ready <= ap_ready;
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_auto_restart <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1') then
                    int_auto_restart <= WDATA(7);
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_gie <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_GIE and WSTRB(0) = '1') then
                    int_gie <= WDATA(0);
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ier <= "00";
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IER and WSTRB(0) = '1') then
                    int_ier <= UNSIGNED(WDATA(1 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_isr(0) <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ier(0) = '1' and ap_done = '1') then
                    int_isr(0) <= '1';
                elsif (w_hs = '1' and waddr = ADDR_ISR and WSTRB(0) = '1') then
                    int_isr(0) <= int_isr(0) xor WDATA(0); -- toggle on write
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_isr(1) <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ier(1) = '1' and ap_ready = '1') then
                    int_isr(1) <= '1';
                elsif (w_hs = '1' and waddr = ADDR_ISR and WSTRB(0) = '1') then
                    int_isr(1) <= int_isr(1) xor WDATA(1); -- toggle on write
                end if;
            end if;
        end if;
    end process;


-- ----------------------- Memory logic ------------------
    -- inputs_0
    int_inputs_0_address0 <= UNSIGNED(inputs_0_address0);
    int_inputs_0_ce0     <= inputs_0_ce0;
    int_inputs_0_we0     <= '0';
    int_inputs_0_be0     <= (others => '0');
    int_inputs_0_d0      <= (others => '0');
    inputs_0_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_0_q0, 32));
    int_inputs_0_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_0_ce1     <= '1' when ar_hs = '1' or (int_inputs_0_write = '1' and WVALID  = '1') else '0';
    int_inputs_0_we1     <= '1' when int_inputs_0_write = '1' and WVALID = '1' else '0';
    int_inputs_0_be1     <= UNSIGNED(WSTRB);
    int_inputs_0_d1      <= UNSIGNED(WDATA);
    -- inputs_1
    int_inputs_1_address0 <= UNSIGNED(inputs_1_address0);
    int_inputs_1_ce0     <= inputs_1_ce0;
    int_inputs_1_we0     <= '0';
    int_inputs_1_be0     <= (others => '0');
    int_inputs_1_d0      <= (others => '0');
    inputs_1_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_1_q0, 32));
    int_inputs_1_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_1_ce1     <= '1' when ar_hs = '1' or (int_inputs_1_write = '1' and WVALID  = '1') else '0';
    int_inputs_1_we1     <= '1' when int_inputs_1_write = '1' and WVALID = '1' else '0';
    int_inputs_1_be1     <= UNSIGNED(WSTRB);
    int_inputs_1_d1      <= UNSIGNED(WDATA);
    -- inputs_2
    int_inputs_2_address0 <= UNSIGNED(inputs_2_address0);
    int_inputs_2_ce0     <= inputs_2_ce0;
    int_inputs_2_we0     <= '0';
    int_inputs_2_be0     <= (others => '0');
    int_inputs_2_d0      <= (others => '0');
    inputs_2_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_2_q0, 32));
    int_inputs_2_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_2_ce1     <= '1' when ar_hs = '1' or (int_inputs_2_write = '1' and WVALID  = '1') else '0';
    int_inputs_2_we1     <= '1' when int_inputs_2_write = '1' and WVALID = '1' else '0';
    int_inputs_2_be1     <= UNSIGNED(WSTRB);
    int_inputs_2_d1      <= UNSIGNED(WDATA);
    -- inputs_3
    int_inputs_3_address0 <= UNSIGNED(inputs_3_address0);
    int_inputs_3_ce0     <= inputs_3_ce0;
    int_inputs_3_we0     <= '0';
    int_inputs_3_be0     <= (others => '0');
    int_inputs_3_d0      <= (others => '0');
    inputs_3_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_3_q0, 32));
    int_inputs_3_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_3_ce1     <= '1' when ar_hs = '1' or (int_inputs_3_write = '1' and WVALID  = '1') else '0';
    int_inputs_3_we1     <= '1' when int_inputs_3_write = '1' and WVALID = '1' else '0';
    int_inputs_3_be1     <= UNSIGNED(WSTRB);
    int_inputs_3_d1      <= UNSIGNED(WDATA);
    -- inputs_4
    int_inputs_4_address0 <= UNSIGNED(inputs_4_address0);
    int_inputs_4_ce0     <= inputs_4_ce0;
    int_inputs_4_we0     <= '0';
    int_inputs_4_be0     <= (others => '0');
    int_inputs_4_d0      <= (others => '0');
    inputs_4_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_4_q0, 32));
    int_inputs_4_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_4_ce1     <= '1' when ar_hs = '1' or (int_inputs_4_write = '1' and WVALID  = '1') else '0';
    int_inputs_4_we1     <= '1' when int_inputs_4_write = '1' and WVALID = '1' else '0';
    int_inputs_4_be1     <= UNSIGNED(WSTRB);
    int_inputs_4_d1      <= UNSIGNED(WDATA);
    -- inputs_5
    int_inputs_5_address0 <= UNSIGNED(inputs_5_address0);
    int_inputs_5_ce0     <= inputs_5_ce0;
    int_inputs_5_we0     <= '0';
    int_inputs_5_be0     <= (others => '0');
    int_inputs_5_d0      <= (others => '0');
    inputs_5_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_5_q0, 32));
    int_inputs_5_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_5_ce1     <= '1' when ar_hs = '1' or (int_inputs_5_write = '1' and WVALID  = '1') else '0';
    int_inputs_5_we1     <= '1' when int_inputs_5_write = '1' and WVALID = '1' else '0';
    int_inputs_5_be1     <= UNSIGNED(WSTRB);
    int_inputs_5_d1      <= UNSIGNED(WDATA);
    -- inputs_6
    int_inputs_6_address0 <= UNSIGNED(inputs_6_address0);
    int_inputs_6_ce0     <= inputs_6_ce0;
    int_inputs_6_we0     <= '0';
    int_inputs_6_be0     <= (others => '0');
    int_inputs_6_d0      <= (others => '0');
    inputs_6_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_6_q0, 32));
    int_inputs_6_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_6_ce1     <= '1' when ar_hs = '1' or (int_inputs_6_write = '1' and WVALID  = '1') else '0';
    int_inputs_6_we1     <= '1' when int_inputs_6_write = '1' and WVALID = '1' else '0';
    int_inputs_6_be1     <= UNSIGNED(WSTRB);
    int_inputs_6_d1      <= UNSIGNED(WDATA);
    -- inputs_7
    int_inputs_7_address0 <= UNSIGNED(inputs_7_address0);
    int_inputs_7_ce0     <= inputs_7_ce0;
    int_inputs_7_we0     <= '0';
    int_inputs_7_be0     <= (others => '0');
    int_inputs_7_d0      <= (others => '0');
    inputs_7_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_7_q0, 32));
    int_inputs_7_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_7_ce1     <= '1' when ar_hs = '1' or (int_inputs_7_write = '1' and WVALID  = '1') else '0';
    int_inputs_7_we1     <= '1' when int_inputs_7_write = '1' and WVALID = '1' else '0';
    int_inputs_7_be1     <= UNSIGNED(WSTRB);
    int_inputs_7_d1      <= UNSIGNED(WDATA);
    -- inputs_8
    int_inputs_8_address0 <= UNSIGNED(inputs_8_address0);
    int_inputs_8_ce0     <= inputs_8_ce0;
    int_inputs_8_we0     <= '0';
    int_inputs_8_be0     <= (others => '0');
    int_inputs_8_d0      <= (others => '0');
    inputs_8_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_8_q0, 32));
    int_inputs_8_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_8_ce1     <= '1' when ar_hs = '1' or (int_inputs_8_write = '1' and WVALID  = '1') else '0';
    int_inputs_8_we1     <= '1' when int_inputs_8_write = '1' and WVALID = '1' else '0';
    int_inputs_8_be1     <= UNSIGNED(WSTRB);
    int_inputs_8_d1      <= UNSIGNED(WDATA);
    -- inputs_9
    int_inputs_9_address0 <= UNSIGNED(inputs_9_address0);
    int_inputs_9_ce0     <= inputs_9_ce0;
    int_inputs_9_we0     <= '0';
    int_inputs_9_be0     <= (others => '0');
    int_inputs_9_d0      <= (others => '0');
    inputs_9_q0          <= STD_LOGIC_VECTOR(RESIZE(int_inputs_9_q0, 32));
    int_inputs_9_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_9_ce1     <= '1' when ar_hs = '1' or (int_inputs_9_write = '1' and WVALID  = '1') else '0';
    int_inputs_9_we1     <= '1' when int_inputs_9_write = '1' and WVALID = '1' else '0';
    int_inputs_9_be1     <= UNSIGNED(WSTRB);
    int_inputs_9_d1      <= UNSIGNED(WDATA);
    -- inputs_10
    int_inputs_10_address0 <= UNSIGNED(inputs_10_address0);
    int_inputs_10_ce0    <= inputs_10_ce0;
    int_inputs_10_we0    <= '0';
    int_inputs_10_be0    <= (others => '0');
    int_inputs_10_d0     <= (others => '0');
    inputs_10_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_10_q0, 32));
    int_inputs_10_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_10_ce1    <= '1' when ar_hs = '1' or (int_inputs_10_write = '1' and WVALID  = '1') else '0';
    int_inputs_10_we1    <= '1' when int_inputs_10_write = '1' and WVALID = '1' else '0';
    int_inputs_10_be1    <= UNSIGNED(WSTRB);
    int_inputs_10_d1     <= UNSIGNED(WDATA);
    -- inputs_11
    int_inputs_11_address0 <= UNSIGNED(inputs_11_address0);
    int_inputs_11_ce0    <= inputs_11_ce0;
    int_inputs_11_we0    <= '0';
    int_inputs_11_be0    <= (others => '0');
    int_inputs_11_d0     <= (others => '0');
    inputs_11_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_11_q0, 32));
    int_inputs_11_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_inputs_11_ce1    <= '1' when ar_hs = '1' or (int_inputs_11_write = '1' and WVALID  = '1') else '0';
    int_inputs_11_we1    <= '1' when int_inputs_11_write = '1' and WVALID = '1' else '0';
    int_inputs_11_be1    <= UNSIGNED(WSTRB);
    int_inputs_11_d1     <= UNSIGNED(WDATA);
    -- counts_0
    int_counts_0_address0 <= UNSIGNED(counts_0_address0);
    int_counts_0_ce0     <= counts_0_ce0;
    int_counts_0_we0     <= counts_0_we0;
    int_counts_0_be0     <= (others => counts_0_we0);
    int_counts_0_d0      <= RESIZE(UNSIGNED(counts_0_d0), 32);
    counts_0_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_0_q0, 32));
    int_counts_0_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_0_ce1     <= '1' when ar_hs = '1' or (int_counts_0_write = '1' and WVALID  = '1') else '0';
    int_counts_0_we1     <= '1' when int_counts_0_write = '1' and WVALID = '1' else '0';
    int_counts_0_be1     <= UNSIGNED(WSTRB);
    int_counts_0_d1      <= UNSIGNED(WDATA);
    -- counts_1
    int_counts_1_address0 <= UNSIGNED(counts_1_address0);
    int_counts_1_ce0     <= counts_1_ce0;
    int_counts_1_we0     <= counts_1_we0;
    int_counts_1_be0     <= (others => counts_1_we0);
    int_counts_1_d0      <= RESIZE(UNSIGNED(counts_1_d0), 32);
    counts_1_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_1_q0, 32));
    int_counts_1_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_1_ce1     <= '1' when ar_hs = '1' or (int_counts_1_write = '1' and WVALID  = '1') else '0';
    int_counts_1_we1     <= '1' when int_counts_1_write = '1' and WVALID = '1' else '0';
    int_counts_1_be1     <= UNSIGNED(WSTRB);
    int_counts_1_d1      <= UNSIGNED(WDATA);
    -- counts_2
    int_counts_2_address0 <= UNSIGNED(counts_2_address0);
    int_counts_2_ce0     <= counts_2_ce0;
    int_counts_2_we0     <= counts_2_we0;
    int_counts_2_be0     <= (others => counts_2_we0);
    int_counts_2_d0      <= RESIZE(UNSIGNED(counts_2_d0), 32);
    counts_2_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_2_q0, 32));
    int_counts_2_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_2_ce1     <= '1' when ar_hs = '1' or (int_counts_2_write = '1' and WVALID  = '1') else '0';
    int_counts_2_we1     <= '1' when int_counts_2_write = '1' and WVALID = '1' else '0';
    int_counts_2_be1     <= UNSIGNED(WSTRB);
    int_counts_2_d1      <= UNSIGNED(WDATA);
    -- counts_3
    int_counts_3_address0 <= UNSIGNED(counts_3_address0);
    int_counts_3_ce0     <= counts_3_ce0;
    int_counts_3_we0     <= counts_3_we0;
    int_counts_3_be0     <= (others => counts_3_we0);
    int_counts_3_d0      <= RESIZE(UNSIGNED(counts_3_d0), 32);
    counts_3_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_3_q0, 32));
    int_counts_3_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_3_ce1     <= '1' when ar_hs = '1' or (int_counts_3_write = '1' and WVALID  = '1') else '0';
    int_counts_3_we1     <= '1' when int_counts_3_write = '1' and WVALID = '1' else '0';
    int_counts_3_be1     <= UNSIGNED(WSTRB);
    int_counts_3_d1      <= UNSIGNED(WDATA);
    -- counts_4
    int_counts_4_address0 <= UNSIGNED(counts_4_address0);
    int_counts_4_ce0     <= counts_4_ce0;
    int_counts_4_we0     <= counts_4_we0;
    int_counts_4_be0     <= (others => counts_4_we0);
    int_counts_4_d0      <= RESIZE(UNSIGNED(counts_4_d0), 32);
    counts_4_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_4_q0, 32));
    int_counts_4_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_4_ce1     <= '1' when ar_hs = '1' or (int_counts_4_write = '1' and WVALID  = '1') else '0';
    int_counts_4_we1     <= '1' when int_counts_4_write = '1' and WVALID = '1' else '0';
    int_counts_4_be1     <= UNSIGNED(WSTRB);
    int_counts_4_d1      <= UNSIGNED(WDATA);
    -- counts_5
    int_counts_5_address0 <= UNSIGNED(counts_5_address0);
    int_counts_5_ce0     <= counts_5_ce0;
    int_counts_5_we0     <= counts_5_we0;
    int_counts_5_be0     <= (others => counts_5_we0);
    int_counts_5_d0      <= RESIZE(UNSIGNED(counts_5_d0), 32);
    counts_5_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_5_q0, 32));
    int_counts_5_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_5_ce1     <= '1' when ar_hs = '1' or (int_counts_5_write = '1' and WVALID  = '1') else '0';
    int_counts_5_we1     <= '1' when int_counts_5_write = '1' and WVALID = '1' else '0';
    int_counts_5_be1     <= UNSIGNED(WSTRB);
    int_counts_5_d1      <= UNSIGNED(WDATA);
    -- counts_6
    int_counts_6_address0 <= UNSIGNED(counts_6_address0);
    int_counts_6_ce0     <= counts_6_ce0;
    int_counts_6_we0     <= counts_6_we0;
    int_counts_6_be0     <= (others => counts_6_we0);
    int_counts_6_d0      <= RESIZE(UNSIGNED(counts_6_d0), 32);
    counts_6_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_6_q0, 32));
    int_counts_6_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_6_ce1     <= '1' when ar_hs = '1' or (int_counts_6_write = '1' and WVALID  = '1') else '0';
    int_counts_6_we1     <= '1' when int_counts_6_write = '1' and WVALID = '1' else '0';
    int_counts_6_be1     <= UNSIGNED(WSTRB);
    int_counts_6_d1      <= UNSIGNED(WDATA);
    -- counts_7
    int_counts_7_address0 <= UNSIGNED(counts_7_address0);
    int_counts_7_ce0     <= counts_7_ce0;
    int_counts_7_we0     <= counts_7_we0;
    int_counts_7_be0     <= (others => counts_7_we0);
    int_counts_7_d0      <= RESIZE(UNSIGNED(counts_7_d0), 32);
    counts_7_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_7_q0, 32));
    int_counts_7_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_7_ce1     <= '1' when ar_hs = '1' or (int_counts_7_write = '1' and WVALID  = '1') else '0';
    int_counts_7_we1     <= '1' when int_counts_7_write = '1' and WVALID = '1' else '0';
    int_counts_7_be1     <= UNSIGNED(WSTRB);
    int_counts_7_d1      <= UNSIGNED(WDATA);
    -- counts_8
    int_counts_8_address0 <= UNSIGNED(counts_8_address0);
    int_counts_8_ce0     <= counts_8_ce0;
    int_counts_8_we0     <= counts_8_we0;
    int_counts_8_be0     <= (others => counts_8_we0);
    int_counts_8_d0      <= RESIZE(UNSIGNED(counts_8_d0), 32);
    counts_8_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_8_q0, 32));
    int_counts_8_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_8_ce1     <= '1' when ar_hs = '1' or (int_counts_8_write = '1' and WVALID  = '1') else '0';
    int_counts_8_we1     <= '1' when int_counts_8_write = '1' and WVALID = '1' else '0';
    int_counts_8_be1     <= UNSIGNED(WSTRB);
    int_counts_8_d1      <= UNSIGNED(WDATA);
    -- counts_9
    int_counts_9_address0 <= UNSIGNED(counts_9_address0);
    int_counts_9_ce0     <= counts_9_ce0;
    int_counts_9_we0     <= counts_9_we0;
    int_counts_9_be0     <= (others => counts_9_we0);
    int_counts_9_d0      <= RESIZE(UNSIGNED(counts_9_d0), 32);
    counts_9_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_9_q0, 32));
    int_counts_9_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_9_ce1     <= '1' when ar_hs = '1' or (int_counts_9_write = '1' and WVALID  = '1') else '0';
    int_counts_9_we1     <= '1' when int_counts_9_write = '1' and WVALID = '1' else '0';
    int_counts_9_be1     <= UNSIGNED(WSTRB);
    int_counts_9_d1      <= UNSIGNED(WDATA);
    -- counts_10
    int_counts_10_address0 <= UNSIGNED(counts_10_address0);
    int_counts_10_ce0    <= counts_10_ce0;
    int_counts_10_we0    <= counts_10_we0;
    int_counts_10_be0    <= (others => counts_10_we0);
    int_counts_10_d0     <= RESIZE(UNSIGNED(counts_10_d0), 32);
    counts_10_q0         <= STD_LOGIC_VECTOR(RESIZE(int_counts_10_q0, 32));
    int_counts_10_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_10_ce1    <= '1' when ar_hs = '1' or (int_counts_10_write = '1' and WVALID  = '1') else '0';
    int_counts_10_we1    <= '1' when int_counts_10_write = '1' and WVALID = '1' else '0';
    int_counts_10_be1    <= UNSIGNED(WSTRB);
    int_counts_10_d1     <= UNSIGNED(WDATA);
    -- counts_11
    int_counts_11_address0 <= UNSIGNED(counts_11_address0);
    int_counts_11_ce0    <= counts_11_ce0;
    int_counts_11_we0    <= counts_11_we0;
    int_counts_11_be0    <= (others => counts_11_we0);
    int_counts_11_d0     <= RESIZE(UNSIGNED(counts_11_d0), 32);
    counts_11_q0         <= STD_LOGIC_VECTOR(RESIZE(int_counts_11_q0, 32));
    int_counts_11_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_counts_11_ce1    <= '1' when ar_hs = '1' or (int_counts_11_write = '1' and WVALID  = '1') else '0';
    int_counts_11_we1    <= '1' when int_counts_11_write = '1' and WVALID = '1' else '0';
    int_counts_11_be1    <= UNSIGNED(WSTRB);
    int_counts_11_d1     <= UNSIGNED(WDATA);
    -- outputs_0
    int_outputs_0_address0 <= UNSIGNED(outputs_0_address0);
    int_outputs_0_ce0    <= outputs_0_ce0;
    int_outputs_0_we0    <= outputs_0_we0;
    int_outputs_0_be0    <= (others => outputs_0_we0);
    int_outputs_0_d0     <= RESIZE(UNSIGNED(outputs_0_d0), 32);
    int_outputs_0_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_0_ce1    <= '1' when ar_hs = '1' or (int_outputs_0_write = '1' and WVALID  = '1') else '0';
    int_outputs_0_we1    <= '1' when int_outputs_0_write = '1' and WVALID = '1' else '0';
    int_outputs_0_be1    <= UNSIGNED(WSTRB);
    int_outputs_0_d1     <= UNSIGNED(WDATA);
    -- outputs_1
    int_outputs_1_address0 <= UNSIGNED(outputs_1_address0);
    int_outputs_1_ce0    <= outputs_1_ce0;
    int_outputs_1_we0    <= outputs_1_we0;
    int_outputs_1_be0    <= (others => outputs_1_we0);
    int_outputs_1_d0     <= RESIZE(UNSIGNED(outputs_1_d0), 32);
    int_outputs_1_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_1_ce1    <= '1' when ar_hs = '1' or (int_outputs_1_write = '1' and WVALID  = '1') else '0';
    int_outputs_1_we1    <= '1' when int_outputs_1_write = '1' and WVALID = '1' else '0';
    int_outputs_1_be1    <= UNSIGNED(WSTRB);
    int_outputs_1_d1     <= UNSIGNED(WDATA);
    -- outputs_2
    int_outputs_2_address0 <= UNSIGNED(outputs_2_address0);
    int_outputs_2_ce0    <= outputs_2_ce0;
    int_outputs_2_we0    <= outputs_2_we0;
    int_outputs_2_be0    <= (others => outputs_2_we0);
    int_outputs_2_d0     <= RESIZE(UNSIGNED(outputs_2_d0), 32);
    int_outputs_2_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_2_ce1    <= '1' when ar_hs = '1' or (int_outputs_2_write = '1' and WVALID  = '1') else '0';
    int_outputs_2_we1    <= '1' when int_outputs_2_write = '1' and WVALID = '1' else '0';
    int_outputs_2_be1    <= UNSIGNED(WSTRB);
    int_outputs_2_d1     <= UNSIGNED(WDATA);
    -- outputs_3
    int_outputs_3_address0 <= UNSIGNED(outputs_3_address0);
    int_outputs_3_ce0    <= outputs_3_ce0;
    int_outputs_3_we0    <= outputs_3_we0;
    int_outputs_3_be0    <= (others => outputs_3_we0);
    int_outputs_3_d0     <= RESIZE(UNSIGNED(outputs_3_d0), 32);
    int_outputs_3_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_3_ce1    <= '1' when ar_hs = '1' or (int_outputs_3_write = '1' and WVALID  = '1') else '0';
    int_outputs_3_we1    <= '1' when int_outputs_3_write = '1' and WVALID = '1' else '0';
    int_outputs_3_be1    <= UNSIGNED(WSTRB);
    int_outputs_3_d1     <= UNSIGNED(WDATA);
    -- outputs_4
    int_outputs_4_address0 <= UNSIGNED(outputs_4_address0);
    int_outputs_4_ce0    <= outputs_4_ce0;
    int_outputs_4_we0    <= outputs_4_we0;
    int_outputs_4_be0    <= (others => outputs_4_we0);
    int_outputs_4_d0     <= RESIZE(UNSIGNED(outputs_4_d0), 32);
    int_outputs_4_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_4_ce1    <= '1' when ar_hs = '1' or (int_outputs_4_write = '1' and WVALID  = '1') else '0';
    int_outputs_4_we1    <= '1' when int_outputs_4_write = '1' and WVALID = '1' else '0';
    int_outputs_4_be1    <= UNSIGNED(WSTRB);
    int_outputs_4_d1     <= UNSIGNED(WDATA);
    -- outputs_5
    int_outputs_5_address0 <= UNSIGNED(outputs_5_address0);
    int_outputs_5_ce0    <= outputs_5_ce0;
    int_outputs_5_we0    <= outputs_5_we0;
    int_outputs_5_be0    <= (others => outputs_5_we0);
    int_outputs_5_d0     <= RESIZE(UNSIGNED(outputs_5_d0), 32);
    int_outputs_5_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_5_ce1    <= '1' when ar_hs = '1' or (int_outputs_5_write = '1' and WVALID  = '1') else '0';
    int_outputs_5_we1    <= '1' when int_outputs_5_write = '1' and WVALID = '1' else '0';
    int_outputs_5_be1    <= UNSIGNED(WSTRB);
    int_outputs_5_d1     <= UNSIGNED(WDATA);
    -- outputs_6
    int_outputs_6_address0 <= UNSIGNED(outputs_6_address0);
    int_outputs_6_ce0    <= outputs_6_ce0;
    int_outputs_6_we0    <= outputs_6_we0;
    int_outputs_6_be0    <= (others => outputs_6_we0);
    int_outputs_6_d0     <= RESIZE(UNSIGNED(outputs_6_d0), 32);
    int_outputs_6_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_6_ce1    <= '1' when ar_hs = '1' or (int_outputs_6_write = '1' and WVALID  = '1') else '0';
    int_outputs_6_we1    <= '1' when int_outputs_6_write = '1' and WVALID = '1' else '0';
    int_outputs_6_be1    <= UNSIGNED(WSTRB);
    int_outputs_6_d1     <= UNSIGNED(WDATA);
    -- outputs_7
    int_outputs_7_address0 <= UNSIGNED(outputs_7_address0);
    int_outputs_7_ce0    <= outputs_7_ce0;
    int_outputs_7_we0    <= outputs_7_we0;
    int_outputs_7_be0    <= (others => outputs_7_we0);
    int_outputs_7_d0     <= RESIZE(UNSIGNED(outputs_7_d0), 32);
    int_outputs_7_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_7_ce1    <= '1' when ar_hs = '1' or (int_outputs_7_write = '1' and WVALID  = '1') else '0';
    int_outputs_7_we1    <= '1' when int_outputs_7_write = '1' and WVALID = '1' else '0';
    int_outputs_7_be1    <= UNSIGNED(WSTRB);
    int_outputs_7_d1     <= UNSIGNED(WDATA);
    -- outputs_8
    int_outputs_8_address0 <= UNSIGNED(outputs_8_address0);
    int_outputs_8_ce0    <= outputs_8_ce0;
    int_outputs_8_we0    <= outputs_8_we0;
    int_outputs_8_be0    <= (others => outputs_8_we0);
    int_outputs_8_d0     <= RESIZE(UNSIGNED(outputs_8_d0), 32);
    int_outputs_8_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_8_ce1    <= '1' when ar_hs = '1' or (int_outputs_8_write = '1' and WVALID  = '1') else '0';
    int_outputs_8_we1    <= '1' when int_outputs_8_write = '1' and WVALID = '1' else '0';
    int_outputs_8_be1    <= UNSIGNED(WSTRB);
    int_outputs_8_d1     <= UNSIGNED(WDATA);
    -- outputs_9
    int_outputs_9_address0 <= UNSIGNED(outputs_9_address0);
    int_outputs_9_ce0    <= outputs_9_ce0;
    int_outputs_9_we0    <= outputs_9_we0;
    int_outputs_9_be0    <= (others => outputs_9_we0);
    int_outputs_9_d0     <= RESIZE(UNSIGNED(outputs_9_d0), 32);
    int_outputs_9_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_9_ce1    <= '1' when ar_hs = '1' or (int_outputs_9_write = '1' and WVALID  = '1') else '0';
    int_outputs_9_we1    <= '1' when int_outputs_9_write = '1' and WVALID = '1' else '0';
    int_outputs_9_be1    <= UNSIGNED(WSTRB);
    int_outputs_9_d1     <= UNSIGNED(WDATA);
    -- outputs_10
    int_outputs_10_address0 <= UNSIGNED(outputs_10_address0);
    int_outputs_10_ce0   <= outputs_10_ce0;
    int_outputs_10_we0   <= outputs_10_we0;
    int_outputs_10_be0   <= (others => outputs_10_we0);
    int_outputs_10_d0    <= RESIZE(UNSIGNED(outputs_10_d0), 32);
    int_outputs_10_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_10_ce1   <= '1' when ar_hs = '1' or (int_outputs_10_write = '1' and WVALID  = '1') else '0';
    int_outputs_10_we1   <= '1' when int_outputs_10_write = '1' and WVALID = '1' else '0';
    int_outputs_10_be1   <= UNSIGNED(WSTRB);
    int_outputs_10_d1    <= UNSIGNED(WDATA);
    -- outputs_11
    int_outputs_11_address0 <= UNSIGNED(outputs_11_address0);
    int_outputs_11_ce0   <= outputs_11_ce0;
    int_outputs_11_we0   <= outputs_11_we0;
    int_outputs_11_be0   <= (others => outputs_11_we0);
    int_outputs_11_d0    <= RESIZE(UNSIGNED(outputs_11_d0), 32);
    int_outputs_11_address1 <= raddr(2 downto 2) when ar_hs = '1' else waddr(2 downto 2);
    int_outputs_11_ce1   <= '1' when ar_hs = '1' or (int_outputs_11_write = '1' and WVALID  = '1') else '0';
    int_outputs_11_we1   <= '1' when int_outputs_11_write = '1' and WVALID = '1' else '0';
    int_outputs_11_be1   <= UNSIGNED(WSTRB);
    int_outputs_11_d1    <= UNSIGNED(WDATA);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_0_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_0_BASE and raddr <= ADDR_INPUTS_0_HIGH) then
                    int_inputs_0_read <= '1';
                else
                    int_inputs_0_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_0_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_0_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_0_HIGH) then
                    int_inputs_0_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_0_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_1_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_1_BASE and raddr <= ADDR_INPUTS_1_HIGH) then
                    int_inputs_1_read <= '1';
                else
                    int_inputs_1_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_1_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_1_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_1_HIGH) then
                    int_inputs_1_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_1_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_2_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_2_BASE and raddr <= ADDR_INPUTS_2_HIGH) then
                    int_inputs_2_read <= '1';
                else
                    int_inputs_2_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_2_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_2_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_2_HIGH) then
                    int_inputs_2_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_2_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_3_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_3_BASE and raddr <= ADDR_INPUTS_3_HIGH) then
                    int_inputs_3_read <= '1';
                else
                    int_inputs_3_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_3_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_3_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_3_HIGH) then
                    int_inputs_3_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_3_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_4_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_4_BASE and raddr <= ADDR_INPUTS_4_HIGH) then
                    int_inputs_4_read <= '1';
                else
                    int_inputs_4_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_4_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_4_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_4_HIGH) then
                    int_inputs_4_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_4_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_5_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_5_BASE and raddr <= ADDR_INPUTS_5_HIGH) then
                    int_inputs_5_read <= '1';
                else
                    int_inputs_5_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_5_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_5_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_5_HIGH) then
                    int_inputs_5_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_5_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_6_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_6_BASE and raddr <= ADDR_INPUTS_6_HIGH) then
                    int_inputs_6_read <= '1';
                else
                    int_inputs_6_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_6_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_6_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_6_HIGH) then
                    int_inputs_6_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_6_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_7_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_7_BASE and raddr <= ADDR_INPUTS_7_HIGH) then
                    int_inputs_7_read <= '1';
                else
                    int_inputs_7_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_7_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_7_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_7_HIGH) then
                    int_inputs_7_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_7_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_8_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_8_BASE and raddr <= ADDR_INPUTS_8_HIGH) then
                    int_inputs_8_read <= '1';
                else
                    int_inputs_8_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_8_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_8_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_8_HIGH) then
                    int_inputs_8_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_8_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_9_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_9_BASE and raddr <= ADDR_INPUTS_9_HIGH) then
                    int_inputs_9_read <= '1';
                else
                    int_inputs_9_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_9_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_9_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_9_HIGH) then
                    int_inputs_9_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_9_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_10_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_10_BASE and raddr <= ADDR_INPUTS_10_HIGH) then
                    int_inputs_10_read <= '1';
                else
                    int_inputs_10_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_10_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_10_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_10_HIGH) then
                    int_inputs_10_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_10_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_11_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_11_BASE and raddr <= ADDR_INPUTS_11_HIGH) then
                    int_inputs_11_read <= '1';
                else
                    int_inputs_11_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_11_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_11_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_11_HIGH) then
                    int_inputs_11_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_11_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_0_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_0_BASE and raddr <= ADDR_COUNTS_0_HIGH) then
                    int_counts_0_read <= '1';
                else
                    int_counts_0_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_0_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_0_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_0_HIGH) then
                    int_counts_0_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_0_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_1_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_1_BASE and raddr <= ADDR_COUNTS_1_HIGH) then
                    int_counts_1_read <= '1';
                else
                    int_counts_1_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_1_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_1_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_1_HIGH) then
                    int_counts_1_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_1_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_2_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_2_BASE and raddr <= ADDR_COUNTS_2_HIGH) then
                    int_counts_2_read <= '1';
                else
                    int_counts_2_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_2_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_2_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_2_HIGH) then
                    int_counts_2_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_2_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_3_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_3_BASE and raddr <= ADDR_COUNTS_3_HIGH) then
                    int_counts_3_read <= '1';
                else
                    int_counts_3_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_3_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_3_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_3_HIGH) then
                    int_counts_3_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_3_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_4_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_4_BASE and raddr <= ADDR_COUNTS_4_HIGH) then
                    int_counts_4_read <= '1';
                else
                    int_counts_4_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_4_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_4_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_4_HIGH) then
                    int_counts_4_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_4_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_5_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_5_BASE and raddr <= ADDR_COUNTS_5_HIGH) then
                    int_counts_5_read <= '1';
                else
                    int_counts_5_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_5_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_5_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_5_HIGH) then
                    int_counts_5_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_5_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_6_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_6_BASE and raddr <= ADDR_COUNTS_6_HIGH) then
                    int_counts_6_read <= '1';
                else
                    int_counts_6_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_6_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_6_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_6_HIGH) then
                    int_counts_6_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_6_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_7_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_7_BASE and raddr <= ADDR_COUNTS_7_HIGH) then
                    int_counts_7_read <= '1';
                else
                    int_counts_7_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_7_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_7_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_7_HIGH) then
                    int_counts_7_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_7_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_8_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_8_BASE and raddr <= ADDR_COUNTS_8_HIGH) then
                    int_counts_8_read <= '1';
                else
                    int_counts_8_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_8_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_8_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_8_HIGH) then
                    int_counts_8_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_8_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_9_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_9_BASE and raddr <= ADDR_COUNTS_9_HIGH) then
                    int_counts_9_read <= '1';
                else
                    int_counts_9_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_9_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_9_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_9_HIGH) then
                    int_counts_9_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_9_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_10_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_10_BASE and raddr <= ADDR_COUNTS_10_HIGH) then
                    int_counts_10_read <= '1';
                else
                    int_counts_10_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_10_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_10_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_10_HIGH) then
                    int_counts_10_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_10_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_11_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_11_BASE and raddr <= ADDR_COUNTS_11_HIGH) then
                    int_counts_11_read <= '1';
                else
                    int_counts_11_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_11_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_11_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_11_HIGH) then
                    int_counts_11_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_11_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_0_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_0_BASE and raddr <= ADDR_OUTPUTS_0_HIGH) then
                    int_outputs_0_read <= '1';
                else
                    int_outputs_0_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_0_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_0_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_0_HIGH) then
                    int_outputs_0_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_0_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_1_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_1_BASE and raddr <= ADDR_OUTPUTS_1_HIGH) then
                    int_outputs_1_read <= '1';
                else
                    int_outputs_1_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_1_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_1_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_1_HIGH) then
                    int_outputs_1_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_1_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_2_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_2_BASE and raddr <= ADDR_OUTPUTS_2_HIGH) then
                    int_outputs_2_read <= '1';
                else
                    int_outputs_2_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_2_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_2_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_2_HIGH) then
                    int_outputs_2_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_2_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_3_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_3_BASE and raddr <= ADDR_OUTPUTS_3_HIGH) then
                    int_outputs_3_read <= '1';
                else
                    int_outputs_3_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_3_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_3_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_3_HIGH) then
                    int_outputs_3_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_3_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_4_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_4_BASE and raddr <= ADDR_OUTPUTS_4_HIGH) then
                    int_outputs_4_read <= '1';
                else
                    int_outputs_4_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_4_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_4_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_4_HIGH) then
                    int_outputs_4_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_4_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_5_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_5_BASE and raddr <= ADDR_OUTPUTS_5_HIGH) then
                    int_outputs_5_read <= '1';
                else
                    int_outputs_5_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_5_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_5_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_5_HIGH) then
                    int_outputs_5_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_5_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_6_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_6_BASE and raddr <= ADDR_OUTPUTS_6_HIGH) then
                    int_outputs_6_read <= '1';
                else
                    int_outputs_6_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_6_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_6_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_6_HIGH) then
                    int_outputs_6_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_6_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_7_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_7_BASE and raddr <= ADDR_OUTPUTS_7_HIGH) then
                    int_outputs_7_read <= '1';
                else
                    int_outputs_7_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_7_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_7_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_7_HIGH) then
                    int_outputs_7_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_7_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_8_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_8_BASE and raddr <= ADDR_OUTPUTS_8_HIGH) then
                    int_outputs_8_read <= '1';
                else
                    int_outputs_8_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_8_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_8_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_8_HIGH) then
                    int_outputs_8_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_8_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_9_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_9_BASE and raddr <= ADDR_OUTPUTS_9_HIGH) then
                    int_outputs_9_read <= '1';
                else
                    int_outputs_9_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_9_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_9_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_9_HIGH) then
                    int_outputs_9_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_9_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_10_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_10_BASE and raddr <= ADDR_OUTPUTS_10_HIGH) then
                    int_outputs_10_read <= '1';
                else
                    int_outputs_10_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_10_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_10_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_10_HIGH) then
                    int_outputs_10_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_10_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_11_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_11_BASE and raddr <= ADDR_OUTPUTS_11_HIGH) then
                    int_outputs_11_read <= '1';
                else
                    int_outputs_11_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_11_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_11_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_11_HIGH) then
                    int_outputs_11_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_11_write <= '0';
                end if;
            end if;
        end if;
    end process;


end architecture behave;

library IEEE;
USE IEEE.std_logic_1164.all;
USE IEEE.numeric_std.all;

entity estimate_FR_2_AXILiteS_s_axi_ram is
    generic (
        BYTES   : INTEGER :=4;
        DEPTH   : INTEGER :=256;
        AWIDTH  : INTEGER :=8);
    port (
        clk0    : in  STD_LOGIC;
        address0: in  UNSIGNED(AWIDTH-1 downto 0);
        ce0     : in  STD_LOGIC;
        we0     : in  STD_LOGIC;
        be0     : in  UNSIGNED(BYTES-1 downto 0);
        d0      : in  UNSIGNED(BYTES*8-1 downto 0);
        q0      : out UNSIGNED(BYTES*8-1 downto 0);
        clk1    : in  STD_LOGIC;
        address1: in  UNSIGNED(AWIDTH-1 downto 0);
        ce1     : in  STD_LOGIC;
        we1     : in  STD_LOGIC;
        be1     : in  UNSIGNED(BYTES-1 downto 0);
        d1      : in  UNSIGNED(BYTES*8-1 downto 0);
        q1      : out UNSIGNED(BYTES*8-1 downto 0));

end entity estimate_FR_2_AXILiteS_s_axi_ram;

architecture behave of estimate_FR_2_AXILiteS_s_axi_ram is
    signal address0_tmp : UNSIGNED(AWIDTH-1 downto 0);
    signal address1_tmp : UNSIGNED(AWIDTH-1 downto 0);
    type RAM_T is array (0 to DEPTH - 1) of UNSIGNED(BYTES*8 - 1 downto 0);
    shared variable mem : RAM_T := (others => (others => '0'));
begin

    process (address0)
    begin
    address0_tmp <= address0;
    --synthesis translate_off
          if (address0 > DEPTH-1) then
              address0_tmp <= (others => '0');
          else
              address0_tmp <= address0;
          end if;
    --synthesis translate_on
    end process;

    process (address1)
    begin
    address1_tmp <= address1;
    --synthesis translate_off
          if (address1 > DEPTH-1) then
              address1_tmp <= (others => '0');
          else
              address1_tmp <= address1;
          end if;
    --synthesis translate_on
    end process;

    --read port 0
    process (clk0) begin
        if (clk0'event and clk0 = '1') then
            if (ce0 = '1') then
                q0 <= mem(to_integer(address0_tmp));
            end if;
        end if;
    end process;

    --read port 1
    process (clk1) begin
        if (clk1'event and clk1 = '1') then
            if (ce1 = '1') then
                q1 <= mem(to_integer(address1_tmp));
            end if;
        end if;
    end process;

    gen_write : for i in 0 to BYTES - 1 generate
    begin
        --write port 0
        process (clk0)
        begin
            if (clk0'event and clk0 = '1') then
                if (ce0 = '1' and we0 = '1' and be0(i) = '1') then
                    mem(to_integer(address0_tmp))(8*i+7 downto 8*i) := d0(8*i+7 downto 8*i);
                end if;
            end if;
        end process;

        --write port 1
        process (clk1)
        begin
            if (clk1'event and clk1 = '1') then
                if (ce1 = '1' and we1 = '1' and be1(i) = '1') then
                    mem(to_integer(address1_tmp))(8*i+7 downto 8*i) := d1(8*i+7 downto 8*i);
                end if;
            end if;
        end process;

    end generate;

end architecture behave;


