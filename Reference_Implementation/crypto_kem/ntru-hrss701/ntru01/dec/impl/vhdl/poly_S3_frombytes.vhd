-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity poly_S3_frombytes is
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
    r_coeffs_address1 : OUT STD_LOGIC_VECTOR (9 downto 0);
    r_coeffs_ce1 : OUT STD_LOGIC;
    r_coeffs_we1 : OUT STD_LOGIC;
    r_coeffs_d1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    msg_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    msg_ce0 : OUT STD_LOGIC;
    msg_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    msg_offset : IN STD_LOGIC_VECTOR (9 downto 0) );
end;


architecture behav of poly_S3_frombytes is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (6 downto 0) := "0000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (6 downto 0) := "0000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (6 downto 0) := "0001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (6 downto 0) := "0010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (6 downto 0) := "0100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (6 downto 0) := "1000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv64_2BC : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010111100";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv8_8C : STD_LOGIC_VECTOR (7 downto 0) := "10001100";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv16_AB : STD_LOGIC_VECTOR (15 downto 0) := "0000000010101011";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv16_CB : STD_LOGIC_VECTOR (15 downto 0) := "0000000011001011";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv14_39 : STD_LOGIC_VECTOR (13 downto 0) := "00000000111001";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv13_13 : STD_LOGIC_VECTOR (12 downto 0) := "0000000010011";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv10_1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_const_lv10_2 : STD_LOGIC_VECTOR (9 downto 0) := "0000000010";
    constant ap_const_lv10_3 : STD_LOGIC_VECTOR (9 downto 0) := "0000000011";
    constant ap_const_lv10_4 : STD_LOGIC_VECTOR (9 downto 0) := "0000000100";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal grp_mod3_fu_153_ap_return : STD_LOGIC_VECTOR (15 downto 0);
    signal reg_163 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal grp_mod3_fu_158_ap_return : STD_LOGIC_VECTOR (15 downto 0);
    signal reg_169 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_222_fu_175_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_222_reg_357 : STD_LOGIC_VECTOR (8 downto 0);
    signal i_12_fu_189_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_12_reg_365 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal exitcond_fu_183_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_201_fu_217_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_201_reg_375 : STD_LOGIC_VECTOR (9 downto 0);
    signal c_reg_384 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_reg_391 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_218_reg_396 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_209_reg_401 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_213_reg_406 : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_mod3_fu_153_ap_ready : STD_LOGIC;
    signal grp_mod3_fu_153_a : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_mod3_fu_158_ap_ready : STD_LOGIC;
    signal grp_mod3_fu_158_a : STD_LOGIC_VECTOR (7 downto 0);
    signal i_reg_142 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal tmp_209_cast_cast_fu_315_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_219_cast_fu_343_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_204_cast_fu_265_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_214_cast_cast_fu_319_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal sum_cast_fu_204_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_202_fu_301_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_206_fu_310_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_211_fu_328_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_216_fu_338_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_221_fu_352_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_cast_fu_195_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal sum_fu_199_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_shl_fu_209_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_cast3_fu_179_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_203_fu_227_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_s_fu_223_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_203_fu_227_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_217_fu_243_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_217_fu_243_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_207_fu_269_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_207_fu_269_p2 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_212_fu_285_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_212_fu_285_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_205_fu_305_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_210_fu_323_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_215_fu_333_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_220_fu_347_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_207_fu_269_p00 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_212_fu_285_p00 : STD_LOGIC_VECTOR (12 downto 0);

    component mod3 IS
    port (
        ap_ready : OUT STD_LOGIC;
        a : IN STD_LOGIC_VECTOR (7 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    grp_mod3_fu_153 : component mod3
    port map (
        ap_ready => grp_mod3_fu_153_ap_ready,
        a => grp_mod3_fu_153_a,
        ap_return => grp_mod3_fu_153_ap_return);

    grp_mod3_fu_158 : component mod3
    port map (
        ap_ready => grp_mod3_fu_158_ap_ready,
        a => grp_mod3_fu_158_a,
        ap_return => grp_mod3_fu_158_ap_return);





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


    i_reg_142_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                i_reg_142 <= i_12_reg_365;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_142 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                c_reg_384 <= msg_q0;
                tmp_218_reg_396 <= tmp_217_fu_243_p2(15 downto 14);
                tmp_reg_391 <= tmp_203_fu_227_p2(15 downto 9);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_12_reg_365 <= i_12_fu_189_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4))) then
                reg_163 <= grp_mod3_fu_153_ap_return;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4))) then
                reg_169 <= grp_mod3_fu_158_ap_return;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_183_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                tmp_201_reg_375 <= tmp_201_fu_217_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                tmp_209_reg_401 <= tmp_207_fu_269_p2(13 downto 9);
                tmp_213_reg_406 <= tmp_212_fu_285_p2(12 downto 9);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                tmp_222_reg_357 <= tmp_222_fu_175_p1;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond_fu_183_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond_fu_183_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond_fu_183_p2)
    begin
        if ((((exitcond_fu_183_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond_fu_183_p2)
    begin
        if (((exitcond_fu_183_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_fu_183_p2 <= "1" when (i_reg_142 = ap_const_lv8_8C) else "0";

    grp_mod3_fu_153_a_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, c_reg_384, tmp_209_cast_cast_fu_315_p1, tmp_219_cast_fu_343_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            grp_mod3_fu_153_a <= tmp_219_cast_fu_343_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            grp_mod3_fu_153_a <= tmp_209_cast_cast_fu_315_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            grp_mod3_fu_153_a <= c_reg_384;
        else 
            grp_mod3_fu_153_a <= "XXXXXXXX";
        end if; 
    end process;


    grp_mod3_fu_158_a_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, tmp_204_cast_fu_265_p1, tmp_214_cast_cast_fu_319_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            grp_mod3_fu_158_a <= tmp_214_cast_cast_fu_319_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            grp_mod3_fu_158_a <= tmp_204_cast_fu_265_p1;
        else 
            grp_mod3_fu_158_a <= "XXXXXXXX";
        end if; 
    end process;

    i_12_fu_189_p2 <= std_logic_vector(unsigned(i_reg_142) + unsigned(ap_const_lv8_1));
    i_cast3_fu_179_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_142),10));
    msg_address0 <= sum_cast_fu_204_p1(11 - 1 downto 0);

    msg_ce0_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            msg_ce0 <= ap_const_logic_1;
        else 
            msg_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    p_shl_fu_209_p3 <= (i_reg_142 & ap_const_lv2_0);

    r_coeffs_address0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state2, tmp_202_fu_301_p1, tmp_216_fu_338_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address0 <= tmp_216_fu_338_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_address0 <= tmp_202_fu_301_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            r_coeffs_address0 <= ap_const_lv64_2BC(10 - 1 downto 0);
        else 
            r_coeffs_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_address1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, tmp_206_fu_310_p1, tmp_211_fu_328_p1, tmp_221_fu_352_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            r_coeffs_address1 <= tmp_221_fu_352_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address1 <= tmp_211_fu_328_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_address1 <= tmp_206_fu_310_p1(10 - 1 downto 0);
        else 
            r_coeffs_address1 <= "XXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_ce0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            r_coeffs_ce0 <= ap_const_logic_1;
        else 
            r_coeffs_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_ce1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            r_coeffs_ce1 <= ap_const_logic_1;
        else 
            r_coeffs_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_d0_assign_proc : process(reg_163, ap_CS_fsm_state5, ap_CS_fsm_state6, reg_169, ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_d0 <= reg_169;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_d0 <= reg_163;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            r_coeffs_d0 <= ap_const_lv16_0;
        else 
            r_coeffs_d0 <= "XXXXXXXXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_d1_assign_proc : process(reg_163, ap_CS_fsm_state5, ap_CS_fsm_state6, reg_169, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            r_coeffs_d1 <= reg_163;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_d1 <= reg_169;
        else 
            r_coeffs_d1 <= "XXXXXXXXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_we0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state2, exitcond_fu_183_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or ((exitcond_fu_183_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            r_coeffs_we0 <= ap_const_logic_1;
        else 
            r_coeffs_we0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_we1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            r_coeffs_we1 <= ap_const_logic_1;
        else 
            r_coeffs_we1 <= ap_const_logic_0;
        end if; 
    end process;

    sum_cast_fu_204_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum_fu_199_p2),64));
    sum_fu_199_p2 <= std_logic_vector(unsigned(tmp_cast_fu_195_p1) + unsigned(tmp_222_reg_357));
    tmp_201_fu_217_p2 <= std_logic_vector(unsigned(p_shl_fu_209_p3) + unsigned(i_cast3_fu_179_p1));
    tmp_202_fu_301_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_201_reg_375),64));
    tmp_203_fu_227_p0 <= tmp_s_fu_223_p1(8 - 1 downto 0);
    tmp_203_fu_227_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_203_fu_227_p0) * unsigned(ap_const_lv16_AB), 16));
    tmp_204_cast_fu_265_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_reg_391),8));
    tmp_205_fu_305_p2 <= std_logic_vector(unsigned(tmp_201_reg_375) + unsigned(ap_const_lv10_1));
    tmp_206_fu_310_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_205_fu_305_p2),64));
    tmp_207_fu_269_p0 <= tmp_207_fu_269_p00(8 - 1 downto 0);
    tmp_207_fu_269_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(c_reg_384),14));
    tmp_207_fu_269_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_207_fu_269_p0) * unsigned(ap_const_lv14_39), 14));
    tmp_209_cast_cast_fu_315_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_209_reg_401),8));
    tmp_210_fu_323_p2 <= std_logic_vector(unsigned(tmp_201_reg_375) + unsigned(ap_const_lv10_2));
    tmp_211_fu_328_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_210_fu_323_p2),64));
    tmp_212_fu_285_p0 <= tmp_212_fu_285_p00(8 - 1 downto 0);
    tmp_212_fu_285_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(c_reg_384),13));
    tmp_212_fu_285_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_212_fu_285_p0) * unsigned(ap_const_lv13_13), 13));
    tmp_214_cast_cast_fu_319_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_213_reg_406),8));
    tmp_215_fu_333_p2 <= std_logic_vector(unsigned(tmp_201_reg_375) + unsigned(ap_const_lv10_3));
    tmp_216_fu_338_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_215_fu_333_p2),64));
    tmp_217_fu_243_p0 <= tmp_s_fu_223_p1(8 - 1 downto 0);
    tmp_217_fu_243_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_217_fu_243_p0) * unsigned(ap_const_lv16_CB), 16));
    tmp_219_cast_fu_343_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_218_reg_396),8));
    tmp_220_fu_347_p2 <= std_logic_vector(unsigned(tmp_201_reg_375) + unsigned(ap_const_lv10_4));
    tmp_221_fu_352_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_220_fu_347_p2),64));
    tmp_222_fu_175_p1 <= msg_offset(9 - 1 downto 0);
    tmp_cast_fu_195_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_142),9));
    tmp_s_fu_223_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(msg_q0),16));
end behav;