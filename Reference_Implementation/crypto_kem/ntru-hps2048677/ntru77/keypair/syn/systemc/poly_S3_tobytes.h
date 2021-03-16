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
    sc_out< sc_lv<11> > msg_address0;
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

    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > tmp_162_fu_139_p1;
    sc_signal< sc_lv<9> > tmp_162_reg_339;
    sc_signal< sc_lv<8> > i_9_fu_153_p2;
    sc_signal< sc_lv<8> > i_9_reg_348;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > tmp_fu_167_p2;
    sc_signal< sc_lv<10> > tmp_reg_353;
    sc_signal< sc_lv<1> > exitcond_fu_147_p2;
    sc_signal< sc_lv<8> > c_1_fu_221_p2;
    sc_signal< sc_lv<8> > c_1_reg_375;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<9> > sum_fu_241_p2;
    sc_signal< sc_lv<9> > sum_reg_386;
    sc_signal< sc_lv<8> > c_2_fu_260_p2;
    sc_signal< sc_lv<8> > c_2_reg_391;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<8> > c_3_fu_294_p2;
    sc_signal< sc_lv<8> > c_3_reg_407;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > tmp_180_fu_300_p1;
    sc_signal< sc_lv<8> > tmp_180_reg_413;
    sc_signal< sc_lv<8> > i_reg_127;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > tmp_157_fu_179_p1;
    sc_signal< sc_lv<64> > tmp_160_fu_190_p1;
    sc_signal< sc_lv<64> > tmp_164_fu_232_p1;
    sc_signal< sc_lv<64> > tmp_168_fu_271_p1;
    sc_signal< sc_lv<64> > tmp_170_fu_276_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_320_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_334_p1;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > c_4_fu_314_p2;
    sc_signal< sc_lv<8> > tmp_166_fu_324_p1;
    sc_signal< sc_lv<10> > p_shl7_fu_159_p3;
    sc_signal< sc_lv<10> > i_cast1_fu_143_p1;
    sc_signal< sc_lv<10> > tmp_s_fu_173_p2;
    sc_signal< sc_lv<10> > tmp_159_fu_184_p2;
    sc_signal< sc_lv<6> > tmp_173_fu_199_p1;
    sc_signal< sc_lv<8> > p_shl6_fu_203_p3;
    sc_signal< sc_lv<8> > c_fu_195_p1;
    sc_signal< sc_lv<8> > tmp_158_fu_211_p2;
    sc_signal< sc_lv<8> > tmp_174_fu_217_p1;
    sc_signal< sc_lv<10> > tmp_163_fu_227_p2;
    sc_signal< sc_lv<9> > tmp_236_cast_fu_237_p1;
    sc_signal< sc_lv<8> > tmp_175_fu_246_p2;
    sc_signal< sc_lv<8> > tmp_176_fu_256_p1;
    sc_signal< sc_lv<8> > tmp_161_fu_251_p2;
    sc_signal< sc_lv<10> > tmp_167_fu_266_p2;
    sc_signal< sc_lv<8> > tmp_177_fu_280_p2;
    sc_signal< sc_lv<8> > tmp_178_fu_290_p1;
    sc_signal< sc_lv<8> > tmp_165_fu_285_p2;
    sc_signal< sc_lv<8> > tmp_179_fu_304_p2;
    sc_signal< sc_lv<8> > tmp_169_fu_309_p2;
    sc_signal< sc_lv<9> > sum2_fu_329_p2;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<64> ap_const_lv64_2A3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<8> ap_const_lv8_87;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<9> ap_const_lv9_87;
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
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_1_fu_221_p2();
    void thread_c_2_fu_260_p2();
    void thread_c_3_fu_294_p2();
    void thread_c_4_fu_314_p2();
    void thread_c_fu_195_p1();
    void thread_exitcond_fu_147_p2();
    void thread_i_9_fu_153_p2();
    void thread_i_cast1_fu_143_p1();
    void thread_msg_address0();
    void thread_msg_ce0();
    void thread_msg_d0();
    void thread_msg_we0();
    void thread_p_shl6_fu_203_p3();
    void thread_p_shl7_fu_159_p3();
    void thread_sum2_cast_fu_334_p1();
    void thread_sum2_fu_329_p2();
    void thread_sum_cast_fu_320_p1();
    void thread_sum_fu_241_p2();
    void thread_tmp_157_fu_179_p1();
    void thread_tmp_158_fu_211_p2();
    void thread_tmp_159_fu_184_p2();
    void thread_tmp_160_fu_190_p1();
    void thread_tmp_161_fu_251_p2();
    void thread_tmp_162_fu_139_p1();
    void thread_tmp_163_fu_227_p2();
    void thread_tmp_164_fu_232_p1();
    void thread_tmp_165_fu_285_p2();
    void thread_tmp_166_fu_324_p1();
    void thread_tmp_167_fu_266_p2();
    void thread_tmp_168_fu_271_p1();
    void thread_tmp_169_fu_309_p2();
    void thread_tmp_170_fu_276_p1();
    void thread_tmp_173_fu_199_p1();
    void thread_tmp_174_fu_217_p1();
    void thread_tmp_175_fu_246_p2();
    void thread_tmp_176_fu_256_p1();
    void thread_tmp_177_fu_280_p2();
    void thread_tmp_178_fu_290_p1();
    void thread_tmp_179_fu_304_p2();
    void thread_tmp_180_fu_300_p1();
    void thread_tmp_236_cast_fu_237_p1();
    void thread_tmp_fu_167_p2();
    void thread_tmp_s_fu_173_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
