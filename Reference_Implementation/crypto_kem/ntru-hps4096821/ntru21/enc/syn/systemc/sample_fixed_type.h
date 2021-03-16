// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sample_fixed_type_HH_
#define _sample_fixed_type_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "crypto_sort.h"
#include "sample_fixed_type_s.h"

namespace ap_rtl {

struct sample_fixed_type : public sc_module {
    // Port declarations 16
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
    sc_out< sc_lv<12> > u_address0;
    sc_out< sc_logic > u_ce0;
    sc_in< sc_lv<8> > u_q0;
    sc_out< sc_lv<12> > u_address1;
    sc_out< sc_logic > u_ce1;
    sc_in< sc_lv<8> > u_q1;


    // Module declarations
    sample_fixed_type(sc_module_name name);
    SC_HAS_PROCESS(sample_fixed_type);

    ~sample_fixed_type();

    sc_trace_file* mVcdFile;

    sample_fixed_type_s* s_U;
    crypto_sort* grp_crypto_sort_fu_367;
    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > reg_372;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<8> > reg_376;
    sc_signal< sc_lv<8> > i_4_fu_390_p2;
    sc_signal< sc_lv<8> > i_4_reg_807;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<13> > tmp_fu_408_p2;
    sc_signal< sc_lv<13> > tmp_reg_812;
    sc_signal< sc_lv<1> > exitcond3_fu_384_p2;
    sc_signal< sc_lv<10> > tmp_5_fu_475_p3;
    sc_signal< sc_lv<10> > tmp_5_reg_849;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<2> > tmp_2_reg_856;
    sc_signal< sc_lv<4> > tmp_9_reg_881;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<6> > tmp_12_reg_906;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<8> > i_5_fu_736_p2;
    sc_signal< sc_lv<8> > i_5_reg_929;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<10> > s_addr_4_reg_934;
    sc_signal< sc_lv<1> > exitcond2_fu_730_p2;
    sc_signal< sc_lv<10> > s_addr_5_reg_942;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<1> > exitcond1_fu_754_p2;
    sc_signal< sc_lv<9> > i_6_fu_765_p2;
    sc_signal< sc_lv<9> > i_6_reg_947;
    sc_signal< sc_lv<10> > i_7_fu_784_p2;
    sc_signal< sc_lv<10> > i_7_reg_955;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<64> > tmp_21_fu_790_p1;
    sc_signal< sc_lv<64> > tmp_21_reg_960;
    sc_signal< sc_lv<1> > exitcond_fu_778_p2;
    sc_signal< sc_lv<10> > s_address0;
    sc_signal< sc_logic > s_ce0;
    sc_signal< sc_logic > s_we0;
    sc_signal< sc_lv<32> > s_d0;
    sc_signal< sc_lv<32> > s_q0;
    sc_signal< sc_logic > s_ce1;
    sc_signal< sc_logic > s_we1;
    sc_signal< sc_lv<32> > s_q1;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_ap_start;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_ap_done;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_ap_idle;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_ap_ready;
    sc_signal< sc_lv<10> > grp_crypto_sort_fu_367_array_r_address0;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_array_r_ce0;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_array_r_we0;
    sc_signal< sc_lv<32> > grp_crypto_sort_fu_367_array_r_d0;
    sc_signal< sc_lv<10> > grp_crypto_sort_fu_367_array_r_address1;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_array_r_ce1;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_array_r_we1;
    sc_signal< sc_lv<32> > grp_crypto_sort_fu_367_array_r_d1;
    sc_signal< sc_lv<8> > i_reg_322;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<8> > i_1_reg_334;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<9> > i_2_reg_345;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<10> > i_3_reg_356;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > grp_crypto_sort_fu_367_ap_start_reg;
    sc_signal< sc_lv<64> > sum_cast_fu_420_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_431_p1;
    sc_signal< sc_lv<64> > sum6_cast_fu_441_p1;
    sc_signal< sc_lv<64> > sum8_cast_fu_451_p1;
    sc_signal< sc_lv<64> > tmp_6_fu_483_p1;
    sc_signal< sc_lv<64> > sum1_cast_fu_503_p1;
    sc_signal< sc_lv<64> > sum3_cast_fu_513_p1;
    sc_signal< sc_lv<64> > sum4_cast_fu_523_p1;
    sc_signal< sc_lv<64> > sum5_cast_fu_533_p1;
    sc_signal< sc_lv<64> > tmp_8_fu_563_p1;
    sc_signal< sc_lv<64> > sum7_cast_fu_583_p1;
    sc_signal< sc_lv<64> > sum9_cast_fu_593_p1;
    sc_signal< sc_lv<64> > sum10_cast_fu_603_p1;
    sc_signal< sc_lv<64> > sum11_cast_fu_613_p1;
    sc_signal< sc_lv<64> > tmp_11_fu_643_p1;
    sc_signal< sc_lv<64> > sum12_cast_fu_663_p1;
    sc_signal< sc_lv<64> > sum13_cast_fu_673_p1;
    sc_signal< sc_lv<64> > sum14_cast_fu_683_p1;
    sc_signal< sc_lv<64> > tmp_16_fu_725_p1;
    sc_signal< sc_lv<64> > tmp_17_fu_742_p1;
    sc_signal< sc_lv<64> > tmp_19_fu_760_p1;
    sc_signal< sc_lv<32> > tmp_4_fu_460_p6;
    sc_signal< sc_lv<32> > tmp_3_fu_542_p7;
    sc_signal< sc_lv<32> > tmp_s_fu_622_p7;
    sc_signal< sc_lv<32> > tmp_14_fu_713_p2;
    sc_signal< sc_lv<32> > tmp_18_fu_747_p2;
    sc_signal< sc_lv<32> > tmp_20_fu_771_p2;
    sc_signal< sc_lv<16> > tmp_92_cast_fu_799_p1;
    sc_signal< sc_lv<12> > p_shl_fu_396_p3;
    sc_signal< sc_lv<13> > p_shl_cast_fu_404_p1;
    sc_signal< sc_lv<13> > i_cast1_fu_380_p1;
    sc_signal< sc_lv<13> > sum_fu_414_p2;
    sc_signal< sc_lv<13> > sum2_fu_425_p2;
    sc_signal< sc_lv<13> > sum6_fu_436_p2;
    sc_signal< sc_lv<13> > sum8_fu_446_p2;
    sc_signal< sc_lv<6> > tmp_10_fu_456_p1;
    sc_signal< sc_lv<13> > sum1_fu_498_p2;
    sc_signal< sc_lv<13> > sum3_fu_508_p2;
    sc_signal< sc_lv<13> > sum4_fu_518_p2;
    sc_signal< sc_lv<13> > sum5_fu_528_p2;
    sc_signal< sc_lv<4> > tmp_24_fu_538_p1;
    sc_signal< sc_lv<10> > tmp_7_fu_558_p2;
    sc_signal< sc_lv<13> > sum7_fu_578_p2;
    sc_signal< sc_lv<13> > sum9_fu_588_p2;
    sc_signal< sc_lv<13> > sum10_fu_598_p2;
    sc_signal< sc_lv<13> > sum11_fu_608_p2;
    sc_signal< sc_lv<2> > tmp_25_fu_618_p1;
    sc_signal< sc_lv<10> > tmp_1_fu_638_p2;
    sc_signal< sc_lv<13> > sum12_fu_658_p2;
    sc_signal< sc_lv<13> > sum13_fu_668_p2;
    sc_signal< sc_lv<13> > sum14_fu_678_p2;
    sc_signal< sc_lv<16> > tmp_13_fu_688_p4;
    sc_signal< sc_lv<32> > tmp9_fu_701_p5;
    sc_signal< sc_lv<32> > tmp_73_cast_fu_697_p1;
    sc_signal< sc_lv<10> > tmp_15_fu_720_p2;
    sc_signal< sc_lv<2> > tmp_26_fu_795_p1;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_state2;
    static const sc_lv<17> ap_ST_fsm_state3;
    static const sc_lv<17> ap_ST_fsm_state4;
    static const sc_lv<17> ap_ST_fsm_state5;
    static const sc_lv<17> ap_ST_fsm_state6;
    static const sc_lv<17> ap_ST_fsm_state7;
    static const sc_lv<17> ap_ST_fsm_state8;
    static const sc_lv<17> ap_ST_fsm_state9;
    static const sc_lv<17> ap_ST_fsm_state10;
    static const sc_lv<17> ap_ST_fsm_state11;
    static const sc_lv<17> ap_ST_fsm_state12;
    static const sc_lv<17> ap_ST_fsm_state13;
    static const sc_lv<17> ap_ST_fsm_state14;
    static const sc_lv<17> ap_ST_fsm_state15;
    static const sc_lv<17> ap_ST_fsm_state16;
    static const sc_lv<17> ap_ST_fsm_state17;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<9> ap_const_lv9_FF;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<64> ap_const_lv64_334;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<8> ap_const_lv8_CD;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<13> ap_const_lv13_334;
    static const sc_lv<13> ap_const_lv13_335;
    static const sc_lv<13> ap_const_lv13_336;
    static const sc_lv<13> ap_const_lv13_337;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<13> ap_const_lv13_338;
    static const sc_lv<13> ap_const_lv13_339;
    static const sc_lv<13> ap_const_lv13_33A;
    static const sc_lv<13> ap_const_lv13_33B;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<13> ap_const_lv13_33C;
    static const sc_lv<13> ap_const_lv13_33D;
    static const sc_lv<13> ap_const_lv13_33E;
    static const sc_lv<13> ap_const_lv13_33F;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<13> ap_const_lv13_340;
    static const sc_lv<13> ap_const_lv13_341;
    static const sc_lv<13> ap_const_lv13_342;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<9> ap_const_lv9_1FE;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<10> ap_const_lv10_334;
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
    void thread_ap_CS_fsm_state17();
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
    void thread_exitcond1_fu_754_p2();
    void thread_exitcond2_fu_730_p2();
    void thread_exitcond3_fu_384_p2();
    void thread_exitcond_fu_778_p2();
    void thread_grp_crypto_sort_fu_367_ap_start();
    void thread_i_4_fu_390_p2();
    void thread_i_5_fu_736_p2();
    void thread_i_6_fu_765_p2();
    void thread_i_7_fu_784_p2();
    void thread_i_cast1_fu_380_p1();
    void thread_p_shl_cast_fu_404_p1();
    void thread_p_shl_fu_396_p3();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_we0();
    void thread_s_address0();
    void thread_s_ce0();
    void thread_s_ce1();
    void thread_s_d0();
    void thread_s_we0();
    void thread_s_we1();
    void thread_sum10_cast_fu_603_p1();
    void thread_sum10_fu_598_p2();
    void thread_sum11_cast_fu_613_p1();
    void thread_sum11_fu_608_p2();
    void thread_sum12_cast_fu_663_p1();
    void thread_sum12_fu_658_p2();
    void thread_sum13_cast_fu_673_p1();
    void thread_sum13_fu_668_p2();
    void thread_sum14_cast_fu_683_p1();
    void thread_sum14_fu_678_p2();
    void thread_sum1_cast_fu_503_p1();
    void thread_sum1_fu_498_p2();
    void thread_sum2_cast_fu_431_p1();
    void thread_sum2_fu_425_p2();
    void thread_sum3_cast_fu_513_p1();
    void thread_sum3_fu_508_p2();
    void thread_sum4_cast_fu_523_p1();
    void thread_sum4_fu_518_p2();
    void thread_sum5_cast_fu_533_p1();
    void thread_sum5_fu_528_p2();
    void thread_sum6_cast_fu_441_p1();
    void thread_sum6_fu_436_p2();
    void thread_sum7_cast_fu_583_p1();
    void thread_sum7_fu_578_p2();
    void thread_sum8_cast_fu_451_p1();
    void thread_sum8_fu_446_p2();
    void thread_sum9_cast_fu_593_p1();
    void thread_sum9_fu_588_p2();
    void thread_sum_cast_fu_420_p1();
    void thread_sum_fu_414_p2();
    void thread_tmp9_fu_701_p5();
    void thread_tmp_10_fu_456_p1();
    void thread_tmp_11_fu_643_p1();
    void thread_tmp_13_fu_688_p4();
    void thread_tmp_14_fu_713_p2();
    void thread_tmp_15_fu_720_p2();
    void thread_tmp_16_fu_725_p1();
    void thread_tmp_17_fu_742_p1();
    void thread_tmp_18_fu_747_p2();
    void thread_tmp_19_fu_760_p1();
    void thread_tmp_1_fu_638_p2();
    void thread_tmp_20_fu_771_p2();
    void thread_tmp_21_fu_790_p1();
    void thread_tmp_24_fu_538_p1();
    void thread_tmp_25_fu_618_p1();
    void thread_tmp_26_fu_795_p1();
    void thread_tmp_3_fu_542_p7();
    void thread_tmp_4_fu_460_p6();
    void thread_tmp_5_fu_475_p3();
    void thread_tmp_6_fu_483_p1();
    void thread_tmp_73_cast_fu_697_p1();
    void thread_tmp_7_fu_558_p2();
    void thread_tmp_8_fu_563_p1();
    void thread_tmp_92_cast_fu_799_p1();
    void thread_tmp_fu_408_p2();
    void thread_tmp_s_fu_622_p7();
    void thread_u_address0();
    void thread_u_address1();
    void thread_u_ce0();
    void thread_u_ce1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
