-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity mod3 is
port (
    ap_ready : OUT STD_LOGIC;
    a : IN STD_LOGIC_VECTOR (15 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of mod3 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv3_5 : STD_LOGIC_VECTOR (2 downto 0) := "101";
    constant ap_const_lv3_7 : STD_LOGIC_VECTOR (2 downto 0) := "111";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal tmp_fu_52_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_344_fu_66_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_cast_79_fu_70_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_cast_fu_62_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal r_fu_80_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_208_fu_86_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_47_fu_104_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_345_fu_100_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal fold_cast_fu_128_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_298_cast_fu_134_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_297_cast_fu_96_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal r_1_fu_138_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_48_fu_114_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_346_fu_124_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_207_fu_74_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_51_fu_160_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_50_fu_154_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal fold1_cast_fu_170_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_300_cast_fu_176_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_299_cast_fu_144_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal r_2_fu_180_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_209_fu_186_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_52_fu_200_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal fold2_cast_fu_210_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_302_cast_fu_216_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_301_cast_fu_196_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal r_3_fu_220_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal t_fu_226_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_347_fu_232_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_cast_fu_240_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_s_fu_248_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal not_tmp_s_fu_258_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_304_cast_cast_fu_264_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_243_fu_272_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_303_cast_fu_254_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_305_cast_fu_278_p1 : STD_LOGIC_VECTOR (15 downto 0);


begin



    ap_ready <= ap_const_logic_1;
    ap_return <= (tmp_305_cast_fu_278_p1 xor tmp_303_cast_fu_254_p1);
    c_cast_fu_240_p3 <= 
        ap_const_lv3_7 when (tmp_347_fu_232_p3(0) = '1') else 
        ap_const_lv3_0;
    fold1_cast_fu_170_p2 <= std_logic_vector(unsigned(tmp_51_fu_160_p4) + unsigned(tmp_50_fu_154_p2));
    fold2_cast_fu_210_p2 <= std_logic_vector(unsigned(fold1_cast_fu_170_p2) + unsigned(tmp_52_fu_200_p4));
    fold_cast_fu_128_p2 <= std_logic_vector(unsigned(tmp_47_fu_104_p4) + unsigned(tmp_345_fu_100_p1));
    not_tmp_s_fu_258_p2 <= (tmp_347_fu_232_p3 xor ap_const_lv1_1);
    r_1_fu_138_p2 <= std_logic_vector(unsigned(tmp_298_cast_fu_134_p1) + unsigned(tmp_297_cast_fu_96_p1));
    r_2_fu_180_p2 <= std_logic_vector(unsigned(tmp_300_cast_fu_176_p1) + unsigned(tmp_299_cast_fu_144_p4));
    r_3_fu_220_p2 <= std_logic_vector(unsigned(tmp_302_cast_fu_216_p1) + unsigned(tmp_301_cast_fu_196_p1));
    r_fu_80_p2 <= std_logic_vector(unsigned(tmp_cast_79_fu_70_p1) + unsigned(tmp_cast_fu_62_p1));
    t_fu_226_p2 <= std_logic_vector(signed(ap_const_lv3_5) + signed(r_3_fu_220_p2));
    tmp_207_fu_74_p2 <= std_logic_vector(unsigned(tmp_fu_52_p4) + unsigned(tmp_344_fu_66_p1));
    tmp_208_fu_86_p4 <= r_fu_80_p2(8 downto 4);
    tmp_209_fu_186_p4 <= r_2_fu_180_p2(3 downto 2);
    tmp_243_fu_272_p2 <= (tmp_304_cast_cast_fu_264_p3 and t_fu_226_p2);
    tmp_297_cast_fu_96_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_208_fu_86_p4),6));
    tmp_298_cast_fu_134_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold_cast_fu_128_p2),6));
    tmp_299_cast_fu_144_p4 <= r_1_fu_138_p2(5 downto 2);
    tmp_300_cast_fu_176_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold1_cast_fu_170_p2),4));
    tmp_301_cast_fu_196_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_209_fu_186_p4),3));
    tmp_302_cast_fu_216_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold2_cast_fu_210_p2),3));
    tmp_303_cast_fu_254_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_248_p2),16));
    tmp_304_cast_cast_fu_264_p3 <= 
        ap_const_lv3_7 when (not_tmp_s_fu_258_p2(0) = '1') else 
        ap_const_lv3_0;
        tmp_305_cast_fu_278_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_243_fu_272_p2),16));

    tmp_344_fu_66_p1 <= a(8 - 1 downto 0);
    tmp_345_fu_100_p1 <= a(4 - 1 downto 0);
    tmp_346_fu_124_p1 <= a(2 - 1 downto 0);
    tmp_347_fu_232_p3 <= t_fu_226_p2(2 downto 2);
    tmp_47_fu_104_p4 <= a(11 downto 8);
    tmp_48_fu_114_p4 <= a(9 downto 8);
    tmp_50_fu_154_p2 <= std_logic_vector(unsigned(tmp_48_fu_114_p4) + unsigned(tmp_346_fu_124_p1));
    tmp_51_fu_160_p4 <= tmp_207_fu_74_p2(5 downto 4);
    tmp_52_fu_200_p4 <= r_1_fu_138_p2(3 downto 2);
    tmp_cast_79_fu_70_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_344_fu_66_p1),9));
    tmp_cast_fu_62_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_52_p4),9));
    tmp_fu_52_p4 <= a(15 downto 8);
    tmp_s_fu_248_p2 <= (r_3_fu_220_p2 and c_cast_fu_240_p3);
end behav;
