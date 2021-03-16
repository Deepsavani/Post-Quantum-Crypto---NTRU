// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _mod3_HH_
#define _mod3_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct mod3 : public sc_module {
    // Port declarations 3
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > a;
    sc_out< sc_lv<16> > ap_return;


    // Module declarations
    mod3(sc_module_name name);
    SC_HAS_PROCESS(mod3);

    ~mod3();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<4> > tmp_74_fu_38_p4;
    sc_signal< sc_lv<4> > tmp_fu_52_p1;
    sc_signal< sc_lv<5> > tmp_82_cast_fu_56_p1;
    sc_signal< sc_lv<5> > tmp_81_cast_fu_48_p1;
    sc_signal< sc_lv<5> > r_1_fu_66_p2;
    sc_signal< sc_lv<3> > tmp_77_fu_72_p4;
    sc_signal< sc_lv<2> > tmp_s_fu_90_p4;
    sc_signal< sc_lv<2> > tmp_95_fu_86_p1;
    sc_signal< sc_lv<2> > fold1_cast_fu_100_p2;
    sc_signal< sc_lv<4> > tmp_84_cast_fu_106_p1;
    sc_signal< sc_lv<4> > tmp_83_cast_fu_82_p1;
    sc_signal< sc_lv<4> > r_2_fu_110_p2;
    sc_signal< sc_lv<2> > tmp_78_fu_116_p4;
    sc_signal< sc_lv<4> > tmp_76_fu_60_p2;
    sc_signal< sc_lv<2> > tmp_75_fu_130_p4;
    sc_signal< sc_lv<2> > fold2_cast_fu_140_p2;
    sc_signal< sc_lv<3> > tmp_86_cast_fu_146_p1;
    sc_signal< sc_lv<3> > tmp_85_cast_fu_126_p1;
    sc_signal< sc_lv<3> > r_3_fu_150_p2;
    sc_signal< sc_lv<3> > t_fu_156_p2;
    sc_signal< sc_lv<1> > tmp_96_fu_162_p3;
    sc_signal< sc_lv<3> > c_cast_fu_170_p3;
    sc_signal< sc_lv<3> > tmp_79_fu_178_p2;
    sc_signal< sc_lv<1> > not_tmp_s_fu_188_p2;
    sc_signal< sc_lv<3> > tmp_88_cast_cast_fu_194_p3;
    sc_signal< sc_lv<3> > tmp_80_fu_202_p2;
    sc_signal< sc_lv<16> > tmp_87_cast_fu_184_p1;
    sc_signal< sc_lv<16> > tmp_89_cast_fu_208_p1;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return();
    void thread_c_cast_fu_170_p3();
    void thread_fold1_cast_fu_100_p2();
    void thread_fold2_cast_fu_140_p2();
    void thread_not_tmp_s_fu_188_p2();
    void thread_r_1_fu_66_p2();
    void thread_r_2_fu_110_p2();
    void thread_r_3_fu_150_p2();
    void thread_t_fu_156_p2();
    void thread_tmp_74_fu_38_p4();
    void thread_tmp_75_fu_130_p4();
    void thread_tmp_76_fu_60_p2();
    void thread_tmp_77_fu_72_p4();
    void thread_tmp_78_fu_116_p4();
    void thread_tmp_79_fu_178_p2();
    void thread_tmp_80_fu_202_p2();
    void thread_tmp_81_cast_fu_48_p1();
    void thread_tmp_82_cast_fu_56_p1();
    void thread_tmp_83_cast_fu_82_p1();
    void thread_tmp_84_cast_fu_106_p1();
    void thread_tmp_85_cast_fu_126_p1();
    void thread_tmp_86_cast_fu_146_p1();
    void thread_tmp_87_cast_fu_184_p1();
    void thread_tmp_88_cast_cast_fu_194_p3();
    void thread_tmp_89_cast_fu_208_p1();
    void thread_tmp_95_fu_86_p1();
    void thread_tmp_96_fu_162_p3();
    void thread_tmp_fu_52_p1();
    void thread_tmp_s_fu_90_p4();
};

}

using namespace ap_rtl;

#endif
