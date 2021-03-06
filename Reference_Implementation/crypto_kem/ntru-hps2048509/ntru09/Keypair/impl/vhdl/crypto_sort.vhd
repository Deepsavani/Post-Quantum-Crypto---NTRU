-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity crypto_sort is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    array_r_address0 : OUT STD_LOGIC_VECTOR (8 downto 0);
    array_r_ce0 : OUT STD_LOGIC;
    array_r_we0 : OUT STD_LOGIC;
    array_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    array_r_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    array_r_address1 : OUT STD_LOGIC_VECTOR (8 downto 0);
    array_r_ce1 : OUT STD_LOGIC;
    array_r_we1 : OUT STD_LOGIC;
    array_r_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    array_r_q1 : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of crypto_sort is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (12 downto 0) := "0000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (12 downto 0) := "0000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (12 downto 0) := "0000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (12 downto 0) := "0000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (12 downto 0) := "0000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (12 downto 0) := "0000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (12 downto 0) := "0001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (12 downto 0) := "0010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (12 downto 0) := "0100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (12 downto 0) := "1000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv60_100 : STD_LOGIC_VECTOR (59 downto 0) := "000000000000000000000000000000000000000000000000000100000000";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_lv62_100 : STD_LOGIC_VECTOR (61 downto 0) := "00000000000000000000000000000000000000000000000000000100000000";
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv60_0 : STD_LOGIC_VECTOR (59 downto 0) := "000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv61_1FC : STD_LOGIC_VECTOR (60 downto 0) := "0000000000000000000000000000000000000000000000000000111111100";
    constant ap_const_lv9_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_FFFFFFFF : STD_LOGIC_VECTOR (31 downto 0) := "11111111111111111111111111111111";
    constant ap_const_lv63_1FC : STD_LOGIC_VECTOR (62 downto 0) := "000000000000000000000000000000000000000000000000000000111111100";
    constant ap_const_lv32_3B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111011";
    constant ap_const_lv32_3D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111101";
    constant ap_const_lv64_1 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (12 downto 0) := "0000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal p_cast_fu_168_p1 : STD_LOGIC_VECTOR (62 downto 0);
    signal p_cast_reg_510 : STD_LOGIC_VECTOR (62 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal p_cast_cast9_fu_172_p1 : STD_LOGIC_VECTOR (61 downto 0);
    signal p_cast_cast9_reg_515 : STD_LOGIC_VECTOR (61 downto 0);
    signal tmp_s_fu_182_p2 : STD_LOGIC_VECTOR (60 downto 0);
    signal tmp_s_reg_523 : STD_LOGIC_VECTOR (60 downto 0);
    signal tmp_fu_176_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_40_fu_206_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal i_40_reg_531 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_223_fu_222_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_223_reg_536 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_221_fu_201_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal array_addr_reg_540 : STD_LOGIC_VECTOR (8 downto 0);
    signal array_addr_1_reg_546 : STD_LOGIC_VECTOR (8 downto 0);
    signal array_load_reg_552 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal array_load_1_reg_559 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_8_fu_284_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_8_reg_566 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_237_cast_fu_317_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_237_cast_reg_574 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal tmp_228_fu_306_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_41_fu_327_p3 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_41_reg_579 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_76_fu_345_p1 : STD_LOGIC_VECTOR (59 downto 0);
    signal tmp_233_fu_364_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_233_reg_592 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal tmp_231_fu_349_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_336_fu_370_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_336_reg_596 : STD_LOGIC_VECTOR (9 downto 0);
    signal array_addr_2_reg_601 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_77_fu_399_p1 : STD_LOGIC_VECTOR (61 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal array_addr_3_reg_620 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal tmp_234_fu_407_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_81_fu_436_p1 : STD_LOGIC_VECTOR (61 downto 0);
    signal tmp_81_reg_626 : STD_LOGIC_VECTOR (61 downto 0);
    signal tmp_238_fu_440_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal a_1_fu_498_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal a_1_reg_636 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal tmp_237_fu_504_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_237_reg_641 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_reg_85 : STD_LOGIC_VECTOR (59 downto 0);
    signal i_reg_97 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal r_reg_108 : STD_LOGIC_VECTOR (61 downto 0);
    signal i_1_reg_120 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_2_reg_132 : STD_LOGIC_VECTOR (63 downto 0);
    signal r4_reg_143 : STD_LOGIC_VECTOR (61 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal a1_reg_153 : STD_LOGIC_VECTOR (31 downto 0);
    signal sum_cast_fu_238_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_cast_fu_192_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum4_cast_fu_384_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum6_cast_fu_421_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_226_fu_290_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal tmp_227_fu_296_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_cast1_fu_164_p1 : STD_LOGIC_VECTOR (60 downto 0);
    signal i_cast_cast_cast_fu_197_p1 : STD_LOGIC_VECTOR (60 downto 0);
    signal tmp_330_fu_212_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_222_fu_216_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_331_fu_228_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_cast4_fu_188_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal sum_fu_232_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal c_fu_247_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_224_fu_251_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ab_fu_243_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_225_fu_256_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_6_fu_262_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_332_fu_268_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_7_fu_276_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal r_cast8_fu_302_p1 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_229_fu_311_p2 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_230_fu_321_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_333_fu_335_p4 : STD_LOGIC_VECTOR (58 downto 0);
    signal tmp_334_fu_354_p1 : STD_LOGIC_VECTOR (59 downto 0);
    signal tmp_232_fu_358_p2 : STD_LOGIC_VECTOR (59 downto 0);
    signal tmp_337_fu_374_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal sum4_fu_378_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_335_fu_389_p4 : STD_LOGIC_VECTOR (60 downto 0);
    signal r4_cast_fu_403_p1 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_338_fu_412_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal sum6_fu_416_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_340_fu_426_p4 : STD_LOGIC_VECTOR (60 downto 0);
    signal c_9_fu_452_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_235_fu_458_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ab_1_fu_446_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_236_fu_464_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_10_fu_470_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_339_fu_476_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_11_fu_484_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_12_fu_492_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (12 downto 0);


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


    a1_reg_153_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
                a1_reg_153 <= a_1_reg_636;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
                a1_reg_153 <= array_r_q1;
            end if; 
        end if;
    end process;

    i_1_reg_120_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_221_fu_201_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_1_reg_120 <= ap_const_lv64_0;
            elsif (((tmp_231_fu_349_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
                i_1_reg_120 <= i_41_reg_579;
            end if; 
        end if;
    end process;

    i_2_reg_132_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state11) and ((tmp_234_fu_407_p2 = ap_const_lv1_0) or (tmp_233_reg_592 = ap_const_lv1_0)))) then 
                i_2_reg_132 <= tmp_238_fu_440_p2;
            elsif (((tmp_228_fu_306_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state8))) then 
                i_2_reg_132 <= i_1_reg_120;
            end if; 
        end if;
    end process;

    i_reg_97_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_fu_176_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_reg_97 <= ap_const_lv9_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
                i_reg_97 <= i_40_reg_531;
            end if; 
        end if;
    end process;

    p_reg_85_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                p_reg_85(0) <= '0';
                p_reg_85(1) <= '0';
                p_reg_85(2) <= '0';
                p_reg_85(3) <= '0';
                p_reg_85(4) <= '0';
                p_reg_85(5) <= '0';
                p_reg_85(6) <= '0';
                p_reg_85(7) <= '0';
                p_reg_85(8) <= '1';
            elsif (((tmp_228_fu_306_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state8))) then 
                                p_reg_85(8 downto 0) <= tmp_76_fu_345_p1(8 downto 0);
            end if; 
        end if;
    end process;

    r4_reg_143_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
                                r4_reg_143(8 downto 0) <= tmp_81_reg_626(8 downto 0);
            elsif ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
                                r4_reg_143(8 downto 0) <= r_reg_108(8 downto 0);
            end if; 
        end if;
    end process;

    r_reg_108_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_221_fu_201_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                r_reg_108(0) <= '0';
                r_reg_108(1) <= '0';
                r_reg_108(2) <= '0';
                r_reg_108(3) <= '0';
                r_reg_108(4) <= '0';
                r_reg_108(5) <= '0';
                r_reg_108(6) <= '0';
                r_reg_108(7) <= '0';
                r_reg_108(8) <= '1';
            elsif (((tmp_231_fu_349_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
                                r_reg_108(8 downto 0) <= tmp_77_fu_399_p1(8 downto 0);
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state12)) then
                a_1_reg_636 <= a_1_fu_498_p2;
                tmp_237_reg_641 <= tmp_237_fu_504_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_221_fu_201_p2 = ap_const_lv1_1) and (tmp_223_fu_222_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                array_addr_1_reg_546 <= i_cast_fu_192_p1(9 - 1 downto 0);
                array_addr_reg_540 <= sum_cast_fu_238_p1(9 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_231_fu_349_p2 = ap_const_lv1_1) and (tmp_233_fu_364_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                array_addr_2_reg_601 <= sum4_cast_fu_384_p1(9 - 1 downto 0);
                tmp_336_reg_596 <= tmp_336_fu_370_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_234_fu_407_p2 = ap_const_lv1_1) and (tmp_233_reg_592 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state11))) then
                array_addr_3_reg_620 <= sum6_cast_fu_421_p1(9 - 1 downto 0);
                    tmp_81_reg_626(7 downto 0) <= tmp_81_fu_436_p1(7 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                array_load_1_reg_559 <= array_r_q1;
                array_load_reg_552 <= array_r_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                c_8_reg_566 <= c_8_fu_284_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                i_40_reg_531 <= i_40_fu_206_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_228_fu_306_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state8))) then
                i_41_reg_579 <= i_41_fu_327_p3;
                tmp_237_cast_reg_574 <= tmp_237_cast_fu_317_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                    p_cast_cast9_reg_515(8 downto 0) <= p_cast_cast9_fu_172_p1(8 downto 0);
                    p_cast_reg_510(8 downto 0) <= p_cast_fu_168_p1(8 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_221_fu_201_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                tmp_223_reg_536 <= tmp_223_fu_222_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_231_fu_349_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                tmp_233_reg_592 <= tmp_233_fu_364_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_fu_176_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                tmp_s_reg_523 <= tmp_s_fu_182_p2;
            end if;
        end if;
    end process;
    p_cast_reg_510(62 downto 9) <= "000000000000000000000000000000000000000000000000000000";
    p_cast_cast9_reg_515(61 downto 9) <= "00000000000000000000000000000000000000000000000000000";
    tmp_81_reg_626(61 downto 8) <= "000000000000000000000000000000000000000000000000000000";
    p_reg_85(59 downto 9) <= "000000000000000000000000000000000000000000000000000";
    r_reg_108(61 downto 9) <= "00000000000000000000000000000000000000000000000000000";
    r4_reg_143(61 downto 9) <= "00000000000000000000000000000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_fu_176_p2, ap_CS_fsm_state3, tmp_223_fu_222_p2, tmp_221_fu_201_p2, ap_CS_fsm_state8, tmp_228_fu_306_p2, tmp_233_fu_364_p2, tmp_233_reg_592, ap_CS_fsm_state9, tmp_231_fu_349_p2, ap_CS_fsm_state11, tmp_234_fu_407_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((tmp_fu_176_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((tmp_221_fu_201_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state8;
                elsif (((tmp_221_fu_201_p2 = ap_const_lv1_1) and (tmp_223_fu_222_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state8 => 
                if (((tmp_228_fu_306_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state8))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state9;
                end if;
            when ap_ST_fsm_state9 => 
                if (((tmp_231_fu_349_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                    ap_NS_fsm <= ap_ST_fsm_state8;
                elsif (((tmp_231_fu_349_p2 = ap_const_lv1_1) and (tmp_233_fu_364_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                    ap_NS_fsm <= ap_ST_fsm_state11;
                else
                    ap_NS_fsm <= ap_ST_fsm_state10;
                end if;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state11) and ((tmp_234_fu_407_p2 = ap_const_lv1_0) or (tmp_233_reg_592 = ap_const_lv1_0)))) then
                    ap_NS_fsm <= ap_ST_fsm_state9;
                else
                    ap_NS_fsm <= ap_ST_fsm_state12;
                end if;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state13;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXX";
        end case;
    end process;
    a_1_fu_498_p2 <= (c_12_fu_492_p2 xor a1_reg_153);
    ab_1_fu_446_p2 <= (array_r_q0 xor a1_reg_153);
    ab_fu_243_p2 <= (array_load_reg_552 xor array_load_1_reg_559);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_fu_176_p2)
    begin
        if ((((tmp_fu_176_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, tmp_fu_176_p2)
    begin
        if (((tmp_fu_176_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    array_r_address0_assign_proc : process(ap_CS_fsm_state3, array_addr_reg_540, array_addr_1_reg_546, ap_CS_fsm_state5, tmp_233_reg_592, array_addr_2_reg_601, ap_CS_fsm_state11, tmp_234_fu_407_p2, ap_CS_fsm_state7, sum_cast_fu_238_p1, sum6_cast_fu_421_p1)
    begin
        if (((tmp_233_reg_592 = ap_const_lv1_1) and (tmp_234_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state11))) then 
            array_r_address0 <= array_addr_2_reg_601;
        elsif (((tmp_234_fu_407_p2 = ap_const_lv1_1) and (tmp_233_reg_592 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state11))) then 
            array_r_address0 <= sum6_cast_fu_421_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            array_r_address0 <= array_addr_reg_540;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            array_r_address0 <= array_addr_1_reg_546;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            array_r_address0 <= sum_cast_fu_238_p1(9 - 1 downto 0);
        else 
            array_r_address0 <= "XXXXXXXXX";
        end if; 
    end process;


    array_r_address1_assign_proc : process(ap_CS_fsm_state3, array_addr_reg_540, ap_CS_fsm_state9, array_addr_3_reg_620, ap_CS_fsm_state13, i_cast_fu_192_p1, sum4_cast_fu_384_p1, ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            array_r_address1 <= array_addr_3_reg_620;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            array_r_address1 <= sum4_cast_fu_384_p1(9 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            array_r_address1 <= array_addr_reg_540;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            array_r_address1 <= i_cast_fu_192_p1(9 - 1 downto 0);
        else 
            array_r_address1 <= "XXXXXXXXX";
        end if; 
    end process;


    array_r_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state5, tmp_233_reg_592, ap_CS_fsm_state11, tmp_234_fu_407_p2, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state7) or ((tmp_233_reg_592 = ap_const_lv1_1) and (tmp_234_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state11)) or ((tmp_234_fu_407_p2 = ap_const_lv1_1) and (tmp_233_reg_592 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state11)))) then 
            array_r_ce0 <= ap_const_logic_1;
        else 
            array_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    array_r_ce1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state9, ap_CS_fsm_state13, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state13) or (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            array_r_ce1 <= ap_const_logic_1;
        else 
            array_r_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    array_r_d0_assign_proc : process(ap_CS_fsm_state5, tmp_233_reg_592, ap_CS_fsm_state11, tmp_234_fu_407_p2, ap_CS_fsm_state7, a1_reg_153, tmp_226_fu_290_p2, tmp_227_fu_296_p2)
    begin
        if (((tmp_233_reg_592 = ap_const_lv1_1) and (tmp_234_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state11))) then 
            array_r_d0 <= a1_reg_153;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            array_r_d0 <= tmp_227_fu_296_p2;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            array_r_d0 <= tmp_226_fu_290_p2;
        else 
            array_r_d0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;

    array_r_d1 <= tmp_237_reg_641;

    array_r_we0_assign_proc : process(tmp_223_reg_536, ap_CS_fsm_state5, tmp_233_reg_592, ap_CS_fsm_state11, tmp_234_fu_407_p2, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or ((tmp_223_reg_536 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7)) or ((tmp_233_reg_592 = ap_const_lv1_1) and (tmp_234_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state11)))) then 
            array_r_we0 <= ap_const_logic_1;
        else 
            array_r_we0 <= ap_const_logic_0;
        end if; 
    end process;


    array_r_we1_assign_proc : process(ap_CS_fsm_state13)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            array_r_we1 <= ap_const_logic_1;
        else 
            array_r_we1 <= ap_const_logic_0;
        end if; 
    end process;

    c_10_fu_470_p2 <= (tmp_236_fu_464_p2 xor c_9_fu_452_p2);
    c_11_fu_484_p3 <= 
        ap_const_lv32_FFFFFFFF when (tmp_339_fu_476_p3(0) = '1') else 
        ap_const_lv32_0;
    c_12_fu_492_p2 <= (c_11_fu_484_p3 and ab_1_fu_446_p2);
    c_6_fu_262_p2 <= (tmp_225_fu_256_p2 xor c_fu_247_p2);
    c_7_fu_276_p3 <= 
        ap_const_lv32_FFFFFFFF when (tmp_332_fu_268_p3(0) = '1') else 
        ap_const_lv32_0;
    c_8_fu_284_p2 <= (c_7_fu_276_p3 and ab_fu_243_p2);
    c_9_fu_452_p2 <= std_logic_vector(unsigned(array_r_q0) - unsigned(a1_reg_153));
    c_fu_247_p2 <= std_logic_vector(unsigned(array_load_reg_552) - unsigned(array_load_1_reg_559));
    i_40_fu_206_p2 <= std_logic_vector(unsigned(i_reg_97) + unsigned(ap_const_lv9_1));
    i_41_fu_327_p3 <= 
        i_1_reg_120 when (tmp_230_fu_321_p2(0) = '1') else 
        tmp_237_cast_fu_317_p1;
    i_cast4_fu_188_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_97),10));
    i_cast_cast_cast_fu_197_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_97),61));
    i_cast_fu_192_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_97),64));
    p_cast1_fu_164_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_reg_85),61));
    p_cast_cast9_fu_172_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_reg_85),62));
    p_cast_fu_168_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_reg_85),63));
    r4_cast_fu_403_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r4_reg_143),63));
    r_cast8_fu_302_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_reg_108),63));
    sum4_cast_fu_384_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum4_fu_378_p2),64));
    sum4_fu_378_p2 <= std_logic_vector(unsigned(tmp_336_fu_370_p1) + unsigned(tmp_337_fu_374_p1));
    sum6_cast_fu_421_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum6_fu_416_p2),64));
    sum6_fu_416_p2 <= std_logic_vector(unsigned(tmp_336_reg_596) + unsigned(tmp_338_fu_412_p1));
        sum_cast_fu_238_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(sum_fu_232_p2),64));

    sum_fu_232_p2 <= std_logic_vector(unsigned(tmp_331_fu_228_p1) + unsigned(i_cast4_fu_188_p1));
    tmp_221_fu_201_p2 <= "1" when (signed(i_cast_cast_cast_fu_197_p1) < signed(tmp_s_reg_523)) else "0";
    tmp_222_fu_216_p2 <= (tmp_330_fu_212_p1 and i_reg_97);
    tmp_223_fu_222_p2 <= "1" when (tmp_222_fu_216_p2 = ap_const_lv9_0) else "0";
    tmp_224_fu_251_p2 <= (c_fu_247_p2 xor array_load_reg_552);
    tmp_225_fu_256_p2 <= (tmp_224_fu_251_p2 and ab_fu_243_p2);
    tmp_226_fu_290_p2 <= (c_8_fu_284_p2 xor array_load_1_reg_559);
    tmp_227_fu_296_p2 <= (c_8_reg_566 xor array_r_q1);
    tmp_228_fu_306_p2 <= "1" when (unsigned(r_reg_108) > unsigned(p_cast_cast9_reg_515)) else "0";
    tmp_229_fu_311_p2 <= std_logic_vector(unsigned(ap_const_lv63_1FC) - unsigned(r_cast8_fu_302_p1));
    tmp_230_fu_321_p2 <= "1" when (signed(i_1_reg_120) > signed(tmp_237_cast_fu_317_p1)) else "0";
    tmp_231_fu_349_p2 <= "1" when (signed(i_2_reg_132) < signed(tmp_237_cast_reg_574)) else "0";
    tmp_232_fu_358_p2 <= (tmp_334_fu_354_p1 and p_reg_85);
    tmp_233_fu_364_p2 <= "1" when (tmp_232_fu_358_p2 = ap_const_lv60_0) else "0";
    tmp_234_fu_407_p2 <= "1" when (unsigned(r4_cast_fu_403_p1) > unsigned(p_cast_reg_510)) else "0";
    tmp_235_fu_458_p2 <= (c_9_fu_452_p2 xor array_r_q0);
    tmp_236_fu_464_p2 <= (tmp_235_fu_458_p2 and ab_1_fu_446_p2);
        tmp_237_cast_fu_317_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_229_fu_311_p2),64));

    tmp_237_fu_504_p2 <= (c_12_fu_492_p2 xor array_r_q0);
    tmp_238_fu_440_p2 <= std_logic_vector(unsigned(i_2_reg_132) + unsigned(ap_const_lv64_1));
    tmp_330_fu_212_p1 <= p_reg_85(9 - 1 downto 0);
    tmp_331_fu_228_p1 <= p_reg_85(10 - 1 downto 0);
    tmp_332_fu_268_p3 <= c_6_fu_262_p2(31 downto 31);
    tmp_333_fu_335_p4 <= p_reg_85(59 downto 1);
    tmp_334_fu_354_p1 <= i_2_reg_132(60 - 1 downto 0);
    tmp_335_fu_389_p4 <= r_reg_108(61 downto 1);
    tmp_336_fu_370_p1 <= i_2_reg_132(10 - 1 downto 0);
    tmp_337_fu_374_p1 <= p_reg_85(10 - 1 downto 0);
    tmp_338_fu_412_p1 <= r4_reg_143(10 - 1 downto 0);
    tmp_339_fu_476_p3 <= c_10_fu_470_p2(31 downto 31);
    tmp_340_fu_426_p4 <= r4_reg_143(61 downto 1);
    tmp_76_fu_345_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_333_fu_335_p4),60));
    tmp_77_fu_399_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_335_fu_389_p4),62));
    tmp_81_fu_436_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_340_fu_426_p4),62));
    tmp_fu_176_p2 <= "1" when (p_reg_85 = ap_const_lv60_0) else "0";
    tmp_s_fu_182_p2 <= std_logic_vector(unsigned(ap_const_lv61_1FC) - unsigned(p_cast1_fu_164_p1));
end behav;
