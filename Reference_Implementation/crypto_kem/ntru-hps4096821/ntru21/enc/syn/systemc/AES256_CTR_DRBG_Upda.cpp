// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "AES256_CTR_DRBG_Upda.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic AES256_CTR_DRBG_Upda::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic AES256_CTR_DRBG_Upda::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state1 = "1";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state2 = "10";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state3 = "100";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state4 = "1000";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state5 = "10000";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state6 = "100000";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state7 = "1000000";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state8 = "10000000";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state9 = "100000000";
const sc_lv<10> AES256_CTR_DRBG_Upda::ap_ST_fsm_state10 = "1000000000";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_1 = "1";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_2 = "10";
const sc_lv<1> AES256_CTR_DRBG_Upda::ap_const_lv1_0 = "0";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_3 = "11";
const sc_lv<1> AES256_CTR_DRBG_Upda::ap_const_lv1_1 = "1";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_4 = "100";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_6 = "110";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_8 = "1000";
const sc_lv<2> AES256_CTR_DRBG_Upda::ap_const_lv2_0 = "00";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_5 = "101";
const sc_lv<5> AES256_CTR_DRBG_Upda::ap_const_lv5_F = "1111";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_7 = "111";
const sc_lv<6> AES256_CTR_DRBG_Upda::ap_const_lv6_0 = "000000";
const sc_lv<32> AES256_CTR_DRBG_Upda::ap_const_lv32_9 = "1001";
const sc_lv<5> AES256_CTR_DRBG_Upda::ap_const_lv5_0 = "00000";
const sc_lv<8> AES256_CTR_DRBG_Upda::ap_const_lv8_0 = "00000000";
const sc_lv<2> AES256_CTR_DRBG_Upda::ap_const_lv2_3 = "11";
const sc_lv<2> AES256_CTR_DRBG_Upda::ap_const_lv2_1 = "1";
const sc_lv<8> AES256_CTR_DRBG_Upda::ap_const_lv8_FF = "11111111";
const sc_lv<5> AES256_CTR_DRBG_Upda::ap_const_lv5_1F = "11111";
const sc_lv<8> AES256_CTR_DRBG_Upda::ap_const_lv8_1 = "1";
const sc_lv<4> AES256_CTR_DRBG_Upda::ap_const_lv4_0 = "0000";
const sc_lv<6> AES256_CTR_DRBG_Upda::ap_const_lv6_20 = "100000";
const sc_lv<6> AES256_CTR_DRBG_Upda::ap_const_lv6_1 = "1";
const sc_lv<5> AES256_CTR_DRBG_Upda::ap_const_lv5_10 = "10000";
const sc_lv<5> AES256_CTR_DRBG_Upda::ap_const_lv5_1 = "1";
const bool AES256_CTR_DRBG_Upda::ap_const_boolean_1 = true;

AES256_CTR_DRBG_Upda::AES256_CTR_DRBG_Upda(sc_module_name name) : sc_module(name), mVcdFile(0) {
    temp_U = new AES256_CTR_DRBG_Upda_temp("temp_U");
    temp_U->clk(ap_clk);
    temp_U->reset(ap_rst);
    temp_U->address0(temp_address0);
    temp_U->ce0(temp_ce0);
    temp_U->we0(temp_we0);
    temp_U->d0(grp_AES256_ECB_fu_171_buffer_r_d0);
    temp_U->q0(temp_q0);
    temp_U->address1(grp_AES256_ECB_fu_171_buffer_r_address1);
    temp_U->ce1(temp_ce1);
    temp_U->we1(temp_we1);
    temp_U->d1(grp_AES256_ECB_fu_171_buffer_r_d1);
    grp_AES256_ECB_fu_171 = new AES256_ECB("grp_AES256_ECB_fu_171");
    grp_AES256_ECB_fu_171->ap_clk(ap_clk);
    grp_AES256_ECB_fu_171->ap_rst(ap_rst);
    grp_AES256_ECB_fu_171->ap_start(grp_AES256_ECB_fu_171_ap_start);
    grp_AES256_ECB_fu_171->ap_done(grp_AES256_ECB_fu_171_ap_done);
    grp_AES256_ECB_fu_171->ap_idle(grp_AES256_ECB_fu_171_ap_idle);
    grp_AES256_ECB_fu_171->ap_ready(grp_AES256_ECB_fu_171_ap_ready);
    grp_AES256_ECB_fu_171->key_address0(grp_AES256_ECB_fu_171_key_address0);
    grp_AES256_ECB_fu_171->key_ce0(grp_AES256_ECB_fu_171_key_ce0);
    grp_AES256_ECB_fu_171->key_q0(DRBG_ctx_Key_q0);
    grp_AES256_ECB_fu_171->key_address1(grp_AES256_ECB_fu_171_key_address1);
    grp_AES256_ECB_fu_171->key_ce1(grp_AES256_ECB_fu_171_key_ce1);
    grp_AES256_ECB_fu_171->key_q1(DRBG_ctx_Key_q1);
    grp_AES256_ECB_fu_171->ctr_address0(grp_AES256_ECB_fu_171_ctr_address0);
    grp_AES256_ECB_fu_171->ctr_ce0(grp_AES256_ECB_fu_171_ctr_ce0);
    grp_AES256_ECB_fu_171->ctr_q0(V_q0);
    grp_AES256_ECB_fu_171->ctr_address1(grp_AES256_ECB_fu_171_ctr_address1);
    grp_AES256_ECB_fu_171->ctr_ce1(grp_AES256_ECB_fu_171_ctr_ce1);
    grp_AES256_ECB_fu_171->ctr_q1(V_q1);
    grp_AES256_ECB_fu_171->buffer_r_address0(grp_AES256_ECB_fu_171_buffer_r_address0);
    grp_AES256_ECB_fu_171->buffer_r_ce0(grp_AES256_ECB_fu_171_buffer_r_ce0);
    grp_AES256_ECB_fu_171->buffer_r_we0(grp_AES256_ECB_fu_171_buffer_r_we0);
    grp_AES256_ECB_fu_171->buffer_r_d0(grp_AES256_ECB_fu_171_buffer_r_d0);
    grp_AES256_ECB_fu_171->buffer_r_address1(grp_AES256_ECB_fu_171_buffer_r_address1);
    grp_AES256_ECB_fu_171->buffer_r_ce1(grp_AES256_ECB_fu_171_buffer_r_ce1);
    grp_AES256_ECB_fu_171->buffer_r_we1(grp_AES256_ECB_fu_171_buffer_r_we1);
    grp_AES256_ECB_fu_171->buffer_r_d1(grp_AES256_ECB_fu_171_buffer_r_d1);
    grp_AES256_ECB_fu_171->buffer_offset(tmp_336_reg_313);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_DRBG_ctx_Key_address0);
    sensitive << ( tmp_s_reg_326 );
    sensitive << ( grp_AES256_ECB_fu_171_key_address0 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_DRBG_ctx_Key_address1);
    sensitive << ( grp_AES256_ECB_fu_171_key_address1 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_DRBG_ctx_Key_ce0);
    sensitive << ( grp_AES256_ECB_fu_171_key_ce0 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_DRBG_ctx_Key_ce1);
    sensitive << ( grp_AES256_ECB_fu_171_key_ce1 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_DRBG_ctx_Key_d0);
    sensitive << ( temp_q0 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_DRBG_ctx_Key_we0);
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_V_address0);
    sensitive << ( V_addr_reg_300 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_331_fu_214_p2 );
    sensitive << ( grp_AES256_ECB_fu_171_ctr_address0 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( tmp_330_fu_209_p1 );
    sensitive << ( tmp_335_fu_284_p1 );

    SC_METHOD(thread_V_address1);
    sensitive << ( grp_AES256_ECB_fu_171_ctr_address1 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_V_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_331_fu_214_p2 );
    sensitive << ( grp_AES256_ECB_fu_171_ctr_ce0 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_V_ce1);
    sensitive << ( grp_AES256_ECB_fu_171_ctr_ce1 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_V_d0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_331_fu_214_p2 );
    sensitive << ( temp_q0 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( tmp_332_fu_226_p2 );

    SC_METHOD(thread_V_we0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_331_fu_214_p2 );
    sensitive << ( ap_CS_fsm_state10 );

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
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( exitcond_fu_259_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( exitcond_fu_259_p2 );

    SC_METHOD(thread_exitcond1_fu_242_p2);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( i_2_reg_148 );

    SC_METHOD(thread_exitcond4_fu_185_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_124 );

    SC_METHOD(thread_exitcond_fu_259_p2);
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( i_3_reg_159 );

    SC_METHOD(thread_grp_AES256_ECB_fu_171_ap_start);
    sensitive << ( grp_AES256_ECB_fu_171_ap_start_reg );

    SC_METHOD(thread_i_31_fu_191_p2);
    sensitive << ( i_reg_124 );

    SC_METHOD(thread_i_7_fu_248_p2);
    sensitive << ( i_2_reg_148 );

    SC_METHOD(thread_i_8_fu_265_p2);
    sensitive << ( i_3_reg_159 );

    SC_METHOD(thread_j_4_fu_220_p2);
    sensitive << ( j_reg_136 );

    SC_METHOD(thread_j_cast_fu_197_p1);
    sensitive << ( j_reg_136 );

    SC_METHOD(thread_temp_address0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_s_fu_254_p1 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( grp_AES256_ECB_fu_171_buffer_r_address0 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_334_fu_279_p1 );

    SC_METHOD(thread_temp_ce0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( grp_AES256_ECB_fu_171_buffer_r_ce0 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_temp_ce1);
    sensitive << ( grp_AES256_ECB_fu_171_buffer_r_ce1 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_temp_we0);
    sensitive << ( grp_AES256_ECB_fu_171_buffer_r_we0 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_temp_we1);
    sensitive << ( grp_AES256_ECB_fu_171_buffer_r_we1 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_tmp_330_fu_209_p1);
    sensitive << ( j_cast_fu_197_p1 );

    SC_METHOD(thread_tmp_331_fu_214_p2);
    sensitive << ( V_q0 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_tmp_332_fu_226_p2);
    sensitive << ( V_q0 );

    SC_METHOD(thread_tmp_333_fu_271_p3);
    sensitive << ( i_3_reg_159 );

    SC_METHOD(thread_tmp_334_fu_279_p1);
    sensitive << ( tmp_333_fu_271_p3 );

    SC_METHOD(thread_tmp_335_fu_284_p1);
    sensitive << ( i_3_reg_159 );

    SC_METHOD(thread_tmp_336_fu_233_p3);
    sensitive << ( i_reg_124 );

    SC_METHOD(thread_tmp_fu_201_p3);
    sensitive << ( j_reg_136 );

    SC_METHOD(thread_tmp_s_fu_254_p1);
    sensitive << ( i_2_reg_148 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_fu_201_p3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_331_fu_214_p2 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( exitcond1_fu_242_p2 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( exitcond_fu_259_p2 );
    sensitive << ( grp_AES256_ECB_fu_171_ap_done );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond4_fu_185_p2 );

    ap_CS_fsm = "0000000001";
    grp_AES256_ECB_fu_171_ap_start_reg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "AES256_CTR_DRBG_Upda_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, V_address0, "(port)V_address0");
    sc_trace(mVcdFile, V_ce0, "(port)V_ce0");
    sc_trace(mVcdFile, V_we0, "(port)V_we0");
    sc_trace(mVcdFile, V_d0, "(port)V_d0");
    sc_trace(mVcdFile, V_q0, "(port)V_q0");
    sc_trace(mVcdFile, V_address1, "(port)V_address1");
    sc_trace(mVcdFile, V_ce1, "(port)V_ce1");
    sc_trace(mVcdFile, V_q1, "(port)V_q1");
    sc_trace(mVcdFile, DRBG_ctx_Key_address0, "(port)DRBG_ctx_Key_address0");
    sc_trace(mVcdFile, DRBG_ctx_Key_ce0, "(port)DRBG_ctx_Key_ce0");
    sc_trace(mVcdFile, DRBG_ctx_Key_we0, "(port)DRBG_ctx_Key_we0");
    sc_trace(mVcdFile, DRBG_ctx_Key_d0, "(port)DRBG_ctx_Key_d0");
    sc_trace(mVcdFile, DRBG_ctx_Key_q0, "(port)DRBG_ctx_Key_q0");
    sc_trace(mVcdFile, DRBG_ctx_Key_address1, "(port)DRBG_ctx_Key_address1");
    sc_trace(mVcdFile, DRBG_ctx_Key_ce1, "(port)DRBG_ctx_Key_ce1");
    sc_trace(mVcdFile, DRBG_ctx_Key_q1, "(port)DRBG_ctx_Key_q1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_31_fu_191_p2, "i_31_fu_191_p2");
    sc_trace(mVcdFile, i_31_reg_292, "i_31_reg_292");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, V_addr_reg_300, "V_addr_reg_300");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_fu_201_p3, "tmp_fu_201_p3");
    sc_trace(mVcdFile, j_4_fu_220_p2, "j_4_fu_220_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_331_fu_214_p2, "tmp_331_fu_214_p2");
    sc_trace(mVcdFile, tmp_336_fu_233_p3, "tmp_336_fu_233_p3");
    sc_trace(mVcdFile, tmp_336_reg_313, "tmp_336_reg_313");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, i_7_fu_248_p2, "i_7_fu_248_p2");
    sc_trace(mVcdFile, i_7_reg_321, "i_7_reg_321");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, tmp_s_fu_254_p1, "tmp_s_fu_254_p1");
    sc_trace(mVcdFile, tmp_s_reg_326, "tmp_s_reg_326");
    sc_trace(mVcdFile, exitcond1_fu_242_p2, "exitcond1_fu_242_p2");
    sc_trace(mVcdFile, i_8_fu_265_p2, "i_8_fu_265_p2");
    sc_trace(mVcdFile, i_8_reg_339, "i_8_reg_339");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, exitcond_fu_259_p2, "exitcond_fu_259_p2");
    sc_trace(mVcdFile, temp_address0, "temp_address0");
    sc_trace(mVcdFile, temp_ce0, "temp_ce0");
    sc_trace(mVcdFile, temp_we0, "temp_we0");
    sc_trace(mVcdFile, temp_q0, "temp_q0");
    sc_trace(mVcdFile, temp_ce1, "temp_ce1");
    sc_trace(mVcdFile, temp_we1, "temp_we1");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ap_start, "grp_AES256_ECB_fu_171_ap_start");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ap_done, "grp_AES256_ECB_fu_171_ap_done");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ap_idle, "grp_AES256_ECB_fu_171_ap_idle");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ap_ready, "grp_AES256_ECB_fu_171_ap_ready");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_key_address0, "grp_AES256_ECB_fu_171_key_address0");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_key_ce0, "grp_AES256_ECB_fu_171_key_ce0");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_key_address1, "grp_AES256_ECB_fu_171_key_address1");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_key_ce1, "grp_AES256_ECB_fu_171_key_ce1");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ctr_address0, "grp_AES256_ECB_fu_171_ctr_address0");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ctr_ce0, "grp_AES256_ECB_fu_171_ctr_ce0");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ctr_address1, "grp_AES256_ECB_fu_171_ctr_address1");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ctr_ce1, "grp_AES256_ECB_fu_171_ctr_ce1");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_buffer_r_address0, "grp_AES256_ECB_fu_171_buffer_r_address0");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_buffer_r_ce0, "grp_AES256_ECB_fu_171_buffer_r_ce0");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_buffer_r_we0, "grp_AES256_ECB_fu_171_buffer_r_we0");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_buffer_r_d0, "grp_AES256_ECB_fu_171_buffer_r_d0");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_buffer_r_address1, "grp_AES256_ECB_fu_171_buffer_r_address1");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_buffer_r_ce1, "grp_AES256_ECB_fu_171_buffer_r_ce1");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_buffer_r_we1, "grp_AES256_ECB_fu_171_buffer_r_we1");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_buffer_r_d1, "grp_AES256_ECB_fu_171_buffer_r_d1");
    sc_trace(mVcdFile, i_reg_124, "i_reg_124");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, j_reg_136, "j_reg_136");
    sc_trace(mVcdFile, exitcond4_fu_185_p2, "exitcond4_fu_185_p2");
    sc_trace(mVcdFile, i_2_reg_148, "i_2_reg_148");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, i_3_reg_159, "i_3_reg_159");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, grp_AES256_ECB_fu_171_ap_start_reg, "grp_AES256_ECB_fu_171_ap_start_reg");
    sc_trace(mVcdFile, tmp_330_fu_209_p1, "tmp_330_fu_209_p1");
    sc_trace(mVcdFile, tmp_334_fu_279_p1, "tmp_334_fu_279_p1");
    sc_trace(mVcdFile, tmp_335_fu_284_p1, "tmp_335_fu_284_p1");
    sc_trace(mVcdFile, tmp_332_fu_226_p2, "tmp_332_fu_226_p2");
    sc_trace(mVcdFile, j_cast_fu_197_p1, "j_cast_fu_197_p1");
    sc_trace(mVcdFile, tmp_333_fu_271_p3, "tmp_333_fu_271_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

AES256_CTR_DRBG_Upda::~AES256_CTR_DRBG_Upda() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete temp_U;
    delete grp_AES256_ECB_fu_171;
}

void AES256_CTR_DRBG_Upda::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_AES256_ECB_fu_171_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            grp_AES256_ECB_fu_171_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_AES256_ECB_fu_171_ap_ready.read())) {
            grp_AES256_ECB_fu_171_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_185_p2.read()))) {
        i_2_reg_148 = ap_const_lv6_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        i_2_reg_148 = i_7_reg_321.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_242_p2.read()))) {
        i_3_reg_159 = ap_const_lv5_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        i_3_reg_159 = i_8_reg_339.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(grp_AES256_ECB_fu_171_ap_done.read(), ap_const_logic_1))) {
        i_reg_124 = i_31_reg_292.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_124 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_fu_185_p2.read()))) {
        j_reg_136 = ap_const_lv5_F;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(tmp_331_fu_214_p2.read(), ap_const_lv1_1))) {
        j_reg_136 = j_4_fu_220_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(tmp_fu_201_p3.read(), ap_const_lv1_0))) {
        V_addr_reg_300 =  (sc_lv<4>) (tmp_330_fu_209_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_31_reg_292 = i_31_fu_191_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        i_7_reg_321 = i_7_fu_248_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        i_8_reg_339 = i_8_fu_265_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        tmp_336_reg_313 = tmp_336_fu_233_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_242_p2.read()))) {
        tmp_s_reg_326 = tmp_s_fu_254_p1.read();
    }
}

void AES256_CTR_DRBG_Upda::thread_DRBG_ctx_Key_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        DRBG_ctx_Key_address0 =  (sc_lv<5>) (tmp_s_reg_326.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        DRBG_ctx_Key_address0 = grp_AES256_ECB_fu_171_key_address0.read();
    } else {
        DRBG_ctx_Key_address0 = "XXXXX";
    }
}

void AES256_CTR_DRBG_Upda::thread_DRBG_ctx_Key_address1() {
    DRBG_ctx_Key_address1 = grp_AES256_ECB_fu_171_key_address1.read();
}

void AES256_CTR_DRBG_Upda::thread_DRBG_ctx_Key_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        DRBG_ctx_Key_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        DRBG_ctx_Key_ce0 = grp_AES256_ECB_fu_171_key_ce0.read();
    } else {
        DRBG_ctx_Key_ce0 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_DRBG_ctx_Key_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        DRBG_ctx_Key_ce1 = grp_AES256_ECB_fu_171_key_ce1.read();
    } else {
        DRBG_ctx_Key_ce1 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_DRBG_ctx_Key_d0() {
    DRBG_ctx_Key_d0 = temp_q0.read();
}

void AES256_CTR_DRBG_Upda::thread_DRBG_ctx_Key_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        DRBG_ctx_Key_we0 = ap_const_logic_1;
    } else {
        DRBG_ctx_Key_we0 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        V_address0 =  (sc_lv<4>) (tmp_335_fu_284_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(tmp_331_fu_214_p2.read(), ap_const_lv1_1)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, tmp_331_fu_214_p2.read())))) {
        V_address0 = V_addr_reg_300.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        V_address0 =  (sc_lv<4>) (tmp_330_fu_209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        V_address0 = grp_AES256_ECB_fu_171_ctr_address0.read();
    } else {
        V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void AES256_CTR_DRBG_Upda::thread_V_address1() {
    V_address1 = grp_AES256_ECB_fu_171_ctr_address1.read();
}

void AES256_CTR_DRBG_Upda::thread_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(tmp_331_fu_214_p2.read(), ap_const_lv1_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_331_fu_214_p2.read())))) {
        V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        V_ce0 = grp_AES256_ECB_fu_171_ctr_ce0.read();
    } else {
        V_ce0 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        V_ce1 = grp_AES256_ECB_fu_171_ctr_ce1.read();
    } else {
        V_ce1 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        V_d0 = temp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_331_fu_214_p2.read()))) {
        V_d0 = tmp_332_fu_226_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(tmp_331_fu_214_p2.read(), ap_const_lv1_1))) {
        V_d0 = ap_const_lv8_0;
    } else {
        V_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void AES256_CTR_DRBG_Upda::thread_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(tmp_331_fu_214_p2.read(), ap_const_lv1_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_331_fu_214_p2.read())))) {
        V_we0 = ap_const_logic_1;
    } else {
        V_we0 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void AES256_CTR_DRBG_Upda::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void AES256_CTR_DRBG_Upda::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_259_p2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_259_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_exitcond1_fu_242_p2() {
    exitcond1_fu_242_p2 = (!i_2_reg_148.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i_2_reg_148.read() == ap_const_lv6_20);
}

void AES256_CTR_DRBG_Upda::thread_exitcond4_fu_185_p2() {
    exitcond4_fu_185_p2 = (!i_reg_124.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_124.read() == ap_const_lv2_3);
}

void AES256_CTR_DRBG_Upda::thread_exitcond_fu_259_p2() {
    exitcond_fu_259_p2 = (!i_3_reg_159.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i_3_reg_159.read() == ap_const_lv5_10);
}

void AES256_CTR_DRBG_Upda::thread_grp_AES256_ECB_fu_171_ap_start() {
    grp_AES256_ECB_fu_171_ap_start = grp_AES256_ECB_fu_171_ap_start_reg.read();
}

void AES256_CTR_DRBG_Upda::thread_i_31_fu_191_p2() {
    i_31_fu_191_p2 = (!i_reg_124.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_reg_124.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void AES256_CTR_DRBG_Upda::thread_i_7_fu_248_p2() {
    i_7_fu_248_p2 = (!i_2_reg_148.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i_2_reg_148.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void AES256_CTR_DRBG_Upda::thread_i_8_fu_265_p2() {
    i_8_fu_265_p2 = (!i_3_reg_159.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_3_reg_159.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void AES256_CTR_DRBG_Upda::thread_j_4_fu_220_p2() {
    j_4_fu_220_p2 = (!j_reg_136.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<5>(): (sc_bigint<5>(j_reg_136.read()) + sc_bigint<5>(ap_const_lv5_1F));
}

void AES256_CTR_DRBG_Upda::thread_j_cast_fu_197_p1() {
    j_cast_fu_197_p1 = esl_sext<32,5>(j_reg_136.read());
}

void AES256_CTR_DRBG_Upda::thread_temp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        temp_address0 =  (sc_lv<6>) (tmp_334_fu_279_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        temp_address0 =  (sc_lv<6>) (tmp_s_fu_254_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        temp_address0 = grp_AES256_ECB_fu_171_buffer_r_address0.read();
    } else {
        temp_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void AES256_CTR_DRBG_Upda::thread_temp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        temp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        temp_ce0 = grp_AES256_ECB_fu_171_buffer_r_ce0.read();
    } else {
        temp_ce0 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_temp_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        temp_ce1 = grp_AES256_ECB_fu_171_buffer_r_ce1.read();
    } else {
        temp_ce1 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_temp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        temp_we0 = grp_AES256_ECB_fu_171_buffer_r_we0.read();
    } else {
        temp_we0 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_temp_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        temp_we1 = grp_AES256_ECB_fu_171_buffer_r_we1.read();
    } else {
        temp_we1 = ap_const_logic_0;
    }
}

void AES256_CTR_DRBG_Upda::thread_tmp_330_fu_209_p1() {
    tmp_330_fu_209_p1 = esl_zext<64,32>(j_cast_fu_197_p1.read());
}

void AES256_CTR_DRBG_Upda::thread_tmp_331_fu_214_p2() {
    tmp_331_fu_214_p2 = (!V_q0.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(V_q0.read() == ap_const_lv8_FF);
}

void AES256_CTR_DRBG_Upda::thread_tmp_332_fu_226_p2() {
    tmp_332_fu_226_p2 = (!V_q0.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(V_q0.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void AES256_CTR_DRBG_Upda::thread_tmp_333_fu_271_p3() {
    tmp_333_fu_271_p3 = esl_concat<1,5>(ap_const_lv1_1, i_3_reg_159.read());
}

void AES256_CTR_DRBG_Upda::thread_tmp_334_fu_279_p1() {
    tmp_334_fu_279_p1 = esl_zext<64,6>(tmp_333_fu_271_p3.read());
}

void AES256_CTR_DRBG_Upda::thread_tmp_335_fu_284_p1() {
    tmp_335_fu_284_p1 = esl_zext<64,5>(i_3_reg_159.read());
}

void AES256_CTR_DRBG_Upda::thread_tmp_336_fu_233_p3() {
    tmp_336_fu_233_p3 = esl_concat<2,4>(i_reg_124.read(), ap_const_lv4_0);
}

void AES256_CTR_DRBG_Upda::thread_tmp_fu_201_p3() {
    tmp_fu_201_p3 = j_reg_136.read().range(4, 4);
}

void AES256_CTR_DRBG_Upda::thread_tmp_s_fu_254_p1() {
    tmp_s_fu_254_p1 = esl_zext<64,6>(i_2_reg_148.read());
}

void AES256_CTR_DRBG_Upda::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_185_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(tmp_fu_201_p3.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_331_fu_214_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(grp_AES256_ECB_fu_171_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_242_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_259_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<10>) ("XXXXXXXXXX");
            break;
    }
}

}

