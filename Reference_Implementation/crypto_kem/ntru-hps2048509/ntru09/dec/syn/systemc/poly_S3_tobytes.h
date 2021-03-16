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
    sc_out< sc_lv<8> > msg_address0;
    sc_out< sc_logic > msg_ce0;
    sc_out< sc_logic > msg_we0;
    sc_out< sc_lv<8> > msg_d0;
    sc_in< sc_lv<8> > msg_offset;
    sc_out< sc_lv<9> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;
    sc_out< sc_lv<9> > a_coeffs_address1;
    sc_out< sc_logic > a_coeffs_ce1;
    sc_in< sc_lv<16> > a_coeffs_q1;


    // Module declarations
    poly_S3_tobytes(sc_module_name name);
    SC_HAS_PROCESS(poly_S3_tobytes);

    ~poly_S3_tobytes();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > i_4_fu_182_p2;
    sc_signal< sc_lv<7> > i_4_reg_427;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<9> > tmp_fu_196_p2;
    sc_signal< sc_lv<9> > tmp_reg_432;
    sc_signal< sc_lv<1> > exitcond_fu_176_p2;
    sc_signal< sc_lv<8> > c_1_fu_250_p2;
    sc_signal< sc_lv<8> > c_1_reg_449;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > sum_fu_270_p2;
    sc_signal< sc_lv<8> > sum_reg_460;
    sc_signal< sc_lv<8> > c_2_fu_289_p2;
    sc_signal< sc_lv<8> > c_2_reg_465;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<8> > c_3_fu_323_p2;
    sc_signal< sc_lv<8> > c_3_reg_481;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > tmp_135_fu_329_p1;
    sc_signal< sc_lv<8> > tmp_135_reg_487;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > tmp_136_fu_357_p3;
    sc_signal< sc_lv<3> > j_1_fu_380_p2;
    sc_signal< sc_lv<3> > j_1_reg_500;
    sc_signal< sc_lv<8> > c_5_fu_412_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<7> > i_reg_136;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<8> > c5_reg_148;
    sc_signal< sc_lv<3> > j_reg_161;
    sc_signal< sc_lv<64> > tmp_111_fu_208_p1;
    sc_signal< sc_lv<64> > tmp_114_fu_219_p1;
    sc_signal< sc_lv<64> > tmp_117_fu_261_p1;
    sc_signal< sc_lv<64> > tmp_122_fu_300_p1;
    sc_signal< sc_lv<64> > tmp_124_fu_305_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_349_p1;
    sc_signal< sc_lv<64> > tmp_129_fu_375_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_391_p1;
    sc_signal< sc_lv<8> > c_4_fu_343_p2;
    sc_signal< sc_lv<9> > p_shl7_fu_188_p3;
    sc_signal< sc_lv<9> > i_cast1_fu_172_p1;
    sc_signal< sc_lv<9> > tmp_s_fu_202_p2;
    sc_signal< sc_lv<9> > tmp_113_fu_213_p2;
    sc_signal< sc_lv<6> > tmp_119_fu_228_p1;
    sc_signal< sc_lv<8> > p_shl6_fu_232_p3;
    sc_signal< sc_lv<8> > c_fu_224_p1;
    sc_signal< sc_lv<8> > tmp_112_fu_240_p2;
    sc_signal< sc_lv<8> > tmp_121_fu_246_p1;
    sc_signal< sc_lv<9> > tmp_116_fu_256_p2;
    sc_signal< sc_lv<8> > tmp_136_cast_fu_266_p1;
    sc_signal< sc_lv<8> > tmp_125_fu_275_p2;
    sc_signal< sc_lv<8> > tmp_128_fu_285_p1;
    sc_signal< sc_lv<8> > tmp_115_fu_280_p2;
    sc_signal< sc_lv<9> > tmp_120_fu_295_p2;
    sc_signal< sc_lv<8> > tmp_132_fu_309_p2;
    sc_signal< sc_lv<8> > tmp_133_fu_319_p1;
    sc_signal< sc_lv<8> > tmp_118_fu_314_p2;
    sc_signal< sc_lv<8> > tmp_134_fu_333_p2;
    sc_signal< sc_lv<8> > tmp_123_fu_338_p2;
    sc_signal< sc_lv<4> > j_cast_cast_fu_353_p1;
    sc_signal< sc_lv<4> > tmp_127_fu_365_p2;
    sc_signal< sc_lv<9> > tmp_138_cast4_fu_371_p1;
    sc_signal< sc_lv<8> > sum2_fu_386_p2;
    sc_signal< sc_lv<8> > tmp_137_fu_396_p2;
    sc_signal< sc_lv<8> > tmp_126_fu_402_p2;
    sc_signal< sc_lv<8> > tmp_138_fu_408_p1;
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
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<7> ap_const_lv7_65;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<9> ap_const_lv9_4;
    static const sc_lv<9> ap_const_lv9_3;
    static const sc_lv<9> ap_const_lv9_2;
    static const sc_lv<8> ap_const_lv8_2;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<8> ap_const_lv8_65;
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
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_1_fu_250_p2();
    void thread_c_2_fu_289_p2();
    void thread_c_3_fu_323_p2();
    void thread_c_4_fu_343_p2();
    void thread_c_5_fu_412_p2();
    void thread_c_fu_224_p1();
    void thread_exitcond_fu_176_p2();
    void thread_i_4_fu_182_p2();
    void thread_i_cast1_fu_172_p1();
    void thread_j_1_fu_380_p2();
    void thread_j_cast_cast_fu_353_p1();
    void thread_msg_address0();
    void thread_msg_ce0();
    void thread_msg_d0();
    void thread_msg_we0();
    void thread_p_shl6_fu_232_p3();
    void thread_p_shl7_fu_188_p3();
    void thread_sum2_cast_fu_391_p1();
    void thread_sum2_fu_386_p2();
    void thread_sum_cast_fu_349_p1();
    void thread_sum_fu_270_p2();
    void thread_tmp_111_fu_208_p1();
    void thread_tmp_112_fu_240_p2();
    void thread_tmp_113_fu_213_p2();
    void thread_tmp_114_fu_219_p1();
    void thread_tmp_115_fu_280_p2();
    void thread_tmp_116_fu_256_p2();
    void thread_tmp_117_fu_261_p1();
    void thread_tmp_118_fu_314_p2();
    void thread_tmp_119_fu_228_p1();
    void thread_tmp_120_fu_295_p2();
    void thread_tmp_121_fu_246_p1();
    void thread_tmp_122_fu_300_p1();
    void thread_tmp_123_fu_338_p2();
    void thread_tmp_124_fu_305_p1();
    void thread_tmp_125_fu_275_p2();
    void thread_tmp_126_fu_402_p2();
    void thread_tmp_127_fu_365_p2();
    void thread_tmp_128_fu_285_p1();
    void thread_tmp_129_fu_375_p1();
    void thread_tmp_132_fu_309_p2();
    void thread_tmp_133_fu_319_p1();
    void thread_tmp_134_fu_333_p2();
    void thread_tmp_135_fu_329_p1();
    void thread_tmp_136_cast_fu_266_p1();
    void thread_tmp_136_fu_357_p3();
    void thread_tmp_137_fu_396_p2();
    void thread_tmp_138_cast4_fu_371_p1();
    void thread_tmp_138_fu_408_p1();
    void thread_tmp_fu_196_p2();
    void thread_tmp_s_fu_202_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
