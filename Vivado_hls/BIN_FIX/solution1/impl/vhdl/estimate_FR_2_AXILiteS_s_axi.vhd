-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity estimate_FR_2_AXILiteS_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 11;
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
    inputs_address0       :in   STD_LOGIC_VECTOR(6 downto 0);
    inputs_ce0            :in   STD_LOGIC;
    inputs_q0             :out  STD_LOGIC_VECTOR(31 downto 0);
    counts_address0       :in   STD_LOGIC_VECTOR(4 downto 0);
    counts_ce0            :in   STD_LOGIC;
    counts_we0            :in   STD_LOGIC;
    counts_d0             :in   STD_LOGIC_VECTOR(31 downto 0);
    counts_q0             :out  STD_LOGIC_VECTOR(31 downto 0);
    outputs_address0      :in   STD_LOGIC_VECTOR(4 downto 0);
    outputs_ce0           :in   STD_LOGIC;
    outputs_we0           :in   STD_LOGIC;
    outputs_d0            :in   STD_LOGIC_VECTOR(31 downto 0)
);
end entity estimate_FR_2_AXILiteS_s_axi;

-- ------------------------Address Info-------------------
-- 0x200 ~
-- 0x3ff : Memory 'inputs' (96 * 32b)
--         Word n : bit [31:0] - inputs[n]
-- 0x400 ~
-- 0x47f : Memory 'counts' (24 * 32b)
--         Word n : bit [31:0] - counts[n]
-- 0x480 ~
-- 0x4ff : Memory 'outputs' (24 * 32b)
--         Word n : bit [31:0] - outputs[n]
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of estimate_FR_2_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_INPUTS_BASE  : INTEGER := 16#200#;
    constant ADDR_INPUTS_HIGH  : INTEGER := 16#3ff#;
    constant ADDR_COUNTS_BASE  : INTEGER := 16#400#;
    constant ADDR_COUNTS_HIGH  : INTEGER := 16#47f#;
    constant ADDR_OUTPUTS_BASE : INTEGER := 16#480#;
    constant ADDR_OUTPUTS_HIGH : INTEGER := 16#4ff#;
    constant ADDR_BITS         : INTEGER := 11;

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
    -- memory signals
    signal int_inputs_address0 : UNSIGNED(6 downto 0);
    signal int_inputs_ce0      : STD_LOGIC;
    signal int_inputs_we0      : STD_LOGIC;
    signal int_inputs_be0      : UNSIGNED(3 downto 0);
    signal int_inputs_d0       : UNSIGNED(31 downto 0);
    signal int_inputs_q0       : UNSIGNED(31 downto 0);
    signal int_inputs_address1 : UNSIGNED(6 downto 0);
    signal int_inputs_ce1      : STD_LOGIC;
    signal int_inputs_we1      : STD_LOGIC;
    signal int_inputs_be1      : UNSIGNED(3 downto 0);
    signal int_inputs_d1       : UNSIGNED(31 downto 0);
    signal int_inputs_q1       : UNSIGNED(31 downto 0);
    signal int_inputs_read     : STD_LOGIC;
    signal int_inputs_write    : STD_LOGIC;
    signal int_counts_address0 : UNSIGNED(4 downto 0);
    signal int_counts_ce0      : STD_LOGIC;
    signal int_counts_we0      : STD_LOGIC;
    signal int_counts_be0      : UNSIGNED(3 downto 0);
    signal int_counts_d0       : UNSIGNED(31 downto 0);
    signal int_counts_q0       : UNSIGNED(31 downto 0);
    signal int_counts_address1 : UNSIGNED(4 downto 0);
    signal int_counts_ce1      : STD_LOGIC;
    signal int_counts_we1      : STD_LOGIC;
    signal int_counts_be1      : UNSIGNED(3 downto 0);
    signal int_counts_d1       : UNSIGNED(31 downto 0);
    signal int_counts_q1       : UNSIGNED(31 downto 0);
    signal int_counts_read     : STD_LOGIC;
    signal int_counts_write    : STD_LOGIC;
    signal int_outputs_address0 : UNSIGNED(4 downto 0);
    signal int_outputs_ce0     : STD_LOGIC;
    signal int_outputs_we0     : STD_LOGIC;
    signal int_outputs_be0     : UNSIGNED(3 downto 0);
    signal int_outputs_d0      : UNSIGNED(31 downto 0);
    signal int_outputs_q0      : UNSIGNED(31 downto 0);
    signal int_outputs_address1 : UNSIGNED(4 downto 0);
    signal int_outputs_ce1     : STD_LOGIC;
    signal int_outputs_we1     : STD_LOGIC;
    signal int_outputs_be1     : UNSIGNED(3 downto 0);
    signal int_outputs_d1      : UNSIGNED(31 downto 0);
    signal int_outputs_q1      : UNSIGNED(31 downto 0);
    signal int_outputs_read    : STD_LOGIC;
    signal int_outputs_write   : STD_LOGIC;

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
-- int_inputs
int_inputs : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 96,
     AWIDTH   => log2(96))
port map (
     clk0     => ACLK,
     address0 => int_inputs_address0,
     ce0      => int_inputs_ce0,
     we0      => int_inputs_we0,
     be0      => int_inputs_be0,
     d0       => int_inputs_d0,
     q0       => int_inputs_q0,
     clk1     => ACLK,
     address1 => int_inputs_address1,
     ce1      => int_inputs_ce1,
     we1      => int_inputs_we1,
     be1      => int_inputs_be1,
     d1       => int_inputs_d1,
     q1       => int_inputs_q1);
-- int_counts
int_counts : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 24,
     AWIDTH   => log2(24))
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
int_outputs : estimate_FR_2_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 24,
     AWIDTH   => log2(24))
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
    RVALID_t  <= '1' when (rstate = rddata) and (int_inputs_read = '0') and (int_counts_read = '0') and (int_outputs_read = '0') else '0';
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
                elsif (int_inputs_read = '1') then
                    rdata_data <= int_inputs_q1;
                elsif (int_counts_read = '1') then
                    rdata_data <= int_counts_q1;
                elsif (int_outputs_read = '1') then
                    rdata_data <= int_outputs_q1;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------

-- ----------------------- Memory logic ------------------
    -- inputs
    int_inputs_address0  <= UNSIGNED(inputs_address0);
    int_inputs_ce0       <= inputs_ce0;
    int_inputs_we0       <= '0';
    int_inputs_be0       <= (others => '0');
    int_inputs_d0        <= (others => '0');
    inputs_q0            <= STD_LOGIC_VECTOR(RESIZE(int_inputs_q0, 32));
    int_inputs_address1  <= raddr(8 downto 2) when ar_hs = '1' else waddr(8 downto 2);
    int_inputs_ce1       <= '1' when ar_hs = '1' or (int_inputs_write = '1' and WVALID  = '1') else '0';
    int_inputs_we1       <= '1' when int_inputs_write = '1' and WVALID = '1' else '0';
    int_inputs_be1       <= UNSIGNED(WSTRB);
    int_inputs_d1        <= UNSIGNED(WDATA);
    -- counts
    int_counts_address0  <= UNSIGNED(counts_address0);
    int_counts_ce0       <= counts_ce0;
    int_counts_we0       <= counts_we0;
    int_counts_be0       <= (others => counts_we0);
    int_counts_d0        <= RESIZE(UNSIGNED(counts_d0), 32);
    counts_q0            <= STD_LOGIC_VECTOR(RESIZE(int_counts_q0, 32));
    int_counts_address1  <= raddr(6 downto 2) when ar_hs = '1' else waddr(6 downto 2);
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
    int_outputs_address1 <= raddr(6 downto 2) when ar_hs = '1' else waddr(6 downto 2);
    int_outputs_ce1      <= '1' when ar_hs = '1' or (int_outputs_write = '1' and WVALID  = '1') else '0';
    int_outputs_we1      <= '1' when int_outputs_write = '1' and WVALID = '1' else '0';
    int_outputs_be1      <= UNSIGNED(WSTRB);
    int_outputs_d1       <= UNSIGNED(WDATA);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_INPUTS_BASE and raddr <= ADDR_INPUTS_HIGH) then
                    int_inputs_read <= '1';
                else
                    int_inputs_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_inputs_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_INPUTS_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_INPUTS_HIGH) then
                    int_inputs_write <= '1';
                elsif (WVALID = '1') then
                    int_inputs_write <= '0';
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


