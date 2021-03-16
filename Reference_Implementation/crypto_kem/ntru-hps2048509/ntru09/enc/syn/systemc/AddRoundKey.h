// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AddRoundKey_HH_
#define _AddRoundKey_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct AddRoundKey : public sc_module {
    // Port declarations 15
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<6> > round;
    sc_out< sc_lv<4> > state_address0;
    sc_out< sc_logic > state_ce0;
    sc_out< sc_logic > state_we0;
    sc_out< sc_lv<8> > state_d0;
    sc_in< sc_lv<8> > state_q0;
    sc_out< sc_lv<8> > RoundKey_address0;
    sc_out< sc_logic > RoundKey_ce0;
    sc_in< sc_lv<8> > RoundKey_q0;


    // Module declarations
    AddRoundKey(sc_module_name name);
    SC_HAS_PROCESS(AddRoundKey);

    ~AddRoundKey();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > i_23_fu_98_p2;
    sc_signal< sc_lv<3> > i_23_reg_194;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > tmp_464_fu_108_p3;
    sc_signal< sc_lv<4> > tmp_464_reg_199;
    sc_signal< sc_lv<1> > tmp_s_fu_92_p2;
    sc_signal< sc_lv<6> > tmp_256_cast_fu_124_p1;
    sc_signal< sc_lv<6> > tmp_256_cast_reg_204;
    sc_signal< sc_lv<3> > j_8_fu_134_p2;
    sc_signal< sc_lv<3> > j_8_reg_212;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_465_fu_128_p2;
    sc_signal< sc_lv<4> > state_addr_reg_222;
    sc_signal< sc_lv<3> > i_reg_70;
    sc_signal< sc_lv<3> > j_reg_81;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > tmp_467_fu_160_p1;
    sc_signal< sc_lv<64> > tmp_257_cast_fu_174_p1;
    sc_signal< sc_lv<2> > tmp_fu_104_p1;
    sc_signal< sc_lv<5> > tmp_255_fu_116_p3;
    sc_signal< sc_lv<4> > tmp_689_cast_fu_140_p1;
    sc_signal< sc_lv<4> > tmp_535_fu_149_p1;
    sc_signal< sc_lv<4> > tmp1_fu_144_p2;
    sc_signal< sc_lv<8> > tmp_466_fu_152_p3;
    sc_signal< sc_lv<6> > tmp_471_cast_fu_165_p1;
    sc_signal< sc_lv<6> > tmp_257_fu_169_p2;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_RoundKey_address0();
    void thread_RoundKey_ce0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_23_fu_98_p2();
    void thread_j_8_fu_134_p2();
    void thread_state_address0();
    void thread_state_ce0();
    void thread_state_d0();
    void thread_state_we0();
    void thread_tmp1_fu_144_p2();
    void thread_tmp_255_fu_116_p3();
    void thread_tmp_256_cast_fu_124_p1();
    void thread_tmp_257_cast_fu_174_p1();
    void thread_tmp_257_fu_169_p2();
    void thread_tmp_464_fu_108_p3();
    void thread_tmp_465_fu_128_p2();
    void thread_tmp_466_fu_152_p3();
    void thread_tmp_467_fu_160_p1();
    void thread_tmp_471_cast_fu_165_p1();
    void thread_tmp_535_fu_149_p1();
    void thread_tmp_689_cast_fu_140_p1();
    void thread_tmp_fu_104_p1();
    void thread_tmp_s_fu_92_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
