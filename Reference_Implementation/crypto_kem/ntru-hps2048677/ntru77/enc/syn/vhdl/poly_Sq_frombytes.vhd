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
    r_coeffs_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    r_coeffs_ce0 : OUT STD_LOGIC;
    r_coeffs_we0 : OUT STD_LOGIC;
    r_coeffs_d0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    r_coeffs_address1 : OUT STD_LOGIC_VECTOR (9 downto 0);
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
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv64_3A0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001110100000";
    constant ap_const_lv64_3A1 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001110100001";
    constant ap_const_lv64_2A3 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010100011";
    constant ap_const_lv64_39E : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001110011110";
    constant ap_const_lv64_39F : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001110011111";
    constant ap_const_lv64_2A2 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010100010";
    constant ap_const_lv64_39D : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001110011101";
    constant ap_const_lv64_39C : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001110011100";
    constant ap_const_lv64_2A1 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010100001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv64_2A0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010100000";
    constant ap_const_lv7_54 : STD_LOGIC_VECTOR (6 downto 0) := "1010100";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv10_1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_const_lv10_2 : STD_LOGIC_VECTOR (9 downto 0) := "0000000010";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv10_3 : STD_LOGIC_VECTOR (9 downto 0) := "0000000011";
    constant ap_const_lv10_4 : STD_LOGIC_VECTOR (9 downto 0) := "0000000100";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv10_5 : STD_LOGIC_VECTOR (9 downto 0) := "0000000101";
    constant ap_const_lv10_6 : STD_LOGIC_VECTOR (9 downto 0) := "0000000110";
    constant ap_const_lv10_7 : STD_LOGIC_VECTOR (9 downto 0) := "0000000111";
    constant ap_const_lv10_8 : STD_LOGIC_VECTOR (9 downto 0) := "0000001000";
    constant ap_const_lv10_B : STD_LOGIC_VECTOR (9 downto 0) := "0000001011";
    constant ap_const_lv10_9 : STD_LOGIC_VECTOR (9 downto 0) := "0000001001";
    constant ap_const_lv10_A : STD_LOGIC_VECTOR (9 downto 0) := "0000001010";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal tmp_101_fu_430_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_101_reg_973 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal exitcond_fu_424_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal a_load_6_reg_993 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_106_fu_479_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_106_reg_1008 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal tmp_114_reg_1018 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_fu_414_p4 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_123_reg_1033 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_164_reg_1048 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal next_mul_fu_719_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal next_mul_reg_1063 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal tmp_147_reg_1068 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal tmp_126_fu_885_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_126_reg_1093 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal tmp_133_fu_937_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_133_reg_1103 : STD_LOGIC_VECTOR (5 downto 0);
    signal i_reg_380 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal phi_mul_reg_392 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_102_fu_436_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_104_fu_447_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_110_fu_458_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_107_fu_487_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_113_fu_515_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_116_fu_536_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_119_fu_547_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_122_fu_599_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_125_fu_610_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_132_fu_621_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_129_fu_647_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_136_fu_684_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_140_fu_703_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_143_fu_714_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_146_fu_772_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_149_fu_793_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_156_fu_804_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_153_fu_830_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_159_fu_863_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal tmp_105_fu_474_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_209_cast_fu_504_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_223_cast_fu_589_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_232_cast_fu_637_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_241_cast_fu_674_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_255_cast_fu_762_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_264_cast_fu_820_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_272_cast_fu_853_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_180_cast_fu_880_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_188_cast_fu_932_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_193_cast_fu_948_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_100_fu_965_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_103_fu_441_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_109_fu_452_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_150_fu_463_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_31_fu_467_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_160_fu_492_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_fu_404_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_111_fu_496_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_112_fu_509_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_115_fu_530_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_118_fu_541_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_93_fu_552_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_37_fu_567_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_117_fu_555_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_161_fu_563_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_38_fu_575_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_120_fu_581_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_121_fu_594_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_124_fu_604_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_131_fu_615_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_162_fu_626_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_127_fu_630_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_128_fu_642_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_163_fu_662_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_130_fu_652_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_134_fu_666_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_135_fu_679_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_139_fu_697_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_142_fu_708_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_138_fu_725_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_44_fu_740_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_141_fu_728_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_165_fu_736_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_45_fu_748_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_144_fu_754_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_145_fu_767_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_148_fu_787_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_155_fu_798_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_166_fu_809_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_151_fu_813_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_152_fu_825_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_154_fu_835_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_157_fu_845_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_158_fu_858_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_fu_868_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_94_fu_872_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_95_fu_889_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_90_fu_899_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_26_fu_911_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_96_fu_903_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_27_fu_919_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_97_fu_925_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_99_fu_941_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_137_fu_953_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_29_fu_957_p3 : STD_LOGIC_VECTOR (10 downto 0);
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


    i_reg_380_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                i_reg_380 <= tmp_101_reg_973;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_380 <= ap_const_lv7_0;
            end if; 
        end if;
    end process;

    phi_mul_reg_392_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                phi_mul_reg_392 <= next_mul_reg_1063;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                phi_mul_reg_392 <= ap_const_lv10_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                a_load_6_reg_993 <= a_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                next_mul_reg_1063 <= next_mul_fu_719_p2;
                tmp_147_reg_1068 <= a_q0(7 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                tmp_101_reg_973 <= tmp_101_fu_430_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                    tmp_106_reg_1008(9 downto 3) <= tmp_106_fu_479_p3(9 downto 3);
                tmp_114_reg_1018 <= a_q0(7 downto 6);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                tmp_123_reg_1033 <= a_q0(7 downto 1);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                tmp_126_reg_1093 <= tmp_126_fu_885_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then
                tmp_133_reg_1103 <= tmp_133_fu_937_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                tmp_164_reg_1048 <= a_q0(7 downto 7);
            end if;
        end if;
    end process;
    tmp_106_reg_1008(2 downto 0) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond_fu_424_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond_fu_424_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
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

    a_address0_assign_proc : process(ap_CS_fsm_state2, exitcond_fu_424_p2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state9, ap_CS_fsm_state10, tmp_102_fu_436_p1, tmp_110_fu_458_p1, tmp_119_fu_547_p1, tmp_132_fu_621_p1, tmp_143_fu_714_p1, tmp_156_fu_804_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            a_address0 <= ap_const_lv64_39C(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            a_address0 <= ap_const_lv64_39F(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            a_address0 <= tmp_156_fu_804_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            a_address0 <= tmp_143_fu_714_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            a_address0 <= tmp_132_fu_621_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            a_address0 <= tmp_119_fu_547_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            a_address0 <= tmp_110_fu_458_p1(10 - 1 downto 0);
        elsif (((exitcond_fu_424_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            a_address0 <= ap_const_lv64_3A0(10 - 1 downto 0);
        elsif (((exitcond_fu_424_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            a_address0 <= tmp_102_fu_436_p1(10 - 1 downto 0);
        else 
            a_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_address1_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state9, ap_CS_fsm_state10, tmp_104_fu_447_p1, tmp_116_fu_536_p1, tmp_125_fu_610_p1, tmp_140_fu_703_p1, tmp_149_fu_793_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            a_address1 <= ap_const_lv64_39D(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            a_address1 <= ap_const_lv64_39E(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            a_address1 <= tmp_149_fu_793_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            a_address1 <= tmp_140_fu_703_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            a_address1 <= tmp_125_fu_610_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            a_address1 <= tmp_116_fu_536_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            a_address1 <= tmp_104_fu_447_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            a_address1 <= ap_const_lv64_3A1(10 - 1 downto 0);
        else 
            a_address1 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_ce0_assign_proc : process(ap_CS_fsm_state2, exitcond_fu_424_p2, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state9, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6) or ((exitcond_fu_424_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((exitcond_fu_424_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
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

    exitcond_fu_424_p2 <= "1" when (i_reg_380 = ap_const_lv7_54) else "0";
    grp_fu_404_p4 <= a_q1(7 downto 3);
    grp_fu_414_p4 <= a_q0(7 downto 1);
    next_mul_fu_719_p2 <= std_logic_vector(unsigned(ap_const_lv10_B) + unsigned(phi_mul_reg_392));

    r_coeffs_address0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, ap_CS_fsm_state8, tmp_107_fu_487_p1, tmp_122_fu_599_p1, tmp_136_fu_684_p1, tmp_153_fu_830_p1, ap_CS_fsm_state11)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            r_coeffs_address0 <= ap_const_lv64_2A1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            r_coeffs_address0 <= ap_const_lv64_2A3(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_address0 <= tmp_153_fu_830_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address0 <= tmp_136_fu_684_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_address0 <= tmp_122_fu_599_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            r_coeffs_address0 <= tmp_107_fu_487_p1(10 - 1 downto 0);
        else 
            r_coeffs_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_address1_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10, ap_CS_fsm_state8, tmp_113_fu_515_p1, tmp_129_fu_647_p1, tmp_146_fu_772_p1, tmp_159_fu_863_p1, ap_CS_fsm_state11)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            r_coeffs_address1 <= ap_const_lv64_2A0(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            r_coeffs_address1 <= ap_const_lv64_2A2(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_address1 <= tmp_159_fu_863_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            r_coeffs_address1 <= tmp_146_fu_772_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address1 <= tmp_129_fu_647_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            r_coeffs_address1 <= tmp_113_fu_515_p1(10 - 1 downto 0);
        else 
            r_coeffs_address1 <= "XXXXXXXXXX";
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


    r_coeffs_d0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state9, ap_CS_fsm_state8, ap_CS_fsm_state11, tmp_105_fu_474_p1, tmp_223_cast_fu_589_p1, tmp_241_cast_fu_674_p1, tmp_264_cast_fu_820_p1, tmp_180_cast_fu_880_p1, tmp_193_cast_fu_948_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            r_coeffs_d0 <= tmp_193_cast_fu_948_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            r_coeffs_d0 <= tmp_180_cast_fu_880_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_d0 <= tmp_264_cast_fu_820_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_d0 <= tmp_241_cast_fu_674_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_d0 <= tmp_223_cast_fu_589_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            r_coeffs_d0 <= tmp_105_fu_474_p1;
        else 
            r_coeffs_d0 <= "XXXXXXXXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_d1_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state10, ap_CS_fsm_state8, ap_CS_fsm_state11, tmp_209_cast_fu_504_p1, tmp_232_cast_fu_637_p1, tmp_255_cast_fu_762_p1, tmp_272_cast_fu_853_p1, tmp_188_cast_fu_932_p1, tmp_100_fu_965_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            r_coeffs_d1 <= tmp_100_fu_965_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            r_coeffs_d1 <= tmp_188_cast_fu_932_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_d1 <= tmp_272_cast_fu_853_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            r_coeffs_d1 <= tmp_255_cast_fu_762_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_d1 <= tmp_232_cast_fu_637_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            r_coeffs_d1 <= tmp_209_cast_fu_504_p1;
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

    tmp_100_fu_965_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_29_fu_957_p3),16));
    tmp_101_fu_430_p2 <= std_logic_vector(unsigned(i_reg_380) + unsigned(ap_const_lv7_1));
    tmp_102_fu_436_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(phi_mul_reg_392),64));
    tmp_103_fu_441_p2 <= std_logic_vector(unsigned(ap_const_lv10_1) + unsigned(phi_mul_reg_392));
    tmp_104_fu_447_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_103_fu_441_p2),64));
    tmp_105_fu_474_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_31_fu_467_p3),16));
    tmp_106_fu_479_p3 <= (i_reg_380 & ap_const_lv3_0);
    tmp_107_fu_487_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_106_fu_479_p3),64));
    tmp_109_fu_452_p2 <= std_logic_vector(unsigned(ap_const_lv10_2) + unsigned(phi_mul_reg_392));
    tmp_110_fu_458_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_109_fu_452_p2),64));
    tmp_111_fu_496_p3 <= (tmp_160_fu_492_p1 & grp_fu_404_p4);
    tmp_112_fu_509_p2 <= (tmp_106_fu_479_p3 or ap_const_lv10_1);
    tmp_113_fu_515_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_112_fu_509_p2),64));
    tmp_115_fu_530_p2 <= std_logic_vector(unsigned(ap_const_lv10_3) + unsigned(phi_mul_reg_392));
    tmp_116_fu_536_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_115_fu_530_p2),64));
    tmp_117_fu_555_p3 <= (a_q1 & ap_const_lv2_0);
    tmp_118_fu_541_p2 <= std_logic_vector(unsigned(ap_const_lv10_4) + unsigned(phi_mul_reg_392));
    tmp_119_fu_547_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_118_fu_541_p2),64));
    tmp_120_fu_581_p3 <= (tmp_161_fu_563_p1 & tmp_38_fu_575_p2);
    tmp_121_fu_594_p2 <= (tmp_106_reg_1008 or ap_const_lv10_2);
    tmp_122_fu_599_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_121_fu_594_p2),64));
    tmp_124_fu_604_p2 <= std_logic_vector(unsigned(ap_const_lv10_5) + unsigned(phi_mul_reg_392));
    tmp_125_fu_610_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_124_fu_604_p2),64));
    tmp_126_fu_885_p1 <= a_q0(1 - 1 downto 0);
    tmp_127_fu_630_p3 <= (tmp_162_fu_626_p1 & tmp_123_reg_1033);
    tmp_128_fu_642_p2 <= (tmp_106_reg_1008 or ap_const_lv10_3);
    tmp_129_fu_647_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_128_fu_642_p2),64));
    tmp_130_fu_652_p4 <= a_q1(7 downto 4);
    tmp_131_fu_615_p2 <= std_logic_vector(unsigned(ap_const_lv10_6) + unsigned(phi_mul_reg_392));
    tmp_132_fu_621_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_131_fu_615_p2),64));
    tmp_133_fu_937_p1 <= a_q1(6 - 1 downto 0);
    tmp_134_fu_666_p3 <= (tmp_163_fu_662_p1 & tmp_130_fu_652_p4);
    tmp_135_fu_679_p2 <= (tmp_106_reg_1008 or ap_const_lv10_4);
    tmp_136_fu_684_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_135_fu_679_p2),64));
    tmp_137_fu_953_p1 <= a_q1(3 - 1 downto 0);
    tmp_138_fu_725_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_164_reg_1048),8));
    tmp_139_fu_697_p2 <= std_logic_vector(unsigned(ap_const_lv10_7) + unsigned(phi_mul_reg_392));
    tmp_140_fu_703_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_139_fu_697_p2),64));
    tmp_141_fu_728_p3 <= (a_q1 & ap_const_lv1_0);
    tmp_142_fu_708_p2 <= std_logic_vector(unsigned(ap_const_lv10_8) + unsigned(phi_mul_reg_392));
    tmp_143_fu_714_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_142_fu_708_p2),64));
    tmp_144_fu_754_p3 <= (tmp_165_fu_736_p1 & tmp_45_fu_748_p2);
    tmp_145_fu_767_p2 <= (tmp_106_reg_1008 or ap_const_lv10_5);
    tmp_146_fu_772_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_145_fu_767_p2),64));
    tmp_148_fu_787_p2 <= std_logic_vector(unsigned(ap_const_lv10_9) + unsigned(phi_mul_reg_392));
    tmp_149_fu_793_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_148_fu_787_p2),64));
    tmp_150_fu_463_p1 <= a_q1(3 - 1 downto 0);
    tmp_151_fu_813_p3 <= (tmp_166_fu_809_p1 & tmp_147_reg_1068);
    tmp_152_fu_825_p2 <= (tmp_106_reg_1008 or ap_const_lv10_6);
    tmp_153_fu_830_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_152_fu_825_p2),64));
    tmp_154_fu_835_p4 <= a_q1(7 downto 5);
    tmp_155_fu_798_p2 <= std_logic_vector(unsigned(ap_const_lv10_A) + unsigned(phi_mul_reg_392));
    tmp_156_fu_804_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_155_fu_798_p2),64));
    tmp_157_fu_845_p3 <= (a_q0 & tmp_154_fu_835_p4);
    tmp_158_fu_858_p2 <= (tmp_106_reg_1008 or ap_const_lv10_7);
    tmp_159_fu_863_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_158_fu_858_p2),64));
    tmp_160_fu_492_p1 <= a_q0(6 - 1 downto 0);
    tmp_161_fu_563_p1 <= a_q0(1 - 1 downto 0);
    tmp_162_fu_626_p1 <= a_q1(4 - 1 downto 0);
    tmp_163_fu_662_p1 <= a_q0(7 - 1 downto 0);
    tmp_165_fu_736_p1 <= a_q0(2 - 1 downto 0);
    tmp_166_fu_809_p1 <= a_q1(5 - 1 downto 0);
    tmp_180_cast_fu_880_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_94_fu_872_p3),16));
    tmp_188_cast_fu_932_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_97_fu_925_p3),16));
    tmp_193_cast_fu_948_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_99_fu_941_p3),16));
    tmp_209_cast_fu_504_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_111_fu_496_p3),16));
    tmp_223_cast_fu_589_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_120_fu_581_p3),16));
    tmp_232_cast_fu_637_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_127_fu_630_p3),16));
    tmp_241_cast_fu_674_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_134_fu_666_p3),16));
    tmp_255_cast_fu_762_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_144_fu_754_p3),16));
    tmp_264_cast_fu_820_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_151_fu_813_p3),16));
    tmp_26_fu_911_p3 <= (ap_const_lv2_0 & tmp_90_fu_899_p1);
    tmp_272_cast_fu_853_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_157_fu_845_p3),16));
    tmp_27_fu_919_p2 <= (tmp_96_fu_903_p3 or tmp_26_fu_911_p3);
    tmp_29_fu_957_p3 <= (tmp_137_fu_953_p1 & a_q0);
    tmp_31_fu_467_p3 <= (tmp_150_fu_463_p1 & a_load_6_reg_993);
    tmp_37_fu_567_p3 <= (ap_const_lv2_0 & tmp_93_fu_552_p1);
    tmp_38_fu_575_p2 <= (tmp_37_fu_567_p3 or tmp_117_fu_555_p3);
    tmp_44_fu_740_p3 <= (ap_const_lv1_0 & tmp_138_fu_725_p1);
    tmp_45_fu_748_p2 <= (tmp_44_fu_740_p3 or tmp_141_fu_728_p3);
    tmp_90_fu_899_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_95_fu_889_p4),8));
    tmp_93_fu_552_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_114_reg_1018),8));
    tmp_94_fu_872_p3 <= (tmp_fu_868_p1 & grp_fu_414_p4);
    tmp_95_fu_889_p4 <= a_q1(7 downto 6);
    tmp_96_fu_903_p3 <= (a_q0 & ap_const_lv2_0);
    tmp_97_fu_925_p3 <= (tmp_126_reg_1093 & tmp_27_fu_919_p2);
    tmp_99_fu_941_p3 <= (tmp_133_reg_1103 & grp_fu_404_p4);
    tmp_fu_868_p1 <= a_q1(4 - 1 downto 0);
end behav;