-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity poly_Rq_to_S3 is
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
    r_coeffs_address1 : OUT STD_LOGIC_VECTOR (9 downto 0);
    r_coeffs_ce1 : OUT STD_LOGIC;
    r_coeffs_we1 : OUT STD_LOGIC;
    r_coeffs_d1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    r_coeffs_q1 : IN STD_LOGIC_VECTOR (15 downto 0);
    a_coeffs_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_coeffs_ce0 : OUT STD_LOGIC;
    a_coeffs_q0 : IN STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of poly_Rq_to_S3 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (7 downto 0) := "00000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (7 downto 0) := "00001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (7 downto 0) := "00010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (7 downto 0) := "00100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (7 downto 0) := "01000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv64_2BC : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010111100";
    constant ap_const_lv10_2BD : STD_LOGIC_VECTOR (9 downto 0) := "1010111101";
    constant ap_const_lv10_1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv13_0 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000000";
    constant ap_const_lv16_6000 : STD_LOGIC_VECTOR (15 downto 0) := "0110000000000000";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv3_5 : STD_LOGIC_VECTOR (2 downto 0) := "101";
    constant ap_const_lv3_7 : STD_LOGIC_VECTOR (2 downto 0) := "111";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv16_1 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_13_fu_157_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_13_reg_753 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_s_fu_163_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_reg_758 : STD_LOGIC_VECTOR (63 downto 0);
    signal exitcond1_fu_151_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal r_coeffs_addr_reg_768 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_234_reg_774 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal fold2_i_cast_fu_353_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal fold2_i_cast_reg_779 : STD_LOGIC_VECTOR (1 downto 0);
    signal i_14_fu_440_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_14_reg_787 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal r_coeffs_addr_21_reg_792 : STD_LOGIC_VECTOR (9 downto 0);
    signal exitcond_fu_434_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_263_i8_cast_reg_798 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal fold1_i9_cast_fu_635_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal fold1_i9_cast_reg_803 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_230_reg_809 : STD_LOGIC_VECTOR (1 downto 0);
    signal i_reg_129 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal i_1_reg_140 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal tmp_227_fu_446_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_226_fu_192_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_270_i_fu_427_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_235_fu_168_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_224_fu_178_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_225_fu_186_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_223_fu_203_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_228_fu_199_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_i_cast_35_fu_217_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_i_cast_fu_213_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal r_fu_227_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_232_fu_233_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_233_fu_257_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_fu_247_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal fold_i_cast_fu_275_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_262_i_cast_fu_281_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_261_i_cast_fu_243_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal r_7_fu_285_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_236_fu_261_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_205_fu_265_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_231_fu_221_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_207_fu_307_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_206_fu_301_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal fold1_i_cast_fu_317_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_264_i_cast_fu_323_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_263_i_cast_fu_291_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal r_8_fu_327_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_208_fu_343_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_266_i_cast_fu_362_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_265_i_cast_fu_359_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal r_9_fu_365_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal t_fu_371_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_237_fu_377_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_cast_fu_385_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_267_i_fu_393_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal not_tmp_87_i_fu_403_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_268_i_cast_cast_fu_409_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_269_i_fu_417_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_267_i_cast_fu_399_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_269_i_cast_fu_423_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_239_fu_457_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_246_fu_477_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_247_fu_489_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_238_fu_451_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_212_fu_461_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_244_fu_469_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal a_assign_1_fu_505_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_240_fu_517_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal a_assign_1_cast_fu_511_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_i1_cast_fu_527_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_i2_cast_fu_531_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal r_10_fu_541_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_242_fu_547_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_215_fu_481_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_245_fu_473_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_216_fu_493_p3 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_248_fu_501_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_218_fu_561_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_219_fu_567_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal fold_i5_cast_fu_593_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_261_i4_cast_fu_557_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_262_i6_cast_fu_599_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal r_11_fu_603_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_221_fu_587_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_220_fu_577_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_241_fu_535_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_222_fu_619_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_229_fu_625_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_264_i1_cast_fu_651_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal r_12_fu_654_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_243_fu_659_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal fold2_i1_cast_fu_673_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_265_i1_cast_fu_669_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_266_i1_cast_fu_677_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal r_13_fu_681_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal t_1_fu_687_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_249_fu_693_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_5_cast_fu_701_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_267_i1_fu_709_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal not_tmp_87_i1_fu_719_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_268_i1_cast_cast_fu_725_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_269_i1_fu_733_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_267_i1_cast_fu_715_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_269_i1_cast_fu_739_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (7 downto 0);


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


    i_1_reg_140_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                i_1_reg_140 <= i_14_reg_787;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                i_1_reg_140 <= ap_const_lv10_0;
            end if; 
        end if;
    end process;

    i_reg_129_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                i_reg_129 <= i_13_reg_753;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_129 <= ap_const_lv10_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                fold1_i9_cast_reg_803 <= fold1_i9_cast_fu_635_p2;
                tmp_230_reg_809 <= r_11_fu_603_p2(3 downto 2);
                tmp_263_i8_cast_reg_798 <= r_11_fu_603_p2(5 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                fold2_i_cast_reg_779 <= fold2_i_cast_fu_353_p2;
                tmp_234_reg_774 <= r_8_fu_327_p2(3 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_13_reg_753 <= i_13_fu_157_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                i_14_reg_787 <= i_14_fu_440_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_434_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                r_coeffs_addr_21_reg_792 <= tmp_227_fu_446_p1(10 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_151_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    tmp_s_reg_758(9 downto 0) <= tmp_s_fu_163_p1(9 downto 0);
            end if;
        end if;
    end process;
    tmp_s_reg_758(63 downto 10) <= "000000000000000000000000000000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_151_p2, ap_CS_fsm_state6, exitcond_fu_434_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond1_fu_151_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                if (((exitcond_fu_434_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when others =>  
                ap_NS_fsm <= "XXXXXXXX";
        end case;
    end process;
    a_assign_1_cast_fu_511_p2 <= std_logic_vector(unsigned(tmp_212_fu_461_p3) + unsigned(tmp_244_fu_469_p1));
    a_assign_1_fu_505_p2 <= std_logic_vector(unsigned(r_coeffs_q0) + unsigned(tmp_238_fu_451_p2));
    a_coeffs_address0 <= tmp_s_fu_163_p1(10 - 1 downto 0);

    a_coeffs_ce0_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
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

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state6, exitcond_fu_434_p2)
    begin
        if ((((exitcond_fu_434_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state6, exitcond_fu_434_p2)
    begin
        if (((exitcond_fu_434_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_5_cast_fu_701_p3 <= 
        ap_const_lv3_7 when (tmp_249_fu_693_p3(0) = '1') else 
        ap_const_lv3_0;
    c_cast_fu_385_p3 <= 
        ap_const_lv3_7 when (tmp_237_fu_377_p3(0) = '1') else 
        ap_const_lv3_0;
    exitcond1_fu_151_p2 <= "1" when (i_reg_129 = ap_const_lv10_2BD) else "0";
    exitcond_fu_434_p2 <= "1" when (i_1_reg_140 = ap_const_lv10_2BD) else "0";
    fold1_i9_cast_fu_635_p2 <= std_logic_vector(unsigned(tmp_222_fu_619_p2) + unsigned(tmp_229_fu_625_p4));
    fold1_i_cast_fu_317_p2 <= std_logic_vector(unsigned(tmp_207_fu_307_p4) + unsigned(tmp_206_fu_301_p2));
    fold2_i1_cast_fu_673_p2 <= std_logic_vector(unsigned(tmp_230_reg_809) + unsigned(fold1_i9_cast_reg_803));
    fold2_i_cast_fu_353_p2 <= std_logic_vector(unsigned(fold1_i_cast_fu_317_p2) + unsigned(tmp_208_fu_343_p4));
    fold_i5_cast_fu_593_p2 <= std_logic_vector(unsigned(tmp_218_fu_561_p2) + unsigned(tmp_219_fu_567_p4));
    fold_i_cast_fu_275_p2 <= std_logic_vector(unsigned(tmp_233_fu_257_p1) + unsigned(tmp_fu_247_p4));
    i_13_fu_157_p2 <= std_logic_vector(unsigned(i_reg_129) + unsigned(ap_const_lv10_1));
    i_14_fu_440_p2 <= std_logic_vector(unsigned(i_1_reg_140) + unsigned(ap_const_lv10_1));
    not_tmp_87_i1_fu_719_p2 <= (tmp_249_fu_693_p3 xor ap_const_lv1_1);
    not_tmp_87_i_fu_403_p2 <= (tmp_237_fu_377_p3 xor ap_const_lv1_1);
    r_10_fu_541_p2 <= std_logic_vector(unsigned(tmp_i1_cast_fu_527_p1) + unsigned(tmp_i2_cast_fu_531_p1));
    r_11_fu_603_p2 <= std_logic_vector(unsigned(tmp_261_i4_cast_fu_557_p1) + unsigned(tmp_262_i6_cast_fu_599_p1));
    r_12_fu_654_p2 <= std_logic_vector(unsigned(tmp_263_i8_cast_reg_798) + unsigned(tmp_264_i1_cast_fu_651_p1));
    r_13_fu_681_p2 <= std_logic_vector(unsigned(tmp_265_i1_cast_fu_669_p1) + unsigned(tmp_266_i1_cast_fu_677_p1));
    r_7_fu_285_p2 <= std_logic_vector(unsigned(tmp_262_i_cast_fu_281_p1) + unsigned(tmp_261_i_cast_fu_243_p1));
    r_8_fu_327_p2 <= std_logic_vector(unsigned(tmp_264_i_cast_fu_323_p1) + unsigned(tmp_263_i_cast_fu_291_p4));
    r_9_fu_365_p2 <= std_logic_vector(unsigned(tmp_266_i_cast_fu_362_p1) + unsigned(tmp_265_i_cast_fu_359_p1));
    r_coeffs_addr_reg_768 <= ap_const_lv64_2BC(10 - 1 downto 0);

    r_coeffs_address0_assign_proc : process(ap_CS_fsm_state2, tmp_s_reg_758, r_coeffs_addr_reg_768, ap_CS_fsm_state6, ap_CS_fsm_state3, ap_CS_fsm_state5, tmp_227_fu_446_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address0 <= tmp_227_fu_446_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_address0 <= r_coeffs_addr_reg_768;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            r_coeffs_address0 <= tmp_s_reg_758(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            r_coeffs_address0 <= ap_const_lv64_2BC(10 - 1 downto 0);
        else 
            r_coeffs_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_address1_assign_proc : process(ap_CS_fsm_state6, r_coeffs_addr_21_reg_792, ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_address1 <= r_coeffs_addr_21_reg_792;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            r_coeffs_address1 <= ap_const_lv64_2BC(10 - 1 downto 0);
        else 
            r_coeffs_address1 <= "XXXXXXXXXX";
        end if; 
    end process;


    r_coeffs_ce0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state6, ap_CS_fsm_state3, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            r_coeffs_ce0 <= ap_const_logic_1;
        else 
            r_coeffs_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_ce1_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state8))) then 
            r_coeffs_ce1 <= ap_const_logic_1;
        else 
            r_coeffs_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_d0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state5, tmp_226_fu_192_p2, tmp_270_i_fu_427_p2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            r_coeffs_d0 <= tmp_270_i_fu_427_p2;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            r_coeffs_d0 <= tmp_226_fu_192_p2;
        else 
            r_coeffs_d0 <= "XXXXXXXXXXXXXXXX";
        end if; 
    end process;

    r_coeffs_d1 <= (tmp_269_i1_cast_fu_739_p1 xor tmp_267_i1_cast_fu_715_p1);

    r_coeffs_we0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            r_coeffs_we0 <= ap_const_logic_1;
        else 
            r_coeffs_we0 <= ap_const_logic_0;
        end if; 
    end process;


    r_coeffs_we1_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            r_coeffs_we1 <= ap_const_logic_1;
        else 
            r_coeffs_we1 <= ap_const_logic_0;
        end if; 
    end process;

    r_fu_227_p2 <= std_logic_vector(unsigned(tmp_i_cast_35_fu_217_p1) + unsigned(tmp_i_cast_fu_213_p1));
    t_1_fu_687_p2 <= std_logic_vector(signed(ap_const_lv3_5) + signed(r_13_fu_681_p2));
    t_fu_371_p2 <= std_logic_vector(signed(ap_const_lv3_5) + signed(r_9_fu_365_p2));
    tmp_205_fu_265_p4 <= r_coeffs_q0(9 downto 8);
    tmp_206_fu_301_p2 <= std_logic_vector(unsigned(tmp_236_fu_261_p1) + unsigned(tmp_205_fu_265_p4));
    tmp_207_fu_307_p4 <= tmp_231_fu_221_p2(5 downto 4);
    tmp_208_fu_343_p4 <= r_7_fu_285_p2(3 downto 2);
    tmp_212_fu_461_p3 <= (tmp_239_fu_457_p1 & ap_const_lv1_0);
    tmp_215_fu_481_p3 <= (tmp_246_fu_477_p1 & ap_const_lv1_0);
    tmp_216_fu_493_p3 <= (tmp_247_fu_489_p1 & ap_const_lv1_0);
    tmp_218_fu_561_p2 <= std_logic_vector(unsigned(tmp_215_fu_481_p3) + unsigned(tmp_245_fu_473_p1));
    tmp_219_fu_567_p4 <= a_assign_1_fu_505_p2(11 downto 8);
    tmp_220_fu_577_p4 <= a_assign_1_fu_505_p2(9 downto 8);
    tmp_221_fu_587_p2 <= std_logic_vector(unsigned(tmp_216_fu_493_p3) + unsigned(tmp_248_fu_501_p1));
    tmp_222_fu_619_p2 <= std_logic_vector(unsigned(tmp_221_fu_587_p2) + unsigned(tmp_220_fu_577_p4));
    tmp_223_fu_203_p4 <= r_coeffs_q0(15 downto 8);
    tmp_224_fu_178_p3 <= (tmp_235_fu_168_p4 & ap_const_lv13_0);
    tmp_225_fu_186_p2 <= (tmp_224_fu_178_p3 xor ap_const_lv16_6000);
    tmp_226_fu_192_p2 <= std_logic_vector(unsigned(tmp_225_fu_186_p2) + unsigned(a_coeffs_q0));
    tmp_227_fu_446_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_1_reg_140),64));
    tmp_228_fu_199_p1 <= r_coeffs_q0(8 - 1 downto 0);
    tmp_229_fu_625_p4 <= tmp_241_fu_535_p2(5 downto 4);
    tmp_231_fu_221_p2 <= std_logic_vector(unsigned(tmp_223_fu_203_p4) + unsigned(tmp_228_fu_199_p1));
    tmp_232_fu_233_p4 <= r_fu_227_p2(8 downto 4);
    tmp_233_fu_257_p1 <= r_coeffs_q0(4 - 1 downto 0);
    tmp_235_fu_168_p4 <= a_coeffs_q0(14 downto 12);
    tmp_236_fu_261_p1 <= r_coeffs_q0(2 - 1 downto 0);
    tmp_237_fu_377_p3 <= t_fu_371_p2(2 downto 2);
    tmp_238_fu_451_p2 <= std_logic_vector(shift_left(unsigned(r_coeffs_q1),to_integer(unsigned('0' & ap_const_lv16_1(16-1 downto 0)))));
    tmp_239_fu_457_p1 <= r_coeffs_q1(7 - 1 downto 0);
    tmp_240_fu_517_p4 <= a_assign_1_fu_505_p2(15 downto 8);
    tmp_241_fu_535_p2 <= std_logic_vector(unsigned(a_assign_1_cast_fu_511_p2) + unsigned(tmp_240_fu_517_p4));
    tmp_242_fu_547_p4 <= r_10_fu_541_p2(8 downto 4);
    tmp_243_fu_659_p4 <= r_12_fu_654_p2(3 downto 2);
    tmp_244_fu_469_p1 <= r_coeffs_q0(8 - 1 downto 0);
    tmp_245_fu_473_p1 <= r_coeffs_q0(4 - 1 downto 0);
    tmp_246_fu_477_p1 <= r_coeffs_q1(3 - 1 downto 0);
    tmp_247_fu_489_p1 <= r_coeffs_q1(1 - 1 downto 0);
    tmp_248_fu_501_p1 <= r_coeffs_q0(2 - 1 downto 0);
    tmp_249_fu_693_p3 <= t_1_fu_687_p2(2 downto 2);
    tmp_261_i4_cast_fu_557_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_242_fu_547_p4),6));
    tmp_261_i_cast_fu_243_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_232_fu_233_p4),6));
    tmp_262_i6_cast_fu_599_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold_i5_cast_fu_593_p2),6));
    tmp_262_i_cast_fu_281_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold_i_cast_fu_275_p2),6));
    tmp_263_i_cast_fu_291_p4 <= r_7_fu_285_p2(5 downto 2);
    tmp_264_i1_cast_fu_651_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold1_i9_cast_reg_803),4));
    tmp_264_i_cast_fu_323_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold1_i_cast_fu_317_p2),4));
    tmp_265_i1_cast_fu_669_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_243_fu_659_p4),3));
    tmp_265_i_cast_fu_359_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_234_reg_774),3));
    tmp_266_i1_cast_fu_677_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold2_i1_cast_fu_673_p2),3));
    tmp_266_i_cast_fu_362_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(fold2_i_cast_reg_779),3));
    tmp_267_i1_cast_fu_715_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_267_i1_fu_709_p2),16));
    tmp_267_i1_fu_709_p2 <= (r_13_fu_681_p2 and c_5_cast_fu_701_p3);
    tmp_267_i_cast_fu_399_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_267_i_fu_393_p2),16));
    tmp_267_i_fu_393_p2 <= (r_9_fu_365_p2 and c_cast_fu_385_p3);
    tmp_268_i1_cast_cast_fu_725_p3 <= 
        ap_const_lv3_7 when (not_tmp_87_i1_fu_719_p2(0) = '1') else 
        ap_const_lv3_0;
    tmp_268_i_cast_cast_fu_409_p3 <= 
        ap_const_lv3_7 when (not_tmp_87_i_fu_403_p2(0) = '1') else 
        ap_const_lv3_0;
        tmp_269_i1_cast_fu_739_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_269_i1_fu_733_p2),16));

    tmp_269_i1_fu_733_p2 <= (tmp_268_i1_cast_cast_fu_725_p3 and t_1_fu_687_p2);
        tmp_269_i_cast_fu_423_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_269_i_fu_417_p2),16));

    tmp_269_i_fu_417_p2 <= (tmp_268_i_cast_cast_fu_409_p3 and t_fu_371_p2);
    tmp_270_i_fu_427_p2 <= (tmp_269_i_cast_fu_423_p1 xor tmp_267_i_cast_fu_399_p1);
    tmp_fu_247_p4 <= r_coeffs_q0(11 downto 8);
    tmp_i1_cast_fu_527_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_240_fu_517_p4),9));
    tmp_i2_cast_fu_531_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(a_assign_1_cast_fu_511_p2),9));
    tmp_i_cast_35_fu_217_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_228_fu_199_p1),9));
    tmp_i_cast_fu_213_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_223_fu_203_p4),9));
    tmp_s_fu_163_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_129),64));
end behav;
