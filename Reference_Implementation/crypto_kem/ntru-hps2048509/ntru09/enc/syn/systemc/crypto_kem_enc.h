// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _crypto_kem_enc_HH_
#define _crypto_kem_enc_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sha3_256.h"
#include "randombytes.h"
#include "sample_fixed_type.h"
#include "owcpa_enc.h"
#include "poly_S3_tobytes.h"
#include "crypto_kem_enc_r_coeffs.h"
#include "crypto_kem_enc_rm.h"
#include "crypto_kem_enc_rm_seed.h"

namespace ap_rtl {

struct crypto_kem_enc : public sc_module {
    // Port declarations 44
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > c_address0;
    sc_out< sc_logic > c_ce0;
    sc_out< sc_logic > c_we0;
    sc_out< sc_lv<8> > c_d0;
    sc_out< sc_lv<10> > c_address1;
    sc_out< sc_logic > c_ce1;
    sc_out< sc_logic > c_we1;
    sc_out< sc_lv<8> > c_d1;
    sc_out< sc_lv<5> > k_address0;
    sc_out< sc_logic > k_ce0;
    sc_out< sc_logic > k_we0;
    sc_out< sc_lv<8> > k_d0;
    sc_out< sc_lv<10> > pk_address0;
    sc_out< sc_logic > pk_ce0;
    sc_in< sc_lv<8> > pk_q0;
    sc_out< sc_lv<10> > pk_address1;
    sc_out< sc_logic > pk_ce1;
    sc_in< sc_lv<8> > pk_q1;
    sc_out< sc_lv<4> > DRBG_ctx_V_address0;
    sc_out< sc_logic > DRBG_ctx_V_ce0;
    sc_out< sc_logic > DRBG_ctx_V_we0;
    sc_out< sc_lv<8> > DRBG_ctx_V_d0;
    sc_in< sc_lv<8> > DRBG_ctx_V_q0;
    sc_out< sc_lv<4> > DRBG_ctx_V_address1;
    sc_out< sc_logic > DRBG_ctx_V_ce1;
    sc_in< sc_lv<8> > DRBG_ctx_V_q1;
    sc_out< sc_lv<5> > DRBG_ctx_Key_address0;
    sc_out< sc_logic > DRBG_ctx_Key_ce0;
    sc_out< sc_logic > DRBG_ctx_Key_we0;
    sc_out< sc_lv<8> > DRBG_ctx_Key_d0;
    sc_in< sc_lv<8> > DRBG_ctx_Key_q0;
    sc_out< sc_lv<5> > DRBG_ctx_Key_address1;
    sc_out< sc_logic > DRBG_ctx_Key_ce1;
    sc_in< sc_lv<8> > DRBG_ctx_Key_q1;
    sc_in< sc_lv<32> > DRBG_ctx_reseed_counter_i;
    sc_out< sc_lv<32> > DRBG_ctx_reseed_counter_o;
    sc_out< sc_logic > DRBG_ctx_reseed_counter_o_ap_vld;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    crypto_kem_enc(sc_module_name name);
    SC_HAS_PROCESS(crypto_kem_enc);

    ~crypto_kem_enc();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    crypto_kem_enc_r_coeffs* r_coeffs_U;
    crypto_kem_enc_r_coeffs* m_coeffs_U;
    crypto_kem_enc_rm* rm_U;
    crypto_kem_enc_rm_seed* rm_seed_U;
    sha3_256* grp_sha3_256_fu_142;
    randombytes* grp_randombytes_fu_151;
    sample_fixed_type* grp_sample_fixed_type_fu_167;
    owcpa_enc* grp_owcpa_enc_fu_173;
    poly_S3_tobytes* grp_poly_S3_tobytes_fu_182;
    sc_signal< sc_lv<13> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > i_fu_197_p2;
    sc_signal< sc_lv<9> > i_reg_390;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > tmp_i_i_i_fu_203_p1;
    sc_signal< sc_lv<64> > tmp_i_i_i_reg_395;
    sc_signal< sc_lv<1> > exitcond_i_i_i_fu_191_p2;
    sc_signal< sc_lv<3> > r_5_fu_320_p2;
    sc_signal< sc_lv<3> > r_5_reg_405;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<9> > r_coeffs_address0;
    sc_signal< sc_logic > r_coeffs_ce0;
    sc_signal< sc_logic > r_coeffs_we0;
    sc_signal< sc_lv<16> > r_coeffs_d0;
    sc_signal< sc_lv<16> > r_coeffs_q0;
    sc_signal< sc_logic > r_coeffs_ce1;
    sc_signal< sc_lv<16> > r_coeffs_q1;
    sc_signal< sc_lv<9> > m_coeffs_address0;
    sc_signal< sc_logic > m_coeffs_ce0;
    sc_signal< sc_logic > m_coeffs_we0;
    sc_signal< sc_lv<16> > m_coeffs_q0;
    sc_signal< sc_logic > m_coeffs_ce1;
    sc_signal< sc_lv<16> > m_coeffs_q1;
    sc_signal< sc_lv<8> > rm_address0;
    sc_signal< sc_logic > rm_ce0;
    sc_signal< sc_logic > rm_we0;
    sc_signal< sc_lv<8> > rm_q0;
    sc_signal< sc_lv<12> > rm_seed_address0;
    sc_signal< sc_logic > rm_seed_ce0;
    sc_signal< sc_logic > rm_seed_we0;
    sc_signal< sc_lv<8> > rm_seed_q0;
    sc_signal< sc_logic > rm_seed_ce1;
    sc_signal< sc_lv<8> > rm_seed_q1;
    sc_signal< sc_logic > grp_sha3_256_fu_142_ap_start;
    sc_signal< sc_logic > grp_sha3_256_fu_142_ap_done;
    sc_signal< sc_logic > grp_sha3_256_fu_142_ap_idle;
    sc_signal< sc_logic > grp_sha3_256_fu_142_ap_ready;
    sc_signal< sc_lv<5> > grp_sha3_256_fu_142_output_r_address0;
    sc_signal< sc_logic > grp_sha3_256_fu_142_output_r_ce0;
    sc_signal< sc_logic > grp_sha3_256_fu_142_output_r_we0;
    sc_signal< sc_lv<8> > grp_sha3_256_fu_142_output_r_d0;
    sc_signal< sc_lv<8> > grp_sha3_256_fu_142_input_r_address0;
    sc_signal< sc_logic > grp_sha3_256_fu_142_input_r_ce0;
    sc_signal< sc_logic > grp_randombytes_fu_151_ap_start;
    sc_signal< sc_logic > grp_randombytes_fu_151_ap_done;
    sc_signal< sc_logic > grp_randombytes_fu_151_ap_idle;
    sc_signal< sc_logic > grp_randombytes_fu_151_ap_ready;
    sc_signal< sc_lv<12> > grp_randombytes_fu_151_x_address0;
    sc_signal< sc_logic > grp_randombytes_fu_151_x_ce0;
    sc_signal< sc_logic > grp_randombytes_fu_151_x_we0;
    sc_signal< sc_lv<8> > grp_randombytes_fu_151_x_d0;
    sc_signal< sc_lv<4> > grp_randombytes_fu_151_DRBG_ctx_V_address0;
    sc_signal< sc_logic > grp_randombytes_fu_151_DRBG_ctx_V_ce0;
    sc_signal< sc_logic > grp_randombytes_fu_151_DRBG_ctx_V_we0;
    sc_signal< sc_lv<8> > grp_randombytes_fu_151_DRBG_ctx_V_d0;
    sc_signal< sc_lv<4> > grp_randombytes_fu_151_DRBG_ctx_V_address1;
    sc_signal< sc_logic > grp_randombytes_fu_151_DRBG_ctx_V_ce1;
    sc_signal< sc_lv<5> > grp_randombytes_fu_151_DRBG_ctx_Key_address0;
    sc_signal< sc_logic > grp_randombytes_fu_151_DRBG_ctx_Key_ce0;
    sc_signal< sc_logic > grp_randombytes_fu_151_DRBG_ctx_Key_we0;
    sc_signal< sc_lv<8> > grp_randombytes_fu_151_DRBG_ctx_Key_d0;
    sc_signal< sc_lv<5> > grp_randombytes_fu_151_DRBG_ctx_Key_address1;
    sc_signal< sc_logic > grp_randombytes_fu_151_DRBG_ctx_Key_ce1;
    sc_signal< sc_lv<32> > grp_randombytes_fu_151_DRBG_ctx_reseed_counter_o;
    sc_signal< sc_logic > grp_randombytes_fu_151_DRBG_ctx_reseed_counter_o_ap_vld;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_ap_start;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_ap_done;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_ap_idle;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_ap_ready;
    sc_signal< sc_lv<9> > grp_sample_fixed_type_fu_167_r_coeffs_address0;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_r_coeffs_ce0;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_r_coeffs_we0;
    sc_signal< sc_lv<16> > grp_sample_fixed_type_fu_167_r_coeffs_d0;
    sc_signal< sc_lv<12> > grp_sample_fixed_type_fu_167_u_address0;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_u_ce0;
    sc_signal< sc_lv<12> > grp_sample_fixed_type_fu_167_u_address1;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_u_ce1;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_ap_start;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_ap_done;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_ap_idle;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_ap_ready;
    sc_signal< sc_lv<10> > grp_owcpa_enc_fu_173_c_address0;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_c_ce0;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_c_we0;
    sc_signal< sc_lv<8> > grp_owcpa_enc_fu_173_c_d0;
    sc_signal< sc_lv<10> > grp_owcpa_enc_fu_173_c_address1;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_c_ce1;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_c_we1;
    sc_signal< sc_lv<8> > grp_owcpa_enc_fu_173_c_d1;
    sc_signal< sc_lv<8> > grp_owcpa_enc_fu_173_rm_address0;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_rm_ce0;
    sc_signal< sc_lv<10> > grp_owcpa_enc_fu_173_pk_address0;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_pk_ce0;
    sc_signal< sc_lv<10> > grp_owcpa_enc_fu_173_pk_address1;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_pk_ce1;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_ap_start;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_ap_done;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_ap_idle;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_ap_ready;
    sc_signal< sc_lv<8> > grp_poly_S3_tobytes_fu_182_msg_address0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_msg_ce0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_msg_we0;
    sc_signal< sc_lv<8> > grp_poly_S3_tobytes_fu_182_msg_d0;
    sc_signal< sc_lv<9> > grp_poly_S3_tobytes_fu_182_msg_offset;
    sc_signal< sc_lv<9> > grp_poly_S3_tobytes_fu_182_a_coeffs_address0;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_a_coeffs_ce0;
    sc_signal< sc_lv<16> > grp_poly_S3_tobytes_fu_182_a_coeffs_q0;
    sc_signal< sc_lv<9> > grp_poly_S3_tobytes_fu_182_a_coeffs_address1;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_a_coeffs_ce1;
    sc_signal< sc_lv<16> > grp_poly_S3_tobytes_fu_182_a_coeffs_q1;
    sc_signal< sc_lv<9> > i_i_i_i_reg_131;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > grp_sha3_256_fu_142_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > grp_randombytes_fu_151_ap_start_reg;
    sc_signal< sc_logic > grp_sample_fixed_type_fu_167_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > grp_owcpa_enc_fu_173_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > grp_poly_S3_tobytes_fu_182_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<16> > tmp_357_i_i_i_i_fu_380_p2;
    sc_signal< sc_lv<4> > tmp_176_fu_212_p4;
    sc_signal< sc_lv<4> > tmp_fu_208_p1;
    sc_signal< sc_lv<5> > tmp_349_i_i_i_i_cast_fu_226_p1;
    sc_signal< sc_lv<5> > tmp_348_i_i_i_i_cast_fu_222_p1;
    sc_signal< sc_lv<5> > r_fu_236_p2;
    sc_signal< sc_lv<3> > tmp_178_fu_242_p4;
    sc_signal< sc_lv<2> > tmp_74_fu_260_p4;
    sc_signal< sc_lv<2> > tmp_257_fu_256_p1;
    sc_signal< sc_lv<2> > fold1_i_i_i_i_cast_fu_270_p2;
    sc_signal< sc_lv<4> > tmp_351_i_i_i_i_cast_fu_276_p1;
    sc_signal< sc_lv<4> > tmp_350_i_i_i_i_cast_fu_252_p1;
    sc_signal< sc_lv<4> > r_4_fu_280_p2;
    sc_signal< sc_lv<2> > tmp_179_fu_286_p4;
    sc_signal< sc_lv<4> > tmp_177_fu_230_p2;
    sc_signal< sc_lv<2> > tmp_75_fu_300_p4;
    sc_signal< sc_lv<2> > fold2_i_i_i_i_cast_fu_310_p2;
    sc_signal< sc_lv<3> > tmp_353_i_i_i_i_cast_fu_316_p1;
    sc_signal< sc_lv<3> > tmp_352_i_i_i_i_cast_fu_296_p1;
    sc_signal< sc_lv<3> > t_fu_326_p2;
    sc_signal< sc_lv<1> > tmp_258_fu_331_p3;
    sc_signal< sc_lv<3> > c_15_cast_fu_339_p3;
    sc_signal< sc_lv<3> > tmp_354_i_i_i_i_fu_347_p2;
    sc_signal< sc_lv<1> > not_tmp_33_i_i_i_i_fu_356_p2;
    sc_signal< sc_lv<3> > tmp_355_i_i_i_i_cast_fu_362_p3;
    sc_signal< sc_lv<3> > tmp_356_i_i_i_i_fu_370_p2;
    sc_signal< sc_lv<16> > tmp_354_i_i_i_i_cast_fu_352_p1;
    sc_signal< sc_lv<16> > tmp_356_i_i_i_i_cast_fu_376_p1;
    sc_signal< sc_lv<13> > ap_NS_fsm;
    sc_signal< bool > ap_block_state7_on_subcall_done;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<13> ap_ST_fsm_state1;
    static const sc_lv<13> ap_ST_fsm_state2;
    static const sc_lv<13> ap_ST_fsm_state3;
    static const sc_lv<13> ap_ST_fsm_state4;
    static const sc_lv<13> ap_ST_fsm_state5;
    static const sc_lv<13> ap_ST_fsm_state6;
    static const sc_lv<13> ap_ST_fsm_state7;
    static const sc_lv<13> ap_ST_fsm_state8;
    static const sc_lv<13> ap_ST_fsm_state9;
    static const sc_lv<13> ap_ST_fsm_state10;
    static const sc_lv<13> ap_ST_fsm_state11;
    static const sc_lv<13> ap_ST_fsm_state12;
    static const sc_lv<13> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<9> ap_const_lv9_66;
    static const sc_lv<64> ap_const_lv64_1FC;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<9> ap_const_lv9_1FC;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const bool ap_const_boolean_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_DRBG_ctx_Key_address0();
    void thread_DRBG_ctx_Key_address1();
    void thread_DRBG_ctx_Key_ce0();
    void thread_DRBG_ctx_Key_ce1();
    void thread_DRBG_ctx_Key_d0();
    void thread_DRBG_ctx_Key_we0();
    void thread_DRBG_ctx_V_address0();
    void thread_DRBG_ctx_V_address1();
    void thread_DRBG_ctx_V_ce0();
    void thread_DRBG_ctx_V_ce1();
    void thread_DRBG_ctx_V_d0();
    void thread_DRBG_ctx_V_we0();
    void thread_DRBG_ctx_reseed_counter_o();
    void thread_DRBG_ctx_reseed_counter_o_ap_vld();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state7_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_c_15_cast_fu_339_p3();
    void thread_c_address0();
    void thread_c_address1();
    void thread_c_ce0();
    void thread_c_ce1();
    void thread_c_d0();
    void thread_c_d1();
    void thread_c_we0();
    void thread_c_we1();
    void thread_exitcond_i_i_i_fu_191_p2();
    void thread_fold1_i_i_i_i_cast_fu_270_p2();
    void thread_fold2_i_i_i_i_cast_fu_310_p2();
    void thread_grp_owcpa_enc_fu_173_ap_start();
    void thread_grp_poly_S3_tobytes_fu_182_a_coeffs_q0();
    void thread_grp_poly_S3_tobytes_fu_182_a_coeffs_q1();
    void thread_grp_poly_S3_tobytes_fu_182_ap_start();
    void thread_grp_poly_S3_tobytes_fu_182_msg_offset();
    void thread_grp_randombytes_fu_151_ap_start();
    void thread_grp_sample_fixed_type_fu_167_ap_start();
    void thread_grp_sha3_256_fu_142_ap_start();
    void thread_i_fu_197_p2();
    void thread_k_address0();
    void thread_k_ce0();
    void thread_k_d0();
    void thread_k_we0();
    void thread_m_coeffs_address0();
    void thread_m_coeffs_ce0();
    void thread_m_coeffs_ce1();
    void thread_m_coeffs_we0();
    void thread_not_tmp_33_i_i_i_i_fu_356_p2();
    void thread_pk_address0();
    void thread_pk_address1();
    void thread_pk_ce0();
    void thread_pk_ce1();
    void thread_r_4_fu_280_p2();
    void thread_r_5_fu_320_p2();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_we0();
    void thread_r_fu_236_p2();
    void thread_rm_address0();
    void thread_rm_ce0();
    void thread_rm_seed_address0();
    void thread_rm_seed_ce0();
    void thread_rm_seed_ce1();
    void thread_rm_seed_we0();
    void thread_rm_we0();
    void thread_t_fu_326_p2();
    void thread_tmp_176_fu_212_p4();
    void thread_tmp_177_fu_230_p2();
    void thread_tmp_178_fu_242_p4();
    void thread_tmp_179_fu_286_p4();
    void thread_tmp_257_fu_256_p1();
    void thread_tmp_258_fu_331_p3();
    void thread_tmp_348_i_i_i_i_cast_fu_222_p1();
    void thread_tmp_349_i_i_i_i_cast_fu_226_p1();
    void thread_tmp_350_i_i_i_i_cast_fu_252_p1();
    void thread_tmp_351_i_i_i_i_cast_fu_276_p1();
    void thread_tmp_352_i_i_i_i_cast_fu_296_p1();
    void thread_tmp_353_i_i_i_i_cast_fu_316_p1();
    void thread_tmp_354_i_i_i_i_cast_fu_352_p1();
    void thread_tmp_354_i_i_i_i_fu_347_p2();
    void thread_tmp_355_i_i_i_i_cast_fu_362_p3();
    void thread_tmp_356_i_i_i_i_cast_fu_376_p1();
    void thread_tmp_356_i_i_i_i_fu_370_p2();
    void thread_tmp_357_i_i_i_i_fu_380_p2();
    void thread_tmp_74_fu_260_p4();
    void thread_tmp_75_fu_300_p4();
    void thread_tmp_fu_208_p1();
    void thread_tmp_i_i_i_fu_203_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
