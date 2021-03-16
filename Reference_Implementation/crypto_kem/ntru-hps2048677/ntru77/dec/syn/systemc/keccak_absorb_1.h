// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _keccak_absorb_1_HH_
#define _keccak_absorb_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "KeccakF1600_StatePer.h"
#include "keccak_absorb_t.h"

namespace ap_rtl {

struct keccak_absorb_1 : public sc_module {
    // Port declarations 19
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > s_address0;
    sc_out< sc_logic > s_ce0;
    sc_out< sc_logic > s_we0;
    sc_out< sc_lv<64> > s_d0;
    sc_in< sc_lv<64> > s_q0;
    sc_out< sc_lv<5> > s_address1;
    sc_out< sc_logic > s_ce1;
    sc_out< sc_logic > s_we1;
    sc_out< sc_lv<64> > s_d1;
    sc_in< sc_lv<64> > s_q1;
    sc_out< sc_lv<10> > m_address0;
    sc_out< sc_logic > m_ce0;
    sc_in< sc_lv<8> > m_q0;


    // Module declarations
    keccak_absorb_1(sc_module_name name);
    SC_HAS_PROCESS(keccak_absorb_1);

    ~keccak_absorb_1();

    sc_trace_file* mVcdFile;

    keccak_absorb_t* t_U;
    KeccakF1600_StatePer* grp_KeccakF1600_StatePer_fu_305;
    sc_signal< sc_lv<16> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > i_21_fu_324_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > i_1_cast_fu_336_p1;
    sc_signal< sc_lv<64> > i_1_cast_reg_614;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > i_5_fu_346_p2;
    sc_signal< sc_lv<5> > i_5_reg_622;
    sc_signal< sc_lv<10> > tmp1_fu_364_p2;
    sc_signal< sc_lv<10> > tmp1_reg_627;
    sc_signal< sc_lv<1> > exitcond4_fu_340_p2;
    sc_signal< sc_lv<10> > mlen_assign_fu_370_p2;
    sc_signal< sc_lv<10> > mlen_assign_reg_632;
    sc_signal< sc_lv<10> > p_rec_fu_376_p2;
    sc_signal< sc_lv<10> > p_rec_reg_637;
    sc_signal< sc_lv<4> > i_24_fu_388_p2;
    sc_signal< sc_lv<4> > i_24_reg_645;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_i_fu_382_p2;
    sc_signal< sc_lv<5> > s_addr_1_reg_655;
    sc_signal< sc_lv<64> > r_fu_442_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<8> > i_23_fu_466_p2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > i_3_cast7_fu_476_p1;
    sc_signal< sc_lv<64> > i_3_cast7_reg_673;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<4> > tmp_203_fu_486_p2;
    sc_signal< sc_lv<4> > tmp_203_reg_681;
    sc_signal< sc_lv<1> > exitcond2_fu_480_p2;
    sc_signal< sc_lv<64> > i_4_cast6_fu_514_p1;
    sc_signal< sc_lv<64> > i_4_cast6_reg_697;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<5> > i_25_fu_524_p2;
    sc_signal< sc_lv<5> > i_25_reg_705;
    sc_signal< sc_lv<8> > tmp_205_fu_530_p3;
    sc_signal< sc_lv<8> > tmp_205_reg_710;
    sc_signal< sc_lv<1> > exitcond_fu_518_p2;
    sc_signal< sc_lv<4> > i_6_fu_548_p2;
    sc_signal< sc_lv<4> > i_6_reg_718;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > tmp_i3_fu_542_p2;
    sc_signal< sc_lv<5> > s_addr_2_reg_728;
    sc_signal< sc_lv<64> > r_11_fu_590_p2;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<8> > t_address0;
    sc_signal< sc_logic > t_ce0;
    sc_signal< sc_logic > t_we0;
    sc_signal< sc_lv<8> > t_d0;
    sc_signal< sc_lv<8> > t_q0;
    sc_signal< sc_lv<8> > t_address1;
    sc_signal< sc_logic > t_ce1;
    sc_signal< sc_logic > t_we1;
    sc_signal< sc_lv<8> > t_d1;
    sc_signal< sc_lv<8> > t_q1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_ap_start;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_ap_done;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_ap_idle;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_ap_ready;
    sc_signal< sc_lv<5> > grp_KeccakF1600_StatePer_fu_305_state_address0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_state_ce0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_state_we0;
    sc_signal< sc_lv<64> > grp_KeccakF1600_StatePer_fu_305_state_d0;
    sc_signal< sc_lv<5> > grp_KeccakF1600_StatePer_fu_305_state_address1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_state_ce1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_state_we1;
    sc_signal< sc_lv<64> > grp_KeccakF1600_StatePer_fu_305_state_d1;
    sc_signal< sc_lv<5> > i_reg_178;
    sc_signal< sc_lv<1> > tmp_fu_318_p2;
    sc_signal< sc_lv<10> > i_22_reg_189;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<10> > p_01_rec_reg_201;
    sc_signal< sc_lv<5> > i_1_reg_213;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_s_fu_330_p2;
    sc_signal< sc_lv<64> > r_i_reg_224;
    sc_signal< sc_lv<4> > i_i_reg_236;
    sc_signal< sc_lv<8> > i_2_reg_248;
    sc_signal< sc_lv<1> > exitcond3_fu_460_p2;
    sc_signal< sc_lv<4> > i_3_reg_259;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<5> > i_4_reg_270;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<64> > r_i1_reg_281;
    sc_signal< sc_lv<4> > i_i2_reg_293;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_305_ap_start_reg;
    sc_signal< sc_lv<64> > i_cast_fu_313_p1;
    sc_signal< sc_lv<64> > sum_i_cast_fu_411_p1;
    sc_signal< sc_lv<64> > i_2_cast9_fu_455_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_502_p1;
    sc_signal< sc_lv<64> > sum_i4_cast_fu_559_p1;
    sc_signal< sc_lv<64> > tmp_204_fu_448_p2;
    sc_signal< sc_lv<64> > tmp_206_fu_596_p2;
    sc_signal< sc_lv<8> > tmp_201_fu_352_p3;
    sc_signal< sc_lv<10> > tmp_207_cast_fu_360_p1;
    sc_signal< sc_lv<6> > tmp139_fu_394_p3;
    sc_signal< sc_lv<10> > tmp2_cast_fu_402_p1;
    sc_signal< sc_lv<10> > sum_i_fu_406_p2;
    sc_signal< sc_lv<3> > tmp_230_fu_420_p1;
    sc_signal< sc_lv<6> > tmp_229_i_fu_424_p3;
    sc_signal< sc_lv<64> > tmp_i_48_fu_416_p1;
    sc_signal< sc_lv<64> > tmp_229_i_cast_fu_432_p1;
    sc_signal< sc_lv<64> > tmp_230_i_fu_436_p2;
    sc_signal< sc_lv<7> > i_3_cast8_cast_fu_472_p1;
    sc_signal< sc_lv<7> > sum2_fu_492_p2;
    sc_signal< sc_lv<10> > sum2_cast1_fu_498_p1;
    sc_signal< sc_lv<8> > i_i2_cast4_fu_538_p1;
    sc_signal< sc_lv<8> > sum_i4_fu_554_p2;
    sc_signal< sc_lv<3> > tmp_231_fu_568_p1;
    sc_signal< sc_lv<6> > tmp_231_i_fu_572_p3;
    sc_signal< sc_lv<64> > tmp_i7_fu_564_p1;
    sc_signal< sc_lv<64> > tmp_231_i_cast_fu_580_p1;
    sc_signal< sc_lv<64> > tmp_232_i_fu_584_p2;
    sc_signal< sc_lv<16> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<16> ap_ST_fsm_state1;
    static const sc_lv<16> ap_ST_fsm_state2;
    static const sc_lv<16> ap_ST_fsm_state3;
    static const sc_lv<16> ap_ST_fsm_state4;
    static const sc_lv<16> ap_ST_fsm_state5;
    static const sc_lv<16> ap_ST_fsm_state6;
    static const sc_lv<16> ap_ST_fsm_state7;
    static const sc_lv<16> ap_ST_fsm_state8;
    static const sc_lv<16> ap_ST_fsm_state9;
    static const sc_lv<16> ap_ST_fsm_state10;
    static const sc_lv<16> ap_ST_fsm_state11;
    static const sc_lv<16> ap_ST_fsm_state12;
    static const sc_lv<16> ap_ST_fsm_state13;
    static const sc_lv<16> ap_ST_fsm_state14;
    static const sc_lv<16> ap_ST_fsm_state15;
    static const sc_lv<16> ap_ST_fsm_state16;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<10> ap_const_lv10_3C2;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<64> ap_const_lv64_87;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<8> ap_const_lv8_6;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<10> ap_const_lv10_88;
    static const sc_lv<5> ap_const_lv5_11;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<10> ap_const_lv10_378;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<8> ap_const_lv8_88;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<7> ap_const_lv7_58;
    static const sc_lv<8> ap_const_lv8_80;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
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
    void thread_exitcond2_fu_480_p2();
    void thread_exitcond3_fu_460_p2();
    void thread_exitcond4_fu_340_p2();
    void thread_exitcond_fu_518_p2();
    void thread_grp_KeccakF1600_StatePer_fu_305_ap_start();
    void thread_i_1_cast_fu_336_p1();
    void thread_i_21_fu_324_p2();
    void thread_i_23_fu_466_p2();
    void thread_i_24_fu_388_p2();
    void thread_i_25_fu_524_p2();
    void thread_i_2_cast9_fu_455_p1();
    void thread_i_3_cast7_fu_476_p1();
    void thread_i_3_cast8_cast_fu_472_p1();
    void thread_i_4_cast6_fu_514_p1();
    void thread_i_5_fu_346_p2();
    void thread_i_6_fu_548_p2();
    void thread_i_cast_fu_313_p1();
    void thread_i_i2_cast4_fu_538_p1();
    void thread_m_address0();
    void thread_m_ce0();
    void thread_mlen_assign_fu_370_p2();
    void thread_p_rec_fu_376_p2();
    void thread_r_11_fu_590_p2();
    void thread_r_fu_442_p2();
    void thread_s_address0();
    void thread_s_address1();
    void thread_s_ce0();
    void thread_s_ce1();
    void thread_s_d0();
    void thread_s_d1();
    void thread_s_we0();
    void thread_s_we1();
    void thread_sum2_cast1_fu_498_p1();
    void thread_sum2_cast_fu_502_p1();
    void thread_sum2_fu_492_p2();
    void thread_sum_i4_cast_fu_559_p1();
    void thread_sum_i4_fu_554_p2();
    void thread_sum_i_cast_fu_411_p1();
    void thread_sum_i_fu_406_p2();
    void thread_t_address0();
    void thread_t_address1();
    void thread_t_ce0();
    void thread_t_ce1();
    void thread_t_d0();
    void thread_t_d1();
    void thread_t_we0();
    void thread_t_we1();
    void thread_tmp139_fu_394_p3();
    void thread_tmp1_fu_364_p2();
    void thread_tmp2_cast_fu_402_p1();
    void thread_tmp_201_fu_352_p3();
    void thread_tmp_203_fu_486_p2();
    void thread_tmp_204_fu_448_p2();
    void thread_tmp_205_fu_530_p3();
    void thread_tmp_206_fu_596_p2();
    void thread_tmp_207_cast_fu_360_p1();
    void thread_tmp_229_i_cast_fu_432_p1();
    void thread_tmp_229_i_fu_424_p3();
    void thread_tmp_230_fu_420_p1();
    void thread_tmp_230_i_fu_436_p2();
    void thread_tmp_231_fu_568_p1();
    void thread_tmp_231_i_cast_fu_580_p1();
    void thread_tmp_231_i_fu_572_p3();
    void thread_tmp_232_i_fu_584_p2();
    void thread_tmp_fu_318_p2();
    void thread_tmp_i3_fu_542_p2();
    void thread_tmp_i7_fu_564_p1();
    void thread_tmp_i_48_fu_416_p1();
    void thread_tmp_i_fu_382_p2();
    void thread_tmp_s_fu_330_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif