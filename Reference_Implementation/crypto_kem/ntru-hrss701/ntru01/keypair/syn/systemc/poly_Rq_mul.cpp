// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "poly_Rq_mul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic poly_Rq_mul::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic poly_Rq_mul::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state1 = "1";
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state2 = "10";
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state3 = "100";
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state4 = "1000";
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state5 = "10000";
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state6 = "100000";
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state7 = "1000000";
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state8 = "10000000";
const sc_lv<9> poly_Rq_mul::ap_ST_fsm_state9 = "100000000";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_3 = "11";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_6 = "110";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_1 = "1";
const sc_lv<1> poly_Rq_mul::ap_const_lv1_0 = "0";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_2 = "10";
const sc_lv<1> poly_Rq_mul::ap_const_lv1_1 = "1";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_5 = "101";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_8 = "1000";
const sc_lv<10> poly_Rq_mul::ap_const_lv10_1 = "1";
const sc_lv<10> poly_Rq_mul::ap_const_lv10_0 = "0000000000";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_4 = "100";
const sc_lv<32> poly_Rq_mul::ap_const_lv32_7 = "111";
const sc_lv<16> poly_Rq_mul::ap_const_lv16_0 = "0000000000000000";
const sc_lv<10> poly_Rq_mul::ap_const_lv10_2BE = "1010111110";
const sc_lv<10> poly_Rq_mul::ap_const_lv10_2BD = "1010111101";
const bool poly_Rq_mul::ap_const_boolean_1 = true;

poly_Rq_mul::poly_Rq_mul(sc_module_name name) : sc_module(name), mVcdFile(0) {
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49 = new crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>("crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49");
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49->din0(reg_129);
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49->din1(reg_133);
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49->din2(reg_137);
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49->dout(grp_fu_250_p3);
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50 = new crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>("crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50");
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50->din0(reg_129);
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50->din1(reg_133);
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50->din2(reg_137);
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50->dout(grp_fu_259_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_coeffs_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_208_fu_182_p1 );
    sensitive << ( tmp_214_fu_225_p1 );

    SC_METHOD(thread_a_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_145_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_145_p2 );

    SC_METHOD(thread_b_coeffs_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_210_fu_193_p1 );
    sensitive << ( tmp_215_fu_230_p1 );

    SC_METHOD(thread_b_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_exitcond1_fu_145_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( indvars_iv_reg_84 );

    SC_METHOD(thread_exitcond_fu_208_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( indvars_iv_reg_84 );
    sensitive << ( i_1_reg_118 );

    SC_METHOD(thread_i_1_cast_fu_204_p1);
    sensitive << ( i_1_reg_118 );

    SC_METHOD(thread_i_23_fu_198_p2);
    sensitive << ( i_reg_107 );

    SC_METHOD(thread_i_24_fu_214_p2);
    sensitive << ( i_1_reg_118 );

    SC_METHOD(thread_i_cast_fu_168_p1);
    sensitive << ( i_reg_107 );

    SC_METHOD(thread_indvars_iv_next_fu_235_p2);
    sensitive << ( indvars_iv_reg_84 );

    SC_METHOD(thread_k_5_fu_151_p2);
    sensitive << ( k_reg_96 );

    SC_METHOD(thread_k_cast2_fu_141_p1);
    sensitive << ( k_reg_96 );

    SC_METHOD(thread_r_coeffs_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( r_coeffs_addr_reg_282 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond_fu_208_p2 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( tmp_fu_157_p1 );

    SC_METHOD(thread_r_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond_fu_208_p2 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_r_coeffs_d0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( grp_fu_250_p3 );
    sensitive << ( grp_fu_259_p3 );
    sensitive << ( tmp_241_cast_fu_245_p1 );

    SC_METHOD(thread_r_coeffs_we0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_145_p2 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_tmp_206_fu_172_p2);
    sensitive << ( tmp_s_reg_287 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( i_reg_107 );

    SC_METHOD(thread_tmp_207_fu_177_p2);
    sensitive << ( k_cast2_reg_268 );
    sensitive << ( i_cast_fu_168_p1 );

    SC_METHOD(thread_tmp_208_fu_182_p1);
    sensitive << ( tmp_207_fu_177_p2 );

    SC_METHOD(thread_tmp_209_fu_187_p2);
    sensitive << ( i_reg_107 );

    SC_METHOD(thread_tmp_210_fu_193_p1);
    sensitive << ( tmp_209_fu_187_p2 );

    SC_METHOD(thread_tmp_213_fu_220_p2);
    sensitive << ( k_cast2_reg_268 );
    sensitive << ( i_1_cast_fu_204_p1 );

    SC_METHOD(thread_tmp_214_fu_225_p1);
    sensitive << ( tmp_213_fu_220_p2 );

    SC_METHOD(thread_tmp_215_fu_230_p1);
    sensitive << ( i_1_reg_118 );

    SC_METHOD(thread_tmp_241_cast_fu_245_p1);
    sensitive << ( tmp_272_fu_241_p1 );

    SC_METHOD(thread_tmp_272_fu_241_p1);
    sensitive << ( r_coeffs_q0 );

    SC_METHOD(thread_tmp_fu_157_p1);
    sensitive << ( k_reg_96 );

    SC_METHOD(thread_tmp_s_fu_162_p2);
    sensitive << ( k_reg_96 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_145_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_206_fu_172_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond_fu_208_p2 );

    ap_CS_fsm = "000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "poly_Rq_mul_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, r_coeffs_address0, "(port)r_coeffs_address0");
    sc_trace(mVcdFile, r_coeffs_ce0, "(port)r_coeffs_ce0");
    sc_trace(mVcdFile, r_coeffs_we0, "(port)r_coeffs_we0");
    sc_trace(mVcdFile, r_coeffs_d0, "(port)r_coeffs_d0");
    sc_trace(mVcdFile, r_coeffs_q0, "(port)r_coeffs_q0");
    sc_trace(mVcdFile, a_coeffs_address0, "(port)a_coeffs_address0");
    sc_trace(mVcdFile, a_coeffs_ce0, "(port)a_coeffs_ce0");
    sc_trace(mVcdFile, a_coeffs_q0, "(port)a_coeffs_q0");
    sc_trace(mVcdFile, b_coeffs_address0, "(port)b_coeffs_address0");
    sc_trace(mVcdFile, b_coeffs_ce0, "(port)b_coeffs_ce0");
    sc_trace(mVcdFile, b_coeffs_q0, "(port)b_coeffs_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, reg_129, "reg_129");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, reg_133, "reg_133");
    sc_trace(mVcdFile, reg_137, "reg_137");
    sc_trace(mVcdFile, k_cast2_fu_141_p1, "k_cast2_fu_141_p1");
    sc_trace(mVcdFile, k_cast2_reg_268, "k_cast2_reg_268");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, k_5_fu_151_p2, "k_5_fu_151_p2");
    sc_trace(mVcdFile, k_5_reg_277, "k_5_reg_277");
    sc_trace(mVcdFile, r_coeffs_addr_reg_282, "r_coeffs_addr_reg_282");
    sc_trace(mVcdFile, exitcond1_fu_145_p2, "exitcond1_fu_145_p2");
    sc_trace(mVcdFile, tmp_s_fu_162_p2, "tmp_s_fu_162_p2");
    sc_trace(mVcdFile, tmp_s_reg_287, "tmp_s_reg_287");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_206_fu_172_p2, "tmp_206_fu_172_p2");
    sc_trace(mVcdFile, i_23_fu_198_p2, "i_23_fu_198_p2");
    sc_trace(mVcdFile, i_23_reg_305, "i_23_reg_305");
    sc_trace(mVcdFile, i_24_fu_214_p2, "i_24_fu_214_p2");
    sc_trace(mVcdFile, i_24_reg_313, "i_24_reg_313");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, exitcond_fu_208_p2, "exitcond_fu_208_p2");
    sc_trace(mVcdFile, indvars_iv_next_fu_235_p2, "indvars_iv_next_fu_235_p2");
    sc_trace(mVcdFile, indvars_iv_next_reg_328, "indvars_iv_next_reg_328");
    sc_trace(mVcdFile, indvars_iv_reg_84, "indvars_iv_reg_84");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, k_reg_96, "k_reg_96");
    sc_trace(mVcdFile, i_reg_107, "i_reg_107");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, i_1_reg_118, "i_1_reg_118");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, tmp_fu_157_p1, "tmp_fu_157_p1");
    sc_trace(mVcdFile, tmp_208_fu_182_p1, "tmp_208_fu_182_p1");
    sc_trace(mVcdFile, tmp_210_fu_193_p1, "tmp_210_fu_193_p1");
    sc_trace(mVcdFile, tmp_214_fu_225_p1, "tmp_214_fu_225_p1");
    sc_trace(mVcdFile, tmp_215_fu_230_p1, "tmp_215_fu_230_p1");
    sc_trace(mVcdFile, grp_fu_250_p3, "grp_fu_250_p3");
    sc_trace(mVcdFile, grp_fu_259_p3, "grp_fu_259_p3");
    sc_trace(mVcdFile, tmp_241_cast_fu_245_p1, "tmp_241_cast_fu_245_p1");
    sc_trace(mVcdFile, i_cast_fu_168_p1, "i_cast_fu_168_p1");
    sc_trace(mVcdFile, tmp_207_fu_177_p2, "tmp_207_fu_177_p2");
    sc_trace(mVcdFile, tmp_209_fu_187_p2, "tmp_209_fu_187_p2");
    sc_trace(mVcdFile, i_1_cast_fu_204_p1, "i_1_cast_fu_204_p1");
    sc_trace(mVcdFile, tmp_213_fu_220_p2, "tmp_213_fu_220_p2");
    sc_trace(mVcdFile, tmp_272_fu_241_p1, "tmp_272_fu_241_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

poly_Rq_mul::~poly_Rq_mul() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49;
    delete crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50;
}

void poly_Rq_mul::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_206_fu_172_p2.read()))) {
        i_1_reg_118 = ap_const_lv10_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        i_1_reg_118 = i_24_reg_313.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_reg_107 = i_23_reg_305.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(exitcond1_fu_145_p2.read(), ap_const_lv1_0))) {
        i_reg_107 = ap_const_lv10_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvars_iv_reg_84 = ap_const_lv10_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        indvars_iv_reg_84 = indvars_iv_next_reg_328.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        k_reg_96 = ap_const_lv10_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        k_reg_96 = k_5_reg_277.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(tmp_206_fu_172_p2.read(), ap_const_lv1_1))) {
        i_23_reg_305 = i_23_fu_198_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_24_reg_313 = i_24_fu_214_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_208_p2.read()))) {
        indvars_iv_next_reg_328 = indvars_iv_next_fu_235_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        k_5_reg_277 = k_5_fu_151_p2.read();
        k_cast2_reg_268 = k_cast2_fu_141_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_145_p2.read(), ap_const_lv1_0))) {
        r_coeffs_addr_reg_282 =  (sc_lv<10>) (tmp_fu_157_p1.read());
        tmp_s_reg_287 = tmp_s_fu_162_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        reg_129 = a_coeffs_q0.read();
        reg_133 = b_coeffs_q0.read();
        reg_137 = r_coeffs_q0.read();
    }
}

void poly_Rq_mul::thread_a_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_214_fu_225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        a_coeffs_address0 =  (sc_lv<10>) (tmp_208_fu_182_p1.read());
    } else {
        a_coeffs_address0 = "XXXXXXXXXX";
    }
}

void poly_Rq_mul::thread_a_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        a_coeffs_ce0 = ap_const_logic_1;
    } else {
        a_coeffs_ce0 = ap_const_logic_0;
    }
}

void poly_Rq_mul::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void poly_Rq_mul::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void poly_Rq_mul::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void poly_Rq_mul::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void poly_Rq_mul::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void poly_Rq_mul::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void poly_Rq_mul::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void poly_Rq_mul::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void poly_Rq_mul::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void poly_Rq_mul::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond1_fu_145_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void poly_Rq_mul::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void poly_Rq_mul::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_145_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void poly_Rq_mul::thread_b_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        b_coeffs_address0 =  (sc_lv<10>) (tmp_215_fu_230_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        b_coeffs_address0 =  (sc_lv<10>) (tmp_210_fu_193_p1.read());
    } else {
        b_coeffs_address0 = "XXXXXXXXXX";
    }
}

void poly_Rq_mul::thread_b_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        b_coeffs_ce0 = ap_const_logic_1;
    } else {
        b_coeffs_ce0 = ap_const_logic_0;
    }
}

void poly_Rq_mul::thread_exitcond1_fu_145_p2() {
    exitcond1_fu_145_p2 = (!indvars_iv_reg_84.read().is_01() || !ap_const_lv10_2BE.is_01())? sc_lv<1>(): sc_lv<1>(indvars_iv_reg_84.read() == ap_const_lv10_2BE);
}

void poly_Rq_mul::thread_exitcond_fu_208_p2() {
    exitcond_fu_208_p2 = (!i_1_reg_118.read().is_01() || !indvars_iv_reg_84.read().is_01())? sc_lv<1>(): sc_lv<1>(i_1_reg_118.read() == indvars_iv_reg_84.read());
}

void poly_Rq_mul::thread_i_1_cast_fu_204_p1() {
    i_1_cast_fu_204_p1 = esl_zext<11,10>(i_1_reg_118.read());
}

void poly_Rq_mul::thread_i_23_fu_198_p2() {
    i_23_fu_198_p2 = (!i_reg_107.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i_reg_107.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void poly_Rq_mul::thread_i_24_fu_214_p2() {
    i_24_fu_214_p2 = (!i_1_reg_118.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i_1_reg_118.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void poly_Rq_mul::thread_i_cast_fu_168_p1() {
    i_cast_fu_168_p1 = esl_zext<11,10>(i_reg_107.read());
}

void poly_Rq_mul::thread_indvars_iv_next_fu_235_p2() {
    indvars_iv_next_fu_235_p2 = (!ap_const_lv10_1.is_01() || !indvars_iv_reg_84.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1) + sc_biguint<10>(indvars_iv_reg_84.read()));
}

void poly_Rq_mul::thread_k_5_fu_151_p2() {
    k_5_fu_151_p2 = (!k_reg_96.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(k_reg_96.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void poly_Rq_mul::thread_k_cast2_fu_141_p1() {
    k_cast2_fu_141_p1 = esl_zext<11,10>(k_reg_96.read());
}

void poly_Rq_mul::thread_r_coeffs_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_208_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_208_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        r_coeffs_address0 = r_coeffs_addr_reg_282.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        r_coeffs_address0 =  (sc_lv<10>) (tmp_fu_157_p1.read());
    } else {
        r_coeffs_address0 = "XXXXXXXXXX";
    }
}

void poly_Rq_mul::thread_r_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_208_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_208_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        r_coeffs_ce0 = ap_const_logic_1;
    } else {
        r_coeffs_ce0 = ap_const_logic_0;
    }
}

void poly_Rq_mul::thread_r_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        r_coeffs_d0 = tmp_241_cast_fu_245_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        r_coeffs_d0 = grp_fu_259_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_coeffs_d0 = grp_fu_250_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        r_coeffs_d0 = ap_const_lv16_0;
    } else {
        r_coeffs_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly_Rq_mul::thread_r_coeffs_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond1_fu_145_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        r_coeffs_we0 = ap_const_logic_1;
    } else {
        r_coeffs_we0 = ap_const_logic_0;
    }
}

void poly_Rq_mul::thread_tmp_206_fu_172_p2() {
    tmp_206_fu_172_p2 = (!i_reg_107.read().is_01() || !tmp_s_reg_287.read().is_01())? sc_lv<1>(): (sc_biguint<10>(i_reg_107.read()) < sc_biguint<10>(tmp_s_reg_287.read()));
}

void poly_Rq_mul::thread_tmp_207_fu_177_p2() {
    tmp_207_fu_177_p2 = (!k_cast2_reg_268.read().is_01() || !i_cast_fu_168_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(k_cast2_reg_268.read()) + sc_biguint<11>(i_cast_fu_168_p1.read()));
}

void poly_Rq_mul::thread_tmp_208_fu_182_p1() {
    tmp_208_fu_182_p1 = esl_zext<64,11>(tmp_207_fu_177_p2.read());
}

void poly_Rq_mul::thread_tmp_209_fu_187_p2() {
    tmp_209_fu_187_p2 = (!ap_const_lv10_2BD.is_01() || !i_reg_107.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2BD) - sc_biguint<10>(i_reg_107.read()));
}

void poly_Rq_mul::thread_tmp_210_fu_193_p1() {
    tmp_210_fu_193_p1 = esl_zext<64,10>(tmp_209_fu_187_p2.read());
}

void poly_Rq_mul::thread_tmp_213_fu_220_p2() {
    tmp_213_fu_220_p2 = (!k_cast2_reg_268.read().is_01() || !i_1_cast_fu_204_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(k_cast2_reg_268.read()) - sc_biguint<11>(i_1_cast_fu_204_p1.read()));
}

void poly_Rq_mul::thread_tmp_214_fu_225_p1() {
    tmp_214_fu_225_p1 = esl_sext<64,11>(tmp_213_fu_220_p2.read());
}

void poly_Rq_mul::thread_tmp_215_fu_230_p1() {
    tmp_215_fu_230_p1 = esl_zext<64,10>(i_1_reg_118.read());
}

void poly_Rq_mul::thread_tmp_241_cast_fu_245_p1() {
    tmp_241_cast_fu_245_p1 = esl_zext<16,13>(tmp_272_fu_241_p1.read());
}

void poly_Rq_mul::thread_tmp_272_fu_241_p1() {
    tmp_272_fu_241_p1 = r_coeffs_q0.read().range(13-1, 0);
}

void poly_Rq_mul::thread_tmp_fu_157_p1() {
    tmp_fu_157_p1 = esl_zext<64,10>(k_reg_96.read());
}

void poly_Rq_mul::thread_tmp_s_fu_162_p2() {
    tmp_s_fu_162_p2 = (!ap_const_lv10_2BD.is_01() || !k_reg_96.read().is_01())? sc_lv<10>(): (sc_bigint<10>(ap_const_lv10_2BD) - sc_biguint<10>(k_reg_96.read()));
}

void poly_Rq_mul::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_145_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_206_fu_172_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_208_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<9>) ("XXXXXXXXX");
            break;
    }
}

}
