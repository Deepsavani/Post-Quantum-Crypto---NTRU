// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_Rq_mul_HH_
#define _poly_Rq_mul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1.h"

namespace ap_rtl {

struct poly_Rq_mul : public sc_module {
    // Port declarations 17
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
    sc_out< sc_lv<10> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;
    sc_out< sc_lv<10> > b_coeffs_address0;
    sc_out< sc_logic > b_coeffs_ce0;
    sc_in< sc_lv<16> > b_coeffs_q0;


    // Module declarations
    poly_Rq_mul(sc_module_name name);
    SC_HAS_PROCESS(poly_Rq_mul);

    ~poly_Rq_mul();

    sc_trace_file* mVcdFile;

    crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>* crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1_U51;
    crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>* crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1_U52;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > reg_127;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > reg_131;
    sc_signal< sc_lv<16> > reg_135;
    sc_signal< sc_lv<11> > k_cast2_fu_139_p1;
    sc_signal< sc_lv<11> > k_cast2_reg_266;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > k_1_fu_149_p2;
    sc_signal< sc_lv<10> > k_1_reg_275;
    sc_signal< sc_lv<10> > r_coeffs_addr_reg_280;
    sc_signal< sc_lv<1> > exitcond1_fu_143_p2;
    sc_signal< sc_lv<10> > tmp_s_fu_160_p2;
    sc_signal< sc_lv<10> > tmp_s_reg_285;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_231_fu_170_p2;
    sc_signal< sc_lv<10> > i_11_fu_196_p2;
    sc_signal< sc_lv<10> > i_11_reg_303;
    sc_signal< sc_lv<10> > i_12_fu_212_p2;
    sc_signal< sc_lv<10> > i_12_reg_311;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > exitcond_fu_206_p2;
    sc_signal< sc_lv<10> > indvars_iv_next_fu_233_p2;
    sc_signal< sc_lv<10> > indvars_iv_next_reg_326;
    sc_signal< sc_lv<10> > indvars_iv_reg_82;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<10> > k_reg_94;
    sc_signal< sc_lv<10> > i_reg_105;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<10> > i_1_reg_116;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > tmp_fu_155_p1;
    sc_signal< sc_lv<64> > tmp_233_fu_180_p1;
    sc_signal< sc_lv<64> > tmp_235_fu_191_p1;
    sc_signal< sc_lv<64> > tmp_240_fu_223_p1;
    sc_signal< sc_lv<64> > tmp_241_fu_228_p1;
    sc_signal< sc_lv<16> > grp_fu_248_p3;
    sc_signal< sc_lv<16> > grp_fu_257_p3;
    sc_signal< sc_lv<16> > tmp_289_cast_fu_243_p1;
    sc_signal< sc_lv<11> > i_cast_fu_166_p1;
    sc_signal< sc_lv<11> > tmp_232_fu_175_p2;
    sc_signal< sc_lv<10> > tmp_234_fu_185_p2;
    sc_signal< sc_lv<11> > i_1_cast_fu_202_p1;
    sc_signal< sc_lv<11> > tmp_239_fu_218_p2;
    sc_signal< sc_lv<13> > tmp_238_fu_239_p1;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<10> ap_const_lv10_2BE;
    static const sc_lv<10> ap_const_lv10_2BD;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
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
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_coeffs_address0();
    void thread_b_coeffs_ce0();
    void thread_exitcond1_fu_143_p2();
    void thread_exitcond_fu_206_p2();
    void thread_i_11_fu_196_p2();
    void thread_i_12_fu_212_p2();
    void thread_i_1_cast_fu_202_p1();
    void thread_i_cast_fu_166_p1();
    void thread_indvars_iv_next_fu_233_p2();
    void thread_k_1_fu_149_p2();
    void thread_k_cast2_fu_139_p1();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_we0();
    void thread_tmp_231_fu_170_p2();
    void thread_tmp_232_fu_175_p2();
    void thread_tmp_233_fu_180_p1();
    void thread_tmp_234_fu_185_p2();
    void thread_tmp_235_fu_191_p1();
    void thread_tmp_238_fu_239_p1();
    void thread_tmp_239_fu_218_p2();
    void thread_tmp_240_fu_223_p1();
    void thread_tmp_241_fu_228_p1();
    void thread_tmp_289_cast_fu_243_p1();
    void thread_tmp_fu_155_p1();
    void thread_tmp_s_fu_160_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
