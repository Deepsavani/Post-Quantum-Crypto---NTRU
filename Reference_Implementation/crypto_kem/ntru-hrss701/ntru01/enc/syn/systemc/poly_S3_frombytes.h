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
    sc_out< sc_lv<9> > msg_address0;
    sc_out< sc_logic > msg_ce0;
    sc_in< sc_lv<8> > msg_q0;
    sc_in< sc_lv<10> > msg_offset;


    // Module declarations
    poly_S3_frombytes(sc_module_name name);
    SC_HAS_PROCESS(poly_S3_frombytes);

    ~poly_S3_frombytes();

    sc_trace_file* mVcdFile;

    mod3* grp_mod3_fu_153;
    mod3* grp_mod3_fu_158;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > grp_mod3_fu_153_ap_return;
    sc_signal< sc_lv<16> > reg_163;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<16> > grp_mod3_fu_158_ap_return;
    sc_signal< sc_lv<16> > reg_169;
    sc_signal< sc_lv<9> > tmp_233_fu_175_p1;
    sc_signal< sc_lv<9> > tmp_233_reg_357;
    sc_signal< sc_lv<8> > i_10_fu_189_p2;
    sc_signal< sc_lv<8> > i_10_reg_365;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_fu_183_p2;
    sc_signal< sc_lv<10> > tmp_210_fu_217_p2;
    sc_signal< sc_lv<10> > tmp_210_reg_375;
    sc_signal< sc_lv<8> > c_reg_384;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<7> > tmp_reg_391;
    sc_signal< sc_lv<2> > tmp_227_reg_396;
    sc_signal< sc_lv<5> > tmp_217_reg_401;
    sc_signal< sc_lv<4> > tmp_222_reg_406;
    sc_signal< sc_logic > grp_mod3_fu_153_ap_ready;
    sc_signal< sc_lv<8> > grp_mod3_fu_153_a;
    sc_signal< sc_logic > grp_mod3_fu_158_ap_ready;
    sc_signal< sc_lv<8> > grp_mod3_fu_158_a;
    sc_signal< sc_lv<8> > i_reg_142;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > tmp_268_cast_cast_fu_315_p1;
    sc_signal< sc_lv<8> > tmp_278_cast_fu_343_p1;
    sc_signal< sc_lv<8> > tmp_263_cast_fu_265_p1;
    sc_signal< sc_lv<8> > tmp_273_cast_cast_fu_319_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_204_p1;
    sc_signal< sc_lv<64> > tmp_211_fu_301_p1;
    sc_signal< sc_lv<64> > tmp_215_fu_310_p1;
    sc_signal< sc_lv<64> > tmp_220_fu_328_p1;
    sc_signal< sc_lv<64> > tmp_225_fu_338_p1;
    sc_signal< sc_lv<64> > tmp_230_fu_352_p1;
    sc_signal< sc_lv<9> > tmp_cast_fu_195_p1;
    sc_signal< sc_lv<9> > sum_fu_199_p2;
    sc_signal< sc_lv<10> > p_shl_fu_209_p3;
    sc_signal< sc_lv<10> > i_cast3_fu_179_p1;
    sc_signal< sc_lv<8> > tmp_212_fu_227_p0;
    sc_signal< sc_lv<16> > tmp_s_fu_223_p1;
    sc_signal< sc_lv<16> > tmp_212_fu_227_p2;
    sc_signal< sc_lv<8> > tmp_226_fu_243_p0;
    sc_signal< sc_lv<16> > tmp_226_fu_243_p2;
    sc_signal< sc_lv<8> > tmp_216_fu_269_p0;
    sc_signal< sc_lv<14> > tmp_216_fu_269_p2;
    sc_signal< sc_lv<8> > tmp_221_fu_285_p0;
    sc_signal< sc_lv<13> > tmp_221_fu_285_p2;
    sc_signal< sc_lv<10> > tmp_214_fu_305_p2;
    sc_signal< sc_lv<10> > tmp_219_fu_323_p2;
    sc_signal< sc_lv<10> > tmp_224_fu_333_p2;
    sc_signal< sc_lv<10> > tmp_229_fu_347_p2;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< sc_lv<14> > tmp_216_fu_269_p00;
    sc_signal< sc_lv<13> > tmp_221_fu_285_p00;
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
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<64> ap_const_lv64_2BC;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<8> ap_const_lv8_8C;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<16> ap_const_lv16_AB;
    static const sc_lv<32> ap_const_lv32_9;
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
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond_fu_183_p2();
    void thread_grp_mod3_fu_153_a();
    void thread_grp_mod3_fu_158_a();
    void thread_i_10_fu_189_p2();
    void thread_i_cast3_fu_179_p1();
    void thread_msg_address0();
    void thread_msg_ce0();
    void thread_p_shl_fu_209_p3();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_sum_cast_fu_204_p1();
    void thread_sum_fu_199_p2();
    void thread_tmp_210_fu_217_p2();
    void thread_tmp_211_fu_301_p1();
    void thread_tmp_212_fu_227_p0();
    void thread_tmp_212_fu_227_p2();
    void thread_tmp_214_fu_305_p2();
    void thread_tmp_215_fu_310_p1();
    void thread_tmp_216_fu_269_p0();
    void thread_tmp_216_fu_269_p00();
    void thread_tmp_216_fu_269_p2();
    void thread_tmp_219_fu_323_p2();
    void thread_tmp_220_fu_328_p1();
    void thread_tmp_221_fu_285_p0();
    void thread_tmp_221_fu_285_p00();
    void thread_tmp_221_fu_285_p2();
    void thread_tmp_224_fu_333_p2();
    void thread_tmp_225_fu_338_p1();
    void thread_tmp_226_fu_243_p0();
    void thread_tmp_226_fu_243_p2();
    void thread_tmp_229_fu_347_p2();
    void thread_tmp_230_fu_352_p1();
    void thread_tmp_233_fu_175_p1();
    void thread_tmp_263_cast_fu_265_p1();
    void thread_tmp_268_cast_cast_fu_315_p1();
    void thread_tmp_273_cast_cast_fu_319_p1();
    void thread_tmp_278_cast_fu_343_p1();
    void thread_tmp_cast_fu_195_p1();
    void thread_tmp_s_fu_223_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif