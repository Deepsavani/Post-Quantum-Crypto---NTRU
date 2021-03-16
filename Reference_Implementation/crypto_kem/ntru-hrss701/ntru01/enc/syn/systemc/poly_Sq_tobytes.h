// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_Sq_tobytes_HH_
#define _poly_Sq_tobytes_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "poly_Sq_tobytes_t.h"

namespace ap_rtl {

struct poly_Sq_tobytes : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<11> > r_address0;
    sc_out< sc_logic > r_ce0;
    sc_out< sc_logic > r_we0;
    sc_out< sc_lv<8> > r_d0;
    sc_out< sc_lv<11> > r_address1;
    sc_out< sc_logic > r_ce1;
    sc_out< sc_logic > r_we1;
    sc_out< sc_lv<8> > r_d1;
    sc_out< sc_lv<10> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;


    // Module declarations
    poly_Sq_tobytes(sc_module_name name);
    SC_HAS_PROCESS(poly_Sq_tobytes);

    ~poly_Sq_tobytes();

    sc_trace_file* mVcdFile;

    poly_Sq_tobytes_t* t_U;
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<11> > next_mul_fu_568_p2;
    sc_signal< sc_lv<11> > next_mul_reg_1252;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > tmp_66_fu_580_p2;
    sc_signal< sc_lv<7> > tmp_66_reg_1260;
    sc_signal< sc_lv<10> > tmp_fu_586_p3;
    sc_signal< sc_lv<10> > tmp_reg_1265;
    sc_signal< sc_lv<1> > exitcond3_fu_574_p2;
    sc_signal< sc_lv<4> > j_3_fu_604_p2;
    sc_signal< sc_lv<4> > j_3_reg_1273;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond2_fu_598_p2;
    sc_signal< sc_lv<8> > tmp_55_reg_1283;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<5> > tmp_70_reg_1288;
    sc_signal< sc_lv<8> > grp_fu_528_p4;
    sc_signal< sc_lv<8> > tmp_20_reg_1293;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<7> > grp_fu_550_p4;
    sc_signal< sc_lv<7> > tmp_88_reg_1298;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<4> > tmp_100_reg_1303;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<8> > tmp_29_reg_1308;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<6> > tmp_123_reg_1313;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<3> > tmp_46_fu_1045_p2;
    sc_signal< sc_lv<3> > tmp_46_reg_1321;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<1> > exitcond1_fu_1039_p2;
    sc_signal< sc_lv<4> > j_4_fu_1080_p2;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > exitcond_fu_1069_p2;
    sc_signal< sc_lv<1> > tmp_132_fu_1113_p1;
    sc_signal< sc_lv<1> > tmp_132_reg_1339;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<3> > tmp_133_fu_1131_p1;
    sc_signal< sc_lv<3> > tmp_133_reg_1344;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<3> > grp_fu_518_p4;
    sc_signal< sc_lv<3> > tmp_137_reg_1349;
    sc_signal< sc_lv<3> > tmp_138_fu_1177_p1;
    sc_signal< sc_lv<3> > tmp_138_reg_1354;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<3> > t_address0;
    sc_signal< sc_logic > t_ce0;
    sc_signal< sc_logic > t_we0;
    sc_signal< sc_lv<16> > t_d0;
    sc_signal< sc_lv<16> > t_q0;
    sc_signal< sc_lv<3> > t_address1;
    sc_signal< sc_logic > t_ce1;
    sc_signal< sc_logic > t_we1;
    sc_signal< sc_lv<16> > t_q1;
    sc_signal< sc_lv<7> > i_reg_460;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<11> > phi_mul_reg_471;
    sc_signal< sc_lv<4> > j_reg_483;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<3> > j_1_reg_495;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<4> > j_2_reg_507;
    sc_signal< sc_lv<64> > tmp_118_fu_615_p1;
    sc_signal< sc_lv<64> > tmp_119_fu_620_p1;
    sc_signal< sc_lv<64> > tmp_49_fu_630_p1;
    sc_signal< sc_lv<64> > tmp_53_fu_670_p1;
    sc_signal< sc_lv<64> > tmp_57_fu_701_p1;
    sc_signal< sc_lv<64> > tmp_62_fu_738_p1;
    sc_signal< sc_lv<64> > tmp_65_fu_767_p1;
    sc_signal< sc_lv<64> > tmp_69_fu_778_p1;
    sc_signal< sc_lv<64> > tmp_76_fu_815_p1;
    sc_signal< sc_lv<64> > tmp_83_fu_837_p1;
    sc_signal< sc_lv<64> > tmp_87_fu_894_p1;
    sc_signal< sc_lv<64> > tmp_94_fu_933_p1;
    sc_signal< sc_lv<64> > tmp_98_fu_955_p1;
    sc_signal< sc_lv<64> > tmp_105_fu_1012_p1;
    sc_signal< sc_lv<64> > tmp_114_fu_1034_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_1059_p1;
    sc_signal< sc_lv<64> > tmp_45_fu_1064_p1;
    sc_signal< sc_lv<64> > tmp_122_fu_1075_p1;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<8> > tmp_72_fu_625_p1;
    sc_signal< sc_lv<8> > tmp_51_fu_657_p2;
    sc_signal< sc_lv<8> > tmp_60_fu_723_p3;
    sc_signal< sc_lv<8> > tmp_63_fu_755_p2;
    sc_signal< sc_lv<8> > tmp_74_fu_800_p3;
    sc_signal< sc_lv<8> > tmp_85_fu_879_p3;
    sc_signal< sc_lv<8> > tmp_92_fu_921_p2;
    sc_signal< sc_lv<8> > tmp_103_fu_997_p3;
    sc_signal< sc_lv<8> > tmp_71_fu_1104_p3;
    sc_signal< sc_lv<8> > tmp_89_fu_1124_p2;
    sc_signal< sc_lv<8> > tmp_101_fu_1158_p3;
    sc_signal< sc_lv<8> > tmp_120_fu_1198_p2;
    sc_signal< sc_lv<8> > tmp_139_fu_1205_p1;
    sc_signal< sc_lv<10> > j_cast6_fu_594_p1;
    sc_signal< sc_lv<10> > tmp_117_fu_610_p2;
    sc_signal< sc_lv<3> > tmp_84_fu_645_p1;
    sc_signal< sc_lv<8> > tmp_15_fu_649_p3;
    sc_signal< sc_lv<8> > tmp_14_fu_635_p4;
    sc_signal< sc_lv<11> > tmp_52_fu_664_p2;
    sc_signal< sc_lv<11> > tmp_56_fu_695_p2;
    sc_signal< sc_lv<3> > tmp_90_fu_706_p1;
    sc_signal< sc_lv<5> > tmp_77_fu_710_p3;
    sc_signal< sc_lv<5> > tmp_78_fu_718_p2;
    sc_signal< sc_lv<11> > tmp_61_fu_732_p2;
    sc_signal< sc_lv<1> > tmp_99_fu_743_p1;
    sc_signal< sc_lv<8> > tmp_21_fu_747_p3;
    sc_signal< sc_lv<11> > tmp_64_fu_761_p2;
    sc_signal< sc_lv<11> > tmp_68_fu_772_p2;
    sc_signal< sc_lv<3> > tmp_102_fu_783_p1;
    sc_signal< sc_lv<7> > tmp_91_fu_787_p3;
    sc_signal< sc_lv<1> > grp_fu_560_p3;
    sc_signal< sc_lv<7> > tmp_95_fu_795_p2;
    sc_signal< sc_lv<11> > tmp_75_fu_809_p2;
    sc_signal< sc_lv<11> > tmp_82_fu_831_p2;
    sc_signal< sc_lv<3> > tmp_115_fu_852_p1;
    sc_signal< sc_lv<4> > tmp_106_fu_856_p3;
    sc_signal< sc_lv<4> > tmp_110_fu_869_p4;
    sc_signal< sc_lv<4> > tmp_109_fu_864_p2;
    sc_signal< sc_lv<11> > tmp_86_fu_888_p2;
    sc_signal< sc_lv<2> > tmp_116_fu_909_p1;
    sc_signal< sc_lv<8> > tmp_30_fu_913_p3;
    sc_signal< sc_lv<11> > tmp_93_fu_927_p2;
    sc_signal< sc_lv<11> > tmp_97_fu_949_p2;
    sc_signal< sc_lv<3> > tmp_121_fu_970_p1;
    sc_signal< sc_lv<6> > tmp_124_fu_974_p3;
    sc_signal< sc_lv<2> > tmp_126_fu_987_p4;
    sc_signal< sc_lv<6> > tmp_125_fu_982_p2;
    sc_signal< sc_lv<11> > tmp_104_fu_1006_p2;
    sc_signal< sc_lv<11> > tmp_113_fu_1028_p2;
    sc_signal< sc_lv<10> > tmp_32_fu_1051_p3;
    sc_signal< sc_lv<3> > tmp_127_fu_1086_p1;
    sc_signal< sc_lv<7> > tmp_129_fu_1090_p3;
    sc_signal< sc_lv<7> > tmp_130_fu_1098_p2;
    sc_signal< sc_lv<8> > tmp_79_fu_1117_p3;
    sc_signal< sc_lv<5> > tmp_135_fu_1145_p3;
    sc_signal< sc_lv<5> > tmp_134_fu_1135_p4;
    sc_signal< sc_lv<5> > tmp_136_fu_1152_p2;
    sc_signal< sc_lv<8> > tmp_12_fu_1188_p4;
    sc_signal< sc_lv<8> > tmp_108_fu_1181_p3;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<18> ap_ST_fsm_state1;
    static const sc_lv<18> ap_ST_fsm_state2;
    static const sc_lv<18> ap_ST_fsm_state3;
    static const sc_lv<18> ap_ST_fsm_state4;
    static const sc_lv<18> ap_ST_fsm_state5;
    static const sc_lv<18> ap_ST_fsm_state6;
    static const sc_lv<18> ap_ST_fsm_state7;
    static const sc_lv<18> ap_ST_fsm_state8;
    static const sc_lv<18> ap_ST_fsm_state9;
    static const sc_lv<18> ap_ST_fsm_state10;
    static const sc_lv<18> ap_ST_fsm_state11;
    static const sc_lv<18> ap_ST_fsm_state12;
    static const sc_lv<18> ap_ST_fsm_state13;
    static const sc_lv<18> ap_ST_fsm_state14;
    static const sc_lv<18> ap_ST_fsm_state15;
    static const sc_lv<18> ap_ST_fsm_state16;
    static const sc_lv<18> ap_ST_fsm_state17;
    static const sc_lv<18> ap_ST_fsm_state18;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_471;
    static const sc_lv<64> ap_const_lv64_470;
    static const sc_lv<64> ap_const_lv64_46F;
    static const sc_lv<64> ap_const_lv64_46E;
    static const sc_lv<64> ap_const_lv64_46D;
    static const sc_lv<64> ap_const_lv64_46C;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<64> ap_const_lv64_46B;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<11> ap_const_lv11_D;
    static const sc_lv<7> ap_const_lv7_57;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<11> ap_const_lv11_2;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<11> ap_const_lv11_3;
    static const sc_lv<11> ap_const_lv11_4;
    static const sc_lv<11> ap_const_lv11_5;
    static const sc_lv<11> ap_const_lv11_6;
    static const sc_lv<11> ap_const_lv11_7;
    static const sc_lv<11> ap_const_lv11_8;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<11> ap_const_lv11_9;
    static const sc_lv<11> ap_const_lv11_A;
    static const sc_lv<11> ap_const_lv11_B;
    static const sc_lv<11> ap_const_lv11_C;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_coeffs_address0();
    void thread_a_coeffs_ce0();
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
    void thread_exitcond1_fu_1039_p2();
    void thread_exitcond2_fu_598_p2();
    void thread_exitcond3_fu_574_p2();
    void thread_exitcond_fu_1069_p2();
    void thread_grp_fu_518_p4();
    void thread_grp_fu_528_p4();
    void thread_grp_fu_550_p4();
    void thread_grp_fu_560_p3();
    void thread_j_3_fu_604_p2();
    void thread_j_4_fu_1080_p2();
    void thread_j_cast6_fu_594_p1();
    void thread_next_mul_fu_568_p2();
    void thread_r_address0();
    void thread_r_address1();
    void thread_r_ce0();
    void thread_r_ce1();
    void thread_r_d0();
    void thread_r_d1();
    void thread_r_we0();
    void thread_r_we1();
    void thread_t_address0();
    void thread_t_address1();
    void thread_t_ce0();
    void thread_t_ce1();
    void thread_t_d0();
    void thread_t_we0();
    void thread_t_we1();
    void thread_tmp_101_fu_1158_p3();
    void thread_tmp_102_fu_783_p1();
    void thread_tmp_103_fu_997_p3();
    void thread_tmp_104_fu_1006_p2();
    void thread_tmp_105_fu_1012_p1();
    void thread_tmp_106_fu_856_p3();
    void thread_tmp_108_fu_1181_p3();
    void thread_tmp_109_fu_864_p2();
    void thread_tmp_110_fu_869_p4();
    void thread_tmp_113_fu_1028_p2();
    void thread_tmp_114_fu_1034_p1();
    void thread_tmp_115_fu_852_p1();
    void thread_tmp_116_fu_909_p1();
    void thread_tmp_117_fu_610_p2();
    void thread_tmp_118_fu_615_p1();
    void thread_tmp_119_fu_620_p1();
    void thread_tmp_120_fu_1198_p2();
    void thread_tmp_121_fu_970_p1();
    void thread_tmp_122_fu_1075_p1();
    void thread_tmp_124_fu_974_p3();
    void thread_tmp_125_fu_982_p2();
    void thread_tmp_126_fu_987_p4();
    void thread_tmp_127_fu_1086_p1();
    void thread_tmp_129_fu_1090_p3();
    void thread_tmp_12_fu_1188_p4();
    void thread_tmp_130_fu_1098_p2();
    void thread_tmp_132_fu_1113_p1();
    void thread_tmp_133_fu_1131_p1();
    void thread_tmp_134_fu_1135_p4();
    void thread_tmp_135_fu_1145_p3();
    void thread_tmp_136_fu_1152_p2();
    void thread_tmp_138_fu_1177_p1();
    void thread_tmp_139_fu_1205_p1();
    void thread_tmp_14_fu_635_p4();
    void thread_tmp_15_fu_649_p3();
    void thread_tmp_21_fu_747_p3();
    void thread_tmp_30_fu_913_p3();
    void thread_tmp_32_fu_1051_p3();
    void thread_tmp_45_fu_1064_p1();
    void thread_tmp_46_fu_1045_p2();
    void thread_tmp_49_fu_630_p1();
    void thread_tmp_51_fu_657_p2();
    void thread_tmp_52_fu_664_p2();
    void thread_tmp_53_fu_670_p1();
    void thread_tmp_56_fu_695_p2();
    void thread_tmp_57_fu_701_p1();
    void thread_tmp_60_fu_723_p3();
    void thread_tmp_61_fu_732_p2();
    void thread_tmp_62_fu_738_p1();
    void thread_tmp_63_fu_755_p2();
    void thread_tmp_64_fu_761_p2();
    void thread_tmp_65_fu_767_p1();
    void thread_tmp_66_fu_580_p2();
    void thread_tmp_68_fu_772_p2();
    void thread_tmp_69_fu_778_p1();
    void thread_tmp_71_fu_1104_p3();
    void thread_tmp_72_fu_625_p1();
    void thread_tmp_74_fu_800_p3();
    void thread_tmp_75_fu_809_p2();
    void thread_tmp_76_fu_815_p1();
    void thread_tmp_77_fu_710_p3();
    void thread_tmp_78_fu_718_p2();
    void thread_tmp_79_fu_1117_p3();
    void thread_tmp_82_fu_831_p2();
    void thread_tmp_83_fu_837_p1();
    void thread_tmp_84_fu_645_p1();
    void thread_tmp_85_fu_879_p3();
    void thread_tmp_86_fu_888_p2();
    void thread_tmp_87_fu_894_p1();
    void thread_tmp_89_fu_1124_p2();
    void thread_tmp_90_fu_706_p1();
    void thread_tmp_91_fu_787_p3();
    void thread_tmp_92_fu_921_p2();
    void thread_tmp_93_fu_927_p2();
    void thread_tmp_94_fu_933_p1();
    void thread_tmp_95_fu_795_p2();
    void thread_tmp_97_fu_949_p2();
    void thread_tmp_98_fu_955_p1();
    void thread_tmp_99_fu_743_p1();
    void thread_tmp_fu_586_p3();
    void thread_tmp_s_fu_1059_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
