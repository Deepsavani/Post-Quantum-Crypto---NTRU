// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_lift_HH_
#define _poly_lift_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "crypto_kem_dec_mac_muladd_16s_2ns_16ns_16_1_1.h"
#include "crypto_kem_dec_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1.h"
#include "crypto_kem_dec_mac_muladd_2ns_16s_16ns_16_1_1.h"
#include "poly_lift_b_coeffs.h"

namespace ap_rtl {

struct poly_lift : public sc_module {
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
    sc_out< sc_lv<10> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;
    sc_out< sc_lv<10> > a_coeffs_address1;
    sc_out< sc_logic > a_coeffs_ce1;
    sc_in< sc_lv<16> > a_coeffs_q1;
    sc_signal< sc_lv<3> > ap_var_for_const0;


    // Module declarations
    poly_lift(sc_module_name name);
    SC_HAS_PROCESS(poly_lift);

    ~poly_lift();

    sc_trace_file* mVcdFile;

    poly_lift_b_coeffs* b_coeffs_U;
    crypto_kem_dec_mac_muladd_16s_2ns_16ns_16_1_1<1,1,16,2,16,16>* crypto_kem_dec_mac_muladd_16s_2ns_16ns_16_1_1_U23;
    crypto_kem_dec_mac_muladd_16s_2ns_16ns_16_1_1<1,1,16,2,16,16>* crypto_kem_dec_mac_muladd_16s_2ns_16ns_16_1_1_U24;
    crypto_kem_dec_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1<1,1,2,3,16,16,16>* crypto_kem_dec_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1_U25;
    crypto_kem_dec_mac_muladd_2ns_16s_16ns_16_1_1<1,1,2,16,16,16>* crypto_kem_dec_mac_muladd_2ns_16s_16ns_16_1_1_U26;
    crypto_kem_dec_mac_muladd_2ns_16s_16ns_16_1_1<1,1,2,16,16,16>* crypto_kem_dec_mac_muladd_2ns_16s_16ns_16_1_1_U27;
    sc_signal< sc_lv<21> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > b_coeffs_q1;
    sc_signal< sc_lv<16> > reg_392;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<16> > a_coeffs_load_reg_1028;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<16> > a_coeffs_load_1_reg_1035;
    sc_signal< sc_lv<10> > b_coeffs_addr_1_reg_1046;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<16> > tmp_fu_396_p2;
    sc_signal< sc_lv<10> > b_coeffs_addr_reg_1061;
    sc_signal< sc_lv<10> > b_coeffs_addr_2_reg_1067;
    sc_signal< sc_lv<3> > zj_cast9_fu_402_p1;
    sc_signal< sc_lv<3> > zj_cast9_reg_1073;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<16> > zj_cast_fu_406_p1;
    sc_signal< sc_lv<16> > zj_cast_reg_1078;
    sc_signal< sc_lv<1> > exitcond2_fu_410_p2;
    sc_signal< sc_lv<10> > i_4_fu_421_p2;
    sc_signal< sc_lv<10> > i_4_reg_1091;
    sc_signal< sc_lv<16> > grp_fu_982_p3;
    sc_signal< sc_lv<16> > tmp_5_reg_1096;
    sc_signal< sc_lv<16> > grp_fu_989_p3;
    sc_signal< sc_lv<16> > tmp1_reg_1101;
    sc_signal< sc_lv<16> > a_coeffs_load_3_reg_1106;
    sc_signal< sc_lv<2> > grp_fu_385_p2;
    sc_signal< sc_lv<2> > tmp_13_reg_1113;
    sc_signal< sc_lv<16> > b_coeffs_q0;
    sc_signal< sc_lv<16> > b_coeffs_load_1_reg_1118;
    sc_signal< sc_lv<2> > tmp_19_fu_448_p3;
    sc_signal< sc_lv<2> > tmp_19_reg_1123;
    sc_signal< sc_lv<16> > grp_fu_996_p4;
    sc_signal< sc_lv<16> > tmp_12_reg_1128;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<16> > grp_fu_1005_p3;
    sc_signal< sc_lv<16> > tmp_15_reg_1133;
    sc_signal< sc_lv<16> > grp_fu_1012_p3;
    sc_signal< sc_lv<16> > tmp_17_reg_1138;
    sc_signal< sc_lv<64> > tmp_22_fu_471_p1;
    sc_signal< sc_lv<64> > tmp_22_reg_1147;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > exitcond1_fu_465_p2;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<15> > tmp_28_fu_509_p1;
    sc_signal< sc_lv<15> > tmp_28_reg_1177;
    sc_signal< sc_lv<10> > i_5_fu_513_p2;
    sc_signal< sc_lv<10> > i_5_reg_1182;
    sc_signal< sc_lv<16> > tmp_32_fu_546_p2;
    sc_signal< sc_lv<16> > tmp_32_reg_1187;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<10> > i_6_fu_558_p2;
    sc_signal< sc_lv<10> > i_6_reg_1195;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<10> > b_coeffs_addr_6_reg_1200;
    sc_signal< sc_lv<1> > exitcond_fu_552_p2;
    sc_signal< sc_lv<4> > tmp_263_i_cast_reg_1205;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<2> > fold1_i_cast_fu_753_p2;
    sc_signal< sc_lv<2> > fold1_i_cast_reg_1210;
    sc_signal< sc_lv<2> > tmp_48_reg_1216;
    sc_signal< sc_lv<10> > i_7_fu_874_p2;
    sc_signal< sc_lv<10> > i_7_reg_1224;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<10> > b_coeffs_addr_7_reg_1229;
    sc_signal< sc_lv<1> > exitcond_i_fu_868_p2;
    sc_signal< sc_lv<10> > i_8_fu_936_p2;
    sc_signal< sc_lv<10> > i_8_reg_1238;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<1> > tmp_i6_fu_930_p2;
    sc_signal< sc_lv<64> > tmp_235_i_fu_947_p1;
    sc_signal< sc_lv<64> > tmp_235_i_reg_1248;
    sc_signal< sc_lv<10> > b_coeffs_address0;
    sc_signal< sc_logic > b_coeffs_ce0;
    sc_signal< sc_logic > b_coeffs_we0;
    sc_signal< sc_lv<16> > b_coeffs_d0;
    sc_signal< sc_lv<10> > b_coeffs_address1;
    sc_signal< sc_logic > b_coeffs_ce1;
    sc_signal< sc_logic > b_coeffs_we1;
    sc_signal< sc_lv<16> > b_coeffs_d1;
    sc_signal< sc_lv<16> > tmp_s_reg_288;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > tmp_1_reg_298;
    sc_signal< sc_lv<16> > tmp_2_reg_308;
    sc_signal< sc_lv<10> > i_reg_317;
    sc_signal< sc_lv<2> > ap_phi_mux_zj_phi_fu_332_p4;
    sc_signal< sc_lv<2> > zj_reg_328;
    sc_signal< sc_lv<10> > i_1_reg_340;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<10> > i_2_reg_352;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<10> > i_i_reg_363;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<10> > i_i5_reg_374;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<64> > tmp_7_fu_416_p1;
    sc_signal< sc_lv<64> > tmp_21_fu_482_p1;
    sc_signal< sc_lv<64> > tmp_24_fu_493_p1;
    sc_signal< sc_lv<64> > tmp_26_fu_504_p1;
    sc_signal< sc_lv<64> > tmp_33_fu_564_p1;
    sc_signal< sc_lv<64> > tmp_i3_fu_880_p1;
    sc_signal< sc_lv<64> > tmp_i7_fu_942_p1;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<16> > tmp_9_fu_459_p2;
    sc_signal< sc_lv<16> > tmp_270_i_fu_861_p2;
    sc_signal< sc_lv<16> > tmp_39_i_fu_921_p3;
    sc_signal< sc_lv<16> > tmp_237_i_cast_fu_962_p1;
    sc_signal< sc_lv<16> > tmp_239_i_cast_fu_977_p1;
    sc_signal< sc_lv<2> > grp_fu_385_p0;
    sc_signal< sc_lv<2> > tmp_6_fu_431_p1;
    sc_signal< sc_lv<1> > tmp_18_fu_436_p2;
    sc_signal< sc_lv<2> > tmp_27_fu_442_p2;
    sc_signal< sc_lv<10> > tmp_20_fu_476_p2;
    sc_signal< sc_lv<10> > tmp_23_fu_487_p2;
    sc_signal< sc_lv<10> > tmp_25_fu_498_p2;
    sc_signal< sc_lv<15> > tmp_34_fu_523_p1;
    sc_signal< sc_lv<15> > tmp2_fu_527_p2;
    sc_signal< sc_lv<15> > tmp_29_fu_519_p1;
    sc_signal< sc_lv<15> > tmp_30_fu_532_p2;
    sc_signal< sc_lv<16> > tmp_31_fu_538_p3;
    sc_signal< sc_lv<7> > tmp_37_fu_575_p1;
    sc_signal< sc_lv<3> > tmp_49_fu_595_p1;
    sc_signal< sc_lv<1> > tmp_50_fu_607_p1;
    sc_signal< sc_lv<16> > tmp_35_fu_569_p2;
    sc_signal< sc_lv<8> > tmp_36_fu_579_p3;
    sc_signal< sc_lv<8> > tmp_38_fu_587_p1;
    sc_signal< sc_lv<16> > a_assign_fu_623_p2;
    sc_signal< sc_lv<8> > tmp_53_fu_635_p4;
    sc_signal< sc_lv<8> > a_assign_cast_fu_629_p2;
    sc_signal< sc_lv<9> > tmp_i_cast_fu_645_p1;
    sc_signal< sc_lv<9> > tmp_i_cast_27_fu_649_p1;
    sc_signal< sc_lv<9> > r_fu_659_p2;
    sc_signal< sc_lv<5> > tmp_57_fu_665_p4;
    sc_signal< sc_lv<4> > tmp_39_fu_599_p3;
    sc_signal< sc_lv<4> > tmp_41_fu_591_p1;
    sc_signal< sc_lv<2> > tmp_40_fu_611_p3;
    sc_signal< sc_lv<2> > tmp_51_fu_619_p1;
    sc_signal< sc_lv<4> > tmp_42_fu_679_p2;
    sc_signal< sc_lv<4> > tmp_43_fu_685_p4;
    sc_signal< sc_lv<4> > fold_i_cast_fu_711_p2;
    sc_signal< sc_lv<6> > tmp_261_i_cast_fu_675_p1;
    sc_signal< sc_lv<6> > tmp_262_i_cast_fu_717_p1;
    sc_signal< sc_lv<6> > r_1_fu_721_p2;
    sc_signal< sc_lv<2> > tmp_45_fu_705_p2;
    sc_signal< sc_lv<2> > tmp_44_fu_695_p4;
    sc_signal< sc_lv<8> > tmp_56_fu_653_p2;
    sc_signal< sc_lv<2> > tmp_46_fu_737_p2;
    sc_signal< sc_lv<2> > tmp_47_fu_743_p4;
    sc_signal< sc_lv<4> > tmp_264_i_cast_fu_769_p1;
    sc_signal< sc_lv<4> > r_2_fu_772_p2;
    sc_signal< sc_lv<2> > tmp_58_fu_777_p4;
    sc_signal< sc_lv<2> > fold2_i_cast_fu_791_p2;
    sc_signal< sc_lv<3> > tmp_265_i_cast_fu_787_p1;
    sc_signal< sc_lv<3> > tmp_266_i_cast_fu_795_p1;
    sc_signal< sc_lv<3> > r_3_fu_799_p2;
    sc_signal< sc_lv<3> > t_fu_805_p2;
    sc_signal< sc_lv<1> > tmp_59_fu_811_p3;
    sc_signal< sc_lv<3> > c_cast_fu_819_p3;
    sc_signal< sc_lv<3> > tmp_267_i_fu_827_p2;
    sc_signal< sc_lv<1> > not_tmp_87_i_fu_837_p2;
    sc_signal< sc_lv<3> > tmp_268_i_cast_cast_fu_843_p3;
    sc_signal< sc_lv<3> > tmp_269_i_fu_851_p2;
    sc_signal< sc_lv<16> > tmp_267_i_cast_fu_833_p1;
    sc_signal< sc_lv<16> > tmp_269_i_cast_fu_857_p1;
    sc_signal< sc_lv<13> > tmp_52_fu_885_p4;
    sc_signal< sc_lv<13> > tmp_60_fu_901_p1;
    sc_signal< sc_lv<13> > tmp_37_i_cast_fu_895_p2;
    sc_signal< sc_lv<3> > tmp_55_fu_911_p4;
    sc_signal< sc_lv<13> > tmp_54_fu_905_p2;
    sc_signal< sc_lv<16> > tmp_236_i_fu_952_p2;
    sc_signal< sc_lv<13> > tmp_62_fu_958_p1;
    sc_signal< sc_lv<16> > tmp_238_i_fu_967_p2;
    sc_signal< sc_lv<13> > tmp_61_fu_973_p1;
    sc_signal< sc_lv<2> > grp_fu_982_p1;
    sc_signal< sc_lv<16> > tmp_3_cast_fu_427_p1;
    sc_signal< sc_lv<2> > grp_fu_989_p1;
    sc_signal< sc_lv<16> > grp_fu_989_p2;
    sc_signal< sc_lv<2> > grp_fu_996_p0;
    sc_signal< sc_lv<2> > grp_fu_1005_p0;
    sc_signal< sc_lv<2> > grp_fu_1012_p0;
    sc_signal< sc_lv<21> > ap_NS_fsm;
    sc_signal< sc_lv<16> > grp_fu_1005_p00;
    sc_signal< sc_lv<16> > tmp_6_fu_431_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<21> ap_ST_fsm_state1;
    static const sc_lv<21> ap_ST_fsm_state2;
    static const sc_lv<21> ap_ST_fsm_state3;
    static const sc_lv<21> ap_ST_fsm_state4;
    static const sc_lv<21> ap_ST_fsm_state5;
    static const sc_lv<21> ap_ST_fsm_state6;
    static const sc_lv<21> ap_ST_fsm_state7;
    static const sc_lv<21> ap_ST_fsm_state8;
    static const sc_lv<21> ap_ST_fsm_state9;
    static const sc_lv<21> ap_ST_fsm_state10;
    static const sc_lv<21> ap_ST_fsm_state11;
    static const sc_lv<21> ap_ST_fsm_state12;
    static const sc_lv<21> ap_ST_fsm_state13;
    static const sc_lv<21> ap_ST_fsm_state14;
    static const sc_lv<21> ap_ST_fsm_state15;
    static const sc_lv<21> ap_ST_fsm_state16;
    static const sc_lv<21> ap_ST_fsm_state17;
    static const sc_lv<21> ap_ST_fsm_state18;
    static const sc_lv<21> ap_ST_fsm_state19;
    static const sc_lv<21> ap_ST_fsm_state20;
    static const sc_lv<21> ap_ST_fsm_state21;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<10> ap_const_lv10_2BC;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_2BC;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<10> ap_const_lv10_2BD;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<10> ap_const_lv10_3FD;
    static const sc_lv<10> ap_const_lv10_3FF;
    static const sc_lv<10> ap_const_lv10_3FE;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<3> ap_const_lv3_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_a_assign_cast_fu_629_p2();
    void thread_a_assign_fu_623_p2();
    void thread_a_coeffs_address0();
    void thread_a_coeffs_address1();
    void thread_a_coeffs_ce0();
    void thread_a_coeffs_ce1();
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
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_zj_phi_fu_332_p4();
    void thread_ap_ready();
    void thread_b_coeffs_addr_1_reg_1046();
    void thread_b_coeffs_addr_2_reg_1067();
    void thread_b_coeffs_addr_reg_1061();
    void thread_b_coeffs_address0();
    void thread_b_coeffs_address1();
    void thread_b_coeffs_ce0();
    void thread_b_coeffs_ce1();
    void thread_b_coeffs_d0();
    void thread_b_coeffs_d1();
    void thread_b_coeffs_we0();
    void thread_b_coeffs_we1();
    void thread_c_cast_fu_819_p3();
    void thread_exitcond1_fu_465_p2();
    void thread_exitcond2_fu_410_p2();
    void thread_exitcond_fu_552_p2();
    void thread_exitcond_i_fu_868_p2();
    void thread_fold1_i_cast_fu_753_p2();
    void thread_fold2_i_cast_fu_791_p2();
    void thread_fold_i_cast_fu_711_p2();
    void thread_grp_fu_1005_p0();
    void thread_grp_fu_1005_p00();
    void thread_grp_fu_1012_p0();
    void thread_grp_fu_385_p0();
    void thread_grp_fu_385_p2();
    void thread_grp_fu_982_p1();
    void thread_grp_fu_989_p1();
    void thread_grp_fu_989_p2();
    void thread_grp_fu_996_p0();
    void thread_i_4_fu_421_p2();
    void thread_i_5_fu_513_p2();
    void thread_i_6_fu_558_p2();
    void thread_i_7_fu_874_p2();
    void thread_i_8_fu_936_p2();
    void thread_not_tmp_87_i_fu_837_p2();
    void thread_r_1_fu_721_p2();
    void thread_r_2_fu_772_p2();
    void thread_r_3_fu_799_p2();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_we0();
    void thread_r_fu_659_p2();
    void thread_t_fu_805_p2();
    void thread_tmp2_fu_527_p2();
    void thread_tmp_18_fu_436_p2();
    void thread_tmp_19_fu_448_p3();
    void thread_tmp_20_fu_476_p2();
    void thread_tmp_21_fu_482_p1();
    void thread_tmp_22_fu_471_p1();
    void thread_tmp_235_i_fu_947_p1();
    void thread_tmp_236_i_fu_952_p2();
    void thread_tmp_237_i_cast_fu_962_p1();
    void thread_tmp_238_i_fu_967_p2();
    void thread_tmp_239_i_cast_fu_977_p1();
    void thread_tmp_23_fu_487_p2();
    void thread_tmp_24_fu_493_p1();
    void thread_tmp_25_fu_498_p2();
    void thread_tmp_261_i_cast_fu_675_p1();
    void thread_tmp_262_i_cast_fu_717_p1();
    void thread_tmp_264_i_cast_fu_769_p1();
    void thread_tmp_265_i_cast_fu_787_p1();
    void thread_tmp_266_i_cast_fu_795_p1();
    void thread_tmp_267_i_cast_fu_833_p1();
    void thread_tmp_267_i_fu_827_p2();
    void thread_tmp_268_i_cast_cast_fu_843_p3();
    void thread_tmp_269_i_cast_fu_857_p1();
    void thread_tmp_269_i_fu_851_p2();
    void thread_tmp_26_fu_504_p1();
    void thread_tmp_270_i_fu_861_p2();
    void thread_tmp_27_fu_442_p2();
    void thread_tmp_28_fu_509_p1();
    void thread_tmp_29_fu_519_p1();
    void thread_tmp_30_fu_532_p2();
    void thread_tmp_31_fu_538_p3();
    void thread_tmp_32_fu_546_p2();
    void thread_tmp_33_fu_564_p1();
    void thread_tmp_34_fu_523_p1();
    void thread_tmp_35_fu_569_p2();
    void thread_tmp_36_fu_579_p3();
    void thread_tmp_37_fu_575_p1();
    void thread_tmp_37_i_cast_fu_895_p2();
    void thread_tmp_38_fu_587_p1();
    void thread_tmp_39_fu_599_p3();
    void thread_tmp_39_i_fu_921_p3();
    void thread_tmp_3_cast_fu_427_p1();
    void thread_tmp_40_fu_611_p3();
    void thread_tmp_41_fu_591_p1();
    void thread_tmp_42_fu_679_p2();
    void thread_tmp_43_fu_685_p4();
    void thread_tmp_44_fu_695_p4();
    void thread_tmp_45_fu_705_p2();
    void thread_tmp_46_fu_737_p2();
    void thread_tmp_47_fu_743_p4();
    void thread_tmp_49_fu_595_p1();
    void thread_tmp_50_fu_607_p1();
    void thread_tmp_51_fu_619_p1();
    void thread_tmp_52_fu_885_p4();
    void thread_tmp_53_fu_635_p4();
    void thread_tmp_54_fu_905_p2();
    void thread_tmp_55_fu_911_p4();
    void thread_tmp_56_fu_653_p2();
    void thread_tmp_57_fu_665_p4();
    void thread_tmp_58_fu_777_p4();
    void thread_tmp_59_fu_811_p3();
    void thread_tmp_60_fu_901_p1();
    void thread_tmp_61_fu_973_p1();
    void thread_tmp_62_fu_958_p1();
    void thread_tmp_6_fu_431_p1();
    void thread_tmp_6_fu_431_p10();
    void thread_tmp_7_fu_416_p1();
    void thread_tmp_9_fu_459_p2();
    void thread_tmp_fu_396_p2();
    void thread_tmp_i3_fu_880_p1();
    void thread_tmp_i6_fu_930_p2();
    void thread_tmp_i7_fu_942_p1();
    void thread_tmp_i_cast_27_fu_649_p1();
    void thread_tmp_i_cast_fu_645_p1();
    void thread_zj_cast9_fu_402_p1();
    void thread_zj_cast_fu_406_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
