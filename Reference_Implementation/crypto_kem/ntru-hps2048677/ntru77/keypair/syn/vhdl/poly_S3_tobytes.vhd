-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity poly_S3_tobytes is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    msg_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    msg_ce0 : OUT STD_LOGIC;
    msg_we0 : OUT STD_LOGIC;
    msg_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    msg_offset : IN STD_LOGIC_VECTOR (9 downto 0);
    a_coeffs_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_coeffs_ce0 : OUT STD_LOGIC;
    a_coeffs_q0 : IN STD_LOGIC_VECTOR (15 downto 0);
    a_coeffs_address1 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_coeffs_ce1 : OUT STD_LOGIC;
    a_coeffs_q1 : IN STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of poly_S3_tobytes is 
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
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv64_2A3 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000001010100011";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv8_87 : STD_LOGIC_VECTOR (7 downto 0) := "10000111";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv10_4 : STD_LOGIC_VECTOR (9 downto 0) := "0000000100";
    constant ap_const_lv10_3 : STD_LOGIC_VECTOR (9 downto 0) := "0000000011";
    constant ap_const_lv10_2 : STD_LOGIC_VECTOR (9 downto 0) := "0000000010";
    constant ap_const_lv8_2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_const_lv10_1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_const_lv9_87 : STD_LOGIC_VECTOR (8 downto 0) := "010000111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal tmp_162_fu_139_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_162_reg_339 : STD_LOGIC_VECTOR (8 downto 0);
    signal i_9_fu_153_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_9_reg_348 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_fu_167_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_reg_353 : STD_LOGIC_VECTOR (9 downto 0);
    signal exitcond_fu_147_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal c_1_fu_221_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal c_1_reg_375 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal sum_fu_241_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal sum_reg_386 : STD_LOGIC_VECTOR (8 downto 0);
    signal c_2_fu_260_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal c_2_reg_391 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal c_3_fu_294_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal c_3_reg_407 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_180_fu_300_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_180_reg_413 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_reg_127 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal tmp_157_fu_179_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_160_fu_190_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_164_fu_232_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_168_fu_271_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_170_fu_276_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum_cast_fu_320_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum2_cast_fu_334_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal c_4_fu_314_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_166_fu_324_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl7_fu_159_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal i_cast1_fu_143_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_s_fu_173_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_159_fu_184_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_173_fu_199_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal p_shl6_fu_203_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal c_fu_195_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_158_fu_211_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_174_fu_217_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_163_fu_227_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_236_cast_fu_237_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_175_fu_246_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_176_fu_256_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_161_fu_251_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_167_fu_266_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_177_fu_280_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_178_fu_290_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_165_fu_285_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_179_fu_304_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_169_fu_309_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal sum2_fu_329_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (6 downto 0);


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


    i_reg_127_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                i_reg_127 <= i_9_reg_348;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_127 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                c_1_reg_375 <= c_1_fu_221_p2;
                sum_reg_386 <= sum_fu_241_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                c_2_reg_391 <= c_2_fu_260_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                c_3_reg_407 <= c_3_fu_294_p2;
                tmp_180_reg_413 <= tmp_180_fu_300_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_9_reg_348 <= i_9_fu_153_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                tmp_162_reg_339 <= tmp_162_fu_139_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_147_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                tmp_reg_353 <= tmp_fu_167_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond_fu_147_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond_fu_147_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
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
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXXXX";
        end case;
    end process;

    a_coeffs_address0_assign_proc : process(ap_CS_fsm_state2, exitcond_fu_147_p2, ap_CS_fsm_state4, tmp_157_fu_179_p1, tmp_168_fu_271_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            a_coeffs_address0 <= tmp_168_fu_271_p1(10 - 1 downto 0);
        elsif (((exitcond_fu_147_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            a_coeffs_address0 <= ap_const_lv64_2A3(10 - 1 downto 0);
        elsif (((exitcond_fu_147_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            a_coeffs_address0 <= tmp_157_fu_179_p1(10 - 1 downto 0);
        else 
            a_coeffs_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_coeffs_address1_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state4, tmp_160_fu_190_p1, tmp_164_fu_232_p1, tmp_170_fu_276_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            a_coeffs_address1 <= tmp_170_fu_276_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            a_coeffs_address1 <= tmp_164_fu_232_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            a_coeffs_address1 <= tmp_160_fu_190_p1(10 - 1 downto 0);
        else 
            a_coeffs_address1 <= "XXXXXXXXXX";
        end if; 
    end process;


    a_coeffs_ce0_assign_proc : process(ap_CS_fsm_state2, exitcond_fu_147_p2, ap_CS_fsm_state4)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or ((exitcond_fu_147_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((exitcond_fu_147_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            a_coeffs_ce0 <= ap_const_logic_1;
        else 
            a_coeffs_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    a_coeffs_ce1_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3, ap_CS_fsm_state4)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            a_coeffs_ce1 <= ap_const_logic_1;
        else 
            a_coeffs_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state7) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_1_fu_221_p2 <= std_logic_vector(unsigned(tmp_158_fu_211_p2) + unsigned(tmp_174_fu_217_p1));
    c_2_fu_260_p2 <= std_logic_vector(unsigned(tmp_176_fu_256_p1) + unsigned(tmp_161_fu_251_p2));
    c_3_fu_294_p2 <= std_logic_vector(unsigned(tmp_178_fu_290_p1) + unsigned(tmp_165_fu_285_p2));
    c_4_fu_314_p2 <= std_logic_vector(unsigned(tmp_180_reg_413) + unsigned(tmp_169_fu_309_p2));
    c_fu_195_p1 <= a_coeffs_q0(8 - 1 downto 0);
    exitcond_fu_147_p2 <= "1" when (i_reg_127 = ap_const_lv8_87) else "0";
    i_9_fu_153_p2 <= std_logic_vector(unsigned(i_reg_127) + unsigned(ap_const_lv8_1));
    i_cast1_fu_143_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_127),10));

    msg_address0_assign_proc : process(ap_CS_fsm_state6, sum_cast_fu_320_p1, sum2_cast_fu_334_p1, ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            msg_address0 <= sum2_cast_fu_334_p1(11 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            msg_address0 <= sum_cast_fu_320_p1(11 - 1 downto 0);
        else 
            msg_address0 <= "XXXXXXXXXXX";
        end if; 
    end process;


    msg_ce0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            msg_ce0 <= ap_const_logic_1;
        else 
            msg_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    msg_d0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7, c_4_fu_314_p2, tmp_166_fu_324_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            msg_d0 <= tmp_166_fu_324_p1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            msg_d0 <= c_4_fu_314_p2;
        else 
            msg_d0 <= "XXXXXXXX";
        end if; 
    end process;


    msg_we0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            msg_we0 <= ap_const_logic_1;
        else 
            msg_we0 <= ap_const_logic_0;
        end if; 
    end process;

    p_shl6_fu_203_p3 <= (tmp_173_fu_199_p1 & ap_const_lv2_0);
    p_shl7_fu_159_p3 <= (i_reg_127 & ap_const_lv2_0);
    sum2_cast_fu_334_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum2_fu_329_p2),64));
    sum2_fu_329_p2 <= std_logic_vector(unsigned(ap_const_lv9_87) + unsigned(tmp_162_reg_339));
    sum_cast_fu_320_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum_reg_386),64));
    sum_fu_241_p2 <= std_logic_vector(unsigned(tmp_236_cast_fu_237_p1) + unsigned(tmp_162_reg_339));
    tmp_157_fu_179_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_173_p2),64));
    tmp_158_fu_211_p2 <= std_logic_vector(unsigned(p_shl6_fu_203_p3) - unsigned(c_fu_195_p1));
    tmp_159_fu_184_p2 <= std_logic_vector(unsigned(ap_const_lv10_3) + unsigned(tmp_fu_167_p2));
    tmp_160_fu_190_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_159_fu_184_p2),64));
    tmp_161_fu_251_p2 <= std_logic_vector(unsigned(tmp_175_fu_246_p2) - unsigned(c_1_reg_375));
    tmp_162_fu_139_p1 <= msg_offset(9 - 1 downto 0);
    tmp_163_fu_227_p2 <= std_logic_vector(unsigned(ap_const_lv10_2) + unsigned(tmp_reg_353));
    tmp_164_fu_232_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_163_fu_227_p2),64));
    tmp_165_fu_285_p2 <= std_logic_vector(unsigned(tmp_177_fu_280_p2) - unsigned(c_2_reg_391));
    tmp_166_fu_324_p1 <= a_coeffs_q0(8 - 1 downto 0);
    tmp_167_fu_266_p2 <= std_logic_vector(unsigned(ap_const_lv10_1) + unsigned(tmp_reg_353));
    tmp_168_fu_271_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_167_fu_266_p2),64));
    tmp_169_fu_309_p2 <= std_logic_vector(unsigned(tmp_179_fu_304_p2) - unsigned(c_3_reg_407));
    tmp_170_fu_276_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_reg_353),64));
    tmp_173_fu_199_p1 <= a_coeffs_q0(6 - 1 downto 0);
    tmp_174_fu_217_p1 <= a_coeffs_q1(8 - 1 downto 0);
    tmp_175_fu_246_p2 <= std_logic_vector(shift_left(unsigned(c_1_reg_375),to_integer(unsigned('0' & ap_const_lv8_2(8-1 downto 0)))));
    tmp_176_fu_256_p1 <= a_coeffs_q1(8 - 1 downto 0);
    tmp_177_fu_280_p2 <= std_logic_vector(shift_left(unsigned(c_2_reg_391),to_integer(unsigned('0' & ap_const_lv8_2(8-1 downto 0)))));
    tmp_178_fu_290_p1 <= a_coeffs_q0(8 - 1 downto 0);
    tmp_179_fu_304_p2 <= std_logic_vector(shift_left(unsigned(c_3_reg_407),to_integer(unsigned('0' & ap_const_lv8_2(8-1 downto 0)))));
    tmp_180_fu_300_p1 <= a_coeffs_q1(8 - 1 downto 0);
    tmp_236_cast_fu_237_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_127),9));
    tmp_fu_167_p2 <= std_logic_vector(unsigned(p_shl7_fu_159_p3) + unsigned(i_cast1_fu_143_p1));
    tmp_s_fu_173_p2 <= std_logic_vector(unsigned(ap_const_lv10_4) + unsigned(tmp_fu_167_p2));
end behav;
