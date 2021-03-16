// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "sha3_256_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic sha3_256_1::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic sha3_256_1::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<9> sha3_256_1::ap_ST_fsm_state1 = "1";
const sc_lv<9> sha3_256_1::ap_ST_fsm_state2 = "10";
const sc_lv<9> sha3_256_1::ap_ST_fsm_state3 = "100";
const sc_lv<9> sha3_256_1::ap_ST_fsm_state4 = "1000";
const sc_lv<9> sha3_256_1::ap_ST_fsm_state5 = "10000";
const sc_lv<9> sha3_256_1::ap_ST_fsm_state6 = "100000";
const sc_lv<9> sha3_256_1::ap_ST_fsm_state7 = "1000000";
const sc_lv<9> sha3_256_1::ap_ST_fsm_state8 = "10000000";
const sc_lv<9> sha3_256_1::ap_ST_fsm_state9 = "100000000";
const sc_lv<32> sha3_256_1::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> sha3_256_1::ap_const_lv32_4 = "100";
const sc_lv<1> sha3_256_1::ap_const_lv1_0 = "0";
const sc_lv<32> sha3_256_1::ap_const_lv32_5 = "101";
const sc_lv<32> sha3_256_1::ap_const_lv32_6 = "110";
const sc_lv<32> sha3_256_1::ap_const_lv32_7 = "111";
const sc_lv<5> sha3_256_1::ap_const_lv5_0 = "00000";
const sc_lv<32> sha3_256_1::ap_const_lv32_3 = "11";
const sc_lv<1> sha3_256_1::ap_const_lv1_1 = "1";
const sc_lv<4> sha3_256_1::ap_const_lv4_0 = "0000";
const sc_lv<32> sha3_256_1::ap_const_lv32_8 = "1000";
const sc_lv<6> sha3_256_1::ap_const_lv6_0 = "000000";
const sc_lv<32> sha3_256_1::ap_const_lv32_1 = "1";
const sc_lv<32> sha3_256_1::ap_const_lv32_2 = "10";
const sc_lv<5> sha3_256_1::ap_const_lv5_11 = "10001";
const sc_lv<5> sha3_256_1::ap_const_lv5_1 = "1";
const sc_lv<3> sha3_256_1::ap_const_lv3_0 = "000";
const sc_lv<4> sha3_256_1::ap_const_lv4_8 = "1000";
const sc_lv<4> sha3_256_1::ap_const_lv4_1 = "1";
const sc_lv<32> sha3_256_1::ap_const_lv32_3F = "111111";
const sc_lv<6> sha3_256_1::ap_const_lv6_20 = "100000";
const sc_lv<6> sha3_256_1::ap_const_lv6_1 = "1";
const bool sha3_256_1::ap_const_boolean_1 = true;

sha3_256_1::sha3_256_1(sc_module_name name) : sc_module(name), mVcdFile(0) {
    s_U = new sha3_256_1_s("s_U");
    s_U->clk(ap_clk);
    s_U->reset(ap_rst);
    s_U->address0(s_address0);
    s_U->ce0(s_ce0);
    s_U->we0(s_we0);
    s_U->d0(s_d0);
    s_U->q0(s_q0);
    s_U->address1(s_address1);
    s_U->ce1(s_ce1);
    s_U->we1(s_we1);
    s_U->d1(s_d1);
    s_U->q1(s_q1);
    h_assign_U = new sha3_256_1_h_assign("h_assign_U");
    h_assign_U->clk(ap_clk);
    h_assign_U->reset(ap_rst);
    h_assign_U->address0(h_assign_address0);
    h_assign_U->ce0(h_assign_ce0);
    h_assign_U->we0(h_assign_we0);
    h_assign_U->d0(h_assign_d0);
    h_assign_U->q0(h_assign_q0);
    grp_keccak_absorb_fu_146 = new keccak_absorb("grp_keccak_absorb_fu_146");
    grp_keccak_absorb_fu_146->ap_clk(ap_clk);
    grp_keccak_absorb_fu_146->ap_rst(ap_rst);
    grp_keccak_absorb_fu_146->ap_start(grp_keccak_absorb_fu_146_ap_start);
    grp_keccak_absorb_fu_146->ap_done(grp_keccak_absorb_fu_146_ap_done);
    grp_keccak_absorb_fu_146->ap_idle(grp_keccak_absorb_fu_146_ap_idle);
    grp_keccak_absorb_fu_146->ap_ready(grp_keccak_absorb_fu_146_ap_ready);
    grp_keccak_absorb_fu_146->s_address0(grp_keccak_absorb_fu_146_s_address0);
    grp_keccak_absorb_fu_146->s_ce0(grp_keccak_absorb_fu_146_s_ce0);
    grp_keccak_absorb_fu_146->s_we0(grp_keccak_absorb_fu_146_s_we0);
    grp_keccak_absorb_fu_146->s_d0(grp_keccak_absorb_fu_146_s_d0);
    grp_keccak_absorb_fu_146->s_q0(s_q0);
    grp_keccak_absorb_fu_146->s_address1(grp_keccak_absorb_fu_146_s_address1);
    grp_keccak_absorb_fu_146->s_ce1(grp_keccak_absorb_fu_146_s_ce1);
    grp_keccak_absorb_fu_146->s_we1(grp_keccak_absorb_fu_146_s_we1);
    grp_keccak_absorb_fu_146->s_d1(grp_keccak_absorb_fu_146_s_d1);
    grp_keccak_absorb_fu_146->s_q1(s_q1);
    grp_keccak_absorb_fu_146->m_address0(grp_keccak_absorb_fu_146_m_address0);
    grp_keccak_absorb_fu_146->m_ce0(grp_keccak_absorb_fu_146_m_ce0);
    grp_keccak_absorb_fu_146->m_q0(input_r_q0);
    grp_KeccakF1600_StatePer_fu_156 = new KeccakF1600_StatePer("grp_KeccakF1600_StatePer_fu_156");
    grp_KeccakF1600_StatePer_fu_156->ap_clk(ap_clk);
    grp_KeccakF1600_StatePer_fu_156->ap_rst(ap_rst);
    grp_KeccakF1600_StatePer_fu_156->ap_start(grp_KeccakF1600_StatePer_fu_156_ap_start);
    grp_KeccakF1600_StatePer_fu_156->ap_done(grp_KeccakF1600_StatePer_fu_156_ap_done);
    grp_KeccakF1600_StatePer_fu_156->ap_idle(grp_KeccakF1600_StatePer_fu_156_ap_idle);
    grp_KeccakF1600_StatePer_fu_156->ap_ready(grp_KeccakF1600_StatePer_fu_156_ap_ready);
    grp_KeccakF1600_StatePer_fu_156->state_address0(grp_KeccakF1600_StatePer_fu_156_state_address0);
    grp_KeccakF1600_StatePer_fu_156->state_ce0(grp_KeccakF1600_StatePer_fu_156_state_ce0);
    grp_KeccakF1600_StatePer_fu_156->state_we0(grp_KeccakF1600_StatePer_fu_156_state_we0);
    grp_KeccakF1600_StatePer_fu_156->state_d0(grp_KeccakF1600_StatePer_fu_156_state_d0);
    grp_KeccakF1600_StatePer_fu_156->state_q0(s_q0);
    grp_KeccakF1600_StatePer_fu_156->state_address1(grp_KeccakF1600_StatePer_fu_156_state_address1);
    grp_KeccakF1600_StatePer_fu_156->state_ce1(grp_KeccakF1600_StatePer_fu_156_state_ce1);
    grp_KeccakF1600_StatePer_fu_156->state_we1(grp_KeccakF1600_StatePer_fu_156_state_we1);
    grp_KeccakF1600_StatePer_fu_156->state_d1(grp_KeccakF1600_StatePer_fu_156_state_d1);
    grp_KeccakF1600_StatePer_fu_156->state_q1(s_q1);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

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
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( tmp_fu_238_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( tmp_fu_238_p2 );

    SC_METHOD(thread_exitcond_i_fu_163_p2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( i_i_reg_103 );

    SC_METHOD(thread_grp_KeccakF1600_StatePer_fu_156_ap_start);
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_ap_start_reg );

    SC_METHOD(thread_grp_keccak_absorb_fu_146_ap_start);
    sensitive << ( grp_keccak_absorb_fu_146_ap_start_reg );

    SC_METHOD(thread_h_assign_address0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( i_cast1_fu_233_p1 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( sum_i_i_cast_fu_214_p1 );

    SC_METHOD(thread_h_assign_ce0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_h_assign_d0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( p_0_i_i_reg_115 );

    SC_METHOD(thread_h_assign_we0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_i_i_fu_188_p2 );

    SC_METHOD(thread_i_1_fu_244_p2);
    sensitive << ( i_reg_135 );

    SC_METHOD(thread_i_22_i_fu_169_p2);
    sensitive << ( i_i_reg_103 );

    SC_METHOD(thread_i_2_fu_194_p2);
    sensitive << ( i_i_i_reg_124 );

    SC_METHOD(thread_i_cast1_fu_233_p1);
    sensitive << ( i_reg_135 );

    SC_METHOD(thread_input_r_address0);
    sensitive << ( grp_keccak_absorb_fu_146_m_address0 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_input_r_ce0);
    sensitive << ( grp_keccak_absorb_fu_146_m_ce0 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_output_r_address0);
    sensitive << ( i_cast1_reg_286 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_output_r_ce0);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_output_r_d0);
    sensitive << ( h_assign_q0 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_output_r_we0);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_s_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( grp_keccak_absorb_fu_146_s_address0 );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_state_address0 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_279_i_fu_175_p1 );

    SC_METHOD(thread_s_address1);
    sensitive << ( grp_keccak_absorb_fu_146_s_address1 );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_state_address1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_s_ce0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( grp_keccak_absorb_fu_146_s_ce0 );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_state_ce0 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_s_ce1);
    sensitive << ( grp_keccak_absorb_fu_146_s_ce1 );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_state_ce1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_s_d0);
    sensitive << ( grp_keccak_absorb_fu_146_s_d0 );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_state_d0 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_s_d1);
    sensitive << ( grp_keccak_absorb_fu_146_s_d1 );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_state_d1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_s_we0);
    sensitive << ( grp_keccak_absorb_fu_146_s_we0 );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_state_we0 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_s_we1);
    sensitive << ( grp_keccak_absorb_fu_146_s_we1 );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_state_we1 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_sum_i_i_cast_fu_214_p1);
    sensitive << ( sum_i_i_fu_209_p2 );

    SC_METHOD(thread_sum_i_i_fu_209_p2);
    sensitive << ( tmp_i_reg_263 );
    sensitive << ( tmp_2_i_i_cast_fu_205_p1 );

    SC_METHOD(thread_tmp_1_fu_229_p1);
    sensitive << ( u_assign_1_fu_219_p4 );

    SC_METHOD(thread_tmp_279_i_fu_175_p1);
    sensitive << ( i_i_reg_103 );

    SC_METHOD(thread_tmp_2_i_i_cast_fu_205_p1);
    sensitive << ( i_i_i_reg_124 );

    SC_METHOD(thread_tmp_fu_238_p2);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( i_reg_135 );

    SC_METHOD(thread_tmp_i_fu_180_p3);
    sensitive << ( i_i_reg_103 );

    SC_METHOD(thread_tmp_i_i_fu_188_p2);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( i_i_i_reg_124 );

    SC_METHOD(thread_u_assign_1_fu_219_p4);
    sensitive << ( p_0_i_i_reg_115 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_i_fu_163_p2 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_i_i_fu_188_p2 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( tmp_fu_238_p2 );
    sensitive << ( grp_keccak_absorb_fu_146_ap_done );
    sensitive << ( grp_KeccakF1600_StatePer_fu_156_ap_done );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );

    ap_CS_fsm = "000000001";
    grp_keccak_absorb_fu_146_ap_start_reg = SC_LOGIC_0;
    grp_KeccakF1600_StatePer_fu_156_ap_start_reg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "sha3_256_1_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, output_r_address0, "(port)output_r_address0");
    sc_trace(mVcdFile, output_r_ce0, "(port)output_r_ce0");
    sc_trace(mVcdFile, output_r_we0, "(port)output_r_we0");
    sc_trace(mVcdFile, output_r_d0, "(port)output_r_d0");
    sc_trace(mVcdFile, input_r_address0, "(port)input_r_address0");
    sc_trace(mVcdFile, input_r_ce0, "(port)input_r_ce0");
    sc_trace(mVcdFile, input_r_q0, "(port)input_r_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_22_i_fu_169_p2, "i_22_i_fu_169_p2");
    sc_trace(mVcdFile, i_22_i_reg_253, "i_22_i_reg_253");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, exitcond_i_fu_163_p2, "exitcond_i_fu_163_p2");
    sc_trace(mVcdFile, tmp_i_fu_180_p3, "tmp_i_fu_180_p3");
    sc_trace(mVcdFile, tmp_i_reg_263, "tmp_i_reg_263");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, s_q0, "s_q0");
    sc_trace(mVcdFile, i_2_fu_194_p2, "i_2_fu_194_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, tmp_1_fu_229_p1, "tmp_1_fu_229_p1");
    sc_trace(mVcdFile, tmp_i_i_fu_188_p2, "tmp_i_i_fu_188_p2");
    sc_trace(mVcdFile, i_cast1_fu_233_p1, "i_cast1_fu_233_p1");
    sc_trace(mVcdFile, i_cast1_reg_286, "i_cast1_reg_286");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, i_1_fu_244_p2, "i_1_fu_244_p2");
    sc_trace(mVcdFile, i_1_reg_294, "i_1_reg_294");
    sc_trace(mVcdFile, tmp_fu_238_p2, "tmp_fu_238_p2");
    sc_trace(mVcdFile, s_address0, "s_address0");
    sc_trace(mVcdFile, s_ce0, "s_ce0");
    sc_trace(mVcdFile, s_we0, "s_we0");
    sc_trace(mVcdFile, s_d0, "s_d0");
    sc_trace(mVcdFile, s_address1, "s_address1");
    sc_trace(mVcdFile, s_ce1, "s_ce1");
    sc_trace(mVcdFile, s_we1, "s_we1");
    sc_trace(mVcdFile, s_d1, "s_d1");
    sc_trace(mVcdFile, s_q1, "s_q1");
    sc_trace(mVcdFile, h_assign_address0, "h_assign_address0");
    sc_trace(mVcdFile, h_assign_ce0, "h_assign_ce0");
    sc_trace(mVcdFile, h_assign_we0, "h_assign_we0");
    sc_trace(mVcdFile, h_assign_d0, "h_assign_d0");
    sc_trace(mVcdFile, h_assign_q0, "h_assign_q0");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_ap_start, "grp_keccak_absorb_fu_146_ap_start");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_ap_done, "grp_keccak_absorb_fu_146_ap_done");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_ap_idle, "grp_keccak_absorb_fu_146_ap_idle");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_ap_ready, "grp_keccak_absorb_fu_146_ap_ready");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_s_address0, "grp_keccak_absorb_fu_146_s_address0");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_s_ce0, "grp_keccak_absorb_fu_146_s_ce0");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_s_we0, "grp_keccak_absorb_fu_146_s_we0");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_s_d0, "grp_keccak_absorb_fu_146_s_d0");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_s_address1, "grp_keccak_absorb_fu_146_s_address1");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_s_ce1, "grp_keccak_absorb_fu_146_s_ce1");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_s_we1, "grp_keccak_absorb_fu_146_s_we1");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_s_d1, "grp_keccak_absorb_fu_146_s_d1");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_m_address0, "grp_keccak_absorb_fu_146_m_address0");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_m_ce0, "grp_keccak_absorb_fu_146_m_ce0");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_ap_start, "grp_KeccakF1600_StatePer_fu_156_ap_start");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_ap_done, "grp_KeccakF1600_StatePer_fu_156_ap_done");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_ap_idle, "grp_KeccakF1600_StatePer_fu_156_ap_idle");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_ap_ready, "grp_KeccakF1600_StatePer_fu_156_ap_ready");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_state_address0, "grp_KeccakF1600_StatePer_fu_156_state_address0");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_state_ce0, "grp_KeccakF1600_StatePer_fu_156_state_ce0");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_state_we0, "grp_KeccakF1600_StatePer_fu_156_state_we0");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_state_d0, "grp_KeccakF1600_StatePer_fu_156_state_d0");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_state_address1, "grp_KeccakF1600_StatePer_fu_156_state_address1");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_state_ce1, "grp_KeccakF1600_StatePer_fu_156_state_ce1");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_state_we1, "grp_KeccakF1600_StatePer_fu_156_state_we1");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_state_d1, "grp_KeccakF1600_StatePer_fu_156_state_d1");
    sc_trace(mVcdFile, i_i_reg_103, "i_i_reg_103");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, p_0_i_i_reg_115, "p_0_i_i_reg_115");
    sc_trace(mVcdFile, i_i_i_reg_124, "i_i_i_reg_124");
    sc_trace(mVcdFile, i_reg_135, "i_reg_135");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, grp_keccak_absorb_fu_146_ap_start_reg, "grp_keccak_absorb_fu_146_ap_start_reg");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, grp_KeccakF1600_StatePer_fu_156_ap_start_reg, "grp_KeccakF1600_StatePer_fu_156_ap_start_reg");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_279_i_fu_175_p1, "tmp_279_i_fu_175_p1");
    sc_trace(mVcdFile, sum_i_i_cast_fu_214_p1, "sum_i_i_cast_fu_214_p1");
    sc_trace(mVcdFile, tmp_2_i_i_cast_fu_205_p1, "tmp_2_i_i_cast_fu_205_p1");
    sc_trace(mVcdFile, sum_i_i_fu_209_p2, "sum_i_i_fu_209_p2");
    sc_trace(mVcdFile, u_assign_1_fu_219_p4, "u_assign_1_fu_219_p4");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

sha3_256_1::~sha3_256_1() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete s_U;
    delete h_assign_U;
    delete grp_keccak_absorb_fu_146;
    delete grp_KeccakF1600_StatePer_fu_156;
}

void sha3_256_1::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_KeccakF1600_StatePer_fu_156_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            grp_KeccakF1600_StatePer_fu_156_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_KeccakF1600_StatePer_fu_156_ap_ready.read())) {
            grp_KeccakF1600_StatePer_fu_156_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_keccak_absorb_fu_146_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            grp_keccak_absorb_fu_146_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_keccak_absorb_fu_146_ap_ready.read())) {
            grp_keccak_absorb_fu_146_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_188_p2.read()))) {
        i_i_i_reg_124 = i_2_fu_194_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_i_i_reg_124 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(tmp_i_i_fu_188_p2.read(), ap_const_lv1_1))) {
        i_i_reg_103 = i_22_i_reg_253.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_fu_156_ap_done.read(), ap_const_logic_1))) {
        i_i_reg_103 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(exitcond_i_fu_163_p2.read(), ap_const_lv1_1))) {
        i_reg_135 = ap_const_lv6_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        i_reg_135 = i_1_reg_294.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_188_p2.read()))) {
        p_0_i_i_reg_115 = tmp_1_fu_229_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        p_0_i_i_reg_115 = s_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        i_1_reg_294 = i_1_fu_244_p2.read();
        i_cast1_reg_286 = i_cast1_fu_233_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_22_i_reg_253 = i_22_i_fu_169_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        tmp_i_reg_263 = tmp_i_fu_180_p3.read();
    }
}

void sha3_256_1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void sha3_256_1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void sha3_256_1::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void sha3_256_1::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void sha3_256_1::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void sha3_256_1::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void sha3_256_1::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void sha3_256_1::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void sha3_256_1::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void sha3_256_1::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
          esl_seteq<1,1,1>(tmp_fu_238_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void sha3_256_1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void sha3_256_1::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(tmp_fu_238_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void sha3_256_1::thread_exitcond_i_fu_163_p2() {
    exitcond_i_fu_163_p2 = (!i_i_reg_103.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(i_i_reg_103.read() == ap_const_lv5_11);
}

void sha3_256_1::thread_grp_KeccakF1600_StatePer_fu_156_ap_start() {
    grp_KeccakF1600_StatePer_fu_156_ap_start = grp_KeccakF1600_StatePer_fu_156_ap_start_reg.read();
}

void sha3_256_1::thread_grp_keccak_absorb_fu_146_ap_start() {
    grp_keccak_absorb_fu_146_ap_start = grp_keccak_absorb_fu_146_ap_start_reg.read();
}

void sha3_256_1::thread_h_assign_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        h_assign_address0 =  (sc_lv<8>) (i_cast1_fu_233_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        h_assign_address0 =  (sc_lv<8>) (sum_i_i_cast_fu_214_p1.read());
    } else {
        h_assign_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void sha3_256_1::thread_h_assign_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        h_assign_ce0 = ap_const_logic_1;
    } else {
        h_assign_ce0 = ap_const_logic_0;
    }
}

void sha3_256_1::thread_h_assign_d0() {
    h_assign_d0 = p_0_i_i_reg_115.read().range(8-1, 0);
}

void sha3_256_1::thread_h_assign_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_188_p2.read()))) {
        h_assign_we0 = ap_const_logic_1;
    } else {
        h_assign_we0 = ap_const_logic_0;
    }
}

void sha3_256_1::thread_i_1_fu_244_p2() {
    i_1_fu_244_p2 = (!i_reg_135.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i_reg_135.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void sha3_256_1::thread_i_22_i_fu_169_p2() {
    i_22_i_fu_169_p2 = (!i_i_reg_103.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_i_reg_103.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void sha3_256_1::thread_i_2_fu_194_p2() {
    i_2_fu_194_p2 = (!i_i_i_reg_124.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_i_i_reg_124.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void sha3_256_1::thread_i_cast1_fu_233_p1() {
    i_cast1_fu_233_p1 = esl_zext<64,6>(i_reg_135.read());
}

void sha3_256_1::thread_input_r_address0() {
    input_r_address0 = grp_keccak_absorb_fu_146_m_address0.read();
}

void sha3_256_1::thread_input_r_ce0() {
    input_r_ce0 = grp_keccak_absorb_fu_146_m_ce0.read();
}

void sha3_256_1::thread_output_r_address0() {
    output_r_address0 =  (sc_lv<5>) (i_cast1_reg_286.read());
}

void sha3_256_1::thread_output_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        output_r_ce0 = ap_const_logic_1;
    } else {
        output_r_ce0 = ap_const_logic_0;
    }
}

void sha3_256_1::thread_output_r_d0() {
    output_r_d0 = h_assign_q0.read();
}

void sha3_256_1::thread_output_r_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        output_r_we0 = ap_const_logic_1;
    } else {
        output_r_we0 = ap_const_logic_0;
    }
}

void sha3_256_1::thread_s_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        s_address0 =  (sc_lv<5>) (tmp_279_i_fu_175_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s_address0 = grp_KeccakF1600_StatePer_fu_156_state_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        s_address0 = grp_keccak_absorb_fu_146_s_address0.read();
    } else {
        s_address0 = "XXXXX";
    }
}

void sha3_256_1::thread_s_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s_address1 = grp_KeccakF1600_StatePer_fu_156_state_address1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        s_address1 = grp_keccak_absorb_fu_146_s_address1.read();
    } else {
        s_address1 = "XXXXX";
    }
}

void sha3_256_1::thread_s_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        s_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s_ce0 = grp_KeccakF1600_StatePer_fu_156_state_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        s_ce0 = grp_keccak_absorb_fu_146_s_ce0.read();
    } else {
        s_ce0 = ap_const_logic_0;
    }
}

void sha3_256_1::thread_s_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s_ce1 = grp_KeccakF1600_StatePer_fu_156_state_ce1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        s_ce1 = grp_keccak_absorb_fu_146_s_ce1.read();
    } else {
        s_ce1 = ap_const_logic_0;
    }
}

void sha3_256_1::thread_s_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s_d0 = grp_KeccakF1600_StatePer_fu_156_state_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        s_d0 = grp_keccak_absorb_fu_146_s_d0.read();
    } else {
        s_d0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha3_256_1::thread_s_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s_d1 = grp_KeccakF1600_StatePer_fu_156_state_d1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        s_d1 = grp_keccak_absorb_fu_146_s_d1.read();
    } else {
        s_d1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void sha3_256_1::thread_s_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s_we0 = grp_KeccakF1600_StatePer_fu_156_state_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        s_we0 = grp_keccak_absorb_fu_146_s_we0.read();
    } else {
        s_we0 = ap_const_logic_0;
    }
}

void sha3_256_1::thread_s_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        s_we1 = grp_KeccakF1600_StatePer_fu_156_state_we1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        s_we1 = grp_keccak_absorb_fu_146_s_we1.read();
    } else {
        s_we1 = ap_const_logic_0;
    }
}

void sha3_256_1::thread_sum_i_i_cast_fu_214_p1() {
    sum_i_i_cast_fu_214_p1 = esl_zext<64,8>(sum_i_i_fu_209_p2.read());
}

void sha3_256_1::thread_sum_i_i_fu_209_p2() {
    sum_i_i_fu_209_p2 = (!tmp_i_reg_263.read().is_01() || !tmp_2_i_i_cast_fu_205_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_i_reg_263.read()) + sc_biguint<8>(tmp_2_i_i_cast_fu_205_p1.read()));
}

void sha3_256_1::thread_tmp_1_fu_229_p1() {
    tmp_1_fu_229_p1 = esl_zext<64,56>(u_assign_1_fu_219_p4.read());
}

void sha3_256_1::thread_tmp_279_i_fu_175_p1() {
    tmp_279_i_fu_175_p1 = esl_zext<64,5>(i_i_reg_103.read());
}

void sha3_256_1::thread_tmp_2_i_i_cast_fu_205_p1() {
    tmp_2_i_i_cast_fu_205_p1 = esl_zext<8,4>(i_i_i_reg_124.read());
}

void sha3_256_1::thread_tmp_fu_238_p2() {
    tmp_fu_238_p2 = (!i_reg_135.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_135.read() == ap_const_lv6_20);
}

void sha3_256_1::thread_tmp_i_fu_180_p3() {
    tmp_i_fu_180_p3 = esl_concat<5,3>(i_i_reg_103.read(), ap_const_lv3_0);
}

void sha3_256_1::thread_tmp_i_i_fu_188_p2() {
    tmp_i_i_fu_188_p2 = (!i_i_i_reg_124.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_i_i_reg_124.read() == ap_const_lv4_8);
}

void sha3_256_1::thread_u_assign_1_fu_219_p4() {
    u_assign_1_fu_219_p4 = p_0_i_i_reg_115.read().range(63, 8);
}

void sha3_256_1::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(grp_keccak_absorb_fu_146_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(grp_KeccakF1600_StatePer_fu_156_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(exitcond_i_fu_163_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(tmp_i_i_fu_188_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(tmp_fu_238_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<9>) ("XXXXXXXXX");
            break;
    }
}

}

