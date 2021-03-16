// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Cipher_HH_
#define _Cipher_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "AddRoundKey.h"
#include "SubBytes.h"

namespace ap_rtl {

struct Cipher : public sc_module {
    // Port declarations 19
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > state_address0;
    sc_out< sc_logic > state_ce0;
    sc_out< sc_logic > state_we0;
    sc_out< sc_lv<8> > state_d0;
    sc_in< sc_lv<8> > state_q0;
    sc_out< sc_lv<4> > state_address1;
    sc_out< sc_logic > state_ce1;
    sc_out< sc_logic > state_we1;
    sc_out< sc_lv<8> > state_d1;
    sc_in< sc_lv<8> > state_q1;
    sc_out< sc_lv<8> > RoundKey_address0;
    sc_out< sc_logic > RoundKey_ce0;
    sc_in< sc_lv<8> > RoundKey_q0;


    // Module declarations
    Cipher(sc_module_name name);
    SC_HAS_PROCESS(Cipher);

    ~Cipher();

    sc_trace_file* mVcdFile;

    AddRoundKey* grp_AddRoundKey_fu_238;
    SubBytes* grp_SubBytes_fu_249;
    sc_signal< sc_lv<36> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > reg_257;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<8> > reg_262;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_lv<8> > reg_269;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<8> > reg_276;
    sc_signal< sc_lv<8> > reg_281;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<8> > reg_286;
    sc_signal< sc_lv<8> > reg_291;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<8> > reg_296;
    sc_signal< sc_lv<8> > reg_301;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<8> > reg_306;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_AddRoundKey_fu_238_ap_ready;
    sc_signal< sc_logic > grp_AddRoundKey_fu_238_ap_done;
    sc_signal< sc_lv<3> > i_fu_323_p2;
    sc_signal< sc_lv<3> > i_reg_654;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<5> > tmp_214_fu_329_p3;
    sc_signal< sc_lv<5> > tmp_214_reg_659;
    sc_signal< sc_lv<1> > tmp_i_fu_317_p2;
    sc_signal< sc_lv<4> > state_addr_12_reg_665;
    sc_signal< sc_lv<4> > state_addr_13_reg_670;
    sc_signal< sc_lv<6> > round_cast8_cast_fu_357_p1;
    sc_signal< sc_lv<6> > round_cast8_cast_reg_675;
    sc_signal< sc_lv<4> > round_1_fu_362_p2;
    sc_signal< sc_lv<4> > round_1_reg_680;
    sc_signal< sc_lv<4> > state_addr_14_reg_685;
    sc_signal< sc_lv<4> > state_addr_15_reg_690;
    sc_signal< sc_lv<8> > tmp_321_i_fu_542_p2;
    sc_signal< sc_lv<8> > tmp_321_i_reg_695;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<8> > tmp_323_i_fu_582_p2;
    sc_signal< sc_lv<8> > tmp_323_i_reg_700;
    sc_signal< sc_logic > grp_AddRoundKey_fu_238_ap_start;
    sc_signal< sc_logic > grp_AddRoundKey_fu_238_ap_idle;
    sc_signal< sc_lv<6> > grp_AddRoundKey_fu_238_round;
    sc_signal< sc_lv<4> > grp_AddRoundKey_fu_238_state_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_238_state_ce0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_238_state_we0;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_238_state_d0;
    sc_signal< sc_lv<8> > grp_AddRoundKey_fu_238_RoundKey_address0;
    sc_signal< sc_logic > grp_AddRoundKey_fu_238_RoundKey_ce0;
    sc_signal< sc_logic > grp_SubBytes_fu_249_ap_start;
    sc_signal< sc_logic > grp_SubBytes_fu_249_ap_done;
    sc_signal< sc_logic > grp_SubBytes_fu_249_ap_idle;
    sc_signal< sc_logic > grp_SubBytes_fu_249_ap_ready;
    sc_signal< sc_lv<4> > grp_SubBytes_fu_249_state_address0;
    sc_signal< sc_logic > grp_SubBytes_fu_249_state_ce0;
    sc_signal< sc_logic > grp_SubBytes_fu_249_state_we0;
    sc_signal< sc_lv<8> > grp_SubBytes_fu_249_state_d0;
    sc_signal< sc_lv<4> > round_reg_215;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<3> > i_i_reg_227;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > grp_AddRoundKey_fu_238_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > grp_SubBytes_fu_249_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond_fu_311_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<64> > tmp_215_fu_337_p1;
    sc_signal< sc_lv<64> > tmp_217_fu_348_p3;
    sc_signal< sc_lv<64> > tmp_219_fu_373_p3;
    sc_signal< sc_lv<64> > tmp_221_fu_387_p3;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<8> > tmp_317_i_fu_448_p2;
    sc_signal< sc_lv<8> > tmp_319_i_fu_495_p2;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_lv<5> > tmp_216_fu_342_p2;
    sc_signal< sc_lv<5> > tmp_218_fu_368_p2;
    sc_signal< sc_lv<5> > tmp_220_fu_382_p2;
    sc_signal< sc_lv<8> > Tm_fu_396_p2;
    sc_signal< sc_lv<8> > tmp_315_i_fu_402_p2;
    sc_signal< sc_lv<1> > tmp_351_fu_420_p3;
    sc_signal< sc_lv<8> > tmp_2_i_i_cast_cast_fu_428_p3;
    sc_signal< sc_lv<8> > tmp_350_fu_414_p2;
    sc_signal< sc_lv<8> > Tmp_fu_408_p2;
    sc_signal< sc_lv<8> > tmp1_fu_442_p2;
    sc_signal< sc_lv<8> > tmp_fu_436_p2;
    sc_signal< sc_lv<8> > Tm_1_fu_455_p2;
    sc_signal< sc_lv<1> > tmp_353_fu_467_p3;
    sc_signal< sc_lv<8> > tmp_2_i4_i_cast_cast_fu_475_p3;
    sc_signal< sc_lv<8> > tmp_352_fu_461_p2;
    sc_signal< sc_lv<8> > tmp3_fu_489_p2;
    sc_signal< sc_lv<8> > tmp2_fu_483_p2;
    sc_signal< sc_lv<8> > Tm_2_fu_502_p2;
    sc_signal< sc_lv<1> > tmp_355_fu_514_p3;
    sc_signal< sc_lv<8> > tmp_2_i9_i_cast_cast_fu_522_p3;
    sc_signal< sc_lv<8> > tmp_354_fu_508_p2;
    sc_signal< sc_lv<8> > tmp5_fu_536_p2;
    sc_signal< sc_lv<8> > tmp4_fu_530_p2;
    sc_signal< sc_lv<8> > Tm_3_fu_548_p2;
    sc_signal< sc_lv<1> > tmp_357_fu_560_p3;
    sc_signal< sc_lv<8> > tmp_356_fu_554_p2;
    sc_signal< sc_lv<8> > tmp6_fu_576_p2;
    sc_signal< sc_lv<8> > tmp_2_i14_i_cast_cas_fu_568_p3;
    sc_signal< sc_lv<36> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<36> ap_ST_fsm_state1;
    static const sc_lv<36> ap_ST_fsm_state2;
    static const sc_lv<36> ap_ST_fsm_state3;
    static const sc_lv<36> ap_ST_fsm_state4;
    static const sc_lv<36> ap_ST_fsm_state5;
    static const sc_lv<36> ap_ST_fsm_state6;
    static const sc_lv<36> ap_ST_fsm_state7;
    static const sc_lv<36> ap_ST_fsm_state8;
    static const sc_lv<36> ap_ST_fsm_state9;
    static const sc_lv<36> ap_ST_fsm_state10;
    static const sc_lv<36> ap_ST_fsm_state11;
    static const sc_lv<36> ap_ST_fsm_state12;
    static const sc_lv<36> ap_ST_fsm_state13;
    static const sc_lv<36> ap_ST_fsm_state14;
    static const sc_lv<36> ap_ST_fsm_state15;
    static const sc_lv<36> ap_ST_fsm_state16;
    static const sc_lv<36> ap_ST_fsm_state17;
    static const sc_lv<36> ap_ST_fsm_state18;
    static const sc_lv<36> ap_ST_fsm_state19;
    static const sc_lv<36> ap_ST_fsm_state20;
    static const sc_lv<36> ap_ST_fsm_state21;
    static const sc_lv<36> ap_ST_fsm_state22;
    static const sc_lv<36> ap_ST_fsm_state23;
    static const sc_lv<36> ap_ST_fsm_state24;
    static const sc_lv<36> ap_ST_fsm_state25;
    static const sc_lv<36> ap_ST_fsm_state26;
    static const sc_lv<36> ap_ST_fsm_state27;
    static const sc_lv<36> ap_ST_fsm_state28;
    static const sc_lv<36> ap_ST_fsm_state29;
    static const sc_lv<36> ap_ST_fsm_state30;
    static const sc_lv<36> ap_ST_fsm_state31;
    static const sc_lv<36> ap_ST_fsm_state32;
    static const sc_lv<36> ap_ST_fsm_state33;
    static const sc_lv<36> ap_ST_fsm_state34;
    static const sc_lv<36> ap_ST_fsm_state35;
    static const sc_lv<36> ap_ST_fsm_state36;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<6> ap_const_lv6_E;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<4> ap_const_lv4_E;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<59> ap_const_lv59_0;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<5> ap_const_lv5_3;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<8> ap_const_lv8_1B;
    static const sc_lv<8> ap_const_lv8_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_RoundKey_address0();
    void thread_RoundKey_ce0();
    void thread_Tm_1_fu_455_p2();
    void thread_Tm_2_fu_502_p2();
    void thread_Tm_3_fu_548_p2();
    void thread_Tm_fu_396_p2();
    void thread_Tmp_fu_408_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond_fu_311_p2();
    void thread_grp_AddRoundKey_fu_238_ap_start();
    void thread_grp_AddRoundKey_fu_238_round();
    void thread_grp_SubBytes_fu_249_ap_start();
    void thread_i_fu_323_p2();
    void thread_round_1_fu_362_p2();
    void thread_round_cast8_cast_fu_357_p1();
    void thread_state_address0();
    void thread_state_address1();
    void thread_state_ce0();
    void thread_state_ce1();
    void thread_state_d0();
    void thread_state_d1();
    void thread_state_we0();
    void thread_state_we1();
    void thread_tmp1_fu_442_p2();
    void thread_tmp2_fu_483_p2();
    void thread_tmp3_fu_489_p2();
    void thread_tmp4_fu_530_p2();
    void thread_tmp5_fu_536_p2();
    void thread_tmp6_fu_576_p2();
    void thread_tmp_214_fu_329_p3();
    void thread_tmp_215_fu_337_p1();
    void thread_tmp_216_fu_342_p2();
    void thread_tmp_217_fu_348_p3();
    void thread_tmp_218_fu_368_p2();
    void thread_tmp_219_fu_373_p3();
    void thread_tmp_220_fu_382_p2();
    void thread_tmp_221_fu_387_p3();
    void thread_tmp_2_i14_i_cast_cas_fu_568_p3();
    void thread_tmp_2_i4_i_cast_cast_fu_475_p3();
    void thread_tmp_2_i9_i_cast_cast_fu_522_p3();
    void thread_tmp_2_i_i_cast_cast_fu_428_p3();
    void thread_tmp_315_i_fu_402_p2();
    void thread_tmp_317_i_fu_448_p2();
    void thread_tmp_319_i_fu_495_p2();
    void thread_tmp_321_i_fu_542_p2();
    void thread_tmp_323_i_fu_582_p2();
    void thread_tmp_350_fu_414_p2();
    void thread_tmp_351_fu_420_p3();
    void thread_tmp_352_fu_461_p2();
    void thread_tmp_353_fu_467_p3();
    void thread_tmp_354_fu_508_p2();
    void thread_tmp_355_fu_514_p3();
    void thread_tmp_356_fu_554_p2();
    void thread_tmp_357_fu_560_p3();
    void thread_tmp_fu_436_p2();
    void thread_tmp_i_fu_317_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
