// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_S3_frombytes_HH_
#define _poly_S3_frombytes_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "mod3.h"

namespace ap_rtl {

struct poly_S3_frombytes : public sc_module {
    // Port declarations 18
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
    sc_out< sc_lv<10> > r_coeffs_address1;
    sc_out< sc_logic > r_coeffs_ce1;
    sc_out< sc_logic > r_coeffs_we1;
    sc_out< sc_lv<16> > r_coeffs_d1;
    sc_out< sc_lv<11> > msg_address0;
    sc_out< sc_logic > msg_ce0;
    sc_in< sc_lv<8> > msg_q0;
    sc_in< sc_lv<10> > msg_offset;


    // Module declarations
    poly_S3_frombytes(sc_module_name name);
    SC_HAS_PROCESS(poly_S3_frombytes);

    ~poly_S3_frombytes();

    sc_trace_file* mVcdFile;

    mod3* grp_mod3_fu_174;
    mod3* grp_mod3_fu_179;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > reg_184;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<16> > grp_mod3_fu_174_ap_return;
    sc_signal< sc_lv<16> > reg_189;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<16> > grp_mod3_fu_179_ap_return;
    sc_signal< sc_lv<16> > reg_195;
    sc_signal< sc_lv<9> > tmp_172_fu_200_p1;
    sc_signal< sc_lv<9> > tmp_172_reg_394;
    sc_signal< sc_lv<8> > i_7_fu_214_p2;
    sc_signal< sc_lv<8> > i_7_reg_403;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond1_fu_208_p2;
    sc_signal< sc_lv<10> > tmp_153_fu_242_p2;
    sc_signal< sc_lv<10> > tmp_153_reg_413;
    sc_signal< sc_lv<7> > tmp_reg_427;
    sc_signal< sc_lv<2> > tmp_120_reg_432;
    sc_signal< sc_lv<5> > tmp_118_reg_437;
    sc_signal< sc_lv<4> > tmp_119_reg_442;
    sc_signal< sc_logic > grp_mod3_fu_174_ap_ready;
    sc_signal< sc_lv<8> > grp_mod3_fu_174_a;
    sc_signal< sc_logic > grp_mod3_fu_179_ap_ready;
    sc_signal< sc_lv<8> > grp_mod3_fu_179_a;
    sc_signal< sc_lv<8> > i_reg_163;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > tmp_161_cast_cast_fu_352_p1;
    sc_signal< sc_lv<8> > tmp_171_cast_fu_380_p1;
    sc_signal< sc_lv<8> > tmp_156_cast_fu_302_p1;
    sc_signal< sc_lv<8> > tmp_166_cast_cast_fu_356_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_229_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_253_p1;
    sc_signal< sc_lv<64> > tmp_154_fu_338_p1;
    sc_signal< sc_lv<64> > tmp_158_fu_347_p1;
    sc_signal< sc_lv<64> > tmp_162_fu_365_p1;
    sc_signal< sc_lv<64> > tmp_166_fu_375_p1;
    sc_signal< sc_lv<64> > tmp_170_fu_389_p1;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<9> > tmp_cast_fu_220_p1;
    sc_signal< sc_lv<9> > sum_fu_224_p2;
    sc_signal< sc_lv<10> > p_shl_fu_234_p3;
    sc_signal< sc_lv<10> > i_cast3_fu_204_p1;
    sc_signal< sc_lv<9> > sum2_fu_248_p2;
    sc_signal< sc_lv<8> > tmp_155_fu_262_p0;
    sc_signal< sc_lv<16> > tmp_s_fu_258_p1;
    sc_signal< sc_lv<16> > tmp_155_fu_262_p2;
    sc_signal< sc_lv<8> > tmp_167_fu_278_p0;
    sc_signal< sc_lv<16> > tmp_167_fu_278_p2;
    sc_signal< sc_lv<8> > tmp_159_fu_306_p0;
    sc_signal< sc_lv<14> > tmp_159_fu_306_p2;
    sc_signal< sc_lv<8> > tmp_163_fu_322_p0;
    sc_signal< sc_lv<13> > tmp_163_fu_322_p2;
    sc_signal< sc_lv<10> > tmp_157_fu_342_p2;
    sc_signal< sc_lv<10> > tmp_161_fu_360_p2;
    sc_signal< sc_lv<10> > tmp_165_fu_370_p2;
    sc_signal< sc_lv<10> > tmp_169_fu_384_p2;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    sc_signal< sc_lv<14> > tmp_159_fu_306_p00;
    sc_signal< sc_lv<13> > tmp_163_fu_322_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_state3;
    static const sc_lv<10> ap_ST_fsm_state4;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_state6;
    static const sc_lv<10> ap_ST_fsm_state7;
    static const sc_lv<10> ap_ST_fsm_state8;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<64> ap_const_lv64_2A3;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<64> ap_const_lv64_2A4;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<8> ap_const_lv8_87;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<9> ap_const_lv9_87;
    static const sc_lv<16> ap_const_lv16_AB;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<16> ap_const_lv16_CB;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<14> ap_const_lv14_39;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<13> ap_const_lv13_13;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<10> ap_const_lv10_4;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
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
    void thread_exitcond1_fu_208_p2();
    void thread_grp_mod3_fu_174_a();
    void thread_grp_mod3_fu_179_a();
    void thread_i_7_fu_214_p2();
    void thread_i_cast3_fu_204_p1();
    void thread_msg_address0();
    void thread_msg_ce0();
    void thread_p_shl_fu_234_p3();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_sum2_cast_fu_253_p1();
    void thread_sum2_fu_248_p2();
    void thread_sum_cast_fu_229_p1();
    void thread_sum_fu_224_p2();
    void thread_tmp_153_fu_242_p2();
    void thread_tmp_154_fu_338_p1();
    void thread_tmp_155_fu_262_p0();
    void thread_tmp_155_fu_262_p2();
    void thread_tmp_156_cast_fu_302_p1();
    void thread_tmp_157_fu_342_p2();
    void thread_tmp_158_fu_347_p1();
    void thread_tmp_159_fu_306_p0();
    void thread_tmp_159_fu_306_p00();
    void thread_tmp_159_fu_306_p2();
    void thread_tmp_161_cast_cast_fu_352_p1();
    void thread_tmp_161_fu_360_p2();
    void thread_tmp_162_fu_365_p1();
    void thread_tmp_163_fu_322_p0();
    void thread_tmp_163_fu_322_p00();
    void thread_tmp_163_fu_322_p2();
    void thread_tmp_165_fu_370_p2();
    void thread_tmp_166_cast_cast_fu_356_p1();
    void thread_tmp_166_fu_375_p1();
    void thread_tmp_167_fu_278_p0();
    void thread_tmp_167_fu_278_p2();
    void thread_tmp_169_fu_384_p2();
    void thread_tmp_170_fu_389_p1();
    void thread_tmp_171_cast_fu_380_p1();
    void thread_tmp_172_fu_200_p1();
    void thread_tmp_cast_fu_220_p1();
    void thread_tmp_s_fu_258_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
