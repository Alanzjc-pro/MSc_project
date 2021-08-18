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
    inputs_0_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_0_ce0          :in   STD_LOGIC;
    inputs_0_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_1_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_1_ce0          :in   STD_LOGIC;
    inputs_1_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_2_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_2_ce0          :in   STD_LOGIC;
    inputs_2_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_3_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_3_ce0          :in   STD_LOGIC;
    inputs_3_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_4_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_4_ce0          :in   STD_LOGIC;
    inputs_4_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_5_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_5_ce0          :in   STD_LOGIC;
    inputs_5_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_6_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_6_ce0          :in   STD_LOGIC;
    inputs_6_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_7_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_7_ce0          :in   STD_LOGIC;
    inputs_7_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_8_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_8_ce0          :in   STD_LOGIC;
    inputs_8_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_9_address0     :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_9_ce0          :in   STD_LOGIC;
    inputs_9_q0           :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_10_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_10_ce0         :in   STD_LOGIC;
    inputs_10_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_11_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_11_ce0         :in   STD_LOGIC;
    inputs_11_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_12_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_12_ce0         :in   STD_LOGIC;
    inputs_12_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_13_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_13_ce0         :in   STD_LOGIC;
    inputs_13_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_14_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_14_ce0         :in   STD_LOGIC;
    inputs_14_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_15_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_15_ce0         :in   STD_LOGIC;
    inputs_15_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_16_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_16_ce0         :in   STD_LOGIC;
    inputs_16_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_17_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_17_ce0         :in   STD_LOGIC;
    inputs_17_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_18_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_18_ce0         :in   STD_LOGIC;
    inputs_18_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_19_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_19_ce0         :in   STD_LOGIC;
    inputs_19_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_20_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_20_ce0         :in   STD_LOGIC;
    inputs_20_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_21_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_21_ce0         :in   STD_LOGIC;
    inputs_21_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_22_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_22_ce0         :in   STD_LOGIC;
    inputs_22_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    inputs_23_address0    :in   STD_LOGIC_VECTOR(1 downto 0);
    inputs_23_ce0         :in   STD_LOGIC;
    inputs_23_q0          :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_0_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_0_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_0_o_ap_vld     :in   STD_LOGIC;
    counts_1_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_1_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_1_o_ap_vld     :in   STD_LOGIC;
    counts_2_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_2_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_2_o_ap_vld     :in   STD_LOGIC;
    counts_3_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_3_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_3_o_ap_vld     :in   STD_LOGIC;
    counts_4_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_4_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_4_o_ap_vld     :in   STD_LOGIC;
    counts_5_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_5_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_5_o_ap_vld     :in   STD_LOGIC;
    counts_6_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_6_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_6_o_ap_vld     :in   STD_LOGIC;
    counts_7_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_7_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_7_o_ap_vld     :in   STD_LOGIC;
    counts_8_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_8_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_8_o_ap_vld     :in   STD_LOGIC;
    counts_9_i            :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_9_o            :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_9_o_ap_vld     :in   STD_LOGIC;
    counts_10_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_10_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_10_o_ap_vld    :in   STD_LOGIC;
    counts_11_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_11_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_11_o_ap_vld    :in   STD_LOGIC;
    counts_12_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_12_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_12_o_ap_vld    :in   STD_LOGIC;
    counts_13_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_13_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_13_o_ap_vld    :in   STD_LOGIC;
    counts_14_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_14_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_14_o_ap_vld    :in   STD_LOGIC;
    counts_15_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_15_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_15_o_ap_vld    :in   STD_LOGIC;
    counts_16_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_16_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_16_o_ap_vld    :in   STD_LOGIC;
    counts_17_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_17_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_17_o_ap_vld    :in   STD_LOGIC;
    counts_18_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_18_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_18_o_ap_vld    :in   STD_LOGIC;
    counts_19_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_19_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_19_o_ap_vld    :in   STD_LOGIC;
    counts_20_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_20_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_20_o_ap_vld    :in   STD_LOGIC;
    counts_21_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_21_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_21_o_ap_vld    :in   STD_LOGIC;
    counts_22_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_22_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_22_o_ap_vld    :in   STD_LOGIC;
    counts_23_i           :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_23_o           :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_23_o_ap_vld    :in   STD_LOGIC;
    outputs_0             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_0_ap_vld      :in   STD_LOGIC;
    outputs_1             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_1_ap_vld      :in   STD_LOGIC;
    outputs_2             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_2_ap_vld      :in   STD_LOGIC;
    outputs_3             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_3_ap_vld      :in   STD_LOGIC;
    outputs_4             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_4_ap_vld      :in   STD_LOGIC;
    outputs_5             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_5_ap_vld      :in   STD_LOGIC;
    outputs_6             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_6_ap_vld      :in   STD_LOGIC;
    outputs_7             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_7_ap_vld      :in   STD_LOGIC;
    outputs_8             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_8_ap_vld      :in   STD_LOGIC;
    outputs_9             :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_9_ap_vld      :in   STD_LOGIC;
    outputs_10            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_10_ap_vld     :in   STD_LOGIC;
    outputs_11            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_11_ap_vld     :in   STD_LOGIC;
    outputs_12            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_12_ap_vld     :in   STD_LOGIC;
    outputs_13            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_13_ap_vld     :in   STD_LOGIC;
    outputs_14            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_14_ap_vld     :in   STD_LOGIC;
    outputs_15            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_15_ap_vld     :in   STD_LOGIC;
    outputs_16            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_16_ap_vld     :in   STD_LOGIC;
    outputs_17            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_17_ap_vld     :in   STD_LOGIC;
    outputs_18            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_18_ap_vld     :in   STD_LOGIC;
    outputs_19            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_19_ap_vld     :in   STD_LOGIC;
    outputs_20            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_20_ap_vld     :in   STD_LOGIC;
    outputs_21            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_21_ap_vld     :in   STD_LOGIC;
    outputs_22            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_22_ap_vld     :in   STD_LOGIC;
    outputs_23            :in   STD_LOGIC_VECTOR(31 downto 0);
    outputs_23_ap_vld     :in   STD_LOGIC
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
-- 0x190 : Data signal of counts_0_i
--         bit 31~0 - counts_0_i[31:0] (Read/Write)
-- 0x194 : reserved
-- 0x198 : Data signal of counts_0_o
--         bit 31~0 - counts_0_o[31:0] (Read)
-- 0x19c : Control signal of counts_0_o
--         bit 0  - counts_0_o_ap_vld (Read/COR)
--         others - reserved
-- 0x1a0 : Data signal of counts_1_i
--         bit 31~0 - counts_1_i[31:0] (Read/Write)
-- 0x1a4 : reserved
-- 0x1a8 : Data signal of counts_1_o
--         bit 31~0 - counts_1_o[31:0] (Read)
-- 0x1ac : Control signal of counts_1_o
--         bit 0  - counts_1_o_ap_vld (Read/COR)
--         others - reserved
-- 0x1b0 : Data signal of counts_2_i
--         bit 31~0 - counts_2_i[31:0] (Read/Write)
-- 0x1b4 : reserved
-- 0x1b8 : Data signal of counts_2_o
--         bit 31~0 - counts_2_o[31:0] (Read)
-- 0x1bc : Control signal of counts_2_o
--         bit 0  - counts_2_o_ap_vld (Read/COR)
--         others - reserved
-- 0x1c0 : Data signal of counts_3_i
--         bit 31~0 - counts_3_i[31:0] (Read/Write)
-- 0x1c4 : reserved
-- 0x1c8 : Data signal of counts_3_o
--         bit 31~0 - counts_3_o[31:0] (Read)
-- 0x1cc : Control signal of counts_3_o
--         bit 0  - counts_3_o_ap_vld (Read/COR)
--         others - reserved
-- 0x1d0 : Data signal of counts_4_i
--         bit 31~0 - counts_4_i[31:0] (Read/Write)
-- 0x1d4 : reserved
-- 0x1d8 : Data signal of counts_4_o
--         bit 31~0 - counts_4_o[31:0] (Read)
-- 0x1dc : Control signal of counts_4_o
--         bit 0  - counts_4_o_ap_vld (Read/COR)
--         others - reserved
-- 0x1e0 : Data signal of counts_5_i
--         bit 31~0 - counts_5_i[31:0] (Read/Write)
-- 0x1e4 : reserved
-- 0x1e8 : Data signal of counts_5_o
--         bit 31~0 - counts_5_o[31:0] (Read)
-- 0x1ec : Control signal of counts_5_o
--         bit 0  - counts_5_o_ap_vld (Read/COR)
--         others - reserved
-- 0x1f0 : Data signal of counts_6_i
--         bit 31~0 - counts_6_i[31:0] (Read/Write)
-- 0x1f4 : reserved
-- 0x1f8 : Data signal of counts_6_o
--         bit 31~0 - counts_6_o[31:0] (Read)
-- 0x1fc : Control signal of counts_6_o
--         bit 0  - counts_6_o_ap_vld (Read/COR)
--         others - reserved
-- 0x200 : Data signal of counts_7_i
--         bit 31~0 - counts_7_i[31:0] (Read/Write)
-- 0x204 : reserved
-- 0x208 : Data signal of counts_7_o
--         bit 31~0 - counts_7_o[31:0] (Read)
-- 0x20c : Control signal of counts_7_o
--         bit 0  - counts_7_o_ap_vld (Read/COR)
--         others - reserved
-- 0x210 : Data signal of counts_8_i
--         bit 31~0 - counts_8_i[31:0] (Read/Write)
-- 0x214 : reserved
-- 0x218 : Data signal of counts_8_o
--         bit 31~0 - counts_8_o[31:0] (Read)
-- 0x21c : Control signal of counts_8_o
--         bit 0  - counts_8_o_ap_vld (Read/COR)
--         others - reserved
-- 0x220 : Data signal of counts_9_i
--         bit 31~0 - counts_9_i[31:0] (Read/Write)
-- 0x224 : reserved
-- 0x228 : Data signal of counts_9_o
--         bit 31~0 - counts_9_o[31:0] (Read)
-- 0x22c : Control signal of counts_9_o
--         bit 0  - counts_9_o_ap_vld (Read/COR)
--         others - reserved
-- 0x230 : Data signal of counts_10_i
--         bit 31~0 - counts_10_i[31:0] (Read/Write)
-- 0x234 : reserved
-- 0x238 : Data signal of counts_10_o
--         bit 31~0 - counts_10_o[31:0] (Read)
-- 0x23c : Control signal of counts_10_o
--         bit 0  - counts_10_o_ap_vld (Read/COR)
--         others - reserved
-- 0x240 : Data signal of counts_11_i
--         bit 31~0 - counts_11_i[31:0] (Read/Write)
-- 0x244 : reserved
-- 0x248 : Data signal of counts_11_o
--         bit 31~0 - counts_11_o[31:0] (Read)
-- 0x24c : Control signal of counts_11_o
--         bit 0  - counts_11_o_ap_vld (Read/COR)
--         others - reserved
-- 0x250 : Data signal of counts_12_i
--         bit 31~0 - counts_12_i[31:0] (Read/Write)
-- 0x254 : reserved
-- 0x258 : Data signal of counts_12_o
--         bit 31~0 - counts_12_o[31:0] (Read)
-- 0x25c : Control signal of counts_12_o
--         bit 0  - counts_12_o_ap_vld (Read/COR)
--         others - reserved
-- 0x260 : Data signal of counts_13_i
--         bit 31~0 - counts_13_i[31:0] (Read/Write)
-- 0x264 : reserved
-- 0x268 : Data signal of counts_13_o
--         bit 31~0 - counts_13_o[31:0] (Read)
-- 0x26c : Control signal of counts_13_o
--         bit 0  - counts_13_o_ap_vld (Read/COR)
--         others - reserved
-- 0x270 : Data signal of counts_14_i
--         bit 31~0 - counts_14_i[31:0] (Read/Write)
-- 0x274 : reserved
-- 0x278 : Data signal of counts_14_o
--         bit 31~0 - counts_14_o[31:0] (Read)
-- 0x27c : Control signal of counts_14_o
--         bit 0  - counts_14_o_ap_vld (Read/COR)
--         others - reserved
-- 0x280 : Data signal of counts_15_i
--         bit 31~0 - counts_15_i[31:0] (Read/Write)
-- 0x284 : reserved
-- 0x288 : Data signal of counts_15_o
--         bit 31~0 - counts_15_o[31:0] (Read)
-- 0x28c : Control signal of counts_15_o
--         bit 0  - counts_15_o_ap_vld (Read/COR)
--         others - reserved
-- 0x290 : Data signal of counts_16_i
--         bit 31~0 - counts_16_i[31:0] (Read/Write)
-- 0x294 : reserved
-- 0x298 : Data signal of counts_16_o
--         bit 31~0 - counts_16_o[31:0] (Read)
-- 0x29c : Control signal of counts_16_o
--         bit 0  - counts_16_o_ap_vld (Read/COR)
--         others - reserved
-- 0x2a0 : Data signal of counts_17_i
--         bit 31~0 - counts_17_i[31:0] (Read/Write)
-- 0x2a4 : reserved
-- 0x2a8 : Data signal of counts_17_o
--         bit 31~0 - counts_17_o[31:0] (Read)
-- 0x2ac : Control signal of counts_17_o
--         bit 0  - counts_17_o_ap_vld (Read/COR)
--         others - reserved
-- 0x2b0 : Data signal of counts_18_i
--         bit 31~0 - counts_18_i[31:0] (Read/Write)
-- 0x2b4 : reserved
-- 0x2b8 : Data signal of counts_18_o
--         bit 31~0 - counts_18_o[31:0] (Read)
-- 0x2bc : Control signal of counts_18_o
--         bit 0  - counts_18_o_ap_vld (Read/COR)
--         others - reserved
-- 0x2c0 : Data signal of counts_19_i
--         bit 31~0 - counts_19_i[31:0] (Read/Write)
-- 0x2c4 : reserved
-- 0x2c8 : Data signal of counts_19_o
--         bit 31~0 - counts_19_o[31:0] (Read)
-- 0x2cc : Control signal of counts_19_o
--         bit 0  - counts_19_o_ap_vld (Read/COR)
--         others - reserved
-- 0x2d0 : Data signal of counts_20_i
--         bit 31~0 - counts_20_i[31:0] (Read/Write)
-- 0x2d4 : reserved
-- 0x2d8 : Data signal of counts_20_o
--         bit 31~0 - counts_20_o[31:0] (Read)
-- 0x2dc : Control signal of counts_20_o
--         bit 0  - counts_20_o_ap_vld (Read/COR)
--         others - reserved
-- 0x2e0 : Data signal of counts_21_i
--         bit 31~0 - counts_21_i[31:0] (Read/Write)
-- 0x2e4 : reserved
-- 0x2e8 : Data signal of counts_21_o
--         bit 31~0 - counts_21_o[31:0] (Read)
-- 0x2ec : Control signal of counts_21_o
--         bit 0  - counts_21_o_ap_vld (Read/COR)
--         others - reserved
-- 0x2f0 : Data signal of counts_22_i
--         bit 31~0 - counts_22_i[31:0] (Read/Write)
-- 0x2f4 : reserved
-- 0x2f8 : Data signal of counts_22_o
--         bit 31~0 - counts_22_o[31:0] (Read)
-- 0x2fc : Control signal of counts_22_o
--         bit 0  - counts_22_o_ap_vld (Read/COR)
--         others - reserved
-- 0x300 : Data signal of counts_23_i
--         bit 31~0 - counts_23_i[31:0] (Read/Write)
-- 0x304 : reserved
-- 0x308 : Data signal of counts_23_o
--         bit 31~0 - counts_23_o[31:0] (Read)
-- 0x30c : Control signal of counts_23_o
--         bit 0  - counts_23_o_ap_vld (Read/COR)
--         others - reserved
-- 0x310 : Data signal of outputs_0
--         bit 31~0 - outputs_0[31:0] (Read)
-- 0x314 : Control signal of outputs_0
--         bit 0  - outputs_0_ap_vld (Read/COR)
--         others - reserved
-- 0x318 : Data signal of outputs_1
--         bit 31~0 - outputs_1[31:0] (Read)
-- 0x31c : Control signal of outputs_1
--         bit 0  - outputs_1_ap_vld (Read/COR)
--         others - reserved
-- 0x320 : Data signal of outputs_2
--         bit 31~0 - outputs_2[31:0] (Read)
-- 0x324 : Control signal of outputs_2
--         bit 0  - outputs_2_ap_vld (Read/COR)
--         others - reserved
-- 0x328 : Data signal of outputs_3
--         bit 31~0 - outputs_3[31:0] (Read)
-- 0x32c : Control signal of outputs_3
--         bit 0  - outputs_3_ap_vld (Read/COR)
--         others - reserved
-- 0x330 : Data signal of outputs_4
--         bit 31~0 - outputs_4[31:0] (Read)
-- 0x334 : Control signal of outputs_4
--         bit 0  - outputs_4_ap_vld (Read/COR)
--         others - reserved
-- 0x338 : Data signal of outputs_5
--         bit 31~0 - outputs_5[31:0] (Read)
-- 0x33c : Control signal of outputs_5
--         bit 0  - outputs_5_ap_vld (Read/COR)
--         others - reserved
-- 0x340 : Data signal of outputs_6
--         bit 31~0 - outputs_6[31:0] (Read)
-- 0x344 : Control signal of outputs_6
--         bit 0  - outputs_6_ap_vld (Read/COR)
--         others - reserved
-- 0x348 : Data signal of outputs_7
--         bit 31~0 - outputs_7[31:0] (Read)
-- 0x34c : Control signal of outputs_7
--         bit 0  - outputs_7_ap_vld (Read/COR)
--         others - reserved
-- 0x350 : Data signal of outputs_8
--         bit 31~0 - outputs_8[31:0] (Read)
-- 0x354 : Control signal of outputs_8
--         bit 0  - outputs_8_ap_vld (Read/COR)
--         others - reserved
-- 0x358 : Data signal of outputs_9
--         bit 31~0 - outputs_9[31:0] (Read)
-- 0x35c : Control signal of outputs_9
--         bit 0  - outputs_9_ap_vld (Read/COR)
--         others - reserved
-- 0x360 : Data signal of outputs_10
--         bit 31~0 - outputs_10[31:0] (Read)
-- 0x364 : Control signal of outputs_10
--         bit 0  - outputs_10_ap_vld (Read/COR)
--         others - reserved
-- 0x368 : Data signal of outputs_11
--         bit 31~0 - outputs_11[31:0] (Read)
-- 0x36c : Control signal of outputs_11
--         bit 0  - outputs_11_ap_vld (Read/COR)
--         others - reserved
-- 0x370 : Data signal of outputs_12
--         bit 31~0 - outputs_12[31:0] (Read)
-- 0x374 : Control signal of outputs_12
--         bit 0  - outputs_12_ap_vld (Read/COR)
--         others - reserved
-- 0x378 : Data signal of outputs_13
--         bit 31~0 - outputs_13[31:0] (Read)
-- 0x37c : Control signal of outputs_13
--         bit 0  - outputs_13_ap_vld (Read/COR)
--         others - reserved
-- 0x380 : Data signal of outputs_14
--         bit 31~0 - outputs_14[31:0] (Read)
-- 0x384 : Control signal of outputs_14
--         bit 0  - outputs_14_ap_vld (Read/COR)
--         others - reserved
-- 0x388 : Data signal of outputs_15
--         bit 31~0 - outputs_15[31:0] (Read)
-- 0x38c : Control signal of outputs_15
--         bit 0  - outputs_15_ap_vld (Read/COR)
--         others - reserved
-- 0x390 : Data signal of outputs_16
--         bit 31~0 - outputs_16[31:0] (Read)
-- 0x394 : Control signal of outputs_16
--         bit 0  - outputs_16_ap_vld (Read/COR)
--         others - reserved
-- 0x398 : Data signal of outputs_17
--         bit 31~0 - outputs_17[31:0] (Read)
-- 0x39c : Control signal of outputs_17
--         bit 0  - outputs_17_ap_vld (Read/COR)
--         others - reserved
-- 0x3a0 : Data signal of outputs_18
--         bit 31~0 - outputs_18[31:0] (Read)
-- 0x3a4 : Control signal of outputs_18
--         bit 0  - outputs_18_ap_vld (Read/COR)
--         others - reserved
-- 0x3a8 : Data signal of outputs_19
--         bit 31~0 - outputs_19[31:0] (Read)
-- 0x3ac : Control signal of outputs_19
--         bit 0  - outputs_19_ap_vld (Read/COR)
--         others - reserved
-- 0x3b0 : Data signal of outputs_20
--         bit 31~0 - outputs_20[31:0] (Read)
-- 0x3b4 : Control signal of outputs_20
--         bit 0  - outputs_20_ap_vld (Read/COR)
--         others - reserved
-- 0x3b8 : Data signal of outputs_21
--         bit 31~0 - outputs_21[31:0] (Read)
-- 0x3bc : Control signal of outputs_21
--         bit 0  - outputs_21_ap_vld (Read/COR)
--         others - reserved
-- 0x3c0 : Data signal of outputs_22
--         bit 31~0 - outputs_22[31:0] (Read)
-- 0x3c4 : Control signal of outputs_22
--         bit 0  - outputs_22_ap_vld (Read/COR)
--         others - reserved
-- 0x3c8 : Data signal of outputs_23
--         bit 31~0 - outputs_23[31:0] (Read)
-- 0x3cc : Control signal of outputs_23
--         bit 0  - outputs_23_ap_vld (Read/COR)
--         others - reserved
-- 0x010 ~
-- 0x01f : Memory 'inputs_0' (4 * 32b)
--         Word n : bit [31:0] - inputs_0[n]
-- 0x020 ~
-- 0x02f : Memory 'inputs_1' (4 * 32b)
--         Word n : bit [31:0] - inputs_1[n]
-- 0x030 ~
-- 0x03f : Memory 'inputs_2' (4 * 32b)
--         Word n : bit [31:0] - inputs_2[n]
-- 0x040 ~
-- 0x04f : Memory 'inputs_3' (4 * 32b)
--         Word n : bit [31:0] - inputs_3[n]
-- 0x050 ~
-- 0x05f : Memory 'inputs_4' (4 * 32b)
--         Word n : bit [31:0] - inputs_4[n]
-- 0x060 ~
-- 0x06f : Memory 'inputs_5' (4 * 32b)
--         Word n : bit [31:0] - inputs_5[n]
-- 0x070 ~
-- 0x07f : Memory 'inputs_6' (4 * 32b)
--         Word n : bit [31:0] - inputs_6[n]
-- 0x080 ~
-- 0x08f : Memory 'inputs_7' (4 * 32b)
--         Word n : bit [31:0] - inputs_7[n]
-- 0x090 ~
-- 0x09f : Memory 'inputs_8' (4 * 32b)
--         Word n : bit [31:0] - inputs_8[n]
-- 0x0a0 ~
-- 0x0af : Memory 'inputs_9' (4 * 32b)
--         Word n : bit [31:0] - inputs_9[n]
-- 0x0b0 ~
-- 0x0bf : Memory 'inputs_10' (4 * 32b)
--         Word n : bit [31:0] - inputs_10[n]
-- 0x0c0 ~
-- 0x0cf : Memory 'inputs_11' (4 * 32b)
--         Word n : bit [31:0] - inputs_11[n]
-- 0x0d0 ~
-- 0x0df : Memory 'inputs_12' (4 * 32b)
--         Word n : bit [31:0] - inputs_12[n]
-- 0x0e0 ~
-- 0x0ef : Memory 'inputs_13' (4 * 32b)
--         Word n : bit [31:0] - inputs_13[n]
-- 0x0f0 ~
-- 0x0ff : Memory 'inputs_14' (4 * 32b)
--         Word n : bit [31:0] - inputs_14[n]
-- 0x100 ~
-- 0x10f : Memory 'inputs_15' (4 * 32b)
--         Word n : bit [31:0] - inputs_15[n]
-- 0x110 ~
-- 0x11f : Memory 'inputs_16' (4 * 32b)
--         Word n : bit [31:0] - inputs_16[n]
-- 0x120 ~
-- 0x12f : Memory 'inputs_17' (4 * 32b)
--         Word n : bit [31:0] - inputs_17[n]
-- 0x130 ~
-- 0x13f : Memory 'inputs_18' (4 * 32b)
--         Word n : bit [31:0] - inputs_18[n]
-- 0x140 ~
-- 0x14f : Memory 'inputs_19' (4 * 32b)
--         Word n : bit [31:0] - inputs_19[n]
-- 0x150 ~
-- 0x15f : Memory 'inputs_20' (4 * 32b)
--         Word n : bit [31:0] - inputs_20[n]
-- 0x160 ~
-- 0x16f : Memory 'inputs_21' (4 * 32b)
--         Word n : bit [31:0] - inputs_21[n]
-- 0x170 ~
-- 0x17f : Memory 'inputs_22' (4 * 32b)
--         Word n : bit [31:0] - inputs_22[n]
-- 0x180 ~
-- 0x18f : Memory 'inputs_23' (4 * 32b)
--         Word n : bit [31:0] - inputs_23[n]
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of estimate_FR_2_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL            : INTEGER := 16#000#;
    constant ADDR_GIE                : INTEGER := 16#004#;
    constant ADDR_IER                : INTEGER := 16#008#;
    constant ADDR_ISR                : INTEGER := 16#00c#;
    constant ADDR_COUNTS_0_I_DATA_0  : INTEGER := 16#190#;
    constant ADDR_COUNTS_0_I_CTRL    : INTEGER := 16#194#;
    constant ADDR_COUNTS_0_O_DATA_0  : INTEGER := 16#198#;
    constant ADDR_COUNTS_0_O_CTRL    : INTEGER := 16#19c#;
    constant ADDR_COUNTS_1_I_DATA_0  : INTEGER := 16#1a0#;
    constant ADDR_COUNTS_1_I_CTRL    : INTEGER := 16#1a4#;
    constant ADDR_COUNTS_1_O_DATA_0  : INTEGER := 16#1a8#;
    constant ADDR_COUNTS_1_O_CTRL    : INTEGER := 16#1ac#;
    constant ADDR_COUNTS_2_I_DATA_0  : INTEGER := 16#1b0#;
    constant ADDR_COUNTS_2_I_CTRL    : INTEGER := 16#1b4#;
    constant ADDR_COUNTS_2_O_DATA_0  : INTEGER := 16#1b8#;
    constant ADDR_COUNTS_2_O_CTRL    : INTEGER := 16#1bc#;
    constant ADDR_COUNTS_3_I_DATA_0  : INTEGER := 16#1c0#;
    constant ADDR_COUNTS_3_I_CTRL    : INTEGER := 16#1c4#;
    constant ADDR_COUNTS_3_O_DATA_0  : INTEGER := 16#1c8#;
    constant ADDR_COUNTS_3_O_CTRL    : INTEGER := 16#1cc#;
    constant ADDR_COUNTS_4_I_DATA_0  : INTEGER := 16#1d0#;
    constant ADDR_COUNTS_4_I_CTRL    : INTEGER := 16#1d4#;
    constant ADDR_COUNTS_4_O_DATA_0  : INTEGER := 16#1d8#;
    constant ADDR_COUNTS_4_O_CTRL    : INTEGER := 16#1dc#;
    constant ADDR_COUNTS_5_I_DATA_0  : INTEGER := 16#1e0#;
    constant ADDR_COUNTS_5_I_CTRL    : INTEGER := 16#1e4#;
    constant ADDR_COUNTS_5_O_DATA_0  : INTEGER := 16#1e8#;
    constant ADDR_COUNTS_5_O_CTRL    : INTEGER := 16#1ec#;
    constant ADDR_COUNTS_6_I_DATA_0  : INTEGER := 16#1f0#;
    constant ADDR_COUNTS_6_I_CTRL    : INTEGER := 16#1f4#;
    constant ADDR_COUNTS_6_O_DATA_0  : INTEGER := 16#1f8#;
    constant ADDR_COUNTS_6_O_CTRL    : INTEGER := 16#1fc#;
    constant ADDR_COUNTS_7_I_DATA_0  : INTEGER := 16#200#;
    constant ADDR_COUNTS_7_I_CTRL    : INTEGER := 16#204#;
    constant ADDR_COUNTS_7_O_DATA_0  : INTEGER := 16#208#;
    constant ADDR_COUNTS_7_O_CTRL    : INTEGER := 16#20c#;
    constant ADDR_COUNTS_8_I_DATA_0  : INTEGER := 16#210#;
    constant ADDR_COUNTS_8_I_CTRL    : INTEGER := 16#214#;
    constant ADDR_COUNTS_8_O_DATA_0  : INTEGER := 16#218#;
    constant ADDR_COUNTS_8_O_CTRL    : INTEGER := 16#21c#;
    constant ADDR_COUNTS_9_I_DATA_0  : INTEGER := 16#220#;
    constant ADDR_COUNTS_9_I_CTRL    : INTEGER := 16#224#;
    constant ADDR_COUNTS_9_O_DATA_0  : INTEGER := 16#228#;
    constant ADDR_COUNTS_9_O_CTRL    : INTEGER := 16#22c#;
    constant ADDR_COUNTS_10_I_DATA_0 : INTEGER := 16#230#;
    constant ADDR_COUNTS_10_I_CTRL   : INTEGER := 16#234#;
    constant ADDR_COUNTS_10_O_DATA_0 : INTEGER := 16#238#;
    constant ADDR_COUNTS_10_O_CTRL   : INTEGER := 16#23c#;
    constant ADDR_COUNTS_11_I_DATA_0 : INTEGER := 16#240#;
    constant ADDR_COUNTS_11_I_CTRL   : INTEGER := 16#244#;
    constant ADDR_COUNTS_11_O_DATA_0 : INTEGER := 16#248#;
    constant ADDR_COUNTS_11_O_CTRL   : INTEGER := 16#24c#;
    constant ADDR_COUNTS_12_I_DATA_0 : INTEGER := 16#250#;
    constant ADDR_COUNTS_12_I_CTRL   : INTEGER := 16#254#;
    constant ADDR_COUNTS_12_O_DATA_0 : INTEGER := 16#258#;
    constant ADDR_COUNTS_12_O_CTRL   : INTEGER := 16#25c#;
    constant ADDR_COUNTS_13_I_DATA_0 : INTEGER := 16#260#;
    constant ADDR_COUNTS_13_I_CTRL   : INTEGER := 16#264#;
    constant ADDR_COUNTS_13_O_DATA_0 : INTEGER := 16#268#;
    constant ADDR_COUNTS_13_O_CTRL   : INTEGER := 16#26c#;
    constant ADDR_COUNTS_14_I_DATA_0 : INTEGER := 16#270#;
    constant ADDR_COUNTS_14_I_CTRL   : INTEGER := 16#274#;
    constant ADDR_COUNTS_14_O_DATA_0 : INTEGER := 16#278#;
    constant ADDR_COUNTS_14_O_CTRL   : INTEGER := 16#27c#;
    constant ADDR_COUNTS_15_I_DATA_0 : INTEGER := 16#280#;
    constant ADDR_COUNTS_15_I_CTRL   : INTEGER := 16#284#;
    constant ADDR_COUNTS_15_O_DATA_0 : INTEGER := 16#288#;
    constant ADDR_COUNTS_15_O_CTRL   : INTEGER := 16#28c#;
    constant ADDR_COUNTS_16_I_DATA_0 : INTEGER := 16#290#;
    constant ADDR_COUNTS_16_I_CTRL   : INTEGER := 16#294#;
    constant ADDR_COUNTS_16_O_DATA_0 : INTEGER := 16#298#;
    constant ADDR_COUNTS_16_O_CTRL   : INTEGER := 16#29c#;
    constant ADDR_COUNTS_17_I_DATA_0 : INTEGER := 16#2a0#;
    constant ADDR_COUNTS_17_I_CTRL   : INTEGER := 16#2a4#;
    constant ADDR_COUNTS_17_O_DATA_0 : INTEGER := 16#2a8#;
    constant ADDR_COUNTS_17_O_CTRL   : INTEGER := 16#2ac#;
    constant ADDR_COUNTS_18_I_DATA_0 : INTEGER := 16#2b0#;
    constant ADDR_COUNTS_18_I_CTRL   : INTEGER := 16#2b4#;
    constant ADDR_COUNTS_18_O_DATA_0 : INTEGER := 16#2b8#;
    constant ADDR_COUNTS_18_O_CTRL   : INTEGER := 16#2bc#;
    constant ADDR_COUNTS_19_I_DATA_0 : INTEGER := 16#2c0#;
    constant ADDR_COUNTS_19_I_CTRL   : INTEGER := 16#2c4#;
    constant ADDR_COUNTS_19_O_DATA_0 : INTEGER := 16#2c8#;
    constant ADDR_COUNTS_19_O_CTRL   : INTEGER := 16#2cc#;
    constant ADDR_COUNTS_20_I_DATA_0 : INTEGER := 16#2d0#;
    constant ADDR_COUNTS_20_I_CTRL   : INTEGER := 16#2d4#;
    constant ADDR_COUNTS_20_O_DATA_0 : INTEGER := 16#2d8#;
    constant ADDR_COUNTS_20_O_CTRL   : INTEGER := 16#2dc#;
    constant ADDR_COUNTS_21_I_DATA_0 : INTEGER := 16#2e0#;
    constant ADDR_COUNTS_21_I_CTRL   : INTEGER := 16#2e4#;
    constant ADDR_COUNTS_21_O_DATA_0 : INTEGER := 16#2e8#;
    constant ADDR_COUNTS_21_O_CTRL   : INTEGER := 16#2ec#;
    constant ADDR_COUNTS_22_I_DATA_0 : INTEGER := 16#2f0#;
    constant ADDR_COUNTS_22_I_CTRL   : INTEGER := 16#2f4#;
    constant ADDR_COUNTS_22_O_DATA_0 : INTEGER := 16#2f8#;
    constant ADDR_COUNTS_22_O_CTRL   : INTEGER := 16#2fc#;
    constant ADDR_COUNTS_23_I_DATA_0 : INTEGER := 16#300#;
    constant ADDR_COUNTS_23_I_CTRL   : INTEGER := 16#304#;
    constant ADDR_COUNTS_23_O_DATA_0 : INTEGER := 16#308#;
    constant ADDR_COUNTS_23_O_CTRL   : INTEGER := 16#30c#;
    constant ADDR_OUTPUTS_0_DATA_0   : INTEGER := 16#310#;
    constant ADDR_OUTPUTS_0_CTRL     : INTEGER := 16#314#;
    constant ADDR_OUTPUTS_1_DATA_0   : INTEGER := 16#318#;
    constant ADDR_OUTPUTS_1_CTRL     : INTEGER := 16#31c#;
    constant ADDR_OUTPUTS_2_DATA_0   : INTEGER := 16#320#;
    constant ADDR_OUTPUTS_2_CTRL     : INTEGER := 16#324#;
    constant ADDR_OUTPUTS_3_DATA_0   : INTEGER := 16#328#;
    constant ADDR_OUTPUTS_3_CTRL     : INTEGER := 16#32c#;
    constant ADDR_OUTPUTS_4_DATA_0   : INTEGER := 16#330#;
    constant ADDR_OUTPUTS_4_CTRL     : INTEGER := 16#334#;
    constant ADDR_OUTPUTS_5_DATA_0   : INTEGER := 16#338#;
    constant ADDR_OUTPUTS_5_CTRL     : INTEGER := 16#33c#;
    constant ADDR_OUTPUTS_6_DATA_0   : INTEGER := 16#340#;
    constant ADDR_OUTPUTS_6_CTRL     : INTEGER := 16#344#;
    constant ADDR_OUTPUTS_7_DATA_0   : INTEGER := 16#348#;
    constant ADDR_OUTPUTS_7_CTRL     : INTEGER := 16#34c#;
    constant ADDR_OUTPUTS_8_DATA_0   : INTEGER := 16#350#;
    constant ADDR_OUTPUTS_8_CTRL     : INTEGER := 16#354#;
    constant ADDR_OUTPUTS_9_DATA_0   : INTEGER := 16#358#;
    constant ADDR_OUTPUTS_9_CTRL     : INTEGER := 16#35c#;
    constant ADDR_OUTPUTS_10_DATA_0  : INTEGER := 16#360#;
    constant ADDR_OUTPUTS_10_CTRL    : INTEGER := 16#364#;
    constant ADDR_OUTPUTS_11_DATA_0  : INTEGER := 16#368#;
    constant ADDR_OUTPUTS_11_CTRL    : INTEGER := 16#36c#;
    constant ADDR_OUTPUTS_12_DATA_0  : INTEGER := 16#370#;
    constant ADDR_OUTPUTS_12_CTRL    : INTEGER := 16#374#;
    constant ADDR_OUTPUTS_13_DATA_0  : INTEGER := 16#378#;
    constant ADDR_OUTPUTS_13_CTRL    : INTEGER := 16#37c#;
    constant ADDR_OUTPUTS_14_DATA_0  : INTEGER := 16#380#;
    constant ADDR_OUTPUTS_14_CTRL    : INTEGER := 16#384#;
    constant ADDR_OUTPUTS_15_DATA_0  : INTEGER := 16#388#;
    constant ADDR_OUTPUTS_15_CTRL    : INTEGER := 16#38c#;
    constant ADDR_OUTPUTS_16_DATA_0  : INTEGER := 16#390#;
    constant ADDR_OUTPUTS_16_CTRL    : INTEGER := 16#394#;
    constant ADDR_OUTPUTS_17_DATA_0  : INTEGER := 16#398#;
    constant ADDR_OUTPUTS_17_CTRL    : INTEGER := 16#39c#;
    constant ADDR_OUTPUTS_18_DATA_0  : INTEGER := 16#3a0#;
    constant ADDR_OUTPUTS_18_CTRL    : INTEGER := 16#3a4#;
    constant ADDR_OUTPUTS_19_DATA_0  : INTEGER := 16#3a8#;
    constant ADDR_OUTPUTS_19_CTRL    : INTEGER := 16#3ac#;
    constant ADDR_OUTPUTS_20_DATA_0  : INTEGER := 16#3b0#;
    constant ADDR_OUTPUTS_20_CTRL    : INTEGER := 16#3b4#;
    constant ADDR_OUTPUTS_21_DATA_0  : INTEGER := 16#3b8#;
    constant ADDR_OUTPUTS_21_CTRL    : INTEGER := 16#3bc#;
    constant ADDR_OUTPUTS_22_DATA_0  : INTEGER := 16#3c0#;
    constant ADDR_OUTPUTS_22_CTRL    : INTEGER := 16#3c4#;
    constant ADDR_OUTPUTS_23_DATA_0  : INTEGER := 16#3c8#;
    constant ADDR_OUTPUTS_23_CTRL    : INTEGER := 16#3cc#;
    constant ADDR_INPUTS_0_BASE      : INTEGER := 16#010#;
    constant ADDR_INPUTS_0_HIGH      : INTEGER := 16#01f#;
    constant ADDR_INPUTS_1_BASE      : INTEGER := 16#020#;
    constant ADDR_INPUTS_1_HIGH      : INTEGER := 16#02f#;
    constant ADDR_INPUTS_2_BASE      : INTEGER := 16#030#;
    constant ADDR_INPUTS_2_HIGH      : INTEGER := 16#03f#;
    constant ADDR_INPUTS_3_BASE      : INTEGER := 16#040#;
    constant ADDR_INPUTS_3_HIGH      : INTEGER := 16#04f#;
    constant ADDR_INPUTS_4_BASE      : INTEGER := 16#050#;
    constant ADDR_INPUTS_4_HIGH      : INTEGER := 16#05f#;
    constant ADDR_INPUTS_5_BASE      : INTEGER := 16#060#;
    constant ADDR_INPUTS_5_HIGH      : INTEGER := 16#06f#;
    constant ADDR_INPUTS_6_BASE      : INTEGER := 16#070#;
    constant ADDR_INPUTS_6_HIGH      : INTEGER := 16#07f#;
    constant ADDR_INPUTS_7_BASE      : INTEGER := 16#080#;
    constant ADDR_INPUTS_7_HIGH      : INTEGER := 16#08f#;
    constant ADDR_INPUTS_8_BASE      : INTEGER := 16#090#;
    constant ADDR_INPUTS_8_HIGH      : INTEGER := 16#09f#;
    constant ADDR_INPUTS_9_BASE      : INTEGER := 16#0a0#;
    constant ADDR_INPUTS_9_HIGH      : INTEGER := 16#0af#;
    constant ADDR_INPUTS_10_BASE     : INTEGER := 16#0b0#;
    constant ADDR_INPUTS_10_HIGH     : INTEGER := 16#0bf#;
    constant ADDR_INPUTS_11_BASE     : INTEGER := 16#0c0#;
    constant ADDR_INPUTS_11_HIGH     : INTEGER := 16#0cf#;
    constant ADDR_INPUTS_12_BASE     : INTEGER := 16#0d0#;
    constant ADDR_INPUTS_12_HIGH     : INTEGER := 16#0df#;
    constant ADDR_INPUTS_13_BASE     : INTEGER := 16#0e0#;
    constant ADDR_INPUTS_13_HIGH     : INTEGER := 16#0ef#;
    constant ADDR_INPUTS_14_BASE     : INTEGER := 16#0f0#;
    constant ADDR_INPUTS_14_HIGH     : INTEGER := 16#0ff#;
    constant ADDR_INPUTS_15_BASE     : INTEGER := 16#100#;
    constant ADDR_INPUTS_15_HIGH     : INTEGER := 16#10f#;
    constant ADDR_INPUTS_16_BASE     : INTEGER := 16#110#;
    constant ADDR_INPUTS_16_HIGH     : INTEGER := 16#11f#;
    constant ADDR_INPUTS_17_BASE     : INTEGER := 16#120#;
    constant ADDR_INPUTS_17_HIGH     : INTEGER := 16#12f#;
    constant ADDR_INPUTS_18_BASE     : INTEGER := 16#130#;
    constant ADDR_INPUTS_18_HIGH     : INTEGER := 16#13f#;
    constant ADDR_INPUTS_19_BASE     : INTEGER := 16#140#;
    constant ADDR_INPUTS_19_HIGH     : INTEGER := 16#14f#;
    constant ADDR_INPUTS_20_BASE     : INTEGER := 16#150#;
    constant ADDR_INPUTS_20_HIGH     : INTEGER := 16#15f#;
    constant ADDR_INPUTS_21_BASE     : INTEGER := 16#160#;
    constant ADDR_INPUTS_21_HIGH     : INTEGER := 16#16f#;
    constant ADDR_INPUTS_22_BASE     : INTEGER := 16#170#;
    constant ADDR_INPUTS_22_HIGH     : INTEGER := 16#17f#;
    constant ADDR_INPUTS_23_BASE     : INTEGER := 16#180#;
    constant ADDR_INPUTS_23_HIGH     : INTEGER := 16#18f#;
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
    signal int_counts_0_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_0_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_0_o_ap_vld : STD_LOGIC;
    signal int_counts_1_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_1_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_1_o_ap_vld : STD_LOGIC;
    signal int_counts_2_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_2_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_2_o_ap_vld : STD_LOGIC;
    signal int_counts_3_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_3_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_3_o_ap_vld : STD_LOGIC;
    signal int_counts_4_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_4_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_4_o_ap_vld : STD_LOGIC;
    signal int_counts_5_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_5_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_5_o_ap_vld : STD_LOGIC;
    signal int_counts_6_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_6_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_6_o_ap_vld : STD_LOGIC;
    signal int_counts_7_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_7_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_7_o_ap_vld : STD_LOGIC;
    signal int_counts_8_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_8_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_8_o_ap_vld : STD_LOGIC;
    signal int_counts_9_i      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_9_o      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_9_o_ap_vld : STD_LOGIC;
    signal int_counts_10_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_10_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_10_o_ap_vld : STD_LOGIC;
    signal int_counts_11_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_11_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_11_o_ap_vld : STD_LOGIC;
    signal int_counts_12_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_12_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_12_o_ap_vld : STD_LOGIC;
    signal int_counts_13_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_13_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_13_o_ap_vld : STD_LOGIC;
    signal int_counts_14_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_14_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_14_o_ap_vld : STD_LOGIC;
    signal int_counts_15_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_15_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_15_o_ap_vld : STD_LOGIC;
    signal int_counts_16_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_16_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_16_o_ap_vld : STD_LOGIC;
    signal int_counts_17_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_17_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_17_o_ap_vld : STD_LOGIC;
    signal int_counts_18_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_18_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_18_o_ap_vld : STD_LOGIC;
    signal int_counts_19_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_19_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_19_o_ap_vld : STD_LOGIC;
    signal int_counts_20_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_20_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_20_o_ap_vld : STD_LOGIC;
    signal int_counts_21_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_21_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_21_o_ap_vld : STD_LOGIC;
    signal int_counts_22_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_22_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_22_o_ap_vld : STD_LOGIC;
    signal int_counts_23_i     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_23_o     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_counts_23_o_ap_vld : STD_LOGIC;
    signal int_outputs_0       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_0_ap_vld : STD_LOGIC;
    signal int_outputs_1       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_1_ap_vld : STD_LOGIC;
    signal int_outputs_2       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_2_ap_vld : STD_LOGIC;
    signal int_outputs_3       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_3_ap_vld : STD_LOGIC;
    signal int_outputs_4       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_4_ap_vld : STD_LOGIC;
    signal int_outputs_5       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_5_ap_vld : STD_LOGIC;
    signal int_outputs_6       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_6_ap_vld : STD_LOGIC;
    signal int_outputs_7       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_7_ap_vld : STD_LOGIC;
    signal int_outputs_8       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_8_ap_vld : STD_LOGIC;
    signal int_outputs_9       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_9_ap_vld : STD_LOGIC;
    signal int_outputs_10      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_10_ap_vld : STD_LOGIC;
    signal int_outputs_11      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_11_ap_vld : STD_LOGIC;
    signal int_outputs_12      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_12_ap_vld : STD_LOGIC;
    signal int_outputs_13      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_13_ap_vld : STD_LOGIC;
    signal int_outputs_14      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_14_ap_vld : STD_LOGIC;
    signal int_outputs_15      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_15_ap_vld : STD_LOGIC;
    signal int_outputs_16      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_16_ap_vld : STD_LOGIC;
    signal int_outputs_17      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_17_ap_vld : STD_LOGIC;
    signal int_outputs_18      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_18_ap_vld : STD_LOGIC;
    signal int_outputs_19      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_19_ap_vld : STD_LOGIC;
    signal int_outputs_20      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_20_ap_vld : STD_LOGIC;
    signal int_outputs_21      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_21_ap_vld : STD_LOGIC;
    signal int_outputs_22      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_22_ap_vld : STD_LOGIC;
    signal int_outputs_23      : UNSIGNED(31 downto 0) := (others => '0');
    signal int_outputs_23_ap_vld : STD_LOGIC;
    -- memory signals
    signal int_inputs_0_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_0_ce0    : STD_LOGIC;
    signal int_inputs_0_we0    : STD_LOGIC;
    signal int_inputs_0_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_0_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_0_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_0_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_0_ce1    : STD_LOGIC;
    signal int_inputs_0_we1    : STD_LOGIC;
    signal int_inputs_0_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_0_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_0_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_0_read   : STD_LOGIC;
    signal int_inputs_0_write  : STD_LOGIC;
    signal int_inputs_1_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_1_ce0    : STD_LOGIC;
    signal int_inputs_1_we0    : STD_LOGIC;
    signal int_inputs_1_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_1_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_1_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_1_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_1_ce1    : STD_LOGIC;
    signal int_inputs_1_we1    : STD_LOGIC;
    signal int_inputs_1_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_1_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_1_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_1_read   : STD_LOGIC;
    signal int_inputs_1_write  : STD_LOGIC;
    signal int_inputs_2_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_2_ce0    : STD_LOGIC;
    signal int_inputs_2_we0    : STD_LOGIC;
    signal int_inputs_2_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_2_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_2_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_2_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_2_ce1    : STD_LOGIC;
    signal int_inputs_2_we1    : STD_LOGIC;
    signal int_inputs_2_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_2_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_2_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_2_read   : STD_LOGIC;
    signal int_inputs_2_write  : STD_LOGIC;
    signal int_inputs_3_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_3_ce0    : STD_LOGIC;
    signal int_inputs_3_we0    : STD_LOGIC;
    signal int_inputs_3_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_3_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_3_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_3_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_3_ce1    : STD_LOGIC;
    signal int_inputs_3_we1    : STD_LOGIC;
    signal int_inputs_3_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_3_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_3_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_3_read   : STD_LOGIC;
    signal int_inputs_3_write  : STD_LOGIC;
    signal int_inputs_4_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_4_ce0    : STD_LOGIC;
    signal int_inputs_4_we0    : STD_LOGIC;
    signal int_inputs_4_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_4_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_4_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_4_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_4_ce1    : STD_LOGIC;
    signal int_inputs_4_we1    : STD_LOGIC;
    signal int_inputs_4_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_4_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_4_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_4_read   : STD_LOGIC;
    signal int_inputs_4_write  : STD_LOGIC;
    signal int_inputs_5_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_5_ce0    : STD_LOGIC;
    signal int_inputs_5_we0    : STD_LOGIC;
    signal int_inputs_5_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_5_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_5_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_5_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_5_ce1    : STD_LOGIC;
    signal int_inputs_5_we1    : STD_LOGIC;
    signal int_inputs_5_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_5_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_5_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_5_read   : STD_LOGIC;
    signal int_inputs_5_write  : STD_LOGIC;
    signal int_inputs_6_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_6_ce0    : STD_LOGIC;
    signal int_inputs_6_we0    : STD_LOGIC;
    signal int_inputs_6_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_6_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_6_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_6_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_6_ce1    : STD_LOGIC;
    signal int_inputs_6_we1    : STD_LOGIC;
    signal int_inputs_6_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_6_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_6_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_6_read   : STD_LOGIC;
    signal int_inputs_6_write  : STD_LOGIC;
    signal int_inputs_7_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_7_ce0    : STD_LOGIC;
    signal int_inputs_7_we0    : STD_LOGIC;
    signal int_inputs_7_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_7_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_7_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_7_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_7_ce1    : STD_LOGIC;
    signal int_inputs_7_we1    : STD_LOGIC;
    signal int_inputs_7_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_7_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_7_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_7_read   : STD_LOGIC;
    signal int_inputs_7_write  : STD_LOGIC;
    signal int_inputs_8_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_8_ce0    : STD_LOGIC;
    signal int_inputs_8_we0    : STD_LOGIC;
    signal int_inputs_8_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_8_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_8_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_8_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_8_ce1    : STD_LOGIC;
    signal int_inputs_8_we1    : STD_LOGIC;
    signal int_inputs_8_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_8_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_8_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_8_read   : STD_LOGIC;
    signal int_inputs_8_write  : STD_LOGIC;
    signal int_inputs_9_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_9_ce0    : STD_LOGIC;
    signal int_inputs_9_we0    : STD_LOGIC;
    signal int_inputs_9_be0    : UNSIGNED(3 downto 0);
    signal int_inputs_9_d0     : UNSIGNED(31 downto 0);
    signal int_inputs_9_q0     : UNSIGNED(31 downto 0);
    signal int_inputs_9_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_9_ce1    : STD_LOGIC;
    signal int_inputs_9_we1    : STD_LOGIC;
    signal int_inputs_9_be1    : UNSIGNED(3 downto 0);
    signal int_inputs_9_d1     : UNSIGNED(31 downto 0);
    signal int_inputs_9_q1     : UNSIGNED(31 downto 0);
    signal int_inputs_9_read   : STD_LOGIC;
    signal int_inputs_9_write  : STD_LOGIC;
    signal int_inputs_10_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_10_ce0   : STD_LOGIC;
    signal int_inputs_10_we0   : STD_LOGIC;
    signal int_inputs_10_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_10_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_10_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_10_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_10_ce1   : STD_LOGIC;
    signal int_inputs_10_we1   : STD_LOGIC;
    signal int_inputs_10_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_10_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_10_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_10_read  : STD_LOGIC;
    signal int_inputs_10_write : STD_LOGIC;
    signal int_inputs_11_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_11_ce0   : STD_LOGIC;
    signal int_inputs_11_we0   : STD_LOGIC;
    signal int_inputs_11_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_11_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_11_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_11_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_11_ce1   : STD_LOGIC;
    signal int_inputs_11_we1   : STD_LOGIC;
    signal int_inputs_11_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_11_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_11_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_11_read  : STD_LOGIC;
    signal int_inputs_11_write : STD_LOGIC;
    signal int_inputs_12_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_12_ce0   : STD_LOGIC;
    signal int_inputs_12_we0   : STD_LOGIC;
    signal int_inputs_12_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_12_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_12_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_12_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_12_ce1   : STD_LOGIC;
    signal int_inputs_12_we1   : STD_LOGIC;
    signal int_inputs_12_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_12_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_12_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_12_read  : STD_LOGIC;
    signal int_inputs_12_write : STD_LOGIC;
    signal int_inputs_13_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_13_ce0   : STD_LOGIC;
    signal int_inputs_13_we0   : STD_LOGIC;
    signal int_inputs_13_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_13_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_13_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_13_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_13_ce1   : STD_LOGIC;
    signal int_inputs_13_we1   : STD_LOGIC;
    signal int_inputs_13_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_13_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_13_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_13_read  : STD_LOGIC;
    signal int_inputs_13_write : STD_LOGIC;
    signal int_inputs_14_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_14_ce0   : STD_LOGIC;
    signal int_inputs_14_we0   : STD_LOGIC;
    signal int_inputs_14_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_14_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_14_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_14_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_14_ce1   : STD_LOGIC;
    signal int_inputs_14_we1   : STD_LOGIC;
    signal int_inputs_14_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_14_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_14_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_14_read  : STD_LOGIC;
    signal int_inputs_14_write : STD_LOGIC;
    signal int_inputs_15_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_15_ce0   : STD_LOGIC;
    signal int_inputs_15_we0   : STD_LOGIC;
    signal int_inputs_15_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_15_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_15_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_15_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_15_ce1   : STD_LOGIC;
    signal int_inputs_15_we1   : STD_LOGIC;
    signal int_inputs_15_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_15_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_15_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_15_read  : STD_LOGIC;
    signal int_inputs_15_write : STD_LOGIC;
    signal int_inputs_16_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_16_ce0   : STD_LOGIC;
    signal int_inputs_16_we0   : STD_LOGIC;
    signal int_inputs_16_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_16_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_16_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_16_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_16_ce1   : STD_LOGIC;
    signal int_inputs_16_we1   : STD_LOGIC;
    signal int_inputs_16_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_16_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_16_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_16_read  : STD_LOGIC;
    signal int_inputs_16_write : STD_LOGIC;
    signal int_inputs_17_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_17_ce0   : STD_LOGIC;
    signal int_inputs_17_we0   : STD_LOGIC;
    signal int_inputs_17_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_17_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_17_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_17_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_17_ce1   : STD_LOGIC;
    signal int_inputs_17_we1   : STD_LOGIC;
    signal int_inputs_17_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_17_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_17_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_17_read  : STD_LOGIC;
    signal int_inputs_17_write : STD_LOGIC;
    signal int_inputs_18_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_18_ce0   : STD_LOGIC;
    signal int_inputs_18_we0   : STD_LOGIC;
    signal int_inputs_18_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_18_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_18_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_18_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_18_ce1   : STD_LOGIC;
    signal int_inputs_18_we1   : STD_LOGIC;
    signal int_inputs_18_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_18_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_18_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_18_read  : STD_LOGIC;
    signal int_inputs_18_write : STD_LOGIC;
    signal int_inputs_19_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_19_ce0   : STD_LOGIC;
    signal int_inputs_19_we0   : STD_LOGIC;
    signal int_inputs_19_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_19_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_19_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_19_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_19_ce1   : STD_LOGIC;
    signal int_inputs_19_we1   : STD_LOGIC;
    signal int_inputs_19_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_19_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_19_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_19_read  : STD_LOGIC;
    signal int_inputs_19_write : STD_LOGIC;
    signal int_inputs_20_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_20_ce0   : STD_LOGIC;
    signal int_inputs_20_we0   : STD_LOGIC;
    signal int_inputs_20_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_20_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_20_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_20_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_20_ce1   : STD_LOGIC;
    signal int_inputs_20_we1   : STD_LOGIC;
    signal int_inputs_20_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_20_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_20_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_20_read  : STD_LOGIC;
    signal int_inputs_20_write : STD_LOGIC;
    signal int_inputs_21_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_21_ce0   : STD_LOGIC;
    signal int_inputs_21_we0   : STD_LOGIC;
    signal int_inputs_21_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_21_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_21_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_21_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_21_ce1   : STD_LOGIC;
    signal int_inputs_21_we1   : STD_LOGIC;
    signal int_inputs_21_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_21_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_21_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_21_read  : STD_LOGIC;
    signal int_inputs_21_write : STD_LOGIC;
    signal int_inputs_22_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_22_ce0   : STD_LOGIC;
    signal int_inputs_22_we0   : STD_LOGIC;
    signal int_inputs_22_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_22_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_22_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_22_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_22_ce1   : STD_LOGIC;
    signal int_inputs_22_we1   : STD_LOGIC;
    signal int_inputs_22_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_22_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_22_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_22_read  : STD_LOGIC;
    signal int_inputs_22_write : STD_LOGIC;
    signal int_inputs_23_address0 : UNSIGNED(1 downto 0);
    signal int_inputs_23_ce0   : STD_LOGIC;
    signal int_inputs_23_we0   : STD_LOGIC;
    signal int_inputs_23_be0   : UNSIGNED(3 downto 0);
    signal int_inputs_23_d0    : UNSIGNED(31 downto 0);
    signal int_inputs_23_q0    : UNSIGNED(31 downto 0);
    signal int_inputs_23_address1 : UNSIGNED(1 downto 0);
    signal int_inputs_23_ce1   : STD_LOGIC;
    signal int_inputs_23_we1   : STD_LOGIC;
    signal int_inputs_23_be1   : UNSIGNED(3 downto 0);
    signal int_inputs_23_d1    : UNSIGNED(31 downto 0);
    signal int_inputs_23_q1    : UNSIGNED(31 downto 0);
    signal int_inputs_23_read  : STD_LOGIC;
    signal int_inputs_23_write : STD_LOGIC;

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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
     DEPTH    => 4,
     AWIDTH   => log2(4))
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
-- int_inputs_12
int_inputs_12 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_12_address0,
     ce0      => int_inputs_12_ce0,
     we0      => int_inputs_12_we0,
     be0      => int_inputs_12_be0,
     d0       => int_inputs_12_d0,
     q0       => int_inputs_12_q0,
     clk1     => ACLK,
     address1 => int_inputs_12_address1,
     ce1      => int_inputs_12_ce1,
     we1      => int_inputs_12_we1,
     be1      => int_inputs_12_be1,
     d1       => int_inputs_12_d1,
     q1       => int_inputs_12_q1);
-- int_inputs_13
int_inputs_13 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_13_address0,
     ce0      => int_inputs_13_ce0,
     we0      => int_inputs_13_we0,
     be0      => int_inputs_13_be0,
     d0       => int_inputs_13_d0,
     q0       => int_inputs_13_q0,
     clk1     => ACLK,
     address1 => int_inputs_13_address1,
     ce1      => int_inputs_13_ce1,
     we1      => int_inputs_13_we1,
     be1      => int_inputs_13_be1,
     d1       => int_inputs_13_d1,
     q1       => int_inputs_13_q1);
-- int_inputs_14
int_inputs_14 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_14_address0,
     ce0      => int_inputs_14_ce0,
     we0      => int_inputs_14_we0,
     be0      => int_inputs_14_be0,
     d0       => int_inputs_14_d0,
     q0       => int_inputs_14_q0,
     clk1     => ACLK,
     address1 => int_inputs_14_address1,
     ce1      => int_inputs_14_ce1,
     we1      => int_inputs_14_we1,
     be1      => int_inputs_14_be1,
     d1       => int_inputs_14_d1,
     q1       => int_inputs_14_q1);
-- int_inputs_15
int_inputs_15 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_15_address0,
     ce0      => int_inputs_15_ce0,
     we0      => int_inputs_15_we0,
     be0      => int_inputs_15_be0,
     d0       => int_inputs_15_d0,
     q0       => int_inputs_15_q0,
     clk1     => ACLK,
     address1 => int_inputs_15_address1,
     ce1      => int_inputs_15_ce1,
     we1      => int_inputs_15_we1,
     be1      => int_inputs_15_be1,
     d1       => int_inputs_15_d1,
     q1       => int_inputs_15_q1);
-- int_inputs_16
int_inputs_16 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_16_address0,
     ce0      => int_inputs_16_ce0,
     we0      => int_inputs_16_we0,
     be0      => int_inputs_16_be0,
     d0       => int_inputs_16_d0,
     q0       => int_inputs_16_q0,
     clk1     => ACLK,
     address1 => int_inputs_16_address1,
     ce1      => int_inputs_16_ce1,
     we1      => int_inputs_16_we1,
     be1      => int_inputs_16_be1,
     d1       => int_inputs_16_d1,
     q1       => int_inputs_16_q1);
-- int_inputs_17
int_inputs_17 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_17_address0,
     ce0      => int_inputs_17_ce0,
     we0      => int_inputs_17_we0,
     be0      => int_inputs_17_be0,
     d0       => int_inputs_17_d0,
     q0       => int_inputs_17_q0,
     clk1     => ACLK,
     address1 => int_inputs_17_address1,
     ce1      => int_inputs_17_ce1,
     we1      => int_inputs_17_we1,
     be1      => int_inputs_17_be1,
     d1       => int_inputs_17_d1,
     q1       => int_inputs_17_q1);
-- int_inputs_18
int_inputs_18 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_18_address0,
     ce0      => int_inputs_18_ce0,
     we0      => int_inputs_18_we0,
     be0      => int_inputs_18_be0,
     d0       => int_inputs_18_d0,
     q0       => int_inputs_18_q0,
     clk1     => ACLK,
     address1 => int_inputs_18_address1,
     ce1      => int_inputs_18_ce1,
     we1      => int_inputs_18_we1,
     be1      => int_inputs_18_be1,
     d1       => int_inputs_18_d1,
     q1       => int_inputs_18_q1);
-- int_inputs_19
int_inputs_19 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_19_address0,
     ce0      => int_inputs_19_ce0,
     we0      => int_inputs_19_we0,
     be0      => int_inputs_19_be0,
     d0       => int_inputs_19_d0,
     q0       => int_inputs_19_q0,
     clk1     => ACLK,
     address1 => int_inputs_19_address1,
     ce1      => int_inputs_19_ce1,
     we1      => int_inputs_19_we1,
     be1      => int_inputs_19_be1,
     d1       => int_inputs_19_d1,
     q1       => int_inputs_19_q1);
-- int_inputs_20
int_inputs_20 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_20_address0,
     ce0      => int_inputs_20_ce0,
     we0      => int_inputs_20_we0,
     be0      => int_inputs_20_be0,
     d0       => int_inputs_20_d0,
     q0       => int_inputs_20_q0,
     clk1     => ACLK,
     address1 => int_inputs_20_address1,
     ce1      => int_inputs_20_ce1,
     we1      => int_inputs_20_we1,
     be1      => int_inputs_20_be1,
     d1       => int_inputs_20_d1,
     q1       => int_inputs_20_q1);
-- int_inputs_21
int_inputs_21 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_21_address0,
     ce0      => int_inputs_21_ce0,
     we0      => int_inputs_21_we0,
     be0      => int_inputs_21_be0,
     d0       => int_inputs_21_d0,
     q0       => int_inputs_21_q0,
     clk1     => ACLK,
     address1 => int_inputs_21_address1,
     ce1      => int_inputs_21_ce1,
     we1      => int_inputs_21_we1,
     be1      => int_inputs_21_be1,
     d1       => int_inputs_21_d1,
     q1       => int_inputs_21_q1);
-- int_inputs_22
int_inputs_22 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_22_address0,
     ce0      => int_inputs_22_ce0,
     we0      => int_inputs_22_we0,
     be0      => int_inputs_22_be0,
     d0       => int_inputs_22_d0,
     q0       => int_inputs_22_q0,
     clk1     => ACLK,
     address1 => int_inputs_22_address1,
     ce1      => int_inputs_22_ce1,
     we1      => int_inputs_22_we1,
     be1      => int_inputs_22_be1,
     d1       => int_inputs_22_d1,
     q1       => int_inputs_22_q1);
-- int_inputs_23
int_inputs_23 : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 4,
     AWIDTH   => log2(4))
port map (
     clk0     => ACLK,
     address0 => int_inputs_23_address0,
     ce0      => int_inputs_23_ce0,
     we0      => int_inputs_23_we0,
     be0      => int_inputs_23_be0,
     d0       => int_inputs_23_d0,
     q0       => int_inputs_23_q0,
     clk1     => ACLK,
     address1 => int_inputs_23_address1,
     ce1      => int_inputs_23_ce1,
     we1      => int_inputs_23_we1,
     be1      => int_inputs_23_be1,
     d1       => int_inputs_23_d1,
     q1       => int_inputs_23_q1);

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
    RVALID_t  <= '1' when (rstate = rddata) and (int_inputs_0_read = '0') and (int_inputs_1_read = '0') and (int_inputs_2_read = '0') and (int_inputs_3_read = '0') and (int_inputs_4_read = '0') and (int_inputs_5_read = '0') and (int_inputs_6_read = '0') and (int_inputs_7_read = '0') and (int_inputs_8_read = '0') and (int_inputs_9_read = '0') and (int_inputs_10_read = '0') and (int_inputs_11_read = '0') and (int_inputs_12_read = '0') and (int_inputs_13_read = '0') and (int_inputs_14_read = '0') and (int_inputs_15_read = '0') and (int_inputs_16_read = '0') and (int_inputs_17_read = '0') and (int_inputs_18_read = '0') and (int_inputs_19_read = '0') and (int_inputs_20_read = '0') and (int_inputs_21_read = '0') and (int_inputs_22_read = '0') and (int_inputs_23_read = '0') else '0';
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
                    when ADDR_COUNTS_0_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_0_i(31 downto 0), 32);
                    when ADDR_COUNTS_0_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_0_o(31 downto 0), 32);
                    when ADDR_COUNTS_0_O_CTRL =>
                        rdata_data <= (0 => int_counts_0_o_ap_vld, others => '0');
                    when ADDR_COUNTS_1_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_1_i(31 downto 0), 32);
                    when ADDR_COUNTS_1_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_1_o(31 downto 0), 32);
                    when ADDR_COUNTS_1_O_CTRL =>
                        rdata_data <= (0 => int_counts_1_o_ap_vld, others => '0');
                    when ADDR_COUNTS_2_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_2_i(31 downto 0), 32);
                    when ADDR_COUNTS_2_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_2_o(31 downto 0), 32);
                    when ADDR_COUNTS_2_O_CTRL =>
                        rdata_data <= (0 => int_counts_2_o_ap_vld, others => '0');
                    when ADDR_COUNTS_3_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_3_i(31 downto 0), 32);
                    when ADDR_COUNTS_3_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_3_o(31 downto 0), 32);
                    when ADDR_COUNTS_3_O_CTRL =>
                        rdata_data <= (0 => int_counts_3_o_ap_vld, others => '0');
                    when ADDR_COUNTS_4_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_4_i(31 downto 0), 32);
                    when ADDR_COUNTS_4_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_4_o(31 downto 0), 32);
                    when ADDR_COUNTS_4_O_CTRL =>
                        rdata_data <= (0 => int_counts_4_o_ap_vld, others => '0');
                    when ADDR_COUNTS_5_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_5_i(31 downto 0), 32);
                    when ADDR_COUNTS_5_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_5_o(31 downto 0), 32);
                    when ADDR_COUNTS_5_O_CTRL =>
                        rdata_data <= (0 => int_counts_5_o_ap_vld, others => '0');
                    when ADDR_COUNTS_6_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_6_i(31 downto 0), 32);
                    when ADDR_COUNTS_6_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_6_o(31 downto 0), 32);
                    when ADDR_COUNTS_6_O_CTRL =>
                        rdata_data <= (0 => int_counts_6_o_ap_vld, others => '0');
                    when ADDR_COUNTS_7_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_7_i(31 downto 0), 32);
                    when ADDR_COUNTS_7_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_7_o(31 downto 0), 32);
                    when ADDR_COUNTS_7_O_CTRL =>
                        rdata_data <= (0 => int_counts_7_o_ap_vld, others => '0');
                    when ADDR_COUNTS_8_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_8_i(31 downto 0), 32);
                    when ADDR_COUNTS_8_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_8_o(31 downto 0), 32);
                    when ADDR_COUNTS_8_O_CTRL =>
                        rdata_data <= (0 => int_counts_8_o_ap_vld, others => '0');
                    when ADDR_COUNTS_9_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_9_i(31 downto 0), 32);
                    when ADDR_COUNTS_9_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_9_o(31 downto 0), 32);
                    when ADDR_COUNTS_9_O_CTRL =>
                        rdata_data <= (0 => int_counts_9_o_ap_vld, others => '0');
                    when ADDR_COUNTS_10_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_10_i(31 downto 0), 32);
                    when ADDR_COUNTS_10_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_10_o(31 downto 0), 32);
                    when ADDR_COUNTS_10_O_CTRL =>
                        rdata_data <= (0 => int_counts_10_o_ap_vld, others => '0');
                    when ADDR_COUNTS_11_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_11_i(31 downto 0), 32);
                    when ADDR_COUNTS_11_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_11_o(31 downto 0), 32);
                    when ADDR_COUNTS_11_O_CTRL =>
                        rdata_data <= (0 => int_counts_11_o_ap_vld, others => '0');
                    when ADDR_COUNTS_12_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_12_i(31 downto 0), 32);
                    when ADDR_COUNTS_12_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_12_o(31 downto 0), 32);
                    when ADDR_COUNTS_12_O_CTRL =>
                        rdata_data <= (0 => int_counts_12_o_ap_vld, others => '0');
                    when ADDR_COUNTS_13_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_13_i(31 downto 0), 32);
                    when ADDR_COUNTS_13_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_13_o(31 downto 0), 32);
                    when ADDR_COUNTS_13_O_CTRL =>
                        rdata_data <= (0 => int_counts_13_o_ap_vld, others => '0');
                    when ADDR_COUNTS_14_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_14_i(31 downto 0), 32);
                    when ADDR_COUNTS_14_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_14_o(31 downto 0), 32);
                    when ADDR_COUNTS_14_O_CTRL =>
                        rdata_data <= (0 => int_counts_14_o_ap_vld, others => '0');
                    when ADDR_COUNTS_15_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_15_i(31 downto 0), 32);
                    when ADDR_COUNTS_15_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_15_o(31 downto 0), 32);
                    when ADDR_COUNTS_15_O_CTRL =>
                        rdata_data <= (0 => int_counts_15_o_ap_vld, others => '0');
                    when ADDR_COUNTS_16_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_16_i(31 downto 0), 32);
                    when ADDR_COUNTS_16_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_16_o(31 downto 0), 32);
                    when ADDR_COUNTS_16_O_CTRL =>
                        rdata_data <= (0 => int_counts_16_o_ap_vld, others => '0');
                    when ADDR_COUNTS_17_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_17_i(31 downto 0), 32);
                    when ADDR_COUNTS_17_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_17_o(31 downto 0), 32);
                    when ADDR_COUNTS_17_O_CTRL =>
                        rdata_data <= (0 => int_counts_17_o_ap_vld, others => '0');
                    when ADDR_COUNTS_18_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_18_i(31 downto 0), 32);
                    when ADDR_COUNTS_18_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_18_o(31 downto 0), 32);
                    when ADDR_COUNTS_18_O_CTRL =>
                        rdata_data <= (0 => int_counts_18_o_ap_vld, others => '0');
                    when ADDR_COUNTS_19_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_19_i(31 downto 0), 32);
                    when ADDR_COUNTS_19_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_19_o(31 downto 0), 32);
                    when ADDR_COUNTS_19_O_CTRL =>
                        rdata_data <= (0 => int_counts_19_o_ap_vld, others => '0');
                    when ADDR_COUNTS_20_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_20_i(31 downto 0), 32);
                    when ADDR_COUNTS_20_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_20_o(31 downto 0), 32);
                    when ADDR_COUNTS_20_O_CTRL =>
                        rdata_data <= (0 => int_counts_20_o_ap_vld, others => '0');
                    when ADDR_COUNTS_21_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_21_i(31 downto 0), 32);
                    when ADDR_COUNTS_21_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_21_o(31 downto 0), 32);
                    when ADDR_COUNTS_21_O_CTRL =>
                        rdata_data <= (0 => int_counts_21_o_ap_vld, others => '0');
                    when ADDR_COUNTS_22_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_22_i(31 downto 0), 32);
                    when ADDR_COUNTS_22_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_22_o(31 downto 0), 32);
                    when ADDR_COUNTS_22_O_CTRL =>
                        rdata_data <= (0 => int_counts_22_o_ap_vld, others => '0');
                    when ADDR_COUNTS_23_I_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_23_i(31 downto 0), 32);
                    when ADDR_COUNTS_23_O_DATA_0 =>
                        rdata_data <= RESIZE(int_counts_23_o(31 downto 0), 32);
                    when ADDR_COUNTS_23_O_CTRL =>
                        rdata_data <= (0 => int_counts_23_o_ap_vld, others => '0');
                    when ADDR_OUTPUTS_0_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_0(31 downto 0), 32);
                    when ADDR_OUTPUTS_0_CTRL =>
                        rdata_data <= (0 => int_outputs_0_ap_vld, others => '0');
                    when ADDR_OUTPUTS_1_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_1(31 downto 0), 32);
                    when ADDR_OUTPUTS_1_CTRL =>
                        rdata_data <= (0 => int_outputs_1_ap_vld, others => '0');
                    when ADDR_OUTPUTS_2_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_2(31 downto 0), 32);
                    when ADDR_OUTPUTS_2_CTRL =>
                        rdata_data <= (0 => int_outputs_2_ap_vld, others => '0');
                    when ADDR_OUTPUTS_3_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_3(31 downto 0), 32);
                    when ADDR_OUTPUTS_3_CTRL =>
                        rdata_data <= (0 => int_outputs_3_ap_vld, others => '0');
                    when ADDR_OUTPUTS_4_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_4(31 downto 0), 32);
                    when ADDR_OUTPUTS_4_CTRL =>
                        rdata_data <= (0 => int_outputs_4_ap_vld, others => '0');
                    when ADDR_OUTPUTS_5_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_5(31 downto 0), 32);
                    when ADDR_OUTPUTS_5_CTRL =>
                        rdata_data <= (0 => int_outputs_5_ap_vld, others => '0');
                    when ADDR_OUTPUTS_6_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_6(31 downto 0), 32);
                    when ADDR_OUTPUTS_6_CTRL =>
                        rdata_data <= (0 => int_outputs_6_ap_vld, others => '0');
                    when ADDR_OUTPUTS_7_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_7(31 downto 0), 32);
                    when ADDR_OUTPUTS_7_CTRL =>
                        rdata_data <= (0 => int_outputs_7_ap_vld, others => '0');
                    when ADDR_OUTPUTS_8_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_8(31 downto 0), 32);
                    when ADDR_OUTPUTS_8_CTRL =>
                        rdata_data <= (0 => int_outputs_8_ap_vld, others => '0');
                    when ADDR_OUTPUTS_9_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_9(31 downto 0), 32);
                    when ADDR_OUTPUTS_9_CTRL =>
                        rdata_data <= (0 => int_outputs_9_ap_vld, others => '0');
                    when ADDR_OUTPUTS_10_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_10(31 downto 0), 32);
                    when ADDR_OUTPUTS_10_CTRL =>
                        rdata_data <= (0 => int_outputs_10_ap_vld, others => '0');
                    when ADDR_OUTPUTS_11_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_11(31 downto 0), 32);
                    when ADDR_OUTPUTS_11_CTRL =>
                        rdata_data <= (0 => int_outputs_11_ap_vld, others => '0');
                    when ADDR_OUTPUTS_12_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_12(31 downto 0), 32);
                    when ADDR_OUTPUTS_12_CTRL =>
                        rdata_data <= (0 => int_outputs_12_ap_vld, others => '0');
                    when ADDR_OUTPUTS_13_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_13(31 downto 0), 32);
                    when ADDR_OUTPUTS_13_CTRL =>
                        rdata_data <= (0 => int_outputs_13_ap_vld, others => '0');
                    when ADDR_OUTPUTS_14_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_14(31 downto 0), 32);
                    when ADDR_OUTPUTS_14_CTRL =>
                        rdata_data <= (0 => int_outputs_14_ap_vld, others => '0');
                    when ADDR_OUTPUTS_15_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_15(31 downto 0), 32);
                    when ADDR_OUTPUTS_15_CTRL =>
                        rdata_data <= (0 => int_outputs_15_ap_vld, others => '0');
                    when ADDR_OUTPUTS_16_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_16(31 downto 0), 32);
                    when ADDR_OUTPUTS_16_CTRL =>
                        rdata_data <= (0 => int_outputs_16_ap_vld, others => '0');
                    when ADDR_OUTPUTS_17_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_17(31 downto 0), 32);
                    when ADDR_OUTPUTS_17_CTRL =>
                        rdata_data <= (0 => int_outputs_17_ap_vld, others => '0');
                    when ADDR_OUTPUTS_18_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_18(31 downto 0), 32);
                    when ADDR_OUTPUTS_18_CTRL =>
                        rdata_data <= (0 => int_outputs_18_ap_vld, others => '0');
                    when ADDR_OUTPUTS_19_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_19(31 downto 0), 32);
                    when ADDR_OUTPUTS_19_CTRL =>
                        rdata_data <= (0 => int_outputs_19_ap_vld, others => '0');
                    when ADDR_OUTPUTS_20_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_20(31 downto 0), 32);
                    when ADDR_OUTPUTS_20_CTRL =>
                        rdata_data <= (0 => int_outputs_20_ap_vld, others => '0');
                    when ADDR_OUTPUTS_21_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_21(31 downto 0), 32);
                    when ADDR_OUTPUTS_21_CTRL =>
                        rdata_data <= (0 => int_outputs_21_ap_vld, others => '0');
                    when ADDR_OUTPUTS_22_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_22(31 downto 0), 32);
                    when ADDR_OUTPUTS_22_CTRL =>
                        rdata_data <= (0 => int_outputs_22_ap_vld, others => '0');
                    when ADDR_OUTPUTS_23_DATA_0 =>
                        rdata_data <= RESIZE(int_outputs_23(31 downto 0), 32);
                    when ADDR_OUTPUTS_23_CTRL =>
                        rdata_data <= (0 => int_outputs_23_ap_vld, others => '0');
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
                elsif (int_inputs_12_read = '1') then
                    rdata_data <= int_inputs_12_q1;
                elsif (int_inputs_13_read = '1') then
                    rdata_data <= int_inputs_13_q1;
                elsif (int_inputs_14_read = '1') then
                    rdata_data <= int_inputs_14_q1;
                elsif (int_inputs_15_read = '1') then
                    rdata_data <= int_inputs_15_q1;
                elsif (int_inputs_16_read = '1') then
                    rdata_data <= int_inputs_16_q1;
                elsif (int_inputs_17_read = '1') then
                    rdata_data <= int_inputs_17_q1;
                elsif (int_inputs_18_read = '1') then
                    rdata_data <= int_inputs_18_q1;
                elsif (int_inputs_19_read = '1') then
                    rdata_data <= int_inputs_19_q1;
                elsif (int_inputs_20_read = '1') then
                    rdata_data <= int_inputs_20_q1;
                elsif (int_inputs_21_read = '1') then
                    rdata_data <= int_inputs_21_q1;
                elsif (int_inputs_22_read = '1') then
                    rdata_data <= int_inputs_22_q1;
                elsif (int_inputs_23_read = '1') then
                    rdata_data <= int_inputs_23_q1;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    interrupt            <= int_gie and (int_isr(0) or int_isr(1));
    ap_start             <= int_ap_start;
    counts_0_i           <= STD_LOGIC_VECTOR(int_counts_0_i);
    counts_1_i           <= STD_LOGIC_VECTOR(int_counts_1_i);
    counts_2_i           <= STD_LOGIC_VECTOR(int_counts_2_i);
    counts_3_i           <= STD_LOGIC_VECTOR(int_counts_3_i);
    counts_4_i           <= STD_LOGIC_VECTOR(int_counts_4_i);
    counts_5_i           <= STD_LOGIC_VECTOR(int_counts_5_i);
    counts_6_i           <= STD_LOGIC_VECTOR(int_counts_6_i);
    counts_7_i           <= STD_LOGIC_VECTOR(int_counts_7_i);
    counts_8_i           <= STD_LOGIC_VECTOR(int_counts_8_i);
    counts_9_i           <= STD_LOGIC_VECTOR(int_counts_9_i);
    counts_10_i          <= STD_LOGIC_VECTOR(int_counts_10_i);
    counts_11_i          <= STD_LOGIC_VECTOR(int_counts_11_i);
    counts_12_i          <= STD_LOGIC_VECTOR(int_counts_12_i);
    counts_13_i          <= STD_LOGIC_VECTOR(int_counts_13_i);
    counts_14_i          <= STD_LOGIC_VECTOR(int_counts_14_i);
    counts_15_i          <= STD_LOGIC_VECTOR(int_counts_15_i);
    counts_16_i          <= STD_LOGIC_VECTOR(int_counts_16_i);
    counts_17_i          <= STD_LOGIC_VECTOR(int_counts_17_i);
    counts_18_i          <= STD_LOGIC_VECTOR(int_counts_18_i);
    counts_19_i          <= STD_LOGIC_VECTOR(int_counts_19_i);
    counts_20_i          <= STD_LOGIC_VECTOR(int_counts_20_i);
    counts_21_i          <= STD_LOGIC_VECTOR(int_counts_21_i);
    counts_22_i          <= STD_LOGIC_VECTOR(int_counts_22_i);
    counts_23_i          <= STD_LOGIC_VECTOR(int_counts_23_i);

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
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_0_I_DATA_0) then
                    int_counts_0_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_0_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_0_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_0_o_ap_vld = '1') then
                    int_counts_0_o <= UNSIGNED(counts_0_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_0_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_0_o_ap_vld = '1') then
                    int_counts_0_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_0_O_CTRL) then
                    int_counts_0_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_1_I_DATA_0) then
                    int_counts_1_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_1_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_1_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_1_o_ap_vld = '1') then
                    int_counts_1_o <= UNSIGNED(counts_1_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_1_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_1_o_ap_vld = '1') then
                    int_counts_1_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_1_O_CTRL) then
                    int_counts_1_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_2_I_DATA_0) then
                    int_counts_2_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_2_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_2_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_2_o_ap_vld = '1') then
                    int_counts_2_o <= UNSIGNED(counts_2_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_2_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_2_o_ap_vld = '1') then
                    int_counts_2_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_2_O_CTRL) then
                    int_counts_2_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_3_I_DATA_0) then
                    int_counts_3_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_3_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_3_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_3_o_ap_vld = '1') then
                    int_counts_3_o <= UNSIGNED(counts_3_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_3_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_3_o_ap_vld = '1') then
                    int_counts_3_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_3_O_CTRL) then
                    int_counts_3_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_4_I_DATA_0) then
                    int_counts_4_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_4_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_4_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_4_o_ap_vld = '1') then
                    int_counts_4_o <= UNSIGNED(counts_4_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_4_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_4_o_ap_vld = '1') then
                    int_counts_4_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_4_O_CTRL) then
                    int_counts_4_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_5_I_DATA_0) then
                    int_counts_5_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_5_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_5_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_5_o_ap_vld = '1') then
                    int_counts_5_o <= UNSIGNED(counts_5_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_5_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_5_o_ap_vld = '1') then
                    int_counts_5_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_5_O_CTRL) then
                    int_counts_5_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_6_I_DATA_0) then
                    int_counts_6_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_6_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_6_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_6_o_ap_vld = '1') then
                    int_counts_6_o <= UNSIGNED(counts_6_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_6_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_6_o_ap_vld = '1') then
                    int_counts_6_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_6_O_CTRL) then
                    int_counts_6_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_7_I_DATA_0) then
                    int_counts_7_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_7_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_7_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_7_o_ap_vld = '1') then
                    int_counts_7_o <= UNSIGNED(counts_7_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_7_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_7_o_ap_vld = '1') then
                    int_counts_7_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_7_O_CTRL) then
                    int_counts_7_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_8_I_DATA_0) then
                    int_counts_8_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_8_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_8_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_8_o_ap_vld = '1') then
                    int_counts_8_o <= UNSIGNED(counts_8_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_8_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_8_o_ap_vld = '1') then
                    int_counts_8_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_8_O_CTRL) then
                    int_counts_8_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_9_I_DATA_0) then
                    int_counts_9_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_9_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_9_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_9_o_ap_vld = '1') then
                    int_counts_9_o <= UNSIGNED(counts_9_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_9_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_9_o_ap_vld = '1') then
                    int_counts_9_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_9_O_CTRL) then
                    int_counts_9_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_10_I_DATA_0) then
                    int_counts_10_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_10_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_10_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_10_o_ap_vld = '1') then
                    int_counts_10_o <= UNSIGNED(counts_10_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_10_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_10_o_ap_vld = '1') then
                    int_counts_10_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_10_O_CTRL) then
                    int_counts_10_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_11_I_DATA_0) then
                    int_counts_11_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_11_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_11_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_11_o_ap_vld = '1') then
                    int_counts_11_o <= UNSIGNED(counts_11_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_11_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_11_o_ap_vld = '1') then
                    int_counts_11_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_11_O_CTRL) then
                    int_counts_11_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_12_I_DATA_0) then
                    int_counts_12_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_12_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_12_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_12_o_ap_vld = '1') then
                    int_counts_12_o <= UNSIGNED(counts_12_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_12_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_12_o_ap_vld = '1') then
                    int_counts_12_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_12_O_CTRL) then
                    int_counts_12_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_13_I_DATA_0) then
                    int_counts_13_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_13_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_13_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_13_o_ap_vld = '1') then
                    int_counts_13_o <= UNSIGNED(counts_13_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_13_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_13_o_ap_vld = '1') then
                    int_counts_13_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_13_O_CTRL) then
                    int_counts_13_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_14_I_DATA_0) then
                    int_counts_14_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_14_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_14_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_14_o_ap_vld = '1') then
                    int_counts_14_o <= UNSIGNED(counts_14_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_14_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_14_o_ap_vld = '1') then
                    int_counts_14_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_14_O_CTRL) then
                    int_counts_14_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_15_I_DATA_0) then
                    int_counts_15_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_15_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_15_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_15_o_ap_vld = '1') then
                    int_counts_15_o <= UNSIGNED(counts_15_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_15_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_15_o_ap_vld = '1') then
                    int_counts_15_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_15_O_CTRL) then
                    int_counts_15_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_16_I_DATA_0) then
                    int_counts_16_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_16_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_16_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_16_o_ap_vld = '1') then
                    int_counts_16_o <= UNSIGNED(counts_16_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_16_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_16_o_ap_vld = '1') then
                    int_counts_16_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_16_O_CTRL) then
                    int_counts_16_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_17_I_DATA_0) then
                    int_counts_17_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_17_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_17_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_17_o_ap_vld = '1') then
                    int_counts_17_o <= UNSIGNED(counts_17_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_17_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_17_o_ap_vld = '1') then
                    int_counts_17_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_17_O_CTRL) then
                    int_counts_17_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_18_I_DATA_0) then
                    int_counts_18_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_18_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_18_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_18_o_ap_vld = '1') then
                    int_counts_18_o <= UNSIGNED(counts_18_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_18_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_18_o_ap_vld = '1') then
                    int_counts_18_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_18_O_CTRL) then
                    int_counts_18_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_19_I_DATA_0) then
                    int_counts_19_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_19_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_19_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_19_o_ap_vld = '1') then
                    int_counts_19_o <= UNSIGNED(counts_19_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_19_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_19_o_ap_vld = '1') then
                    int_counts_19_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_19_O_CTRL) then
                    int_counts_19_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_20_I_DATA_0) then
                    int_counts_20_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_20_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_20_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_20_o_ap_vld = '1') then
                    int_counts_20_o <= UNSIGNED(counts_20_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_20_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_20_o_ap_vld = '1') then
                    int_counts_20_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_20_O_CTRL) then
                    int_counts_20_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_21_I_DATA_0) then
                    int_counts_21_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_21_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_21_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_21_o_ap_vld = '1') then
                    int_counts_21_o <= UNSIGNED(counts_21_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_21_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_21_o_ap_vld = '1') then
                    int_counts_21_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_21_O_CTRL) then
                    int_counts_21_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_22_I_DATA_0) then
                    int_counts_22_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_22_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_22_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_22_o_ap_vld = '1') then
                    int_counts_22_o <= UNSIGNED(counts_22_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_22_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_22_o_ap_vld = '1') then
                    int_counts_22_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_22_O_CTRL) then
                    int_counts_22_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_COUNTS_23_I_DATA_0) then
                    int_counts_23_i(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_counts_23_i(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_23_o <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (counts_23_o_ap_vld = '1') then
                    int_counts_23_o <= UNSIGNED(counts_23_o); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_23_o_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (counts_23_o_ap_vld = '1') then
                    int_counts_23_o_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_COUNTS_23_O_CTRL) then
                    int_counts_23_o_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_0 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_0_ap_vld = '1') then
                    int_outputs_0 <= UNSIGNED(outputs_0); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_0_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_0_ap_vld = '1') then
                    int_outputs_0_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_0_CTRL) then
                    int_outputs_0_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_1 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_1_ap_vld = '1') then
                    int_outputs_1 <= UNSIGNED(outputs_1); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_1_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_1_ap_vld = '1') then
                    int_outputs_1_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_1_CTRL) then
                    int_outputs_1_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_2 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_2_ap_vld = '1') then
                    int_outputs_2 <= UNSIGNED(outputs_2); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_2_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_2_ap_vld = '1') then
                    int_outputs_2_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_2_CTRL) then
                    int_outputs_2_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_3 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_3_ap_vld = '1') then
                    int_outputs_3 <= UNSIGNED(outputs_3); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_3_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_3_ap_vld = '1') then
                    int_outputs_3_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_3_CTRL) then
                    int_outputs_3_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_4 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_4_ap_vld = '1') then
                    int_outputs_4 <= UNSIGNED(outputs_4); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_4_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_4_ap_vld = '1') then
                    int_outputs_4_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_4_CTRL) then
                    int_outputs_4_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_5 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_5_ap_vld = '1') then
                    int_outputs_5 <= UNSIGNED(outputs_5); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_5_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_5_ap_vld = '1') then
                    int_outputs_5_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_5_CTRL) then
                    int_outputs_5_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_6 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_6_ap_vld = '1') then
                    int_outputs_6 <= UNSIGNED(outputs_6); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_6_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_6_ap_vld = '1') then
                    int_outputs_6_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_6_CTRL) then
                    int_outputs_6_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_7 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_7_ap_vld = '1') then
                    int_outputs_7 <= UNSIGNED(outputs_7); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_7_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_7_ap_vld = '1') then
                    int_outputs_7_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_7_CTRL) then
                    int_outputs_7_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_8 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_8_ap_vld = '1') then
                    int_outputs_8 <= UNSIGNED(outputs_8); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_8_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_8_ap_vld = '1') then
                    int_outputs_8_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_8_CTRL) then
                    int_outputs_8_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_9 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_9_ap_vld = '1') then
                    int_outputs_9 <= UNSIGNED(outputs_9); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_9_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_9_ap_vld = '1') then
                    int_outputs_9_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_9_CTRL) then
                    int_outputs_9_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_10 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_10_ap_vld = '1') then
                    int_outputs_10 <= UNSIGNED(outputs_10); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_10_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_10_ap_vld = '1') then
                    int_outputs_10_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_10_CTRL) then
                    int_outputs_10_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_11 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_11_ap_vld = '1') then
                    int_outputs_11 <= UNSIGNED(outputs_11); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_11_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_11_ap_vld = '1') then
                    int_outputs_11_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_11_CTRL) then
                    int_outputs_11_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_12 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_12_ap_vld = '1') then
                    int_outputs_12 <= UNSIGNED(outputs_12); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_12_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_12_ap_vld = '1') then
                    int_outputs_12_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_12_CTRL) then
                    int_outputs_12_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_13 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_13_ap_vld = '1') then
                    int_outputs_13 <= UNSIGNED(outputs_13); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_13_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_13_ap_vld = '1') then
                    int_outputs_13_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_13_CTRL) then
                    int_outputs_13_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_14 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_14_ap_vld = '1') then
                    int_outputs_14 <= UNSIGNED(outputs_14); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_14_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_14_ap_vld = '1') then
                    int_outputs_14_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_14_CTRL) then
                    int_outputs_14_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_15 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_15_ap_vld = '1') then
                    int_outputs_15 <= UNSIGNED(outputs_15); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_15_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_15_ap_vld = '1') then
                    int_outputs_15_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_15_CTRL) then
                    int_outputs_15_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_16 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_16_ap_vld = '1') then
                    int_outputs_16 <= UNSIGNED(outputs_16); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_16_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_16_ap_vld = '1') then
                    int_outputs_16_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_16_CTRL) then
                    int_outputs_16_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_17 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_17_ap_vld = '1') then
                    int_outputs_17 <= UNSIGNED(outputs_17); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_17_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_17_ap_vld = '1') then
                    int_outputs_17_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_17_CTRL) then
                    int_outputs_17_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_18 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_18_ap_vld = '1') then
                    int_outputs_18 <= UNSIGNED(outputs_18); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_18_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_18_ap_vld = '1') then
                    int_outputs_18_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_18_CTRL) then
                    int_outputs_18_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_19 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_19_ap_vld = '1') then
                    int_outputs_19 <= UNSIGNED(outputs_19); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_19_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_19_ap_vld = '1') then
                    int_outputs_19_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_19_CTRL) then
                    int_outputs_19_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_20 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_20_ap_vld = '1') then
                    int_outputs_20 <= UNSIGNED(outputs_20); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_20_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_20_ap_vld = '1') then
                    int_outputs_20_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_20_CTRL) then
                    int_outputs_20_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_21 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_21_ap_vld = '1') then
                    int_outputs_21 <= UNSIGNED(outputs_21); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_21_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_21_ap_vld = '1') then
                    int_outputs_21_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_21_CTRL) then
                    int_outputs_21_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_22 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_22_ap_vld = '1') then
                    int_outputs_22 <= UNSIGNED(outputs_22); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_22_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_22_ap_vld = '1') then
                    int_outputs_22_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_22_CTRL) then
                    int_outputs_22_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_23 <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (outputs_23_ap_vld = '1') then
                    int_outputs_23 <= UNSIGNED(outputs_23); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_23_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (outputs_23_ap_vld = '1') then
                    int_outputs_23_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUTS_23_CTRL) then
                    int_outputs_23_ap_vld <= '0'; -- clear on read
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
    int_inputs_0_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_1_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_2_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_3_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_4_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_5_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_6_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_7_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_8_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_9_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_10_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
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
    int_inputs_11_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_11_ce1    <= '1' when ar_hs = '1' or (int_inputs_11_write = '1' and WVALID  = '1') else '0';
    int_inputs_11_we1    <= '1' when int_inputs_11_write = '1' and WVALID = '1' else '0';
    int_inputs_11_be1    <= UNSIGNED(WSTRB);
    int_inputs_11_d1     <= UNSIGNED(WDATA);
    -- inputs_12
    int_inputs_12_address0 <= UNSIGNED(inputs_12_address0);
    int_inputs_12_ce0    <= inputs_12_ce0;
    int_inputs_12_we0    <= '0';
    int_inputs_12_be0    <= (others => '0');
    int_inputs_12_d0     <= (others => '0');
    inputs_12_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_12_q0, 32));
    int_inputs_12_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_12_ce1    <= '1' when ar_hs = '1' or (int_inputs_12_write = '1' and WVALID  = '1') else '0';
    int_inputs_12_we1    <= '1' when int_inputs_12_write = '1' and WVALID = '1' else '0';
    int_inputs_12_be1    <= UNSIGNED(WSTRB);
    int_inputs_12_d1     <= UNSIGNED(WDATA);
    -- inputs_13
    int_inputs_13_address0 <= UNSIGNED(inputs_13_address0);
    int_inputs_13_ce0    <= inputs_13_ce0;
    int_inputs_13_we0    <= '0';
    int_inputs_13_be0    <= (others => '0');
    int_inputs_13_d0     <= (others => '0');
    inputs_13_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_13_q0, 32));
    int_inputs_13_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_13_ce1    <= '1' when ar_hs = '1' or (int_inputs_13_write = '1' and WVALID  = '1') else '0';
    int_inputs_13_we1    <= '1' when int_inputs_13_write = '1' and WVALID = '1' else '0';
    int_inputs_13_be1    <= UNSIGNED(WSTRB);
    int_inputs_13_d1     <= UNSIGNED(WDATA);
    -- inputs_14
    int_inputs_14_address0 <= UNSIGNED(inputs_14_address0);
    int_inputs_14_ce0    <= inputs_14_ce0;
    int_inputs_14_we0    <= '0';
    int_inputs_14_be0    <= (others => '0');
    int_inputs_14_d0     <= (others => '0');
    inputs_14_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_14_q0, 32));
    int_inputs_14_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_14_ce1    <= '1' when ar_hs = '1' or (int_inputs_14_write = '1' and WVALID  = '1') else '0';
    int_inputs_14_we1    <= '1' when int_inputs_14_write = '1' and WVALID = '1' else '0';
    int_inputs_14_be1    <= UNSIGNED(WSTRB);
    int_inputs_14_d1     <= UNSIGNED(WDATA);
    -- inputs_15
    int_inputs_15_address0 <= UNSIGNED(inputs_15_address0);
    int_inputs_15_ce0    <= inputs_15_ce0;
    int_inputs_15_we0    <= '0';
    int_inputs_15_be0    <= (others => '0');
    int_inputs_15_d0     <= (others => '0');
    inputs_15_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_15_q0, 32));
    int_inputs_15_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_15_ce1    <= '1' when ar_hs = '1' or (int_inputs_15_write = '1' and WVALID  = '1') else '0';
    int_inputs_15_we1    <= '1' when int_inputs_15_write = '1' and WVALID = '1' else '0';
    int_inputs_15_be1    <= UNSIGNED(WSTRB);
    int_inputs_15_d1     <= UNSIGNED(WDATA);
    -- inputs_16
    int_inputs_16_address0 <= UNSIGNED(inputs_16_address0);
    int_inputs_16_ce0    <= inputs_16_ce0;
    int_inputs_16_we0    <= '0';
    int_inputs_16_be0    <= (others => '0');
    int_inputs_16_d0     <= (others => '0');
    inputs_16_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_16_q0, 32));
    int_inputs_16_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_16_ce1    <= '1' when ar_hs = '1' or (int_inputs_16_write = '1' and WVALID  = '1') else '0';
    int_inputs_16_we1    <= '1' when int_inputs_16_write = '1' and WVALID = '1' else '0';
    int_inputs_16_be1    <= UNSIGNED(WSTRB);
    int_inputs_16_d1     <= UNSIGNED(WDATA);
    -- inputs_17
    int_inputs_17_address0 <= UNSIGNED(inputs_17_address0);
    int_inputs_17_ce0    <= inputs_17_ce0;
    int_inputs_17_we0    <= '0';
    int_inputs_17_be0    <= (others => '0');
    int_inputs_17_d0     <= (others => '0');
    inputs_17_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_17_q0, 32));
    int_inputs_17_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_17_ce1    <= '1' when ar_hs = '1' or (int_inputs_17_write = '1' and WVALID  = '1') else '0';
    int_inputs_17_we1    <= '1' when int_inputs_17_write = '1' and WVALID = '1' else '0';
    int_inputs_17_be1    <= UNSIGNED(WSTRB);
    int_inputs_17_d1     <= UNSIGNED(WDATA);
    -- inputs_18
    int_inputs_18_address0 <= UNSIGNED(inputs_18_address0);
    int_inputs_18_ce0    <= inputs_18_ce0;
    int_inputs_18_we0    <= '0';
    int_inputs_18_be0    <= (others => '0');
    int_inputs_18_d0     <= (others => '0');
    inputs_18_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_18_q0, 32));
    int_inputs_18_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_18_ce1    <= '1' when ar_hs = '1' or (int_inputs_18_write = '1' and WVALID  = '1') else '0';
    int_inputs_18_we1    <= '1' when int_inputs_18_write = '1' and WVALID = '1' else '0';
    int_inputs_18_be1    <= UNSIGNED(WSTRB);
    int_inputs_18_d1     <= UNSIGNED(WDATA);
    -- inputs_19
    int_inputs_19_address0 <= UNSIGNED(inputs_19_address0);
    int_inputs_19_ce0    <= inputs_19_ce0;
    int_inputs_19_we0    <= '0';
    int_inputs_19_be0    <= (others => '0');
    int_inputs_19_d0     <= (others => '0');
    inputs_19_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_19_q0, 32));
    int_inputs_19_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_19_ce1    <= '1' when ar_hs = '1' or (int_inputs_19_write = '1' and WVALID  = '1') else '0';
    int_inputs_19_we1    <= '1' when int_inputs_19_write = '1' and WVALID = '1' else '0';
    int_inputs_19_be1    <= UNSIGNED(WSTRB);
    int_inputs_19_d1     <= UNSIGNED(WDATA);
    -- inputs_20
    int_inputs_20_address0 <= UNSIGNED(inputs_20_address0);
    int_inputs_20_ce0    <= inputs_20_ce0;
    int_inputs_20_we0    <= '0';
    int_inputs_20_be0    <= (others => '0');
    int_inputs_20_d0     <= (others => '0');
    inputs_20_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_20_q0, 32));
    int_inputs_20_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_20_ce1    <= '1' when ar_hs = '1' or (int_inputs_20_write = '1' and WVALID  = '1') else '0';
    int_inputs_20_we1    <= '1' when int_inputs_20_write = '1' and WVALID = '1' else '0';
    int_inputs_20_be1    <= UNSIGNED(WSTRB);
    int_inputs_20_d1     <= UNSIGNED(WDATA);
    -- inputs_21
    int_inputs_21_address0 <= UNSIGNED(inputs_21_address0);
    int_inputs_21_ce0    <= inputs_21_ce0;
    int_inputs_21_we0    <= '0';
    int_inputs_21_be0    <= (others => '0');
    int_inputs_21_d0     <= (others => '0');
    inputs_21_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_21_q0, 32));
    int_inputs_21_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_21_ce1    <= '1' when ar_hs = '1' or (int_inputs_21_write = '1' and WVALID  = '1') else '0';
    int_inputs_21_we1    <= '1' when int_inputs_21_write = '1' and WVALID = '1' else '0';
    int_inputs_21_be1    <= UNSIGNED(WSTRB);
    int_inputs_21_d1     <= UNSIGNED(WDATA);
    -- inputs_22
    int_inputs_22_address0 <= UNSIGNED(inputs_22_address0);
    int_inputs_22_ce0    <= inputs_22_ce0;
    int_inputs_22_we0    <= '0';
    int_inputs_22_be0    <= (others => '0');
    int_inputs_22_d0     <= (others => '0');
    inputs_22_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_22_q0, 32));
    int_inputs_22_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_22_ce1    <= '1' when ar_hs = '1' or (int_inputs_22_write = '1' and WVALID  = '1') else '0';
    int_inputs_22_we1    <= '1' when int_inputs_22_write = '1' and WVALID = '1' else '0';
    int_inputs_22_be1    <= UNSIGNED(WSTRB);
    int_inputs_22_d1     <= UNSIGNED(WDATA);
    -- inputs_23
    int_inputs_23_address0 <= UNSIGNED(inputs_23_address0);
    int_inputs_23_ce0    <= inputs_23_ce0;
    int_inputs_23_we0    <= '0';
    int_inputs_23_be0    <= (others => '0');
    int_inputs_23_d0     <= (others => '0');
    inputs_23_q0         <= STD_LOGIC_VECTOR(RESIZE(int_inputs_23_q0, 32));
    int_inputs_23_address1 <= raddr(3 downto 2) when ar_hs = '1' else waddr(3 downto 2);
    int_inputs_23_ce1    <= '1' when ar_hs = '1' or (int_inputs_23_write = '1' and WVALID  = '1') else '0';
    int_inputs_23_we1    <= '1' when int_inputs_23_write = '1' and WVALID = '1' else '0';
    int_inputs_23_be1    <= UNSIGNED(WSTRB);
    int_inputs_23_d1     <= UNSIGNED(WDATA);

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
                int_inputs_12_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_12_BASE and raddr <= ADDR_INPUTS_12_HIGH) then
                    int_inputs_12_read <= '1';
                else
                    int_inputs_12_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_12_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_12_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_12_HIGH) then
                    int_inputs_12_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_12_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_13_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_13_BASE and raddr <= ADDR_INPUTS_13_HIGH) then
                    int_inputs_13_read <= '1';
                else
                    int_inputs_13_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_13_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_13_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_13_HIGH) then
                    int_inputs_13_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_13_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_14_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_14_BASE and raddr <= ADDR_INPUTS_14_HIGH) then
                    int_inputs_14_read <= '1';
                else
                    int_inputs_14_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_14_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_14_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_14_HIGH) then
                    int_inputs_14_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_14_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_15_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_15_BASE and raddr <= ADDR_INPUTS_15_HIGH) then
                    int_inputs_15_read <= '1';
                else
                    int_inputs_15_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_15_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_15_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_15_HIGH) then
                    int_inputs_15_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_15_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_16_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_16_BASE and raddr <= ADDR_INPUTS_16_HIGH) then
                    int_inputs_16_read <= '1';
                else
                    int_inputs_16_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_16_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_16_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_16_HIGH) then
                    int_inputs_16_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_16_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_17_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_17_BASE and raddr <= ADDR_INPUTS_17_HIGH) then
                    int_inputs_17_read <= '1';
                else
                    int_inputs_17_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_17_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_17_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_17_HIGH) then
                    int_inputs_17_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_17_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_18_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_18_BASE and raddr <= ADDR_INPUTS_18_HIGH) then
                    int_inputs_18_read <= '1';
                else
                    int_inputs_18_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_18_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_18_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_18_HIGH) then
                    int_inputs_18_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_18_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_19_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_19_BASE and raddr <= ADDR_INPUTS_19_HIGH) then
                    int_inputs_19_read <= '1';
                else
                    int_inputs_19_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_19_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_19_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_19_HIGH) then
                    int_inputs_19_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_19_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_20_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_20_BASE and raddr <= ADDR_INPUTS_20_HIGH) then
                    int_inputs_20_read <= '1';
                else
                    int_inputs_20_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_20_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_20_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_20_HIGH) then
                    int_inputs_20_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_20_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_21_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_21_BASE and raddr <= ADDR_INPUTS_21_HIGH) then
                    int_inputs_21_read <= '1';
                else
                    int_inputs_21_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_21_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_21_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_21_HIGH) then
                    int_inputs_21_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_21_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_22_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_22_BASE and raddr <= ADDR_INPUTS_22_HIGH) then
                    int_inputs_22_read <= '1';
                else
                    int_inputs_22_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_22_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_22_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_22_HIGH) then
                    int_inputs_22_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_22_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_23_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_23_BASE and raddr <= ADDR_INPUTS_23_HIGH) then
                    int_inputs_23_read <= '1';
                else
                    int_inputs_23_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_23_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_23_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_23_HIGH) then
                    int_inputs_23_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_23_write <= '0';
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


