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
    inputs_0_address0     :in   STD_LOGIC_VECTOR(4 downto 0);
    inputs_0_ce0          :in   STD_LOGIC;
    inputs_0_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_1_address0     :in   STD_LOGIC_VECTOR(4 downto 0);
    inputs_1_ce0          :in   STD_LOGIC;
    inputs_1_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_2_address0     :in   STD_LOGIC_VECTOR(4 downto 0);
    inputs_2_ce0          :in   STD_LOGIC;
    inputs_2_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_3_address0     :in   STD_LOGIC_VECTOR(4 downto 0);
    inputs_3_ce0          :in   STD_LOGIC;
    inputs_3_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_0_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    counts_0_ce0          :in   STD_LOGIC;
    counts_0_we0          :in   STD_LOGIC;
    counts_0_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_0_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_1_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    counts_1_ce0          :in   STD_LOGIC;
    counts_1_we0          :in   STD_LOGIC;
    counts_1_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_1_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_2_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    counts_2_ce0          :in   STD_LOGIC;
    counts_2_we0          :in   STD_LOGIC;
    counts_2_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_2_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_3_address0     :in   STD_LOGIC_VECTOR(2 downto 0);
    counts_3_ce0          :in   STD_LOGIC;
    counts_3_we0          :in   STD_LOGIC;
    counts_3_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_3_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    outputs_0_address0    :in   STD_LOGIC_VECTOR(2 downto 0);
    outputs_0_ce0         :in   STD_LOGIC;
    outputs_0_we0         :in   STD_LOGIC;
    outputs_0_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_1_address0    :in   STD_LOGIC_VECTOR(2 downto 0);
    outputs_1_ce0         :in   STD_LOGIC;
    outputs_1_we0         :in   STD_LOGIC;
    outputs_1_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_2_address0    :in   STD_LOGIC_VECTOR(2 downto 0);
    outputs_2_ce0         :in   STD_LOGIC;
    outputs_2_we0         :in   STD_LOGIC;
    outputs_2_d0          :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_3_address0    :in   STD_LOGIC_VECTOR(2 downto 0);
    outputs_3_ce0         :in   STD_LOGIC;
    outputs_3_we0         :in   STD_LOGIC;
    outputs_3_d0          :in   STD_LOGIC_VECTOR(31 downto 0)
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
-- 0x080 ~
-- 0x0ff : Memory 'inputs_0' (24 * 32b)
--         Word n : bit [31:0] - inputs_0[n]
-- 0x100 ~
-- 0x17f : Memory 'inputs_1' (24 * 32b)
--         Word n : bit [31:0] - inputs_1[n]
-- 0x180 ~
-- 0x1ff : Memory 'inputs_2' (24 * 32b)
--         Word n : bit [31:0] - inputs_2[n]
-- 0x200 ~
-- 0x27f : Memory 'inputs_3' (24 * 32b)
--         Word n : bit [31:0] - inputs_3[n]
-- 0x280 ~
-- 0x29f : Memory 'counts_0' (6 * 32b)
--         Word n : bit [31:0] - counts_0[n]
-- 0x2a0 ~
-- 0x2bf : Memory 'counts_1' (6 * 32b)
--         Word n : bit [31:0] - counts_1[n]
-- 0x2c0 ~
-- 0x2df : Memory 'counts_2' (6 * 32b)
--         Word n : bit [31:0] - counts_2[n]
-- 0x2e0 ~
-- 0x2ff : Memory 'counts_3' (6 * 32b)
--         Word n : bit [31:0] - counts_3[n]
-- 0x300 ~
-- 0x31f : Memory 'outputs_0' (6 * 32b)
--         Word n : bit [31:0] - outputs_0[n]
-- 0x320 ~
-- 0x33f : Memory 'outputs_1' (6 * 32b)
--         Word n : bit [31:0] - outputs_1[n]
-- 0x340 ~
-- 0x35f : Memory 'outputs_2' (6 * 32b)
--         Word n : bit [31:0] - outputs_2[n]
-- 0x360 ~
-- 0x37f : Memory 'outputs_3' (6 * 32b)
--         Word n : bit [31:0] - outputs_3[n]
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of estimate_FR_2_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL        : INTEGER := 16#000#;
    constant ADDR_GIE            : INTEGER := 16#004#;
    constant ADDR_IER            : INTEGER := 16#008#;
    constant ADDR_ISR            : INTEGER := 16#00c#;
    constant ADDR_INPUTS_0_BASE  : INTEGER := 16#080#;
    constant ADDR_INPUTS_0_HIGH  : INTEGER := 16#0ff#;
    constant ADDR_INPUTS_1_BASE  : INTEGER := 16#100#;
    constant ADDR_INPUTS_1_HIGH  : INTEGER := 16#17f#;
    constant ADDR_INPUTS_2_BASE  : INTEGER := 16#180#;
    constant ADDR_INPUTS_2_HIGH  : INTEGER := 16#1ff#;
    constant ADDR_INPUTS_3_BASE  : INTEGER := 16#200#;
    constant ADDR_INPUTS_3_HIGH  : INTEGER := 16#27f#;
    constant ADDR_COUNTS_0_BASE  : INTEGER := 16#280#;
    constant ADDR_COUNTS_0_HIGH  : INTEGER := 16#29f#;
    constant ADDR_COUNTS_1_BASE  : INTEGER := 16#2a0#;
    constant ADDR_COUNTS_1_HIGH  : INTEGER := 16#2bf#;
    constant ADDR_COUNTS_2_BASE  : INTEGER := 16#2c0#;
    constant ADDR_COUNTS_2_HIGH  : INTEGER := 16#2df#;
    constant ADDR_COUNTS_3_BASE  : INTEGER := 16#2e0#;
    constant ADDR_COUNTS_3_HIGH  : INTEGER := 16#2ff#;
    constant ADDR_OUTPUTS_0_BASE : INTEGER := 16#300#;
    constant ADDR_OUTPUTS_0_HIGH : INTEGER := 16#31f#;
    constant ADDR_OUTPUTS_1_BASE : INTEGER := 16#320#;
    constant ADDR_OUTPUTS_1_HIGH : INTEGER := 16#33f#;
    constant ADDR_OUTPUTS_2_BASE : INTEGER := 16#340#;
    constant ADDR_OUTPUTS_2_HIGH : INTEGER := 16#35f#;
    constant ADDR_OUTPUTS_3_BASE : INTEGER := 16#360#;
    constant ADDR_OUTPUTS_3_HIGH : INTEGER := 16#37f#;
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
    signal int_inputs_0_address0 : UNSIGNED(4 downto 0);
    signal int_inputs_0_ce0    : STD_LOGIC;
    signal int_inputs_0_we0    : STD_LOGIC;
    signal int_inputs_0_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_0_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_0_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_0_address1 : UNSIGNED(4 downto 0);
    signal int_inputs_0_ce1    : STD_LOGIC;
    signal int_inputs_0_we1    : STD_LOGIC;
    signal int_inputs_0_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_0_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_0_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_0_read   : STD_LOGIC;
    signal int_inputs_0_write  : STD_LOGIC;
    signal int_inputs_1_address0 : UNSIGNED(4 downto 0);
    signal int_inputs_1_ce0    : STD_LOGIC;
    signal int_inputs_1_we0    : STD_LOGIC;
    signal int_inputs_1_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_1_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_1_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_1_address1 : UNSIGNED(4 downto 0);
    signal int_inputs_1_ce1    : STD_LOGIC;
    signal int_inputs_1_we1    : STD_LOGIC;
    signal int_inputs_1_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_1_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_1_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_1_read   : STD_LOGIC;
    signal int_inputs_1_write  : STD_LOGIC;
    signal int_inputs_2_address0 : UNSIGNED(4 downto 0);
    signal int_inputs_2_ce0    : STD_LOGIC;
    signal int_inputs_2_we0    : STD_LOGIC;
    signal int_inputs_2_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_2_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_2_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_2_address1 : UNSIGNED(4 downto 0);
    signal int_inputs_2_ce1    : STD_LOGIC;
    signal int_inputs_2_we1    : STD_LOGIC;
    signal int_inputs_2_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_2_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_2_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_2_read   : STD_LOGIC;
    signal int_inputs_2_write  : STD_LOGIC;
    signal int_inputs_3_address0 : UNSIGNED(4 downto 0);
    signal int_inputs_3_ce0    : STD_LOGIC;
    signal int_inputs_3_we0    : STD_LOGIC;
    signal int_inputs_3_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_3_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_3_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_3_address1 : UNSIGNED(4 downto 0);
    signal int_inputs_3_ce1    : STD_LOGIC;
    signal int_inputs_3_we1    : STD_LOGIC;
    signal int_inputs_3_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_3_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_3_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_3_read   : STD_LOGIC;
    signal int_inputs_3_write  : STD_LOGIC;
    signal int_counts_0_address0 : UNSIGNED(2 downto 0);
    signal int_counts_0_ce0    : STD_LOGIC;
    signal int_counts_0_we0    : STD_LOGIC;
    signal int_counts_0_be0    : UNSIGNED(3 downto 0);
    signal int_counts_0_d0     : UNSIGNED(31 downto 0);
    signal int_counts_0_q0     : UNSIGNED(31 downto 0);
    signal int_counts_0_address1 : UNSIGNED(2 downto 0);
    signal int_counts_0_ce1    : STD_LOGIC;
    signal int_counts_0_we1    : STD_LOGIC;
    signal int_counts_0_be1    : UNSIGNED(3 downto 0);
    signal int_counts_0_d1     : UNSIGNED(31 downto 0);
    signal int_counts_0_q1     : UNSIGNED(31 downto 0);
    signal int_counts_0_read   : STD_LOGIC;
    signal int_counts_0_write  : STD_LOGIC;
    signal int_counts_1_address0 : UNSIGNED(2 downto 0);
    signal int_counts_1_ce0    : STD_LOGIC;
    signal int_counts_1_we0    : STD_LOGIC;
    signal int_counts_1_be0    : UNSIGNED(3 downto 0);
    signal int_counts_1_d0     : UNSIGNED(31 downto 0);
    signal int_counts_1_q0     : UNSIGNED(31 downto 0);
    signal int_counts_1_address1 : UNSIGNED(2 downto 0);
    signal int_counts_1_ce1    : STD_LOGIC;
    signal int_counts_1_we1    : STD_LOGIC;
    signal int_counts_1_be1    : UNSIGNED(3 downto 0);
    signal int_counts_1_d1     : UNSIGNED(31 downto 0);
    signal int_counts_1_q1     : UNSIGNED(31 downto 0);
    signal int_counts_1_read   : STD_LOGIC;
    signal int_counts_1_write  : STD_LOGIC;
    signal int_counts_2_address0 : UNSIGNED(2 downto 0);
    signal int_counts_2_ce0    : STD_LOGIC;
    signal int_counts_2_we0    : STD_LOGIC;
    signal int_counts_2_be0    : UNSIGNED(3 downto 0);
    signal int_counts_2_d0     : UNSIGNED(31 downto 0);
    signal int_counts_2_q0     : UNSIGNED(31 downto 0);
    signal int_counts_2_address1 : UNSIGNED(2 downto 0);
    signal int_counts_2_ce1    : STD_LOGIC;
    signal int_counts_2_we1    : STD_LOGIC;
    signal int_counts_2_be1    : UNSIGNED(3 downto 0);
    signal int_counts_2_d1     : UNSIGNED(31 downto 0);
    signal int_counts_2_q1     : UNSIGNED(31 downto 0);
    signal int_counts_2_read   : STD_LOGIC;
    signal int_counts_2_write  : STD_LOGIC;
    signal int_counts_3_address0 : UNSIGNED(2 downto 0);
    signal int_counts_3_ce0    : STD_LOGIC;
    signal int_counts_3_we0    : STD_LOGIC;
    signal int_counts_3_be0    : UNSIGNED(3 downto 0);
    signal int_counts_3_d0     : UNSIGNED(31 downto 0);
    signal int_counts_3_q0     : UNSIGNED(31 downto 0);
    signal int_counts_3_address1 : UNSIGNED(2 downto 0);
    signal int_counts_3_ce1    : STD_LOGIC;
    signal int_counts_3_we1    : STD_LOGIC;
    signal int_counts_3_be1    : UNSIGNED(3 downto 0);
    signal int_counts_3_d1     : UNSIGNED(31 downto 0);
    signal int_counts_3_q1     : UNSIGNED(31 downto 0);
    signal int_counts_3_read   : STD_LOGIC;
    signal int_counts_3_write  : STD_LOGIC;
    signal int_outputs_0_address0 : UNSIGNED(2 downto 0);
    signal int_outputs_0_ce0   : STD_LOGIC;
    signal int_outputs_0_we0   : STD_LOGIC;
    signal int_outputs_0_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_0_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_0_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_0_address1 : UNSIGNED(2 downto 0);
    signal int_outputs_0_ce1   : STD_LOGIC;
    signal int_outputs_0_we1   : STD_LOGIC;
    signal int_outputs_0_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_0_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_0_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_0_read  : STD_LOGIC;
    signal int_outputs_0_write : STD_LOGIC;
    signal int_outputs_1_address0 : UNSIGNED(2 downto 0);
    signal int_outputs_1_ce0   : STD_LOGIC;
    signal int_outputs_1_we0   : STD_LOGIC;
    signal int_outputs_1_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_1_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_1_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_1_address1 : UNSIGNED(2 downto 0);
    signal int_outputs_1_ce1   : STD_LOGIC;
    signal int_outputs_1_we1   : STD_LOGIC;
    signal int_outputs_1_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_1_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_1_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_1_read  : STD_LOGIC;
    signal int_outputs_1_write : STD_LOGIC;
    signal int_outputs_2_address0 : UNSIGNED(2 downto 0);
    signal int_outputs_2_ce0   : STD_LOGIC;
    signal int_outputs_2_we0   : STD_LOGIC;
    signal int_outputs_2_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_2_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_2_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_2_address1 : UNSIGNED(2 downto 0);
    signal int_outputs_2_ce1   : STD_LOGIC;
    signal int_outputs_2_we1   : STD_LOGIC;
    signal int_outputs_2_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_2_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_2_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_2_read  : STD_LOGIC;
    signal int_outputs_2_write : STD_LOGIC;
    signal int_outputs_3_address0 : UNSIGNED(2 downto 0);
    signal int_outputs_3_ce0   : STD_LOGIC;
    signal int_outputs_3_we0   : STD_LOGIC;
    signal int_outputs_3_be0   : UNSIGNED(3 downto 0);
    signal int_outputs_3_d0    : UNSIGNED(31 downto 0);
    signal int_outputs_3_q0    : UNSIGNED(31 downto 0);
    signal int_outputs_3_address1 : UNSIGNED(2 downto 0);
    signal int_outputs_3_ce1   : STD_LOGIC;
    signal int_outputs_3_we1   : STD_LOGIC;
    signal int_outputs_3_be1   : UNSIGNED(3 downto 0);
    signal int_outputs_3_d1    : UNSIGNED(31 downto 0);
    signal int_outputs_3_q1    : UNSIGNED(31 downto 0);
    signal int_outputs_3_read  : STD_LOGIC;
    signal int_outputs_3_write : STD_LOGIC;

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
     DEPTH    => 24,
     AWIDTH   => log2(24))
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
     DEPTH    => 24,
     AWIDTH   => log2(24))
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
     DEPTH    => 24,
     AWIDTH   => log2(24))
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
     DEPTH    => 24,
     AWIDTH   => log2(24))
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
-- int_counts_0
int_counts_0 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 6,
     AWIDTH   => log2(6))
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
     DEPTH    => 6,
     AWIDTH   => log2(6))
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
     DEPTH    => 6,
     AWIDTH   => log2(6))
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
     DEPTH    => 6,
     AWIDTH   => log2(6))
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
-- int_outputs_0
int_outputs_0 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 6,
     AWIDTH   => log2(6))
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
     DEPTH    => 6,
     AWIDTH   => log2(6))
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
     DEPTH    => 6,
     AWIDTH   => log2(6))
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
     DEPTH    => 6,
     AWIDTH   => log2(6))
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
    RVALID_t  <= '1' when (rstate = rddata) and (int_inputs_0_read = '0') and (int_inputs_1_read = '0') and (int_inputs_2_read = '0') and (int_inputs_3_read = '0') and (int_counts_0_read = '0') and (int_counts_1_read = '0') and (int_counts_2_read = '0') and (int_counts_3_read = '0') and (int_outputs_0_read = '0') and (int_outputs_1_read = '0') and (int_outputs_2_read = '0') and (int_outputs_3_read = '0') else '0';
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
                elsif (int_counts_0_read = '1') then
                    rdata_data <= int_counts_0_q1;
                elsif (int_counts_1_read = '1') then
                    rdata_data <= int_counts_1_q1;
                elsif (int_counts_2_read = '1') then
                    rdata_data <= int_counts_2_q1;
                elsif (int_counts_3_read = '1') then
                    rdata_data <= int_counts_3_q1;
                elsif (int_outputs_0_read = '1') then
                    rdata_data <= int_outputs_0_q1;
                elsif (int_outputs_1_read = '1') then
                    rdata_data <= int_outputs_1_q1;
                elsif (int_outputs_2_read = '1') then
                    rdata_data <= int_outputs_2_q1;
                elsif (int_outputs_3_read = '1') then
                    rdata_data <= int_outputs_3_q1;
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
    int_inputs_0_address1 <= raddr(6 downto 2) when ar_hs = '1' else waddr(6 downto 2);
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
    int_inputs_1_address1 <= raddr(6 downto 2) when ar_hs = '1' else waddr(6 downto 2);
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
    int_inputs_2_address1 <= raddr(6 downto 2) when ar_hs = '1' else waddr(6 downto 2);
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
    int_inputs_3_address1 <= raddr(6 downto 2) when ar_hs = '1' else waddr(6 downto 2);
    int_inputs_3_ce1     <= '1' when ar_hs = '1' or (int_inputs_3_write = '1' and WVALID  = '1') else '0';
    int_inputs_3_we1     <= '1' when int_inputs_3_write = '1' and WVALID = '1' else '0';
    int_inputs_3_be1     <= UNSIGNED(WSTRB);
    int_inputs_3_d1      <= UNSIGNED(WDATA);
    -- counts_0
    int_counts_0_address0 <= UNSIGNED(counts_0_address0);
    int_counts_0_ce0     <= counts_0_ce0;
    int_counts_0_we0     <= counts_0_we0;
    int_counts_0_be0     <= (others => counts_0_we0);
    int_counts_0_d0      <= RESIZE(UNSIGNED(counts_0_d0), 32);
    counts_0_q0          <= STD_LOGIC_VECTOR(RESIZE(int_counts_0_q0, 32));
    int_counts_0_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
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
    int_counts_1_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
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
    int_counts_2_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
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
    int_counts_3_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_counts_3_ce1     <= '1' when ar_hs = '1' or (int_counts_3_write = '1' and WVALID  = '1') else '0';
    int_counts_3_we1     <= '1' when int_counts_3_write = '1' and WVALID = '1' else '0';
    int_counts_3_be1     <= UNSIGNED(WSTRB);
    int_counts_3_d1      <= UNSIGNED(WDATA);
    -- outputs_0
    int_outputs_0_address0 <= UNSIGNED(outputs_0_address0);
    int_outputs_0_ce0    <= outputs_0_ce0;
    int_outputs_0_we0    <= outputs_0_we0;
    int_outputs_0_be0    <= (others => outputs_0_we0);
    int_outputs_0_d0     <= RESIZE(UNSIGNED(outputs_0_d0), 32);
    int_outputs_0_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
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
    int_outputs_1_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
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
    int_outputs_2_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
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
    int_outputs_3_address1 <= raddr(4 downto 2) when ar_hs = '1' else waddr(4 downto 2);
    int_outputs_3_ce1    <= '1' when ar_hs = '1' or (int_outputs_3_write = '1' and WVALID  = '1') else '0';
    int_outputs_3_we1    <= '1' when int_outputs_3_write = '1' and WVALID = '1' else '0';
    int_outputs_3_be1    <= UNSIGNED(WSTRB);
    int_outputs_3_d1     <= UNSIGNED(WDATA);

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


