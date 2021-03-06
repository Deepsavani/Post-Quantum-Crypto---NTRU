// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_S3_mul_HH_
#define _poly_S3_mul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1.h"

namespace ap_rtl {

struct poly_S3_mul : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > r_coeffs_address0;
    sc_out< sc_logic > r_coeffs_ce0;
    sc_out< sc_logic > r_coeffs_we0;
    sc_out< sc_lv<16> > r_coeffs_d0;
    sc_in< sc_lv<16> > r_coeffs_q0;
    sc_out< sc_lv<10> > r_coeffs_address1;
    sc_out< sc_logic > r_coeffs_ce1;
    sc_out< sc_logic > r_coeffs_we1;
    sc_out< sc_lv<16> > r_coeffs_d1;
    sc_in< sc_lv<16> > r_coeffs_q1;
    sc_out< sc_lv<10> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;
    sc_out< sc_lv<10> > b_coeffs_address0;
    sc_out< sc_logic > b_coeffs_ce0;
    sc_in< sc_lv<16> > b_coeffs_q0;


    // Module declarations
    poly_S3_mul(sc_module_name name);
    SC_HAS_PROCESS(poly_S3_mul);

    ~poly_S3_mul();

    sc_trace_file* mVcdFile;

    crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>* crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U15;
    crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>* crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U16;
    sc_signal< sc_lv<11> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > reg_210;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > reg_214;
    sc_signal< sc_lv<16> > reg_218;
    sc_signal< sc_lv<11> > k_cast5_fu_222_p1;
    sc_signal< sc_lv<11> > k_cast5_reg_656;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > k_3_fu_232_p2;
    sc_signal< sc_lv<10> > k_3_reg_665;
    sc_signal< sc_lv<10> > r_coeffs_addr_1_reg_670;
    sc_signal< sc_lv<1> > exitcond2_fu_226_p2;
    sc_signal< sc_lv<10> > tmp_s_fu_243_p2;
    sc_signal< sc_lv<10> > tmp_s_reg_675;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_15_fu_253_p2;
    sc_signal< sc_lv<10> > i_5_fu_279_p2;
    sc_signal< sc_lv<10> > i_5_reg_698;
    sc_signal< sc_lv<10> > i_6_fu_295_p2;
    sc_signal< sc_lv<10> > i_6_reg_706;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > exitcond1_fu_289_p2;
    sc_signal< sc_lv<10> > indvars_iv_next_fu_316_p2;
    sc_signal< sc_lv<10> > k_2_fu_328_p2;
    sc_signal< sc_lv<10> > k_2_reg_729;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<10> > r_coeffs_addr_2_reg_734;
    sc_signal< sc_lv<1> > exitcond_fu_322_p2;
    sc_signal< sc_lv<4> > tmp_123_i_cast_reg_740;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<2> > fold1_i_cast_fu_523_p2;
    sc_signal< sc_lv<2> > fold1_i_cast_reg_745;
    sc_signal< sc_lv<2> > tmp_13_reg_751;
    sc_signal< sc_lv<10> > indvars_iv_reg_154;
    sc_signal< sc_lv<10> > k_reg_166;
    sc_signal< sc_lv<10> > i_reg_177;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<10> > i_1_reg_188;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<10> > k_1_reg_199;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > tmp_fu_238_p1;
    sc_signal< sc_lv<64> > tmp_21_fu_263_p1;
    sc_signal< sc_lv<64> > tmp_23_fu_274_p1;
    sc_signal< sc_lv<64> > tmp_27_fu_306_p1;
    sc_signal< sc_lv<64> > tmp_28_fu_311_p1;
    sc_signal< sc_lv<64> > tmp_16_fu_334_p1;
    sc_signal< sc_lv<16> > grp_fu_638_p3;
    sc_signal< sc_lv<16> > grp_fu_647_p3;
    sc_signal< sc_lv<11> > i_cast_fu_249_p1;
    sc_signal< sc_lv<11> > tmp_20_fu_258_p2;
    sc_signal< sc_lv<10> > tmp_22_fu_268_p2;
    sc_signal< sc_lv<11> > i_1_cast_fu_285_p1;
    sc_signal< sc_lv<11> > tmp_26_fu_301_p2;
    sc_signal< sc_lv<7> > tmp_32_fu_345_p1;
    sc_signal< sc_lv<3> > tmp_39_fu_365_p1;
    sc_signal< sc_lv<1> > tmp_40_fu_377_p1;
    sc_signal< sc_lv<16> > tmp_31_fu_339_p2;
    sc_signal< sc_lv<8> > tmp_1_fu_349_p3;
    sc_signal< sc_lv<8> > tmp_33_fu_357_p1;
    sc_signal< sc_lv<16> > a_assign_fu_393_p2;
    sc_signal< sc_lv<8> > tmp_17_fu_405_p4;
    sc_signal< sc_lv<8> > a_assign_cast_fu_399_p2;
    sc_signal< sc_lv<9> > tmp_i_cast_fu_415_p1;
    sc_signal< sc_lv<9> > tmp_i_cast_30_fu_419_p1;
    sc_signal< sc_lv<9> > r_fu_429_p2;
    sc_signal< sc_lv<5> > tmp_19_fu_435_p4;
    sc_signal< sc_lv<4> > tmp_4_fu_369_p3;
    sc_signal< sc_lv<4> > tmp_34_fu_361_p1;
    sc_signal< sc_lv<2> > tmp_5_fu_381_p3;
    sc_signal< sc_lv<2> > tmp_41_fu_389_p1;
    sc_signal< sc_lv<4> > tmp_7_fu_449_p2;
    sc_signal< sc_lv<4> > tmp_8_fu_455_p4;
    sc_signal< sc_lv<4> > fold_i_cast_fu_481_p2;
    sc_signal< sc_lv<6> > tmp_121_i_cast_fu_445_p1;
    sc_signal< sc_lv<6> > tmp_122_i_cast_fu_487_p1;
    sc_signal< sc_lv<6> > r_1_fu_491_p2;
    sc_signal< sc_lv<2> > tmp_10_fu_475_p2;
    sc_signal< sc_lv<2> > tmp_9_fu_465_p4;
    sc_signal< sc_lv<8> > tmp_18_fu_423_p2;
    sc_signal< sc_lv<2> > tmp_11_fu_507_p2;
    sc_signal< sc_lv<2> > tmp_12_fu_513_p4;
    sc_signal< sc_lv<4> > tmp_124_i_cast_fu_539_p1;
    sc_signal< sc_lv<4> > r_2_fu_542_p2;
    sc_signal< sc_lv<2> > tmp_35_fu_547_p4;
    sc_signal< sc_lv<2> > fold2_i_cast_fu_561_p2;
    sc_signal< sc_lv<3> > tmp_125_i_cast_fu_557_p1;
    sc_signal< sc_lv<3> > tmp_126_i_cast_fu_565_p1;
    sc_signal< sc_lv<3> > r_3_fu_569_p2;
    sc_signal< sc_lv<3> > t_fu_575_p2;
    sc_signal< sc_lv<1> > tmp_42_fu_581_p3;
    sc_signal< sc_lv<3> > c_cast_fu_589_p3;
    sc_signal< sc_lv<3> > tmp_127_i_fu_597_p2;
    sc_signal< sc_lv<1> > not_tmp_17_i_fu_607_p2;
    sc_signal< sc_lv<3> > tmp_128_i_cast_cast_fu_613_p3;
    sc_signal< sc_lv<3> > tmp_129_i_fu_621_p2;
    sc_signal< sc_lv<16> > tmp_127_i_cast_fu_603_p1;
    sc_signal< sc_lv<16> > tmp_129_i_cast_fu_627_p1;
    sc_signal< sc_lv<11> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<11> ap_ST_fsm_state1;
    static const sc_lv<11> ap_ST_fsm_state2;
    static const sc_lv<11> ap_ST_fsm_state3;
    static const sc_lv<11> ap_ST_fsm_state4;
    static const sc_lv<11> ap_ST_fsm_state5;
    static const sc_lv<11> ap_ST_fsm_state6;
    static const sc_lv<11> ap_ST_fsm_state7;
    static const sc_lv<11> ap_ST_fsm_state8;
    static const sc_lv<11> ap_ST_fsm_state9;
    static const sc_lv<11> ap_ST_fsm_state10;
    static const sc_lv<11> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<64> ap_const_lv64_334;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<10> ap_const_lv10_336;
    static const sc_lv<10> ap_const_lv10_335;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_assign_cast_fu_399_p2();
    void thread_a_assign_fu_393_p2();
    void thread_a_coeffs_address0();
    void thread_a_coeffs_ce0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
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
    void thread_b_coeffs_address0();
    void thread_b_coeffs_ce0();
    void thread_c_cast_fu_589_p3();
    void thread_exitcond1_fu_289_p2();
    void thread_exitcond2_fu_226_p2();
    void thread_exitcond_fu_322_p2();
    void thread_fold1_i_cast_fu_523_p2();
    void thread_fold2_i_cast_fu_561_p2();
    void thread_fold_i_cast_fu_481_p2();
    void thread_i_1_cast_fu_285_p1();
    void thread_i_5_fu_279_p2();
    void thread_i_6_fu_295_p2();
    void thread_i_cast_fu_249_p1();
    void thread_indvars_iv_next_fu_316_p2();
    void thread_k_2_fu_328_p2();
    void thread_k_3_fu_232_p2();
    void thread_k_cast5_fu_222_p1();
    void thread_not_tmp_17_i_fu_607_p2();
    void thread_r_1_fu_491_p2();
    void thread_r_2_fu_542_p2();
    void thread_r_3_fu_569_p2();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_r_fu_429_p2();
    void thread_t_fu_575_p2();
    void thread_tmp_10_fu_475_p2();
    void thread_tmp_11_fu_507_p2();
    void thread_tmp_121_i_cast_fu_445_p1();
    void thread_tmp_122_i_cast_fu_487_p1();
    void thread_tmp_124_i_cast_fu_539_p1();
    void thread_tmp_125_i_cast_fu_557_p1();
    void thread_tmp_126_i_cast_fu_565_p1();
    void thread_tmp_127_i_cast_fu_603_p1();
    void thread_tmp_127_i_fu_597_p2();
    void thread_tmp_128_i_cast_cast_fu_613_p3();
    void thread_tmp_129_i_cast_fu_627_p1();
    void thread_tmp_129_i_fu_621_p2();
    void thread_tmp_12_fu_513_p4();
    void thread_tmp_15_fu_253_p2();
    void thread_tmp_16_fu_334_p1();
    void thread_tmp_17_fu_405_p4();
    void thread_tmp_18_fu_423_p2();
    void thread_tmp_19_fu_435_p4();
    void thread_tmp_1_fu_349_p3();
    void thread_tmp_20_fu_258_p2();
    void thread_tmp_21_fu_263_p1();
    void thread_tmp_22_fu_268_p2();
    void thread_tmp_23_fu_274_p1();
    void thread_tmp_26_fu_301_p2();
    void thread_tmp_27_fu_306_p1();
    void thread_tmp_28_fu_311_p1();
    void thread_tmp_31_fu_339_p2();
    void thread_tmp_32_fu_345_p1();
    void thread_tmp_33_fu_357_p1();
    void thread_tmp_34_fu_361_p1();
    void thread_tmp_35_fu_547_p4();
    void thread_tmp_39_fu_365_p1();
    void thread_tmp_40_fu_377_p1();
    void thread_tmp_41_fu_389_p1();
    void thread_tmp_42_fu_581_p3();
    void thread_tmp_4_fu_369_p3();
    void thread_tmp_5_fu_381_p3();
    void thread_tmp_7_fu_449_p2();
    void thread_tmp_8_fu_455_p4();
    void thread_tmp_9_fu_465_p4();
    void thread_tmp_fu_238_p1();
    void thread_tmp_i_cast_30_fu_419_p1();
    void thread_tmp_i_cast_fu_415_p1();
    void thread_tmp_s_fu_243_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
