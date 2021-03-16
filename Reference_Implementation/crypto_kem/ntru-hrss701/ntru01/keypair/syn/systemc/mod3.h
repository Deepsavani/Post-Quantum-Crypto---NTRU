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
    sc_in< sc_lv<16> > a;
    sc_out< sc_lv<16> > ap_return;


    // Module declarations
    mod3(sc_module_name name);
    SC_HAS_PROCESS(mod3);

    ~mod3();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<8> > tmp_fu_52_p4;
    sc_signal< sc_lv<8> > tmp_344_fu_66_p1;
    sc_signal< sc_lv<9> > tmp_cast_79_fu_70_p1;
    sc_signal< sc_lv<9> > tmp_cast_fu_62_p1;
    sc_signal< sc_lv<9> > r_fu_80_p2;
    sc_signal< sc_lv<5> > tmp_208_fu_86_p4;
    sc_signal< sc_lv<4> > tmp_47_fu_104_p4;
    sc_signal< sc_lv<4> > tmp_345_fu_100_p1;
    sc_signal< sc_lv<4> > fold_cast_fu_128_p2;
    sc_signal< sc_lv<6> > tmp_298_cast_fu_134_p1;
    sc_signal< sc_lv<6> > tmp_297_cast_fu_96_p1;
    sc_signal< sc_lv<6> > r_1_fu_138_p2;
    sc_signal< sc_lv<2> > tmp_48_fu_114_p4;
    sc_signal< sc_lv<2> > tmp_346_fu_124_p1;
    sc_signal< sc_lv<8> > tmp_207_fu_74_p2;
    sc_signal< sc_lv<2> > tmp_51_fu_160_p4;
    sc_signal< sc_lv<2> > tmp_50_fu_154_p2;
    sc_signal< sc_lv<2> > fold1_cast_fu_170_p2;
    sc_signal< sc_lv<4> > tmp_300_cast_fu_176_p1;
    sc_signal< sc_lv<4> > tmp_299_cast_fu_144_p4;
    sc_signal< sc_lv<4> > r_2_fu_180_p2;
    sc_signal< sc_lv<2> > tmp_209_fu_186_p4;
    sc_signal< sc_lv<2> > tmp_52_fu_200_p4;
    sc_signal< sc_lv<2> > fold2_cast_fu_210_p2;
    sc_signal< sc_lv<3> > tmp_302_cast_fu_216_p1;
    sc_signal< sc_lv<3> > tmp_301_cast_fu_196_p1;
    sc_signal< sc_lv<3> > r_3_fu_220_p2;
    sc_signal< sc_lv<3> > t_fu_226_p2;
    sc_signal< sc_lv<1> > tmp_347_fu_232_p3;
    sc_signal< sc_lv<3> > c_cast_fu_240_p3;
    sc_signal< sc_lv<3> > tmp_s_fu_248_p2;
    sc_signal< sc_lv<1> > not_tmp_s_fu_258_p2;
    sc_signal< sc_lv<3> > tmp_304_cast_cast_fu_264_p3;
    sc_signal< sc_lv<3> > tmp_243_fu_272_p2;
    sc_signal< sc_lv<16> > tmp_303_cast_fu_254_p1;
    sc_signal< sc_lv<16> > tmp_305_cast_fu_278_p1;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_9;
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
    void thread_c_cast_fu_240_p3();
    void thread_fold1_cast_fu_170_p2();
    void thread_fold2_cast_fu_210_p2();
    void thread_fold_cast_fu_128_p2();
    void thread_not_tmp_s_fu_258_p2();
    void thread_r_1_fu_138_p2();
    void thread_r_2_fu_180_p2();
    void thread_r_3_fu_220_p2();
    void thread_r_fu_80_p2();
    void thread_t_fu_226_p2();
    void thread_tmp_207_fu_74_p2();
    void thread_tmp_208_fu_86_p4();
    void thread_tmp_209_fu_186_p4();
    void thread_tmp_243_fu_272_p2();
    void thread_tmp_297_cast_fu_96_p1();
    void thread_tmp_298_cast_fu_134_p1();
    void thread_tmp_299_cast_fu_144_p4();
    void thread_tmp_300_cast_fu_176_p1();
    void thread_tmp_301_cast_fu_196_p1();
    void thread_tmp_302_cast_fu_216_p1();
    void thread_tmp_303_cast_fu_254_p1();
    void thread_tmp_304_cast_cast_fu_264_p3();
    void thread_tmp_305_cast_fu_278_p1();
    void thread_tmp_344_fu_66_p1();
    void thread_tmp_345_fu_100_p1();
    void thread_tmp_346_fu_124_p1();
    void thread_tmp_347_fu_232_p3();
    void thread_tmp_47_fu_104_p4();
    void thread_tmp_48_fu_114_p4();
    void thread_tmp_50_fu_154_p2();
    void thread_tmp_51_fu_160_p4();
    void thread_tmp_52_fu_200_p4();
    void thread_tmp_cast_79_fu_70_p1();
    void thread_tmp_cast_fu_62_p1();
    void thread_tmp_fu_52_p4();
    void thread_tmp_s_fu_248_p2();
};

}

using namespace ap_rtl;

#endif
