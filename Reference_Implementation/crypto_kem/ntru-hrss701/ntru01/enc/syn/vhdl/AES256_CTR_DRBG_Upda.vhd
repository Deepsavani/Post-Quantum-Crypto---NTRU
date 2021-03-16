-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity AES256_CTR_DRBG_Upda is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    V_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    V_ce0 : OUT STD_LOGIC;
    V_we0 : OUT STD_LOGIC;
    V_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    V_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    V_address1 : OUT STD_LOGIC_VECTOR (3 downto 0);
    V_ce1 : OUT STD_LOGIC;
    V_q1 : IN STD_LOGIC_VECTOR (7 downto 0);
    DRBG_ctx_Key_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    DRBG_ctx_Key_ce0 : OUT STD_LOGIC;
    DRBG_ctx_Key_we0 : OUT STD_LOGIC;
    DRBG_ctx_Key_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    DRBG_ctx_Key_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    DRBG_ctx_Key_address1 : OUT STD_LOGIC_VECTOR (4 downto 0);
    DRBG_ctx_Key_ce1 : OUT STD_LOGIC;
    DRBG_ctx_Key_q1 : IN STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of AES256_CTR_DRBG_Upda is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (9 downto 0) := "0000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (9 downto 0) := "0000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (9 downto 0) := "0000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (9 downto 0) := "0000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (9 downto 0) := "0000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (9 downto 0) := "0001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (9 downto 0) := "0010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (9 downto 0) := "0100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (9 downto 0) := "1000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv5_F : STD_LOGIC_VECTOR (4 downto 0) := "01111";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";
    constant ap_const_lv5_1F : STD_LOGIC_VECTOR (4 downto 0) := "11111";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv6_20 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_25_fu_191_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal i_25_reg_292 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal V_addr_reg_300 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_fu_201_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_7_fu_220_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal tmp_474_fu_214_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_479_fu_233_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_479_reg_313 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal i_7_fu_248_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal i_7_reg_321 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal tmp_s_fu_254_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_reg_326 : STD_LOGIC_VECTOR (63 downto 0);
    signal exitcond1_fu_242_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_8_fu_265_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_8_reg_339 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal exitcond_fu_259_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal temp_address0 : STD_LOGIC_VECTOR (5 downto 0);
    signal temp_ce0 : STD_LOGIC;
    signal temp_we0 : STD_LOGIC;
    signal temp_q0 : STD_LOGIC_VECTOR (7 downto 0);
    signal temp_ce1 : STD_LOGIC;
    signal temp_we1 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_ap_start : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_ap_done : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_ap_idle : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_ap_ready : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_key_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_AES256_ECB_fu_171_key_ce0 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_key_address1 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_AES256_ECB_fu_171_key_ce1 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_ctr_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_AES256_ECB_fu_171_ctr_ce0 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_ctr_address1 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_AES256_ECB_fu_171_ctr_ce1 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_buffer_r_address0 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_AES256_ECB_fu_171_buffer_r_ce0 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_buffer_r_we0 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_buffer_r_d0 : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_AES256_ECB_fu_171_buffer_r_address1 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_AES256_ECB_fu_171_buffer_r_ce1 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_buffer_r_we1 : STD_LOGIC;
    signal grp_AES256_ECB_fu_171_buffer_r_d1 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_reg_124 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal j_reg_136 : STD_LOGIC_VECTOR (4 downto 0);
    signal exitcond4_fu_185_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_2_reg_148 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal i_3_reg_159 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal grp_AES256_ECB_fu_171_ap_start_reg : STD_LOGIC := '0';
    signal tmp_473_fu_209_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_477_fu_279_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_478_fu_284_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_475_fu_226_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal j_cast_fu_197_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_476_fu_271_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (9 downto 0);

    component AES256_ECB IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        key_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
        key_ce0 : OUT STD_LOGIC;
        key_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
        key_address1 : OUT STD_LOGIC_VECTOR (4 downto 0);
        key_ce1 : OUT STD_LOGIC;
        key_q1 : IN STD_LOGIC_VECTOR (7 downto 0);
        ctr_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
        ctr_ce0 : OUT STD_LOGIC;
        ctr_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ctr_address1 : OUT STD_LOGIC_VECTOR (3 downto 0);
        ctr_ce1 : OUT STD_LOGIC;
        ctr_q1 : IN STD_LOGIC_VECTOR (7 downto 0);
        buffer_r_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
        buffer_r_ce0 : OUT STD_LOGIC;
        buffer_r_we0 : OUT STD_LOGIC;
        buffer_r_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
        buffer_r_address1 : OUT STD_LOGIC_VECTOR (5 downto 0);
        buffer_r_ce1 : OUT STD_LOGIC;
        buffer_r_we1 : OUT STD_LOGIC;
        buffer_r_d1 : OUT STD_LOGIC_VECTOR (7 downto 0);
        buffer_offset : IN STD_LOGIC_VECTOR (5 downto 0) );
    end component;


    component AES256_CTR_DRBG_Upda_temp IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (5 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (7 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (7 downto 0);
        address1 : IN STD_LOGIC_VECTOR (5 downto 0);
        ce1 : IN STD_LOGIC;
        we1 : IN STD_LOGIC;
        d1 : IN STD_LOGIC_VECTOR (7 downto 0) );
    end component;



begin
    temp_U : component AES256_CTR_DRBG_Upda_temp
    generic map (
        DataWidth => 8,
        AddressRange => 48,
        AddressWidth => 6)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => temp_address0,
        ce0 => temp_ce0,
        we0 => temp_we0,
        d0 => grp_AES256_ECB_fu_171_buffer_r_d0,
        q0 => temp_q0,
        address1 => grp_AES256_ECB_fu_171_buffer_r_address1,
        ce1 => temp_ce1,
        we1 => temp_we1,
        d1 => grp_AES256_ECB_fu_171_buffer_r_d1);

    grp_AES256_ECB_fu_171 : component AES256_ECB
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_AES256_ECB_fu_171_ap_start,
        ap_done => grp_AES256_ECB_fu_171_ap_done,
        ap_idle => grp_AES256_ECB_fu_171_ap_idle,
        ap_ready => grp_AES256_ECB_fu_171_ap_ready,
        key_address0 => grp_AES256_ECB_fu_171_key_address0,
        key_ce0 => grp_AES256_ECB_fu_171_key_ce0,
        key_q0 => DRBG_ctx_Key_q0,
        key_address1 => grp_AES256_ECB_fu_171_key_address1,
        key_ce1 => grp_AES256_ECB_fu_171_key_ce1,
        key_q1 => DRBG_ctx_Key_q1,
        ctr_address0 => grp_AES256_ECB_fu_171_ctr_address0,
        ctr_ce0 => grp_AES256_ECB_fu_171_ctr_ce0,
        ctr_q0 => V_q0,
        ctr_address1 => grp_AES256_ECB_fu_171_ctr_address1,
        ctr_ce1 => grp_AES256_ECB_fu_171_ctr_ce1,
        ctr_q1 => V_q1,
        buffer_r_address0 => grp_AES256_ECB_fu_171_buffer_r_address0,
        buffer_r_ce0 => grp_AES256_ECB_fu_171_buffer_r_ce0,
        buffer_r_we0 => grp_AES256_ECB_fu_171_buffer_r_we0,
        buffer_r_d0 => grp_AES256_ECB_fu_171_buffer_r_d0,
        buffer_r_address1 => grp_AES256_ECB_fu_171_buffer_r_address1,
        buffer_r_ce1 => grp_AES256_ECB_fu_171_buffer_r_ce1,
        buffer_r_we1 => grp_AES256_ECB_fu_171_buffer_r_we1,
        buffer_r_d1 => grp_AES256_ECB_fu_171_buffer_r_d1,
        buffer_offset => tmp_479_reg_313);





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


    grp_AES256_ECB_fu_171_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_AES256_ECB_fu_171_ap_start_reg <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                    grp_AES256_ECB_fu_171_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_AES256_ECB_fu_171_ap_ready = ap_const_logic_1)) then 
                    grp_AES256_ECB_fu_171_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_2_reg_148_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond4_fu_185_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_2_reg_148 <= ap_const_lv6_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                i_2_reg_148 <= i_7_reg_321;
            end if; 
        end if;
    end process;

    i_3_reg_159_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_242_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                i_3_reg_159 <= ap_const_lv5_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
                i_3_reg_159 <= i_8_reg_339;
            end if; 
        end if;
    end process;

    i_reg_124_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) and (grp_AES256_ECB_fu_171_ap_done = ap_const_logic_1))) then 
                i_reg_124 <= i_25_reg_292;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_124 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    j_reg_136_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond4_fu_185_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                j_reg_136 <= ap_const_lv5_F;
            elsif (((tmp_474_fu_214_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                j_reg_136 <= j_7_fu_220_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_fu_201_p3 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                V_addr_reg_300 <= tmp_473_fu_209_p1(4 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_25_reg_292 <= i_25_fu_191_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                i_7_reg_321 <= i_7_fu_248_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                i_8_reg_339 <= i_8_fu_265_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                    tmp_479_reg_313(5 downto 4) <= tmp_479_fu_233_p3(5 downto 4);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_242_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                    tmp_s_reg_326(5 downto 0) <= tmp_s_fu_254_p1(5 downto 0);
            end if;
        end if;
    end process;
    tmp_479_reg_313(3 downto 0) <= "0000";
    tmp_s_reg_326(63 downto 6) <= "0000000000000000000000000000000000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, ap_CS_fsm_state3, tmp_fu_201_p3, ap_CS_fsm_state4, tmp_474_fu_214_p2, ap_CS_fsm_state7, exitcond1_fu_242_p2, ap_CS_fsm_state9, exitcond_fu_259_p2, grp_AES256_ECB_fu_171_ap_done, ap_CS_fsm_state6, exitcond4_fu_185_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond4_fu_185_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((tmp_fu_201_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((tmp_474_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state6) and (grp_AES256_ECB_fu_171_ap_done = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state7 => 
                if (((exitcond1_fu_242_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                    ap_NS_fsm <= ap_ST_fsm_state9;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state9 => 
                if (((exitcond_fu_259_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state10;
                end if;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXX";
        end case;
    end process;

    DRBG_ctx_Key_address0_assign_proc : process(tmp_s_reg_326, grp_AES256_ECB_fu_171_key_address0, ap_CS_fsm_state6, ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            DRBG_ctx_Key_address0 <= tmp_s_reg_326(5 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            DRBG_ctx_Key_address0 <= grp_AES256_ECB_fu_171_key_address0;
        else 
            DRBG_ctx_Key_address0 <= "XXXXX";
        end if; 
    end process;

    DRBG_ctx_Key_address1 <= grp_AES256_ECB_fu_171_key_address1;

    DRBG_ctx_Key_ce0_assign_proc : process(grp_AES256_ECB_fu_171_key_ce0, ap_CS_fsm_state6, ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            DRBG_ctx_Key_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            DRBG_ctx_Key_ce0 <= grp_AES256_ECB_fu_171_key_ce0;
        else 
            DRBG_ctx_Key_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    DRBG_ctx_Key_ce1_assign_proc : process(grp_AES256_ECB_fu_171_key_ce1, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            DRBG_ctx_Key_ce1 <= grp_AES256_ECB_fu_171_key_ce1;
        else 
            DRBG_ctx_Key_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    DRBG_ctx_Key_d0 <= temp_q0;

    DRBG_ctx_Key_we0_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            DRBG_ctx_Key_we0 <= ap_const_logic_1;
        else 
            DRBG_ctx_Key_we0 <= ap_const_logic_0;
        end if; 
    end process;


    V_address0_assign_proc : process(V_addr_reg_300, ap_CS_fsm_state3, ap_CS_fsm_state4, tmp_474_fu_214_p2, grp_AES256_ECB_fu_171_ctr_address0, ap_CS_fsm_state6, ap_CS_fsm_state10, tmp_473_fu_209_p1, tmp_478_fu_284_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            V_address0 <= tmp_478_fu_284_p1(4 - 1 downto 0);
        elsif ((((tmp_474_fu_214_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4)) or ((tmp_474_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4)))) then 
            V_address0 <= V_addr_reg_300;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            V_address0 <= tmp_473_fu_209_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            V_address0 <= grp_AES256_ECB_fu_171_ctr_address0;
        else 
            V_address0 <= "XXXX";
        end if; 
    end process;

    V_address1 <= grp_AES256_ECB_fu_171_ctr_address1;

    V_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4, tmp_474_fu_214_p2, grp_AES256_ECB_fu_171_ctr_ce0, ap_CS_fsm_state6, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state10) or ((tmp_474_fu_214_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4)) or ((tmp_474_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4)))) then 
            V_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            V_ce0 <= grp_AES256_ECB_fu_171_ctr_ce0;
        else 
            V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    V_ce1_assign_proc : process(grp_AES256_ECB_fu_171_ctr_ce1, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            V_ce1 <= grp_AES256_ECB_fu_171_ctr_ce1;
        else 
            V_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    V_d0_assign_proc : process(ap_CS_fsm_state4, tmp_474_fu_214_p2, temp_q0, ap_CS_fsm_state10, tmp_475_fu_226_p2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            V_d0 <= temp_q0;
        elsif (((tmp_474_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            V_d0 <= tmp_475_fu_226_p2;
        elsif (((tmp_474_fu_214_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            V_d0 <= ap_const_lv8_0;
        else 
            V_d0 <= "XXXXXXXX";
        end if; 
    end process;


    V_we0_assign_proc : process(ap_CS_fsm_state4, tmp_474_fu_214_p2, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or ((tmp_474_fu_214_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4)) or ((tmp_474_fu_214_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4)))) then 
            V_we0 <= ap_const_logic_1;
        else 
            V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state9, exitcond_fu_259_p2)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((exitcond_fu_259_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state9, exitcond_fu_259_p2)
    begin
        if (((exitcond_fu_259_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond1_fu_242_p2 <= "1" when (i_2_reg_148 = ap_const_lv6_20) else "0";
    exitcond4_fu_185_p2 <= "1" when (i_reg_124 = ap_const_lv2_3) else "0";
    exitcond_fu_259_p2 <= "1" when (i_3_reg_159 = ap_const_lv5_10) else "0";
    grp_AES256_ECB_fu_171_ap_start <= grp_AES256_ECB_fu_171_ap_start_reg;
    i_25_fu_191_p2 <= std_logic_vector(unsigned(i_reg_124) + unsigned(ap_const_lv2_1));
    i_7_fu_248_p2 <= std_logic_vector(unsigned(i_2_reg_148) + unsigned(ap_const_lv6_1));
    i_8_fu_265_p2 <= std_logic_vector(unsigned(i_3_reg_159) + unsigned(ap_const_lv5_1));
    j_7_fu_220_p2 <= std_logic_vector(signed(j_reg_136) + signed(ap_const_lv5_1F));
        j_cast_fu_197_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(j_reg_136),32));


    temp_address0_assign_proc : process(ap_CS_fsm_state7, tmp_s_fu_254_p1, ap_CS_fsm_state9, grp_AES256_ECB_fu_171_buffer_r_address0, ap_CS_fsm_state6, tmp_477_fu_279_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            temp_address0 <= tmp_477_fu_279_p1(6 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            temp_address0 <= tmp_s_fu_254_p1(6 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            temp_address0 <= grp_AES256_ECB_fu_171_buffer_r_address0;
        else 
            temp_address0 <= "XXXXXX";
        end if; 
    end process;


    temp_ce0_assign_proc : process(ap_CS_fsm_state7, ap_CS_fsm_state9, grp_AES256_ECB_fu_171_buffer_r_ce0, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            temp_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            temp_ce0 <= grp_AES256_ECB_fu_171_buffer_r_ce0;
        else 
            temp_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    temp_ce1_assign_proc : process(grp_AES256_ECB_fu_171_buffer_r_ce1, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            temp_ce1 <= grp_AES256_ECB_fu_171_buffer_r_ce1;
        else 
            temp_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    temp_we0_assign_proc : process(grp_AES256_ECB_fu_171_buffer_r_we0, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            temp_we0 <= grp_AES256_ECB_fu_171_buffer_r_we0;
        else 
            temp_we0 <= ap_const_logic_0;
        end if; 
    end process;


    temp_we1_assign_proc : process(grp_AES256_ECB_fu_171_buffer_r_we1, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            temp_we1 <= grp_AES256_ECB_fu_171_buffer_r_we1;
        else 
            temp_we1 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_473_fu_209_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_cast_fu_197_p1),64));
    tmp_474_fu_214_p2 <= "1" when (V_q0 = ap_const_lv8_FF) else "0";
    tmp_475_fu_226_p2 <= std_logic_vector(unsigned(V_q0) + unsigned(ap_const_lv8_1));
    tmp_476_fu_271_p3 <= (ap_const_lv1_1 & i_3_reg_159);
    tmp_477_fu_279_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_476_fu_271_p3),64));
    tmp_478_fu_284_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_3_reg_159),64));
    tmp_479_fu_233_p3 <= (i_reg_124 & ap_const_lv4_0);
    tmp_fu_201_p3 <= j_reg_136(4 downto 4);
    tmp_s_fu_254_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_2_reg_148),64));
end behav;
