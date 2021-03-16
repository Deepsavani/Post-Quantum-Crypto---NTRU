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
    KeccakF1600_StatePer* grp_KeccakF1600_StatePer_fu_268;
    sc_signal< sc_lv<14> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > i_18_fu_287_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > i_1_cast_fu_299_p1;
    sc_signal< sc_lv<64> > i_1_cast_reg_534;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > i_3_fu_309_p2;
    sc_signal< sc_lv<5> > i_3_reg_542;
    sc_signal< sc_lv<9> > tmp_344_cast_fu_323_p1;
    sc_signal< sc_lv<9> > tmp_344_cast_reg_547;
    sc_signal< sc_lv<1> > exitcond4_fu_303_p2;
    sc_signal< sc_lv<9> > indvars_iv_next_fu_327_p2;
    sc_signal< sc_lv<9> > indvars_iv_next_reg_552;
    sc_signal< sc_lv<4> > i_5_fu_343_p2;
    sc_signal< sc_lv<4> > i_5_reg_560;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_i_fu_337_p2;
    sc_signal< sc_lv<5> > s_addr_7_reg_570;
    sc_signal< sc_lv<64> > r_fu_391_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<9> > p_rec_fu_404_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_ap_ready;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_ap_done;
    sc_signal< sc_lv<8> > i_20_fu_421_p2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > exitcond3_fu_415_p2;
    sc_signal< sc_lv<64> > i_4_cast5_fu_434_p1;
    sc_signal< sc_lv<64> > i_4_cast5_reg_599;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<5> > i_21_fu_444_p2;
    sc_signal< sc_lv<5> > i_21_reg_607;
    sc_signal< sc_lv<8> > tmp_212_fu_450_p3;
    sc_signal< sc_lv<8> > tmp_212_reg_612;
    sc_signal< sc_lv<1> > exitcond_fu_438_p2;
    sc_signal< sc_lv<4> > i_6_fu_468_p2;
    sc_signal< sc_lv<4> > i_6_reg_620;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<1> > tmp_i2_fu_462_p2;
    sc_signal< sc_lv<5> > s_addr_8_reg_630;
    sc_signal< sc_lv<64> > r_3_fu_510_p2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
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
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_ap_start;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_ap_idle;
    sc_signal< sc_lv<5> > grp_KeccakF1600_StatePer_fu_268_state_address0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_state_ce0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_state_we0;
    sc_signal< sc_lv<64> > grp_KeccakF1600_StatePer_fu_268_state_d0;
    sc_signal< sc_lv<5> > grp_KeccakF1600_StatePer_fu_268_state_address1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_state_ce1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_state_we1;
    sc_signal< sc_lv<64> > grp_KeccakF1600_StatePer_fu_268_state_d1;
    sc_signal< sc_lv<5> > i_reg_152;
    sc_signal< sc_lv<1> > tmp_fu_281_p2;
    sc_signal< sc_lv<9> > i_19_reg_163;
    sc_signal< sc_lv<9> > p_01_rec_reg_175;
    sc_signal< sc_lv<5> > i_1_reg_187;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_s_fu_293_p2;
    sc_signal< sc_lv<64> > r_i_reg_198;
    sc_signal< sc_lv<4> > i_i_reg_210;
    sc_signal< sc_lv<8> > i_2_reg_222;
    sc_signal< sc_lv<5> > i_4_reg_233;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<64> > r_i1_reg_244;
    sc_signal< sc_lv<4> > i_i2_reg_256;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_268_ap_start_reg;
    sc_signal< sc_lv<64> > i_cast_fu_276_p1;
    sc_signal< sc_lv<64> > sum_i_cast_fu_360_p1;
    sc_signal< sc_lv<64> > i_2_cast6_fu_410_p1;
    sc_signal< sc_lv<64> > sum_i1_cast_fu_479_p1;
    sc_signal< sc_lv<64> > tmp_213_fu_397_p2;
    sc_signal< sc_lv<64> > tmp_214_fu_516_p2;
    sc_signal< sc_lv<8> > tmp_211_fu_315_p3;
    sc_signal< sc_lv<9> > i_i_cast8_fu_333_p1;
    sc_signal< sc_lv<9> > tmp1_fu_349_p2;
    sc_signal< sc_lv<9> > sum_i_fu_355_p2;
    sc_signal< sc_lv<3> > tmp_209_fu_369_p1;
    sc_signal< sc_lv<6> > tmp_346_i_fu_373_p3;
    sc_signal< sc_lv<64> > tmp_i_43_fu_365_p1;
    sc_signal< sc_lv<64> > tmp_346_i_cast_fu_381_p1;
    sc_signal< sc_lv<64> > tmp_347_i_fu_385_p2;
    sc_signal< sc_lv<8> > i_i2_cast3_fu_458_p1;
    sc_signal< sc_lv<8> > sum_i1_fu_474_p2;
    sc_signal< sc_lv<3> > tmp_215_fu_488_p1;
    sc_signal< sc_lv<6> > tmp_348_i_fu_492_p3;
    sc_signal< sc_lv<64> > tmp_i1_fu_484_p1;
    sc_signal< sc_lv<64> > tmp_348_i_cast_fu_500_p1;
    sc_signal< sc_lv<64> > tmp_349_i_fu_504_p2;
    sc_signal< sc_lv<14> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<14> ap_ST_fsm_state1;
    static const sc_lv<14> ap_ST_fsm_state2;
    static const sc_lv<14> ap_ST_fsm_state3;
    static const sc_lv<14> ap_ST_fsm_state4;
    static const sc_lv<14> ap_ST_fsm_state5;
    static const sc_lv<14> ap_ST_fsm_state6;
    static const sc_lv<14> ap_ST_fsm_state7;
    static const sc_lv<14> ap_ST_fsm_state8;
    static const sc_lv<14> ap_ST_fsm_state9;
    static const sc_lv<14> ap_ST_fsm_state10;
    static const sc_lv<14> ap_ST_fsm_state11;
    static const sc_lv<14> ap_ST_fsm_state12;
    static const sc_lv<14> ap_ST_fsm_state13;
    static const sc_lv<14> ap_ST_fsm_state14;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<9> ap_const_lv9_110;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<64> ap_const_lv64_87;
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
    void thread_exitcond3_fu_415_p2();
    void thread_exitcond4_fu_303_p2();
    void thread_exitcond_fu_438_p2();
    void thread_grp_KeccakF1600_StatePer_fu_268_ap_start();
    void thread_i_18_fu_287_p2();
    void thread_i_1_cast_fu_299_p1();
    void thread_i_20_fu_421_p2();
    void thread_i_21_fu_444_p2();
    void thread_i_2_cast6_fu_410_p1();
    void thread_i_3_fu_309_p2();
    void thread_i_4_cast5_fu_434_p1();
    void thread_i_5_fu_343_p2();
    void thread_i_6_fu_468_p2();
    void thread_i_cast_fu_276_p1();
    void thread_i_i2_cast3_fu_458_p1();
    void thread_i_i_cast8_fu_333_p1();
    void thread_indvars_iv_next_fu_327_p2();
    void thread_m_address0();
    void thread_m_ce0();
    void thread_p_rec_fu_404_p2();
    void thread_r_3_fu_510_p2();
    void thread_r_fu_391_p2();
    void thread_s_address0();
    void thread_s_address1();
    void thread_s_ce0();
    void thread_s_ce1();
    void thread_s_d0();
    void thread_s_d1();
    void thread_s_we0();
    void thread_s_we1();
    void thread_sum_i1_cast_fu_479_p1();
    void thread_sum_i1_fu_474_p2();
    void thread_sum_i_cast_fu_360_p1();
    void thread_sum_i_fu_355_p2();
    void thread_t_address0();
    void thread_t_address1();
    void thread_t_ce0();
    void thread_t_ce1();
    void thread_t_d0();
    void thread_t_d1();
    void thread_t_we0();
    void thread_t_we1();
    void thread_tmp1_fu_349_p2();
    void thread_tmp_209_fu_369_p1();
    void thread_tmp_211_fu_315_p3();
    void thread_tmp_212_fu_450_p3();
    void thread_tmp_213_fu_397_p2();
    void thread_tmp_214_fu_516_p2();
    void thread_tmp_215_fu_488_p1();
    void thread_tmp_344_cast_fu_323_p1();
    void thread_tmp_346_i_cast_fu_381_p1();
    void thread_tmp_346_i_fu_373_p3();
    void thread_tmp_347_i_fu_385_p2();
    void thread_tmp_348_i_cast_fu_500_p1();
    void thread_tmp_348_i_fu_492_p3();
    void thread_tmp_349_i_fu_504_p2();
    void thread_tmp_fu_281_p2();
    void thread_tmp_i1_fu_484_p1();
    void thread_tmp_i2_fu_462_p2();
    void thread_tmp_i_43_fu_365_p1();
    void thread_tmp_i_fu_337_p2();
    void thread_tmp_s_fu_293_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
