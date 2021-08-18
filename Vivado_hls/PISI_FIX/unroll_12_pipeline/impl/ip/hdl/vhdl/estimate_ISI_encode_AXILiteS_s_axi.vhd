-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity estimate_ISI_encode_AXILiteS_s_axi is
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
    rem_0_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_0_ce0             :in   STD_LOGIC;
    rem_0_we0             :in   STD_LOGIC;
    rem_0_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_0_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_1_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_1_ce0             :in   STD_LOGIC;
    rem_1_we0             :in   STD_LOGIC;
    rem_1_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_1_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_2_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_2_ce0             :in   STD_LOGIC;
    rem_2_we0             :in   STD_LOGIC;
    rem_2_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_2_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_3_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_3_ce0             :in   STD_LOGIC;
    rem_3_we0             :in   STD_LOGIC;
    rem_3_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_3_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_4_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_4_ce0             :in   STD_LOGIC;
    rem_4_we0             :in   STD_LOGIC;
    rem_4_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_4_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_5_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_5_ce0             :in   STD_LOGIC;
    rem_5_we0             :in   STD_LOGIC;
    rem_5_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_5_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_6_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_6_ce0             :in   STD_LOGIC;
    rem_6_we0             :in   STD_LOGIC;
    rem_6_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_6_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_7_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_7_ce0             :in   STD_LOGIC;
    rem_7_we0             :in   STD_LOGIC;
    rem_7_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_7_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_8_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_8_ce0             :in   STD_LOGIC;
    rem_8_we0             :in   STD_LOGIC;
    rem_8_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_8_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_9_address0        :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_9_ce0             :in   STD_LOGIC;
    rem_9_we0             :in   STD_LOGIC;
    rem_9_d0              :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_9_q0              :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_10_address0       :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_10_ce0            :in   STD_LOGIC;
    rem_10_we0            :in   STD_LOGIC;
    rem_10_d0             :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_10_q0             :out  STD_LOGIC_VECTOR(31 downto 0);
    rem_11_address0       :in   STD_LOGIC_VECTOR(2 downto 0);
    rem_11_ce0            :in   STD_LOGIC;
    rem_11_we0            :in   STD_LOGIC;
    rem_11_d0             :in   STD_LOGIC_VECTOR(31 downto 0);
    rem_11_q0             :out  STD_LOGIC_VECTOR(31 downto 0);
    output_0              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_0_ap_vld       :in   STD_LOGIC;
    output_1              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_1_ap_vld       :in   STD_LOGIC;
    output_2              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_2_ap_vld       :in   STD_LOGIC;
    output_3              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_3_ap_vld       :in   STD_LOGIC;
    output_4              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_4_ap_vld       :in   STD_LOGIC;
    output_5              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_5_ap_vld       :in   STD_LOGIC;
    output_6              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_6_ap_vld       :in   STD_LOGIC;
    output_7              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_7_ap_vld       :in   STD_LOGIC;
    output_8              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_8_ap_vld       :in   STD_LOGIC;
    output_9              :in   STD_LOGIC_VECTOR(31 downto 0);
    output_9_ap_vld       :in   STD_LOGIC;
    output_10             :in   STD_LOGIC_VECTOR(31 downto 0);
    output_10_ap_vld      :in   STD_LOGIC;
    output_11             :in   STD_LOGIC_VECTOR(31 downto 0);
    output_11_ap_vld      :in   STD_LOGIC
);
end entity estimate_ISI_encode_AXILiteS_s_axi;

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
-- 0x320 : Data signal of output_0
--         bit 31~0 - output_0[31:0] (Read)
-- 0x324 : Control signal of output_0
--         bit 0  - output_0_ap_vld (Read/COR)
--         others - reserved
-- 0x328 : Data signal of output_1
--         bit 31~0 - output_1[31:0] (Read)
-- 0x32c : Control signal of output_1
--         bit 0  - output_1_ap_vld (Read/COR)
--         others - reserved
-- 0x330 : Data signal of output_2
--         bit 31~0 - output_2[31:0] (Read)
-- 0x334 : Control signal of output_2
--         bit 0  - output_2_ap_vld (Read/COR)
--         others - reserved
-- 0x338 : Data signal of output_3
--         bit 31~0 - output_3[31:0] (Read)
-- 0x33c : Control signal of output_3
--         bit 0  - output_3_ap_vld (Read/COR)
--         others - reserved
-- 0x340 : Data signal of output_4
--         bit 31~0 - output_4[31:0] (Read)
-- 0x344 : Control signal of output_4
--         bit 0  - output_4_ap_vld (Read/COR)
--         others - reserved
-- 0x348 : Data signal of output_5
--         bit 31~0 - output_5[31:0] (Read)
-- 0x34c : Control signal of output_5
--         bit 0  - output_5_ap_vld (Read/COR)
--         others - reserved
-- 0x350 : Data signal of output_6
--         bit 31~0 - output_6[31:0] (Read)
-- 0x354 : Control signal of output_6
--         bit 0  - output_6_ap_vld (Read/COR)
--         others - reserved
-- 0x358 : Data signal of output_7
--         bit 31~0 - output_7[31:0] (Read)
-- 0x35c : Control signal of output_7
--         bit 0  - output_7_ap_vld (Read/COR)
--         others - reserved
-- 0x360 : Data signal of output_8
--         bit 31~0 - output_8[31:0] (Read)
-- 0x364 : Control signal of output_8
--         bit 0  - output_8_ap_vld (Read/COR)
--         others - reserved
-- 0x368 : Data signal of output_9
--         bit 31~0 - output_9[31:0] (Read)
-- 0x36c : Control signal of output_9
--         bit 0  - output_9_ap_vld (Read/COR)
--         others - reserved
-- 0x370 : Data signal of output_10
--         bit 31~0 - output_10[31:0] (Read)
-- 0x374 : Control signal of output_10
--         bit 0  - output_10_ap_vld (Read/COR)
--         others - reserved
-- 0x378 : Data signal of output_11
--         bit 31~0 - output_11[31:0] (Read)
-- 0x37c : Control signal of output_11
--         bit 0  - output_11_ap_vld (Read/COR)
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
-- 0x1bf : Memory 'rem_0' (8 * 32b)
--         Word n : bit [31:0] - rem_0[n]
-- 0x1c0 ~
-- 0x1df : Memory 'rem_1' (8 * 32b)
--         Word n : bit [31:0] - rem_1[n]
-- 0x1e0 ~
-- 0x1ff : Memory 'rem_2' (8 * 32b)
--         Word n : bit [31:0] - rem_2[n]
-- 0x200 ~
-- 0x21f : Memory 'rem_3' (8 * 32b)
--         Word n : bit [31:0] - rem_3[n]
-- 0x220 ~
-- 0x23f : Memory 'rem_4' (8 * 32b)
--         Word n : bit [31:0] - rem_4[n]
-- 0x240 ~
-- 0x25f : Memory 'rem_5' (8 * 32b)
--         Word n : bit [31:0] - rem_5[n]
-- 0x260 ~
-- 0x27f : Memory 'rem_6' (8 * 32b)
--         Word n : bit [31:0] - rem_6[n]
-- 0x280 ~
-- 0x29f : Memory 'rem_7' (8 * 32b)
--         Word n : bit [31:0] - rem_7[n]
-- 0x2a0 ~
-- 0x2bf : Memory 'rem_8' (8 * 32b)
--         Word n : bit [31:0] - rem_8[n]
-- 0x2c0 ~
-- 0x2df : Memory 'rem_9' (8 * 32b)
--         Word n : bit [31:0] - rem_9[n]
-- 0x2e0 ~
-- 0x2ff : Memory 'rem_10' (8 * 32b)
--         Word n : bit [31:0] - rem_10[n]
-- 0x300 ~
-- 0x31f : Memory 'rem_11' (8 * 32b)
--         Word n : bit [31:0] - rem_11[n]
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of estimate_ISI_encode_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL          : INTEGER := 16#000#;
    constant ADDR_GIE              : INTEGER := 16#004#;
    constant ADDR_IER              : INTEGER := 16#008#;
    constant ADDR_ISR              : INTEGER := 16#00c#;
    constant ADDR_OUTPUT_0_DATA_0  : INTEGER := 16#320#;
    constant ADDR_OUTPUT_0_CTRL    : INTEGER := 16#324#;
    constant ADDR_OUTPUT_1_DATA_0  : INTEGER := 16#328#;
    constant ADDR_OUTPUT_1_CTRL    : INTEGER := 16#32c#;
    constant ADDR_OUTPUT_2_DATA_0  : INTEGER := 16#330#;
    constant ADDR_OUTPUT_2_CTRL    : INTEGER := 16#334#;
    constant ADDR_OUTPUT_3_DATA_0  : INTEGER := 16#338#;
    constant ADDR_OUTPUT_3_CTRL    : INTEGER := 16#33c#;
    constant ADDR_OUTPUT_4_DATA_0  : INTEGER := 16#340#;
    constant ADDR_OUTPUT_4_CTRL    : INTEGER := 16#344#;
    constant ADDR_OUTPUT_5_DATA_0  : INTEGER := 16#348#;
    constant ADDR_OUTPUT_5_CTRL    : INTEGER := 16#34c#;
    constant ADDR_OUTPUT_6_DATA_0  : INTEGER := 16#350#;
    constant ADDR_OUTPUT_6_CTRL    : INTEGER := 16#354#;
    constant ADDR_OUTPUT_7_DATA_0  : INTEGER := 16#358#;
    constant ADDR_OUTPUT_7_CTRL    : INTEGER := 16#35c#;
    constant ADDR_OUTPUT_8_DATA_0  : INTEGER := 16#360#;
    constant ADDR_OUTPUT_8_CTRL    : INTEGER := 16#364#;
    constant ADDR_OUTPUT_9_DATA_0  : INTEGER := 16#368#;
    constant ADDR_OUTPUT_9_CTRL    : INTEGER := 16#36c#;
    constant ADDR_OUTPUT_10_DATA_0 : INTEGER := 16#370#;
    constant ADDR_OUTPUT_10_CTRL   : INTEGER := 16#374#;
    constant ADDR_OUTPUT_11_DATA_0 : INTEGER := 16#378#;
    constant ADDR_OUTPUT_11_CTRL   : INTEGER := 16#37c#;
    constant ADDR_INPUTS_0_BASE    : INTEGER := 16#020#;
    constant ADDR_INPUTS_0_HIGH    : INTEGER := 16#03f#;
    constant ADDR_INPUTS_1_BASE    : INTEGER := 16#040#;
    constant ADDR_INPUTS_1_HIGH    : INTEGER := 16#05f#;
    constant ADDR_INPUTS_2_BASE    : INTEGER := 16#060#;
    constant ADDR_INPUTS_2_HIGH    : INTEGER := 16#07f#;
    constant ADDR_INPUTS_3_BASE    : INTEGER := 16#080#;
    constant ADDR_INPUTS_3_HIGH    : INTEGER := 16#09f#;
    constant ADDR_INPUTS_4_BASE    : INTEGER := 16#0a0#;
    constant ADDR_INPUTS_4_HIGH    : INTEGER := 16#0bf#;
    constant ADDR_INPUTS_5_BASE    : INTEGER := 16#0c0#;
    constant ADDR_INPUTS_5_HIGH    : INTEGER := 16#0df#;
    constant ADDR_INPUTS_6_BASE    : INTEGER := 16#0e0#;
    constant ADDR_INPUTS_6_HIGH    : INTEGER := 16#0ff#;
    constant ADDR_INPUTS_7_BASE    : INTEGER := 16#100#;
    constant ADDR_INPUTS_7_HIGH    : INTEGER := 16#11f#;
    constant ADDR_INPUTS_8_BASE    : INTEGER := 16#120#;
    constant ADDR_INPUTS_8_HIGH    : INTEGER := 16#13f#;
    constant ADDR_INPUTS_9_BASE    : INTEGER := 16#140#;
    constant ADDR_INPUTS_9_HIGH    : INTEGER := 16#15f#;
    constant ADDR_INPUTS_10_BASE   : INTEGER := 16#160#;
    constant ADDR_INPUTS_10_HIGH   : INTEGER := 16#17f#;
    constant ADDR_INPUTS_11_BASE   : INTEGER := 16#180#;
    constant ADDR_INPUTS_11_HIGH   : INTEGER := 16#19f#;
    constant ADDR_REM_0_BASE       : INTEGER := 16#1a0#;
    constant ADDR_REM_0_HIGH       : INTEGER := 16#1bf#;
    constant ADDR_REM_1_BASE       : INTEGER := 16#1c0#;
    constant ADDR_REM_1_HIGH       : INTEGER := 16#1df#;
    constant ADDR_REM_2_BASE       : INTEGER := 16#1e0#;
    constant ADDR_REM_2_HIGH       : INTEGER := 16#1ff#;
    constant ADDR_REM_3_BASE       : INTEGER := 16#200#;
    constant ADDR_REM_3_HIGH       : INTEGER := 16#21f#;
    constant ADDR_REM_4_BASE       : INTEGER := 16#220#;
    constant ADDR_REM_4_HIGH       : INTEGER := 16#23f#;
    constant ADDR_REM_5_BASE       : INTEGER := 16#240#;
    constant ADDR_REM_5_HIGH       : INTEGER := 16#25f#;
    constant ADDR_REM_6_BASE       : INTEGER := 16#260#;
    constant ADDR_REM_6_HIGH       : INTEGER := 16#27f#;
    constant ADDR_REM_7_BASE       : INTEGER := 16#280#;
    constant ADDR_REM_7_HIGH       : INTEGER := 16#29f#;
    constant ADDR_REM_8_BASE       : INTEGER := 16#2a0#;
    constant ADDR_REM_8_HIGH       : INTEGER := 16#2bf#;
    constant ADDR_REM_9_BASE       : INTEGER := 16#2c0#;
    constant ADDR_REM_9_HIGH       : INTEGER := 16#2df#;
    constant ADDR_REM_10_BASE      : INTEGER := 16#2e0#;
    constant ADDR_REM_10_HIGH      : INTEGER := 16#2ff#;
    constant ADDR_REM_11_BASE      : INTEGER := 16#300#;
    constant ADDR_REM_11_HIGH      : INTEGER := 16#31f#;
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
    signal int_output_0        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_0_ap_vld : STD_LOGIC;
    signal int_output_1        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_1_ap_vld : STD_LOGIC;
    signal int_output_2        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_2_ap_vld : STD_LOGIC;
    signal int_output_3        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_3_ap_vld : STD_LOGIC;
    signal int_output_4        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_4_ap_vld : STD_LOGIC;
    signal int_output_5        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_5_ap_vld : STD_LOGIC;
    signal int_output_6        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_6_ap_vld : STD_LOGIC;
    signal int_output_7        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_7_ap_vld : STD_LOGIC;
    signal int_output_8        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_8_ap_vld : STD_LOGIC;
    signal int_output_9        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_9_ap_vld : STD_LOGIC;
    signal int_output_10       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_10_ap_vld : STD_LOGIC;
    signal int_output_11       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_output_11_ap_vld : STD_LOGIC;
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
    signal int_rem_0_address0  : UNSIGNED(2 downto 0);
    signal int_rem_0_ce0       : STD_LOGIC;
    signal int_rem_0_we0       : STD_LOGIC;
    signal int_rem_0_be0       : UNSIGNED(3 downto 0);
    signal int_rem_0_d0        : UNSIGNED(31 downto 0);
    signal int_rem_0_q0        : UNSIGNED(31 downto 0);
    signal int_rem_0_address1  : UNSIGNED(2 downto 0);
    signal int_rem_0_ce1       : STD_LOGIC;
    signal int_rem_0_we1       : STD_LOGIC;
    signal int_rem_0_be1       : UNSIGNED(3 downto 0);
    signal int_rem_0_d1        : UNSIGNED(31 downto 0);
    signal int_rem_0_q1        : UNSIGNED(31 downto 0);
    signal int_rem_0_read      : STD_LOGIC;
    signal int_rem_0_write     : STD_LOGIC;
    signal int_rem_1_address0  : UNSIGNED(2 downto 0);
    signal int_rem_1_ce0       : STD_LOGIC;
    signal int_rem_1_we0       : STD_LOGIC;
    signal int_rem_1_be0       : UNSIGNED(3 downto 0);
    signal int_rem_1_d0        : UNSIGNED(31 downto 0);
    signal int_rem_1_q0        : UNSIGNED(31 downto 0);
    signal int_rem_1_address1  : UNSIGNED(2 downto 0);
    signal int_rem_1_ce1       : STD_LOGIC;
    signal int_rem_1_we1       : STD_LOGIC;
    signal int_rem_1_be1       : UNSIGNED(3 downto 0);
    signal int_rem_1_d1        : UNSIGNED(31 downto 0);
    signal int_rem_1_q1        : UNSIGNED(31 downto 0);
    signal int_rem_1_read      : STD_LOGIC;
    signal int_rem_1_write     : STD_LOGIC;
    signal int_rem_2_address0  : UNSIGNED(2 downto 0);
    signal int_rem_2_ce0       : STD_LOGIC;
    signal int_rem_2_we0       : STD_LOGIC;
    signal int_rem_2_be0       : UNSIGNED(3 downto 0);
    signal int_rem_2_d0        : UNSIGNED(31 downto 0);
    signal int_rem_2_q0        : UNSIGNED(31 downto 0);
    signal int_rem_2_address1  : UNSIGNED(2 downto 0);
    signal int_rem_2_ce1       : STD_LOGIC;
    signal int_rem_2_we1       : STD_LOGIC;
    signal int_rem_2_be1       : UNSIGNED(3 downto 0);
    signal int_rem_2_d1        : UNSIGNED(31 downto 0);
    signal int_rem_2_q1        : UNSIGNED(31 downto 0);
    signal int_rem_2_read      : STD_LOGIC;
    signal int_rem_2_write     : STD_LOGIC;
    signal int_rem_3_address0  : UNSIGNED(2 downto 0);
    signal int_rem_3_ce0       : STD_LOGIC;
    signal int_rem_3_we0       : STD_LOGIC;
    signal int_rem_3_be0       : UNSIGNED(3 downto 0);
    signal int_rem_3_d0        : UNSIGNED(31 downto 0);
    signal int_rem_3_q0        : UNSIGNED(31 downto 0);
    signal int_rem_3_address1  : UNSIGNED(2 downto 0);
    signal int_rem_3_ce1       : STD_LOGIC;
    signal int_rem_3_we1       : STD_LOGIC;
    signal int_rem_3_be1       : UNSIGNED(3 downto 0);
    signal int_rem_3_d1        : UNSIGNED(31 downto 0);
    signal int_rem_3_q1        : UNSIGNED(31 downto 0);
    signal int_rem_3_read      : STD_LOGIC;
    signal int_rem_3_write     : STD_LOGIC;
    signal int_rem_4_address0  : UNSIGNED(2 downto 0);
    signal int_rem_4_ce0       : STD_LOGIC;
    signal int_rem_4_we0       : STD_LOGIC;
    signal int_rem_4_be0       : UNSIGNED(3 downto 0);
    signal int_rem_4_d0        : UNSIGNED(31 downto 0);
    signal int_rem_4_q0        : UNSIGNED(31 downto 0);
    signal int_rem_4_address1  : UNSIGNED(2 downto 0);
    signal int_rem_4_ce1       : STD_LOGIC;
    signal int_rem_4_we1       : STD_LOGIC;
    signal int_rem_4_be1       : UNSIGNED(3 downto 0);
    signal int_rem_4_d1        : UNSIGNED(31 downto 0);
    signal int_rem_4_q1        : UNSIGNED(31 downto 0);
    signal int_rem_4_read      : STD_LOGIC;
    signal int_rem_4_write     : STD_LOGIC;
    signal int_rem_5_address0  : UNSIGNED(2 downto 0);
    signal int_rem_5_ce0       : STD_LOGIC;
    signal int_rem_5_we0       : STD_LOGIC;
    signal int_rem_5_be0       : UNSIGNED(3 downto 0);
    signal int_rem_5_d0        : UNSIGNED(31 downto 0);
    signal int_rem_5_q0        : UNSIGNED(31 downto 0);
    signal int_rem_5_address1  : UNSIGNED(2 downto 0);
    signal int_rem_5_ce1       : STD_LOGIC;
    signal int_rem_5_we1       : STD_LOGIC;
    signal int_rem_5_be1       : UNSIGNED(3 downto 0);
    signal int_rem_5_d1        : UNSIGNED(31 downto 0);
    signal int_rem_5_q1        : UNSIGNED(31 downto 0);
    signal int_rem_5_read      : STD_LOGIC;
    signal int_rem_5_write     : STD_LOGIC;
    signal int_rem_6_address0  : UNSIGNED(2 downto 0);
    signal int_rem_6_ce0       : STD_LOGIC;
    signal int_rem_6_we0       : STD_LOGIC;
    signal int_rem_6_be0       : UNSIGNED(3 downto 0);
    signal int_rem_6_d0        : UNSIGNED(31 downto 0);
    signal int_rem_6_q0        : UNSIGNED(31 downto 0);
    signal int_rem_6_address1  : UNSIGNED(2 downto 0);
    signal int_rem_6_ce1       : STD_LOGIC;
    signal int_rem_6_we1       : STD_LOGIC;
    signal int_rem_6_be1       : UNSIGNED(3 downto 0);
    signal int_rem_6_d1        : UNSIGNED(31 downto 0);
    signal int_rem_6_q1        : UNSIGNED(31 downto 0);
    signal int_rem_6_read      : STD_LOGIC;
    signal int_rem_6_write     : STD_LOGIC;
    signal int_rem_7_address0  : UNSIGNED(2 downto 0);
    signal int_rem_7_ce0       : STD_LOGIC;
    signal int_rem_7_we0       : STD_LOGIC;
    signal int_rem_7_be0       : UNSIGNED(3 downto 0);
    signal int_rem_7_d0        : UNSIGNED(31 downto 0);
    signal int_rem_7_q0        : UNSIGNED(31 downto 0);
    signal int_rem_7_address1  : UNSIGNED(2 downto 0);
    signal int_rem_7_ce1       : STD_LOGIC;
    signal int_rem_7_we1       : STD_LOGIC;
    signal int_rem_7_be1       : UNSIGNED(3 downto 0);
    signal int_rem_7_d1        : UNSIGNED(31 downto 0);
    signal int_rem_7_q1        : UNSIGNED(31 downto 0);
    signal int_rem_7_read      : STD_LOGIC;
    signal int_rem_7_write     : STD_LOGIC;
    signal int_rem_8_address0  : UNSIGNED(2 downto 0);
    signal int_rem_8_ce0       : STD_LOGIC;
    signal int_rem_8_we0       : STD_LOGIC;
    signal int_rem_8_be0       : UNSIGNED(3 downto 0);
    signal int_rem_8_d0        : UNSIGNED(31 downto 0);
    signal int_rem_8_q0        : UNSIGNED(31 downto 0);
    signal int_rem_8_address1  : UNSIGNED(2 downto 0);
    signal int_rem_8_ce1       : STD_LOGIC;
    signal int_rem_8_we1       : STD_LOGIC;
    signal int_rem_8_be1       : UNSIGNED(3 downto 0);
    signal int_rem_8_d1        : UNSIGNED(31 downto 0);
    signal int_rem_8_q1        : UNSIGNED(31 downto 0);
    signal int_rem_8_read      : STD_LOGIC;
    signal int_rem_8_write     : STD_LOGIC;
    signal int_rem_9_address0  : UNSIGNED(2 downto 0);
    signal int_rem_9_ce0       : STD_LOGIC;
    signal int_rem_9_we0       : STD_LOGIC;
    signal int_rem_9_be0       : UNSIGNED(3 downto 0);
    signal int_rem_9_d0        : UNSIGNED(31 downto 0);
    signal int_rem_9_q0        : UNSIGNED(31 downto 0);
    signal int_rem_9_address1  : UNSIGNED(2 downto 0);
    signal int_rem_9_ce1       : STD_LOGIC;
    signal int_rem_9_we1       : STD_LOGIC;
    signal int_rem_9_be1       : UNSIGNED(3 downto 0);
    signal int_rem_9_d1        : UNSIGNED(31 downto 0);
    signal int_rem_9_q1        : UNSIGNED(31 downto 0);
    signal int_rem_9_read      : STD_LOGIC;
    signal int_rem_9_write     : STD_LOGIC;
    signal int_rem_10_address0 : UNSIGNED(2 downto 0);
    signal int_rem_10_ce0      : STD_LOGIC;
    signal int_rem_10_we0      : STD_LOGIC;
    signal int_rem_10_be0      : UNSIGNED(3 downto 0);
    signal int_rem_10_d0       : UNSIGNED(31 downto 0);
    signal int_rem_10_q0       : UNSIGNED(31 downto 0);
    signal int_rem_10_address1 : UNSIGNED(2 downto 0);
    signal int_rem_10_ce1      : STD_LOGIC;
    signal int_rem_10_we1      : STD_LOGIC;
    signal int_rem_10_be1      : UNSIGNED(3 downto 0);
    signal int_rem_10_d1       : UNSIGNED(31 downto 0);
    signal int_rem_10_q1       : UNSIGNED(31 downto 0);
    signal int_rem_10_read     : STD_LOGIC;
    signal int_rem_10_write    : STD_LOGIC;
    signal int_rem_11_address0 : UNSIGNED(2 downto 0);
    signal int_rem_11_ce0      : STD_LOGIC;
    signal int_rem_11_we0      : STD_LOGIC;
    signal int_rem_11_be0      : UNSIGNED(3 downto 0);
    signal int_rem_11_d0       : UNSIGNED(31 downto 0);
    signal int_rem_11_q0       : UNSIGNED(31 downto 0);
    signal int_rem_11_address1 : UNSIGNED(2 downto 0);
    signal int_rem_11_ce1      : STD_LOGIC;
    signal int_rem_11_we1      : STD_LOGIC;
    signal int_rem_11_be1      : UNSIGNED(3 downto 0);
    signal int_rem_11_d1       : UNSIGNED(31 downto 0);
    signal int_rem_11_q1       : UNSIGNED(31 downto 0);
    signal int_rem_11_read     : STD_LOGIC;
    signal int_rem_11_write    : STD_LOGIC;

    component estimate_ISI_encode_AXILiteS_s_axi_ram is
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
    end component estimate_ISI_encode_AXILiteS_s_axi_ram;

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
int_inputs_0 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_1 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_2 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_3 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_4 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_5 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_6 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_7 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_8 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_9 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_10 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
int_inputs_11 : estimate_ISI_encode_AXILiteS_s_axi_ram
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
-- int_rem_0
int_rem_0 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_0_address0,
     ce0      => int_rem_0_ce0,
     we0      => int_rem_0_we0,
     be0      => int_rem_0_be0,
     d0       => int_rem_0_d0,
     q0       => int_rem_0_q0,
     clk1     => ACLK,
     address1 => int_rem_0_address1,
     ce1      => int_rem_0_ce1,
     we1      => int_rem_0_we1,
     be1      => int_rem_0_be1,
     d1       => int_rem_0_d1,
     q1       => int_rem_0_q1);
-- int_rem_1
int_rem_1 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_1_address0,
     ce0      => int_rem_1_ce0,
     we0      => int_rem_1_we0,
     be0      => int_rem_1_be0,
     d0       => int_rem_1_d0,
     q0       => int_rem_1_q0,
     clk1     => ACLK,
     address1 => int_rem_1_address1,
     ce1      => int_rem_1_ce1,
     we1      => int_rem_1_we1,
     be1      => int_rem_1_be1,
     d1       => int_rem_1_d1,
     q1       => int_rem_1_q1);
-- int_rem_2
int_rem_2 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_2_address0,
     ce0      => int_rem_2_ce0,
     we0      => int_rem_2_we0,
     be0      => int_rem_2_be0,
     d0       => int_rem_2_d0,
     q0       => int_rem_2_q0,
     clk1     => ACLK,
     address1 => int_rem_2_address1,
     ce1      => int_rem_2_ce1,
     we1      => int_rem_2_we1,
     be1      => int_rem_2_be1,
     d1       => int_rem_2_d1,
     q1       => int_rem_2_q1);
-- int_rem_3
int_rem_3 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_3_address0,
     ce0      => int_rem_3_ce0,
     we0      => int_rem_3_we0,
     be0      => int_rem_3_be0,
     d0       => int_rem_3_d0,
     q0       => int_rem_3_q0,
     clk1     => ACLK,
     address1 => int_rem_3_address1,
     ce1      => int_rem_3_ce1,
     we1      => int_rem_3_we1,
     be1      => int_rem_3_be1,
     d1       => int_rem_3_d1,
     q1       => int_rem_3_q1);
-- int_rem_4
int_rem_4 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_4_address0,
     ce0      => int_rem_4_ce0,
     we0      => int_rem_4_we0,
     be0      => int_rem_4_be0,
     d0       => int_rem_4_d0,
     q0       => int_rem_4_q0,
     clk1     => ACLK,
     address1 => int_rem_4_address1,
     ce1      => int_rem_4_ce1,
     we1      => int_rem_4_we1,
     be1      => int_rem_4_be1,
     d1       => int_rem_4_d1,
     q1       => int_rem_4_q1);
-- int_rem_5
int_rem_5 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_5_address0,
     ce0      => int_rem_5_ce0,
     we0      => int_rem_5_we0,
     be0      => int_rem_5_be0,
     d0       => int_rem_5_d0,
     q0       => int_rem_5_q0,
     clk1     => ACLK,
     address1 => int_rem_5_address1,
     ce1      => int_rem_5_ce1,
     we1      => int_rem_5_we1,
     be1      => int_rem_5_be1,
     d1       => int_rem_5_d1,
     q1       => int_rem_5_q1);
-- int_rem_6
int_rem_6 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_6_address0,
     ce0      => int_rem_6_ce0,
     we0      => int_rem_6_we0,
     be0      => int_rem_6_be0,
     d0       => int_rem_6_d0,
     q0       => int_rem_6_q0,
     clk1     => ACLK,
     address1 => int_rem_6_address1,
     ce1      => int_rem_6_ce1,
     we1      => int_rem_6_we1,
     be1      => int_rem_6_be1,
     d1       => int_rem_6_d1,
     q1       => int_rem_6_q1);
-- int_rem_7
int_rem_7 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_7_address0,
     ce0      => int_rem_7_ce0,
     we0      => int_rem_7_we0,
     be0      => int_rem_7_be0,
     d0       => int_rem_7_d0,
     q0       => int_rem_7_q0,
     clk1     => ACLK,
     address1 => int_rem_7_address1,
     ce1      => int_rem_7_ce1,
     we1      => int_rem_7_we1,
     be1      => int_rem_7_be1,
     d1       => int_rem_7_d1,
     q1       => int_rem_7_q1);
-- int_rem_8
int_rem_8 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_8_address0,
     ce0      => int_rem_8_ce0,
     we0      => int_rem_8_we0,
     be0      => int_rem_8_be0,
     d0       => int_rem_8_d0,
     q0       => int_rem_8_q0,
     clk1     => ACLK,
     address1 => int_rem_8_address1,
     ce1      => int_rem_8_ce1,
     we1      => int_rem_8_we1,
     be1      => int_rem_8_be1,
     d1       => int_rem_8_d1,
     q1       => int_rem_8_q1);
-- int_rem_9
int_rem_9 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_9_address0,
     ce0      => int_rem_9_ce0,
     we0      => int_rem_9_we0,
     be0      => int_rem_9_be0,
     d0       => int_rem_9_d0,
     q0       => int_rem_9_q0,
     clk1     => ACLK,
     address1 => int_rem_9_address1,
     ce1      => int_rem_9_ce1,
     we1      => int_rem_9_we1,
     be1      => int_rem_9_be1,
     d1       => int_rem_9_d1,
     q1       => int_rem_9_q1);
-- int_rem_10
int_rem_10 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_10_address0,
     ce0      => int_rem_10_ce0,
     we0      => int_rem_10_we0,
     be0      => int_rem_10_be0,
     d0       => int_rem_10_d0,
     q0       => int_rem_10_q0,
     clk1     => ACLK,
     address1 => int_rem_10_address1,
     ce1      => int_rem_10_ce1,
     we1      => int_rem_10_we1,
     be1      => int_rem_10_be1,
     d1       => int_rem_10_d1,
     q1       => int_rem_10_q1);
-- int_rem_11
int_rem_11 : estimate_ISI_encode_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 8,
     AWIDTH   => log2(8))
port map (
     clk0     => ACLK,
     address0 => int_rem_11_address0,
     ce0      => int_rem_11_ce0,
     we0      => int_rem_11_we0,
     be0      => int_rem_11_be0,
     d0       => int_rem_11_d0,
     q0       => int_rem_11_q0,
     clk1     => ACLK,
     address1 => int_rem_11_address1,
     ce1      => int_rem_11_ce1,
     we1      => int_rem_11_we1,
     be1      => int_rem_11_be1,
     d1       => int_rem_11_d1,
     q1       => int_rem_11_q1);

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
    RVALID_t  <= '1' when (rstate = rddata) and (int_inputs_0_read = '0') and (int_inputs_1_read = '0') and (int_inputs_2_read = '0') and (int_inputs_3_read = '0') and (int_inputs_4_read = '0') and (int_inputs_5_read = '0') and (int_inputs_6_read = '0') and (int_inputs_7_read = '0') and (int_inputs_8_read = '0') and (int_inputs_9_read = '0') and (int_inputs_10_read = '0') and (int_inputs_11_read = '0') and (int_rem_0_read = '0') and (int_rem_1_read = '0') and (int_rem_2_read = '0') and (int_rem_3_read = '0') and (int_rem_4_read = '0') and (int_rem_5_read = '0') and (int_rem_6_read = '0') and (int_rem_7_read = '0') and (int_rem_8_read = '0') and (int_rem_9_read = '0') and (int_rem_10_read = '0') and (int_rem_11_read = '0') else '0';
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
                    when ADDR_OUTPUT_0_DATA_0 =>
                        rdata_data <= RESIZE(int_output_0(31 downto 0), 32);
                    when ADDR_OUTPUT_0_CTRL =>
                        rdata_data <= (0 => int_output_0_ap_vld, others => '0');
                    when ADDR_OUTPUT_1_DATA_0 =>
                        rdata_data <= RESIZE(int_output_1(31 downto 0), 32);
                    when ADDR_OUTPUT_1_CTRL =>
                        rdata_data <= (0 => int_output_1_ap_vld, others => '0');
                    when ADDR_OUTPUT_2_DATA_0 =>
                        rdata_data <= RESIZE(int_output_2(31 downto 0), 32);
                    when ADDR_OUTPUT_2_CTRL =>
                        rdata_data <= (0 => int_output_2_ap_vld, others => '0');
                    when ADDR_OUTPUT_3_DATA_0 =>
                        rdata_data <= RESIZE(int_output_3(31 downto 0), 32);
                    when ADDR_OUTPUT_3_CTRL =>
                        rdata_data <= (0 => int_output_3_ap_vld, others => '0');
                    when ADDR_OUTPUT_4_DATA_0 =>
                        rdata_data <= RESIZE(int_output_4(31 downto 0), 32);
                    when ADDR_OUTPUT_4_CTRL =>
                        rdata_data <= (0 => int_output_4_ap_vld, others => '0');
                    when ADDR_OUTPUT_5_DATA_0 =>
                        rdata_data <= RESIZE(int_output_5(31 downto 0), 32);
                    when ADDR_OUTPUT_5_CTRL =>
                        rdata_data <= (0 => int_output_5_ap_vld, others => '0');
                    when ADDR_OUTPUT_6_DATA_0 =>
                        rdata_data <= RESIZE(int_output_6(31 downto 0), 32);
                    when ADDR_OUTPUT_6_CTRL =>
                        rdata_data <= (0 => int_output_6_ap_vld, others => '0');
                    when ADDR_OUTPUT_7_DATA_0 =>
                        rdata_data <= RESIZE(int_output_7(31 downto 0), 32);
                    when ADDR_OUTPUT_7_CTRL =>
                        rdata_data <= (0 => int_output_7_ap_vld, others => '0');
                    when ADDR_OUTPUT_8_DATA_0 =>
                        rdata_data <= RESIZE(int_output_8(31 downto 0), 32);
                    when ADDR_OUTPUT_8_CTRL =>
                        rdata_data <= (0 => int_output_8_ap_vld, others => '0');
                    when ADDR_OUTPUT_9_DATA_0 =>
                        rdata_data <= RESIZE(int_output_9(31 downto 0), 32);
                    when ADDR_OUTPUT_9_CTRL =>
                        rdata_data <= (0 => int_output_9_ap_vld, others => '0');
                    when ADDR_OUTPUT_10_DATA_0 =>
                        rdata_data <= RESIZE(int_output_10(31 downto 0), 32);
                    when ADDR_OUTPUT_10_CTRL =>
                        rdata_data <= (0 => int_output_10_ap_vld, others => '0');
                    when ADDR_OUTPUT_11_DATA_0 =>
                        rdata_data <= RESIZE(int_output_11(31 downto 0), 32);
                    when ADDR_OUTPUT_11_CTRL =>
                        rdata_data <= (0 => int_output_11_ap_vld, others => '0');
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
                elsif (int_rem_0_read = '1') then
                    rdata_data <= int_rem_0_q1;
                elsif (int_rem_1_read = '1') then
                    rdata_data <= int_rem_1_q1;
                elsif (int_rem_2_read = '1') then
                    rdata_data <= int_rem_2_q1;
                elsif (int_rem_3_read = '1') then
                    rdata_data <= int_rem_3_q1;
                elsif (int_rem_4_read = '1') then
                    rdata_data <= int_rem_4_q1;
                elsif (int_rem_5_read = '1') then
                    rdata_data <= int_rem_5_q1;
                elsif (int_rem_6_read = '1') then
                    rdata_data <= int_rem_6_q1;
                elsif (int_rem_7_read = '1') then
                    rdata_data <= int_rem_7_q1;
                elsif (int_rem_8_read = '1') then
                    rdata_data <= int_rem_8_q1;
                elsif (int_rem_9_read = '1') then
                    rdata_data <= int_rem_9_q1;
                elsif (int_rem_10_read = '1') then
                    rdata_data <= int_rem_10_q1;
                elsif (int_rem_11_read = '1') then
                    rdata_data <= int_rem_11_q1;
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

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_0 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_0_ap_vld = '1') then
                    int_output_0 <= UNSIGNED(output_0); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_0_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_0_ap_vld = '1') then
                    int_output_0_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_0_CTRL) then
                    int_output_0_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_1 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_1_ap_vld = '1') then
                    int_output_1 <= UNSIGNED(output_1); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_1_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_1_ap_vld = '1') then
                    int_output_1_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_1_CTRL) then
                    int_output_1_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_2 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_2_ap_vld = '1') then
                    int_output_2 <= UNSIGNED(output_2); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_2_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_2_ap_vld = '1') then
                    int_output_2_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_2_CTRL) then
                    int_output_2_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_3 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_3_ap_vld = '1') then
                    int_output_3 <= UNSIGNED(output_3); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_3_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_3_ap_vld = '1') then
                    int_output_3_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_3_CTRL) then
                    int_output_3_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_4 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_4_ap_vld = '1') then
                    int_output_4 <= UNSIGNED(output_4); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_4_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_4_ap_vld = '1') then
                    int_output_4_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_4_CTRL) then
                    int_output_4_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_5 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_5_ap_vld = '1') then
                    int_output_5 <= UNSIGNED(output_5); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_5_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_5_ap_vld = '1') then
                    int_output_5_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_5_CTRL) then
                    int_output_5_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_6 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_6_ap_vld = '1') then
                    int_output_6 <= UNSIGNED(output_6); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_6_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_6_ap_vld = '1') then
                    int_output_6_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_6_CTRL) then
                    int_output_6_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_7 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_7_ap_vld = '1') then
                    int_output_7 <= UNSIGNED(output_7); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_7_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_7_ap_vld = '1') then
                    int_output_7_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_7_CTRL) then
                    int_output_7_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_8 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_8_ap_vld = '1') then
                    int_output_8 <= UNSIGNED(output_8); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_8_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_8_ap_vld = '1') then
                    int_output_8_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_8_CTRL) then
                    int_output_8_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_9 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_9_ap_vld = '1') then
                    int_output_9 <= UNSIGNED(output_9); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_9_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_9_ap_vld = '1') then
                    int_output_9_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_9_CTRL) then
                    int_output_9_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_10 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_10_ap_vld = '1') then
                    int_output_10 <= UNSIGNED(output_10); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_10_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_10_ap_vld = '1') then
                    int_output_10_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_10_CTRL) then
                    int_output_10_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_11 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_11_ap_vld = '1') then
                    int_output_11 <= UNSIGNED(output_11); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_11_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_11_ap_vld = '1') then
                    int_output_11_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_11_CTRL) then
                    int_output_11_ap_vld <= '0'; -- clear on read
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
    -- rem_0
    int_rem_0_address0   <= UNSIGNED(rem_0_address0);
    int_rem_0_ce0        <= rem_0_ce0;
    int_rem_0_we0        <= rem_0_we0;
    int_rem_0_be0        <= (others => rem_0_we0);
    int_rem_0_d0         <= RESIZE(UNSIGNED(rem_0_d0), 32);
    rem_0_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_0_q0, 32));
    int_rem_0_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_0_ce1        <= '1' when ar_hs = '1' or (int_rem_0_write = '1' and WVALID  = '1') else '0';
    int_rem_0_we1        <= '1' when int_rem_0_write = '1' and WVALID = '1' else '0';
    int_rem_0_be1        <= UNSIGNED(WSTRB);
    int_rem_0_d1         <= UNSIGNED(WDATA);
    -- rem_1
    int_rem_1_address0   <= UNSIGNED(rem_1_address0);
    int_rem_1_ce0        <= rem_1_ce0;
    int_rem_1_we0        <= rem_1_we0;
    int_rem_1_be0        <= (others => rem_1_we0);
    int_rem_1_d0         <= RESIZE(UNSIGNED(rem_1_d0), 32);
    rem_1_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_1_q0, 32));
    int_rem_1_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_1_ce1        <= '1' when ar_hs = '1' or (int_rem_1_write = '1' and WVALID  = '1') else '0';
    int_rem_1_we1        <= '1' when int_rem_1_write = '1' and WVALID = '1' else '0';
    int_rem_1_be1        <= UNSIGNED(WSTRB);
    int_rem_1_d1         <= UNSIGNED(WDATA);
    -- rem_2
    int_rem_2_address0   <= UNSIGNED(rem_2_address0);
    int_rem_2_ce0        <= rem_2_ce0;
    int_rem_2_we0        <= rem_2_we0;
    int_rem_2_be0        <= (others => rem_2_we0);
    int_rem_2_d0         <= RESIZE(UNSIGNED(rem_2_d0), 32);
    rem_2_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_2_q0, 32));
    int_rem_2_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_2_ce1        <= '1' when ar_hs = '1' or (int_rem_2_write = '1' and WVALID  = '1') else '0';
    int_rem_2_we1        <= '1' when int_rem_2_write = '1' and WVALID = '1' else '0';
    int_rem_2_be1        <= UNSIGNED(WSTRB);
    int_rem_2_d1         <= UNSIGNED(WDATA);
    -- rem_3
    int_rem_3_address0   <= UNSIGNED(rem_3_address0);
    int_rem_3_ce0        <= rem_3_ce0;
    int_rem_3_we0        <= rem_3_we0;
    int_rem_3_be0        <= (others => rem_3_we0);
    int_rem_3_d0         <= RESIZE(UNSIGNED(rem_3_d0), 32);
    rem_3_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_3_q0, 32));
    int_rem_3_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_3_ce1        <= '1' when ar_hs = '1' or (int_rem_3_write = '1' and WVALID  = '1') else '0';
    int_rem_3_we1        <= '1' when int_rem_3_write = '1' and WVALID = '1' else '0';
    int_rem_3_be1        <= UNSIGNED(WSTRB);
    int_rem_3_d1         <= UNSIGNED(WDATA);
    -- rem_4
    int_rem_4_address0   <= UNSIGNED(rem_4_address0);
    int_rem_4_ce0        <= rem_4_ce0;
    int_rem_4_we0        <= rem_4_we0;
    int_rem_4_be0        <= (others => rem_4_we0);
    int_rem_4_d0         <= RESIZE(UNSIGNED(rem_4_d0), 32);
    rem_4_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_4_q0, 32));
    int_rem_4_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_4_ce1        <= '1' when ar_hs = '1' or (int_rem_4_write = '1' and WVALID  = '1') else '0';
    int_rem_4_we1        <= '1' when int_rem_4_write = '1' and WVALID = '1' else '0';
    int_rem_4_be1        <= UNSIGNED(WSTRB);
    int_rem_4_d1         <= UNSIGNED(WDATA);
    -- rem_5
    int_rem_5_address0   <= UNSIGNED(rem_5_address0);
    int_rem_5_ce0        <= rem_5_ce0;
    int_rem_5_we0        <= rem_5_we0;
    int_rem_5_be0        <= (others => rem_5_we0);
    int_rem_5_d0         <= RESIZE(UNSIGNED(rem_5_d0), 32);
    rem_5_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_5_q0, 32));
    int_rem_5_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_5_ce1        <= '1' when ar_hs = '1' or (int_rem_5_write = '1' and WVALID  = '1') else '0';
    int_rem_5_we1        <= '1' when int_rem_5_write = '1' and WVALID = '1' else '0';
    int_rem_5_be1        <= UNSIGNED(WSTRB);
    int_rem_5_d1         <= UNSIGNED(WDATA);
    -- rem_6
    int_rem_6_address0   <= UNSIGNED(rem_6_address0);
    int_rem_6_ce0        <= rem_6_ce0;
    int_rem_6_we0        <= rem_6_we0;
    int_rem_6_be0        <= (others => rem_6_we0);
    int_rem_6_d0         <= RESIZE(UNSIGNED(rem_6_d0), 32);
    rem_6_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_6_q0, 32));
    int_rem_6_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_6_ce1        <= '1' when ar_hs = '1' or (int_rem_6_write = '1' and WVALID  = '1') else '0';
    int_rem_6_we1        <= '1' when int_rem_6_write = '1' and WVALID = '1' else '0';
    int_rem_6_be1        <= UNSIGNED(WSTRB);
    int_rem_6_d1         <= UNSIGNED(WDATA);
    -- rem_7
    int_rem_7_address0   <= UNSIGNED(rem_7_address0);
    int_rem_7_ce0        <= rem_7_ce0;
    int_rem_7_we0        <= rem_7_we0;
    int_rem_7_be0        <= (others => rem_7_we0);
    int_rem_7_d0         <= RESIZE(UNSIGNED(rem_7_d0), 32);
    rem_7_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_7_q0, 32));
    int_rem_7_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_7_ce1        <= '1' when ar_hs = '1' or (int_rem_7_write = '1' and WVALID  = '1') else '0';
    int_rem_7_we1        <= '1' when int_rem_7_write = '1' and WVALID = '1' else '0';
    int_rem_7_be1        <= UNSIGNED(WSTRB);
    int_rem_7_d1         <= UNSIGNED(WDATA);
    -- rem_8
    int_rem_8_address0   <= UNSIGNED(rem_8_address0);
    int_rem_8_ce0        <= rem_8_ce0;
    int_rem_8_we0        <= rem_8_we0;
    int_rem_8_be0        <= (others => rem_8_we0);
    int_rem_8_d0         <= RESIZE(UNSIGNED(rem_8_d0), 32);
    rem_8_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_8_q0, 32));
    int_rem_8_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_8_ce1        <= '1' when ar_hs = '1' or (int_rem_8_write = '1' and WVALID  = '1') else '0';
    int_rem_8_we1        <= '1' when int_rem_8_write = '1' and WVALID = '1' else '0';
    int_rem_8_be1        <= UNSIGNED(WSTRB);
    int_rem_8_d1         <= UNSIGNED(WDATA);
    -- rem_9
    int_rem_9_address0   <= UNSIGNED(rem_9_address0);
    int_rem_9_ce0        <= rem_9_ce0;
    int_rem_9_we0        <= rem_9_we0;
    int_rem_9_be0        <= (others => rem_9_we0);
    int_rem_9_d0         <= RESIZE(UNSIGNED(rem_9_d0), 32);
    rem_9_q0             <= STD_LOGIC_VECTOR(RESIZE(int_rem_9_q0, 32));
    int_rem_9_address1   <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_9_ce1        <= '1' when ar_hs = '1' or (int_rem_9_write = '1' and WVALID  = '1') else '0';
    int_rem_9_we1        <= '1' when int_rem_9_write = '1' and WVALID = '1' else '0';
    int_rem_9_be1        <= UNSIGNED(WSTRB);
    int_rem_9_d1         <= UNSIGNED(WDATA);
    -- rem_10
    int_rem_10_address0  <= UNSIGNED(rem_10_address0);
    int_rem_10_ce0       <= rem_10_ce0;
    int_rem_10_we0       <= rem_10_we0;
    int_rem_10_be0       <= (others => rem_10_we0);
    int_rem_10_d0        <= RESIZE(UNSIGNED(rem_10_d0), 32);
    rem_10_q0            <= STD_LOGIC_VECTOR(RESIZE(int_rem_10_q0, 32));
    int_rem_10_address1  <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_10_ce1       <= '1' when ar_hs = '1' or (int_rem_10_write = '1' and WVALID  = '1') else '0';
    int_rem_10_we1       <= '1' when int_rem_10_write = '1' and WVALID = '1' else '0';
    int_rem_10_be1       <= UNSIGNED(WSTRB);
    int_rem_10_d1        <= UNSIGNED(WDATA);
    -- rem_11
    int_rem_11_address0  <= UNSIGNED(rem_11_address0);
    int_rem_11_ce0       <= rem_11_ce0;
    int_rem_11_we0       <= rem_11_we0;
    int_rem_11_be0       <= (others => rem_11_we0);
    int_rem_11_d0        <= RESIZE(UNSIGNED(rem_11_d0), 32);
    rem_11_q0            <= STD_LOGIC_VECTOR(RESIZE(int_rem_11_q0, 32));
    int_rem_11_address1  <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_rem_11_ce1       <= '1' when ar_hs = '1' or (int_rem_11_write = '1' and WVALID  = '1') else '0';
    int_rem_11_we1       <= '1' when int_rem_11_write = '1' and WVALID = '1' else '0';
    int_rem_11_be1       <= UNSIGNED(WSTRB);
    int_rem_11_d1        <= UNSIGNED(WDATA);

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
                int_rem_0_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_0_BASE and raddr <= ADDR_REM_0_HIGH) then
                    int_rem_0_read <= '1';
                else
                    int_rem_0_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_0_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_0_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_0_HIGH) then
                    int_rem_0_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_0_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_1_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_1_BASE and raddr <= ADDR_REM_1_HIGH) then
                    int_rem_1_read <= '1';
                else
                    int_rem_1_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_1_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_1_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_1_HIGH) then
                    int_rem_1_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_1_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_2_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_2_BASE and raddr <= ADDR_REM_2_HIGH) then
                    int_rem_2_read <= '1';
                else
                    int_rem_2_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_2_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_2_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_2_HIGH) then
                    int_rem_2_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_2_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_3_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_3_BASE and raddr <= ADDR_REM_3_HIGH) then
                    int_rem_3_read <= '1';
                else
                    int_rem_3_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_3_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_3_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_3_HIGH) then
                    int_rem_3_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_3_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_4_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_4_BASE and raddr <= ADDR_REM_4_HIGH) then
                    int_rem_4_read <= '1';
                else
                    int_rem_4_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_4_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_4_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_4_HIGH) then
                    int_rem_4_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_4_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_5_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_5_BASE and raddr <= ADDR_REM_5_HIGH) then
                    int_rem_5_read <= '1';
                else
                    int_rem_5_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_5_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_5_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_5_HIGH) then
                    int_rem_5_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_5_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_6_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_6_BASE and raddr <= ADDR_REM_6_HIGH) then
                    int_rem_6_read <= '1';
                else
                    int_rem_6_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_6_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_6_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_6_HIGH) then
                    int_rem_6_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_6_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_7_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_7_BASE and raddr <= ADDR_REM_7_HIGH) then
                    int_rem_7_read <= '1';
                else
                    int_rem_7_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_7_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_7_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_7_HIGH) then
                    int_rem_7_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_7_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_8_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_8_BASE and raddr <= ADDR_REM_8_HIGH) then
                    int_rem_8_read <= '1';
                else
                    int_rem_8_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_8_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_8_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_8_HIGH) then
                    int_rem_8_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_8_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_9_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_9_BASE and raddr <= ADDR_REM_9_HIGH) then
                    int_rem_9_read <= '1';
                else
                    int_rem_9_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_9_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_9_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_9_HIGH) then
                    int_rem_9_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_9_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_10_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_10_BASE and raddr <= ADDR_REM_10_HIGH) then
                    int_rem_10_read <= '1';
                else
                    int_rem_10_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_10_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_10_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_10_HIGH) then
                    int_rem_10_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_10_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_11_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_REM_11_BASE and raddr <= ADDR_REM_11_HIGH) then
                    int_rem_11_read <= '1';
                else
                    int_rem_11_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_rem_11_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_REM_11_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_REM_11_HIGH) then
                    int_rem_11_write <= '1';
                elsif (WVALID = '1') then
                    int_rem_11_write <= '0';
                end if;
            end if;
        end if;
    end process;


end architecture behave;

library IEEE;
USE IEEE.std_logic_1164.all;
USE IEEE.numeric_std.all;

entity estimate_ISI_encode_AXILiteS_s_axi_ram is
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

end entity estimate_ISI_encode_AXILiteS_s_axi_ram;

architecture behave of estimate_ISI_encode_AXILiteS_s_axi_ram is
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


