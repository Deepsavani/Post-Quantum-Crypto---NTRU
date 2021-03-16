-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity poly_Sq_frombytes is
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
    a_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_ce0 : OUT STD_LOGIC;
    a_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    a_address1 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_ce1 : OUT STD_LOGIC;
    a_q1 : IN STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of poly_Sq_frombytes is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (10 downto 0) := "00000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (10 downto 0) := "00000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (10 downto 0) := "00000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (10 downto 0) := "00000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (10 downto 0) := "00000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (10 downto 0) := "00001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (10 downto 0) := "00010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (10 downto 0) := "00100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (10 downto 0) := "01000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (10 downto 0) := "10000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv64_2B9 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010111001";
    constant ap_const_lv64_2BA : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010111010";
    constant ap_const_lv64_1FB : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000111111011";
    constant ap_const_lv64_2B7 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010110111";
    constant ap_const_lv64_2B8 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010111000";
    constant ap_const_lv64_1FA : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000111111010";
    constant ap_const_lv64_2B6 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010110110";
    constant ap_const_lv64_2B5 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010110101";
    constant ap_const_lv64_1F9 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000111111001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv64_1F8 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000111111000";
    constant ap_const_lv6_3F : STD_LOGIC_VECTOR (5 downto 0) := "111111";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv10_1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_const_lv10_2 : STD_LOGIC_VECTOR (9 downto 0) := "0000000010";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv9_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_const_lv10_3 : STD_LOGIC_VECTOR (9 downto 0) := "0000000011";
    constant ap_const_lv10_4 : STD_LOGIC_VECTOR (9 downto 0) := "0000000100";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv9_2 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_const_lv10_5 : STD_LOGIC_VECTOR (9 downto 0) := "0000000101";
    constant ap_const_lv10_6 : STD_LOGIC_VECTOR (9 downto 0) := "0000000110";
    constant ap_const_lv9_3 : STD_LOGIC_VECTOR (8 downto 0) := "000000011";
    constant ap_const_lv9_4 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_const_lv10_7 : STD_LOGIC_VECTOR (9 downto 0) := "0000000111";
    constant ap_const_lv10_8 : STD_LOGIC_VECTOR (9 downto 0) := "0000001000";
    constant ap_const_lv10_B : STD_LOGIC_VECTOR (9 downto 0) := "0000001011";
    constant ap_const_lv9_5 : STD_LOGIC_VECTOR (8 downto 0) := "000000101";
    constant ap_const_lv10_9 : STD_LOGIC_VECTOR (9 downto 0) := "0000001001";
    constant ap_const_lv10_A : STD_LOGIC_VECTOR (9 downto 0) := "0000001010";
    constant ap_const_lv9_6 : STD_LOGIC_VECTOR (8 downto 0) := "000000110";
    constant ap_const_lv9_7 : STD_LOGIC_VECTOR (8 downto 0) := "000000111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal tmp_108_fu_444_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_108_reg_987 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal exitcond_fu_438_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal a_load_6_reg_1007 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_113_fu_493_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_113_reg_1022 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal tmp_121_reg_1032 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_fu_428_p4 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_130_reg_1047 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_171_reg_1062 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal next_mul_fu_733_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal next_mul_reg_1077 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal tmp_154_reg_1082 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal tmp_133_fu_899_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_133_reg_1107 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal tmp_140_fu_951_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_140_reg_1117 : STD_LOGIC_VECTOR (5 downto 0);
    signal i_reg_394 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal phi_mul_reg_406 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_109_fu_450_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_111_fu_461_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_117_fu_472_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_114_fu_501_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_120_fu_529_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_123_fu_550_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_126_fu_561_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_129_fu_613_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_132_fu_624_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_139_fu_635_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_136_fu_661_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_143_fu_698_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_147_fu_717_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_150_fu_728_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_153_fu_786_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_156_fu_807_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_163_fu_818_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_160_fu_844_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_166_fu_877_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal tmp_112_fu_488_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_209_cast_fu_518_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_223_cast_fu_603_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_232_cast_fu_651_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_241_cast_fu_688_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_255_cast_fu_776_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_264_cast_fu_834_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_272_cast_fu_867_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_180_cast_fu_894_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_188_cast_fu_946_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_193_cast_fu_962_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_107_fu_979_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_110_fu_455_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_116_fu_466_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_157_fu_477_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_31_fu_481_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_167_fu_506_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_fu_418_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_118_fu_510_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_119_fu_523_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_122_fu_544_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_125_fu_555_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_100_fu_566_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_44_fu_581_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_124_fu_569_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_168_fu_577_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_45_fu_589_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_127_fu_595_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_128_fu_608_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_131_fu_618_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_138_fu_629_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_169_fu_640_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_134_fu_644_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_135_fu_656_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_170_fu_676_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_137_fu_666_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_141_fu_680_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_142_fu_693_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_146_fu_711_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_149_fu_722_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_145_fu_739_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_51_fu_754_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_148_fu_742_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_172_fu_750_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_52_fu_762_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_151_fu_768_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_152_fu_781_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_155_fu_801_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_162_fu_812_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_173_fu_823_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_158_fu_827_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_159_fu_839_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_161_fu_849_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_164_fu_859_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_165_fu_872_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_fu_882_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_101_fu_886_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_102_fu_903_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_97_fu_913_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_37_fu_925_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_103_fu_917_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_38_fu_933_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_104_fu_939_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_106_fu_955_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_144_fu_967_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_29_fu_971_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (10 downto 0);


begin




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


    i_reg_394_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                i_reg_394 <= tmp_108_reg_987;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_394 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;

    phi_mul_reg_406_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                phi_mul_reg_406 <= next_mul_reg_1077;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                phi_mul_reg_406 <= ap_const_lv10_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                a_load_6_reg_1007 <= a_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                next_mul_reg_1077 <= next_mul_fu_733_p2;
                tmp_154_reg_1082 <= a_q0(7 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                tmp_108_reg_987 <= tmp_108_fu_444_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                    tmp_113_reg_1022(8 downto 3) <= tmp_113_fu_493_p3(8 downto 3);
                tmp_121_reg_1032 <= a_q0(7 downto 6);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                tmp_130_reg_1047 <= a_q0(7 downto 1);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                tmp_133_reg_1107 <= tmp_133_fu_899_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then
                tmp_140_reg_1117 <= tmp_140_fu_951_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                tmp_171_reg_1062 <= a_q0(7 downto 7);
            end if;
        end if;
    end process;
    tmp_113_reg_1022(2 downto 0) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond_fu_438_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond_fu_438_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state9;
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
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXX";
        end case;
    end process;

    a_address0_assign_proc : process(ap_CS_fsm_state2, exitcond_fu_438_p2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state9, ap_CS_fsm_state10, tmp_109_fu_450_p1, tmp_117_fu_472_p1, tmp_126_fu_561_p1, tmp_139_fu_635_p1, tmp_150_fu_728_p1, tmp_163_fu_818_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            a_address0 <= ap_const_lv64_2B5(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            a_address0 <= ap_const_lv64_2B8(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            a_address0 <= tmp_163_fu_818_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            a_address0 <= tmp_150_fu_728_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            a_address0 <= tmp_139_fu_635_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            a_address0 <= tmp_126_fu_561_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            a_address0 <= tmp_117_fu_472_p1(10 - 1 downto 0);
        elsif (((exitcond_fu_438_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            a_address0 <= ap_const_lv64_2B9(10 - 1 downto 0);
        elsif (((exitcond_fu_438_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            a_address0 <= tmp_109_fu_450_p1(10 - 1 downto 0);
        else 
            a_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_address1_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state9, ap_CS_fsm_state10, tmp_111_fu_461_p1, tmp_123_fu_550_p1, tmp_132_fu_624_p1, tmp_147_fu_717_p1, tmp_156_fu_807_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            a_address1 <= ap_const_lv64_2B6(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            a_address1 <= ap_const_lv64_2B7(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            a_address1 <= tmp_156_fu_807_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            a_address1 <= tmp_147_fu_717_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            a_address1 <= tmp_132_fu_624_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            a_address1 <= tmp_123_fu_550_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            a_address1 <= tmp_111_fu_461_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            a_address1 <= ap_const_lv64_2BA(10 - 1 downto 0);
        else 
            a_address1 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_ce0_assign_proc : process(ap_CS_fsm_state2, exitcond_fu_438_p2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state9, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6) or ((exitcond_fu_438_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((exitcond_fu_438_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            a_ce0 <= ap_const_logic_1;
        else 
            a_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    a_ce1_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state9, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            a_ce1 <= ap_const_logic_1;
        else 
            a_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state11) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state11)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_fu_438_p2 <= "1" when (i_reg_394 = ap_const_lv6_3F) else "0";
    grp_fu_418_p4 <= a_q1(7 downto 3);
    grp_fu_428_p4 <= a_q0(7 downto 1);
    next_mul_fu_733_p2 <= std_logic_vector(unsigned(ap_const_lv10_B) + unsigned(phi_mul_reg_406));

    r_coeffs_address0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, ap_CS_fsm_state8, tmp_114_fu_501_p1, tmp_129_fu_613_p1, tmp_143_fu_698_p1, tmp_160_fu_844_p1, ap_CS_fsm_state11)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            r_coeffs_address0 <= ap_const_lv64_1F9(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            r_coeffs_address0 <= ap_const_lv64_1FB(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_address0 <= tmp_160_fu_844_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address0 <= tmp_143_fu_698_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_address0 <= tmp_129_fu_613_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            r_coeffs_address0 <= tmp_114_fu_501_p1(9 - 1 downto 0);
        else 
            r_coeffs_address0 <= "XXXXXXXXX";
        end if; 
    end process;


    r_coeffs_address1_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10, ap_CS_fsm_state8, tmp_120_fu_529_p1, tmp_136_fu_661_p1, tmp_153_fu_786_p1, tmp_166_fu_877_p1, ap_CS_fsm_state11)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            r_coeffs_address1 <= ap_const_lv64_1F8(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            r_coeffs_address1 <= ap_const_lv64_1FA(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_address1 <= tmp_166_fu_877_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            r_coeffs_address1 <= tmp_153_fu_786_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address1 <= tmp_136_fu_661_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            r_coeffs_address1 <= tmp_120_fu_529_p1(9 - 1 downto 0);
        else 
            r_coeffs_address1 <= "XXXXXXXXX";
        end if; 
    end process;


    r_coeffs_ce0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, ap_CS_fsm_state8, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state11) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            r_coeffs_ce0 <= ap_const_logic_1;
        else 
            r_coeffs_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_ce1_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10, ap_CS_fsm_state8, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state11) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            r_coeffs_ce1 <= ap_const_logic_1;
        else 
            r_coeffs_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_d0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, ap_CS_fsm_state8, ap_CS_fsm_state11, tmp_112_fu_488_p1, tmp_223_cast_fu_603_p1, tmp_241_cast_fu_688_p1, tmp_264_cast_fu_834_p1, tmp_180_cast_fu_894_p1, tmp_193_cast_fu_962_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            r_coeffs_d0 <= tmp_193_cast_fu_962_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            r_coeffs_d0 <= tmp_180_cast_fu_894_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_d0 <= tmp_264_cast_fu_834_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_d0 <= tmp_241_cast_fu_688_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_d0 <= tmp_223_cast_fu_603_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            r_coeffs_d0 <= tmp_112_fu_488_p1;
        else 
            r_coeffs_d0 <= "XXXXXXXXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_d1_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10, ap_CS_fsm_state8, ap_CS_fsm_state11, tmp_209_cast_fu_518_p1, tmp_232_cast_fu_651_p1, tmp_255_cast_fu_776_p1, tmp_272_cast_fu_867_p1, tmp_188_cast_fu_946_p1, tmp_107_fu_979_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            r_coeffs_d1 <= tmp_107_fu_979_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            r_coeffs_d1 <= tmp_188_cast_fu_946_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_d1 <= tmp_272_cast_fu_867_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            r_coeffs_d1 <= tmp_255_cast_fu_776_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_d1 <= tmp_232_cast_fu_651_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            r_coeffs_d1 <= tmp_209_cast_fu_518_p1;
        else 
            r_coeffs_d1 <= "XXXXXXXXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_we0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, ap_CS_fsm_state8, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state11) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            r_coeffs_we0 <= ap_const_logic_1;
        else 
            r_coeffs_we0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_we1_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10, ap_CS_fsm_state8, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state11) or (ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            r_coeffs_we1 <= ap_const_logic_1;
        else 
            r_coeffs_we1 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_100_fu_566_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_121_reg_1032),8));
    tmp_101_fu_886_p3 <= (tmp_fu_882_p1 & grp_fu_428_p4);
    tmp_102_fu_903_p4 <= a_q1(7 downto 6);
    tmp_103_fu_917_p3 <= (a_q0 & ap_const_lv2_0);
    tmp_104_fu_939_p3 <= (tmp_133_reg_1107 & tmp_38_fu_933_p2);
    tmp_106_fu_955_p3 <= (tmp_140_reg_1117 & grp_fu_418_p4);
    tmp_107_fu_979_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_29_fu_971_p3),16));
    tmp_108_fu_444_p2 <= std_logic_vector(unsigned(i_reg_394) + unsigned(ap_const_lv6_1));
    tmp_109_fu_450_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(phi_mul_reg_406),64));
    tmp_110_fu_455_p2 <= std_logic_vector(unsigned(ap_const_lv10_1) + unsigned(phi_mul_reg_406));
    tmp_111_fu_461_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_110_fu_455_p2),64));
    tmp_112_fu_488_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_31_fu_481_p3),16));
    tmp_113_fu_493_p3 <= (i_reg_394 & ap_const_lv3_0);
    tmp_114_fu_501_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_113_fu_493_p3),64));
    tmp_116_fu_466_p2 <= std_logic_vector(unsigned(ap_const_lv10_2) + unsigned(phi_mul_reg_406));
    tmp_117_fu_472_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_116_fu_466_p2),64));
    tmp_118_fu_510_p3 <= (tmp_167_fu_506_p1 & grp_fu_418_p4);
    tmp_119_fu_523_p2 <= (tmp_113_fu_493_p3 or ap_const_lv9_1);
    tmp_120_fu_529_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_119_fu_523_p2),64));
    tmp_122_fu_544_p2 <= std_logic_vector(unsigned(ap_const_lv10_3) + unsigned(phi_mul_reg_406));
    tmp_123_fu_550_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_122_fu_544_p2),64));
    tmp_124_fu_569_p3 <= (a_q1 & ap_const_lv2_0);
    tmp_125_fu_555_p2 <= std_logic_vector(unsigned(ap_const_lv10_4) + unsigned(phi_mul_reg_406));
    tmp_126_fu_561_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_125_fu_555_p2),64));
    tmp_127_fu_595_p3 <= (tmp_168_fu_577_p1 & tmp_45_fu_589_p2);
    tmp_128_fu_608_p2 <= (tmp_113_reg_1022 or ap_const_lv9_2);
    tmp_129_fu_613_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_128_fu_608_p2),64));
    tmp_131_fu_618_p2 <= std_logic_vector(unsigned(ap_const_lv10_5) + unsigned(phi_mul_reg_406));
    tmp_132_fu_624_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_131_fu_618_p2),64));
    tmp_133_fu_899_p1 <= a_q0(1 - 1 downto 0);
    tmp_134_fu_644_p3 <= (tmp_169_fu_640_p1 & tmp_130_reg_1047);
    tmp_135_fu_656_p2 <= (tmp_113_reg_1022 or ap_const_lv9_3);
    tmp_136_fu_661_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_135_fu_656_p2),64));
    tmp_137_fu_666_p4 <= a_q1(7 downto 4);
    tmp_138_fu_629_p2 <= std_logic_vector(unsigned(ap_const_lv10_6) + unsigned(phi_mul_reg_406));
    tmp_139_fu_635_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_138_fu_629_p2),64));
    tmp_140_fu_951_p1 <= a_q1(6 - 1 downto 0);
    tmp_141_fu_680_p3 <= (tmp_170_fu_676_p1 & tmp_137_fu_666_p4);
    tmp_142_fu_693_p2 <= (tmp_113_reg_1022 or ap_const_lv9_4);
    tmp_143_fu_698_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_142_fu_693_p2),64));
    tmp_144_fu_967_p1 <= a_q1(3 - 1 downto 0);
    tmp_145_fu_739_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_171_reg_1062),8));
    tmp_146_fu_711_p2 <= std_logic_vector(unsigned(ap_const_lv10_7) + unsigned(phi_mul_reg_406));
    tmp_147_fu_717_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_146_fu_711_p2),64));
    tmp_148_fu_742_p3 <= (a_q1 & ap_const_lv1_0);
    tmp_149_fu_722_p2 <= std_logic_vector(unsigned(ap_const_lv10_8) + unsigned(phi_mul_reg_406));
    tmp_150_fu_728_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_149_fu_722_p2),64));
    tmp_151_fu_768_p3 <= (tmp_172_fu_750_p1 & tmp_52_fu_762_p2);
    tmp_152_fu_781_p2 <= (tmp_113_reg_1022 or ap_const_lv9_5);
    tmp_153_fu_786_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_152_fu_781_p2),64));
    tmp_155_fu_801_p2 <= std_logic_vector(unsigned(ap_const_lv10_9) + unsigned(phi_mul_reg_406));
    tmp_156_fu_807_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_155_fu_801_p2),64));
    tmp_157_fu_477_p1 <= a_q1(3 - 1 downto 0);
    tmp_158_fu_827_p3 <= (tmp_173_fu_823_p1 & tmp_154_reg_1082);
    tmp_159_fu_839_p2 <= (tmp_113_reg_1022 or ap_const_lv9_6);
    tmp_160_fu_844_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_159_fu_839_p2),64));
    tmp_161_fu_849_p4 <= a_q1(7 downto 5);
    tmp_162_fu_812_p2 <= std_logic_vector(unsigned(ap_const_lv10_A) + unsigned(phi_mul_reg_406));
    tmp_163_fu_818_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_162_fu_812_p2),64));
    tmp_164_fu_859_p3 <= (a_q0 & tmp_161_fu_849_p4);
    tmp_165_fu_872_p2 <= (tmp_113_reg_1022 or ap_const_lv9_7);
    tmp_166_fu_877_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_165_fu_872_p2),64));
    tmp_167_fu_506_p1 <= a_q0(6 - 1 downto 0);
    tmp_168_fu_577_p1 <= a_q0(1 - 1 downto 0);
    tmp_169_fu_640_p1 <= a_q1(4 - 1 downto 0);
    tmp_170_fu_676_p1 <= a_q0(7 - 1 downto 0);
    tmp_172_fu_750_p1 <= a_q0(2 - 1 downto 0);
    tmp_173_fu_823_p1 <= a_q1(5 - 1 downto 0);
    tmp_180_cast_fu_894_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_101_fu_886_p3),16));
    tmp_188_cast_fu_946_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_104_fu_939_p3),16));
    tmp_193_cast_fu_962_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_106_fu_955_p3),16));
    tmp_209_cast_fu_518_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_118_fu_510_p3),16));
    tmp_223_cast_fu_603_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_127_fu_595_p3),16));
    tmp_232_cast_fu_651_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_134_fu_644_p3),16));
    tmp_241_cast_fu_688_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_141_fu_680_p3),16));
    tmp_255_cast_fu_776_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_151_fu_768_p3),16));
    tmp_264_cast_fu_834_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_158_fu_827_p3),16));
    tmp_272_cast_fu_867_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_164_fu_859_p3),16));
    tmp_29_fu_971_p3 <= (tmp_144_fu_967_p1 & a_q0);
    tmp_31_fu_481_p3 <= (tmp_157_fu_477_p1 & a_load_6_reg_1007);
    tmp_37_fu_925_p3 <= (ap_const_lv2_0 & tmp_97_fu_913_p1);
    tmp_38_fu_933_p2 <= (tmp_37_fu_925_p3 or tmp_103_fu_917_p3);
    tmp_44_fu_581_p3 <= (ap_const_lv2_0 & tmp_100_fu_566_p1);
    tmp_45_fu_589_p2 <= (tmp_44_fu_581_p3 or tmp_124_fu_569_p3);
    tmp_51_fu_754_p3 <= (ap_const_lv1_0 & tmp_145_fu_739_p1);
    tmp_52_fu_762_p2 <= (tmp_51_fu_754_p3 or tmp_148_fu_742_p3);
    tmp_97_fu_913_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_102_fu_903_p4),8));
    tmp_fu_882_p1 <= a_q1(4 - 1 downto 0);
end behav;