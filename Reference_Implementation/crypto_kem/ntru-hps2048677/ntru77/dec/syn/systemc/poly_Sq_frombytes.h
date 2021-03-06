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
    sc_out< sc_lv<10> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<8> > a_q0;
    sc_out< sc_lv<10> > a_address1;
    sc_out< sc_logic > a_ce1;
    sc_in< sc_lv<8> > a_q1;


    // Module declarations
    poly_Sq_frombytes(sc_module_name name);
    SC_HAS_PROCESS(poly_Sq_frombytes);

    ~poly_Sq_frombytes();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<11> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > tmp_75_fu_430_p2;
    sc_signal< sc_lv<7> > tmp_75_reg_973;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_fu_424_p2;
    sc_signal< sc_lv<8> > a_load_9_reg_993;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > tmp_38_fu_479_p3;
    sc_signal< sc_lv<10> > tmp_38_reg_1008;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<2> > tmp_51_reg_1018;
    sc_signal< sc_lv<7> > grp_fu_414_p4;
    sc_signal< sc_lv<7> > tmp_66_reg_1033;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_115_reg_1048;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > next_mul_fu_719_p2;
    sc_signal< sc_lv<10> > next_mul_reg_1063;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<6> > tmp_101_reg_1068;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > tmp_69_fu_885_p1;
    sc_signal< sc_lv<1> > tmp_69_reg_1093;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<6> > tmp_70_fu_937_p1;
    sc_signal< sc_lv<6> > tmp_70_reg_1103;
    sc_signal< sc_lv<7> > i_reg_380;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<10> > phi_mul_reg_392;
    sc_signal< sc_lv<64> > tmp_30_fu_436_p1;
    sc_signal< sc_lv<64> > tmp_33_fu_447_p1;
    sc_signal< sc_lv<64> > tmp_43_fu_458_p1;
    sc_signal< sc_lv<64> > tmp_39_fu_487_p1;
    sc_signal< sc_lv<64> > tmp_49_fu_515_p1;
    sc_signal< sc_lv<64> > tmp_53_fu_536_p1;
    sc_signal< sc_lv<64> > tmp_57_fu_547_p1;
    sc_signal< sc_lv<64> > tmp_64_fu_599_p1;
    sc_signal< sc_lv<64> > tmp_68_fu_610_p1;
    sc_signal< sc_lv<64> > tmp_78_fu_621_p1;
    sc_signal< sc_lv<64> > tmp_74_fu_647_p1;
    sc_signal< sc_lv<64> > tmp_84_fu_684_p1;
    sc_signal< sc_lv<64> > tmp_88_fu_703_p1;
    sc_signal< sc_lv<64> > tmp_92_fu_714_p1;
    sc_signal< sc_lv<64> > tmp_99_fu_772_p1;
    sc_signal< sc_lv<64> > tmp_103_fu_793_p1;
    sc_signal< sc_lv<64> > tmp_111_fu_804_p1;
    sc_signal< sc_lv<64> > tmp_108_fu_830_p1;
    sc_signal< sc_lv<64> > tmp_114_fu_863_p1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<16> > tmp_37_fu_474_p1;
    sc_signal< sc_lv<16> > tmp_47_cast_fu_504_p1;
    sc_signal< sc_lv<16> > tmp_62_cast_fu_589_p1;
    sc_signal< sc_lv<16> > tmp_72_cast_fu_637_p1;
    sc_signal< sc_lv<16> > tmp_82_cast_fu_674_p1;
    sc_signal< sc_lv<16> > tmp_97_cast_fu_762_p1;
    sc_signal< sc_lv<16> > tmp_107_cast_fu_820_p1;
    sc_signal< sc_lv<16> > tmp_115_cast_fu_853_p1;
    sc_signal< sc_lv<16> > tmp_8_cast_fu_880_p1;
    sc_signal< sc_lv<16> > tmp_17_cast_fu_932_p1;
    sc_signal< sc_lv<16> > tmp_23_cast_fu_948_p1;
    sc_signal< sc_lv<16> > tmp_28_fu_965_p1;
    sc_signal< sc_lv<10> > tmp_32_fu_441_p2;
    sc_signal< sc_lv<10> > tmp_42_fu_452_p2;
    sc_signal< sc_lv<3> > tmp_86_fu_463_p1;
    sc_signal< sc_lv<11> > tmp_40_fu_467_p3;
    sc_signal< sc_lv<6> > tmp_93_fu_492_p1;
    sc_signal< sc_lv<5> > grp_fu_404_p4;
    sc_signal< sc_lv<11> > tmp_47_fu_496_p3;
    sc_signal< sc_lv<10> > tmp_48_fu_509_p2;
    sc_signal< sc_lv<10> > tmp_52_fu_530_p2;
    sc_signal< sc_lv<10> > tmp_56_fu_541_p2;
    sc_signal< sc_lv<8> > tmp_71_fu_552_p1;
    sc_signal< sc_lv<10> > tmp_85_fu_567_p3;
    sc_signal< sc_lv<10> > tmp_55_fu_555_p3;
    sc_signal< sc_lv<1> > tmp_94_fu_563_p1;
    sc_signal< sc_lv<10> > tmp_89_fu_575_p2;
    sc_signal< sc_lv<11> > tmp_62_fu_581_p3;
    sc_signal< sc_lv<10> > tmp_63_fu_594_p2;
    sc_signal< sc_lv<10> > tmp_67_fu_604_p2;
    sc_signal< sc_lv<10> > tmp_77_fu_615_p2;
    sc_signal< sc_lv<4> > tmp_96_fu_626_p1;
    sc_signal< sc_lv<11> > tmp_72_fu_630_p3;
    sc_signal< sc_lv<10> > tmp_73_fu_642_p2;
    sc_signal< sc_lv<7> > tmp_105_fu_662_p1;
    sc_signal< sc_lv<4> > tmp_76_fu_652_p4;
    sc_signal< sc_lv<11> > tmp_82_fu_666_p3;
    sc_signal< sc_lv<10> > tmp_83_fu_679_p2;
    sc_signal< sc_lv<10> > tmp_87_fu_697_p2;
    sc_signal< sc_lv<10> > tmp_91_fu_708_p2;
    sc_signal< sc_lv<8> > tmp_95_fu_725_p1;
    sc_signal< sc_lv<9> > tmp_100_fu_740_p3;
    sc_signal< sc_lv<9> > tmp_90_fu_728_p3;
    sc_signal< sc_lv<2> > tmp_116_fu_736_p1;
    sc_signal< sc_lv<9> > tmp_104_fu_748_p2;
    sc_signal< sc_lv<11> > tmp_97_fu_754_p3;
    sc_signal< sc_lv<10> > tmp_98_fu_767_p2;
    sc_signal< sc_lv<10> > tmp_102_fu_787_p2;
    sc_signal< sc_lv<10> > tmp_110_fu_798_p2;
    sc_signal< sc_lv<5> > tmp_117_fu_809_p1;
    sc_signal< sc_lv<11> > tmp_106_fu_813_p3;
    sc_signal< sc_lv<10> > tmp_107_fu_825_p2;
    sc_signal< sc_lv<3> > tmp_109_fu_835_p4;
    sc_signal< sc_lv<11> > tmp_112_fu_845_p3;
    sc_signal< sc_lv<10> > tmp_113_fu_858_p2;
    sc_signal< sc_lv<4> > tmp_fu_868_p1;
    sc_signal< sc_lv<11> > tmp_8_fu_872_p3;
    sc_signal< sc_lv<2> > tmp_10_fu_889_p4;
    sc_signal< sc_lv<8> > tmp_65_fu_899_p1;
    sc_signal< sc_lv<10> > tmp_79_fu_911_p3;
    sc_signal< sc_lv<10> > tmp_12_fu_903_p3;
    sc_signal< sc_lv<10> > tmp_80_fu_919_p2;
    sc_signal< sc_lv<11> > tmp_17_fu_925_p3;
    sc_signal< sc_lv<11> > tmp_23_fu_941_p3;
    sc_signal< sc_lv<3> > tmp_81_fu_953_p1;
    sc_signal< sc_lv<11> > tmp_35_fu_957_p3;
    sc_signal< sc_lv<11> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<11> ap_ST_fsm_state1;
    static const sc_lv<11> ap_ST_fsm_state2;
    static const sc_lv<11> ap_ST_fsm_state3;
    static const sc_lv<11> ap_ST_fsm_state4;
    static const sc_lv<11> ap_ST_fsm_state5;
    static const sc_lv<11> ap_ST_fsm_state6;
    static const sc_lv<11> ap_ST_fsm_state7;
    static const sc_lv<11> ap_ST_fsm_state8;
    static const sc_lv<11> ap_ST_fsm_state9;
    static const sc_lv<11> ap_ST_fsm_state10;
    static const sc_lv<11> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<64> ap_const_lv64_3A0;
    static const sc_lv<64> ap_const_lv64_3A1;
    static const sc_lv<64> ap_const_lv64_2A3;
    static const sc_lv<64> ap_const_lv64_39E;
    static const sc_lv<64> ap_const_lv64_39F;
    static const sc_lv<64> ap_const_lv64_2A2;
    static const sc_lv<64> ap_const_lv64_39D;
    static const sc_lv<64> ap_const_lv64_39C;
    static const sc_lv<64> ap_const_lv64_2A1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<64> ap_const_lv64_2A0;
    static const sc_lv<7> ap_const_lv7_54;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<10> ap_const_lv10_5;
    static const sc_lv<10> ap_const_lv10_6;
    static const sc_lv<10> ap_const_lv10_7;
    static const sc_lv<10> ap_const_lv10_8;
    static const sc_lv<10> ap_const_lv10_B;
    static const sc_lv<10> ap_const_lv10_9;
    static const sc_lv<10> ap_const_lv10_A;
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
    void thread_exitcond_fu_424_p2();
    void thread_grp_fu_404_p4();
    void thread_grp_fu_414_p4();
    void thread_next_mul_fu_719_p2();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_tmp_100_fu_740_p3();
    void thread_tmp_102_fu_787_p2();
    void thread_tmp_103_fu_793_p1();
    void thread_tmp_104_fu_748_p2();
    void thread_tmp_105_fu_662_p1();
    void thread_tmp_106_fu_813_p3();
    void thread_tmp_107_cast_fu_820_p1();
    void thread_tmp_107_fu_825_p2();
    void thread_tmp_108_fu_830_p1();
    void thread_tmp_109_fu_835_p4();
    void thread_tmp_10_fu_889_p4();
    void thread_tmp_110_fu_798_p2();
    void thread_tmp_111_fu_804_p1();
    void thread_tmp_112_fu_845_p3();
    void thread_tmp_113_fu_858_p2();
    void thread_tmp_114_fu_863_p1();
    void thread_tmp_115_cast_fu_853_p1();
    void thread_tmp_116_fu_736_p1();
    void thread_tmp_117_fu_809_p1();
    void thread_tmp_12_fu_903_p3();
    void thread_tmp_17_cast_fu_932_p1();
    void thread_tmp_17_fu_925_p3();
    void thread_tmp_23_cast_fu_948_p1();
    void thread_tmp_23_fu_941_p3();
    void thread_tmp_28_fu_965_p1();
    void thread_tmp_30_fu_436_p1();
    void thread_tmp_32_fu_441_p2();
    void thread_tmp_33_fu_447_p1();
    void thread_tmp_35_fu_957_p3();
    void thread_tmp_37_fu_474_p1();
    void thread_tmp_38_fu_479_p3();
    void thread_tmp_39_fu_487_p1();
    void thread_tmp_40_fu_467_p3();
    void thread_tmp_42_fu_452_p2();
    void thread_tmp_43_fu_458_p1();
    void thread_tmp_47_cast_fu_504_p1();
    void thread_tmp_47_fu_496_p3();
    void thread_tmp_48_fu_509_p2();
    void thread_tmp_49_fu_515_p1();
    void thread_tmp_52_fu_530_p2();
    void thread_tmp_53_fu_536_p1();
    void thread_tmp_55_fu_555_p3();
    void thread_tmp_56_fu_541_p2();
    void thread_tmp_57_fu_547_p1();
    void thread_tmp_62_cast_fu_589_p1();
    void thread_tmp_62_fu_581_p3();
    void thread_tmp_63_fu_594_p2();
    void thread_tmp_64_fu_599_p1();
    void thread_tmp_65_fu_899_p1();
    void thread_tmp_67_fu_604_p2();
    void thread_tmp_68_fu_610_p1();
    void thread_tmp_69_fu_885_p1();
    void thread_tmp_70_fu_937_p1();
    void thread_tmp_71_fu_552_p1();
    void thread_tmp_72_cast_fu_637_p1();
    void thread_tmp_72_fu_630_p3();
    void thread_tmp_73_fu_642_p2();
    void thread_tmp_74_fu_647_p1();
    void thread_tmp_75_fu_430_p2();
    void thread_tmp_76_fu_652_p4();
    void thread_tmp_77_fu_615_p2();
    void thread_tmp_78_fu_621_p1();
    void thread_tmp_79_fu_911_p3();
    void thread_tmp_80_fu_919_p2();
    void thread_tmp_81_fu_953_p1();
    void thread_tmp_82_cast_fu_674_p1();
    void thread_tmp_82_fu_666_p3();
    void thread_tmp_83_fu_679_p2();
    void thread_tmp_84_fu_684_p1();
    void thread_tmp_85_fu_567_p3();
    void thread_tmp_86_fu_463_p1();
    void thread_tmp_87_fu_697_p2();
    void thread_tmp_88_fu_703_p1();
    void thread_tmp_89_fu_575_p2();
    void thread_tmp_8_cast_fu_880_p1();
    void thread_tmp_8_fu_872_p3();
    void thread_tmp_90_fu_728_p3();
    void thread_tmp_91_fu_708_p2();
    void thread_tmp_92_fu_714_p1();
    void thread_tmp_93_fu_492_p1();
    void thread_tmp_94_fu_563_p1();
    void thread_tmp_95_fu_725_p1();
    void thread_tmp_96_fu_626_p1();
    void thread_tmp_97_cast_fu_762_p1();
    void thread_tmp_97_fu_754_p3();
    void thread_tmp_98_fu_767_p2();
    void thread_tmp_99_fu_772_p1();
    void thread_tmp_fu_868_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
