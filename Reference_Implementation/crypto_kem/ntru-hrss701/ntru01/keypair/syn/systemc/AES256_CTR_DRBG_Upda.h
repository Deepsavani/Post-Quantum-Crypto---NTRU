// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AES256_CTR_DRBG_Upda_HH_
#define _AES256_CTR_DRBG_Upda_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "AES256_ECB.h"
#include "AES256_CTR_DRBG_Upda_temp.h"

namespace ap_rtl {

struct AES256_CTR_DRBG_Upda : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > V_address0;
    sc_out< sc_logic > V_ce0;
    sc_out< sc_logic > V_we0;
    sc_out< sc_lv<8> > V_d0;
    sc_in< sc_lv<8> > V_q0;
    sc_out< sc_lv<4> > V_address1;
    sc_out< sc_logic > V_ce1;
    sc_in< sc_lv<8> > V_q1;
    sc_out< sc_lv<5> > DRBG_ctx_Key_address0;
    sc_out< sc_logic > DRBG_ctx_Key_ce0;
    sc_out< sc_logic > DRBG_ctx_Key_we0;
    sc_out< sc_lv<8> > DRBG_ctx_Key_d0;
    sc_in< sc_lv<8> > DRBG_ctx_Key_q0;
    sc_out< sc_lv<5> > DRBG_ctx_Key_address1;
    sc_out< sc_logic > DRBG_ctx_Key_ce1;
    sc_in< sc_lv<8> > DRBG_ctx_Key_q1;


    // Module declarations
    AES256_CTR_DRBG_Upda(sc_module_name name);
    SC_HAS_PROCESS(AES256_CTR_DRBG_Upda);

    ~AES256_CTR_DRBG_Upda();

    sc_trace_file* mVcdFile;

    AES256_CTR_DRBG_Upda_temp* temp_U;
    AES256_ECB* grp_AES256_ECB_fu_171;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > i_44_fu_191_p2;
    sc_signal< sc_lv<2> > i_44_reg_292;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > V_addr_reg_300;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_fu_201_p3;
    sc_signal< sc_lv<5> > j_11_fu_220_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_298_fu_214_p2;
    sc_signal< sc_lv<6> > tmp_303_fu_233_p3;
    sc_signal< sc_lv<6> > tmp_303_reg_313;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<6> > i_25_fu_248_p2;
    sc_signal< sc_lv<6> > i_25_reg_321;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<64> > tmp_s_fu_254_p1;
    sc_signal< sc_lv<64> > tmp_s_reg_326;
    sc_signal< sc_lv<1> > exitcond1_fu_242_p2;
    sc_signal< sc_lv<5> > i_26_fu_265_p2;
    sc_signal< sc_lv<5> > i_26_reg_339;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > exitcond_fu_259_p2;
    sc_signal< sc_lv<6> > temp_address0;
    sc_signal< sc_logic > temp_ce0;
    sc_signal< sc_logic > temp_we0;
    sc_signal< sc_lv<8> > temp_q0;
    sc_signal< sc_logic > temp_ce1;
    sc_signal< sc_logic > temp_we1;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_ap_start;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_ap_done;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_ap_idle;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_ap_ready;
    sc_signal< sc_lv<5> > grp_AES256_ECB_fu_171_key_address0;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_key_ce0;
    sc_signal< sc_lv<5> > grp_AES256_ECB_fu_171_key_address1;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_key_ce1;
    sc_signal< sc_lv<4> > grp_AES256_ECB_fu_171_ctr_address0;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_ctr_ce0;
    sc_signal< sc_lv<4> > grp_AES256_ECB_fu_171_ctr_address1;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_ctr_ce1;
    sc_signal< sc_lv<6> > grp_AES256_ECB_fu_171_buffer_r_address0;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_buffer_r_ce0;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_buffer_r_we0;
    sc_signal< sc_lv<8> > grp_AES256_ECB_fu_171_buffer_r_d0;
    sc_signal< sc_lv<6> > grp_AES256_ECB_fu_171_buffer_r_address1;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_buffer_r_ce1;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_buffer_r_we1;
    sc_signal< sc_lv<8> > grp_AES256_ECB_fu_171_buffer_r_d1;
    sc_signal< sc_lv<2> > i_reg_124;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<5> > j_reg_136;
    sc_signal< sc_lv<1> > exitcond4_fu_185_p2;
    sc_signal< sc_lv<6> > i_2_reg_148;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<5> > i_3_reg_159;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > grp_AES256_ECB_fu_171_ap_start_reg;
    sc_signal< sc_lv<64> > tmp_297_fu_209_p1;
    sc_signal< sc_lv<64> > tmp_301_fu_279_p1;
    sc_signal< sc_lv<64> > tmp_302_fu_284_p1;
    sc_signal< sc_lv<8> > tmp_299_fu_226_p2;
    sc_signal< sc_lv<32> > j_cast_fu_197_p1;
    sc_signal< sc_lv<6> > tmp_300_fu_271_p3;
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
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<5> ap_const_lv5_F;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_DRBG_ctx_Key_address0();
    void thread_DRBG_ctx_Key_address1();
    void thread_DRBG_ctx_Key_ce0();
    void thread_DRBG_ctx_Key_ce1();
    void thread_DRBG_ctx_Key_d0();
    void thread_DRBG_ctx_Key_we0();
    void thread_V_address0();
    void thread_V_address1();
    void thread_V_ce0();
    void thread_V_ce1();
    void thread_V_d0();
    void thread_V_we0();
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
    void thread_exitcond1_fu_242_p2();
    void thread_exitcond4_fu_185_p2();
    void thread_exitcond_fu_259_p2();
    void thread_grp_AES256_ECB_fu_171_ap_start();
    void thread_i_25_fu_248_p2();
    void thread_i_26_fu_265_p2();
    void thread_i_44_fu_191_p2();
    void thread_j_11_fu_220_p2();
    void thread_j_cast_fu_197_p1();
    void thread_temp_address0();
    void thread_temp_ce0();
    void thread_temp_ce1();
    void thread_temp_we0();
    void thread_temp_we1();
    void thread_tmp_297_fu_209_p1();
    void thread_tmp_298_fu_214_p2();
    void thread_tmp_299_fu_226_p2();
    void thread_tmp_300_fu_271_p3();
    void thread_tmp_301_fu_279_p1();
    void thread_tmp_302_fu_284_p1();
    void thread_tmp_303_fu_233_p3();
    void thread_tmp_fu_201_p3();
    void thread_tmp_s_fu_254_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
