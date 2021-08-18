-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity estimate_FR_AXILiteS_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 12;
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
    spks_address0         :in   STD_LOGIC_VECTOR(6 downto 0);
    spks_ce0              :in   STD_LOGIC;
    spks_q0               :out  STD_LOGIC_VECTOR(31 downto 0);
    update                :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_address0       :in   STD_LOGIC_VECTOR(6 downto 0);
    counts_ce0            :in   STD_LOGIC;
    counts_we0            :in   STD_LOGIC;
    counts_d0             :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_q0             :out  STD_LOGIC_VECTOR(31 downto 0);
    outputs_address0      :in   STD_LOGIC_VECTOR(6 downto 0);
    outputs_ce0           :in   STD_LOGIC;
    outputs_we0           :in   STD_LOGIC;
    outputs_d0            :in   STD_LOGIC_VECTOR(31 downto 0)
);
end entity estimate_FR_AXILiteS_s_axi;

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
-- 0x400 : Data signal of update
--         bit 31~0 - update[31:0] (Read/Write)
-- 0x404 : reserved
-- 0x200 ~
-- 0x3ff : Memory 'spks' (96 * 32b)
--         Word n : bit [31:0] - spks[n]
-- 0x600 ~
-- 0x7ff : Memory 'counts' (96 * 32b)
--         Word n : bit [31:0] - counts[n]
-- 0x800 ~
-- 0x9ff : Memory 'outputs' (96 * 32b)
--         Word n : bit [31:0] - outputs[n]
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of estimate_FR_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL       : INTEGER := 16#000#;
    constant ADDR_GIE           : INTEGER := 16#004#;
    constant ADDR_IER           : INTEGER := 16#008#;
    constant ADDR_ISR           : INTEGER := 16#00c#;
    constant ADDR_UPDATE_DATA_0 : INTEGER := 16#400#;
    constant ADDR_UPDATE_CTRL   : INTEGER := 16#404#;
    constant ADDR_SPKS_BASE     : INTEGER := 16#200#;
    constant ADDR_SPKS_HIGH     : INTEGER := 16#3ff#;
    constant ADDR_COUNTS_BASE   : INTEGER := 16#600#;
    constant ADDR_COUNTS_HIGH   : INTEGER := 16#7ff#;
    constant ADDR_OUTPUTS_BASE  : INTEGER := 16#800#;
    constant ADDR_OUTPUTS_HIGH  : INTEGER := 16#9ff#;
    constant ADDR_BITS         : INTEGER := 12;

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
    signal int_update          : UNSIGNED(31 downto 0) := (others => '0');
    -- memory signals
    signal int_spks_address0   : UNSIGNED(6 downto 0);
    signal int_spks_ce0        : STD_LOGIC;
    signal int_spks_we0        : STD_LOGIC;
    signal int_spks_be0        : UNSIGNED(3 downto 0);
    signal int_spks_d0         : UNSIGNED(31 downto 0);
    signal int_spks_q0         : UNSIGNED(31 downto 0);
    signal int_spks_address1   : UNSIGNED(6 downto 0);
    signal int_spks_ce1        : STD_LOGIC;
    signal int_spks_we1        : STD_LOGIC;
    signal int_spks_be1        : UNSIGNED(3 downto 0);
    signal int_spks_d1         : UNSIGNED(31 downto 0);
    signal int_spks_q1         : UNSIGNED(31 downto 0);
    signal int_spks_read       : STD_LOGIC;
    signal int_spks_write      : STD_LOGIC;
    signal int_counts_address0 : UNSIGNED(6 downto 0);
    signal int_counts_ce0      : STD_LOGIC;
    signal int_counts_we0      : STD_LOGIC;
    signal int_counts_be0      : UNSIGNED(3 downto 0);
    signal int_counts_d0       : UNSIGNED(31 downto 0);
    signal int_counts_q0       : UNSIGNED(31 downto 0);
    signal int_counts_address1 : UNSIGNED(6 downto 0);
    signal int_counts_ce1      : STD_LOGIC;
    signal int_counts_we1      : STD_LOGIC;
    signal int_counts_be1      : UNSIGNED(3 downto 0);
    signal int_counts_d1       : UNSIGNED(31 downto 0);
    signal int_counts_q1       : UNSIGNED(31 downto 0);
    signal int_counts_read     : STD_LOGIC;
    signal int_counts_write    : STD_LOGIC;
    signal int_outputs_address0 : UNSIGNED(6 downto 0);
    signal int_outputs_ce0     : STD_LOGIC;
    signal int_outputs_we0     : STD_LOGIC;
    signal int_outputs_be0     : UNSIGNED(3 downto 0);
    signal int_outputs_d0      : UNSIGNED(31 downto 0);
    signal int_outputs_q0      : UNSIGNED(31 downto 0);
    signal int_outputs_address1 : UNSIGNED(6 downto 0);
    signal int_outputs_ce1     : STD_LOGIC;
    signal int_outputs_we1     : STD_LOGIC;
    signal int_outputs_be1     : UNSIGNED(3 downto 0);
    signal int_outputs_d1      : UNSIGNED(31 downto 0);
    signal int_outputs_q1      : UNSIGNED(31 downto 0);
    signal int_outputs_read    : STD_LOGIC;
    signal int_outputs_write   : STD_LOGIC;

    component estimate_FR_AXILiteS_s_axi_ram is
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
    end component estimate_FR_AXILiteS_s_axi_ram;

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
-- int_spks
int_spks : estimate_FR_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 96,
     AWIDTH   => log2(96))
port map (
     clk0     => ACLK,
     address0 => int_spks_address0,
     ce0      => int_spks_ce0,
     we0      => int_spks_we0,
     be0      => int_spks_be0,
     d0       => int_spks_d0,
     q0       => int_spks_q0,
     clk1     => ACLK,
     address1 => int_spks_address1,
     ce1      => int_spks_ce1,
     we1      => int_spks_we1,
     be1      => int_spks_be1,
     d1       => int_spks_d1,
     q1       => int_spks_q1);
-- int_counts
int_counts : estimate_FR_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 96,
     AWIDTH   => log2(96))
port map (
     clk0     => ACLK,
     address0 => int_counts_address0,
     ce0      => int_counts_ce0,
     we0      => int_counts_we0,
     be0      => int_counts_be0,
     d0       => int_counts_d0,
     q0       => int_counts_q0,
     clk1     => ACLK,
     address1 => int_counts_address1,
     ce1      => int_counts_ce1,
     we1      => int_counts_we1,
     be1      => int_counts_be1,
     d1       => int_counts_d1,
     q1       => int_counts_q1);
-- int_outputs
int_outputs : estimate_FR_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 96,
     AWIDTH   => log2(96))
port map (
     clk0     => ACLK,
     address0 => int_outputs_address0,
     ce0      => int_outputs_ce0,
     we0      => int_outputs_we0,
     be0      => int_outputs_be0,
     d0       => int_outputs_d0,
     q0       => int_outputs_q0,
     clk1     => ACLK,
     address1 => int_outputs_address1,
     ce1      => int_outputs_ce1,
     we1      => int_outputs_we1,
     be1      => int_outputs_be1,
     d1       => int_outputs_d1,
     q1       => int_outputs_q1);

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
    RVALID_t  <= '1' when (rstate = rddata) and (int_spks_read = '0') and (int_counts_read = '0') and (int_outputs_read = '0') else '0';
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
                    when ADDR_UPDATE_DATA_0 =>
                        rdata_data <= RESIZE(int_update(31 downto 0), 32);
                    when others =>
                        rdata_data <= (others => '0');
                    end case;
                elsif (int_spks_read = '1') then
                    rdata_data <= int_spks_q1;
                elsif (int_counts_read = '1') then
                    rdata_data <= int_counts_q1;
                elsif (int_outputs_read = '1') then
                    rdata_data <= int_outputs_q1;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    interrupt            <= int_gie and (int_isr(0) or int_isr(1));
    ap_start             <= int_ap_start;
    update               <= STD_LOGIC_VECTOR(int_update);

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
                if (w_hs = '1' and waddr = ADDR_UPDATE_DATA_0) then
                    int_update(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_update(31 downto 0));
                end if;
            end if;
        end if;
    end process;


-- ----------------------- Memory logic ------------------
    -- spks
    int_spks_address0    <= UNSIGNED(spks_address0);
    int_spks_ce0         <= spks_ce0;
    int_spks_we0         <= '0';
    int_spks_be0         <= (others => '0');
    int_spks_d0          <= (others => '0');
    spks_q0              <= STD_LOGIC_VECTOR(RESIZE(int_spks_q0, 32));
    int_spks_address1    <= raddr(8 downto 2) when ar_hs = '1' else waddr(8 downto 2);
    int_spks_ce1         <= '1' when ar_hs = '1' or (int_spks_write = '1' and WVALID  = '1') else '0';
    int_spks_we1         <= '1' when int_spks_write = '1' and WVALID = '1' else '0';
    int_spks_be1         <= UNSIGNED(WSTRB);
    int_spks_d1          <= UNSIGNED(WDATA);
    -- counts
    int_counts_address0  <= UNSIGNED(counts_address0);
    int_counts_ce0       <= counts_ce0;
    int_counts_we0       <= counts_we0;
    int_counts_be0       <= (others => counts_we0);
    int_counts_d0        <= RESIZE(UNSIGNED(counts_d0), 32);
    counts_q0            <= STD_LOGIC_VECTOR(RESIZE(int_counts_q0, 32));
    int_counts_address1  <= raddr(8 downto 2) when ar_hs = '1' else waddr(8 downto 2);
    int_counts_ce1       <= '1' when ar_hs = '1' or (int_counts_write = '1' and WVALID  = '1') else '0';
    int_counts_we1       <= '1' when int_counts_write = '1' and WVALID = '1' else '0';
    int_counts_be1       <= UNSIGNED(WSTRB);
    int_counts_d1        <= UNSIGNED(WDATA);
    -- outputs
    int_outputs_address0 <= UNSIGNED(outputs_address0);
    int_outputs_ce0      <= outputs_ce0;
    int_outputs_we0      <= outputs_we0;
    int_outputs_be0      <= (others => outputs_we0);
    int_outputs_d0       <= RESIZE(UNSIGNED(outputs_d0), 32);
    int_outputs_address1 <= raddr(8 downto 2) when ar_hs = '1' else waddr(8 downto 2);
    int_outputs_ce1      <= '1' when ar_hs = '1' or (int_outputs_write = '1' and WVALID  = '1') else '0';
    int_outputs_we1      <= '1' when int_outputs_write = '1' and WVALID = '1' else '0';
    int_outputs_be1      <= UNSIGNED(WSTRB);
    int_outputs_d1       <= UNSIGNED(WDATA);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_spks_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_SPKS_BASE and raddr <= ADDR_SPKS_HIGH) then
                    int_spks_read <= '1';
                else
                    int_spks_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_spks_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_SPKS_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_SPKS_HIGH) then
                    int_spks_write <= '1';
                elsif (WVALID = '1') then
                    int_spks_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_COUNTS_BASE and raddr <= ADDR_COUNTS_HIGH) then
                    int_counts_read <= '1';
                else
                    int_counts_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_counts_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_COUNTS_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_COUNTS_HIGH) then
                    int_counts_write <= '1';
                elsif (WVALID = '1') then
                    int_counts_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OUTPUTS_BASE and raddr <= ADDR_OUTPUTS_HIGH) then
                    int_outputs_read <= '1';
                else
                    int_outputs_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_outputs_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OUTPUTS_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OUTPUTS_HIGH) then
                    int_outputs_write <= '1';
                elsif (WVALID = '1') then
                    int_outputs_write <= '0';
                end if;
            end if;
        end if;
    end process;


end architecture behave;

library IEEE;
USE IEEE.std_logic_1164.all;
USE IEEE.numeric_std.all;

entity estimate_FR_AXILiteS_s_axi_ram is
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

end entity estimate_FR_AXILiteS_s_axi_ram;

architecture behave of estimate_FR_AXILiteS_s_axi_ram is
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


