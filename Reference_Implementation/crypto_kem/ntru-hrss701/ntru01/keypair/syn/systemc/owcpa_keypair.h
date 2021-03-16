// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _owcpa_keypair_HH_
#define _owcpa_keypair_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "poly_S3_inv.h"
#include "poly_R2_inv.h"
#include "poly_Sq_tobytes_1.h"
#include "poly_Sq_tobytes.h"
#include "sample_iid_plus.h"
#include "poly_Rq_mul.h"
#include "poly_S3_tobytes.h"
#include "poly_S3_inv_b_coeffs.h"
#include "owcpa_keypair_ai2_coeffs.h"
#include "owcpa_keypair_x1_coeffs.h"
#include "owcpa_keypair_x2_coeffs.h"

namespace ap_rtl {

struct owcpa_keypair : public sc_module {
    // Port declarations 25
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<11> > pk_address0;
    sc_out< sc_logic > pk_ce0;
    sc_out< sc_logic > pk_we0;
    sc_out< sc_lv<8> > pk_d0;
    sc_out< sc_lv<11> > pk_address1;
    sc_out< sc_logic > pk_ce1;
    sc_out< sc_logic > pk_we1;
    sc_out< sc_lv<8> > pk_d1;
    sc_out< sc_lv<11> > sk_address0;
    sc_out< sc_logic > sk_ce0;
    sc_out< sc_logic > sk_we0;
    sc_out< sc_lv<8> > sk_d0;
    sc_out< sc_lv<11> > sk_address1;
    sc_out< sc_logic > sk_ce1;
    sc_out< sc_logic > sk_we1;
    sc_out< sc_lv<8> > sk_d1;
    sc_out< sc_lv<11> > seed_address0;
    sc_out< sc_logic > seed_ce0;
    sc_in< sc_lv<8> > seed_q0;


    // Module declarations
    owcpa_keypair(sc_module_name name);
    SC_HAS_PROCESS(owcpa_keypair);

    ~owcpa_keypair();

    sc_trace_file* mVcdFile;

    poly_S3_inv_b_coeffs* b_coeffs_U;
    poly_S3_inv_b_coeffs* c_coeffs_U;
    poly_S3_inv_b_coeffs* s_coeffs_U;
    owcpa_keypair_ai2_coeffs* ai2_coeffs_U;
    owcpa_keypair_x1_coeffs* x1_coeffs_U;
    owcpa_keypair_x2_coeffs* x2_coeffs_U;
    owcpa_keypair_x1_coeffs* x3_coeffs_U;
    poly_S3_inv_b_coeffs* x4_coeffs_U;
    poly_S3_inv_b_coeffs* x5_coeffs_U;
    poly_S3_inv* grp_poly_S3_inv_fu_328;
    poly_R2_inv* grp_poly_R2_inv_fu_334;
    poly_Sq_tobytes_1* grp_poly_Sq_tobytes_1_fu_340;
    poly_Sq_tobytes* grp_poly_Sq_tobytes_fu_347;
    sample_iid_plus* grp_sample_iid_plus_fu_354;
    poly_Rq_mul* grp_poly_Rq_mul_fu_365;
    poly_S3_tobytes* grp_poly_S3_tobytes_fu_372;
    sc_signal< sc_lv<59> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > i_33_fu_395_p2;
    sc_signal< sc_lv<10> > i_33_reg_686;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<10> > f_coeffs_addr_reg_691;
    sc_signal< sc_lv<1> > exitcond_i_fu_389_p2;
    sc_signal< sc_lv<10> > i_34_fu_457_p2;
    sc_signal< sc_lv<10> > i_34_reg_699;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<10> > h_coeffs_addr_1_reg_704;
    sc_signal< sc_lv<1> > exitcond_i6_fu_451_p2;
    sc_signal< sc_lv<10> > h_coeffs_addr_reg_709;
    sc_signal< sc_lv<16> > x3_coeffs_q0;
    sc_signal< sc_lv<16> > last_coeff_reg_714;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<10> > i_35_fu_519_p2;
    sc_signal< sc_lv<10> > i_35_reg_722;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > tmp_i2_fu_513_p2;
    sc_signal< sc_lv<64> > tmp_229_i_fu_530_p1;
    sc_signal< sc_lv<64> > tmp_229_i_reg_732;
    sc_signal< sc_lv<10> > i_36_fu_570_p2;
    sc_signal< sc_lv<10> > i_36_reg_750;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<10> > G_coeffs_addr_2_reg_755;
    sc_signal< sc_lv<1> > exitcond_fu_564_p2;
    sc_signal< sc_lv<10> > i_37_fu_608_p2;
    sc_signal< sc_lv<10> > i_37_reg_763;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<64> > tmp_i4_76_fu_614_p1;
    sc_signal< sc_lv<64> > tmp_i4_76_reg_768;
    sc_signal< sc_lv<1> > exitcond1_i_fu_602_p2;
    sc_signal< sc_lv<10> > i_38_fu_640_p2;
    sc_signal< sc_lv<10> > i_38_reg_781;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<64> > tmp_252_i_fu_646_p1;
    sc_signal< sc_lv<64> > tmp_252_i_reg_786;
    sc_signal< sc_lv<1> > exitcond_i7_fu_634_p2;
    sc_signal< sc_lv<10> > c_coeffs_addr_reg_796;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<10> > i_39_fu_657_p2;
    sc_signal< sc_lv<10> > i_39_reg_804;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_lv<10> > h_coeffs_addr_6_reg_809;
    sc_signal< sc_lv<1> > exitcond_i2_fu_651_p2;
    sc_signal< sc_lv<10> > b_coeffs_address0;
    sc_signal< sc_logic > b_coeffs_ce0;
    sc_signal< sc_logic > b_coeffs_we0;
    sc_signal< sc_lv<16> > b_coeffs_d0;
    sc_signal< sc_lv<16> > b_coeffs_q0;
    sc_signal< sc_lv<10> > c_coeffs_address0;
    sc_signal< sc_logic > c_coeffs_ce0;
    sc_signal< sc_logic > c_coeffs_we0;
    sc_signal< sc_lv<16> > c_coeffs_d0;
    sc_signal< sc_lv<16> > c_coeffs_q0;
    sc_signal< sc_lv<10> > s_coeffs_address0;
    sc_signal< sc_logic > s_coeffs_ce0;
    sc_signal< sc_logic > s_coeffs_we0;
    sc_signal< sc_lv<16> > s_coeffs_q0;
    sc_signal< sc_lv<10> > ai2_coeffs_address0;
    sc_signal< sc_logic > ai2_coeffs_ce0;
    sc_signal< sc_lv<2> > ai2_coeffs_we0;
    sc_signal< sc_lv<16> > ai2_coeffs_q0;
    sc_signal< sc_lv<10> > x1_coeffs_address0;
    sc_signal< sc_logic > x1_coeffs_ce0;
    sc_signal< sc_logic > x1_coeffs_we0;
    sc_signal< sc_lv<16> > x1_coeffs_d0;
    sc_signal< sc_lv<16> > x1_coeffs_q0;
    sc_signal< sc_lv<10> > x1_coeffs_address1;
    sc_signal< sc_logic > x1_coeffs_ce1;
    sc_signal< sc_logic > x1_coeffs_we1;
    sc_signal< sc_lv<16> > x1_coeffs_q1;
    sc_signal< sc_lv<10> > x2_coeffs_address0;
    sc_signal< sc_logic > x2_coeffs_ce0;
    sc_signal< sc_lv<2> > x2_coeffs_we0;
    sc_signal< sc_lv<16> > x2_coeffs_d0;
    sc_signal< sc_lv<16> > x2_coeffs_q0;
    sc_signal< sc_lv<10> > x2_coeffs_address1;
    sc_signal< sc_logic > x2_coeffs_ce1;
    sc_signal< sc_lv<2> > x2_coeffs_we1;
    sc_signal< sc_lv<16> > x2_coeffs_q1;
    sc_signal< sc_lv<10> > x3_coeffs_address0;
    sc_signal< sc_logic > x3_coeffs_ce0;
    sc_signal< sc_logic > x3_coeffs_we0;
    sc_signal< sc_lv<16> > x3_coeffs_d0;
    sc_signal< sc_lv<10> > x3_coeffs_address1;
    sc_signal< sc_logic > x3_coeffs_ce1;
    sc_signal< sc_logic > x3_coeffs_we1;
    sc_signal< sc_lv<16> > x3_coeffs_d1;
    sc_signal< sc_lv<16> > x3_coeffs_q1;
    sc_signal< sc_lv<10> > x4_coeffs_address0;
    sc_signal< sc_logic > x4_coeffs_ce0;
    sc_signal< sc_logic > x4_coeffs_we0;
    sc_signal< sc_lv<16> > x4_coeffs_d0;
    sc_signal< sc_lv<16> > x4_coeffs_q0;
    sc_signal< sc_lv<10> > x5_coeffs_address0;
    sc_signal< sc_logic > x5_coeffs_ce0;
    sc_signal< sc_logic > x5_coeffs_we0;
    sc_signal< sc_lv<16> > x5_coeffs_q0;
    sc_signal< sc_logic > grp_poly_S3_inv_fu_328_ap_start;
    sc_signal< sc_logic > grp_poly_S3_inv_fu_328_ap_done;
    sc_signal< sc_logic > grp_poly_S3_inv_fu_328_ap_idle;
    sc_signal< sc_logic > grp_poly_S3_inv_fu_328_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_S3_inv_fu_328_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_inv_fu_328_r_coeffs_ce0;
    sc_signal< sc_lv<2> > grp_poly_S3_inv_fu_328_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_S3_inv_fu_328_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_poly_S3_inv_fu_328_r_coeffs_address1;
    sc_signal< sc_logic > grp_poly_S3_inv_fu_328_r_coeffs_ce1;
    sc_signal< sc_lv<2> > grp_poly_S3_inv_fu_328_r_coeffs_we1;
    sc_signal< sc_lv<16> > grp_poly_S3_inv_fu_328_r_coeffs_d1;
    sc_signal< sc_lv<10> > grp_poly_S3_inv_fu_328_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_inv_fu_328_a_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_R2_inv_fu_334_ap_start;
    sc_signal< sc_logic > grp_poly_R2_inv_fu_334_ap_done;
    sc_signal< sc_logic > grp_poly_R2_inv_fu_334_ap_idle;
    sc_signal< sc_logic > grp_poly_R2_inv_fu_334_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_R2_inv_fu_334_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_R2_inv_fu_334_r_coeffs_ce0;
    sc_signal< sc_lv<2> > grp_poly_R2_inv_fu_334_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_R2_inv_fu_334_r_coeffs_d0;
    sc_signal< sc_lv<10> > grp_poly_R2_inv_fu_334_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_R2_inv_fu_334_a_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_ap_start;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_ap_done;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_ap_idle;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_ap_ready;
    sc_signal< sc_lv<11> > grp_poly_Sq_tobytes_1_fu_340_r_address0;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_r_ce0;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_r_we0;
    sc_signal< sc_lv<8> > grp_poly_Sq_tobytes_1_fu_340_r_d0;
    sc_signal< sc_lv<11> > grp_poly_Sq_tobytes_1_fu_340_r_address1;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_r_ce1;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_r_we1;
    sc_signal< sc_lv<8> > grp_poly_Sq_tobytes_1_fu_340_r_d1;
    sc_signal< sc_lv<10> > grp_poly_Sq_tobytes_1_fu_340_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_a_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_ap_start;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_ap_done;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_ap_idle;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_ap_ready;
    sc_signal< sc_lv<11> > grp_poly_Sq_tobytes_fu_347_r_address0;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_r_ce0;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_r_we0;
    sc_signal< sc_lv<8> > grp_poly_Sq_tobytes_fu_347_r_d0;
    sc_signal< sc_lv<11> > grp_poly_Sq_tobytes_fu_347_r_address1;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_r_ce1;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_r_we1;
    sc_signal< sc_lv<8> > grp_poly_Sq_tobytes_fu_347_r_d1;
    sc_signal< sc_lv<10> > grp_poly_Sq_tobytes_fu_347_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_a_coeffs_ce0;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_ap_start;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_ap_done;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_ap_idle;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_ap_ready;
    sc_signal< sc_lv<10> > grp_sample_iid_plus_fu_354_r_coeffs_address0;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_r_coeffs_ce0;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_sample_iid_plus_fu_354_r_coeffs_d0;
    sc_signal< sc_lv<16> > grp_sample_iid_plus_fu_354_r_coeffs_q0;
    sc_signal< sc_lv<10> > grp_sample_iid_plus_fu_354_r_coeffs_address1;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_r_coeffs_ce1;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_r_coeffs_we1;
    sc_signal< sc_lv<16> > grp_sample_iid_plus_fu_354_r_coeffs_d1;
    sc_signal< sc_lv<16> > grp_sample_iid_plus_fu_354_r_coeffs_q1;
    sc_signal< sc_lv<11> > grp_sample_iid_plus_fu_354_uniformbytes_address0;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_uniformbytes_ce0;
    sc_signal< sc_lv<12> > grp_sample_iid_plus_fu_354_uniformbytes_offset;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_ap_start;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_ap_done;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_ap_idle;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_ap_ready;
    sc_signal< sc_lv<10> > grp_poly_Rq_mul_fu_365_r_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_r_coeffs_ce0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_poly_Rq_mul_fu_365_r_coeffs_d0;
    sc_signal< sc_lv<16> > grp_poly_Rq_mul_fu_365_r_coeffs_q0;
    sc_signal< sc_lv<10> > grp_poly_Rq_mul_fu_365_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_a_coeffs_ce0;
    sc_signal< sc_lv<16> > grp_poly_Rq_mul_fu_365_a_coeffs_q0;
    sc_signal< sc_lv<10> > grp_poly_Rq_mul_fu_365_b_coeffs_address0;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_b_coeffs_ce0;
    sc_signal< sc_lv<16> > grp_poly_Rq_mul_fu_365_b_coeffs_q0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_ap_start;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_ap_done;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_ap_idle;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_ap_ready;
    sc_signal< sc_lv<11> > grp_poly_S3_tobytes_fu_372_msg_address0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_msg_ce0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_msg_we0;
    sc_signal< sc_lv<8> > grp_poly_S3_tobytes_fu_372_msg_d0;
    sc_signal< sc_lv<10> > grp_poly_S3_tobytes_fu_372_msg_offset;
    sc_signal< sc_lv<10> > grp_poly_S3_tobytes_fu_372_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_a_coeffs_ce0;
    sc_signal< sc_lv<16> > grp_poly_S3_tobytes_fu_372_a_coeffs_q0;
    sc_signal< sc_lv<10> > grp_poly_S3_tobytes_fu_372_a_coeffs_address1;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_a_coeffs_ce1;
    sc_signal< sc_lv<16> > grp_poly_S3_tobytes_fu_372_a_coeffs_q1;
    sc_signal< sc_lv<10> > i_i_reg_251;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<10> > i_i5_reg_262;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<10> > i_i2_reg_273;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<10> > i_reg_284;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<10> > i_i1_reg_295;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<10> > i_1_i_reg_306;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<10> > i_i3_reg_317;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_logic > ap_CS_fsm_state54;
    sc_signal< sc_logic > grp_poly_S3_inv_fu_328_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > grp_poly_R2_inv_fu_334_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_1_fu_340_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state55;
    sc_signal< sc_logic > grp_poly_Sq_tobytes_fu_347_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state58;
    sc_signal< sc_logic > ap_CS_fsm_state59;
    sc_signal< sc_logic > grp_sample_iid_plus_fu_354_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_poly_Rq_mul_fu_365_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_logic > ap_CS_fsm_state49;
    sc_signal< sc_logic > ap_CS_fsm_state51;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_logic > ap_CS_fsm_state42;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_logic > ap_CS_fsm_state50;
    sc_signal< sc_logic > ap_CS_fsm_state57;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_372_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > tmp_i_fu_401_p1;
    sc_signal< sc_lv<64> > tmp_i7_fu_463_p1;
    sc_signal< sc_lv<64> > tmp_i4_fu_525_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_576_p1;
    sc_signal< sc_lv<64> > tmp_i3_fu_663_p1;
    sc_signal< sc_lv<16> > tmp_40_i_fu_442_p3;
    sc_signal< sc_lv<16> > tmp_40_i1_fu_504_p3;
    sc_signal< sc_lv<16> > tmp_158_i_cast_fu_678_p1;
    sc_signal< sc_lv<16> > tmp_231_i_cast_fu_545_p1;
    sc_signal< sc_lv<16> > tmp_233_i_cast_fu_559_p1;
    sc_signal< sc_lv<16> > tmp_296_cast_fu_597_p1;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<16> > grp_fu_382_p2;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_lv<13> > tmp_fu_406_p4;
    sc_signal< sc_lv<13> > tmp_336_fu_422_p1;
    sc_signal< sc_lv<13> > tmp_38_i_cast_fu_416_p2;
    sc_signal< sc_lv<3> > tmp_40_fu_432_p4;
    sc_signal< sc_lv<13> > tmp_39_fu_426_p2;
    sc_signal< sc_lv<13> > tmp_41_fu_468_p4;
    sc_signal< sc_lv<13> > tmp_337_fu_484_p1;
    sc_signal< sc_lv<13> > tmp_38_i1_cast_fu_478_p2;
    sc_signal< sc_lv<3> > tmp_44_fu_494_p4;
    sc_signal< sc_lv<13> > tmp_43_fu_488_p2;
    sc_signal< sc_lv<16> > tmp_230_i_fu_535_p2;
    sc_signal< sc_lv<13> > tmp_339_fu_541_p1;
    sc_signal< sc_lv<16> > tmp_232_i_fu_550_p2;
    sc_signal< sc_lv<13> > tmp_338_fu_555_p1;
    sc_signal< sc_lv<16> > tmp_340_fu_581_p2;
    sc_signal< sc_lv<16> > tmp_242_fu_587_p2;
    sc_signal< sc_lv<13> > tmp_341_fu_593_p1;
    sc_signal< sc_lv<13> > tmp_342_fu_619_p1;
    sc_signal< sc_lv<13> > tmp_i6_cast_fu_623_p2;
    sc_signal< sc_lv<16> > tmp_i5_fu_668_p2;
    sc_signal< sc_lv<13> > tmp_343_fu_674_p1;
    sc_signal< sc_lv<59> > ap_NS_fsm;
    sc_signal< bool > ap_block_state4_on_subcall_done;
    sc_signal< bool > ap_block_state55_on_subcall_done;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<59> ap_ST_fsm_state1;
    static const sc_lv<59> ap_ST_fsm_state2;
    static const sc_lv<59> ap_ST_fsm_state3;
    static const sc_lv<59> ap_ST_fsm_state4;
    static const sc_lv<59> ap_ST_fsm_state5;
    static const sc_lv<59> ap_ST_fsm_state6;
    static const sc_lv<59> ap_ST_fsm_state7;
    static const sc_lv<59> ap_ST_fsm_state8;
    static const sc_lv<59> ap_ST_fsm_state9;
    static const sc_lv<59> ap_ST_fsm_state10;
    static const sc_lv<59> ap_ST_fsm_state11;
    static const sc_lv<59> ap_ST_fsm_state12;
    static const sc_lv<59> ap_ST_fsm_state13;
    static const sc_lv<59> ap_ST_fsm_state14;
    static const sc_lv<59> ap_ST_fsm_state15;
    static const sc_lv<59> ap_ST_fsm_state16;
    static const sc_lv<59> ap_ST_fsm_state17;
    static const sc_lv<59> ap_ST_fsm_state18;
    static const sc_lv<59> ap_ST_fsm_state19;
    static const sc_lv<59> ap_ST_fsm_state20;
    static const sc_lv<59> ap_ST_fsm_state21;
    static const sc_lv<59> ap_ST_fsm_state22;
    static const sc_lv<59> ap_ST_fsm_state23;
    static const sc_lv<59> ap_ST_fsm_state24;
    static const sc_lv<59> ap_ST_fsm_state25;
    static const sc_lv<59> ap_ST_fsm_state26;
    static const sc_lv<59> ap_ST_fsm_state27;
    static const sc_lv<59> ap_ST_fsm_state28;
    static const sc_lv<59> ap_ST_fsm_state29;
    static const sc_lv<59> ap_ST_fsm_state30;
    static const sc_lv<59> ap_ST_fsm_state31;
    static const sc_lv<59> ap_ST_fsm_state32;
    static const sc_lv<59> ap_ST_fsm_state33;
    static const sc_lv<59> ap_ST_fsm_state34;
    static const sc_lv<59> ap_ST_fsm_state35;
    static const sc_lv<59> ap_ST_fsm_state36;
    static const sc_lv<59> ap_ST_fsm_state37;
    static const sc_lv<59> ap_ST_fsm_state38;
    static const sc_lv<59> ap_ST_fsm_state39;
    static const sc_lv<59> ap_ST_fsm_state40;
    static const sc_lv<59> ap_ST_fsm_state41;
    static const sc_lv<59> ap_ST_fsm_state42;
    static const sc_lv<59> ap_ST_fsm_state43;
    static const sc_lv<59> ap_ST_fsm_state44;
    static const sc_lv<59> ap_ST_fsm_state45;
    static const sc_lv<59> ap_ST_fsm_state46;
    static const sc_lv<59> ap_ST_fsm_state47;
    static const sc_lv<59> ap_ST_fsm_state48;
    static const sc_lv<59> ap_ST_fsm_state49;
    static const sc_lv<59> ap_ST_fsm_state50;
    static const sc_lv<59> ap_ST_fsm_state51;
    static const sc_lv<59> ap_ST_fsm_state52;
    static const sc_lv<59> ap_ST_fsm_state53;
    static const sc_lv<59> ap_ST_fsm_state54;
    static const sc_lv<59> ap_ST_fsm_state55;
    static const sc_lv<59> ap_ST_fsm_state56;
    static const sc_lv<59> ap_ST_fsm_state57;
    static const sc_lv<59> ap_ST_fsm_state58;
    static const sc_lv<59> ap_ST_fsm_state59;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<10> ap_const_lv10_2BC;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_3A;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<12> ap_const_lv12_2BC;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<10> ap_const_lv10_8C;
    static const sc_lv<64> ap_const_lv64_2BC;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<16> ap_const_lv16_2;
    static const sc_lv<10> ap_const_lv10_2BD;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<10> ap_const_lv10_3FF;
    static const bool ap_const_boolean_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ai2_coeffs_address0();
    void thread_ai2_coeffs_ce0();
    void thread_ai2_coeffs_we0();
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
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state42();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state49();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state50();
    void thread_ap_CS_fsm_state51();
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state54();
    void thread_ap_CS_fsm_state55();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state57();
    void thread_ap_CS_fsm_state58();
    void thread_ap_CS_fsm_state59();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state4_on_subcall_done();
    void thread_ap_block_state55_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_coeffs_address0();
    void thread_b_coeffs_ce0();
    void thread_b_coeffs_d0();
    void thread_b_coeffs_we0();
    void thread_c_coeffs_addr_reg_796();
    void thread_c_coeffs_address0();
    void thread_c_coeffs_ce0();
    void thread_c_coeffs_d0();
    void thread_c_coeffs_we0();
    void thread_exitcond1_i_fu_602_p2();
    void thread_exitcond_fu_564_p2();
    void thread_exitcond_i2_fu_651_p2();
    void thread_exitcond_i6_fu_451_p2();
    void thread_exitcond_i7_fu_634_p2();
    void thread_exitcond_i_fu_389_p2();
    void thread_grp_fu_382_p2();
    void thread_grp_poly_R2_inv_fu_334_ap_start();
    void thread_grp_poly_Rq_mul_fu_365_a_coeffs_q0();
    void thread_grp_poly_Rq_mul_fu_365_ap_start();
    void thread_grp_poly_Rq_mul_fu_365_b_coeffs_q0();
    void thread_grp_poly_Rq_mul_fu_365_r_coeffs_q0();
    void thread_grp_poly_S3_inv_fu_328_ap_start();
    void thread_grp_poly_S3_tobytes_fu_372_a_coeffs_q0();
    void thread_grp_poly_S3_tobytes_fu_372_a_coeffs_q1();
    void thread_grp_poly_S3_tobytes_fu_372_ap_start();
    void thread_grp_poly_S3_tobytes_fu_372_msg_offset();
    void thread_grp_poly_Sq_tobytes_1_fu_340_ap_start();
    void thread_grp_poly_Sq_tobytes_fu_347_ap_start();
    void thread_grp_sample_iid_plus_fu_354_ap_start();
    void thread_grp_sample_iid_plus_fu_354_r_coeffs_q0();
    void thread_grp_sample_iid_plus_fu_354_r_coeffs_q1();
    void thread_grp_sample_iid_plus_fu_354_uniformbytes_offset();
    void thread_h_coeffs_addr_reg_709();
    void thread_i_33_fu_395_p2();
    void thread_i_34_fu_457_p2();
    void thread_i_35_fu_519_p2();
    void thread_i_36_fu_570_p2();
    void thread_i_37_fu_608_p2();
    void thread_i_38_fu_640_p2();
    void thread_i_39_fu_657_p2();
    void thread_pk_address0();
    void thread_pk_address1();
    void thread_pk_ce0();
    void thread_pk_ce1();
    void thread_pk_d0();
    void thread_pk_d1();
    void thread_pk_we0();
    void thread_pk_we1();
    void thread_s_coeffs_address0();
    void thread_s_coeffs_ce0();
    void thread_s_coeffs_we0();
    void thread_seed_address0();
    void thread_seed_ce0();
    void thread_sk_address0();
    void thread_sk_address1();
    void thread_sk_ce0();
    void thread_sk_ce1();
    void thread_sk_d0();
    void thread_sk_d1();
    void thread_sk_we0();
    void thread_sk_we1();
    void thread_tmp_158_i_cast_fu_678_p1();
    void thread_tmp_229_i_fu_530_p1();
    void thread_tmp_230_i_fu_535_p2();
    void thread_tmp_231_i_cast_fu_545_p1();
    void thread_tmp_232_i_fu_550_p2();
    void thread_tmp_233_i_cast_fu_559_p1();
    void thread_tmp_242_fu_587_p2();
    void thread_tmp_252_i_fu_646_p1();
    void thread_tmp_296_cast_fu_597_p1();
    void thread_tmp_336_fu_422_p1();
    void thread_tmp_337_fu_484_p1();
    void thread_tmp_338_fu_555_p1();
    void thread_tmp_339_fu_541_p1();
    void thread_tmp_340_fu_581_p2();
    void thread_tmp_341_fu_593_p1();
    void thread_tmp_342_fu_619_p1();
    void thread_tmp_343_fu_674_p1();
    void thread_tmp_38_i1_cast_fu_478_p2();
    void thread_tmp_38_i_cast_fu_416_p2();
    void thread_tmp_39_fu_426_p2();
    void thread_tmp_40_fu_432_p4();
    void thread_tmp_40_i1_fu_504_p3();
    void thread_tmp_40_i_fu_442_p3();
    void thread_tmp_41_fu_468_p4();
    void thread_tmp_43_fu_488_p2();
    void thread_tmp_44_fu_494_p4();
    void thread_tmp_fu_406_p4();
    void thread_tmp_i2_fu_513_p2();
    void thread_tmp_i3_fu_663_p1();
    void thread_tmp_i4_76_fu_614_p1();
    void thread_tmp_i4_fu_525_p1();
    void thread_tmp_i5_fu_668_p2();
    void thread_tmp_i6_cast_fu_623_p2();
    void thread_tmp_i7_fu_463_p1();
    void thread_tmp_i_fu_401_p1();
    void thread_tmp_s_fu_576_p1();
    void thread_x1_coeffs_address0();
    void thread_x1_coeffs_address1();
    void thread_x1_coeffs_ce0();
    void thread_x1_coeffs_ce1();
    void thread_x1_coeffs_d0();
    void thread_x1_coeffs_we0();
    void thread_x1_coeffs_we1();
    void thread_x2_coeffs_address0();
    void thread_x2_coeffs_address1();
    void thread_x2_coeffs_ce0();
    void thread_x2_coeffs_ce1();
    void thread_x2_coeffs_d0();
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
    void thread_x4_coeffs_ce0();
    void thread_x4_coeffs_d0();
    void thread_x4_coeffs_we0();
    void thread_x5_coeffs_address0();
    void thread_x5_coeffs_ce0();
    void thread_x5_coeffs_we0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
