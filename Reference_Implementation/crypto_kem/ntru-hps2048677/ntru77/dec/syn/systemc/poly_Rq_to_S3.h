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
    sc_signal< sc_lv<10> > i_8_fu_157_p2;
    sc_signal< sc_lv<10> > i_8_reg_753;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > tmp_s_fu_163_p1;
    sc_signal< sc_lv<64> > tmp_s_reg_758;
    sc_signal< sc_lv<1> > exitcond1_fu_151_p2;
    sc_signal< sc_lv<10> > r_coeffs_addr_reg_768;
    sc_signal< sc_lv<2> > tmp_124_reg_774;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<2> > fold2_i_cast_fu_353_p2;
    sc_signal< sc_lv<2> > fold2_i_cast_reg_779;
    sc_signal< sc_lv<10> > i_9_fu_440_p2;
    sc_signal< sc_lv<10> > i_9_reg_787;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > r_coeffs_addr_22_reg_792;
    sc_signal< sc_lv<1> > exitcond_fu_434_p2;
    sc_signal< sc_lv<4> > tmp_219_i8_cast_reg_798;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<2> > fold1_i9_cast_fu_635_p2;
    sc_signal< sc_lv<2> > fold1_i9_cast_reg_803;
    sc_signal< sc_lv<2> > tmp_185_reg_809;
    sc_signal< sc_lv<10> > i_reg_129;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > i_1_reg_140;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > tmp_176_fu_446_p1;
    sc_signal< sc_lv<16> > tmp_175_fu_192_p2;
    sc_signal< sc_lv<16> > tmp_226_i_fu_427_p2;
    sc_signal< sc_lv<5> > tmp_125_fu_168_p4;
    sc_signal< sc_lv<16> > tmp_171_fu_178_p3;
    sc_signal< sc_lv<16> > tmp_172_fu_186_p2;
    sc_signal< sc_lv<8> > tmp_121_fu_203_p4;
    sc_signal< sc_lv<8> > tmp_179_fu_199_p1;
    sc_signal< sc_lv<9> > tmp_i_cast_32_fu_217_p1;
    sc_signal< sc_lv<9> > tmp_i_cast_fu_213_p1;
    sc_signal< sc_lv<9> > r_fu_227_p2;
    sc_signal< sc_lv<5> > tmp_123_fu_233_p4;
    sc_signal< sc_lv<4> > tmp_180_fu_257_p1;
    sc_signal< sc_lv<4> > tmp_fu_247_p4;
    sc_signal< sc_lv<4> > fold_i_cast_fu_275_p2;
    sc_signal< sc_lv<6> > tmp_218_i_cast_fu_281_p1;
    sc_signal< sc_lv<6> > tmp_217_i_cast_fu_243_p1;
    sc_signal< sc_lv<6> > r_4_fu_285_p2;
    sc_signal< sc_lv<2> > tmp_188_fu_261_p1;
    sc_signal< sc_lv<2> > tmp_163_fu_265_p4;
    sc_signal< sc_lv<8> > tmp_122_fu_221_p2;
    sc_signal< sc_lv<2> > tmp_165_fu_307_p4;
    sc_signal< sc_lv<2> > tmp_164_fu_301_p2;
    sc_signal< sc_lv<2> > fold1_i_cast_fu_317_p2;
    sc_signal< sc_lv<4> > tmp_220_i_cast_fu_323_p1;
    sc_signal< sc_lv<4> > tmp_219_i_cast_fu_291_p4;
    sc_signal< sc_lv<4> > r_5_fu_327_p2;
    sc_signal< sc_lv<2> > tmp_166_fu_343_p4;
    sc_signal< sc_lv<3> > tmp_222_i_cast_fu_362_p1;
    sc_signal< sc_lv<3> > tmp_221_i_cast_fu_359_p1;
    sc_signal< sc_lv<3> > r_6_fu_365_p2;
    sc_signal< sc_lv<3> > t_fu_371_p2;
    sc_signal< sc_lv<1> > tmp_189_fu_377_p3;
    sc_signal< sc_lv<3> > c_cast_fu_385_p3;
    sc_signal< sc_lv<3> > tmp_223_i_fu_393_p2;
    sc_signal< sc_lv<1> > not_tmp_53_i_fu_403_p2;
    sc_signal< sc_lv<3> > tmp_224_i_cast_cast_fu_409_p3;
    sc_signal< sc_lv<3> > tmp_225_i_fu_417_p2;
    sc_signal< sc_lv<16> > tmp_223_i_cast_fu_399_p1;
    sc_signal< sc_lv<16> > tmp_225_i_cast_fu_423_p1;
    sc_signal< sc_lv<7> > tmp_191_fu_457_p1;
    sc_signal< sc_lv<3> > tmp_194_fu_477_p1;
    sc_signal< sc_lv<1> > tmp_195_fu_489_p1;
    sc_signal< sc_lv<16> > tmp_190_fu_451_p2;
    sc_signal< sc_lv<8> > tmp_170_fu_461_p3;
    sc_signal< sc_lv<8> > tmp_192_fu_469_p1;
    sc_signal< sc_lv<16> > a_assign_1_fu_505_p2;
    sc_signal< sc_lv<8> > tmp_130_fu_517_p4;
    sc_signal< sc_lv<8> > a_assign_1_cast_fu_511_p2;
    sc_signal< sc_lv<9> > tmp_i1_cast_fu_527_p1;
    sc_signal< sc_lv<9> > tmp_i2_cast_fu_531_p1;
    sc_signal< sc_lv<9> > r_7_fu_541_p2;
    sc_signal< sc_lv<5> > tmp_132_fu_547_p4;
    sc_signal< sc_lv<4> > tmp_173_fu_481_p3;
    sc_signal< sc_lv<4> > tmp_193_fu_473_p1;
    sc_signal< sc_lv<2> > tmp_174_fu_493_p3;
    sc_signal< sc_lv<2> > tmp_196_fu_501_p1;
    sc_signal< sc_lv<4> > tmp_177_fu_561_p2;
    sc_signal< sc_lv<4> > tmp_178_fu_567_p4;
    sc_signal< sc_lv<4> > fold_i5_cast_fu_593_p2;
    sc_signal< sc_lv<6> > tmp_217_i4_cast_fu_557_p1;
    sc_signal< sc_lv<6> > tmp_218_i6_cast_fu_599_p1;
    sc_signal< sc_lv<6> > r_8_fu_603_p2;
    sc_signal< sc_lv<2> > tmp_182_fu_587_p2;
    sc_signal< sc_lv<2> > tmp_181_fu_577_p4;
    sc_signal< sc_lv<8> > tmp_131_fu_535_p2;
    sc_signal< sc_lv<2> > tmp_183_fu_619_p2;
    sc_signal< sc_lv<2> > tmp_184_fu_625_p4;
    sc_signal< sc_lv<4> > tmp_220_i1_cast_fu_651_p1;
    sc_signal< sc_lv<4> > r_9_fu_654_p2;
    sc_signal< sc_lv<2> > tmp_133_fu_659_p4;
    sc_signal< sc_lv<2> > fold2_i1_cast_fu_673_p2;
    sc_signal< sc_lv<3> > tmp_221_i1_cast_fu_669_p1;
    sc_signal< sc_lv<3> > tmp_222_i1_cast_fu_677_p1;
    sc_signal< sc_lv<3> > r_10_fu_681_p2;
    sc_signal< sc_lv<3> > t_1_fu_687_p2;
    sc_signal< sc_lv<1> > tmp_197_fu_693_p3;
    sc_signal< sc_lv<3> > c_6_cast_fu_701_p3;
    sc_signal< sc_lv<3> > tmp_223_i1_fu_709_p2;
    sc_signal< sc_lv<1> > not_tmp_53_i1_fu_719_p2;
    sc_signal< sc_lv<3> > tmp_224_i1_cast_cast_fu_725_p3;
    sc_signal< sc_lv<3> > tmp_225_i1_fu_733_p2;
    sc_signal< sc_lv<16> > tmp_223_i1_cast_fu_715_p1;
    sc_signal< sc_lv<16> > tmp_225_i1_cast_fu_739_p1;
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
    static const sc_lv<64> ap_const_lv64_2A4;
    static const sc_lv<10> ap_const_lv10_2A5;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<16> ap_const_lv16_1800;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<16> ap_const_lv16_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_assign_1_cast_fu_511_p2();
    void thread_a_assign_1_fu_505_p2();
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
    void thread_c_6_cast_fu_701_p3();
    void thread_c_cast_fu_385_p3();
    void thread_exitcond1_fu_151_p2();
    void thread_exitcond_fu_434_p2();
    void thread_fold1_i9_cast_fu_635_p2();
    void thread_fold1_i_cast_fu_317_p2();
    void thread_fold2_i1_cast_fu_673_p2();
    void thread_fold2_i_cast_fu_353_p2();
    void thread_fold_i5_cast_fu_593_p2();
    void thread_fold_i_cast_fu_275_p2();
    void thread_i_8_fu_157_p2();
    void thread_i_9_fu_440_p2();
    void thread_not_tmp_53_i1_fu_719_p2();
    void thread_not_tmp_53_i_fu_403_p2();
    void thread_r_10_fu_681_p2();
    void thread_r_4_fu_285_p2();
    void thread_r_5_fu_327_p2();
    void thread_r_6_fu_365_p2();
    void thread_r_7_fu_541_p2();
    void thread_r_8_fu_603_p2();
    void thread_r_9_fu_654_p2();
    void thread_r_coeffs_addr_reg_768();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_r_fu_227_p2();
    void thread_t_1_fu_687_p2();
    void thread_t_fu_371_p2();
    void thread_tmp_121_fu_203_p4();
    void thread_tmp_122_fu_221_p2();
    void thread_tmp_123_fu_233_p4();
    void thread_tmp_125_fu_168_p4();
    void thread_tmp_130_fu_517_p4();
    void thread_tmp_131_fu_535_p2();
    void thread_tmp_132_fu_547_p4();
    void thread_tmp_133_fu_659_p4();
    void thread_tmp_163_fu_265_p4();
    void thread_tmp_164_fu_301_p2();
    void thread_tmp_165_fu_307_p4();
    void thread_tmp_166_fu_343_p4();
    void thread_tmp_170_fu_461_p3();
    void thread_tmp_171_fu_178_p3();
    void thread_tmp_172_fu_186_p2();
    void thread_tmp_173_fu_481_p3();
    void thread_tmp_174_fu_493_p3();
    void thread_tmp_175_fu_192_p2();
    void thread_tmp_176_fu_446_p1();
    void thread_tmp_177_fu_561_p2();
    void thread_tmp_178_fu_567_p4();
    void thread_tmp_179_fu_199_p1();
    void thread_tmp_180_fu_257_p1();
    void thread_tmp_181_fu_577_p4();
    void thread_tmp_182_fu_587_p2();
    void thread_tmp_183_fu_619_p2();
    void thread_tmp_184_fu_625_p4();
    void thread_tmp_188_fu_261_p1();
    void thread_tmp_189_fu_377_p3();
    void thread_tmp_190_fu_451_p2();
    void thread_tmp_191_fu_457_p1();
    void thread_tmp_192_fu_469_p1();
    void thread_tmp_193_fu_473_p1();
    void thread_tmp_194_fu_477_p1();
    void thread_tmp_195_fu_489_p1();
    void thread_tmp_196_fu_501_p1();
    void thread_tmp_197_fu_693_p3();
    void thread_tmp_217_i4_cast_fu_557_p1();
    void thread_tmp_217_i_cast_fu_243_p1();
    void thread_tmp_218_i6_cast_fu_599_p1();
    void thread_tmp_218_i_cast_fu_281_p1();
    void thread_tmp_219_i_cast_fu_291_p4();
    void thread_tmp_220_i1_cast_fu_651_p1();
    void thread_tmp_220_i_cast_fu_323_p1();
    void thread_tmp_221_i1_cast_fu_669_p1();
    void thread_tmp_221_i_cast_fu_359_p1();
    void thread_tmp_222_i1_cast_fu_677_p1();
    void thread_tmp_222_i_cast_fu_362_p1();
    void thread_tmp_223_i1_cast_fu_715_p1();
    void thread_tmp_223_i1_fu_709_p2();
    void thread_tmp_223_i_cast_fu_399_p1();
    void thread_tmp_223_i_fu_393_p2();
    void thread_tmp_224_i1_cast_cast_fu_725_p3();
    void thread_tmp_224_i_cast_cast_fu_409_p3();
    void thread_tmp_225_i1_cast_fu_739_p1();
    void thread_tmp_225_i1_fu_733_p2();
    void thread_tmp_225_i_cast_fu_423_p1();
    void thread_tmp_225_i_fu_417_p2();
    void thread_tmp_226_i_fu_427_p2();
    void thread_tmp_fu_247_p4();
    void thread_tmp_i1_cast_fu_527_p1();
    void thread_tmp_i2_cast_fu_531_p1();
    void thread_tmp_i_cast_32_fu_217_p1();
    void thread_tmp_i_cast_fu_213_p1();
    void thread_tmp_s_fu_163_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
