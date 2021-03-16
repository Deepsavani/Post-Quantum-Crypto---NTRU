// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sample_iid_plus_HH_
#define _sample_iid_plus_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1.h"

namespace ap_rtl {

struct sample_iid_plus : public sc_module {
    // Port declarations 20
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
    sc_out< sc_lv<11> > uniformbytes_address0;
    sc_out< sc_logic > uniformbytes_ce0;
    sc_in< sc_lv<8> > uniformbytes_q0;
    sc_in< sc_lv<12> > uniformbytes_offset;


    // Module declarations
    sample_iid_plus(sc_module_name name);
    SC_HAS_PROCESS(sample_iid_plus);

    ~sample_iid_plus();

    sc_trace_file* mVcdFile;

    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>* crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U30;
    sc_signal< sc_lv<13> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<11> > tmp_12_fu_220_p1;
    sc_signal< sc_lv<11> > tmp_12_reg_589;
    sc_signal< sc_lv<10> > i_8_fu_230_p2;
    sc_signal< sc_lv<10> > i_8_reg_597;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_i_fu_224_p2;
    sc_signal< sc_lv<3> > r_2_fu_362_p2;
    sc_signal< sc_lv<3> > r_2_reg_607;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > i_4_fu_440_p2;
    sc_signal< sc_lv<10> > i_4_reg_616;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<10> > r_coeffs_addr_reg_621;
    sc_signal< sc_lv<1> > exitcond2_fu_434_p2;
    sc_signal< sc_lv<10> > i_5_fu_484_p2;
    sc_signal< sc_lv<10> > i_5_reg_629;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > exitcond1_fu_478_p2;
    sc_signal< sc_lv<1> > tmp_22_reg_644;
    sc_signal< sc_lv<16> > r_coeffs_load_1_reg_649;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<16> > r_coeffs_load_2_reg_654;
    sc_signal< sc_lv<16> > grp_fu_583_p3;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<10> > r_coeffs_addr_3_reg_667;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > tmp_3_fu_508_p2;
    sc_signal< sc_lv<10> > i_6_fu_519_p2;
    sc_signal< sc_lv<10> > i_6_reg_672;
    sc_signal< sc_lv<10> > i_7_fu_545_p2;
    sc_signal< sc_lv<10> > i_7_reg_680;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<10> > r_coeffs_addr_4_reg_685;
    sc_signal< sc_lv<1> > exitcond_fu_539_p2;
    sc_signal< sc_lv<10> > i_i_reg_152;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<10> > i_reg_164;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > i_1_reg_175;
    sc_signal< sc_lv<16> > s_reg_186;
    sc_signal< sc_lv<10> > i_2_reg_198;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<10> > i_3_reg_209;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > sum_i_cast_fu_245_p1;
    sc_signal< sc_lv<64> > tmp_i_fu_368_p1;
    sc_signal< sc_lv<64> > tmp_fu_446_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_490_p1;
    sc_signal< sc_lv<64> > tmp_1_fu_495_p1;
    sc_signal< sc_lv<64> > tmp_7_fu_514_p1;
    sc_signal< sc_lv<64> > tmp_10_fu_551_p1;
    sc_signal< sc_lv<16> > tmp_306_i_i_fu_427_p2;
    sc_signal< sc_lv<16> > tmp_6_fu_471_p2;
    sc_signal< sc_lv<16> > tmp_9_fu_531_p3;
    sc_signal< sc_lv<16> > tmp_13_cast_fu_578_p1;
    sc_signal< sc_lv<11> > tmp_i_cast_fu_236_p1;
    sc_signal< sc_lv<11> > sum_i_fu_240_p2;
    sc_signal< sc_lv<4> > tmp_8_fu_254_p4;
    sc_signal< sc_lv<4> > tmp_14_fu_250_p1;
    sc_signal< sc_lv<5> > tmp_298_i_i_cast_fu_268_p1;
    sc_signal< sc_lv<5> > tmp_297_i_i_cast_fu_264_p1;
    sc_signal< sc_lv<5> > r_fu_278_p2;
    sc_signal< sc_lv<3> > tmp_17_fu_284_p4;
    sc_signal< sc_lv<2> > tmp_15_fu_302_p4;
    sc_signal< sc_lv<2> > tmp_19_fu_298_p1;
    sc_signal< sc_lv<2> > fold1_i_i_cast_fu_312_p2;
    sc_signal< sc_lv<4> > tmp_300_i_i_cast_fu_318_p1;
    sc_signal< sc_lv<4> > tmp_299_i_i_cast_fu_294_p1;
    sc_signal< sc_lv<4> > r_1_fu_322_p2;
    sc_signal< sc_lv<2> > tmp_18_fu_328_p4;
    sc_signal< sc_lv<4> > tmp_11_fu_272_p2;
    sc_signal< sc_lv<2> > tmp_16_fu_342_p4;
    sc_signal< sc_lv<2> > fold2_i_i_cast_fu_352_p2;
    sc_signal< sc_lv<3> > tmp_302_i_i_cast_fu_358_p1;
    sc_signal< sc_lv<3> > tmp_301_i_i_cast_fu_338_p1;
    sc_signal< sc_lv<3> > t_fu_373_p2;
    sc_signal< sc_lv<1> > tmp_21_fu_378_p3;
    sc_signal< sc_lv<3> > c_cast_fu_386_p3;
    sc_signal< sc_lv<3> > tmp_303_i_i_fu_394_p2;
    sc_signal< sc_lv<1> > not_tmp_240_i_i_fu_403_p2;
    sc_signal< sc_lv<3> > tmp_304_i_i_cast_cas_fu_409_p3;
    sc_signal< sc_lv<3> > tmp_305_i_i_fu_417_p2;
    sc_signal< sc_lv<16> > tmp_303_i_i_cast_fu_399_p1;
    sc_signal< sc_lv<16> > tmp_305_i_i_cast_fu_423_p1;
    sc_signal< sc_lv<15> > tmp_4_fu_451_p4;
    sc_signal< sc_lv<16> > tmp_20_fu_461_p1;
    sc_signal< sc_lv<16> > tmp_5_fu_465_p2;
    sc_signal< sc_lv<16> > mt_fu_525_p2;
    sc_signal< sc_lv<1> > tmp_24_fu_560_p3;
    sc_signal< sc_lv<2> > tmp_11_cast_fu_568_p1;
    sc_signal< sc_lv<2> > tmp_23_fu_556_p1;
    sc_signal< sc_lv<2> > tmp_13_fu_572_p2;
    sc_signal< sc_lv<13> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<13> ap_ST_fsm_state1;
    static const sc_lv<13> ap_ST_fsm_state2;
    static const sc_lv<13> ap_ST_fsm_state3;
    static const sc_lv<13> ap_ST_fsm_state4;
    static const sc_lv<13> ap_ST_fsm_state5;
    static const sc_lv<13> ap_ST_fsm_state6;
    static const sc_lv<13> ap_ST_fsm_state7;
    static const sc_lv<13> ap_ST_fsm_state8;
    static const sc_lv<13> ap_ST_fsm_state9;
    static const sc_lv<13> ap_ST_fsm_state10;
    static const sc_lv<13> ap_ST_fsm_state11;
    static const sc_lv<13> ap_ST_fsm_state12;
    static const sc_lv<13> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<64> ap_const_lv64_2BC;
    static const sc_lv<10> ap_const_lv10_2BC;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<10> ap_const_lv10_2BD;
    static const sc_lv<10> ap_const_lv10_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
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
    void thread_c_cast_fu_386_p3();
    void thread_exitcond1_fu_478_p2();
    void thread_exitcond2_fu_434_p2();
    void thread_exitcond_fu_539_p2();
    void thread_exitcond_i_fu_224_p2();
    void thread_fold1_i_i_cast_fu_312_p2();
    void thread_fold2_i_i_cast_fu_352_p2();
    void thread_i_4_fu_440_p2();
    void thread_i_5_fu_484_p2();
    void thread_i_6_fu_519_p2();
    void thread_i_7_fu_545_p2();
    void thread_i_8_fu_230_p2();
    void thread_mt_fu_525_p2();
    void thread_not_tmp_240_i_i_fu_403_p2();
    void thread_r_1_fu_322_p2();
    void thread_r_2_fu_362_p2();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_r_fu_278_p2();
    void thread_sum_i_cast_fu_245_p1();
    void thread_sum_i_fu_240_p2();
    void thread_t_fu_373_p2();
    void thread_tmp_10_fu_551_p1();
    void thread_tmp_11_cast_fu_568_p1();
    void thread_tmp_11_fu_272_p2();
    void thread_tmp_12_fu_220_p1();
    void thread_tmp_13_cast_fu_578_p1();
    void thread_tmp_13_fu_572_p2();
    void thread_tmp_14_fu_250_p1();
    void thread_tmp_15_fu_302_p4();
    void thread_tmp_16_fu_342_p4();
    void thread_tmp_17_fu_284_p4();
    void thread_tmp_18_fu_328_p4();
    void thread_tmp_19_fu_298_p1();
    void thread_tmp_1_fu_495_p1();
    void thread_tmp_20_fu_461_p1();
    void thread_tmp_21_fu_378_p3();
    void thread_tmp_23_fu_556_p1();
    void thread_tmp_24_fu_560_p3();
    void thread_tmp_297_i_i_cast_fu_264_p1();
    void thread_tmp_298_i_i_cast_fu_268_p1();
    void thread_tmp_299_i_i_cast_fu_294_p1();
    void thread_tmp_300_i_i_cast_fu_318_p1();
    void thread_tmp_301_i_i_cast_fu_338_p1();
    void thread_tmp_302_i_i_cast_fu_358_p1();
    void thread_tmp_303_i_i_cast_fu_399_p1();
    void thread_tmp_303_i_i_fu_394_p2();
    void thread_tmp_304_i_i_cast_cas_fu_409_p3();
    void thread_tmp_305_i_i_cast_fu_423_p1();
    void thread_tmp_305_i_i_fu_417_p2();
    void thread_tmp_306_i_i_fu_427_p2();
    void thread_tmp_3_fu_508_p2();
    void thread_tmp_4_fu_451_p4();
    void thread_tmp_5_fu_465_p2();
    void thread_tmp_6_fu_471_p2();
    void thread_tmp_7_fu_514_p1();
    void thread_tmp_8_fu_254_p4();
    void thread_tmp_9_fu_531_p3();
    void thread_tmp_fu_446_p1();
    void thread_tmp_i_cast_fu_236_p1();
    void thread_tmp_i_fu_368_p1();
    void thread_tmp_s_fu_490_p1();
    void thread_uniformbytes_address0();
    void thread_uniformbytes_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
