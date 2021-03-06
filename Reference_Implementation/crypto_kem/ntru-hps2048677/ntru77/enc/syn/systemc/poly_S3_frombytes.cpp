// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "poly_S3_frombytes.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic poly_S3_frombytes::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic poly_S3_frombytes::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state1 = "1";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state2 = "10";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state3 = "100";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state4 = "1000";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state5 = "10000";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state6 = "100000";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state7 = "1000000";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state8 = "10000000";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state9 = "100000000";
const sc_lv<10> poly_S3_frombytes::ap_ST_fsm_state10 = "1000000000";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_2 = "10";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_7 = "111";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_3 = "11";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_4 = "100";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_5 = "101";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_8 = "1000";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_1 = "1";
const sc_lv<1> poly_S3_frombytes::ap_const_lv1_0 = "0";
const sc_lv<1> poly_S3_frombytes::ap_const_lv1_1 = "1";
const sc_lv<8> poly_S3_frombytes::ap_const_lv8_0 = "00000000";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_6 = "110";
const sc_lv<64> poly_S3_frombytes::ap_const_lv64_2A3 = "1010100011";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_9 = "1001";
const sc_lv<64> poly_S3_frombytes::ap_const_lv64_2A4 = "1010100100";
const sc_lv<16> poly_S3_frombytes::ap_const_lv16_0 = "0000000000000000";
const sc_lv<8> poly_S3_frombytes::ap_const_lv8_87 = "10000111";
const sc_lv<8> poly_S3_frombytes::ap_const_lv8_1 = "1";
const sc_lv<2> poly_S3_frombytes::ap_const_lv2_0 = "00";
const sc_lv<9> poly_S3_frombytes::ap_const_lv9_87 = "10000111";
const sc_lv<16> poly_S3_frombytes::ap_const_lv16_AB = "10101011";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_F = "1111";
const sc_lv<16> poly_S3_frombytes::ap_const_lv16_CB = "11001011";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_E = "1110";
const sc_lv<14> poly_S3_frombytes::ap_const_lv14_39 = "111001";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_D = "1101";
const sc_lv<13> poly_S3_frombytes::ap_const_lv13_13 = "10011";
const sc_lv<32> poly_S3_frombytes::ap_const_lv32_C = "1100";
const sc_lv<10> poly_S3_frombytes::ap_const_lv10_1 = "1";
const sc_lv<10> poly_S3_frombytes::ap_const_lv10_2 = "10";
const sc_lv<10> poly_S3_frombytes::ap_const_lv10_3 = "11";
const sc_lv<10> poly_S3_frombytes::ap_const_lv10_4 = "100";
const bool poly_S3_frombytes::ap_const_boolean_1 = true;

poly_S3_frombytes::poly_S3_frombytes(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_mod3_fu_174 = new mod3("grp_mod3_fu_174");
    grp_mod3_fu_174->ap_ready(grp_mod3_fu_174_ap_ready);
    grp_mod3_fu_174->a(grp_mod3_fu_174_a);
    grp_mod3_fu_174->ap_return(grp_mod3_fu_174_ap_return);
    grp_mod3_fu_179 = new mod3("grp_mod3_fu_179");
    grp_mod3_fu_179->ap_ready(grp_mod3_fu_179_ap_ready);
    grp_mod3_fu_179->a(grp_mod3_fu_179_a);
    grp_mod3_fu_179->ap_return(grp_mod3_fu_179_ap_return);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
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
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_exitcond1_fu_208_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_163 );

    SC_METHOD(thread_grp_mod3_fu_174_a);
    sensitive << ( reg_184 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( tmp_305_cast_cast_fu_352_p1 );
    sensitive << ( tmp_315_cast_fu_380_p1 );

    SC_METHOD(thread_grp_mod3_fu_179_a);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_300_cast_fu_302_p1 );
    sensitive << ( tmp_310_cast_cast_fu_356_p1 );

    SC_METHOD(thread_i_10_fu_214_p2);
    sensitive << ( i_reg_163 );

    SC_METHOD(thread_i_cast3_fu_204_p1);
    sensitive << ( i_reg_163 );

    SC_METHOD(thread_msg_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_208_p2 );
    sensitive << ( sum_cast_fu_229_p1 );
    sensitive << ( sum2_cast_fu_253_p1 );

    SC_METHOD(thread_msg_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_208_p2 );

    SC_METHOD(thread_p_shl_fu_234_p3);
    sensitive << ( i_reg_163 );

    SC_METHOD(thread_r_coeffs_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_176_fu_338_p1 );
    sensitive << ( tmp_184_fu_365_p1 );
    sensitive << ( tmp_192_fu_389_p1 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_r_coeffs_address1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_180_fu_347_p1 );
    sensitive << ( tmp_188_fu_375_p1 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_r_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_r_coeffs_ce1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_r_coeffs_d0);
    sensitive << ( reg_189 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_r_coeffs_d1);
    sensitive << ( reg_189 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( reg_195 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_r_coeffs_we0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_r_coeffs_we1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_sum2_cast_fu_253_p1);
    sensitive << ( sum2_fu_248_p2 );

    SC_METHOD(thread_sum2_fu_248_p2);
    sensitive << ( tmp_198_reg_394 );

    SC_METHOD(thread_sum_cast_fu_229_p1);
    sensitive << ( sum_fu_224_p2 );

    SC_METHOD(thread_sum_fu_224_p2);
    sensitive << ( tmp_198_reg_394 );
    sensitive << ( tmp_cast_fu_220_p1 );

    SC_METHOD(thread_tmp_175_fu_242_p2);
    sensitive << ( p_shl_fu_234_p3 );
    sensitive << ( i_cast3_fu_204_p1 );

    SC_METHOD(thread_tmp_176_fu_338_p1);
    sensitive << ( tmp_175_reg_413 );

    SC_METHOD(thread_tmp_177_fu_262_p0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_s_fu_258_p1 );

    SC_METHOD(thread_tmp_177_fu_262_p2);
    sensitive << ( tmp_177_fu_262_p0 );

    SC_METHOD(thread_tmp_179_fu_342_p2);
    sensitive << ( tmp_175_reg_413 );

    SC_METHOD(thread_tmp_180_fu_347_p1);
    sensitive << ( tmp_179_fu_342_p2 );

    SC_METHOD(thread_tmp_181_fu_306_p0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_181_fu_306_p00 );

    SC_METHOD(thread_tmp_181_fu_306_p00);
    sensitive << ( reg_184 );

    SC_METHOD(thread_tmp_181_fu_306_p2);
    sensitive << ( tmp_181_fu_306_p0 );

    SC_METHOD(thread_tmp_183_fu_360_p2);
    sensitive << ( tmp_175_reg_413 );

    SC_METHOD(thread_tmp_184_fu_365_p1);
    sensitive << ( tmp_183_fu_360_p2 );

    SC_METHOD(thread_tmp_185_fu_322_p0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_185_fu_322_p00 );

    SC_METHOD(thread_tmp_185_fu_322_p00);
    sensitive << ( reg_184 );

    SC_METHOD(thread_tmp_185_fu_322_p2);
    sensitive << ( tmp_185_fu_322_p0 );

    SC_METHOD(thread_tmp_187_fu_370_p2);
    sensitive << ( tmp_175_reg_413 );

    SC_METHOD(thread_tmp_188_fu_375_p1);
    sensitive << ( tmp_187_fu_370_p2 );

    SC_METHOD(thread_tmp_189_fu_278_p0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_s_fu_258_p1 );

    SC_METHOD(thread_tmp_189_fu_278_p2);
    sensitive << ( tmp_189_fu_278_p0 );

    SC_METHOD(thread_tmp_191_fu_384_p2);
    sensitive << ( tmp_175_reg_413 );

    SC_METHOD(thread_tmp_192_fu_389_p1);
    sensitive << ( tmp_191_fu_384_p2 );

    SC_METHOD(thread_tmp_198_fu_200_p1);
    sensitive << ( msg_offset );

    SC_METHOD(thread_tmp_300_cast_fu_302_p1);
    sensitive << ( tmp_reg_427 );

    SC_METHOD(thread_tmp_305_cast_cast_fu_352_p1);
    sensitive << ( tmp_155_reg_437 );

    SC_METHOD(thread_tmp_310_cast_cast_fu_356_p1);
    sensitive << ( tmp_156_reg_442 );

    SC_METHOD(thread_tmp_315_cast_fu_380_p1);
    sensitive << ( tmp_157_reg_432 );

    SC_METHOD(thread_tmp_cast_fu_220_p1);
    sensitive << ( i_reg_163 );

    SC_METHOD(thread_tmp_s_fu_258_p1);
    sensitive << ( msg_q0 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_208_p2 );

    ap_CS_fsm = "0000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "poly_S3_frombytes_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, r_coeffs_address1, "(port)r_coeffs_address1");
    sc_trace(mVcdFile, r_coeffs_ce1, "(port)r_coeffs_ce1");
    sc_trace(mVcdFile, r_coeffs_we1, "(port)r_coeffs_we1");
    sc_trace(mVcdFile, r_coeffs_d1, "(port)r_coeffs_d1");
    sc_trace(mVcdFile, msg_address0, "(port)msg_address0");
    sc_trace(mVcdFile, msg_ce0, "(port)msg_ce0");
    sc_trace(mVcdFile, msg_q0, "(port)msg_q0");
    sc_trace(mVcdFile, msg_offset, "(port)msg_offset");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, reg_184, "reg_184");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, grp_mod3_fu_174_ap_return, "grp_mod3_fu_174_ap_return");
    sc_trace(mVcdFile, reg_189, "reg_189");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, grp_mod3_fu_179_ap_return, "grp_mod3_fu_179_ap_return");
    sc_trace(mVcdFile, reg_195, "reg_195");
    sc_trace(mVcdFile, tmp_198_fu_200_p1, "tmp_198_fu_200_p1");
    sc_trace(mVcdFile, tmp_198_reg_394, "tmp_198_reg_394");
    sc_trace(mVcdFile, i_10_fu_214_p2, "i_10_fu_214_p2");
    sc_trace(mVcdFile, i_10_reg_403, "i_10_reg_403");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, exitcond1_fu_208_p2, "exitcond1_fu_208_p2");
    sc_trace(mVcdFile, tmp_175_fu_242_p2, "tmp_175_fu_242_p2");
    sc_trace(mVcdFile, tmp_175_reg_413, "tmp_175_reg_413");
    sc_trace(mVcdFile, tmp_reg_427, "tmp_reg_427");
    sc_trace(mVcdFile, tmp_157_reg_432, "tmp_157_reg_432");
    sc_trace(mVcdFile, tmp_155_reg_437, "tmp_155_reg_437");
    sc_trace(mVcdFile, tmp_156_reg_442, "tmp_156_reg_442");
    sc_trace(mVcdFile, grp_mod3_fu_174_ap_ready, "grp_mod3_fu_174_ap_ready");
    sc_trace(mVcdFile, grp_mod3_fu_174_a, "grp_mod3_fu_174_a");
    sc_trace(mVcdFile, grp_mod3_fu_179_ap_ready, "grp_mod3_fu_179_ap_ready");
    sc_trace(mVcdFile, grp_mod3_fu_179_a, "grp_mod3_fu_179_a");
    sc_trace(mVcdFile, i_reg_163, "i_reg_163");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, tmp_305_cast_cast_fu_352_p1, "tmp_305_cast_cast_fu_352_p1");
    sc_trace(mVcdFile, tmp_315_cast_fu_380_p1, "tmp_315_cast_fu_380_p1");
    sc_trace(mVcdFile, tmp_300_cast_fu_302_p1, "tmp_300_cast_fu_302_p1");
    sc_trace(mVcdFile, tmp_310_cast_cast_fu_356_p1, "tmp_310_cast_cast_fu_356_p1");
    sc_trace(mVcdFile, sum_cast_fu_229_p1, "sum_cast_fu_229_p1");
    sc_trace(mVcdFile, sum2_cast_fu_253_p1, "sum2_cast_fu_253_p1");
    sc_trace(mVcdFile, tmp_176_fu_338_p1, "tmp_176_fu_338_p1");
    sc_trace(mVcdFile, tmp_180_fu_347_p1, "tmp_180_fu_347_p1");
    sc_trace(mVcdFile, tmp_184_fu_365_p1, "tmp_184_fu_365_p1");
    sc_trace(mVcdFile, tmp_188_fu_375_p1, "tmp_188_fu_375_p1");
    sc_trace(mVcdFile, tmp_192_fu_389_p1, "tmp_192_fu_389_p1");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, tmp_cast_fu_220_p1, "tmp_cast_fu_220_p1");
    sc_trace(mVcdFile, sum_fu_224_p2, "sum_fu_224_p2");
    sc_trace(mVcdFile, p_shl_fu_234_p3, "p_shl_fu_234_p3");
    sc_trace(mVcdFile, i_cast3_fu_204_p1, "i_cast3_fu_204_p1");
    sc_trace(mVcdFile, sum2_fu_248_p2, "sum2_fu_248_p2");
    sc_trace(mVcdFile, tmp_177_fu_262_p0, "tmp_177_fu_262_p0");
    sc_trace(mVcdFile, tmp_s_fu_258_p1, "tmp_s_fu_258_p1");
    sc_trace(mVcdFile, tmp_177_fu_262_p2, "tmp_177_fu_262_p2");
    sc_trace(mVcdFile, tmp_189_fu_278_p0, "tmp_189_fu_278_p0");
    sc_trace(mVcdFile, tmp_189_fu_278_p2, "tmp_189_fu_278_p2");
    sc_trace(mVcdFile, tmp_181_fu_306_p0, "tmp_181_fu_306_p0");
    sc_trace(mVcdFile, tmp_181_fu_306_p2, "tmp_181_fu_306_p2");
    sc_trace(mVcdFile, tmp_185_fu_322_p0, "tmp_185_fu_322_p0");
    sc_trace(mVcdFile, tmp_185_fu_322_p2, "tmp_185_fu_322_p2");
    sc_trace(mVcdFile, tmp_179_fu_342_p2, "tmp_179_fu_342_p2");
    sc_trace(mVcdFile, tmp_183_fu_360_p2, "tmp_183_fu_360_p2");
    sc_trace(mVcdFile, tmp_187_fu_370_p2, "tmp_187_fu_370_p2");
    sc_trace(mVcdFile, tmp_191_fu_384_p2, "tmp_191_fu_384_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, tmp_181_fu_306_p00, "tmp_181_fu_306_p00");
    sc_trace(mVcdFile, tmp_185_fu_322_p00, "tmp_185_fu_322_p00");
#endif

    }
}

poly_S3_frombytes::~poly_S3_frombytes() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete grp_mod3_fu_174;
    delete grp_mod3_fu_179;
}

void poly_S3_frombytes::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        i_reg_163 = i_10_reg_403.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_163 = ap_const_lv8_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_10_reg_403 = i_10_fu_214_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        reg_184 = msg_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        reg_189 = grp_mod3_fu_174_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        reg_195 = grp_mod3_fu_179_ap_return.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        tmp_155_reg_437 = tmp_181_fu_306_p2.read().range(13, 9);
        tmp_156_reg_442 = tmp_185_fu_322_p2.read().range(12, 9);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        tmp_157_reg_432 = tmp_189_fu_278_p2.read().range(15, 14);
        tmp_reg_427 = tmp_177_fu_262_p2.read().range(15, 9);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_208_p2.read(), ap_const_lv1_0))) {
        tmp_175_reg_413 = tmp_175_fu_242_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        tmp_198_reg_394 = tmp_198_fu_200_p1.read();
    }
}

void poly_S3_frombytes::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void poly_S3_frombytes::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void poly_S3_frombytes::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void poly_S3_frombytes::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void poly_S3_frombytes::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void poly_S3_frombytes::thread_exitcond1_fu_208_p2() {
    exitcond1_fu_208_p2 = (!i_reg_163.read().is_01() || !ap_const_lv8_87.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_163.read() == ap_const_lv8_87);
}

void poly_S3_frombytes::thread_grp_mod3_fu_174_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_mod3_fu_174_a = tmp_315_cast_fu_380_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_mod3_fu_174_a = tmp_305_cast_cast_fu_352_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        grp_mod3_fu_174_a = reg_184.read();
    } else {
        grp_mod3_fu_174_a = "XXXXXXXX";
    }
}

void poly_S3_frombytes::thread_grp_mod3_fu_179_a() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_mod3_fu_179_a = tmp_310_cast_cast_fu_356_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        grp_mod3_fu_179_a = tmp_300_cast_fu_302_p1.read();
    } else {
        grp_mod3_fu_179_a = "XXXXXXXX";
    }
}

void poly_S3_frombytes::thread_i_10_fu_214_p2() {
    i_10_fu_214_p2 = (!i_reg_163.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(i_reg_163.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void poly_S3_frombytes::thread_i_cast3_fu_204_p1() {
    i_cast3_fu_204_p1 = esl_zext<10,8>(i_reg_163.read());
}

void poly_S3_frombytes::thread_msg_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        if (esl_seteq<1,1,1>(exitcond1_fu_208_p2.read(), ap_const_lv1_1)) {
            msg_address0 =  (sc_lv<9>) (sum2_cast_fu_253_p1.read());
        } else if (esl_seteq<1,1,1>(exitcond1_fu_208_p2.read(), ap_const_lv1_0)) {
            msg_address0 =  (sc_lv<9>) (sum_cast_fu_229_p1.read());
        } else {
            msg_address0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        msg_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void poly_S3_frombytes::thread_msg_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond1_fu_208_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond1_fu_208_p2.read(), ap_const_lv1_1)))) {
        msg_ce0 = ap_const_logic_1;
    } else {
        msg_ce0 = ap_const_logic_0;
    }
}

void poly_S3_frombytes::thread_p_shl_fu_234_p3() {
    p_shl_fu_234_p3 = esl_concat<8,2>(i_reg_163.read(), ap_const_lv2_0);
}

void poly_S3_frombytes::thread_r_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        r_coeffs_address0 =  (sc_lv<10>) (ap_const_lv64_2A4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        r_coeffs_address0 =  (sc_lv<10>) (tmp_192_fu_389_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        r_coeffs_address0 =  (sc_lv<10>) (tmp_184_fu_365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_coeffs_address0 =  (sc_lv<10>) (tmp_176_fu_338_p1.read());
    } else {
        r_coeffs_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void poly_S3_frombytes::thread_r_coeffs_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        r_coeffs_address1 =  (sc_lv<10>) (ap_const_lv64_2A3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        r_coeffs_address1 =  (sc_lv<10>) (tmp_188_fu_375_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        r_coeffs_address1 =  (sc_lv<10>) (tmp_180_fu_347_p1.read());
    } else {
        r_coeffs_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void poly_S3_frombytes::thread_r_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        r_coeffs_ce0 = ap_const_logic_1;
    } else {
        r_coeffs_ce0 = ap_const_logic_0;
    }
}

void poly_S3_frombytes::thread_r_coeffs_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        r_coeffs_ce1 = ap_const_logic_1;
    } else {
        r_coeffs_ce1 = ap_const_logic_0;
    }
}

void poly_S3_frombytes::thread_r_coeffs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        r_coeffs_d0 = ap_const_lv16_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        r_coeffs_d0 = reg_189.read();
    } else {
        r_coeffs_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly_S3_frombytes::thread_r_coeffs_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        r_coeffs_d1 = reg_189.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        r_coeffs_d1 = reg_195.read();
    } else {
        r_coeffs_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void poly_S3_frombytes::thread_r_coeffs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        r_coeffs_we0 = ap_const_logic_1;
    } else {
        r_coeffs_we0 = ap_const_logic_0;
    }
}

void poly_S3_frombytes::thread_r_coeffs_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        r_coeffs_we1 = ap_const_logic_1;
    } else {
        r_coeffs_we1 = ap_const_logic_0;
    }
}

void poly_S3_frombytes::thread_sum2_cast_fu_253_p1() {
    sum2_cast_fu_253_p1 = esl_zext<64,9>(sum2_fu_248_p2.read());
}

void poly_S3_frombytes::thread_sum2_fu_248_p2() {
    sum2_fu_248_p2 = (!tmp_198_reg_394.read().is_01() || !ap_const_lv9_87.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_198_reg_394.read()) + sc_biguint<9>(ap_const_lv9_87));
}

void poly_S3_frombytes::thread_sum_cast_fu_229_p1() {
    sum_cast_fu_229_p1 = esl_zext<64,9>(sum_fu_224_p2.read());
}

void poly_S3_frombytes::thread_sum_fu_224_p2() {
    sum_fu_224_p2 = (!tmp_cast_fu_220_p1.read().is_01() || !tmp_198_reg_394.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_cast_fu_220_p1.read()) + sc_biguint<9>(tmp_198_reg_394.read()));
}

void poly_S3_frombytes::thread_tmp_175_fu_242_p2() {
    tmp_175_fu_242_p2 = (!p_shl_fu_234_p3.read().is_01() || !i_cast3_fu_204_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl_fu_234_p3.read()) + sc_biguint<10>(i_cast3_fu_204_p1.read()));
}

void poly_S3_frombytes::thread_tmp_176_fu_338_p1() {
    tmp_176_fu_338_p1 = esl_zext<64,10>(tmp_175_reg_413.read());
}

void poly_S3_frombytes::thread_tmp_177_fu_262_p0() {
    tmp_177_fu_262_p0 =  (sc_lv<8>) (tmp_s_fu_258_p1.read());
}

void poly_S3_frombytes::thread_tmp_177_fu_262_p2() {
    tmp_177_fu_262_p2 = (!tmp_177_fu_262_p0.read().is_01() || !ap_const_lv16_AB.is_01())? sc_lv<16>(): sc_biguint<8>(tmp_177_fu_262_p0.read()) * sc_biguint<16>(ap_const_lv16_AB);
}

void poly_S3_frombytes::thread_tmp_179_fu_342_p2() {
    tmp_179_fu_342_p2 = (!tmp_175_reg_413.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_175_reg_413.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void poly_S3_frombytes::thread_tmp_180_fu_347_p1() {
    tmp_180_fu_347_p1 = esl_zext<64,10>(tmp_179_fu_342_p2.read());
}

void poly_S3_frombytes::thread_tmp_181_fu_306_p0() {
    tmp_181_fu_306_p0 =  (sc_lv<8>) (tmp_181_fu_306_p00.read());
}

void poly_S3_frombytes::thread_tmp_181_fu_306_p00() {
    tmp_181_fu_306_p00 = esl_zext<14,8>(reg_184.read());
}

void poly_S3_frombytes::thread_tmp_181_fu_306_p2() {
    tmp_181_fu_306_p2 = (!tmp_181_fu_306_p0.read().is_01() || !ap_const_lv14_39.is_01())? sc_lv<14>(): sc_biguint<8>(tmp_181_fu_306_p0.read()) * sc_biguint<14>(ap_const_lv14_39);
}

void poly_S3_frombytes::thread_tmp_183_fu_360_p2() {
    tmp_183_fu_360_p2 = (!tmp_175_reg_413.read().is_01() || !ap_const_lv10_2.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_175_reg_413.read()) + sc_biguint<10>(ap_const_lv10_2));
}

void poly_S3_frombytes::thread_tmp_184_fu_365_p1() {
    tmp_184_fu_365_p1 = esl_zext<64,10>(tmp_183_fu_360_p2.read());
}

void poly_S3_frombytes::thread_tmp_185_fu_322_p0() {
    tmp_185_fu_322_p0 =  (sc_lv<8>) (tmp_185_fu_322_p00.read());
}

void poly_S3_frombytes::thread_tmp_185_fu_322_p00() {
    tmp_185_fu_322_p00 = esl_zext<13,8>(reg_184.read());
}

void poly_S3_frombytes::thread_tmp_185_fu_322_p2() {
    tmp_185_fu_322_p2 = (!tmp_185_fu_322_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(tmp_185_fu_322_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void poly_S3_frombytes::thread_tmp_187_fu_370_p2() {
    tmp_187_fu_370_p2 = (!tmp_175_reg_413.read().is_01() || !ap_const_lv10_3.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_175_reg_413.read()) + sc_biguint<10>(ap_const_lv10_3));
}

void poly_S3_frombytes::thread_tmp_188_fu_375_p1() {
    tmp_188_fu_375_p1 = esl_zext<64,10>(tmp_187_fu_370_p2.read());
}

void poly_S3_frombytes::thread_tmp_189_fu_278_p0() {
    tmp_189_fu_278_p0 =  (sc_lv<8>) (tmp_s_fu_258_p1.read());
}

void poly_S3_frombytes::thread_tmp_189_fu_278_p2() {
    tmp_189_fu_278_p2 = (!tmp_189_fu_278_p0.read().is_01() || !ap_const_lv16_CB.is_01())? sc_lv<16>(): sc_biguint<8>(tmp_189_fu_278_p0.read()) * sc_biguint<16>(ap_const_lv16_CB);
}

void poly_S3_frombytes::thread_tmp_191_fu_384_p2() {
    tmp_191_fu_384_p2 = (!tmp_175_reg_413.read().is_01() || !ap_const_lv10_4.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_175_reg_413.read()) + sc_biguint<10>(ap_const_lv10_4));
}

void poly_S3_frombytes::thread_tmp_192_fu_389_p1() {
    tmp_192_fu_389_p1 = esl_zext<64,10>(tmp_191_fu_384_p2.read());
}

void poly_S3_frombytes::thread_tmp_198_fu_200_p1() {
    tmp_198_fu_200_p1 = msg_offset.read().range(9-1, 0);
}

void poly_S3_frombytes::thread_tmp_300_cast_fu_302_p1() {
    tmp_300_cast_fu_302_p1 = esl_zext<8,7>(tmp_reg_427.read());
}

void poly_S3_frombytes::thread_tmp_305_cast_cast_fu_352_p1() {
    tmp_305_cast_cast_fu_352_p1 = esl_zext<8,5>(tmp_155_reg_437.read());
}

void poly_S3_frombytes::thread_tmp_310_cast_cast_fu_356_p1() {
    tmp_310_cast_cast_fu_356_p1 = esl_zext<8,4>(tmp_156_reg_442.read());
}

void poly_S3_frombytes::thread_tmp_315_cast_fu_380_p1() {
    tmp_315_cast_fu_380_p1 = esl_zext<8,2>(tmp_157_reg_432.read());
}

void poly_S3_frombytes::thread_tmp_cast_fu_220_p1() {
    tmp_cast_fu_220_p1 = esl_zext<9,8>(i_reg_163.read());
}

void poly_S3_frombytes::thread_tmp_s_fu_258_p1() {
    tmp_s_fu_258_p1 = esl_zext<16,8>(msg_q0.read());
}

void poly_S3_frombytes::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_208_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<10>) ("XXXXXXXXXX");
            break;
    }
}

}

