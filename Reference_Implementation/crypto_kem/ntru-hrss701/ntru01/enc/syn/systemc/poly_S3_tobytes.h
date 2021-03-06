// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_S3_tobytes_HH_
#define _poly_S3_tobytes_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct poly_S3_tobytes : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<9> > msg_address0;
    sc_out< sc_logic > msg_ce0;
    sc_out< sc_logic > msg_we0;
    sc_out< sc_lv<8> > msg_d0;
    sc_in< sc_lv<10> > msg_offset;
    sc_out< sc_lv<10> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;
    sc_out< sc_lv<10> > a_coeffs_address1;
    sc_out< sc_logic > a_coeffs_ce1;
    sc_in< sc_lv<16> > a_coeffs_q1;


    // Module declarations
    poly_S3_tobytes(sc_module_name name);
    SC_HAS_PROCESS(poly_S3_tobytes);

    ~poly_S3_tobytes();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > tmp_210_fu_115_p1;
    sc_signal< sc_lv<9> > tmp_210_reg_300;
    sc_signal< sc_lv<8> > i_9_fu_129_p2;
    sc_signal< sc_lv<8> > i_9_reg_308;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > tmp_fu_143_p2;
    sc_signal< sc_lv<10> > tmp_reg_313;
    sc_signal< sc_lv<1> > exitcond_fu_123_p2;
    sc_signal< sc_lv<9> > sum_fu_175_p2;
    sc_signal< sc_lv<9> > sum_reg_330;
    sc_signal< sc_lv<8> > c_1_fu_206_p2;
    sc_signal< sc_lv<8> > c_1_reg_335;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > c_2_fu_236_p2;
    sc_signal< sc_lv<8> > c_2_reg_346;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<8> > c_3_fu_270_p2;
    sc_signal< sc_lv<8> > c_3_reg_362;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > tmp_219_fu_276_p1;
    sc_signal< sc_lv<8> > tmp_219_reg_368;
    sc_signal< sc_lv<8> > i_reg_104;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > tmp_195_fu_155_p1;
    sc_signal< sc_lv<64> > tmp_198_fu_166_p1;
    sc_signal< sc_lv<64> > tmp_202_fu_217_p1;
    sc_signal< sc_lv<64> > tmp_206_fu_247_p1;
    sc_signal< sc_lv<64> > tmp_208_fu_252_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_296_p1;
    sc_signal< sc_lv<10> > p_shl5_fu_135_p3;
    sc_signal< sc_lv<10> > i_cast1_fu_119_p1;
    sc_signal< sc_lv<10> > tmp_s_fu_149_p2;
    sc_signal< sc_lv<10> > tmp_197_fu_160_p2;
    sc_signal< sc_lv<9> > tmp_258_cast_fu_171_p1;
    sc_signal< sc_lv<6> > tmp_212_fu_184_p1;
    sc_signal< sc_lv<8> > p_shl4_fu_188_p3;
    sc_signal< sc_lv<8> > c_fu_180_p1;
    sc_signal< sc_lv<8> > tmp_196_fu_196_p2;
    sc_signal< sc_lv<8> > tmp_213_fu_202_p1;
    sc_signal< sc_lv<10> > tmp_201_fu_212_p2;
    sc_signal< sc_lv<8> > tmp_214_fu_222_p2;
    sc_signal< sc_lv<8> > tmp_215_fu_232_p1;
    sc_signal< sc_lv<8> > tmp_200_fu_227_p2;
    sc_signal< sc_lv<10> > tmp_205_fu_242_p2;
    sc_signal< sc_lv<8> > tmp_216_fu_256_p2;
    sc_signal< sc_lv<8> > tmp_217_fu_266_p1;
    sc_signal< sc_lv<8> > tmp_204_fu_261_p2;
    sc_signal< sc_lv<8> > tmp_218_fu_280_p2;
    sc_signal< sc_lv<8> > tmp_207_fu_285_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<8> ap_const_lv8_8C;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_coeffs_address0();
    void thread_a_coeffs_address1();
    void thread_a_coeffs_ce0();
    void thread_a_coeffs_ce1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_1_fu_206_p2();
    void thread_c_2_fu_236_p2();
    void thread_c_3_fu_270_p2();
    void thread_c_fu_180_p1();
    void thread_exitcond_fu_123_p2();
    void thread_i_9_fu_129_p2();
    void thread_i_cast1_fu_119_p1();
    void thread_msg_address0();
    void thread_msg_ce0();
    void thread_msg_d0();
    void thread_msg_we0();
    void thread_p_shl4_fu_188_p3();
    void thread_p_shl5_fu_135_p3();
    void thread_sum_cast_fu_296_p1();
    void thread_sum_fu_175_p2();
    void thread_tmp_195_fu_155_p1();
    void thread_tmp_196_fu_196_p2();
    void thread_tmp_197_fu_160_p2();
    void thread_tmp_198_fu_166_p1();
    void thread_tmp_200_fu_227_p2();
    void thread_tmp_201_fu_212_p2();
    void thread_tmp_202_fu_217_p1();
    void thread_tmp_204_fu_261_p2();
    void thread_tmp_205_fu_242_p2();
    void thread_tmp_206_fu_247_p1();
    void thread_tmp_207_fu_285_p2();
    void thread_tmp_208_fu_252_p1();
    void thread_tmp_210_fu_115_p1();
    void thread_tmp_212_fu_184_p1();
    void thread_tmp_213_fu_202_p1();
    void thread_tmp_214_fu_222_p2();
    void thread_tmp_215_fu_232_p1();
    void thread_tmp_216_fu_256_p2();
    void thread_tmp_217_fu_266_p1();
    void thread_tmp_218_fu_280_p2();
    void thread_tmp_219_fu_276_p1();
    void thread_tmp_258_cast_fu_171_p1();
    void thread_tmp_fu_143_p2();
    void thread_tmp_s_fu_149_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
