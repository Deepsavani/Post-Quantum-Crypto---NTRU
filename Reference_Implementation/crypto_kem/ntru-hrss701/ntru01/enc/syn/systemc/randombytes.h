// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _randombytes_HH_
#define _randombytes_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "AES256_CTR_DRBG_Upda.h"
#include "AES256_ECB_1.h"
#include "randombytes_block.h"

namespace ap_rtl {

struct randombytes : public sc_module {
    // Port declarations 29
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<11> > x_address0;
    sc_out< sc_logic > x_ce0;
    sc_out< sc_logic > x_we0;
    sc_out< sc_lv<8> > x_d0;
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


    // Module declarations
    randombytes(sc_module_name name);
    SC_HAS_PROCESS(randombytes);

    ~randombytes();

    sc_trace_file* mVcdFile;

    randombytes_block* block_U;
    AES256_CTR_DRBG_Upda* grp_AES256_CTR_DRBG_Upda_fu_169;
    AES256_ECB_1* grp_AES256_ECB_1_fu_181;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > p_0_load_reg_385;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > DRBG_ctx_V_addr_reg_398;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_13_fu_220_p3;
    sc_signal< sc_lv<5> > j_1_fu_239_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_3_fu_233_p2;
    sc_signal< sc_lv<1> > icmp_fu_261_p2;
    sc_signal< sc_lv<1> > icmp_reg_411;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_ap_ready;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_ap_done;
    sc_signal< sc_lv<32> > loop_cast1_fu_267_p1;
    sc_signal< sc_lv<32> > loop_cast1_reg_415;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<5> > loop_1_fu_277_p2;
    sc_signal< sc_lv<5> > loop_1_reg_423;
    sc_signal< sc_lv<1> > exitcond_fu_271_p2;
    sc_signal< sc_lv<32> > loop1_cast_fu_309_p1;
    sc_signal< sc_lv<32> > loop1_cast_reg_433;
    sc_signal< sc_lv<4> > loop_2_fu_323_p2;
    sc_signal< sc_lv<4> > loop_2_reg_441;
    sc_signal< sc_lv<1> > tmp_7_fu_318_p2;
    sc_signal< sc_lv<4> > block_address0;
    sc_signal< sc_logic > block_ce0;
    sc_signal< sc_logic > block_we0;
    sc_signal< sc_lv<8> > block_q0;
    sc_signal< sc_logic > block_ce1;
    sc_signal< sc_logic > block_we1;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_ap_start;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_ap_done;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_ap_idle;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_ap_ready;
    sc_signal< sc_lv<4> > grp_AES256_CTR_DRBG_Upda_fu_169_V_address0;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_V_ce0;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_V_we0;
    sc_signal< sc_lv<8> > grp_AES256_CTR_DRBG_Upda_fu_169_V_d0;
    sc_signal< sc_lv<4> > grp_AES256_CTR_DRBG_Upda_fu_169_V_address1;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_V_ce1;
    sc_signal< sc_lv<5> > grp_AES256_CTR_DRBG_Upda_fu_169_DRBG_ctx_Key_address0;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_DRBG_ctx_Key_ce0;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_DRBG_ctx_Key_we0;
    sc_signal< sc_lv<8> > grp_AES256_CTR_DRBG_Upda_fu_169_DRBG_ctx_Key_d0;
    sc_signal< sc_lv<5> > grp_AES256_CTR_DRBG_Upda_fu_169_DRBG_ctx_Key_address1;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_DRBG_ctx_Key_ce1;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_ap_start;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_ap_idle;
    sc_signal< sc_lv<5> > grp_AES256_ECB_1_fu_181_key_address0;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_key_ce0;
    sc_signal< sc_lv<5> > grp_AES256_ECB_1_fu_181_key_address1;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_key_ce1;
    sc_signal< sc_lv<4> > grp_AES256_ECB_1_fu_181_ctr_address0;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_ctr_ce0;
    sc_signal< sc_lv<4> > grp_AES256_ECB_1_fu_181_ctr_address1;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_ctr_ce1;
    sc_signal< sc_lv<4> > grp_AES256_ECB_1_fu_181_buffer_r_address0;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_buffer_r_ce0;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_buffer_r_we0;
    sc_signal< sc_lv<8> > grp_AES256_ECB_1_fu_181_buffer_r_d0;
    sc_signal< sc_lv<4> > grp_AES256_ECB_1_fu_181_buffer_r_address1;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_buffer_r_ce1;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_buffer_r_we1;
    sc_signal< sc_lv<8> > grp_AES256_ECB_1_fu_181_buffer_r_d1;
    sc_signal< sc_lv<5> > j_reg_135;
    sc_signal< sc_lv<1> > tmp_fu_210_p2;
    sc_signal< sc_lv<5> > loop_reg_147;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > loop1_reg_158;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > grp_AES256_CTR_DRBG_Upda_fu_169_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > grp_AES256_ECB_1_fu_181_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > tmp_2_fu_228_p1;
    sc_signal< sc_lv<64> > tmp_8_fu_283_p1;
    sc_signal< sc_lv<64> > tmp_6_fu_313_p1;
    sc_signal< sc_lv<64> > tmp_10_fu_339_p1;
    sc_signal< sc_lv<64> > tmp_5_fu_349_p1;
    sc_signal< sc_lv<64> > p_0_fu_68;
    sc_signal< sc_lv<64> > xlen_assign_fu_294_p2;
    sc_signal< sc_lv<32> > i_fu_72;
    sc_signal< sc_lv<32> > i_4_fu_288_p2;
    sc_signal< sc_lv<32> > tmp_s_fu_358_p2;
    sc_signal< sc_lv<8> > tmp_4_fu_245_p2;
    sc_signal< sc_lv<32> > j_cast_fu_216_p1;
    sc_signal< sc_lv<60> > tmp_14_fu_252_p4;
    sc_signal< sc_lv<32> > tmp_9_fu_334_p2;
    sc_signal< sc_lv<32> > tmp_1_fu_344_p2;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_state3;
    static const sc_lv<10> ap_ST_fsm_state4;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_state6;
    static const sc_lv<10> ap_ST_fsm_state7;
    static const sc_lv<10> ap_ST_fsm_state8;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<5> ap_const_lv5_F;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<64> ap_const_lv64_578;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<60> ap_const_lv60_0;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFF0;
    static const sc_lv<4> ap_const_lv4_1;
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
    void thread_block_address0();
    void thread_block_ce0();
    void thread_block_ce1();
    void thread_block_we0();
    void thread_block_we1();
    void thread_exitcond_fu_271_p2();
    void thread_grp_AES256_CTR_DRBG_Upda_fu_169_ap_start();
    void thread_grp_AES256_ECB_1_fu_181_ap_start();
    void thread_i_4_fu_288_p2();
    void thread_icmp_fu_261_p2();
    void thread_j_1_fu_239_p2();
    void thread_j_cast_fu_216_p1();
    void thread_loop1_cast_fu_309_p1();
    void thread_loop_1_fu_277_p2();
    void thread_loop_2_fu_323_p2();
    void thread_loop_cast1_fu_267_p1();
    void thread_tmp_10_fu_339_p1();
    void thread_tmp_13_fu_220_p3();
    void thread_tmp_14_fu_252_p4();
    void thread_tmp_1_fu_344_p2();
    void thread_tmp_2_fu_228_p1();
    void thread_tmp_3_fu_233_p2();
    void thread_tmp_4_fu_245_p2();
    void thread_tmp_5_fu_349_p1();
    void thread_tmp_6_fu_313_p1();
    void thread_tmp_7_fu_318_p2();
    void thread_tmp_8_fu_283_p1();
    void thread_tmp_9_fu_334_p2();
    void thread_tmp_fu_210_p2();
    void thread_tmp_s_fu_358_p2();
    void thread_x_address0();
    void thread_x_ce0();
    void thread_x_d0();
    void thread_x_we0();
    void thread_xlen_assign_fu_294_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
