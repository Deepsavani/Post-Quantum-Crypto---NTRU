-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity KeyExpansion is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    RoundKey_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    RoundKey_ce0 : OUT STD_LOGIC;
    RoundKey_we0 : OUT STD_LOGIC;
    RoundKey_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    RoundKey_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    RoundKey_address1 : OUT STD_LOGIC_VECTOR (7 downto 0);
    RoundKey_ce1 : OUT STD_LOGIC;
    RoundKey_we1 : OUT STD_LOGIC;
    RoundKey_d1 : OUT STD_LOGIC_VECTOR (7 downto 0);
    RoundKey_q1 : IN STD_LOGIC_VECTOR (7 downto 0);
    Key_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    Key_ce0 : OUT STD_LOGIC;
    Key_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    Key_address1 : OUT STD_LOGIC_VECTOR (4 downto 0);
    Key_ce1 : OUT STD_LOGIC;
    Key_q1 : IN STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of KeyExpansion is 
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
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv6_8 : STD_LOGIC_VECTOR (5 downto 0) := "001000";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv5_2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_const_lv5_3 : STD_LOGIC_VECTOR (4 downto 0) := "00011";
    constant ap_const_lv6_3C : STD_LOGIC_VECTOR (5 downto 0) := "111100";
    constant ap_const_lv8_FC : STD_LOGIC_VECTOR (7 downto 0) := "11111100";
    constant ap_const_lv8_FD : STD_LOGIC_VECTOR (7 downto 0) := "11111101";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv8_FE : STD_LOGIC_VECTOR (7 downto 0) := "11111110";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";
    constant ap_const_lv8_E0 : STD_LOGIC_VECTOR (7 downto 0) := "11100000";
    constant ap_const_lv8_E1 : STD_LOGIC_VECTOR (7 downto 0) := "11100001";
    constant ap_const_lv8_E2 : STD_LOGIC_VECTOR (7 downto 0) := "11100010";
    constant ap_const_lv8_E3 : STD_LOGIC_VECTOR (7 downto 0) := "11100011";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv8_2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_const_lv8_3 : STD_LOGIC_VECTOR (7 downto 0) := "00000011";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal sbox_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal sbox_ce0 : STD_LOGIC;
    signal sbox_q0 : STD_LOGIC_VECTOR (7 downto 0);
    signal sbox_address1 : STD_LOGIC_VECTOR (7 downto 0);
    signal sbox_ce1 : STD_LOGIC;
    signal sbox_q1 : STD_LOGIC_VECTOR (7 downto 0);
    signal sbox_address2 : STD_LOGIC_VECTOR (7 downto 0);
    signal sbox_ce2 : STD_LOGIC;
    signal sbox_q2 : STD_LOGIC_VECTOR (7 downto 0);
    signal sbox_address3 : STD_LOGIC_VECTOR (7 downto 0);
    signal sbox_ce3 : STD_LOGIC;
    signal sbox_q3 : STD_LOGIC_VECTOR (7 downto 0);
    signal Rcon_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal Rcon_ce0 : STD_LOGIC;
    signal Rcon_q0 : STD_LOGIC_VECTOR (7 downto 0);
    signal reg_368 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal i_21_fu_379_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_21_reg_723 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_s_fu_389_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_s_reg_728 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_fu_373_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_250_fu_397_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_250_reg_734 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_252_fu_408_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_252_reg_744 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_254_fu_418_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_254_reg_754 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_256_fu_428_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_256_reg_764 : STD_LOGIC_VECTOR (63 downto 0);
    signal j_fu_439_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal j_reg_777 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal exitcond_fu_433_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_265_fu_473_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_265_reg_801 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_270_reg_809 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_272_fu_489_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_272_reg_814 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_22_fu_495_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal i_22_reg_822 : STD_LOGIC_VECTOR (5 downto 0);
    signal tempa_1_reg_827 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_3_reg_852 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_0_2_fu_551_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_0_2_reg_872 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_3_2_fu_583_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_3_2_reg_892 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_2_2_fu_589_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_2_2_reg_897 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_1_2_fu_596_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_1_2_reg_902 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_279_fu_623_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_279_reg_922 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_288_fu_688_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_288_reg_937 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal tmp_293_fu_694_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_293_reg_942 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_reg_346 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal i_1_reg_357 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal tmp_258_fu_453_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_260_fu_464_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_262_fu_506_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_264_fu_516_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_266_fu_521_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_271_fu_526_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_267_fu_530_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_268_fu_535_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_269_fu_540_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_273_fu_558_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_278_fu_568_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_282_fu_578_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_274_fu_602_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_275_fu_607_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_276_fu_612_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_287_fu_634_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_292_fu_644_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_280_fu_667_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_285_fu_683_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_290_fu_705_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_295_fu_715_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_283_fu_671_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_297_fu_385_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_251_fu_402_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_253_fu_413_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_255_fu_423_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_257_fu_447_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_259_fu_458_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_298_fu_469_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_261_fu_501_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_263_fu_511_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_0_fu_545_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_277_fu_563_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_281_fu_573_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_0_4_fu_617_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_286_fu_629_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_291_fu_639_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_1_4_fu_661_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_284_fu_678_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_2_4_fu_655_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tempa_3_4_fu_649_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_289_fu_700_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_294_fu_710_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (9 downto 0);

    component KeyExpansion_sbox IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (7 downto 0);
        address1 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR (7 downto 0);
        address2 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR (7 downto 0);
        address3 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce3 : IN STD_LOGIC;
        q3 : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;


    component KeyExpansion_Rcon IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;



begin
    sbox_U : component KeyExpansion_sbox
    generic map (
        DataWidth => 8,
        AddressRange => 256,
        AddressWidth => 8)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => sbox_address0,
        ce0 => sbox_ce0,
        q0 => sbox_q0,
        address1 => sbox_address1,
        ce1 => sbox_ce1,
        q1 => sbox_q1,
        address2 => sbox_address2,
        ce2 => sbox_ce2,
        q2 => sbox_q2,
        address3 => sbox_address3,
        ce3 => sbox_ce3,
        q3 => sbox_q3);

    Rcon_U : component KeyExpansion_Rcon
    generic map (
        DataWidth => 8,
        AddressRange => 11,
        AddressWidth => 4)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => Rcon_address0,
        ce0 => Rcon_ce0,
        q0 => Rcon_q0);





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


    i_1_reg_357_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_fu_373_p2 = ap_const_lv1_1))) then 
                i_1_reg_357 <= ap_const_lv6_8;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
                i_1_reg_357 <= i_22_reg_822;
            end if; 
        end if;
    end process;

    i_reg_346_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                i_reg_346 <= i_21_reg_723;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_346 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    reg_368_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                reg_368 <= RoundKey_q1;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                reg_368 <= RoundKey_q0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_21_reg_723 <= i_21_fu_379_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond_fu_433_p2 = ap_const_lv1_0))) then
                i_22_reg_822 <= i_22_fu_495_p2;
                    j_reg_777(7 downto 2) <= j_fu_439_p3(7 downto 2);
                tmp_265_reg_801 <= tmp_265_fu_473_p2;
                tmp_270_reg_809 <= i_1_reg_357(5 downto 3);
                tmp_272_reg_814 <= tmp_272_fu_489_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                tempa_0_2_reg_872 <= tempa_0_2_fu_551_p3;
                tempa_3_reg_852 <= RoundKey_q1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                tempa_1_2_reg_902 <= tempa_1_2_fu_596_p3;
                tempa_2_2_reg_897 <= tempa_2_2_fu_589_p3;
                tempa_3_2_reg_892 <= tempa_3_2_fu_583_p3;
                tmp_279_reg_922 <= tmp_279_fu_623_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                tempa_1_reg_827 <= RoundKey_q1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_fu_373_p2 = ap_const_lv1_0))) then
                    tmp_250_reg_734(4 downto 2) <= tmp_250_fu_397_p1(4 downto 2);
                    tmp_252_reg_744(4 downto 2) <= tmp_252_fu_408_p1(4 downto 2);
                    tmp_s_reg_728(4 downto 2) <= tmp_s_fu_389_p3(4 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                    tmp_254_reg_754(4 downto 2) <= tmp_254_fu_418_p1(4 downto 2);
                    tmp_256_reg_764(4 downto 2) <= tmp_256_fu_428_p1(4 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                tmp_288_reg_937 <= tmp_288_fu_688_p2;
                tmp_293_reg_942 <= tmp_293_fu_694_p2;
            end if;
        end if;
    end process;
    tmp_s_reg_728(1 downto 0) <= "00";
    tmp_250_reg_734(1 downto 0) <= "00";
    tmp_250_reg_734(63 downto 5) <= "00000000000000000000000000000000000000000000000000000000000";
    tmp_252_reg_744(1 downto 0) <= "01";
    tmp_252_reg_744(63 downto 5) <= "00000000000000000000000000000000000000000000000000000000000";
    tmp_254_reg_754(1 downto 0) <= "10";
    tmp_254_reg_754(63 downto 5) <= "00000000000000000000000000000000000000000000000000000000000";
    tmp_256_reg_764(1 downto 0) <= "11";
    tmp_256_reg_764(63 downto 5) <= "00000000000000000000000000000000000000000000000000000000000";
    j_reg_777(1 downto 0) <= "00";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_fu_373_p2, ap_CS_fsm_state5, exitcond_fu_433_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_fu_373_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond_fu_433_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXX";
        end case;
    end process;

    Key_address0_assign_proc : process(ap_CS_fsm_state2, tmp_250_fu_397_p1, tmp_254_fu_418_p1, ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            Key_address0 <= tmp_254_fu_418_p1(5 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            Key_address0 <= tmp_250_fu_397_p1(5 - 1 downto 0);
        else 
            Key_address0 <= "XXXXX";
        end if; 
    end process;


    Key_address1_assign_proc : process(ap_CS_fsm_state2, tmp_252_fu_408_p1, ap_CS_fsm_state3, tmp_256_fu_428_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            Key_address1 <= tmp_256_fu_428_p1(5 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            Key_address1 <= tmp_252_fu_408_p1(5 - 1 downto 0);
        else 
            Key_address1 <= "XXXXX";
        end if; 
    end process;


    Key_ce0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            Key_ce0 <= ap_const_logic_1;
        else 
            Key_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    Key_ce1_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            Key_ce1 <= ap_const_logic_1;
        else 
            Key_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    Rcon_address0 <= tmp_271_fu_526_p1(4 - 1 downto 0);

    Rcon_ce0_assign_proc : process(ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            Rcon_ce0 <= ap_const_logic_1;
        else 
            Rcon_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    RoundKey_address0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state8, tmp_250_reg_734, tmp_254_reg_754, ap_CS_fsm_state3, ap_CS_fsm_state5, ap_CS_fsm_state9, ap_CS_fsm_state4, ap_CS_fsm_state10, tmp_258_fu_453_p1, tmp_262_fu_506_p1, tmp_278_fu_568_p1, tmp_287_fu_634_p1, tmp_280_fu_667_p1, tmp_290_fu_705_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            RoundKey_address0 <= tmp_290_fu_705_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            RoundKey_address0 <= tmp_280_fu_667_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            RoundKey_address0 <= tmp_287_fu_634_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            RoundKey_address0 <= tmp_278_fu_568_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            RoundKey_address0 <= tmp_262_fu_506_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            RoundKey_address0 <= tmp_258_fu_453_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            RoundKey_address0 <= tmp_254_reg_754(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            RoundKey_address0 <= tmp_250_reg_734(8 - 1 downto 0);
        else 
            RoundKey_address0 <= "XXXXXXXX";
        end if; 
    end process;


    RoundKey_address1_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state8, tmp_252_reg_744, ap_CS_fsm_state3, tmp_256_reg_764, ap_CS_fsm_state5, ap_CS_fsm_state9, ap_CS_fsm_state4, ap_CS_fsm_state10, tmp_260_fu_464_p1, tmp_264_fu_516_p1, tmp_282_fu_578_p1, tmp_292_fu_644_p1, tmp_285_fu_683_p1, tmp_295_fu_715_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            RoundKey_address1 <= tmp_295_fu_715_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            RoundKey_address1 <= tmp_285_fu_683_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            RoundKey_address1 <= tmp_292_fu_644_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            RoundKey_address1 <= tmp_282_fu_578_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            RoundKey_address1 <= tmp_264_fu_516_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            RoundKey_address1 <= tmp_260_fu_464_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            RoundKey_address1 <= tmp_256_reg_764(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            RoundKey_address1 <= tmp_252_reg_744(8 - 1 downto 0);
        else 
            RoundKey_address1 <= "XXXXXXXX";
        end if; 
    end process;


    RoundKey_ce0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state8, ap_CS_fsm_state3, ap_CS_fsm_state5, ap_CS_fsm_state9, ap_CS_fsm_state4, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            RoundKey_ce0 <= ap_const_logic_1;
        else 
            RoundKey_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    RoundKey_ce1_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state8, ap_CS_fsm_state3, ap_CS_fsm_state5, ap_CS_fsm_state9, ap_CS_fsm_state4, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            RoundKey_ce1 <= ap_const_logic_1;
        else 
            RoundKey_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    RoundKey_d0_assign_proc : process(Key_q0, ap_CS_fsm_state3, tmp_279_reg_922, tmp_288_reg_937, ap_CS_fsm_state9, ap_CS_fsm_state4, ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            RoundKey_d0 <= tmp_288_reg_937;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            RoundKey_d0 <= tmp_279_reg_922;
        elsif (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            RoundKey_d0 <= Key_q0;
        else 
            RoundKey_d0 <= "XXXXXXXX";
        end if; 
    end process;


    RoundKey_d1_assign_proc : process(Key_q1, ap_CS_fsm_state3, ap_CS_fsm_state9, tmp_293_reg_942, ap_CS_fsm_state4, ap_CS_fsm_state10, tmp_283_fu_671_p2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            RoundKey_d1 <= tmp_293_reg_942;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            RoundKey_d1 <= tmp_283_fu_671_p2;
        elsif (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            RoundKey_d1 <= Key_q1;
        else 
            RoundKey_d1 <= "XXXXXXXX";
        end if; 
    end process;


    RoundKey_we0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state9, ap_CS_fsm_state4, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            RoundKey_we0 <= ap_const_logic_1;
        else 
            RoundKey_we0 <= ap_const_logic_0;
        end if; 
    end process;


    RoundKey_we1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state9, ap_CS_fsm_state4, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state9) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            RoundKey_we1 <= ap_const_logic_1;
        else 
            RoundKey_we1 <= ap_const_logic_0;
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

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state5, exitcond_fu_433_p2)
    begin
        if ((((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond_fu_433_p2 = ap_const_lv1_1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state5, exitcond_fu_433_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond_fu_433_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_fu_433_p2 <= "1" when (i_1_reg_357 = ap_const_lv6_3C) else "0";
    i_21_fu_379_p2 <= std_logic_vector(unsigned(i_reg_346) + unsigned(ap_const_lv4_1));
    i_22_fu_495_p2 <= std_logic_vector(unsigned(ap_const_lv6_1) + unsigned(i_1_reg_357));
    j_fu_439_p3 <= (i_1_reg_357 & ap_const_lv2_0);

    sbox_address0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state8, tmp_266_fu_521_p1, tmp_267_fu_530_p1, tmp_274_fu_602_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            sbox_address0 <= tmp_274_fu_602_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            sbox_address0 <= tmp_267_fu_530_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            sbox_address0 <= tmp_266_fu_521_p1(8 - 1 downto 0);
        else 
            sbox_address0 <= "XXXXXXXX";
        end if; 
    end process;


    sbox_address1_assign_proc : process(ap_CS_fsm_state7, ap_CS_fsm_state8, tmp_268_fu_535_p1, tmp_275_fu_607_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            sbox_address1 <= tmp_275_fu_607_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            sbox_address1 <= tmp_268_fu_535_p1(8 - 1 downto 0);
        else 
            sbox_address1 <= "XXXXXXXX";
        end if; 
    end process;


    sbox_address2_assign_proc : process(ap_CS_fsm_state7, ap_CS_fsm_state8, tmp_269_fu_540_p1, tmp_276_fu_612_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            sbox_address2 <= tmp_276_fu_612_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            sbox_address2 <= tmp_269_fu_540_p1(8 - 1 downto 0);
        else 
            sbox_address2 <= "XXXXXXXX";
        end if; 
    end process;

    sbox_address3 <= tmp_273_fu_558_p1(8 - 1 downto 0);

    sbox_ce0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            sbox_ce0 <= ap_const_logic_1;
        else 
            sbox_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    sbox_ce1_assign_proc : process(ap_CS_fsm_state7, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            sbox_ce1 <= ap_const_logic_1;
        else 
            sbox_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    sbox_ce2_assign_proc : process(ap_CS_fsm_state7, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            sbox_ce2 <= ap_const_logic_1;
        else 
            sbox_ce2 <= ap_const_logic_0;
        end if; 
    end process;


    sbox_ce3_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            sbox_ce3 <= ap_const_logic_1;
        else 
            sbox_ce3 <= ap_const_logic_0;
        end if; 
    end process;

    tempa_0_2_fu_551_p3 <= 
        tempa_0_fu_545_p2 when (tmp_265_reg_801(0) = '1') else 
        reg_368;
    tempa_0_4_fu_617_p3 <= 
        sbox_q3 when (tmp_272_reg_814(0) = '1') else 
        tempa_0_2_reg_872;
    tempa_0_fu_545_p2 <= (sbox_q0 xor Rcon_q0);
    tempa_1_2_fu_596_p3 <= 
        sbox_q0 when (tmp_265_reg_801(0) = '1') else 
        tempa_1_reg_827;
    tempa_1_4_fu_661_p3 <= 
        sbox_q0 when (tmp_272_reg_814(0) = '1') else 
        tempa_1_2_reg_902;
    tempa_2_2_fu_589_p3 <= 
        sbox_q1 when (tmp_265_reg_801(0) = '1') else 
        reg_368;
    tempa_2_4_fu_655_p3 <= 
        sbox_q1 when (tmp_272_reg_814(0) = '1') else 
        tempa_2_2_reg_897;
    tempa_3_2_fu_583_p3 <= 
        sbox_q2 when (tmp_265_reg_801(0) = '1') else 
        tempa_3_reg_852;
    tempa_3_4_fu_649_p3 <= 
        sbox_q2 when (tmp_272_reg_814(0) = '1') else 
        tempa_3_2_reg_892;
    tmp_250_fu_397_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_389_p3),64));
    tmp_251_fu_402_p2 <= (tmp_s_fu_389_p3 or ap_const_lv5_1);
    tmp_252_fu_408_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_251_fu_402_p2),64));
    tmp_253_fu_413_p2 <= (tmp_s_reg_728 or ap_const_lv5_2);
    tmp_254_fu_418_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_253_fu_413_p2),64));
    tmp_255_fu_423_p2 <= (tmp_s_reg_728 or ap_const_lv5_3);
    tmp_256_fu_428_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_255_fu_423_p2),64));
    tmp_257_fu_447_p2 <= std_logic_vector(signed(ap_const_lv8_FC) + signed(j_fu_439_p3));
    tmp_258_fu_453_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_257_fu_447_p2),64));
    tmp_259_fu_458_p2 <= std_logic_vector(signed(ap_const_lv8_FD) + signed(j_fu_439_p3));
    tmp_260_fu_464_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_259_fu_458_p2),64));
    tmp_261_fu_501_p2 <= std_logic_vector(signed(ap_const_lv8_FE) + signed(j_reg_777));
    tmp_262_fu_506_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_261_fu_501_p2),64));
    tmp_263_fu_511_p2 <= std_logic_vector(signed(ap_const_lv8_FF) + signed(j_reg_777));
    tmp_264_fu_516_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_263_fu_511_p2),64));
    tmp_265_fu_473_p2 <= "1" when (tmp_298_fu_469_p1 = ap_const_lv3_0) else "0";
    tmp_266_fu_521_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(RoundKey_q1),64));
    tmp_267_fu_530_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(RoundKey_q0),64));
    tmp_268_fu_535_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(RoundKey_q1),64));
    tmp_269_fu_540_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(reg_368),64));
    tmp_271_fu_526_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_270_reg_809),64));
    tmp_272_fu_489_p2 <= "1" when (tmp_298_fu_469_p1 = ap_const_lv3_4) else "0";
    tmp_273_fu_558_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tempa_0_2_fu_551_p3),64));
    tmp_274_fu_602_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tempa_1_2_fu_596_p3),64));
    tmp_275_fu_607_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tempa_2_2_fu_589_p3),64));
    tmp_276_fu_612_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tempa_3_2_fu_583_p3),64));
    tmp_277_fu_563_p2 <= std_logic_vector(signed(ap_const_lv8_E0) + signed(j_reg_777));
    tmp_278_fu_568_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_277_fu_563_p2),64));
    tmp_279_fu_623_p2 <= (tempa_0_4_fu_617_p3 xor RoundKey_q0);
    tmp_280_fu_667_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_reg_777),64));
    tmp_281_fu_573_p2 <= std_logic_vector(signed(ap_const_lv8_E1) + signed(j_reg_777));
    tmp_282_fu_578_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_281_fu_573_p2),64));
    tmp_283_fu_671_p2 <= (tempa_1_4_fu_661_p3 xor reg_368);
    tmp_284_fu_678_p2 <= (j_reg_777 or ap_const_lv8_1);
    tmp_285_fu_683_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_284_fu_678_p2),64));
    tmp_286_fu_629_p2 <= std_logic_vector(signed(ap_const_lv8_E2) + signed(j_reg_777));
    tmp_287_fu_634_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_286_fu_629_p2),64));
    tmp_288_fu_688_p2 <= (tempa_2_4_fu_655_p3 xor RoundKey_q0);
    tmp_289_fu_700_p2 <= (j_reg_777 or ap_const_lv8_2);
    tmp_290_fu_705_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_289_fu_700_p2),64));
    tmp_291_fu_639_p2 <= std_logic_vector(signed(ap_const_lv8_E3) + signed(j_reg_777));
    tmp_292_fu_644_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_291_fu_639_p2),64));
    tmp_293_fu_694_p2 <= (tempa_3_4_fu_649_p3 xor RoundKey_q1);
    tmp_294_fu_710_p2 <= (j_reg_777 or ap_const_lv8_3);
    tmp_295_fu_715_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_294_fu_710_p2),64));
    tmp_297_fu_385_p1 <= i_reg_346(3 - 1 downto 0);
    tmp_298_fu_469_p1 <= i_1_reg_357(3 - 1 downto 0);
    tmp_fu_373_p2 <= "1" when (i_reg_346 = ap_const_lv4_8) else "0";
    tmp_s_fu_389_p3 <= (tmp_297_fu_385_p1 & ap_const_lv2_0);
end behav;
