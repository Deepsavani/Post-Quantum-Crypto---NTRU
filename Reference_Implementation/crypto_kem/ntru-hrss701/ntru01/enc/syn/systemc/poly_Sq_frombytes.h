// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_Sq_frombytes_HH_
#define _poly_Sq_frombytes_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct poly_Sq_frombytes : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > r_coeffs_address0;
    sc_out< sc_logic > r_coeffs_ce0;
    sc_out< sc_logic > r_coeffs_we0;
    sc_out< sc_lv<16> > r_coeffs_d0;
    sc_out< sc_lv<10> > r_coeffs_address1;
    sc_out< sc_logic > r_coeffs_ce1;
    sc_out< sc_logic > r_coeffs_we1;
    sc_out< sc_lv<16> > r_coeffs_d1;
    sc_out< sc_lv<11> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<8> > a_q0;
    sc_out< sc_lv<11> > a_address1;
    sc_out< sc_logic > a_ce1;
    sc_in< sc_lv<8> > a_q1;


    // Module declarations
    poly_Sq_frombytes(sc_module_name name);
    SC_HAS_PROCESS(poly_Sq_frombytes);

    ~poly_Sq_frombytes();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<13> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > reg_477;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<7> > tmp_s_fu_488_p2;
    sc_signal< sc_lv<7> > tmp_s_reg_1129;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_fu_482_p2;
    sc_signal< sc_lv<10> > tmp_136_fu_527_p3;
    sc_signal< sc_lv<10> > tmp_136_reg_1154;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > grp_fu_459_p4;
    sc_signal< sc_lv<3> > tmp_138_reg_1165;
    sc_signal< sc_lv<6> > tmp_147_reg_1180;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_201_reg_1190;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > tmp_163_reg_1205;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<7> > tmp_172_reg_1220;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<11> > next_mul_fu_851_p2;
    sc_signal< sc_lv<11> > next_mul_reg_1235;
    sc_signal< sc_lv<2> > tmp_178_reg_1240;
    sc_signal< sc_lv<1> > tmp_reg_1255;
    sc_signal< sc_lv<7> > tmp_179_fu_1000_p1;
    sc_signal< sc_lv<7> > tmp_179_reg_1270;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<2> > tmp_195_fu_1068_p1;
    sc_signal< sc_lv<2> > tmp_195_reg_1285;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<5> > tmp_196_fu_1110_p1;
    sc_signal< sc_lv<5> > tmp_196_reg_1295;
    sc_signal< sc_lv<7> > i_reg_435;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<11> > phi_mul_reg_447;
    sc_signal< sc_lv<64> > tmp_132_fu_494_p1;
    sc_signal< sc_lv<64> > tmp_134_fu_505_p1;
    sc_signal< sc_lv<64> > tmp_137_fu_535_p1;
    sc_signal< sc_lv<64> > tmp_140_fu_546_p1;
    sc_signal< sc_lv<64> > tmp_143_fu_557_p1;
    sc_signal< sc_lv<64> > tmp_146_fu_609_p1;
    sc_signal< sc_lv<64> > tmp_149_fu_630_p1;
    sc_signal< sc_lv<64> > tmp_152_fu_656_p1;
    sc_signal< sc_lv<64> > tmp_156_fu_667_p1;
    sc_signal< sc_lv<64> > tmp_159_fu_678_p1;
    sc_signal< sc_lv<64> > tmp_162_fu_730_p1;
    sc_signal< sc_lv<64> > tmp_165_fu_751_p1;
    sc_signal< sc_lv<64> > tmp_168_fu_762_p1;
    sc_signal< sc_lv<64> > tmp_171_fu_814_p1;
    sc_signal< sc_lv<64> > tmp_174_fu_835_p1;
    sc_signal< sc_lv<64> > tmp_181_fu_846_p1;
    sc_signal< sc_lv<64> > tmp_177_fu_878_p1;
    sc_signal< sc_lv<64> > tmp_184_fu_899_p1;
    sc_signal< sc_lv<64> > tmp_190_fu_910_p1;
    sc_signal< sc_lv<64> > tmp_187_fu_962_p1;
    sc_signal< sc_lv<64> > tmp_193_fu_995_p1;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<16> > tmp_135_fu_522_p1;
    sc_signal< sc_lv<16> > tmp_170_cast_fu_599_p1;
    sc_signal< sc_lv<16> > tmp_179_cast_fu_646_p1;
    sc_signal< sc_lv<16> > tmp_193_cast_fu_720_p1;
    sc_signal< sc_lv<16> > tmp_207_cast_fu_804_p1;
    sc_signal< sc_lv<16> > tmp_216_cast_fu_868_p1;
    sc_signal< sc_lv<16> > tmp_230_cast_fu_952_p1;
    sc_signal< sc_lv<16> > tmp_238_cast_fu_985_p1;
    sc_signal< sc_lv<16> > tmp_136_cast_fu_1041_p1;
    sc_signal< sc_lv<16> > tmp_141_cast_fu_1063_p1;
    sc_signal< sc_lv<16> > tmp_149_cast_fu_1105_p1;
    sc_signal< sc_lv<16> > tmp_130_fu_1121_p1;
    sc_signal< sc_lv<11> > tmp_133_fu_499_p2;
    sc_signal< sc_lv<5> > tmp_197_fu_510_p1;
    sc_signal< sc_lv<13> > tmp_35_fu_514_p3;
    sc_signal< sc_lv<11> > tmp_139_fu_540_p2;
    sc_signal< sc_lv<11> > tmp_142_fu_551_p2;
    sc_signal< sc_lv<8> > tmp_198_fu_562_p1;
    sc_signal< sc_lv<11> > tmp_68_fu_577_p3;
    sc_signal< sc_lv<11> > tmp_141_fu_565_p3;
    sc_signal< sc_lv<2> > tmp_199_fu_573_p1;
    sc_signal< sc_lv<11> > tmp_69_fu_585_p2;
    sc_signal< sc_lv<13> > tmp_144_fu_591_p3;
    sc_signal< sc_lv<10> > tmp_145_fu_604_p2;
    sc_signal< sc_lv<11> > tmp_148_fu_624_p2;
    sc_signal< sc_lv<7> > tmp_200_fu_635_p1;
    sc_signal< sc_lv<13> > tmp_150_fu_639_p3;
    sc_signal< sc_lv<10> > tmp_151_fu_651_p2;
    sc_signal< sc_lv<11> > tmp_155_fu_661_p2;
    sc_signal< sc_lv<11> > tmp_158_fu_672_p2;
    sc_signal< sc_lv<8> > tmp_202_fu_683_p1;
    sc_signal< sc_lv<9> > tmp_73_fu_698_p3;
    sc_signal< sc_lv<9> > tmp_157_fu_686_p3;
    sc_signal< sc_lv<4> > tmp_204_fu_694_p1;
    sc_signal< sc_lv<9> > tmp_74_fu_706_p2;
    sc_signal< sc_lv<13> > tmp_160_fu_712_p3;
    sc_signal< sc_lv<10> > tmp_161_fu_725_p2;
    sc_signal< sc_lv<11> > tmp_164_fu_745_p2;
    sc_signal< sc_lv<11> > tmp_167_fu_756_p2;
    sc_signal< sc_lv<8> > tmp_203_fu_767_p1;
    sc_signal< sc_lv<12> > tmp_76_fu_782_p3;
    sc_signal< sc_lv<12> > tmp_166_fu_770_p3;
    sc_signal< sc_lv<1> > tmp_206_fu_778_p1;
    sc_signal< sc_lv<12> > tmp_77_fu_790_p2;
    sc_signal< sc_lv<13> > tmp_169_fu_796_p3;
    sc_signal< sc_lv<10> > tmp_170_fu_809_p2;
    sc_signal< sc_lv<11> > tmp_173_fu_829_p2;
    sc_signal< sc_lv<11> > tmp_180_fu_840_p2;
    sc_signal< sc_lv<6> > tmp_207_fu_857_p1;
    sc_signal< sc_lv<13> > tmp_175_fu_861_p3;
    sc_signal< sc_lv<10> > tmp_176_fu_873_p2;
    sc_signal< sc_lv<11> > tmp_183_fu_893_p2;
    sc_signal< sc_lv<11> > tmp_189_fu_904_p2;
    sc_signal< sc_lv<8> > tmp_205_fu_915_p1;
    sc_signal< sc_lv<10> > tmp_81_fu_930_p3;
    sc_signal< sc_lv<10> > tmp_182_fu_918_p3;
    sc_signal< sc_lv<3> > tmp_208_fu_926_p1;
    sc_signal< sc_lv<10> > tmp_82_fu_938_p2;
    sc_signal< sc_lv<13> > tmp_185_fu_944_p3;
    sc_signal< sc_lv<10> > tmp_186_fu_957_p2;
    sc_signal< sc_lv<5> > tmp_188_fu_967_p4;
    sc_signal< sc_lv<13> > tmp_191_fu_977_p3;
    sc_signal< sc_lv<10> > tmp_192_fu_990_p2;
    sc_signal< sc_lv<8> > tmp_153_fu_1004_p1;
    sc_signal< sc_lv<9> > tmp_60_fu_1019_p3;
    sc_signal< sc_lv<9> > tmp_123_fu_1007_p3;
    sc_signal< sc_lv<4> > tmp_154_fu_1015_p1;
    sc_signal< sc_lv<9> > tmp_61_fu_1027_p2;
    sc_signal< sc_lv<13> > tmp_124_fu_1033_p3;
    sc_signal< sc_lv<6> > tmp_125_fu_1046_p4;
    sc_signal< sc_lv<13> > tmp_126_fu_1056_p3;
    sc_signal< sc_lv<8> > tmp_194_fu_1072_p1;
    sc_signal< sc_lv<11> > tmp_65_fu_1084_p3;
    sc_signal< sc_lv<11> > tmp_128_fu_1076_p3;
    sc_signal< sc_lv<11> > tmp_66_fu_1092_p2;
    sc_signal< sc_lv<13> > tmp_129_fu_1098_p3;
    sc_signal< sc_lv<13> > tmp_33_fu_1114_p3;
    sc_signal< sc_lv<13> > ap_NS_fsm;
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
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<64> ap_const_lv64_46F;
    static const sc_lv<64> ap_const_lv64_470;
    static const sc_lv<64> ap_const_lv64_471;
    static const sc_lv<64> ap_const_lv64_46E;
    static const sc_lv<64> ap_const_lv64_2BB;
    static const sc_lv<64> ap_const_lv64_2BA;
    static const sc_lv<64> ap_const_lv64_46C;
    static const sc_lv<64> ap_const_lv64_46D;
    static const sc_lv<64> ap_const_lv64_2B9;
    static const sc_lv<64> ap_const_lv64_46B;
    static const sc_lv<64> ap_const_lv64_2B8;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<7> ap_const_lv7_57;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<11> ap_const_lv11_2;
    static const sc_lv<11> ap_const_lv11_3;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<11> ap_const_lv11_4;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<11> ap_const_lv11_5;
    static const sc_lv<11> ap_const_lv11_6;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<11> ap_const_lv11_7;
    static const sc_lv<11> ap_const_lv11_8;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<11> ap_const_lv11_9;
    static const sc_lv<11> ap_const_lv11_A;
    static const sc_lv<11> ap_const_lv11_D;
    static const sc_lv<10> ap_const_lv10_5;
    static const sc_lv<11> ap_const_lv11_B;
    static const sc_lv<11> ap_const_lv11_C;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<10> ap_const_lv10_6;
    static const sc_lv<10> ap_const_lv10_7;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_address1();
    void thread_a_ce0();
    void thread_a_ce1();
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
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond_fu_482_p2();
    void thread_grp_fu_459_p4();
    void thread_next_mul_fu_851_p2();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_tmp_123_fu_1007_p3();
    void thread_tmp_124_fu_1033_p3();
    void thread_tmp_125_fu_1046_p4();
    void thread_tmp_126_fu_1056_p3();
    void thread_tmp_128_fu_1076_p3();
    void thread_tmp_129_fu_1098_p3();
    void thread_tmp_130_fu_1121_p1();
    void thread_tmp_132_fu_494_p1();
    void thread_tmp_133_fu_499_p2();
    void thread_tmp_134_fu_505_p1();
    void thread_tmp_135_fu_522_p1();
    void thread_tmp_136_cast_fu_1041_p1();
    void thread_tmp_136_fu_527_p3();
    void thread_tmp_137_fu_535_p1();
    void thread_tmp_139_fu_540_p2();
    void thread_tmp_140_fu_546_p1();
    void thread_tmp_141_cast_fu_1063_p1();
    void thread_tmp_141_fu_565_p3();
    void thread_tmp_142_fu_551_p2();
    void thread_tmp_143_fu_557_p1();
    void thread_tmp_144_fu_591_p3();
    void thread_tmp_145_fu_604_p2();
    void thread_tmp_146_fu_609_p1();
    void thread_tmp_148_fu_624_p2();
    void thread_tmp_149_cast_fu_1105_p1();
    void thread_tmp_149_fu_630_p1();
    void thread_tmp_150_fu_639_p3();
    void thread_tmp_151_fu_651_p2();
    void thread_tmp_152_fu_656_p1();
    void thread_tmp_153_fu_1004_p1();
    void thread_tmp_154_fu_1015_p1();
    void thread_tmp_155_fu_661_p2();
    void thread_tmp_156_fu_667_p1();
    void thread_tmp_157_fu_686_p3();
    void thread_tmp_158_fu_672_p2();
    void thread_tmp_159_fu_678_p1();
    void thread_tmp_160_fu_712_p3();
    void thread_tmp_161_fu_725_p2();
    void thread_tmp_162_fu_730_p1();
    void thread_tmp_164_fu_745_p2();
    void thread_tmp_165_fu_751_p1();
    void thread_tmp_166_fu_770_p3();
    void thread_tmp_167_fu_756_p2();
    void thread_tmp_168_fu_762_p1();
    void thread_tmp_169_fu_796_p3();
    void thread_tmp_170_cast_fu_599_p1();
    void thread_tmp_170_fu_809_p2();
    void thread_tmp_171_fu_814_p1();
    void thread_tmp_173_fu_829_p2();
    void thread_tmp_174_fu_835_p1();
    void thread_tmp_175_fu_861_p3();
    void thread_tmp_176_fu_873_p2();
    void thread_tmp_177_fu_878_p1();
    void thread_tmp_179_cast_fu_646_p1();
    void thread_tmp_179_fu_1000_p1();
    void thread_tmp_180_fu_840_p2();
    void thread_tmp_181_fu_846_p1();
    void thread_tmp_182_fu_918_p3();
    void thread_tmp_183_fu_893_p2();
    void thread_tmp_184_fu_899_p1();
    void thread_tmp_185_fu_944_p3();
    void thread_tmp_186_fu_957_p2();
    void thread_tmp_187_fu_962_p1();
    void thread_tmp_188_fu_967_p4();
    void thread_tmp_189_fu_904_p2();
    void thread_tmp_190_fu_910_p1();
    void thread_tmp_191_fu_977_p3();
    void thread_tmp_192_fu_990_p2();
    void thread_tmp_193_cast_fu_720_p1();
    void thread_tmp_193_fu_995_p1();
    void thread_tmp_194_fu_1072_p1();
    void thread_tmp_195_fu_1068_p1();
    void thread_tmp_196_fu_1110_p1();
    void thread_tmp_197_fu_510_p1();
    void thread_tmp_198_fu_562_p1();
    void thread_tmp_199_fu_573_p1();
    void thread_tmp_200_fu_635_p1();
    void thread_tmp_202_fu_683_p1();
    void thread_tmp_203_fu_767_p1();
    void thread_tmp_204_fu_694_p1();
    void thread_tmp_205_fu_915_p1();
    void thread_tmp_206_fu_778_p1();
    void thread_tmp_207_cast_fu_804_p1();
    void thread_tmp_207_fu_857_p1();
    void thread_tmp_208_fu_926_p1();
    void thread_tmp_216_cast_fu_868_p1();
    void thread_tmp_230_cast_fu_952_p1();
    void thread_tmp_238_cast_fu_985_p1();
    void thread_tmp_33_fu_1114_p3();
    void thread_tmp_35_fu_514_p3();
    void thread_tmp_60_fu_1019_p3();
    void thread_tmp_61_fu_1027_p2();
    void thread_tmp_65_fu_1084_p3();
    void thread_tmp_66_fu_1092_p2();
    void thread_tmp_68_fu_577_p3();
    void thread_tmp_69_fu_585_p2();
    void thread_tmp_73_fu_698_p3();
    void thread_tmp_74_fu_706_p2();
    void thread_tmp_76_fu_782_p3();
    void thread_tmp_77_fu_790_p2();
    void thread_tmp_81_fu_930_p3();
    void thread_tmp_82_fu_938_p2();
    void thread_tmp_s_fu_488_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
