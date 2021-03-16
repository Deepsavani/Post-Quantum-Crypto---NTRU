// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sha3_256_HH_
#define _sha3_256_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "keccak_absorb_1.h"
#include "KeccakF1600_StatePer.h"
#include "sha3_256_1_s.h"
#include "sha3_256_1_h_assign.h"

namespace ap_rtl {

struct sha3_256 : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<9> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<8> > output_r_d0;
    sc_out< sc_lv<10> > input_r_address0;
    sc_out< sc_logic > input_r_ce0;
    sc_in< sc_lv<8> > input_r_q0;


    // Module declarations
    sha3_256(sc_module_name name);
    SC_HAS_PROCESS(sha3_256);

    ~sha3_256();

    sc_trace_file* mVcdFile;

    sha3_256_1_s* s_U;
    sha3_256_1_h_assign* h_assign_U;
    keccak_absorb_1* grp_keccak_absorb_1_fu_146;
    KeccakF1600_StatePer* grp_KeccakF1600_StatePer_fu_156;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > i_20_i_fu_169_p2;
    sc_signal< sc_lv<5> > i_20_i_reg_253;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > exitcond_i_fu_163_p2;
    sc_signal< sc_lv<8> > tmp_i_fu_180_p3;
    sc_signal< sc_lv<8> > tmp_i_reg_263;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > s_q0;
    sc_signal< sc_lv<4> > i_3_fu_194_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<64> > tmp_2_fu_229_p1;
    sc_signal< sc_lv<1> > tmp_i_i_fu_188_p2;
    sc_signal< sc_lv<64> > i_cast1_fu_233_p1;
    sc_signal< sc_lv<64> > i_cast1_reg_286;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<6> > i_2_fu_244_p2;
    sc_signal< sc_lv<6> > i_2_reg_294;
    sc_signal< sc_lv<1> > tmp_fu_238_p2;
    sc_signal< sc_lv<5> > s_address0;
    sc_signal< sc_logic > s_ce0;
    sc_signal< sc_logic > s_we0;
    sc_signal< sc_lv<64> > s_d0;
    sc_signal< sc_lv<5> > s_address1;
    sc_signal< sc_logic > s_ce1;
    sc_signal< sc_logic > s_we1;
    sc_signal< sc_lv<64> > s_d1;
    sc_signal< sc_lv<64> > s_q1;
    sc_signal< sc_lv<8> > h_assign_address0;
    sc_signal< sc_logic > h_assign_ce0;
    sc_signal< sc_logic > h_assign_we0;
    sc_signal< sc_lv<8> > h_assign_d0;
    sc_signal< sc_lv<8> > h_assign_q0;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_ap_start;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_ap_done;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_ap_idle;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_ap_ready;
    sc_signal< sc_lv<5> > grp_keccak_absorb_1_fu_146_s_address0;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_s_ce0;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_s_we0;
    sc_signal< sc_lv<64> > grp_keccak_absorb_1_fu_146_s_d0;
    sc_signal< sc_lv<5> > grp_keccak_absorb_1_fu_146_s_address1;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_s_ce1;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_s_we1;
    sc_signal< sc_lv<64> > grp_keccak_absorb_1_fu_146_s_d1;
    sc_signal< sc_lv<10> > grp_keccak_absorb_1_fu_146_m_address0;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_m_ce0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_ap_start;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_ap_done;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_ap_idle;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_ap_ready;
    sc_signal< sc_lv<5> > grp_KeccakF1600_StatePer_fu_156_state_address0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_state_ce0;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_state_we0;
    sc_signal< sc_lv<64> > grp_KeccakF1600_StatePer_fu_156_state_d0;
    sc_signal< sc_lv<5> > grp_KeccakF1600_StatePer_fu_156_state_address1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_state_ce1;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_state_we1;
    sc_signal< sc_lv<64> > grp_KeccakF1600_StatePer_fu_156_state_d1;
    sc_signal< sc_lv<5> > i_i_reg_103;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > p_0_i_i_reg_115;
    sc_signal< sc_lv<4> > i_i_i_reg_124;
    sc_signal< sc_lv<6> > i_reg_135;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_146_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_KeccakF1600_StatePer_fu_156_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > tmp_248_i_fu_175_p1;
    sc_signal< sc_lv<64> > sum_i_i_cast_fu_214_p1;
    sc_signal< sc_lv<8> > tmp_2_i_i_cast_fu_205_p1;
    sc_signal< sc_lv<8> > sum_i_i_fu_209_p2;
    sc_signal< sc_lv<56> > u_assign_2_fu_219_p4;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<5> ap_const_lv5_11;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
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
    void thread_exitcond_i_fu_163_p2();
    void thread_grp_KeccakF1600_StatePer_fu_156_ap_start();
    void thread_grp_keccak_absorb_1_fu_146_ap_start();
    void thread_h_assign_address0();
    void thread_h_assign_ce0();
    void thread_h_assign_d0();
    void thread_h_assign_we0();
    void thread_i_20_i_fu_169_p2();
    void thread_i_2_fu_244_p2();
    void thread_i_3_fu_194_p2();
    void thread_i_cast1_fu_233_p1();
    void thread_input_r_address0();
    void thread_input_r_ce0();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_s_address0();
    void thread_s_address1();
    void thread_s_ce0();
    void thread_s_ce1();
    void thread_s_d0();
    void thread_s_d1();
    void thread_s_we0();
    void thread_s_we1();
    void thread_sum_i_i_cast_fu_214_p1();
    void thread_sum_i_i_fu_209_p2();
    void thread_tmp_248_i_fu_175_p1();
    void thread_tmp_2_fu_229_p1();
    void thread_tmp_2_i_i_cast_fu_205_p1();
    void thread_tmp_fu_238_p2();
    void thread_tmp_i_fu_180_p3();
    void thread_tmp_i_i_fu_188_p2();
    void thread_u_assign_2_fu_219_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
