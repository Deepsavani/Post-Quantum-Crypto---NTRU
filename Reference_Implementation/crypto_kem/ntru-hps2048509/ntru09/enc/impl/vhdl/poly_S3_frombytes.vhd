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
    r_coeffs_address0 : OUT STD_LOGIC_VECTOR (8 downto 0);
    r_coeffs_ce0 : OUT STD_LOGIC;
    r_coeffs_we0 : OUT STD_LOGIC;
    r_coeffs_d0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    r_coeffs_address1 : OUT STD_LOGIC_VECTOR (8 downto 0);
    r_coeffs_ce1 : OUT STD_LOGIC;
    r_coeffs_we1 : OUT STD_LOGIC;
    r_coeffs_d1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    msg_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    msg_ce0 : OUT STD_LOGIC;
    msg_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    msg_offset : IN STD_LOGIC_VECTOR (8 downto 0) );
end;


architecture behav of poly_S3_frombytes is 
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
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv64_1FC : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000111111100";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv7_65 : STD_LOGIC_VECTOR (6 downto 0) := "1100101";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv8_65 : STD_LOGIC_VECTOR (7 downto 0) := "01100101";
    constant ap_const_lv16_AB : STD_LOGIC_VECTOR (15 downto 0) := "0000000010101011";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv16_CB : STD_LOGIC_VECTOR (15 downto 0) := "0000000011001011";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv14_39 : STD_LOGIC_VECTOR (13 downto 0) := "00000000111001";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv13_13 : STD_LOGIC_VECTOR (12 downto 0) := "0000000010011";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv9_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_const_lv9_2 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_const_lv9_3 : STD_LOGIC_VECTOR (8 downto 0) := "000000011";
    constant ap_const_lv9_4 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv4_9 : STD_LOGIC_VECTOR (3 downto 0) := "1001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal reg_210 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal grp_mod3_fu_199_ap_return : STD_LOGIC_VECTOR (15 downto 0);
    signal reg_216 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal exitcond_fu_424_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_mod3_fu_204_ap_return : STD_LOGIC_VECTOR (15 downto 0);
    signal reg_221 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_212_fu_226_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_212_reg_474 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_10_fu_240_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal i_10_reg_483 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal exitcond1_fu_234_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_184_fu_268_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_184_reg_493 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_reg_507 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_165_reg_512 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_163_reg_517 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_164_reg_522 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_cast1_cast_fu_420_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_cast1_cast_reg_527 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_6_fu_430_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal j_6_reg_535 : STD_LOGIC_VECTOR (1 downto 0);
    signal c_7_fu_456_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal c_7_reg_540 : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_mod3_fu_199_ap_ready : STD_LOGIC;
    signal grp_mod3_fu_199_a : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_mod3_fu_204_ap_ready : STD_LOGIC;
    signal grp_mod3_fu_204_a : STD_LOGIC_VECTOR (7 downto 0);
    signal i_reg_168 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal c8_reg_179 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal j_reg_188 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_307_cast_cast_fu_378_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_317_cast_fu_406_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_302_cast_fu_328_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_312_cast_cast_fu_382_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal sum_cast_fu_255_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum2_cast_fu_279_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_185_fu_364_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_189_fu_373_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_193_fu_391_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_197_fu_401_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_201_fu_415_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_204_fu_469_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_cast_fu_246_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal sum_fu_250_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl_fu_260_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal i_cast4_fu_230_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal sum2_fu_274_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_186_fu_288_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_s_fu_284_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_186_fu_288_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_198_fu_304_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_198_fu_304_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_190_fu_332_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_190_fu_332_p2 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_194_fu_348_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_194_fu_348_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_188_fu_368_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_192_fu_386_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_196_fu_396_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_200_fu_410_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_205_fu_440_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_205_fu_440_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_166_fu_446_p4 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_203_fu_460_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_323_cast6_fu_465_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_190_fu_332_p00 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_194_fu_348_p00 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_205_fu_440_p00 : STD_LOGIC_VECTOR (15 downto 0);

    component mod3 IS
    port (
        ap_ready : OUT STD_LOGIC;
        a : IN STD_LOGIC_VECTOR (7 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    grp_mod3_fu_199 : component mod3
    port map (
        ap_ready => grp_mod3_fu_199_ap_ready,
        a => grp_mod3_fu_199_a,
        ap_return => grp_mod3_fu_199_ap_return);

    grp_mod3_fu_204 : component mod3
    port map (
        ap_ready => grp_mod3_fu_204_ap_ready,
        a => grp_mod3_fu_204_a,
        ap_return => grp_mod3_fu_204_ap_return);





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


    c8_reg_179_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
                c8_reg_179 <= c_7_reg_540;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                c8_reg_179 <= msg_q0;
            end if; 
        end if;
    end process;

    i_reg_168_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                i_reg_168 <= i_10_reg_483;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_168 <= ap_const_lv7_0;
            end if; 
        end if;
    end process;

    j_reg_188_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
                j_reg_188 <= j_6_reg_535;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                j_reg_188 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_424_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                    c_7_reg_540(6 downto 0) <= c_7_fu_456_p1(6 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_10_reg_483 <= i_10_fu_240_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                j_6_reg_535 <= j_6_fu_430_p2;
                    j_cast1_cast_reg_527(1 downto 0) <= j_cast1_cast_fu_420_p1(1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state3))) then
                reg_210 <= msg_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4) or ((exitcond_fu_424_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state9)))) then
                reg_216 <= grp_mod3_fu_199_ap_return;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4))) then
                reg_221 <= grp_mod3_fu_204_ap_return;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                tmp_163_reg_517 <= tmp_190_fu_332_p2(13 downto 9);
                tmp_164_reg_522 <= tmp_194_fu_348_p2(12 downto 9);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                tmp_165_reg_512 <= tmp_198_fu_304_p2(15 downto 14);
                tmp_reg_507 <= tmp_186_fu_288_p2(15 downto 9);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_234_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                tmp_184_reg_493 <= tmp_184_fu_268_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                tmp_212_reg_474 <= tmp_212_fu_226_p1;
            end if;
        end if;
    end process;
    j_cast1_cast_reg_527(3 downto 2) <= "00";
    c_7_reg_540(7) <= '0';

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state9, exitcond_fu_424_p2, ap_CS_fsm_state2, exitcond1_fu_234_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_234_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state8;
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
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                if (((exitcond_fu_424_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
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

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state9, exitcond_fu_424_p2)
    begin
        if ((((exitcond_fu_424_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state9, exitcond_fu_424_p2)
    begin
        if (((exitcond_fu_424_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_7_fu_456_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_166_fu_446_p4),8));
    exitcond1_fu_234_p2 <= "1" when (i_reg_168 = ap_const_lv7_65) else "0";
    exitcond_fu_424_p2 <= "1" when (j_reg_188 = ap_const_lv2_3) else "0";

    grp_mod3_fu_199_a_assign_proc : process(reg_210, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, exitcond_fu_424_p2, c8_reg_179, tmp_307_cast_cast_fu_378_p1, tmp_317_cast_fu_406_p1)
    begin
        if (((exitcond_fu_424_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            grp_mod3_fu_199_a <= c8_reg_179;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            grp_mod3_fu_199_a <= tmp_317_cast_fu_406_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            grp_mod3_fu_199_a <= tmp_307_cast_cast_fu_378_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            grp_mod3_fu_199_a <= reg_210;
        else 
            grp_mod3_fu_199_a <= "XXXXXXXX";
        end if; 
    end process;


    grp_mod3_fu_204_a_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, tmp_302_cast_fu_328_p1, tmp_312_cast_cast_fu_382_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            grp_mod3_fu_204_a <= tmp_312_cast_cast_fu_382_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            grp_mod3_fu_204_a <= tmp_302_cast_fu_328_p1;
        else 
            grp_mod3_fu_204_a <= "XXXXXXXX";
        end if; 
    end process;

    i_10_fu_240_p2 <= std_logic_vector(unsigned(i_reg_168) + unsigned(ap_const_lv7_1));
    i_cast4_fu_230_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_168),9));
    j_6_fu_430_p2 <= std_logic_vector(unsigned(j_reg_188) + unsigned(ap_const_lv2_1));
    j_cast1_cast_fu_420_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_reg_188),4));

    msg_address0_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_234_p2, sum_cast_fu_255_p1, sum2_cast_fu_279_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
            if ((exitcond1_fu_234_p2 = ap_const_lv1_1)) then 
                msg_address0 <= sum2_cast_fu_279_p1(8 - 1 downto 0);
            elsif ((exitcond1_fu_234_p2 = ap_const_lv1_0)) then 
                msg_address0 <= sum_cast_fu_255_p1(8 - 1 downto 0);
            else 
                msg_address0 <= "XXXXXXXX";
            end if;
        else 
            msg_address0 <= "XXXXXXXX";
        end if; 
    end process;


    msg_ce0_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_234_p2)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_234_p2 = ap_const_lv1_1)) or ((exitcond1_fu_234_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            msg_ce0 <= ap_const_logic_1;
        else 
            msg_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    p_shl_fu_260_p3 <= (i_reg_168 & ap_const_lv2_0);

    r_coeffs_address0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10, tmp_185_fu_364_p1, tmp_193_fu_391_p1, tmp_201_fu_415_p1, tmp_204_fu_469_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            r_coeffs_address0 <= tmp_204_fu_469_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            r_coeffs_address0 <= tmp_201_fu_415_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address0 <= tmp_193_fu_391_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_address0 <= tmp_185_fu_364_p1(9 - 1 downto 0);
        else 
            r_coeffs_address0 <= "XXXXXXXXX";
        end if; 
    end process;


    r_coeffs_address1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, tmp_189_fu_373_p1, tmp_197_fu_401_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            r_coeffs_address1 <= ap_const_lv64_1FC(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address1 <= tmp_197_fu_401_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_address1 <= tmp_189_fu_373_p1(9 - 1 downto 0);
        else 
            r_coeffs_address1 <= "XXXXXXXXX";
        end if; 
    end process;


    r_coeffs_ce0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            r_coeffs_ce0 <= ap_const_logic_1;
        else 
            r_coeffs_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_ce1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            r_coeffs_ce1 <= ap_const_logic_1;
        else 
            r_coeffs_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    r_coeffs_d0 <= reg_216;

    r_coeffs_d1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, reg_221)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            r_coeffs_d1 <= ap_const_lv16_0;
        elsif (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            r_coeffs_d1 <= reg_221;
        else 
            r_coeffs_d1 <= "XXXXXXXXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_we0_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            r_coeffs_we0 <= ap_const_logic_1;
        else 
            r_coeffs_we0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_we1_assign_proc : process(ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, exitcond_fu_424_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or ((exitcond_fu_424_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9)))) then 
            r_coeffs_we1 <= ap_const_logic_1;
        else 
            r_coeffs_we1 <= ap_const_logic_0;
        end if; 
    end process;

    sum2_cast_fu_279_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum2_fu_274_p2),64));
    sum2_fu_274_p2 <= std_logic_vector(unsigned(tmp_212_reg_474) + unsigned(ap_const_lv8_65));
    sum_cast_fu_255_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum_fu_250_p2),64));
    sum_fu_250_p2 <= std_logic_vector(unsigned(tmp_cast_fu_246_p1) + unsigned(tmp_212_reg_474));
    tmp_166_fu_446_p4 <= tmp_205_fu_440_p2(15 downto 9);
    tmp_184_fu_268_p2 <= std_logic_vector(unsigned(p_shl_fu_260_p3) + unsigned(i_cast4_fu_230_p1));
    tmp_185_fu_364_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_184_reg_493),64));
    tmp_186_fu_288_p0 <= tmp_s_fu_284_p1(8 - 1 downto 0);
    tmp_186_fu_288_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_186_fu_288_p0) * unsigned(ap_const_lv16_AB), 16));
    tmp_188_fu_368_p2 <= std_logic_vector(unsigned(tmp_184_reg_493) + unsigned(ap_const_lv9_1));
    tmp_189_fu_373_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_188_fu_368_p2),64));
    tmp_190_fu_332_p0 <= tmp_190_fu_332_p00(8 - 1 downto 0);
    tmp_190_fu_332_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(reg_210),14));
    tmp_190_fu_332_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_190_fu_332_p0) * unsigned(ap_const_lv14_39), 14));
    tmp_192_fu_386_p2 <= std_logic_vector(unsigned(tmp_184_reg_493) + unsigned(ap_const_lv9_2));
    tmp_193_fu_391_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_192_fu_386_p2),64));
    tmp_194_fu_348_p0 <= tmp_194_fu_348_p00(8 - 1 downto 0);
    tmp_194_fu_348_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(reg_210),13));
    tmp_194_fu_348_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_194_fu_348_p0) * unsigned(ap_const_lv13_13), 13));
    tmp_196_fu_396_p2 <= std_logic_vector(unsigned(tmp_184_reg_493) + unsigned(ap_const_lv9_3));
    tmp_197_fu_401_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_196_fu_396_p2),64));
    tmp_198_fu_304_p0 <= tmp_s_fu_284_p1(8 - 1 downto 0);
    tmp_198_fu_304_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_198_fu_304_p0) * unsigned(ap_const_lv16_CB), 16));
    tmp_200_fu_410_p2 <= std_logic_vector(unsigned(tmp_184_reg_493) + unsigned(ap_const_lv9_4));
    tmp_201_fu_415_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_200_fu_410_p2),64));
    tmp_203_fu_460_p2 <= std_logic_vector(unsigned(j_cast1_cast_reg_527) + unsigned(ap_const_lv4_9));
    tmp_204_fu_469_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_323_cast6_fu_465_p1),64));
    tmp_205_fu_440_p0 <= tmp_205_fu_440_p00(8 - 1 downto 0);
    tmp_205_fu_440_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(c8_reg_179),16));
    tmp_205_fu_440_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_205_fu_440_p0) * unsigned(ap_const_lv16_AB), 16));
    tmp_212_fu_226_p1 <= msg_offset(8 - 1 downto 0);
    tmp_302_cast_fu_328_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_reg_507),8));
    tmp_307_cast_cast_fu_378_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_163_reg_517),8));
    tmp_312_cast_cast_fu_382_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_164_reg_522),8));
    tmp_317_cast_fu_406_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_165_reg_512),8));
        tmp_323_cast6_fu_465_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_203_fu_460_p2),9));

    tmp_cast_fu_246_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_168),8));
    tmp_s_fu_284_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(msg_q0),16));
end behav;
