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
    sc_out< sc_lv<10> > r_address0;
    sc_out< sc_logic > r_ce0;
    sc_out< sc_logic > r_we0;
    sc_out< sc_lv<8> > r_d0;
    sc_out< sc_lv<10> > r_address1;
    sc_out< sc_logic > r_ce1;
    sc_out< sc_logic > r_we1;
    sc_out< sc_lv<8> > r_d1;
    sc_out< sc_lv<9> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;


    // Module declarations
    poly_Sq_tobytes(sc_module_name name);
    SC_HAS_PROCESS(poly_Sq_tobytes);

    ~poly_Sq_tobytes();

    sc_trace_file* mVcdFile;

    poly_Sq_tobytes_t* t_U;
    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > next_mul_fu_524_p2;
    sc_signal< sc_lv<10> > next_mul_reg_1123;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > tmp_49_fu_536_p2;
    sc_signal< sc_lv<6> > tmp_49_reg_1131;
    sc_signal< sc_lv<9> > tmp_fu_542_p3;
    sc_signal< sc_lv<9> > tmp_reg_1136;
    sc_signal< sc_lv<1> > exitcond3_fu_530_p2;
    sc_signal< sc_lv<4> > j_3_fu_560_p2;
    sc_signal< sc_lv<4> > j_3_reg_1144;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond2_fu_554_p2;
    sc_signal< sc_lv<8> > tmp_13_reg_1154;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<6> > grp_fu_494_p4;
    sc_signal< sc_lv<6> > tmp_30_reg_1159;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<8> > tmp_22_reg_1164;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<7> > tmp_37_reg_1169;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<8> > tmp_83_reg_1174;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<3> > tmp_51_fu_931_p2;
    sc_signal< sc_lv<3> > tmp_51_reg_1182;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<1> > exitcond1_fu_925_p2;
    sc_signal< sc_lv<4> > j_4_fu_970_p2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<1> > exitcond_fu_959_p2;
    sc_signal< sc_lv<5> > tmp_106_fu_995_p1;
    sc_signal< sc_lv<5> > tmp_106_reg_1200;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<2> > grp_fu_504_p4;
    sc_signal< sc_lv<2> > tmp_48_reg_1205;
    sc_signal< sc_lv<2> > tmp_107_fu_1020_p1;
    sc_signal< sc_lv<2> > tmp_107_reg_1210;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<5> > tmp_108_fu_1048_p1;
    sc_signal< sc_lv<5> > tmp_108_reg_1215;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<3> > t_address0;
    sc_signal< sc_logic > t_ce0;
    sc_signal< sc_logic > t_we0;
    sc_signal< sc_lv<16> > t_d0;
    sc_signal< sc_lv<16> > t_q0;
    sc_signal< sc_lv<3> > t_address1;
    sc_signal< sc_logic > t_ce1;
    sc_signal< sc_logic > t_we1;
    sc_signal< sc_lv<16> > t_q1;
    sc_signal< sc_lv<6> > i_reg_425;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<10> > phi_mul_reg_436;
    sc_signal< sc_lv<4> > j_reg_448;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<3> > j_1_reg_460;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<4> > j_2_reg_472;
    sc_signal< sc_lv<64> > tmp_88_fu_571_p1;
    sc_signal< sc_lv<64> > tmp_89_fu_576_p1;
    sc_signal< sc_lv<64> > tmp_53_fu_586_p1;
    sc_signal< sc_lv<64> > tmp_57_fu_626_p1;
    sc_signal< sc_lv<64> > tmp_60_fu_665_p1;
    sc_signal< sc_lv<64> > tmp_63_fu_676_p1;
    sc_signal< sc_lv<64> > tmp_66_fu_713_p1;
    sc_signal< sc_lv<64> > tmp_69_fu_743_p1;
    sc_signal< sc_lv<64> > tmp_72_fu_782_p1;
    sc_signal< sc_lv<64> > tmp_75_fu_804_p1;
    sc_signal< sc_lv<64> > tmp_78_fu_859_p1;
    sc_signal< sc_lv<64> > tmp_82_fu_899_p1;
    sc_signal< sc_lv<64> > tmp_85_fu_920_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_949_p1;
    sc_signal< sc_lv<64> > tmp_50_fu_954_p1;
    sc_signal< sc_lv<64> > tmp_100_fu_965_p1;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<8> > tmp_52_fu_581_p1;
    sc_signal< sc_lv<8> > tmp_55_fu_613_p2;
    sc_signal< sc_lv<8> > tmp_58_fu_653_p2;
    sc_signal< sc_lv<8> > tmp_64_fu_698_p3;
    sc_signal< sc_lv<8> > tmp_67_fu_730_p2;
    sc_signal< sc_lv<8> > tmp_70_fu_770_p2;
    sc_signal< sc_lv<8> > tmp_76_fu_844_p3;
    sc_signal< sc_lv<8> > tmp_80_fu_886_p2;
    sc_signal< sc_lv<8> > tmp_91_fu_988_p2;
    sc_signal< sc_lv<8> > tmp_92_fu_1012_p3;
    sc_signal< sc_lv<8> > tmp_95_fu_1041_p2;
    sc_signal< sc_lv<8> > tmp_98_fu_1069_p2;
    sc_signal< sc_lv<8> > tmp_109_fu_1076_p1;
    sc_signal< sc_lv<9> > j_cast6_fu_550_p1;
    sc_signal< sc_lv<9> > tmp_87_fu_566_p2;
    sc_signal< sc_lv<5> > tmp_54_fu_601_p1;
    sc_signal< sc_lv<8> > tmp_11_fu_605_p3;
    sc_signal< sc_lv<8> > tmp_10_fu_591_p4;
    sc_signal< sc_lv<10> > tmp_56_fu_620_p2;
    sc_signal< sc_lv<2> > tmp_86_fu_641_p1;
    sc_signal< sc_lv<8> > tmp_14_fu_645_p3;
    sc_signal< sc_lv<10> > tmp_59_fu_659_p2;
    sc_signal< sc_lv<10> > tmp_62_fu_670_p2;
    sc_signal< sc_lv<5> > tmp_96_fu_681_p1;
    sc_signal< sc_lv<6> > tmp_32_fu_685_p3;
    sc_signal< sc_lv<6> > tmp_33_fu_693_p2;
    sc_signal< sc_lv<10> > tmp_65_fu_707_p2;
    sc_signal< sc_lv<4> > tmp_99_fu_718_p1;
    sc_signal< sc_lv<8> > tmp_20_fu_722_p3;
    sc_signal< sc_lv<8> > grp_fu_514_p4;
    sc_signal< sc_lv<10> > tmp_68_fu_737_p2;
    sc_signal< sc_lv<1> > tmp_101_fu_758_p1;
    sc_signal< sc_lv<8> > tmp_23_fu_762_p3;
    sc_signal< sc_lv<10> > tmp_71_fu_776_p2;
    sc_signal< sc_lv<10> > tmp_74_fu_798_p2;
    sc_signal< sc_lv<5> > tmp_102_fu_819_p1;
    sc_signal< sc_lv<7> > tmp_39_fu_823_p3;
    sc_signal< sc_lv<1> > tmp_103_fu_836_p3;
    sc_signal< sc_lv<7> > tmp_40_fu_831_p2;
    sc_signal< sc_lv<10> > tmp_77_fu_853_p2;
    sc_signal< sc_lv<3> > tmp_104_fu_864_p1;
    sc_signal< sc_lv<8> > tmp_79_fu_868_p3;
    sc_signal< sc_lv<8> > tmp_27_fu_876_p4;
    sc_signal< sc_lv<10> > tmp_81_fu_893_p2;
    sc_signal< sc_lv<10> > tmp_84_fu_914_p2;
    sc_signal< sc_lv<4> > tmp_28_fu_937_p3;
    sc_signal< sc_lv<9> > tmp_cast9_fu_945_p1;
    sc_signal< sc_lv<4> > tmp_105_fu_976_p1;
    sc_signal< sc_lv<8> > tmp_90_fu_980_p3;
    sc_signal< sc_lv<6> > tmp_46_fu_999_p3;
    sc_signal< sc_lv<6> > tmp_47_fu_1006_p2;
    sc_signal< sc_lv<8> > tmp_7_fu_1031_p4;
    sc_signal< sc_lv<8> > tmp_94_fu_1024_p3;
    sc_signal< sc_lv<8> > tmp_8_fu_1059_p4;
    sc_signal< sc_lv<8> > tmp_97_fu_1052_p3;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_state2;
    static const sc_lv<17> ap_ST_fsm_state3;
    static const sc_lv<17> ap_ST_fsm_state4;
    static const sc_lv<17> ap_ST_fsm_state5;
    static const sc_lv<17> ap_ST_fsm_state6;
    static const sc_lv<17> ap_ST_fsm_state7;
    static const sc_lv<17> ap_ST_fsm_state8;
    static const sc_lv<17> ap_ST_fsm_state9;
    static const sc_lv<17> ap_ST_fsm_state10;
    static const sc_lv<17> ap_ST_fsm_state11;
    static const sc_lv<17> ap_ST_fsm_state12;
    static const sc_lv<17> ap_ST_fsm_state13;
    static const sc_lv<17> ap_ST_fsm_state14;
    static const sc_lv<17> ap_ST_fsm_state15;
    static const sc_lv<17> ap_ST_fsm_state16;
    static const sc_lv<17> ap_ST_fsm_state17;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_B;
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
    static const sc_lv<64> ap_const_lv64_2BA;
    static const sc_lv<64> ap_const_lv64_2B9;
    static const sc_lv<64> ap_const_lv64_2B8;
    static const sc_lv<64> ap_const_lv64_2B7;
    static const sc_lv<64> ap_const_lv64_2B6;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<64> ap_const_lv64_2B5;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<10> ap_const_lv10_B;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<10> ap_const_lv10_5;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<10> ap_const_lv10_6;
    static const sc_lv<10> ap_const_lv10_7;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<10> ap_const_lv10_8;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<10> ap_const_lv10_9;
    static const sc_lv<10> ap_const_lv10_A;
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
    void thread_exitcond1_fu_925_p2();
    void thread_exitcond2_fu_554_p2();
    void thread_exitcond3_fu_530_p2();
    void thread_exitcond_fu_959_p2();
    void thread_grp_fu_494_p4();
    void thread_grp_fu_504_p4();
    void thread_grp_fu_514_p4();
    void thread_j_3_fu_560_p2();
    void thread_j_4_fu_970_p2();
    void thread_j_cast6_fu_550_p1();
    void thread_next_mul_fu_524_p2();
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
    void thread_tmp_100_fu_965_p1();
    void thread_tmp_101_fu_758_p1();
    void thread_tmp_102_fu_819_p1();
    void thread_tmp_103_fu_836_p3();
    void thread_tmp_104_fu_864_p1();
    void thread_tmp_105_fu_976_p1();
    void thread_tmp_106_fu_995_p1();
    void thread_tmp_107_fu_1020_p1();
    void thread_tmp_108_fu_1048_p1();
    void thread_tmp_109_fu_1076_p1();
    void thread_tmp_10_fu_591_p4();
    void thread_tmp_11_fu_605_p3();
    void thread_tmp_14_fu_645_p3();
    void thread_tmp_20_fu_722_p3();
    void thread_tmp_23_fu_762_p3();
    void thread_tmp_27_fu_876_p4();
    void thread_tmp_28_fu_937_p3();
    void thread_tmp_32_fu_685_p3();
    void thread_tmp_33_fu_693_p2();
    void thread_tmp_39_fu_823_p3();
    void thread_tmp_40_fu_831_p2();
    void thread_tmp_46_fu_999_p3();
    void thread_tmp_47_fu_1006_p2();
    void thread_tmp_49_fu_536_p2();
    void thread_tmp_50_fu_954_p1();
    void thread_tmp_51_fu_931_p2();
    void thread_tmp_52_fu_581_p1();
    void thread_tmp_53_fu_586_p1();
    void thread_tmp_54_fu_601_p1();
    void thread_tmp_55_fu_613_p2();
    void thread_tmp_56_fu_620_p2();
    void thread_tmp_57_fu_626_p1();
    void thread_tmp_58_fu_653_p2();
    void thread_tmp_59_fu_659_p2();
    void thread_tmp_60_fu_665_p1();
    void thread_tmp_62_fu_670_p2();
    void thread_tmp_63_fu_676_p1();
    void thread_tmp_64_fu_698_p3();
    void thread_tmp_65_fu_707_p2();
    void thread_tmp_66_fu_713_p1();
    void thread_tmp_67_fu_730_p2();
    void thread_tmp_68_fu_737_p2();
    void thread_tmp_69_fu_743_p1();
    void thread_tmp_70_fu_770_p2();
    void thread_tmp_71_fu_776_p2();
    void thread_tmp_72_fu_782_p1();
    void thread_tmp_74_fu_798_p2();
    void thread_tmp_75_fu_804_p1();
    void thread_tmp_76_fu_844_p3();
    void thread_tmp_77_fu_853_p2();
    void thread_tmp_78_fu_859_p1();
    void thread_tmp_79_fu_868_p3();
    void thread_tmp_7_fu_1031_p4();
    void thread_tmp_80_fu_886_p2();
    void thread_tmp_81_fu_893_p2();
    void thread_tmp_82_fu_899_p1();
    void thread_tmp_84_fu_914_p2();
    void thread_tmp_85_fu_920_p1();
    void thread_tmp_86_fu_641_p1();
    void thread_tmp_87_fu_566_p2();
    void thread_tmp_88_fu_571_p1();
    void thread_tmp_89_fu_576_p1();
    void thread_tmp_8_fu_1059_p4();
    void thread_tmp_90_fu_980_p3();
    void thread_tmp_91_fu_988_p2();
    void thread_tmp_92_fu_1012_p3();
    void thread_tmp_94_fu_1024_p3();
    void thread_tmp_95_fu_1041_p2();
    void thread_tmp_96_fu_681_p1();
    void thread_tmp_97_fu_1052_p3();
    void thread_tmp_98_fu_1069_p2();
    void thread_tmp_99_fu_718_p1();
    void thread_tmp_cast9_fu_945_p1();
    void thread_tmp_fu_542_p3();
    void thread_tmp_s_fu_949_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
