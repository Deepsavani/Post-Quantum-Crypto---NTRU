-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity sha3_256_1 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    output_r_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    output_r_ce0 : OUT STD_LOGIC;
    output_r_we0 : OUT STD_LOGIC;
    output_r_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    input_r_address0 : OUT STD_LOGIC_VECTOR (8 downto 0);
    input_r_ce0 : OUT STD_LOGIC;
    input_r_q0 : IN STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of sha3_256_1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (8 downto 0) := "000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (8 downto 0) := "000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (8 downto 0) := "000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (8 downto 0) := "001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (8 downto 0) := "010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv5_11 : STD_LOGIC_VECTOR (4 downto 0) := "10001";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv6_20 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_21_i_fu_169_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_21_i_reg_253 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal exitcond_i_fu_163_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_i_fu_180_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_i_reg_263 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal s_q0 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_2_fu_194_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal tmp_1_fu_229_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_i_i_fu_188_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_cast1_fu_233_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_cast1_reg_286 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal i_1_fu_244_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal i_1_reg_294 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_fu_238_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal s_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal s_ce0 : STD_LOGIC;
    signal s_we0 : STD_LOGIC;
    signal s_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal s_address1 : STD_LOGIC_VECTOR (4 downto 0);
    signal s_ce1 : STD_LOGIC;
    signal s_we1 : STD_LOGIC;
    signal s_d1 : STD_LOGIC_VECTOR (63 downto 0);
    signal s_q1 : STD_LOGIC_VECTOR (63 downto 0);
    signal h_assign_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal h_assign_ce0 : STD_LOGIC;
    signal h_assign_we0 : STD_LOGIC;
    signal h_assign_d0 : STD_LOGIC_VECTOR (7 downto 0);
    signal h_assign_q0 : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_keccak_absorb_fu_146_ap_start : STD_LOGIC;
    signal grp_keccak_absorb_fu_146_ap_done : STD_LOGIC;
    signal grp_keccak_absorb_fu_146_ap_idle : STD_LOGIC;
    signal grp_keccak_absorb_fu_146_ap_ready : STD_LOGIC;
    signal grp_keccak_absorb_fu_146_s_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_keccak_absorb_fu_146_s_ce0 : STD_LOGIC;
    signal grp_keccak_absorb_fu_146_s_we0 : STD_LOGIC;
    signal grp_keccak_absorb_fu_146_s_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_keccak_absorb_fu_146_s_address1 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_keccak_absorb_fu_146_s_ce1 : STD_LOGIC;
    signal grp_keccak_absorb_fu_146_s_we1 : STD_LOGIC;
    signal grp_keccak_absorb_fu_146_s_d1 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_keccak_absorb_fu_146_m_address0 : STD_LOGIC_VECTOR (8 downto 0);
    signal grp_keccak_absorb_fu_146_m_ce0 : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_ap_start : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_ap_done : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_ap_idle : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_ap_ready : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_state_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_KeccakF1600_StatePer_fu_156_state_ce0 : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_state_we0 : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_state_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_KeccakF1600_StatePer_fu_156_state_address1 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_KeccakF1600_StatePer_fu_156_state_ce1 : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_state_we1 : STD_LOGIC;
    signal grp_KeccakF1600_StatePer_fu_156_state_d1 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_i_reg_103 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal p_0_i_i_reg_115 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_i_i_reg_124 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_reg_135 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal grp_keccak_absorb_fu_146_ap_start_reg : STD_LOGIC := '0';
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal grp_KeccakF1600_StatePer_fu_156_ap_start_reg : STD_LOGIC := '0';
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_139_i_fu_175_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum_i_i_cast_fu_214_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_i_i_cast_fu_205_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal sum_i_i_fu_209_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal u_assign_1_fu_219_p4 : STD_LOGIC_VECTOR (55 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (8 downto 0);

    component keccak_absorb IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        s_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
        s_ce0 : OUT STD_LOGIC;
        s_we0 : OUT STD_LOGIC;
        s_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
        s_q0 : IN STD_LOGIC_VECTOR (63 downto 0);
        s_address1 : OUT STD_LOGIC_VECTOR (4 downto 0);
        s_ce1 : OUT STD_LOGIC;
        s_we1 : OUT STD_LOGIC;
        s_d1 : OUT STD_LOGIC_VECTOR (63 downto 0);
        s_q1 : IN STD_LOGIC_VECTOR (63 downto 0);
        m_address0 : OUT STD_LOGIC_VECTOR (8 downto 0);
        m_ce0 : OUT STD_LOGIC;
        m_q0 : IN STD_LOGIC_VECTOR (7 downto 0) );
    end component;


    component KeccakF1600_StatePer IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        state_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
        state_ce0 : OUT STD_LOGIC;
        state_we0 : OUT STD_LOGIC;
        state_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
        state_q0 : IN STD_LOGIC_VECTOR (63 downto 0);
        state_address1 : OUT STD_LOGIC_VECTOR (4 downto 0);
        state_ce1 : OUT STD_LOGIC;
        state_we1 : OUT STD_LOGIC;
        state_d1 : OUT STD_LOGIC_VECTOR (63 downto 0);
        state_q1 : IN STD_LOGIC_VECTOR (63 downto 0) );
    end component;


    component sha3_256_1_s IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (63 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (63 downto 0);
        address1 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce1 : IN STD_LOGIC;
        we1 : IN STD_LOGIC;
        d1 : IN STD_LOGIC_VECTOR (63 downto 0);
        q1 : OUT STD_LOGIC_VECTOR (63 downto 0) );
    end component;


    component sha3_256_1_h_assign IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (7 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;



begin
    s_U : component sha3_256_1_s
    generic map (
        DataWidth => 64,
        AddressRange => 25,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => s_address0,
        ce0 => s_ce0,
        we0 => s_we0,
        d0 => s_d0,
        q0 => s_q0,
        address1 => s_address1,
        ce1 => s_ce1,
        we1 => s_we1,
        d1 => s_d1,
        q1 => s_q1);

    h_assign_U : component sha3_256_1_h_assign
    generic map (
        DataWidth => 8,
        AddressRange => 136,
        AddressWidth => 8)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => h_assign_address0,
        ce0 => h_assign_ce0,
        we0 => h_assign_we0,
        d0 => h_assign_d0,
        q0 => h_assign_q0);

    grp_keccak_absorb_fu_146 : component keccak_absorb
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_keccak_absorb_fu_146_ap_start,
        ap_done => grp_keccak_absorb_fu_146_ap_done,
        ap_idle => grp_keccak_absorb_fu_146_ap_idle,
        ap_ready => grp_keccak_absorb_fu_146_ap_ready,
        s_address0 => grp_keccak_absorb_fu_146_s_address0,
        s_ce0 => grp_keccak_absorb_fu_146_s_ce0,
        s_we0 => grp_keccak_absorb_fu_146_s_we0,
        s_d0 => grp_keccak_absorb_fu_146_s_d0,
        s_q0 => s_q0,
        s_address1 => grp_keccak_absorb_fu_146_s_address1,
        s_ce1 => grp_keccak_absorb_fu_146_s_ce1,
        s_we1 => grp_keccak_absorb_fu_146_s_we1,
        s_d1 => grp_keccak_absorb_fu_146_s_d1,
        s_q1 => s_q1,
        m_address0 => grp_keccak_absorb_fu_146_m_address0,
        m_ce0 => grp_keccak_absorb_fu_146_m_ce0,
        m_q0 => input_r_q0);

    grp_KeccakF1600_StatePer_fu_156 : component KeccakF1600_StatePer
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_KeccakF1600_StatePer_fu_156_ap_start,
        ap_done => grp_KeccakF1600_StatePer_fu_156_ap_done,
        ap_idle => grp_KeccakF1600_StatePer_fu_156_ap_idle,
        ap_ready => grp_KeccakF1600_StatePer_fu_156_ap_ready,
        state_address0 => grp_KeccakF1600_StatePer_fu_156_state_address0,
        state_ce0 => grp_KeccakF1600_StatePer_fu_156_state_ce0,
        state_we0 => grp_KeccakF1600_StatePer_fu_156_state_we0,
        state_d0 => grp_KeccakF1600_StatePer_fu_156_state_d0,
        state_q0 => s_q0,
        state_address1 => grp_KeccakF1600_StatePer_fu_156_state_address1,
        state_ce1 => grp_KeccakF1600_StatePer_fu_156_state_ce1,
        state_we1 => grp_KeccakF1600_StatePer_fu_156_state_we1,
        state_d1 => grp_KeccakF1600_StatePer_fu_156_state_d1,
        state_q1 => s_q1);





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


    grp_KeccakF1600_StatePer_fu_156_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_KeccakF1600_StatePer_fu_156_ap_start_reg <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                    grp_KeccakF1600_StatePer_fu_156_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_KeccakF1600_StatePer_fu_156_ap_ready = ap_const_logic_1)) then 
                    grp_KeccakF1600_StatePer_fu_156_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_keccak_absorb_fu_146_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_keccak_absorb_fu_146_ap_start_reg <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                    grp_keccak_absorb_fu_146_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_keccak_absorb_fu_146_ap_ready = ap_const_logic_1)) then 
                    grp_keccak_absorb_fu_146_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_i_i_reg_124_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_i_i_fu_188_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                i_i_i_reg_124 <= i_2_fu_194_p2;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                i_i_i_reg_124 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    i_i_reg_103_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_i_i_fu_188_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                i_i_reg_103 <= i_21_i_reg_253;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (grp_KeccakF1600_StatePer_fu_156_ap_done = ap_const_logic_1))) then 
                i_i_reg_103 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    i_reg_135_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_i_fu_163_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                i_reg_135 <= ap_const_lv6_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                i_reg_135 <= i_1_reg_294;
            end if; 
        end if;
    end process;

    p_0_i_i_reg_115_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_i_i_fu_188_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                p_0_i_i_reg_115 <= tmp_1_fu_229_p1;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                p_0_i_i_reg_115 <= s_q0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                i_1_reg_294 <= i_1_fu_244_p2;
                    i_cast1_reg_286(5 downto 0) <= i_cast1_fu_233_p1(5 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                i_21_i_reg_253 <= i_21_i_fu_169_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                    tmp_i_reg_263(7 downto 3) <= tmp_i_fu_180_p3(7 downto 3);
            end if;
        end if;
    end process;
    tmp_i_reg_263(2 downto 0) <= "000";
    i_cast1_reg_286(63 downto 6) <= "0000000000000000000000000000000000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state5, exitcond_i_fu_163_p2, ap_CS_fsm_state7, tmp_i_i_fu_188_p2, ap_CS_fsm_state8, tmp_fu_238_p2, grp_keccak_absorb_fu_146_ap_done, grp_KeccakF1600_StatePer_fu_156_ap_done, ap_CS_fsm_state4, ap_CS_fsm_state2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (grp_keccak_absorb_fu_146_ap_done = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (grp_KeccakF1600_StatePer_fu_156_ap_done = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state5 => 
                if (((exitcond_i_fu_163_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state8;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                if (((tmp_i_i_fu_188_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state8 => 
                if (((tmp_fu_238_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state8))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state9;
                end if;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state8, tmp_fu_238_p2)
    begin
        if ((((tmp_fu_238_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state8)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state8, tmp_fu_238_p2)
    begin
        if (((tmp_fu_238_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state8))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_i_fu_163_p2 <= "1" when (i_i_reg_103 = ap_const_lv5_11) else "0";
    grp_KeccakF1600_StatePer_fu_156_ap_start <= grp_KeccakF1600_StatePer_fu_156_ap_start_reg;
    grp_keccak_absorb_fu_146_ap_start <= grp_keccak_absorb_fu_146_ap_start_reg;

    h_assign_address0_assign_proc : process(ap_CS_fsm_state7, i_cast1_fu_233_p1, ap_CS_fsm_state8, sum_i_i_cast_fu_214_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            h_assign_address0 <= i_cast1_fu_233_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            h_assign_address0 <= sum_i_i_cast_fu_214_p1(8 - 1 downto 0);
        else 
            h_assign_address0 <= "XXXXXXXX";
        end if; 
    end process;


    h_assign_ce0_assign_proc : process(ap_CS_fsm_state7, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            h_assign_ce0 <= ap_const_logic_1;
        else 
            h_assign_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    h_assign_d0 <= p_0_i_i_reg_115(8 - 1 downto 0);

    h_assign_we0_assign_proc : process(ap_CS_fsm_state7, tmp_i_i_fu_188_p2)
    begin
        if (((tmp_i_i_fu_188_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            h_assign_we0 <= ap_const_logic_1;
        else 
            h_assign_we0 <= ap_const_logic_0;
        end if; 
    end process;

    i_1_fu_244_p2 <= std_logic_vector(unsigned(i_reg_135) + unsigned(ap_const_lv6_1));
    i_21_i_fu_169_p2 <= std_logic_vector(unsigned(i_i_reg_103) + unsigned(ap_const_lv5_1));
    i_2_fu_194_p2 <= std_logic_vector(unsigned(i_i_i_reg_124) + unsigned(ap_const_lv4_1));
    i_cast1_fu_233_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_135),64));
    input_r_address0 <= grp_keccak_absorb_fu_146_m_address0;
    input_r_ce0 <= grp_keccak_absorb_fu_146_m_ce0;
    output_r_address0 <= i_cast1_reg_286(5 - 1 downto 0);

    output_r_ce0_assign_proc : process(ap_CS_fsm_state9)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            output_r_ce0 <= ap_const_logic_1;
        else 
            output_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_d0 <= h_assign_q0;

    output_r_we0_assign_proc : process(ap_CS_fsm_state9)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            output_r_we0 <= ap_const_logic_1;
        else 
            output_r_we0 <= ap_const_logic_0;
        end if; 
    end process;


    s_address0_assign_proc : process(ap_CS_fsm_state5, grp_keccak_absorb_fu_146_s_address0, grp_KeccakF1600_StatePer_fu_156_state_address0, ap_CS_fsm_state4, ap_CS_fsm_state2, tmp_139_i_fu_175_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            s_address0 <= tmp_139_i_fu_175_p1(5 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            s_address0 <= grp_KeccakF1600_StatePer_fu_156_state_address0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            s_address0 <= grp_keccak_absorb_fu_146_s_address0;
        else 
            s_address0 <= "XXXXX";
        end if; 
    end process;


    s_address1_assign_proc : process(grp_keccak_absorb_fu_146_s_address1, grp_KeccakF1600_StatePer_fu_156_state_address1, ap_CS_fsm_state4, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            s_address1 <= grp_KeccakF1600_StatePer_fu_156_state_address1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            s_address1 <= grp_keccak_absorb_fu_146_s_address1;
        else 
            s_address1 <= "XXXXX";
        end if; 
    end process;


    s_ce0_assign_proc : process(ap_CS_fsm_state5, grp_keccak_absorb_fu_146_s_ce0, grp_KeccakF1600_StatePer_fu_156_state_ce0, ap_CS_fsm_state4, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            s_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            s_ce0 <= grp_KeccakF1600_StatePer_fu_156_state_ce0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            s_ce0 <= grp_keccak_absorb_fu_146_s_ce0;
        else 
            s_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    s_ce1_assign_proc : process(grp_keccak_absorb_fu_146_s_ce1, grp_KeccakF1600_StatePer_fu_156_state_ce1, ap_CS_fsm_state4, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            s_ce1 <= grp_KeccakF1600_StatePer_fu_156_state_ce1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            s_ce1 <= grp_keccak_absorb_fu_146_s_ce1;
        else 
            s_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    s_d0_assign_proc : process(grp_keccak_absorb_fu_146_s_d0, grp_KeccakF1600_StatePer_fu_156_state_d0, ap_CS_fsm_state4, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            s_d0 <= grp_KeccakF1600_StatePer_fu_156_state_d0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            s_d0 <= grp_keccak_absorb_fu_146_s_d0;
        else 
            s_d0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    s_d1_assign_proc : process(grp_keccak_absorb_fu_146_s_d1, grp_KeccakF1600_StatePer_fu_156_state_d1, ap_CS_fsm_state4, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            s_d1 <= grp_KeccakF1600_StatePer_fu_156_state_d1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            s_d1 <= grp_keccak_absorb_fu_146_s_d1;
        else 
            s_d1 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    s_we0_assign_proc : process(grp_keccak_absorb_fu_146_s_we0, grp_KeccakF1600_StatePer_fu_156_state_we0, ap_CS_fsm_state4, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            s_we0 <= grp_KeccakF1600_StatePer_fu_156_state_we0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            s_we0 <= grp_keccak_absorb_fu_146_s_we0;
        else 
            s_we0 <= ap_const_logic_0;
        end if; 
    end process;


    s_we1_assign_proc : process(grp_keccak_absorb_fu_146_s_we1, grp_KeccakF1600_StatePer_fu_156_state_we1, ap_CS_fsm_state4, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            s_we1 <= grp_KeccakF1600_StatePer_fu_156_state_we1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            s_we1 <= grp_keccak_absorb_fu_146_s_we1;
        else 
            s_we1 <= ap_const_logic_0;
        end if; 
    end process;

    sum_i_i_cast_fu_214_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum_i_i_fu_209_p2),64));
    sum_i_i_fu_209_p2 <= std_logic_vector(unsigned(tmp_i_reg_263) + unsigned(tmp_2_i_i_cast_fu_205_p1));
    tmp_139_i_fu_175_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_i_reg_103),64));
    tmp_1_fu_229_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(u_assign_1_fu_219_p4),64));
    tmp_2_i_i_cast_fu_205_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_i_i_reg_124),8));
    tmp_fu_238_p2 <= "1" when (i_reg_135 = ap_const_lv6_20) else "0";
    tmp_i_fu_180_p3 <= (i_i_reg_103 & ap_const_lv3_0);
    tmp_i_i_fu_188_p2 <= "1" when (i_i_i_reg_124 = ap_const_lv4_8) else "0";
    u_assign_1_fu_219_p4 <= p_0_i_i_reg_115(63 downto 8);
end behav;
