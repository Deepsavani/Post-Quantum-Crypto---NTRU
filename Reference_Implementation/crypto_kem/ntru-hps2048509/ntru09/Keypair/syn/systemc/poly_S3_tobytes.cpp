// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "poly_S3_tobytes.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic poly_S3_tobytes::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic poly_S3_tobytes::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> poly_S3_tobytes::ap_ST_fsm_state1 = "1";
const sc_lv<8> poly_S3_tobytes::ap_ST_fsm_state2 = "10";
const sc_lv<8> poly_S3_tobytes::ap_ST_fsm_state3 = "100";
const sc_lv<8> poly_S3_tobytes::ap_ST_fsm_state4 = "1000";
const sc_lv<8> poly_S3_tobytes::ap_ST_fsm_state5 = "10000";
const sc_lv<8> poly_S3_tobytes::ap_ST_fsm_state6 = "100000";
const sc_lv<8> poly_S3_tobytes::ap_ST_fsm_state7 = "1000000";
const sc_lv<8> poly_S3_tobytes::ap_ST_fsm_state8 = "10000000";
const sc_lv<32> poly_S3_tobytes::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> poly_S3_tobytes::ap_const_lv32_1 = "1";
const sc_lv<1> poly_S3_tobytes::ap_const_lv1_0 = "0";
const sc_lv<32> poly_S3_tobytes::ap_const_lv32_2 = "10";
const sc_lv<32> poly_S3_tobytes::ap_const_lv32_3 = "11";
const sc_lv<32> poly_S3_tobytes::ap_const_lv32_4 = "100";
const sc_lv<32> poly_S3_tobytes::ap_const_lv32_6 = "110";
const sc_lv<32> poly_S3_tobytes::ap_const_lv32_7 = "111";
const sc_lv<7> poly_S3_tobytes::ap_const_lv7_0 = "0000000";
const sc_lv<32> poly_S3_tobytes::ap_const_lv32_5 = "101";
const sc_lv<8> poly_S3_tobytes::ap_const_lv8_0 = "00000000";
const sc_lv<1> poly_S3_tobytes::ap_const_lv1_1 = "1";
const sc_lv<3> poly_S3_tobytes::ap_const_lv3_2 = "10";
const sc_lv<7> poly_S3_tobytes::ap_const_lv7_65 = "1100101";
const sc_lv<7> poly_S3_tobytes::ap_const_lv7_1 = "1";
const sc_lv<2> poly_S3_tobytes::ap_const_lv2_0 = "00";
const sc_lv<9> poly_S3_tobytes::ap_const_lv9_4 = "100";
const sc_lv<9> poly_S3_tobytes::ap_const_lv9_3 = "11";
const sc_lv<9> poly_S3_tobytes::ap_const_lv9_2 = "10";
const sc_lv<8> poly_S3_tobytes::ap_const_lv8_2 = "10";
const sc_lv<9> poly_S3_tobytes::ap_const_lv9_1 = "1";
const sc_lv<4> poly_S3_tobytes::ap_const_lv4_9 = "1001";
const sc_lv<3> poly_S3_tobytes::ap_const_lv3_7 = "111";
const sc_lv<8> poly_S3_tobytes::ap_const_lv8_65 = "1100101";
const bool poly_S3_tobytes::ap_const_boolean_1 = true;

poly_S3_tobytes::poly_S3_tobytes(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_coeffs_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_135_fu_214_p1 );
    sensitive << ( tmp_141_fu_267_p1 );
    sensitive << ( tmp_146_fu_311_p1 );

    SC_METHOD(thread_a_coeffs_address1);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_138_fu_225_p1 );
    sensitive << ( tmp_144_fu_306_p1 );
    sensitive << ( tmp_150_fu_381_p1 );

    SC_METHOD(thread_a_coeffs_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_a_coeffs_ce1);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state7 );

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

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_164_fu_363_p3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_164_fu_363_p3 );

    SC_METHOD(thread_c_1_fu_256_p2);
    sensitive << ( tmp_136_fu_246_p2 );
    sensitive << ( tmp_157_fu_252_p1 );

    SC_METHOD(thread_c_2_fu_295_p2);
    sensitive << ( tmp_159_fu_291_p1 );
    sensitive << ( tmp_139_fu_286_p2 );

    SC_METHOD(thread_c_3_fu_329_p2);
    sensitive << ( tmp_161_fu_325_p1 );
    sensitive << ( tmp_142_fu_320_p2 );

    SC_METHOD(thread_c_4_fu_349_p2);
    sensitive << ( tmp_163_reg_493 );
    sensitive << ( tmp_145_fu_344_p2 );

    SC_METHOD(thread_c_5_fu_418_p2);
    sensitive << ( tmp_147_fu_408_p2 );
    sensitive << ( tmp_166_fu_414_p1 );

    SC_METHOD(thread_c_fu_230_p1);
    sensitive << ( a_coeffs_q0 );

    SC_METHOD(thread_exitcond_fu_182_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_138 );

    SC_METHOD(thread_i_9_fu_188_p2);
    sensitive << ( i_reg_138 );

    SC_METHOD(thread_i_cast1_fu_178_p1);
    sensitive << ( i_reg_138 );

    SC_METHOD(thread_j_5_fu_386_p2);
    sensitive << ( j_reg_163 );

    SC_METHOD(thread_j_cast_cast_fu_359_p1);
    sensitive << ( j_reg_163 );

    SC_METHOD(thread_msg_address0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( sum_cast_fu_355_p1 );
    sensitive << ( sum2_cast_fu_397_p1 );

    SC_METHOD(thread_msg_ce0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_msg_d0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( c5_reg_150 );
    sensitive << ( c_4_fu_349_p2 );

    SC_METHOD(thread_msg_we0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_164_fu_363_p3 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_p_shl6_fu_238_p3);
    sensitive << ( tmp_153_fu_234_p1 );

    SC_METHOD(thread_p_shl7_fu_194_p3);
    sensitive << ( i_reg_138 );

    SC_METHOD(thread_sum2_cast_fu_397_p1);
    sensitive << ( sum2_fu_392_p2 );

    SC_METHOD(thread_sum2_fu_392_p2);
    sensitive << ( tmp_149_reg_424 );

    SC_METHOD(thread_sum_cast_fu_355_p1);
    sensitive << ( sum_reg_466 );

    SC_METHOD(thread_sum_fu_276_p2);
    sensitive << ( tmp_149_reg_424 );
    sensitive << ( tmp_236_cast_fu_272_p1 );

    SC_METHOD(thread_tmp_135_fu_214_p1);
    sensitive << ( tmp_s_fu_208_p2 );

    SC_METHOD(thread_tmp_136_fu_246_p2);
    sensitive << ( p_shl6_fu_238_p3 );
    sensitive << ( c_fu_230_p1 );

    SC_METHOD(thread_tmp_137_fu_219_p2);
    sensitive << ( tmp_fu_202_p2 );

    SC_METHOD(thread_tmp_138_fu_225_p1);
    sensitive << ( tmp_137_fu_219_p2 );

    SC_METHOD(thread_tmp_139_fu_286_p2);
    sensitive << ( c_1_reg_455 );
    sensitive << ( tmp_158_fu_281_p2 );

    SC_METHOD(thread_tmp_140_fu_262_p2);
    sensitive << ( tmp_reg_438 );

    SC_METHOD(thread_tmp_141_fu_267_p1);
    sensitive << ( tmp_140_fu_262_p2 );

    SC_METHOD(thread_tmp_142_fu_320_p2);
    sensitive << ( c_2_reg_471 );
    sensitive << ( tmp_160_fu_315_p2 );

    SC_METHOD(thread_tmp_143_fu_301_p2);
    sensitive << ( tmp_reg_438 );

    SC_METHOD(thread_tmp_144_fu_306_p1);
    sensitive << ( tmp_143_fu_301_p2 );

    SC_METHOD(thread_tmp_145_fu_344_p2);
    sensitive << ( c_3_reg_487 );
    sensitive << ( tmp_162_fu_339_p2 );

    SC_METHOD(thread_tmp_146_fu_311_p1);
    sensitive << ( tmp_reg_438 );

    SC_METHOD(thread_tmp_147_fu_408_p2);
    sensitive << ( c5_reg_150 );
    sensitive << ( tmp_165_fu_402_p2 );

    SC_METHOD(thread_tmp_148_fu_371_p2);
    sensitive << ( j_cast_cast_fu_359_p1 );

    SC_METHOD(thread_tmp_149_fu_174_p1);
    sensitive << ( msg_offset );

    SC_METHOD(thread_tmp_150_fu_381_p1);
    sensitive << ( tmp_238_cast4_fu_377_p1 );

    SC_METHOD(thread_tmp_153_fu_234_p1);
    sensitive << ( a_coeffs_q0 );

    SC_METHOD(thread_tmp_157_fu_252_p1);
    sensitive << ( a_coeffs_q1 );

    SC_METHOD(thread_tmp_158_fu_281_p2);
    sensitive << ( c_1_reg_455 );

    SC_METHOD(thread_tmp_159_fu_291_p1);
    sensitive << ( a_coeffs_q0 );

    SC_METHOD(thread_tmp_160_fu_315_p2);
    sensitive << ( c_2_reg_471 );

    SC_METHOD(thread_tmp_161_fu_325_p1);
    sensitive << ( a_coeffs_q1 );

    SC_METHOD(thread_tmp_162_fu_339_p2);
    sensitive << ( c_3_reg_487 );

    SC_METHOD(thread_tmp_163_fu_335_p1);
    sensitive << ( a_coeffs_q0 );

    SC_METHOD(thread_tmp_164_fu_363_p3);
    sensitive << ( j_reg_163 );

    SC_METHOD(thread_tmp_165_fu_402_p2);
    sensitive << ( c5_reg_150 );

    SC_METHOD(thread_tmp_166_fu_414_p1);
    sensitive << ( a_coeffs_q1 );

    SC_METHOD(thread_tmp_236_cast_fu_272_p1);
    sensitive << ( i_reg_138 );

    SC_METHOD(thread_tmp_238_cast4_fu_377_p1);
    sensitive << ( tmp_148_fu_371_p2 );

    SC_METHOD(thread_tmp_fu_202_p2);
    sensitive << ( p_shl7_fu_194_p3 );
    sensitive << ( i_cast1_fu_178_p1 );

    SC_METHOD(thread_tmp_s_fu_208_p2);
    sensitive << ( tmp_fu_202_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_182_p2 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_164_fu_363_p3 );

    ap_CS_fsm = "00000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "poly_S3_tobytes_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, msg_address0, "(port)msg_address0");
    sc_trace(mVcdFile, msg_ce0, "(port)msg_ce0");
    sc_trace(mVcdFile, msg_we0, "(port)msg_we0");
    sc_trace(mVcdFile, msg_d0, "(port)msg_d0");
    sc_trace(mVcdFile, msg_offset, "(port)msg_offset");
    sc_trace(mVcdFile, a_coeffs_address0, "(port)a_coeffs_address0");
    sc_trace(mVcdFile, a_coeffs_ce0, "(port)a_coeffs_ce0");
    sc_trace(mVcdFile, a_coeffs_q0, "(port)a_coeffs_q0");
    sc_trace(mVcdFile, a_coeffs_address1, "(port)a_coeffs_address1");
    sc_trace(mVcdFile, a_coeffs_ce1, "(port)a_coeffs_ce1");
    sc_trace(mVcdFile, a_coeffs_q1, "(port)a_coeffs_q1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, tmp_149_fu_174_p1, "tmp_149_fu_174_p1");
    sc_trace(mVcdFile, tmp_149_reg_424, "tmp_149_reg_424");
    sc_trace(mVcdFile, i_9_fu_188_p2, "i_9_fu_188_p2");
    sc_trace(mVcdFile, i_9_reg_433, "i_9_reg_433");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_fu_202_p2, "tmp_fu_202_p2");
    sc_trace(mVcdFile, tmp_reg_438, "tmp_reg_438");
    sc_trace(mVcdFile, exitcond_fu_182_p2, "exitcond_fu_182_p2");
    sc_trace(mVcdFile, c_1_fu_256_p2, "c_1_fu_256_p2");
    sc_trace(mVcdFile, c_1_reg_455, "c_1_reg_455");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, sum_fu_276_p2, "sum_fu_276_p2");
    sc_trace(mVcdFile, sum_reg_466, "sum_reg_466");
    sc_trace(mVcdFile, c_2_fu_295_p2, "c_2_fu_295_p2");
    sc_trace(mVcdFile, c_2_reg_471, "c_2_reg_471");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, c_3_fu_329_p2, "c_3_fu_329_p2");
    sc_trace(mVcdFile, c_3_reg_487, "c_3_reg_487");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_163_fu_335_p1, "tmp_163_fu_335_p1");
    sc_trace(mVcdFile, tmp_163_reg_493, "tmp_163_reg_493");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, tmp_164_fu_363_p3, "tmp_164_fu_363_p3");
    sc_trace(mVcdFile, j_5_fu_386_p2, "j_5_fu_386_p2");
    sc_trace(mVcdFile, j_5_reg_506, "j_5_reg_506");
    sc_trace(mVcdFile, c_5_fu_418_p2, "c_5_fu_418_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, i_reg_138, "i_reg_138");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, c5_reg_150, "c5_reg_150");
    sc_trace(mVcdFile, j_reg_163, "j_reg_163");
    sc_trace(mVcdFile, tmp_135_fu_214_p1, "tmp_135_fu_214_p1");
    sc_trace(mVcdFile, tmp_138_fu_225_p1, "tmp_138_fu_225_p1");
    sc_trace(mVcdFile, tmp_141_fu_267_p1, "tmp_141_fu_267_p1");
    sc_trace(mVcdFile, tmp_144_fu_306_p1, "tmp_144_fu_306_p1");
    sc_trace(mVcdFile, tmp_146_fu_311_p1, "tmp_146_fu_311_p1");
    sc_trace(mVcdFile, sum_cast_fu_355_p1, "sum_cast_fu_355_p1");
    sc_trace(mVcdFile, tmp_150_fu_381_p1, "tmp_150_fu_381_p1");
    sc_trace(mVcdFile, sum2_cast_fu_397_p1, "sum2_cast_fu_397_p1");
    sc_trace(mVcdFile, c_4_fu_349_p2, "c_4_fu_349_p2");
    sc_trace(mVcdFile, p_shl7_fu_194_p3, "p_shl7_fu_194_p3");
    sc_trace(mVcdFile, i_cast1_fu_178_p1, "i_cast1_fu_178_p1");
    sc_trace(mVcdFile, tmp_s_fu_208_p2, "tmp_s_fu_208_p2");
    sc_trace(mVcdFile, tmp_137_fu_219_p2, "tmp_137_fu_219_p2");
    sc_trace(mVcdFile, tmp_153_fu_234_p1, "tmp_153_fu_234_p1");
    sc_trace(mVcdFile, p_shl6_fu_238_p3, "p_shl6_fu_238_p3");
    sc_trace(mVcdFile, c_fu_230_p1, "c_fu_230_p1");
    sc_trace(mVcdFile, tmp_136_fu_246_p2, "tmp_136_fu_246_p2");
    sc_trace(mVcdFile, tmp_157_fu_252_p1, "tmp_157_fu_252_p1");
    sc_trace(mVcdFile, tmp_140_fu_262_p2, "tmp_140_fu_262_p2");
    sc_trace(mVcdFile, tmp_236_cast_fu_272_p1, "tmp_236_cast_fu_272_p1");
    sc_trace(mVcdFile, tmp_158_fu_281_p2, "tmp_158_fu_281_p2");
    sc_trace(mVcdFile, tmp_159_fu_291_p1, "tmp_159_fu_291_p1");
    sc_trace(mVcdFile, tmp_139_fu_286_p2, "tmp_139_fu_286_p2");
    sc_trace(mVcdFile, tmp_143_fu_301_p2, "tmp_143_fu_301_p2");
    sc_trace(mVcdFile, tmp_160_fu_315_p2, "tmp_160_fu_315_p2");
    sc_trace(mVcdFile, tmp_161_fu_325_p1, "tmp_161_fu_325_p1");
    sc_trace(mVcdFile, tmp_142_fu_320_p2, "tmp_142_fu_320_p2");
    sc_trace(mVcdFile, tmp_162_fu_339_p2, "tmp_162_fu_339_p2");
    sc_trace(mVcdFile, tmp_145_fu_344_p2, "tmp_145_fu_344_p2");
    sc_trace(mVcdFile, j_cast_cast_fu_359_p1, "j_cast_cast_fu_359_p1");
    sc_trace(mVcdFile, tmp_148_fu_371_p2, "tmp_148_fu_371_p2");
    sc_trace(mVcdFile, tmp_238_cast4_fu_377_p1, "tmp_238_cast4_fu_377_p1");
    sc_trace(mVcdFile, sum2_fu_392_p2, "sum2_fu_392_p2");
    sc_trace(mVcdFile, tmp_165_fu_402_p2, "tmp_165_fu_402_p2");
    sc_trace(mVcdFile, tmp_147_fu_408_p2, "tmp_147_fu_408_p2");
    sc_trace(mVcdFile, tmp_166_fu_414_p1, "tmp_166_fu_414_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

poly_S3_tobytes::~poly_S3_tobytes() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void poly_S3_tobytes::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_182_p2.read(), ap_const_lv1_1))) {
        c5_reg_150 = ap_const_lv8_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        c5_reg_150 = c_5_fu_418_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_reg_138 = i_9_reg_433.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_138 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_182_p2.read(), ap_const_lv1_1))) {
        j_reg_163 = ap_const_lv3_2;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        j_reg_163 = j_5_reg_506.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        c_1_reg_455 = c_1_fu_256_p2.read();
        sum_reg_466 = sum_fu_276_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        c_2_reg_471 = c_2_fu_295_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        c_3_reg_487 = c_3_fu_329_p2.read();
        tmp_163_reg_493 = tmp_163_fu_335_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_9_reg_433 = i_9_fu_188_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_164_fu_363_p3.read()))) {
        j_5_reg_506 = j_5_fu_386_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        tmp_149_reg_424 = tmp_149_fu_174_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_182_p2.read(), ap_const_lv1_0))) {
        tmp_reg_438 = tmp_fu_202_p2.read();
    }
}

void poly_S3_tobytes::thread_a_coeffs_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_coeffs_address0 =  (sc_lv<9>) (tmp_146_fu_311_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        a_coeffs_address0 =  (sc_lv<9>) (tmp_141_fu_267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_coeffs_address0 =  (sc_lv<9>) (tmp_135_fu_214_p1.read());
    } else {
        a_coeffs_address0 = "XXXXXXXXX";
    }
}

void poly_S3_tobytes::thread_a_coeffs_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        a_coeffs_address1 =  (sc_lv<9>) (tmp_150_fu_381_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_coeffs_address1 =  (sc_lv<9>) (tmp_144_fu_306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_coeffs_address1 =  (sc_lv<9>) (tmp_138_fu_225_p1.read());
    } else {
        a_coeffs_address1 = "XXXXXXXXX";
    }
}

void poly_S3_tobytes::thread_a_coeffs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        a_coeffs_ce0 = ap_const_logic_1;
    } else {
        a_coeffs_ce0 = ap_const_logic_0;
    }
}

void poly_S3_tobytes::thread_a_coeffs_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        a_coeffs_ce1 = ap_const_logic_1;
    } else {
        a_coeffs_ce1 = ap_const_logic_0;
    }
}

void poly_S3_tobytes::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void poly_S3_tobytes::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void poly_S3_tobytes::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void poly_S3_tobytes::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void poly_S3_tobytes::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void poly_S3_tobytes::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void poly_S3_tobytes::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void poly_S3_tobytes::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void poly_S3_tobytes::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(tmp_164_fu_363_p3.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void poly_S3_tobytes::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void poly_S3_tobytes::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(tmp_164_fu_363_p3.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void poly_S3_tobytes::thread_c_1_fu_256_p2() {
    c_1_fu_256_p2 = (!tmp_136_fu_246_p2.read().is_01() || !tmp_157_fu_252_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_136_fu_246_p2.read()) + sc_biguint<8>(tmp_157_fu_252_p1.read()));
}

void poly_S3_tobytes::thread_c_2_fu_295_p2() {
    c_2_fu_295_p2 = (!tmp_159_fu_291_p1.read().is_01() || !tmp_139_fu_286_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_159_fu_291_p1.read()) + sc_biguint<8>(tmp_139_fu_286_p2.read()));
}

void poly_S3_tobytes::thread_c_3_fu_329_p2() {
    c_3_fu_329_p2 = (!tmp_161_fu_325_p1.read().is_01() || !tmp_142_fu_320_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_161_fu_325_p1.read()) + sc_biguint<8>(tmp_142_fu_320_p2.read()));
}

void poly_S3_tobytes::thread_c_4_fu_349_p2() {
    c_4_fu_349_p2 = (!tmp_163_reg_493.read().is_01() || !tmp_145_fu_344_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_163_reg_493.read()) + sc_biguint<8>(tmp_145_fu_344_p2.read()));
}

void poly_S3_tobytes::thread_c_5_fu_418_p2() {
    c_5_fu_418_p2 = (!tmp_147_fu_408_p2.read().is_01() || !tmp_166_fu_414_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_147_fu_408_p2.read()) + sc_biguint<8>(tmp_166_fu_414_p1.read()));
}

void poly_S3_tobytes::thread_c_fu_230_p1() {
    c_fu_230_p1 = a_coeffs_q0.read().range(8-1, 0);
}

void poly_S3_tobytes::thread_exitcond_fu_182_p2() {
    exitcond_fu_182_p2 = (!i_reg_138.read().is_01() || !ap_const_lv7_65.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_138.read() == ap_const_lv7_65);
}

void poly_S3_tobytes::thread_i_9_fu_188_p2() {
    i_9_fu_188_p2 = (!i_reg_138.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_reg_138.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void poly_S3_tobytes::thread_i_cast1_fu_178_p1() {
    i_cast1_fu_178_p1 = esl_zext<9,7>(i_reg_138.read());
}

void poly_S3_tobytes::thread_j_5_fu_386_p2() {
    j_5_fu_386_p2 = (!ap_const_lv3_7.is_01() || !j_reg_163.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_7) + sc_bigint<3>(j_reg_163.read()));
}

void poly_S3_tobytes::thread_j_cast_cast_fu_359_p1() {
    j_cast_cast_fu_359_p1 = esl_sext<4,3>(j_reg_163.read());
}

void poly_S3_tobytes::thread_msg_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        msg_address0 =  (sc_lv<10>) (sum2_cast_fu_397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        msg_address0 =  (sc_lv<10>) (sum_cast_fu_355_p1.read());
    } else {
        msg_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void poly_S3_tobytes::thread_msg_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        msg_ce0 = ap_const_logic_1;
    } else {
        msg_ce0 = ap_const_logic_0;
    }
}

void poly_S3_tobytes::thread_msg_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        msg_d0 = c5_reg_150.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        msg_d0 = c_4_fu_349_p2.read();
    } else {
        msg_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void poly_S3_tobytes::thread_msg_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(tmp_164_fu_363_p3.read(), ap_const_lv1_1)))) {
        msg_we0 = ap_const_logic_1;
    } else {
        msg_we0 = ap_const_logic_0;
    }
}

void poly_S3_tobytes::thread_p_shl6_fu_238_p3() {
    p_shl6_fu_238_p3 = esl_concat<6,2>(tmp_153_fu_234_p1.read(), ap_const_lv2_0);
}

void poly_S3_tobytes::thread_p_shl7_fu_194_p3() {
    p_shl7_fu_194_p3 = esl_concat<7,2>(i_reg_138.read(), ap_const_lv2_0);
}

void poly_S3_tobytes::thread_sum2_cast_fu_397_p1() {
    sum2_cast_fu_397_p1 = esl_zext<64,8>(sum2_fu_392_p2.read());
}

void poly_S3_tobytes::thread_sum2_fu_392_p2() {
    sum2_fu_392_p2 = (!tmp_149_reg_424.read().is_01() || !ap_const_lv8_65.is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_149_reg_424.read()) + sc_biguint<8>(ap_const_lv8_65));
}

void poly_S3_tobytes::thread_sum_cast_fu_355_p1() {
    sum_cast_fu_355_p1 = esl_zext<64,8>(sum_reg_466.read());
}

void poly_S3_tobytes::thread_sum_fu_276_p2() {
    sum_fu_276_p2 = (!tmp_236_cast_fu_272_p1.read().is_01() || !tmp_149_reg_424.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_236_cast_fu_272_p1.read()) + sc_biguint<8>(tmp_149_reg_424.read()));
}

void poly_S3_tobytes::thread_tmp_135_fu_214_p1() {
    tmp_135_fu_214_p1 = esl_zext<64,9>(tmp_s_fu_208_p2.read());
}

void poly_S3_tobytes::thread_tmp_136_fu_246_p2() {
    tmp_136_fu_246_p2 = (!p_shl6_fu_238_p3.read().is_01() || !c_fu_230_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl6_fu_238_p3.read()) - sc_biguint<8>(c_fu_230_p1.read()));
}

void poly_S3_tobytes::thread_tmp_137_fu_219_p2() {
    tmp_137_fu_219_p2 = (!ap_const_lv9_3.is_01() || !tmp_fu_202_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_3) + sc_biguint<9>(tmp_fu_202_p2.read()));
}

void poly_S3_tobytes::thread_tmp_138_fu_225_p1() {
    tmp_138_fu_225_p1 = esl_zext<64,9>(tmp_137_fu_219_p2.read());
}

void poly_S3_tobytes::thread_tmp_139_fu_286_p2() {
    tmp_139_fu_286_p2 = (!tmp_158_fu_281_p2.read().is_01() || !c_1_reg_455.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_158_fu_281_p2.read()) - sc_biguint<8>(c_1_reg_455.read()));
}

void poly_S3_tobytes::thread_tmp_140_fu_262_p2() {
    tmp_140_fu_262_p2 = (!ap_const_lv9_2.is_01() || !tmp_reg_438.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_2) + sc_biguint<9>(tmp_reg_438.read()));
}

void poly_S3_tobytes::thread_tmp_141_fu_267_p1() {
    tmp_141_fu_267_p1 = esl_zext<64,9>(tmp_140_fu_262_p2.read());
}

void poly_S3_tobytes::thread_tmp_142_fu_320_p2() {
    tmp_142_fu_320_p2 = (!tmp_160_fu_315_p2.read().is_01() || !c_2_reg_471.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_160_fu_315_p2.read()) - sc_biguint<8>(c_2_reg_471.read()));
}

void poly_S3_tobytes::thread_tmp_143_fu_301_p2() {
    tmp_143_fu_301_p2 = (!ap_const_lv9_1.is_01() || !tmp_reg_438.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_1) + sc_biguint<9>(tmp_reg_438.read()));
}

void poly_S3_tobytes::thread_tmp_144_fu_306_p1() {
    tmp_144_fu_306_p1 = esl_zext<64,9>(tmp_143_fu_301_p2.read());
}

void poly_S3_tobytes::thread_tmp_145_fu_344_p2() {
    tmp_145_fu_344_p2 = (!tmp_162_fu_339_p2.read().is_01() || !c_3_reg_487.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_162_fu_339_p2.read()) - sc_biguint<8>(c_3_reg_487.read()));
}

void poly_S3_tobytes::thread_tmp_146_fu_311_p1() {
    tmp_146_fu_311_p1 = esl_zext<64,9>(tmp_reg_438.read());
}

void poly_S3_tobytes::thread_tmp_147_fu_408_p2() {
    tmp_147_fu_408_p2 = (!tmp_165_fu_402_p2.read().is_01() || !c5_reg_150.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_165_fu_402_p2.read()) - sc_biguint<8>(c5_reg_150.read()));
}

void poly_S3_tobytes::thread_tmp_148_fu_371_p2() {
    tmp_148_fu_371_p2 = (!ap_const_lv4_9.is_01() || !j_cast_cast_fu_359_p1.read().is_01())? sc_lv<4>(): (sc_bigint<4>(ap_const_lv4_9) + sc_bigint<4>(j_cast_cast_fu_359_p1.read()));
}

void poly_S3_tobytes::thread_tmp_149_fu_174_p1() {
    tmp_149_fu_174_p1 = msg_offset.read().range(8-1, 0);
}

void poly_S3_tobytes::thread_tmp_150_fu_381_p1() {
    tmp_150_fu_381_p1 = esl_zext<64,9>(tmp_238_cast4_fu_377_p1.read());
}

void poly_S3_tobytes::thread_tmp_153_fu_234_p1() {
    tmp_153_fu_234_p1 = a_coeffs_q0.read().range(6-1, 0);
}

void poly_S3_tobytes::thread_tmp_157_fu_252_p1() {
    tmp_157_fu_252_p1 = a_coeffs_q1.read().range(8-1, 0);
}

void poly_S3_tobytes::thread_tmp_158_fu_281_p2() {
    tmp_158_fu_281_p2 = (!ap_const_lv8_2.is_01())? sc_lv<8>(): c_1_reg_455.read() << (unsigned short)ap_const_lv8_2.to_uint();
}

void poly_S3_tobytes::thread_tmp_159_fu_291_p1() {
    tmp_159_fu_291_p1 = a_coeffs_q0.read().range(8-1, 0);
}

void poly_S3_tobytes::thread_tmp_160_fu_315_p2() {
    tmp_160_fu_315_p2 = (!ap_const_lv8_2.is_01())? sc_lv<8>(): c_2_reg_471.read() << (unsigned short)ap_const_lv8_2.to_uint();
}

void poly_S3_tobytes::thread_tmp_161_fu_325_p1() {
    tmp_161_fu_325_p1 = a_coeffs_q1.read().range(8-1, 0);
}

void poly_S3_tobytes::thread_tmp_162_fu_339_p2() {
    tmp_162_fu_339_p2 = (!ap_const_lv8_2.is_01())? sc_lv<8>(): c_3_reg_487.read() << (unsigned short)ap_const_lv8_2.to_uint();
}

void poly_S3_tobytes::thread_tmp_163_fu_335_p1() {
    tmp_163_fu_335_p1 = a_coeffs_q0.read().range(8-1, 0);
}

void poly_S3_tobytes::thread_tmp_164_fu_363_p3() {
    tmp_164_fu_363_p3 = j_reg_163.read().range(2, 2);
}

void poly_S3_tobytes::thread_tmp_165_fu_402_p2() {
    tmp_165_fu_402_p2 = (!ap_const_lv8_2.is_01())? sc_lv<8>(): c5_reg_150.read() << (unsigned short)ap_const_lv8_2.to_uint();
}

void poly_S3_tobytes::thread_tmp_166_fu_414_p1() {
    tmp_166_fu_414_p1 = a_coeffs_q1.read().range(8-1, 0);
}

void poly_S3_tobytes::thread_tmp_236_cast_fu_272_p1() {
    tmp_236_cast_fu_272_p1 = esl_zext<8,7>(i_reg_138.read());
}

void poly_S3_tobytes::thread_tmp_238_cast4_fu_377_p1() {
    tmp_238_cast4_fu_377_p1 = esl_sext<9,4>(tmp_148_fu_371_p2.read());
}

void poly_S3_tobytes::thread_tmp_fu_202_p2() {
    tmp_fu_202_p2 = (!p_shl7_fu_194_p3.read().is_01() || !i_cast1_fu_178_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl7_fu_194_p3.read()) + sc_biguint<9>(i_cast1_fu_178_p1.read()));
}

void poly_S3_tobytes::thread_tmp_s_fu_208_p2() {
    tmp_s_fu_208_p2 = (!ap_const_lv9_4.is_01() || !tmp_fu_202_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_4) + sc_biguint<9>(tmp_fu_202_p2.read()));
}

void poly_S3_tobytes::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_182_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state7;
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
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(tmp_164_fu_363_p3.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

