// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _owcpa_dec_HH_
#define _owcpa_dec_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "poly_lift.h"
#include "poly_Sq_frombytes_1.h"
#include "poly_Sq_frombytes.h"
#include "poly_S3_mul.h"
#include "poly_S3_frombytes.h"
#include "poly_Rq_to_S3.h"
#include "poly_Rq_mul.h"
#include "poly_S3_tobytes.h"
#include "poly_lift_b_coeffs.h"
#include "owcpa_dec_x3_coeffs.h"

namespace ap_rtl {

struct owcpa_dec : public sc_module {
    // Port declarations 23
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<9> > rm_address0;
    sc_out< sc_logic > rm_ce0;
    sc_out< sc_logic > rm_we0;
    sc_out< sc_lv<8> > rm_d0;
    sc_out< sc_lv<11> > ciphertext_address0;
    sc_out< sc_logic > ciphertext_ce0;
    sc_in< sc_lv<8> > ciphertext_q0;
    sc_out< sc_lv<11> > ciphertext_address1;
    sc_out< sc_logic > ciphertext_ce1;
    sc_in< sc_lv<8> > ciphertext_q1;
    sc_out< sc_lv<11> > secretkey_address0;
    sc_out< sc_logic > secretkey_ce0;
    sc_in< sc_lv<8> > secretkey_q0;
    sc_out< sc_lv<11> > secretkey_address1;
    sc_out< sc_logic > secretkey_ce1;
    sc_in< sc_lv<8> > secretkey_q1;
    sc_out< sc_lv<1> > ap_return;


    // Module declarations
    owcpa_dec(sc_module_name name);
    SC_HAS_PROCESS(owcpa_dec);

    ~owcpa_dec();

    sc_trace_file* mVcdFile;

    poly_lift_b_coeffs* x1_coeffs_U;
    poly_lift_b_coeffs* x2_coeffs_U;
    owcpa_dec_x3_coeffs* x3_coeffs_U;
    poly_lift_b_coeffs* x4_coeffs_U;
    poly_lift* grp_poly_lift_fu_291;
    poly_Sq_frombytes_1* grp_poly_Sq_frombytes_1_fu_297;
    poly_Sq_frombytes* grp_poly_Sq_frombytes_fu_304;
    poly_S3_mul* grp_poly_S3_mul_fu_312;
    poly_S3_frombytes* grp_poly_S3_frombytes_fu_319;
    poly_Rq_to_S3* grp_poly_Rq_to_S3_fu_329;
    poly_Rq_mul* grp_poly_Rq_mul_fu_335;
    poly_S3_tobytes* grp_poly_S3_tobytes_fu_342;
    sc_signal< sc_lv<32> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > b_coeffs_addr_reg_717;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > i_17_fu_358_p2;
    sc_signal< sc_lv<10> > i_17_reg_726;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > exitcond_i_fu_352_p2;
    sc_signal< sc_lv<13> > phitmp_fu_395_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<10> > i_18_fu_407_p2;
    sc_signal< sc_lv<10> > i_18_reg_744;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<10> > liftm_coeffs_addr_reg_749;
    sc_signal< sc_lv<1> > exitcond_i7_fu_401_p2;
    sc_signal< sc_lv<10> > i_19_fu_469_p2;
    sc_signal< sc_lv<10> > i_19_reg_757;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<10> > b_coeffs_addr_11_reg_762;
    sc_signal< sc_lv<1> > exitcond_fu_463_p2;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_ap_ready;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_ap_done;
    sc_signal< sc_lv<10> > i_20_fu_502_p2;
    sc_signal< sc_lv<10> > i_20_reg_781;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<10> > r_coeffs_addr_22_reg_786;
    sc_signal< sc_lv<1> > exitcond_i1_fu_496_p2;
    sc_signal< sc_lv<10> > i_21_fu_534_p2;
    sc_signal< sc_lv<10> > i_21_reg_794;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<1> > exitcond_i2_fu_528_p2;
    sc_signal< sc_lv<64> > t_2_fu_625_p3;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<1> > tmp_257_reg_809;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_lv<10> > i_22_fu_681_p2;
    sc_signal< sc_lv<10> > i_22_reg_816;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<10> > r_coeffs_addr_24_reg_821;
    sc_signal< sc_lv<1> > exitcond_i3_fu_675_p2;
    sc_signal< sc_lv<10> > x1_coeffs_address0;
    sc_signal< sc_logic > x1_coeffs_ce0;
    sc_signal< sc_logic > x1_coeffs_we0;
    sc_signal< sc_lv<16> > x1_coeffs_d0;
    sc_signal< sc_lv<16> > x1_coeffs_q0;
    sc_signal< sc_lv<10> > x1_coeffs_address1;
    sc_signal< sc_logic > x1_coeffs_ce1;
    sc_signal< sc_logic > x1_coeffs_we1;
    sc_signal< sc_lv<16> > x1_coeffs_d1;
    sc_signal< sc_lv<16> > x1_coeffs_q1;
    sc_signal< sc_lv<10> > x2_coeffs_address0;
    sc_signal< sc_logic > x2_coeffs_ce0;
    sc_signal< sc_logic > x2_coeffs_we0;
    sc_signal< sc_lv<16> > x2_coeffs_d0;
    sc_signal< sc_lv<16> > x2_coeffs_q0;
    sc_signal< sc_lv<10> > x2_coeffs_address1;
    sc_signal< sc_logic > x2_coeffs_ce1;
    sc_signal< sc_logic > x2_coeffs_we1;
    sc_signal< sc_lv<16> > x2_coeffs_d1;
    sc_signal< sc_lv<16> > x2_coeffs_q1;
    sc_signal< sc_lv<10> > x3_coeffs_address0;
    sc_signal< sc_logic > x3_coeffs_ce0;
    sc_signal< sc_logic > x3_coeffs_we0;
    sc_signal< sc_lv<16> > x3_coeffs_d0;
    sc_signal< sc_lv<16> > x3_coeffs_q0;
    sc_signal< sc_lv<10> > x3_coeffs_address1;
    sc_signal< sc_logic > x3_coeffs_ce1;
    sc_signal< sc_logic > x3_coeffs_we1;
    sc_signal< sc_lv<16> > x3_coeffs_d1;
    sc_signal< sc_lv<10> > x4_coeffs_address0;
    sc_signal< sc_logic > x4_coeffs_ce0;
    sc_signal< sc_logic > x4_coeffs_we0;
    sc_signal< sc_lv<16> > x4_coeffs_d0;
    sc_signal< sc_lv<16> > x4_coeffs_q0;
    sc_signal< sc_lv<10> > x4_coeffs_address1;
    sc_signal< sc_logic > x4_coeffs_ce1;
    sc_signal< sc_logic > x4_coeffs_we1;
    sc_signal< sc_lv<16> > x4_coeffs_q1;
    sc_signal< sc_logic > grp_poly_lift_fu_291_ap_start;
    sc_signal< sc_logic > grp_poly_lift_fu_291_ap_done;
    sc_signal< sc_logic > grp_poly_lift_fu_291_ap_idle;
    sc_signal< sc_logic > grp_poly_lift_fu_291_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_lift_fu_291_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_lift_fu_291_r_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_lift_fu_291_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_lift_fu_291_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_poly_lift_fu_291_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_lift_fu_291_a_coeffs_ce0;
    sc_signal< sc_lv<10> > grp_poly_lift_fu_291_a_coeffs_address1;
    sc_signal< sc_logic > grp_poly_lift_fu_291_a_coeffs_ce1;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_ap_start;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_ap_done;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_ap_idle;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_Sq_frombytes_1_fu_297_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_r_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_Sq_frombytes_1_fu_297_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_poly_Sq_frombytes_1_fu_297_r_coeffs_address1;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_r_coeffs_ce1;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_r_coeffs_we1;
    sc_signal< sc_lv<16> > grp_poly_Sq_frombytes_1_fu_297_r_coeffs_d1;
    sc_signal< sc_lv<11> > grp_poly_Sq_frombytes_1_fu_297_a_address0;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_a_ce0;
    sc_signal< sc_lv<11> > grp_poly_Sq_frombytes_1_fu_297_a_address1;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_a_ce1;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_ap_start;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_ap_done;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_ap_idle;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_Sq_frombytes_fu_304_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_r_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_Sq_frombytes_fu_304_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_poly_Sq_frombytes_fu_304_r_coeffs_address1;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_r_coeffs_ce1;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_r_coeffs_we1;
    sc_signal< sc_lv<16> > grp_poly_Sq_frombytes_fu_304_r_coeffs_d1;
    sc_signal< sc_lv<11> > grp_poly_Sq_frombytes_fu_304_a_address0;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_a_ce0;
    sc_signal< sc_lv<11> > grp_poly_Sq_frombytes_fu_304_a_address1;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_a_ce1;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_ap_start;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_ap_done;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_ap_idle;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_S3_mul_fu_312_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_r_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_S3_mul_fu_312_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_poly_S3_mul_fu_312_r_coeffs_address1;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_r_coeffs_ce1;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_r_coeffs_we1;
    sc_signal< sc_lv<16> > grp_poly_S3_mul_fu_312_r_coeffs_d1;
    sc_signal< sc_lv<10> > grp_poly_S3_mul_fu_312_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_a_coeffs_ce0;
    sc_signal< sc_lv<10> > grp_poly_S3_mul_fu_312_b_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_b_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_ap_start;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_ap_done;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_ap_idle;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_S3_frombytes_fu_319_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_r_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_S3_frombytes_fu_319_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_poly_S3_frombytes_fu_319_r_coeffs_address1;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_r_coeffs_ce1;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_r_coeffs_we1;
    sc_signal< sc_lv<16> > grp_poly_S3_frombytes_fu_319_r_coeffs_d1;
    sc_signal< sc_lv<11> > grp_poly_S3_frombytes_fu_319_msg_address0;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_msg_ce0;
    sc_signal< sc_lv<10> > grp_poly_S3_frombytes_fu_319_msg_offset;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_ap_start;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_ap_done;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_ap_idle;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_Rq_to_S3_fu_329_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_r_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_Rq_to_S3_fu_329_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_poly_Rq_to_S3_fu_329_r_coeffs_address1;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_r_coeffs_ce1;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_r_coeffs_we1;
    sc_signal< sc_lv<16> > grp_poly_Rq_to_S3_fu_329_r_coeffs_d1;
    sc_signal< sc_lv<10> > grp_poly_Rq_to_S3_fu_329_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_a_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_ap_start;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_ap_idle;
    sc_signal< sc_lv<10> > grp_poly_Rq_mul_fu_335_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_r_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_Rq_mul_fu_335_r_coeffs_d0;
    sc_signal< sc_lv<16> > grp_poly_Rq_mul_fu_335_r_coeffs_q0;
    sc_signal< sc_lv<10> > grp_poly_Rq_mul_fu_335_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_a_coeffs_ce0;
    sc_signal< sc_lv<10> > grp_poly_Rq_mul_fu_335_b_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_b_coeffs_ce0;
    sc_signal< sc_lv<16> > grp_poly_Rq_mul_fu_335_b_coeffs_q0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_ap_start;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_ap_done;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_ap_idle;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_ap_ready;
    sc_signal< sc_lv<9> > grp_poly_S3_tobytes_fu_342_msg_address0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_msg_ce0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_msg_we0;
    sc_signal< sc_lv<8> > grp_poly_S3_tobytes_fu_342_msg_d0;
    sc_signal< sc_lv<9> > grp_poly_S3_tobytes_fu_342_msg_offset;
    sc_signal< sc_lv<10> > grp_poly_S3_tobytes_fu_342_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_a_coeffs_ce0;
    sc_signal< sc_lv<10> > grp_poly_S3_tobytes_fu_342_a_coeffs_address1;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_a_coeffs_ce1;
    sc_signal< sc_lv<13> > tmp_i_reg_202;
    sc_signal< sc_lv<10> > i_i_reg_213;
    sc_signal< sc_lv<10> > i_i6_reg_224;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<10> > i_reg_235;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<10> > i_i1_reg_246;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<10> > i_i2_reg_257;
    sc_signal< sc_lv<64> > t_i_reg_268;
    sc_signal< sc_lv<10> > i_i3_reg_280;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > grp_poly_lift_fu_291_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_1_fu_297_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > grp_poly_Sq_frombytes_fu_304_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_poly_S3_mul_fu_312_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > grp_poly_S3_frombytes_fu_319_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > grp_poly_Rq_to_S3_fu_329_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_335_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_342_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<64> > tmp_233_i_fu_364_p1;
    sc_signal< sc_lv<64> > tmp_i8_fu_413_p1;
    sc_signal< sc_lv<64> > tmp_fu_475_p1;
    sc_signal< sc_lv<64> > tmp_i1_fu_508_p1;
    sc_signal< sc_lv<64> > tmp_255_i_fu_540_p1;
    sc_signal< sc_lv<64> > tmp_i3_44_fu_687_p1;
    sc_signal< sc_lv<16> > tmp_232_i_cast_fu_375_p1;
    sc_signal< sc_lv<16> > tmp_234_i_fu_388_p2;
    sc_signal< sc_lv<16> > tmp_243_cast_fu_491_p1;
    sc_signal< sc_lv<16> > tmp_39_i_fu_454_p3;
    sc_signal< sc_lv<16> > tmp_40_i_cast_fu_523_p1;
    sc_signal< sc_lv<16> > tmp_8_i_cast_fu_712_p1;
    sc_signal< sc_lv<13> > tmp_i_cast_fu_369_p2;
    sc_signal< sc_lv<13> > tmp_252_fu_384_p1;
    sc_signal< sc_lv<13> > tmp_251_fu_380_p1;
    sc_signal< sc_lv<13> > tmp_236_fu_418_p4;
    sc_signal< sc_lv<13> > tmp_253_fu_434_p1;
    sc_signal< sc_lv<13> > tmp_37_i_cast_fu_428_p2;
    sc_signal< sc_lv<3> > tmp_239_fu_444_p4;
    sc_signal< sc_lv<13> > tmp_238_fu_438_p2;
    sc_signal< sc_lv<16> > tmp_s_fu_481_p2;
    sc_signal< sc_lv<13> > tmp_254_fu_487_p1;
    sc_signal< sc_lv<16> > tmp_i2_fu_513_p2;
    sc_signal< sc_lv<13> > tmp_255_fu_519_p1;
    sc_signal< sc_lv<13> > tmp_258_fu_545_p1;
    sc_signal< sc_lv<3> > tmp_259_fu_549_p1;
    sc_signal< sc_lv<3> > tmp_242_fu_559_p2;
    sc_signal< sc_lv<3> > tmp_259_i_fu_565_p2;
    sc_signal< sc_lv<3> > tmp_243_fu_571_p2;
    sc_signal< sc_lv<13> > tmp_257_i_cast_fu_553_p2;
    sc_signal< sc_lv<10> > tmp_244_fu_585_p4;
    sc_signal< sc_lv<1> > tmp_260_fu_577_p3;
    sc_signal< sc_lv<13> > tmp_261_fu_605_p1;
    sc_signal< sc_lv<13> > tmp1_fu_595_p4;
    sc_signal< sc_lv<51> > tmp_246_fu_615_p4;
    sc_signal< sc_lv<13> > tmp_245_fu_609_p2;
    sc_signal< sc_lv<16> > tmp_256_fu_633_p1;
    sc_signal< sc_lv<48> > tmp_81_i_fu_643_p4;
    sc_signal< sc_lv<16> > tmp_80_i_fu_637_p2;
    sc_signal< sc_lv<64> > t_fu_653_p3;
    sc_signal< sc_lv<64> > tmp_i3_fu_661_p2;
    sc_signal< sc_lv<2> > tmp_262_fu_702_p1;
    sc_signal< sc_lv<2> > tmp_247_fu_692_p4;
    sc_signal< sc_lv<2> > tmp_7_i_cast_fu_706_p2;
    sc_signal< sc_lv<32> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<32> ap_ST_fsm_state1;
    static const sc_lv<32> ap_ST_fsm_state2;
    static const sc_lv<32> ap_ST_fsm_state3;
    static const sc_lv<32> ap_ST_fsm_state4;
    static const sc_lv<32> ap_ST_fsm_state5;
    static const sc_lv<32> ap_ST_fsm_state6;
    static const sc_lv<32> ap_ST_fsm_state7;
    static const sc_lv<32> ap_ST_fsm_state8;
    static const sc_lv<32> ap_ST_fsm_state9;
    static const sc_lv<32> ap_ST_fsm_state10;
    static const sc_lv<32> ap_ST_fsm_state11;
    static const sc_lv<32> ap_ST_fsm_state12;
    static const sc_lv<32> ap_ST_fsm_state13;
    static const sc_lv<32> ap_ST_fsm_state14;
    static const sc_lv<32> ap_ST_fsm_state15;
    static const sc_lv<32> ap_ST_fsm_state16;
    static const sc_lv<32> ap_ST_fsm_state17;
    static const sc_lv<32> ap_ST_fsm_state18;
    static const sc_lv<32> ap_ST_fsm_state19;
    static const sc_lv<32> ap_ST_fsm_state20;
    static const sc_lv<32> ap_ST_fsm_state21;
    static const sc_lv<32> ap_ST_fsm_state22;
    static const sc_lv<32> ap_ST_fsm_state23;
    static const sc_lv<32> ap_ST_fsm_state24;
    static const sc_lv<32> ap_ST_fsm_state25;
    static const sc_lv<32> ap_ST_fsm_state26;
    static const sc_lv<32> ap_ST_fsm_state27;
    static const sc_lv<32> ap_ST_fsm_state28;
    static const sc_lv<32> ap_ST_fsm_state29;
    static const sc_lv<32> ap_ST_fsm_state30;
    static const sc_lv<32> ap_ST_fsm_state31;
    static const sc_lv<32> ap_ST_fsm_state32;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<10> ap_const_lv10_8C;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<9> ap_const_lv9_8C;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<64> ap_const_lv64_2BC;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<10> ap_const_lv10_2BC;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_2BD;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_b_coeffs_addr_reg_717();
    void thread_ciphertext_address0();
    void thread_ciphertext_address1();
    void thread_ciphertext_ce0();
    void thread_ciphertext_ce1();
    void thread_exitcond_fu_463_p2();
    void thread_exitcond_i1_fu_496_p2();
    void thread_exitcond_i2_fu_528_p2();
    void thread_exitcond_i3_fu_675_p2();
    void thread_exitcond_i7_fu_401_p2();
    void thread_exitcond_i_fu_352_p2();
    void thread_grp_poly_Rq_mul_fu_335_ap_start();
    void thread_grp_poly_Rq_mul_fu_335_b_coeffs_q0();
    void thread_grp_poly_Rq_mul_fu_335_r_coeffs_q0();
    void thread_grp_poly_Rq_to_S3_fu_329_ap_start();
    void thread_grp_poly_S3_frombytes_fu_319_ap_start();
    void thread_grp_poly_S3_frombytes_fu_319_msg_offset();
    void thread_grp_poly_S3_mul_fu_312_ap_start();
    void thread_grp_poly_S3_tobytes_fu_342_ap_start();
    void thread_grp_poly_S3_tobytes_fu_342_msg_offset();
    void thread_grp_poly_Sq_frombytes_1_fu_297_ap_start();
    void thread_grp_poly_Sq_frombytes_fu_304_ap_start();
    void thread_grp_poly_lift_fu_291_ap_start();
    void thread_i_17_fu_358_p2();
    void thread_i_18_fu_407_p2();
    void thread_i_19_fu_469_p2();
    void thread_i_20_fu_502_p2();
    void thread_i_21_fu_534_p2();
    void thread_i_22_fu_681_p2();
    void thread_phitmp_fu_395_p2();
    void thread_rm_address0();
    void thread_rm_ce0();
    void thread_rm_d0();
    void thread_rm_we0();
    void thread_secretkey_address0();
    void thread_secretkey_address1();
    void thread_secretkey_ce0();
    void thread_secretkey_ce1();
    void thread_t_2_fu_625_p3();
    void thread_t_fu_653_p3();
    void thread_tmp1_fu_595_p4();
    void thread_tmp_232_i_cast_fu_375_p1();
    void thread_tmp_233_i_fu_364_p1();
    void thread_tmp_234_i_fu_388_p2();
    void thread_tmp_236_fu_418_p4();
    void thread_tmp_238_fu_438_p2();
    void thread_tmp_239_fu_444_p4();
    void thread_tmp_242_fu_559_p2();
    void thread_tmp_243_cast_fu_491_p1();
    void thread_tmp_243_fu_571_p2();
    void thread_tmp_244_fu_585_p4();
    void thread_tmp_245_fu_609_p2();
    void thread_tmp_246_fu_615_p4();
    void thread_tmp_247_fu_692_p4();
    void thread_tmp_251_fu_380_p1();
    void thread_tmp_252_fu_384_p1();
    void thread_tmp_253_fu_434_p1();
    void thread_tmp_254_fu_487_p1();
    void thread_tmp_255_fu_519_p1();
    void thread_tmp_255_i_fu_540_p1();
    void thread_tmp_256_fu_633_p1();
    void thread_tmp_257_i_cast_fu_553_p2();
    void thread_tmp_258_fu_545_p1();
    void thread_tmp_259_fu_549_p1();
    void thread_tmp_259_i_fu_565_p2();
    void thread_tmp_260_fu_577_p3();
    void thread_tmp_261_fu_605_p1();
    void thread_tmp_262_fu_702_p1();
    void thread_tmp_37_i_cast_fu_428_p2();
    void thread_tmp_39_i_fu_454_p3();
    void thread_tmp_40_i_cast_fu_523_p1();
    void thread_tmp_7_i_cast_fu_706_p2();
    void thread_tmp_80_i_fu_637_p2();
    void thread_tmp_81_i_fu_643_p4();
    void thread_tmp_8_i_cast_fu_712_p1();
    void thread_tmp_fu_475_p1();
    void thread_tmp_i1_fu_508_p1();
    void thread_tmp_i2_fu_513_p2();
    void thread_tmp_i3_44_fu_687_p1();
    void thread_tmp_i3_fu_661_p2();
    void thread_tmp_i8_fu_413_p1();
    void thread_tmp_i_cast_fu_369_p2();
    void thread_tmp_s_fu_481_p2();
    void thread_x1_coeffs_address0();
    void thread_x1_coeffs_address1();
    void thread_x1_coeffs_ce0();
    void thread_x1_coeffs_ce1();
    void thread_x1_coeffs_d0();
    void thread_x1_coeffs_d1();
    void thread_x1_coeffs_we0();
    void thread_x1_coeffs_we1();
    void thread_x2_coeffs_address0();
    void thread_x2_coeffs_address1();
    void thread_x2_coeffs_ce0();
    void thread_x2_coeffs_ce1();
    void thread_x2_coeffs_d0();
    void thread_x2_coeffs_d1();
    void thread_x2_coeffs_we0();
    void thread_x2_coeffs_we1();
    void thread_x3_coeffs_address0();
    void thread_x3_coeffs_address1();
    void thread_x3_coeffs_ce0();
    void thread_x3_coeffs_ce1();
    void thread_x3_coeffs_d0();
    void thread_x3_coeffs_d1();
    void thread_x3_coeffs_we0();
    void thread_x3_coeffs_we1();
    void thread_x4_coeffs_address0();
    void thread_x4_coeffs_address1();
    void thread_x4_coeffs_ce0();
    void thread_x4_coeffs_ce1();
    void thread_x4_coeffs_d0();
    void thread_x4_coeffs_we0();
    void thread_x4_coeffs_we1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
