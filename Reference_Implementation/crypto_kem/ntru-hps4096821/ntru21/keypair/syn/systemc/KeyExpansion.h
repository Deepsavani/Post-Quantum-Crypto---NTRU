// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _KeyExpansion_HH_
#define _KeyExpansion_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "KeyExpansion_sbox.h"
#include "KeyExpansion_Rcon.h"

namespace ap_rtl {

struct KeyExpansion : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > RoundKey_address0;
    sc_out< sc_logic > RoundKey_ce0;
    sc_out< sc_logic > RoundKey_we0;
    sc_out< sc_lv<8> > RoundKey_d0;
    sc_in< sc_lv<8> > RoundKey_q0;
    sc_out< sc_lv<8> > RoundKey_address1;
    sc_out< sc_logic > RoundKey_ce1;
    sc_out< sc_logic > RoundKey_we1;
    sc_out< sc_lv<8> > RoundKey_d1;
    sc_in< sc_lv<8> > RoundKey_q1;
    sc_out< sc_lv<5> > Key_address0;
    sc_out< sc_logic > Key_ce0;
    sc_in< sc_lv<8> > Key_q0;
    sc_out< sc_lv<5> > Key_address1;
    sc_out< sc_logic > Key_ce1;
    sc_in< sc_lv<8> > Key_q1;


    // Module declarations
    KeyExpansion(sc_module_name name);
    SC_HAS_PROCESS(KeyExpansion);

    ~KeyExpansion();

    sc_trace_file* mVcdFile;

    KeyExpansion_sbox* sbox_U;
    KeyExpansion_Rcon* Rcon_U;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > sbox_address0;
    sc_signal< sc_logic > sbox_ce0;
    sc_signal< sc_lv<8> > sbox_q0;
    sc_signal< sc_lv<8> > sbox_address1;
    sc_signal< sc_logic > sbox_ce1;
    sc_signal< sc_lv<8> > sbox_q1;
    sc_signal< sc_lv<8> > sbox_address2;
    sc_signal< sc_logic > sbox_ce2;
    sc_signal< sc_lv<8> > sbox_q2;
    sc_signal< sc_lv<8> > sbox_address3;
    sc_signal< sc_logic > sbox_ce3;
    sc_signal< sc_lv<8> > sbox_q3;
    sc_signal< sc_lv<4> > Rcon_address0;
    sc_signal< sc_logic > Rcon_ce0;
    sc_signal< sc_lv<8> > Rcon_q0;
    sc_signal< sc_lv<8> > reg_368;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > i_45_fu_379_p2;
    sc_signal< sc_lv<4> > i_45_reg_723;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<5> > tmp_s_fu_389_p3;
    sc_signal< sc_lv<5> > tmp_s_reg_728;
    sc_signal< sc_lv<1> > tmp_fu_373_p2;
    sc_signal< sc_lv<64> > tmp_153_fu_397_p1;
    sc_signal< sc_lv<64> > tmp_153_reg_734;
    sc_signal< sc_lv<64> > tmp_155_fu_408_p1;
    sc_signal< sc_lv<64> > tmp_155_reg_744;
    sc_signal< sc_lv<64> > tmp_157_fu_418_p1;
    sc_signal< sc_lv<64> > tmp_157_reg_754;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > tmp_159_fu_428_p1;
    sc_signal< sc_lv<64> > tmp_159_reg_764;
    sc_signal< sc_lv<8> > j_fu_439_p3;
    sc_signal< sc_lv<8> > j_reg_777;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > exitcond_fu_433_p2;
    sc_signal< sc_lv<1> > tmp_168_fu_473_p2;
    sc_signal< sc_lv<1> > tmp_168_reg_801;
    sc_signal< sc_lv<3> > tmp_173_reg_809;
    sc_signal< sc_lv<1> > tmp_175_fu_489_p2;
    sc_signal< sc_lv<1> > tmp_175_reg_814;
    sc_signal< sc_lv<6> > i_46_fu_495_p2;
    sc_signal< sc_lv<6> > i_46_reg_822;
    sc_signal< sc_lv<8> > tempa_1_reg_827;
    sc_signal< sc_lv<8> > tempa_3_reg_852;
    sc_signal< sc_lv<8> > tempa_0_2_fu_551_p3;
    sc_signal< sc_lv<8> > tempa_0_2_reg_872;
    sc_signal< sc_lv<8> > tempa_3_2_fu_583_p3;
    sc_signal< sc_lv<8> > tempa_3_2_reg_892;
    sc_signal< sc_lv<8> > tempa_2_2_fu_589_p3;
    sc_signal< sc_lv<8> > tempa_2_2_reg_897;
    sc_signal< sc_lv<8> > tempa_1_2_fu_596_p3;
    sc_signal< sc_lv<8> > tempa_1_2_reg_902;
    sc_signal< sc_lv<8> > tmp_182_fu_623_p2;
    sc_signal< sc_lv<8> > tmp_182_reg_922;
    sc_signal< sc_lv<8> > tmp_191_fu_688_p2;
    sc_signal< sc_lv<8> > tmp_191_reg_937;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<8> > tmp_196_fu_694_p2;
    sc_signal< sc_lv<8> > tmp_196_reg_942;
    sc_signal< sc_lv<4> > i_reg_346;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<6> > i_1_reg_357;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<64> > tmp_161_fu_453_p1;
    sc_signal< sc_lv<64> > tmp_163_fu_464_p1;
    sc_signal< sc_lv<64> > tmp_165_fu_506_p1;
    sc_signal< sc_lv<64> > tmp_167_fu_516_p1;
    sc_signal< sc_lv<64> > tmp_169_fu_521_p1;
    sc_signal< sc_lv<64> > tmp_174_fu_526_p1;
    sc_signal< sc_lv<64> > tmp_170_fu_530_p1;
    sc_signal< sc_lv<64> > tmp_171_fu_535_p1;
    sc_signal< sc_lv<64> > tmp_172_fu_540_p1;
    sc_signal< sc_lv<64> > tmp_176_fu_558_p1;
    sc_signal< sc_lv<64> > tmp_181_fu_568_p1;
    sc_signal< sc_lv<64> > tmp_185_fu_578_p1;
    sc_signal< sc_lv<64> > tmp_177_fu_602_p1;
    sc_signal< sc_lv<64> > tmp_178_fu_607_p1;
    sc_signal< sc_lv<64> > tmp_179_fu_612_p1;
    sc_signal< sc_lv<64> > tmp_190_fu_634_p1;
    sc_signal< sc_lv<64> > tmp_195_fu_644_p1;
    sc_signal< sc_lv<64> > tmp_183_fu_667_p1;
    sc_signal< sc_lv<64> > tmp_188_fu_683_p1;
    sc_signal< sc_lv<64> > tmp_193_fu_705_p1;
    sc_signal< sc_lv<64> > tmp_198_fu_715_p1;
    sc_signal< sc_lv<8> > tmp_186_fu_671_p2;
    sc_signal< sc_lv<3> > tmp_229_fu_385_p1;
    sc_signal< sc_lv<5> > tmp_154_fu_402_p2;
    sc_signal< sc_lv<5> > tmp_156_fu_413_p2;
    sc_signal< sc_lv<5> > tmp_158_fu_423_p2;
    sc_signal< sc_lv<8> > tmp_160_fu_447_p2;
    sc_signal< sc_lv<8> > tmp_162_fu_458_p2;
    sc_signal< sc_lv<3> > tmp_230_fu_469_p1;
    sc_signal< sc_lv<8> > tmp_164_fu_501_p2;
    sc_signal< sc_lv<8> > tmp_166_fu_511_p2;
    sc_signal< sc_lv<8> > tempa_0_fu_545_p2;
    sc_signal< sc_lv<8> > tmp_180_fu_563_p2;
    sc_signal< sc_lv<8> > tmp_184_fu_573_p2;
    sc_signal< sc_lv<8> > tempa_0_4_fu_617_p3;
    sc_signal< sc_lv<8> > tmp_189_fu_629_p2;
    sc_signal< sc_lv<8> > tmp_194_fu_639_p2;
    sc_signal< sc_lv<8> > tempa_1_4_fu_661_p3;
    sc_signal< sc_lv<8> > tmp_187_fu_678_p2;
    sc_signal< sc_lv<8> > tempa_2_4_fu_655_p3;
    sc_signal< sc_lv<8> > tempa_3_4_fu_649_p3;
    sc_signal< sc_lv<8> > tmp_192_fu_700_p2;
    sc_signal< sc_lv<8> > tmp_197_fu_710_p2;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_state3;
    static const sc_lv<10> ap_ST_fsm_state4;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_state6;
    static const sc_lv<10> ap_ST_fsm_state7;
    static const sc_lv<10> ap_ST_fsm_state8;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<6> ap_const_lv6_8;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<5> ap_const_lv5_3;
    static const sc_lv<6> ap_const_lv6_3C;
    static const sc_lv<8> ap_const_lv8_FC;
    static const sc_lv<8> ap_const_lv8_FD;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<8> ap_const_lv8_FE;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_E0;
    static const sc_lv<8> ap_const_lv8_E1;
    static const sc_lv<8> ap_const_lv8_E2;
    static const sc_lv<8> ap_const_lv8_E3;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<8> ap_const_lv8_3;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_Key_address0();
    void thread_Key_address1();
    void thread_Key_ce0();
    void thread_Key_ce1();
    void thread_Rcon_address0();
    void thread_Rcon_ce0();
    void thread_RoundKey_address0();
    void thread_RoundKey_address1();
    void thread_RoundKey_ce0();
    void thread_RoundKey_ce1();
    void thread_RoundKey_d0();
    void thread_RoundKey_d1();
    void thread_RoundKey_we0();
    void thread_RoundKey_we1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond_fu_433_p2();
    void thread_i_45_fu_379_p2();
    void thread_i_46_fu_495_p2();
    void thread_j_fu_439_p3();
    void thread_sbox_address0();
    void thread_sbox_address1();
    void thread_sbox_address2();
    void thread_sbox_address3();
    void thread_sbox_ce0();
    void thread_sbox_ce1();
    void thread_sbox_ce2();
    void thread_sbox_ce3();
    void thread_tempa_0_2_fu_551_p3();
    void thread_tempa_0_4_fu_617_p3();
    void thread_tempa_0_fu_545_p2();
    void thread_tempa_1_2_fu_596_p3();
    void thread_tempa_1_4_fu_661_p3();
    void thread_tempa_2_2_fu_589_p3();
    void thread_tempa_2_4_fu_655_p3();
    void thread_tempa_3_2_fu_583_p3();
    void thread_tempa_3_4_fu_649_p3();
    void thread_tmp_153_fu_397_p1();
    void thread_tmp_154_fu_402_p2();
    void thread_tmp_155_fu_408_p1();
    void thread_tmp_156_fu_413_p2();
    void thread_tmp_157_fu_418_p1();
    void thread_tmp_158_fu_423_p2();
    void thread_tmp_159_fu_428_p1();
    void thread_tmp_160_fu_447_p2();
    void thread_tmp_161_fu_453_p1();
    void thread_tmp_162_fu_458_p2();
    void thread_tmp_163_fu_464_p1();
    void thread_tmp_164_fu_501_p2();
    void thread_tmp_165_fu_506_p1();
    void thread_tmp_166_fu_511_p2();
    void thread_tmp_167_fu_516_p1();
    void thread_tmp_168_fu_473_p2();
    void thread_tmp_169_fu_521_p1();
    void thread_tmp_170_fu_530_p1();
    void thread_tmp_171_fu_535_p1();
    void thread_tmp_172_fu_540_p1();
    void thread_tmp_174_fu_526_p1();
    void thread_tmp_175_fu_489_p2();
    void thread_tmp_176_fu_558_p1();
    void thread_tmp_177_fu_602_p1();
    void thread_tmp_178_fu_607_p1();
    void thread_tmp_179_fu_612_p1();
    void thread_tmp_180_fu_563_p2();
    void thread_tmp_181_fu_568_p1();
    void thread_tmp_182_fu_623_p2();
    void thread_tmp_183_fu_667_p1();
    void thread_tmp_184_fu_573_p2();
    void thread_tmp_185_fu_578_p1();
    void thread_tmp_186_fu_671_p2();
    void thread_tmp_187_fu_678_p2();
    void thread_tmp_188_fu_683_p1();
    void thread_tmp_189_fu_629_p2();
    void thread_tmp_190_fu_634_p1();
    void thread_tmp_191_fu_688_p2();
    void thread_tmp_192_fu_700_p2();
    void thread_tmp_193_fu_705_p1();
    void thread_tmp_194_fu_639_p2();
    void thread_tmp_195_fu_644_p1();
    void thread_tmp_196_fu_694_p2();
    void thread_tmp_197_fu_710_p2();
    void thread_tmp_198_fu_715_p1();
    void thread_tmp_229_fu_385_p1();
    void thread_tmp_230_fu_469_p1();
    void thread_tmp_fu_373_p2();
    void thread_tmp_s_fu_389_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
