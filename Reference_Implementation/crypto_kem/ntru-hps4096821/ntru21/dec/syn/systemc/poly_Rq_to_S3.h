// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_Rq_to_S3_HH_
#define _poly_Rq_to_S3_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct poly_Rq_to_S3 : public sc_module {
    // Port declarations 19
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


    // Module declarations
    poly_Rq_to_S3(sc_module_name name);
    SC_HAS_PROCESS(poly_Rq_to_S3);

    ~poly_Rq_to_S3();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > i_8_fu_153_p2;
    sc_signal< sc_lv<10> > i_8_reg_749;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > tmp_s_fu_159_p1;
    sc_signal< sc_lv<64> > tmp_s_reg_754;
    sc_signal< sc_lv<1> > exitcond1_fu_147_p2;
    sc_signal< sc_lv<10> > r_coeffs_addr_reg_764;
    sc_signal< sc_lv<2> > tmp_53_reg_770;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<2> > fold2_i_cast_fu_349_p2;
    sc_signal< sc_lv<2> > fold2_i_cast_reg_775;
    sc_signal< sc_lv<10> > i_9_fu_436_p2;
    sc_signal< sc_lv<10> > i_9_reg_783;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > r_coeffs_addr_9_reg_788;
    sc_signal< sc_lv<1> > exitcond_fu_430_p2;
    sc_signal< sc_lv<4> > tmp_123_i8_cast_reg_794;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<2> > fold1_i9_cast_fu_631_p2;
    sc_signal< sc_lv<2> > fold1_i9_cast_reg_799;
    sc_signal< sc_lv<2> > tmp_38_reg_805;
    sc_signal< sc_lv<10> > i_reg_125;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > i_1_reg_136;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > tmp_58_fu_442_p1;
    sc_signal< sc_lv<16> > tmp_57_fu_188_p2;
    sc_signal< sc_lv<16> > tmp_130_i_fu_423_p2;
    sc_signal< sc_lv<4> > tmp_54_fu_164_p4;
    sc_signal< sc_lv<16> > tmp_55_fu_174_p3;
    sc_signal< sc_lv<16> > tmp_56_fu_182_p2;
    sc_signal< sc_lv<8> > tmp_50_fu_199_p4;
    sc_signal< sc_lv<8> > tmp_59_fu_195_p1;
    sc_signal< sc_lv<9> > tmp_i_cast_32_fu_213_p1;
    sc_signal< sc_lv<9> > tmp_i_cast_fu_209_p1;
    sc_signal< sc_lv<9> > r_fu_223_p2;
    sc_signal< sc_lv<5> > tmp_52_fu_229_p4;
    sc_signal< sc_lv<4> > tmp_60_fu_253_p1;
    sc_signal< sc_lv<4> > tmp_fu_243_p4;
    sc_signal< sc_lv<4> > fold_i_cast_fu_271_p2;
    sc_signal< sc_lv<6> > tmp_122_i_cast_fu_277_p1;
    sc_signal< sc_lv<6> > tmp_121_i_cast_fu_239_p1;
    sc_signal< sc_lv<6> > r_4_fu_281_p2;
    sc_signal< sc_lv<2> > tmp_61_fu_257_p1;
    sc_signal< sc_lv<2> > tmp_19_fu_261_p4;
    sc_signal< sc_lv<8> > tmp_51_fu_217_p2;
    sc_signal< sc_lv<2> > tmp_21_fu_303_p4;
    sc_signal< sc_lv<2> > tmp_20_fu_297_p2;
    sc_signal< sc_lv<2> > fold1_i_cast_fu_313_p2;
    sc_signal< sc_lv<4> > tmp_124_i_cast_fu_319_p1;
    sc_signal< sc_lv<4> > tmp_123_i_cast_fu_287_p4;
    sc_signal< sc_lv<4> > r_5_fu_323_p2;
    sc_signal< sc_lv<2> > tmp_22_fu_339_p4;
    sc_signal< sc_lv<3> > tmp_126_i_cast_fu_358_p1;
    sc_signal< sc_lv<3> > tmp_125_i_cast_fu_355_p1;
    sc_signal< sc_lv<3> > r_6_fu_361_p2;
    sc_signal< sc_lv<3> > t_fu_367_p2;
    sc_signal< sc_lv<1> > tmp_62_fu_373_p3;
    sc_signal< sc_lv<3> > c_cast_fu_381_p3;
    sc_signal< sc_lv<3> > tmp_127_i_fu_389_p2;
    sc_signal< sc_lv<1> > not_tmp_17_i_fu_399_p2;
    sc_signal< sc_lv<3> > tmp_128_i_cast_cast_fu_405_p3;
    sc_signal< sc_lv<3> > tmp_129_i_fu_413_p2;
    sc_signal< sc_lv<16> > tmp_127_i_cast_fu_395_p1;
    sc_signal< sc_lv<16> > tmp_129_i_cast_fu_419_p1;
    sc_signal< sc_lv<7> > tmp_68_fu_453_p1;
    sc_signal< sc_lv<3> > tmp_71_fu_473_p1;
    sc_signal< sc_lv<1> > tmp_72_fu_485_p1;
    sc_signal< sc_lv<16> > tmp_63_fu_447_p2;
    sc_signal< sc_lv<8> > tmp_26_fu_457_p3;
    sc_signal< sc_lv<8> > tmp_69_fu_465_p1;
    sc_signal< sc_lv<16> > a_assign_1_fu_501_p2;
    sc_signal< sc_lv<8> > tmp_64_fu_513_p4;
    sc_signal< sc_lv<8> > a_assign_1_cast_fu_507_p2;
    sc_signal< sc_lv<9> > tmp_i1_cast_fu_523_p1;
    sc_signal< sc_lv<9> > tmp_i2_cast_fu_527_p1;
    sc_signal< sc_lv<9> > r_7_fu_537_p2;
    sc_signal< sc_lv<5> > tmp_66_fu_543_p4;
    sc_signal< sc_lv<4> > tmp_29_fu_477_p3;
    sc_signal< sc_lv<4> > tmp_70_fu_469_p1;
    sc_signal< sc_lv<2> > tmp_30_fu_489_p3;
    sc_signal< sc_lv<2> > tmp_73_fu_497_p1;
    sc_signal< sc_lv<4> > tmp_32_fu_557_p2;
    sc_signal< sc_lv<4> > tmp_33_fu_563_p4;
    sc_signal< sc_lv<4> > fold_i5_cast_fu_589_p2;
    sc_signal< sc_lv<6> > tmp_121_i4_cast_fu_553_p1;
    sc_signal< sc_lv<6> > tmp_122_i6_cast_fu_595_p1;
    sc_signal< sc_lv<6> > r_8_fu_599_p2;
    sc_signal< sc_lv<2> > tmp_35_fu_583_p2;
    sc_signal< sc_lv<2> > tmp_34_fu_573_p4;
    sc_signal< sc_lv<8> > tmp_65_fu_531_p2;
    sc_signal< sc_lv<2> > tmp_36_fu_615_p2;
    sc_signal< sc_lv<2> > tmp_37_fu_621_p4;
    sc_signal< sc_lv<4> > tmp_124_i1_cast_fu_647_p1;
    sc_signal< sc_lv<4> > r_9_fu_650_p2;
    sc_signal< sc_lv<2> > tmp_67_fu_655_p4;
    sc_signal< sc_lv<2> > fold2_i1_cast_fu_669_p2;
    sc_signal< sc_lv<3> > tmp_125_i1_cast_fu_665_p1;
    sc_signal< sc_lv<3> > tmp_126_i1_cast_fu_673_p1;
    sc_signal< sc_lv<3> > r_10_fu_677_p2;
    sc_signal< sc_lv<3> > t_1_fu_683_p2;
    sc_signal< sc_lv<1> > tmp_74_fu_689_p3;
    sc_signal< sc_lv<3> > c_5_cast_fu_697_p3;
    sc_signal< sc_lv<3> > tmp_127_i1_fu_705_p2;
    sc_signal< sc_lv<1> > not_tmp_17_i1_fu_715_p2;
    sc_signal< sc_lv<3> > tmp_128_i1_cast_cast_fu_721_p3;
    sc_signal< sc_lv<3> > tmp_129_i1_fu_729_p2;
    sc_signal< sc_lv<16> > tmp_127_i1_cast_fu_711_p1;
    sc_signal< sc_lv<16> > tmp_129_i1_cast_fu_735_p1;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<64> ap_const_lv64_334;
    static const sc_lv<10> ap_const_lv10_335;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<16> ap_const_lv16_3000;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<16> ap_const_lv16_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_assign_1_cast_fu_507_p2();
    void thread_a_assign_1_fu_501_p2();
    void thread_a_coeffs_address0();
    void thread_a_coeffs_ce0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_5_cast_fu_697_p3();
    void thread_c_cast_fu_381_p3();
    void thread_exitcond1_fu_147_p2();
    void thread_exitcond_fu_430_p2();
    void thread_fold1_i9_cast_fu_631_p2();
    void thread_fold1_i_cast_fu_313_p2();
    void thread_fold2_i1_cast_fu_669_p2();
    void thread_fold2_i_cast_fu_349_p2();
    void thread_fold_i5_cast_fu_589_p2();
    void thread_fold_i_cast_fu_271_p2();
    void thread_i_8_fu_153_p2();
    void thread_i_9_fu_436_p2();
    void thread_not_tmp_17_i1_fu_715_p2();
    void thread_not_tmp_17_i_fu_399_p2();
    void thread_r_10_fu_677_p2();
    void thread_r_4_fu_281_p2();
    void thread_r_5_fu_323_p2();
    void thread_r_6_fu_361_p2();
    void thread_r_7_fu_537_p2();
    void thread_r_8_fu_599_p2();
    void thread_r_9_fu_650_p2();
    void thread_r_coeffs_addr_reg_764();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_r_fu_223_p2();
    void thread_t_1_fu_683_p2();
    void thread_t_fu_367_p2();
    void thread_tmp_121_i4_cast_fu_553_p1();
    void thread_tmp_121_i_cast_fu_239_p1();
    void thread_tmp_122_i6_cast_fu_595_p1();
    void thread_tmp_122_i_cast_fu_277_p1();
    void thread_tmp_123_i_cast_fu_287_p4();
    void thread_tmp_124_i1_cast_fu_647_p1();
    void thread_tmp_124_i_cast_fu_319_p1();
    void thread_tmp_125_i1_cast_fu_665_p1();
    void thread_tmp_125_i_cast_fu_355_p1();
    void thread_tmp_126_i1_cast_fu_673_p1();
    void thread_tmp_126_i_cast_fu_358_p1();
    void thread_tmp_127_i1_cast_fu_711_p1();
    void thread_tmp_127_i1_fu_705_p2();
    void thread_tmp_127_i_cast_fu_395_p1();
    void thread_tmp_127_i_fu_389_p2();
    void thread_tmp_128_i1_cast_cast_fu_721_p3();
    void thread_tmp_128_i_cast_cast_fu_405_p3();
    void thread_tmp_129_i1_cast_fu_735_p1();
    void thread_tmp_129_i1_fu_729_p2();
    void thread_tmp_129_i_cast_fu_419_p1();
    void thread_tmp_129_i_fu_413_p2();
    void thread_tmp_130_i_fu_423_p2();
    void thread_tmp_19_fu_261_p4();
    void thread_tmp_20_fu_297_p2();
    void thread_tmp_21_fu_303_p4();
    void thread_tmp_22_fu_339_p4();
    void thread_tmp_26_fu_457_p3();
    void thread_tmp_29_fu_477_p3();
    void thread_tmp_30_fu_489_p3();
    void thread_tmp_32_fu_557_p2();
    void thread_tmp_33_fu_563_p4();
    void thread_tmp_34_fu_573_p4();
    void thread_tmp_35_fu_583_p2();
    void thread_tmp_36_fu_615_p2();
    void thread_tmp_37_fu_621_p4();
    void thread_tmp_50_fu_199_p4();
    void thread_tmp_51_fu_217_p2();
    void thread_tmp_52_fu_229_p4();
    void thread_tmp_54_fu_164_p4();
    void thread_tmp_55_fu_174_p3();
    void thread_tmp_56_fu_182_p2();
    void thread_tmp_57_fu_188_p2();
    void thread_tmp_58_fu_442_p1();
    void thread_tmp_59_fu_195_p1();
    void thread_tmp_60_fu_253_p1();
    void thread_tmp_61_fu_257_p1();
    void thread_tmp_62_fu_373_p3();
    void thread_tmp_63_fu_447_p2();
    void thread_tmp_64_fu_513_p4();
    void thread_tmp_65_fu_531_p2();
    void thread_tmp_66_fu_543_p4();
    void thread_tmp_67_fu_655_p4();
    void thread_tmp_68_fu_453_p1();
    void thread_tmp_69_fu_465_p1();
    void thread_tmp_70_fu_469_p1();
    void thread_tmp_71_fu_473_p1();
    void thread_tmp_72_fu_485_p1();
    void thread_tmp_73_fu_497_p1();
    void thread_tmp_74_fu_689_p3();
    void thread_tmp_fu_243_p4();
    void thread_tmp_i1_cast_fu_523_p1();
    void thread_tmp_i2_cast_fu_527_p1();
    void thread_tmp_i_cast_32_fu_213_p1();
    void thread_tmp_i_cast_fu_209_p1();
    void thread_tmp_s_fu_159_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
