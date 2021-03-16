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
    sc_out< sc_lv<9> > r_coeffs_address0;
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
    crypto_sort* grp_crypto_sort_fu_365;
    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > reg_370;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<8> > reg_374;
    sc_signal< sc_lv<7> > i_4_fu_388_p2;
    sc_signal< sc_lv<7> > i_4_reg_945;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<12> > tmp_fu_406_p2;
    sc_signal< sc_lv<12> > tmp_reg_950;
    sc_signal< sc_lv<1> > exitcond3_fu_382_p2;
    sc_signal< sc_lv<9> > tmp_7_fu_503_p3;
    sc_signal< sc_lv<9> > tmp_7_reg_987;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<2> > tmp_1_reg_994;
    sc_signal< sc_lv<4> > tmp_16_reg_1019;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<6> > tmp_25_reg_1044;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<7> > i_5_fu_874_p2;
    sc_signal< sc_lv<7> > i_5_reg_1067;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<9> > s_addr_4_reg_1072;
    sc_signal< sc_lv<1> > exitcond2_fu_868_p2;
    sc_signal< sc_lv<9> > s_addr_5_reg_1080;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<1> > exitcond1_fu_892_p2;
    sc_signal< sc_lv<8> > i_6_fu_903_p2;
    sc_signal< sc_lv<8> > i_6_reg_1085;
    sc_signal< sc_lv<9> > i_7_fu_922_p2;
    sc_signal< sc_lv<9> > i_7_reg_1093;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<64> > tmp_37_fu_928_p1;
    sc_signal< sc_lv<64> > tmp_37_reg_1098;
    sc_signal< sc_lv<1> > exitcond_fu_916_p2;
    sc_signal< sc_lv<9> > s_address0;
    sc_signal< sc_logic > s_ce0;
    sc_signal< sc_logic > s_we0;
    sc_signal< sc_lv<32> > s_d0;
    sc_signal< sc_lv<32> > s_q0;
    sc_signal< sc_logic > s_ce1;
    sc_signal< sc_logic > s_we1;
    sc_signal< sc_lv<32> > s_q1;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_ap_start;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_ap_done;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_ap_idle;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_ap_ready;
    sc_signal< sc_lv<9> > grp_crypto_sort_fu_365_array_r_address0;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_array_r_ce0;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_array_r_we0;
    sc_signal< sc_lv<32> > grp_crypto_sort_fu_365_array_r_d0;
    sc_signal< sc_lv<9> > grp_crypto_sort_fu_365_array_r_address1;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_array_r_ce1;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_array_r_we1;
    sc_signal< sc_lv<32> > grp_crypto_sort_fu_365_array_r_d1;
    sc_signal< sc_lv<7> > i_reg_320;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<7> > i_1_reg_332;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<8> > i_2_reg_343;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<9> > i_3_reg_354;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > grp_crypto_sort_fu_365_ap_start_reg;
    sc_signal< sc_lv<64> > sum_cast_fu_418_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_439_p1;
    sc_signal< sc_lv<64> > sum6_cast_fu_459_p1;
    sc_signal< sc_lv<64> > sum8_cast_fu_479_p1;
    sc_signal< sc_lv<64> > tmp_8_fu_511_p1;
    sc_signal< sc_lv<64> > sum1_cast_fu_541_p1;
    sc_signal< sc_lv<64> > sum3_cast_fu_561_p1;
    sc_signal< sc_lv<64> > sum4_cast_fu_581_p1;
    sc_signal< sc_lv<64> > sum5_cast_fu_601_p1;
    sc_signal< sc_lv<64> > tmp_15_fu_631_p1;
    sc_signal< sc_lv<64> > sum7_cast_fu_661_p1;
    sc_signal< sc_lv<64> > sum9_cast_fu_681_p1;
    sc_signal< sc_lv<64> > sum10_cast_fu_701_p1;
    sc_signal< sc_lv<64> > sum11_cast_fu_721_p1;
    sc_signal< sc_lv<64> > tmp_24_fu_751_p1;
    sc_signal< sc_lv<64> > sum12_cast_fu_781_p1;
    sc_signal< sc_lv<64> > sum13_cast_fu_801_p1;
    sc_signal< sc_lv<64> > sum14_cast_fu_821_p1;
    sc_signal< sc_lv<64> > tmp_32_fu_863_p1;
    sc_signal< sc_lv<64> > tmp_33_fu_880_p1;
    sc_signal< sc_lv<64> > tmp_35_fu_898_p1;
    sc_signal< sc_lv<32> > tmp_6_fu_488_p6;
    sc_signal< sc_lv<32> > tmp_13_fu_610_p7;
    sc_signal< sc_lv<32> > tmp_22_fu_730_p7;
    sc_signal< sc_lv<32> > tmp_30_fu_851_p2;
    sc_signal< sc_lv<32> > tmp_34_fu_885_p2;
    sc_signal< sc_lv<32> > tmp_36_fu_909_p2;
    sc_signal< sc_lv<16> > tmp_92_cast_fu_937_p1;
    sc_signal< sc_lv<11> > p_shl_fu_394_p3;
    sc_signal< sc_lv<12> > p_shl_cast_fu_402_p1;
    sc_signal< sc_lv<12> > i_cast1_fu_378_p1;
    sc_signal< sc_lv<12> > sum_fu_412_p2;
    sc_signal< sc_lv<12> > tmp_s_fu_423_p2;
    sc_signal< sc_lv<13> > tmp_1_cast_fu_429_p1;
    sc_signal< sc_lv<13> > sum2_fu_433_p2;
    sc_signal< sc_lv<12> > tmp_4_fu_444_p2;
    sc_signal< sc_lv<13> > tmp_5_cast_fu_449_p1;
    sc_signal< sc_lv<13> > sum6_fu_453_p2;
    sc_signal< sc_lv<12> > tmp_2_fu_464_p2;
    sc_signal< sc_lv<13> > tmp_12_cast_fu_469_p1;
    sc_signal< sc_lv<13> > sum8_fu_473_p2;
    sc_signal< sc_lv<6> > tmp_3_fu_484_p1;
    sc_signal< sc_lv<12> > tmp_5_fu_526_p2;
    sc_signal< sc_lv<13> > tmp_23_cast_fu_531_p1;
    sc_signal< sc_lv<13> > sum1_fu_535_p2;
    sc_signal< sc_lv<12> > tmp_9_fu_546_p2;
    sc_signal< sc_lv<13> > tmp_27_cast_fu_551_p1;
    sc_signal< sc_lv<13> > sum3_fu_555_p2;
    sc_signal< sc_lv<12> > tmp_10_fu_566_p2;
    sc_signal< sc_lv<13> > tmp_31_cast_fu_571_p1;
    sc_signal< sc_lv<13> > sum4_fu_575_p2;
    sc_signal< sc_lv<12> > tmp_11_fu_586_p2;
    sc_signal< sc_lv<13> > tmp_35_cast_fu_591_p1;
    sc_signal< sc_lv<13> > sum5_fu_595_p2;
    sc_signal< sc_lv<4> > tmp_12_fu_606_p1;
    sc_signal< sc_lv<9> > tmp_14_fu_626_p2;
    sc_signal< sc_lv<12> > tmp_17_fu_646_p2;
    sc_signal< sc_lv<13> > tmp_47_cast_fu_651_p1;
    sc_signal< sc_lv<13> > sum7_fu_655_p2;
    sc_signal< sc_lv<12> > tmp_18_fu_666_p2;
    sc_signal< sc_lv<13> > tmp_51_cast_fu_671_p1;
    sc_signal< sc_lv<13> > sum9_fu_675_p2;
    sc_signal< sc_lv<12> > tmp_19_fu_686_p2;
    sc_signal< sc_lv<13> > tmp_55_cast_fu_691_p1;
    sc_signal< sc_lv<13> > sum10_fu_695_p2;
    sc_signal< sc_lv<12> > tmp_20_fu_706_p2;
    sc_signal< sc_lv<13> > tmp_59_cast_fu_711_p1;
    sc_signal< sc_lv<13> > sum11_fu_715_p2;
    sc_signal< sc_lv<2> > tmp_21_fu_726_p1;
    sc_signal< sc_lv<9> > tmp_23_fu_746_p2;
    sc_signal< sc_lv<12> > tmp_26_fu_766_p2;
    sc_signal< sc_lv<13> > tmp_70_cast_fu_771_p1;
    sc_signal< sc_lv<13> > sum12_fu_775_p2;
    sc_signal< sc_lv<12> > tmp_28_fu_786_p2;
    sc_signal< sc_lv<13> > tmp_75_cast_fu_791_p1;
    sc_signal< sc_lv<13> > sum13_fu_795_p2;
    sc_signal< sc_lv<12> > tmp_29_fu_806_p2;
    sc_signal< sc_lv<13> > tmp_79_cast_fu_811_p1;
    sc_signal< sc_lv<13> > sum14_fu_815_p2;
    sc_signal< sc_lv<16> > tmp_27_fu_826_p4;
    sc_signal< sc_lv<32> > tmp_73_cast_fu_835_p1;
    sc_signal< sc_lv<32> > tmp9_fu_839_p5;
    sc_signal< sc_lv<9> > tmp_31_fu_858_p2;
    sc_signal< sc_lv<2> > tmp_38_fu_933_p1;
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
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<64> ap_const_lv64_1FC;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<7> ap_const_lv7_7F;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<12> ap_const_lv12_1FC;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<13> ap_const_lv13_1FC;
    static const sc_lv<12> ap_const_lv12_2;
    static const sc_lv<12> ap_const_lv12_3;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<12> ap_const_lv12_4;
    static const sc_lv<12> ap_const_lv12_5;
    static const sc_lv<12> ap_const_lv12_6;
    static const sc_lv<12> ap_const_lv12_7;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<12> ap_const_lv12_8;
    static const sc_lv<12> ap_const_lv12_9;
    static const sc_lv<12> ap_const_lv12_A;
    static const sc_lv<12> ap_const_lv12_B;
    static const sc_lv<9> ap_const_lv9_2;
    static const sc_lv<12> ap_const_lv12_C;
    static const sc_lv<12> ap_const_lv12_D;
    static const sc_lv<12> ap_const_lv12_E;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<9> ap_const_lv9_3;
    static const sc_lv<8> ap_const_lv8_FE;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<9> ap_const_lv9_1FC;
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
    void thread_exitcond1_fu_892_p2();
    void thread_exitcond2_fu_868_p2();
    void thread_exitcond3_fu_382_p2();
    void thread_exitcond_fu_916_p2();
    void thread_grp_crypto_sort_fu_365_ap_start();
    void thread_i_4_fu_388_p2();
    void thread_i_5_fu_874_p2();
    void thread_i_6_fu_903_p2();
    void thread_i_7_fu_922_p2();
    void thread_i_cast1_fu_378_p1();
    void thread_p_shl_cast_fu_402_p1();
    void thread_p_shl_fu_394_p3();
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
    void thread_sum10_cast_fu_701_p1();
    void thread_sum10_fu_695_p2();
    void thread_sum11_cast_fu_721_p1();
    void thread_sum11_fu_715_p2();
    void thread_sum12_cast_fu_781_p1();
    void thread_sum12_fu_775_p2();
    void thread_sum13_cast_fu_801_p1();
    void thread_sum13_fu_795_p2();
    void thread_sum14_cast_fu_821_p1();
    void thread_sum14_fu_815_p2();
    void thread_sum1_cast_fu_541_p1();
    void thread_sum1_fu_535_p2();
    void thread_sum2_cast_fu_439_p1();
    void thread_sum2_fu_433_p2();
    void thread_sum3_cast_fu_561_p1();
    void thread_sum3_fu_555_p2();
    void thread_sum4_cast_fu_581_p1();
    void thread_sum4_fu_575_p2();
    void thread_sum5_cast_fu_601_p1();
    void thread_sum5_fu_595_p2();
    void thread_sum6_cast_fu_459_p1();
    void thread_sum6_fu_453_p2();
    void thread_sum7_cast_fu_661_p1();
    void thread_sum7_fu_655_p2();
    void thread_sum8_cast_fu_479_p1();
    void thread_sum8_fu_473_p2();
    void thread_sum9_cast_fu_681_p1();
    void thread_sum9_fu_675_p2();
    void thread_sum_cast_fu_418_p1();
    void thread_sum_fu_412_p2();
    void thread_tmp9_fu_839_p5();
    void thread_tmp_10_fu_566_p2();
    void thread_tmp_11_fu_586_p2();
    void thread_tmp_12_cast_fu_469_p1();
    void thread_tmp_12_fu_606_p1();
    void thread_tmp_13_fu_610_p7();
    void thread_tmp_14_fu_626_p2();
    void thread_tmp_15_fu_631_p1();
    void thread_tmp_17_fu_646_p2();
    void thread_tmp_18_fu_666_p2();
    void thread_tmp_19_fu_686_p2();
    void thread_tmp_1_cast_fu_429_p1();
    void thread_tmp_20_fu_706_p2();
    void thread_tmp_21_fu_726_p1();
    void thread_tmp_22_fu_730_p7();
    void thread_tmp_23_cast_fu_531_p1();
    void thread_tmp_23_fu_746_p2();
    void thread_tmp_24_fu_751_p1();
    void thread_tmp_26_fu_766_p2();
    void thread_tmp_27_cast_fu_551_p1();
    void thread_tmp_27_fu_826_p4();
    void thread_tmp_28_fu_786_p2();
    void thread_tmp_29_fu_806_p2();
    void thread_tmp_2_fu_464_p2();
    void thread_tmp_30_fu_851_p2();
    void thread_tmp_31_cast_fu_571_p1();
    void thread_tmp_31_fu_858_p2();
    void thread_tmp_32_fu_863_p1();
    void thread_tmp_33_fu_880_p1();
    void thread_tmp_34_fu_885_p2();
    void thread_tmp_35_cast_fu_591_p1();
    void thread_tmp_35_fu_898_p1();
    void thread_tmp_36_fu_909_p2();
    void thread_tmp_37_fu_928_p1();
    void thread_tmp_38_fu_933_p1();
    void thread_tmp_3_fu_484_p1();
    void thread_tmp_47_cast_fu_651_p1();
    void thread_tmp_4_fu_444_p2();
    void thread_tmp_51_cast_fu_671_p1();
    void thread_tmp_55_cast_fu_691_p1();
    void thread_tmp_59_cast_fu_711_p1();
    void thread_tmp_5_cast_fu_449_p1();
    void thread_tmp_5_fu_526_p2();
    void thread_tmp_6_fu_488_p6();
    void thread_tmp_70_cast_fu_771_p1();
    void thread_tmp_73_cast_fu_835_p1();
    void thread_tmp_75_cast_fu_791_p1();
    void thread_tmp_79_cast_fu_811_p1();
    void thread_tmp_7_fu_503_p3();
    void thread_tmp_8_fu_511_p1();
    void thread_tmp_92_cast_fu_937_p1();
    void thread_tmp_9_fu_546_p2();
    void thread_tmp_fu_406_p2();
    void thread_tmp_s_fu_423_p2();
    void thread_u_address0();
    void thread_u_address1();
    void thread_u_ce0();
    void thread_u_ce1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif