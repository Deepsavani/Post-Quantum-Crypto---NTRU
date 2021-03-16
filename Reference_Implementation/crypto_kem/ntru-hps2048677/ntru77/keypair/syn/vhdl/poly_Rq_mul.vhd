-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity poly_Rq_mul is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    r_coeffs_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    r_coeffs_ce0 : OUT STD_LOGIC;
    r_coeffs_we0 : OUT STD_LOGIC;
    r_coeffs_d0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    r_coeffs_q0 : IN STD_LOGIC_VECTOR (15 downto 0);
    a_coeffs_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_coeffs_ce0 : OUT STD_LOGIC;
    a_coeffs_q0 : IN STD_LOGIC_VECTOR (15 downto 0);
    b_coeffs_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    b_coeffs_ce0 : OUT STD_LOGIC;
    b_coeffs_q0 : IN STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of poly_Rq_mul is 
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
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv10_1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv10_2A6 : STD_LOGIC_VECTOR (9 downto 0) := "1010100110";
    constant ap_const_lv10_2A5 : STD_LOGIC_VECTOR (9 downto 0) := "1010100101";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal reg_129 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal reg_133 : STD_LOGIC_VECTOR (15 downto 0);
    signal reg_137 : STD_LOGIC_VECTOR (15 downto 0);
    signal k_cast2_fu_141_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal k_cast2_reg_268 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal k_5_fu_151_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal k_5_reg_277 : STD_LOGIC_VECTOR (9 downto 0);
    signal r_coeffs_addr_reg_282 : STD_LOGIC_VECTOR (9 downto 0);
    signal exitcond1_fu_145_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_s_fu_162_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_s_reg_287 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_203_fu_172_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_23_fu_198_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_23_reg_305 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_24_fu_214_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_24_reg_313 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal exitcond_fu_208_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal indvars_iv_next_fu_235_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal indvars_iv_next_reg_328 : STD_LOGIC_VECTOR (9 downto 0);
    signal indvars_iv_reg_84 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal k_reg_96 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_reg_107 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal i_1_reg_118 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal tmp_fu_157_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_205_fu_182_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_207_fu_193_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_211_fu_225_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_212_fu_230_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_fu_250_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_fu_259_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_295_cast_fu_245_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal i_cast_fu_168_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_204_fu_177_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_206_fu_187_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_1_cast_fu_204_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_210_fu_220_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_270_fu_241_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (8 downto 0);

    component crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (15 downto 0);
        din1 : IN STD_LOGIC_VECTOR (15 downto 0);
        din2 : IN STD_LOGIC_VECTOR (15 downto 0);
        dout : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49 : component crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 16,
        din1_WIDTH => 16,
        din2_WIDTH => 16,
        dout_WIDTH => 16)
    port map (
        din0 => reg_129,
        din1 => reg_133,
        din2 => reg_137,
        dout => grp_fu_250_p3);

    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50 : component crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 16,
        din1_WIDTH => 16,
        din2_WIDTH => 16,
        dout_WIDTH => 16)
    port map (
        din0 => reg_129,
        din1 => reg_133,
        din2 => reg_137,
        dout => grp_fu_259_p3);





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


    i_1_reg_118_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_203_fu_172_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_1_reg_118 <= ap_const_lv10_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                i_1_reg_118 <= i_24_reg_313;
            end if; 
        end if;
    end process;

    i_reg_107_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                i_reg_107 <= i_23_reg_305;
            elsif (((exitcond1_fu_145_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_reg_107 <= ap_const_lv10_1;
            end if; 
        end if;
    end process;

    indvars_iv_reg_84_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                indvars_iv_reg_84 <= ap_const_lv10_1;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                indvars_iv_reg_84 <= indvars_iv_next_reg_328;
            end if; 
        end if;
    end process;

    k_reg_96_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                k_reg_96 <= ap_const_lv10_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                k_reg_96 <= k_5_reg_277;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_203_fu_172_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                i_23_reg_305 <= i_23_fu_198_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                i_24_reg_313 <= i_24_fu_214_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_208_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                indvars_iv_next_reg_328 <= indvars_iv_next_fu_235_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                k_5_reg_277 <= k_5_fu_151_p2;
                    k_cast2_reg_268(9 downto 0) <= k_cast2_fu_141_p1(9 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_145_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                r_coeffs_addr_reg_282 <= tmp_fu_157_p1(10 - 1 downto 0);
                tmp_s_reg_287 <= tmp_s_fu_162_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state4))) then
                reg_129 <= a_coeffs_q0;
                reg_133 <= b_coeffs_q0;
                reg_137 <= r_coeffs_q0;
            end if;
        end if;
    end process;
    k_cast2_reg_268(10) <= '0';

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_145_p2, ap_CS_fsm_state3, tmp_203_fu_172_p2, ap_CS_fsm_state6, exitcond_fu_208_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond1_fu_145_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((tmp_203_fu_172_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state6 => 
                if (((exitcond_fu_208_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state9;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXX";
        end case;
    end process;

    a_coeffs_address0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state6, tmp_205_fu_182_p1, tmp_211_fu_225_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            a_coeffs_address0 <= tmp_211_fu_225_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            a_coeffs_address0 <= tmp_205_fu_182_p1(10 - 1 downto 0);
        else 
            a_coeffs_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_coeffs_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            a_coeffs_ce0 <= ap_const_logic_1;
        else 
            a_coeffs_ce0 <= ap_const_logic_0;
        end if; 
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

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_145_p2)
    begin
        if ((((exitcond1_fu_145_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_145_p2)
    begin
        if (((exitcond1_fu_145_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    b_coeffs_address0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state6, tmp_207_fu_193_p1, tmp_212_fu_230_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            b_coeffs_address0 <= tmp_212_fu_230_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            b_coeffs_address0 <= tmp_207_fu_193_p1(10 - 1 downto 0);
        else 
            b_coeffs_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    b_coeffs_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            b_coeffs_ce0 <= ap_const_logic_1;
        else 
            b_coeffs_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond1_fu_145_p2 <= "1" when (indvars_iv_reg_84 = ap_const_lv10_2A6) else "0";
    exitcond_fu_208_p2 <= "1" when (i_1_reg_118 = indvars_iv_reg_84) else "0";
    i_1_cast_fu_204_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_1_reg_118),11));
    i_23_fu_198_p2 <= std_logic_vector(unsigned(i_reg_107) + unsigned(ap_const_lv10_1));
    i_24_fu_214_p2 <= std_logic_vector(unsigned(i_1_reg_118) + unsigned(ap_const_lv10_1));
    i_cast_fu_168_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_107),11));
    indvars_iv_next_fu_235_p2 <= std_logic_vector(unsigned(ap_const_lv10_1) + unsigned(indvars_iv_reg_84));
    k_5_fu_151_p2 <= std_logic_vector(unsigned(k_reg_96) + unsigned(ap_const_lv10_1));
    k_cast2_fu_141_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_reg_96),11));

    r_coeffs_address0_assign_proc : process(ap_CS_fsm_state2, r_coeffs_addr_reg_282, ap_CS_fsm_state3, ap_CS_fsm_state6, exitcond_fu_208_p2, ap_CS_fsm_state9, ap_CS_fsm_state5, ap_CS_fsm_state8, tmp_fu_157_p1)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state9) or ((exitcond_fu_208_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6)) or ((exitcond_fu_208_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6)))) then 
            r_coeffs_address0 <= r_coeffs_addr_reg_282;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            r_coeffs_address0 <= tmp_fu_157_p1(10 - 1 downto 0);
        else 
            r_coeffs_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_ce0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state6, exitcond_fu_208_p2, ap_CS_fsm_state9, ap_CS_fsm_state5, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state9) or ((exitcond_fu_208_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6)) or ((exitcond_fu_208_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6)))) then 
            r_coeffs_ce0 <= ap_const_logic_1;
        else 
            r_coeffs_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_d0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state9, ap_CS_fsm_state5, ap_CS_fsm_state8, grp_fu_250_p3, grp_fu_259_p3, tmp_295_cast_fu_245_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            r_coeffs_d0 <= tmp_295_cast_fu_245_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_d0 <= grp_fu_259_p3;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_d0 <= grp_fu_250_p3;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            r_coeffs_d0 <= ap_const_lv16_0;
        else 
            r_coeffs_d0 <= "XXXXXXXXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_we0_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_145_p2, ap_CS_fsm_state9, ap_CS_fsm_state5, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state9) or ((exitcond1_fu_145_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            r_coeffs_we0 <= ap_const_logic_1;
        else 
            r_coeffs_we0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_203_fu_172_p2 <= "1" when (unsigned(i_reg_107) < unsigned(tmp_s_reg_287)) else "0";
    tmp_204_fu_177_p2 <= std_logic_vector(unsigned(k_cast2_reg_268) + unsigned(i_cast_fu_168_p1));
    tmp_205_fu_182_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_204_fu_177_p2),64));
    tmp_206_fu_187_p2 <= std_logic_vector(signed(ap_const_lv10_2A5) - signed(i_reg_107));
    tmp_207_fu_193_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_206_fu_187_p2),64));
    tmp_210_fu_220_p2 <= std_logic_vector(unsigned(k_cast2_reg_268) - unsigned(i_1_cast_fu_204_p1));
        tmp_211_fu_225_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_210_fu_220_p2),64));

    tmp_212_fu_230_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_1_reg_118),64));
    tmp_270_fu_241_p1 <= r_coeffs_q0(11 - 1 downto 0);
    tmp_295_cast_fu_245_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_270_fu_241_p1),16));
    tmp_fu_157_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_reg_96),64));
    tmp_s_fu_162_p2 <= std_logic_vector(signed(ap_const_lv10_2A5) - signed(k_reg_96));
end behav;