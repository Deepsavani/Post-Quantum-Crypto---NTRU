// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _keccak_absorb_HH_
#define _keccak_absorb_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "KeccakF1600_StatePer.h"
#include "keccak_absorb_t.h"

namespace ap_rtl {

struct keccak_absorb : public sc_module {
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
    sc_out< sc_lv<9> > m_address0;
    sc_out< sc_logic > m_ce0;
    sc_in< sc_lv<8> > m_q0;


    // Module declarations
    keccak_absorb(sc_module_name name);
    SC_HAS_PROCESS(keccak_absorb);

    ~keccak_absorb();

    sc_trace_file* mVcdFile;

    keccak_absorb_t* t_U;
    KeccakF1600_StatePer* grp_KeccakF1600_StatePer_fu_297;
    sc_signal< sc_lv<16> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > i_16_fu_316_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > i_1_cast_fu_328_p1;
    sc_signal< sc_lv<64> > i_1_cast_reg_592;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > i_5_fu_338_p2;
    sc_signal< sc_lv<5> > i_5_reg_600;
    sc_signal< sc_lv<9> > tmp_306_cast_fu_352_p1;
    sc_signal< sc_lv<9> > tmp_306_cast_reg_605;
    sc_signal< sc_lv<1> > exitcond4_fu_332_p2;
    sc_signal< sc_lv<9> > indvars_iv_next_fu_356_p2;
    sc_signal< sc_lv<9> > indvars_iv_next_reg_610;
    sc_signal< sc_lv<4> > i_19_fu_372_p2;
    sc_signal< sc_lv<4> > i_19_reg_618;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_i_fu_366_p2;
    sc_signal< sc_lv<5> > s_addr_1_reg_628;
    sc_signal< sc_lv<64> > r_fu_420_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<9> > p_rec_fu_433_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_ap_ready;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_ap_done;
    sc_signal< sc_lv<8> > i_18_fu_450_p2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > i_3_cast6_fu_456_p1;
    sc_signal< sc_lv<64> > i_3_cast6_reg_651;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<4> > tmp_249_fu_466_p2;
    sc_signal< sc_lv<4> > tmp_249_reg_659;
    sc_signal< sc_lv<1> > exitcond2_fu_460_p2;
    sc_signal< sc_lv<64> > i_4_cast5_fu_492_p1;
    sc_signal< sc_lv<64> > i_4_cast5_reg_675;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<5> > i_20_fu_502_p2;
    sc_signal< sc_lv<5> > i_20_reg_683;
    sc_signal< sc_lv<8> > tmp_251_fu_508_p3;
    sc_signal< sc_lv<8> > tmp_251_reg_688;
    sc_signal< sc_lv<1> > exitcond_fu_496_p2;
    sc_signal< sc_lv<4> > i_6_fu_526_p2;
    sc_signal< sc_lv<4> > i_6_reg_696;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > tmp_i1_fu_520_p2;
    sc_signal< sc_lv<5> > s_addr_2_reg_706;
    sc_signal< sc_lv<64> > r_6_fu_568_p2;
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
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_ap_start;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_ap_idle;
    sc_signal< sc_lv<5> > grp_KeccakF1600_StatePer_fu_297_state_address0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_state_ce0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_state_we0;
    sc_signal< sc_lv<64> > grp_KeccakF1600_StatePer_fu_297_state_d0;
    sc_signal< sc_lv<5> > grp_KeccakF1600_StatePer_fu_297_state_address1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_state_ce1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_state_we1;
    sc_signal< sc_lv<64> > grp_KeccakF1600_StatePer_fu_297_state_d1;
    sc_signal< sc_lv<5> > i_reg_170;
    sc_signal< sc_lv<1> > tmp_fu_310_p2;
    sc_signal< sc_lv<9> > i_17_reg_181;
    sc_signal< sc_lv<9> > p_01_rec_reg_193;
    sc_signal< sc_lv<5> > i_1_reg_205;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_s_fu_322_p2;
    sc_signal< sc_lv<64> > r_i_reg_216;
    sc_signal< sc_lv<4> > i_i_reg_228;
    sc_signal< sc_lv<8> > i_2_reg_240;
    sc_signal< sc_lv<1> > exitcond3_fu_444_p2;
    sc_signal< sc_lv<4> > i_3_reg_251;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<5> > i_4_reg_262;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<64> > r_i1_reg_273;
    sc_signal< sc_lv<4> > i_i1_reg_285;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_297_ap_start_reg;
    sc_signal< sc_lv<64> > i_cast_fu_305_p1;
    sc_signal< sc_lv<64> > sum_i_cast_fu_389_p1;
    sc_signal< sc_lv<64> > i_2_cast8_fu_439_p1;
    sc_signal< sc_lv<64> > sum9_cast_fu_480_p1;
    sc_signal< sc_lv<64> > sum_i1_cast_fu_537_p1;
    sc_signal< sc_lv<64> > tmp_250_fu_426_p2;
    sc_signal< sc_lv<64> > tmp_252_fu_574_p2;
    sc_signal< sc_lv<8> > tmp_247_fu_344_p3;
    sc_signal< sc_lv<9> > i_i_cast_fu_362_p1;
    sc_signal< sc_lv<9> > tmp1_fu_378_p2;
    sc_signal< sc_lv<9> > sum_i_fu_384_p2;
    sc_signal< sc_lv<3> > tmp_253_fu_398_p1;
    sc_signal< sc_lv<6> > tmp_318_i_fu_402_p3;
    sc_signal< sc_lv<64> > tmp_i_41_fu_394_p1;
    sc_signal< sc_lv<64> > tmp_318_i_cast_fu_410_p1;
    sc_signal< sc_lv<64> > tmp_319_i_fu_414_p2;
    sc_signal< sc_lv<9> > sum_fu_472_p3;
    sc_signal< sc_lv<8> > i_i1_cast3_fu_516_p1;
    sc_signal< sc_lv<8> > sum_i1_fu_532_p2;
    sc_signal< sc_lv<3> > tmp_254_fu_546_p1;
    sc_signal< sc_lv<6> > tmp_320_i_fu_550_p3;
    sc_signal< sc_lv<64> > tmp_i1_46_fu_542_p1;
    sc_signal< sc_lv<64> > tmp_320_i_cast_fu_558_p1;
    sc_signal< sc_lv<64> > tmp_321_i_fu_562_p2;
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
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<9> ap_const_lv9_118;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<64> ap_const_lv64_87;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<8> ap_const_lv8_6;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<9> ap_const_lv9_88;
    static const sc_lv<5> ap_const_lv5_11;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<9> ap_const_lv9_178;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<8> ap_const_lv8_88;
    static const sc_lv<8> ap_const_lv8_1;
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
    void thread_exitcond2_fu_460_p2();
    void thread_exitcond3_fu_444_p2();
    void thread_exitcond4_fu_332_p2();
    void thread_exitcond_fu_496_p2();
    void thread_grp_KeccakF1600_StatePer_fu_297_ap_start();
    void thread_i_16_fu_316_p2();
    void thread_i_18_fu_450_p2();
    void thread_i_19_fu_372_p2();
    void thread_i_1_cast_fu_328_p1();
    void thread_i_20_fu_502_p2();
    void thread_i_2_cast8_fu_439_p1();
    void thread_i_3_cast6_fu_456_p1();
    void thread_i_4_cast5_fu_492_p1();
    void thread_i_5_fu_338_p2();
    void thread_i_6_fu_526_p2();
    void thread_i_cast_fu_305_p1();
    void thread_i_i1_cast3_fu_516_p1();
    void thread_i_i_cast_fu_362_p1();
    void thread_indvars_iv_next_fu_356_p2();
    void thread_m_address0();
    void thread_m_ce0();
    void thread_p_rec_fu_433_p2();
    void thread_r_6_fu_568_p2();
    void thread_r_fu_420_p2();
    void thread_s_address0();
    void thread_s_address1();
    void thread_s_ce0();
    void thread_s_ce1();
    void thread_s_d0();
    void thread_s_d1();
    void thread_s_we0();
    void thread_s_we1();
    void thread_sum9_cast_fu_480_p1();
    void thread_sum_fu_472_p3();
    void thread_sum_i1_cast_fu_537_p1();
    void thread_sum_i1_fu_532_p2();
    void thread_sum_i_cast_fu_389_p1();
    void thread_sum_i_fu_384_p2();
    void thread_t_address0();
    void thread_t_address1();
    void thread_t_ce0();
    void thread_t_ce1();
    void thread_t_d0();
    void thread_t_d1();
    void thread_t_we0();
    void thread_t_we1();
    void thread_tmp1_fu_378_p2();
    void thread_tmp_247_fu_344_p3();
    void thread_tmp_249_fu_466_p2();
    void thread_tmp_250_fu_426_p2();
    void thread_tmp_251_fu_508_p3();
    void thread_tmp_252_fu_574_p2();
    void thread_tmp_253_fu_398_p1();
    void thread_tmp_254_fu_546_p1();
    void thread_tmp_306_cast_fu_352_p1();
    void thread_tmp_318_i_cast_fu_410_p1();
    void thread_tmp_318_i_fu_402_p3();
    void thread_tmp_319_i_fu_414_p2();
    void thread_tmp_320_i_cast_fu_558_p1();
    void thread_tmp_320_i_fu_550_p3();
    void thread_tmp_321_i_fu_562_p2();
    void thread_tmp_fu_310_p2();
    void thread_tmp_i1_46_fu_542_p1();
    void thread_tmp_i1_fu_520_p2();
    void thread_tmp_i_41_fu_394_p1();
    void thread_tmp_i_fu_366_p2();
    void thread_tmp_s_fu_322_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif