// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_S3_inv_HH_
#define _poly_S3_inv_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "mod3.h"
#include "crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1.h"
#include "crypto_kem_keypair_mul_mul_16s_16s_16_1_1.h"
#include "crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1.h"
#include "poly_S3_inv_b_coeffs.h"

namespace ap_rtl {

struct poly_S3_inv : public sc_module {
    // Port declarations 19
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > r_coeffs_address0;
    sc_out< sc_logic > r_coeffs_ce0;
    sc_out< sc_lv<2> > r_coeffs_we0;
    sc_out< sc_lv<16> > r_coeffs_d0;
    sc_in< sc_lv<16> > r_coeffs_q0;
    sc_out< sc_lv<10> > r_coeffs_address1;
    sc_out< sc_logic > r_coeffs_ce1;
    sc_out< sc_lv<2> > r_coeffs_we1;
    sc_out< sc_lv<16> > r_coeffs_d1;
    sc_in< sc_lv<16> > r_coeffs_q1;
    sc_out< sc_lv<10> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<11> > ap_var_for_const0;


    // Module declarations
    poly_S3_inv(sc_module_name name);
    SC_HAS_PROCESS(poly_S3_inv);

    ~poly_S3_inv();

    sc_trace_file* mVcdFile;

    poly_S3_inv_b_coeffs* b_coeffs_U;
    poly_S3_inv_b_coeffs* c_coeffs_U;
    poly_S3_inv_b_coeffs* f_coeffs_U;
    poly_S3_inv_b_coeffs* g_coeffs_U;
    mod3* grp_mod3_fu_621;
    crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1<1,15,11,11,11>* crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1_U35;
    crypto_kem_keypair_mul_mul_16s_16s_16_1_1<1,1,16,16,16>* crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U36;
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>* crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U37;
    crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1<1,1,16,16,16,16>* crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U38;
    crypto_kem_keypair_mul_mul_16s_16s_16_1_1<1,1,16,16,16>* crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U39;
    sc_signal< sc_lv<61> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > g_coeffs_q0;
    sc_signal< sc_lv<16> > reg_630;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<16> > f_coeffs_q0;
    sc_signal< sc_lv<16> > reg_634;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<16> > grp_mod3_fu_621_ap_return;
    sc_signal< sc_lv<16> > reg_638;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state60;
    sc_signal< sc_lv<10> > i_10_fu_657_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond10_fu_646_p2;
    sc_signal< sc_lv<10> > i_11_fu_669_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > i_12_fu_686_p2;
    sc_signal< sc_lv<10> > i_12_reg_1766;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > tmp_171_fu_692_p1;
    sc_signal< sc_lv<64> > tmp_171_reg_1771;
    sc_signal< sc_lv<1> > exitcond8_fu_680_p2;
    sc_signal< sc_lv<10> > i_13_fu_703_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > exitcond7_fu_697_p2;
    sc_signal< sc_lv<11> > j_5_fu_720_p2;
    sc_signal< sc_lv<11> > j_5_reg_1812;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > tmp_174_fu_1723_p2;
    sc_signal< sc_lv<16> > tmp_174_reg_1817;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > tmp_208_fu_732_p1;
    sc_signal< sc_lv<1> > tmp_208_reg_1822;
    sc_signal< sc_lv<1> > tmp_209_reg_1827;
    sc_signal< sc_lv<1> > tmp_61_cast_fu_744_p2;
    sc_signal< sc_lv<1> > tmp_61_cast_reg_1832;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<1> > tmp_210_fu_762_p3;
    sc_signal< sc_lv<1> > tmp_210_reg_1837;
    sc_signal< sc_lv<16> > tmp_64_fu_770_p1;
    sc_signal< sc_lv<16> > tmp_64_reg_1842;
    sc_signal< sc_lv<11> > tmp_64_cast_fu_774_p1;
    sc_signal< sc_lv<11> > tmp_64_cast_reg_1847;
    sc_signal< sc_lv<16> > tmp_i3_cast_fu_790_p3;
    sc_signal< sc_lv<16> > tmp_i3_cast_reg_1852;
    sc_signal< sc_lv<10> > i_9_fu_804_p2;
    sc_signal< sc_lv<10> > i_9_reg_1861;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<10> > temp_r_coeffs_addr_3_reg_1866;
    sc_signal< sc_lv<1> > exitcond_i5_fu_798_p2;
    sc_signal< sc_lv<10> > g_coeffs_addr_2_reg_1871;
    sc_signal< sc_lv<10> > i_15_fu_847_p2;
    sc_signal< sc_lv<10> > i_15_reg_1879;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<10> > b_coeffs_addr_3_reg_1884;
    sc_signal< sc_lv<1> > exitcond_i9_fu_841_p2;
    sc_signal< sc_lv<10> > c_coeffs_addr_2_reg_1889;
    sc_signal< sc_lv<16> > degf_1_fu_889_p2;
    sc_signal< sc_lv<16> > degf_1_reg_1894;
    sc_signal< sc_lv<16> > degg_1_fu_895_p2;
    sc_signal< sc_lv<16> > degg_1_reg_1899;
    sc_signal< sc_lv<16> > tmp_185_fu_909_p2;
    sc_signal< sc_lv<16> > tmp_185_reg_1904;
    sc_signal< sc_lv<10> > i_17_fu_946_p2;
    sc_signal< sc_lv<10> > i_17_reg_1913;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<10> > temp_r_coeffs_addr_5_reg_1918;
    sc_signal< sc_lv<1> > exitcond5_fu_940_p2;
    sc_signal< sc_lv<16> > grp_fu_1729_p3;
    sc_signal< sc_lv<16> > tmp_196_reg_1928;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<10> > i_19_fu_964_p2;
    sc_signal< sc_lv<10> > i_19_reg_1936;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<10> > b_coeffs_addr_4_reg_1941;
    sc_signal< sc_lv<1> > exitcond4_fu_958_p2;
    sc_signal< sc_lv<1> > tmp_i_fu_976_p2;
    sc_signal< sc_lv<1> > tmp_i_reg_1951;
    sc_signal< sc_lv<16> > c_coeffs_q0;
    sc_signal< sc_lv<16> > c_coeffs_load_2_reg_1956;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<16> > grp_fu_1736_p3;
    sc_signal< sc_lv<16> > tmp_200_reg_1961;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<1> > exitcond_i_fu_982_p2;
    sc_signal< sc_lv<1> > done_reg_477;
    sc_signal< sc_lv<10> > temp_r_coeffs_addr_7_reg_1974;
    sc_signal< sc_lv<10> > i_21_fu_1004_p2;
    sc_signal< sc_lv<10> > i_21_reg_1979;
    sc_signal< sc_lv<16> > tmp_i_50_fu_1019_p3;
    sc_signal< sc_lv<16> > tmp_i_50_reg_1984;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_lv<1> > exitcond_i6_fu_1033_p2;
    sc_signal< sc_lv<10> > c_coeffs_addr_5_reg_1997;
    sc_signal< sc_lv<10> > i_22_fu_1061_p2;
    sc_signal< sc_lv<10> > i_22_reg_2002;
    sc_signal< sc_lv<16> > degf_2_fu_1067_p2;
    sc_signal< sc_lv<16> > degf_2_reg_2007;
    sc_signal< sc_lv<11> > k_3_fu_1071_p2;
    sc_signal< sc_lv<11> > k_3_reg_2012;
    sc_signal< sc_lv<1> > tmp_269_reg_2017;
    sc_signal< sc_lv<16> > k_2_cast_fu_1137_p1;
    sc_signal< sc_lv<16> > k_2_cast_reg_2022;
    sc_signal< sc_lv<10> > i_14_fu_1147_p2;
    sc_signal< sc_lv<10> > i_14_reg_2030;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<64> > tmp_177_fu_1153_p1;
    sc_signal< sc_lv<64> > tmp_177_reg_2035;
    sc_signal< sc_lv<1> > exitcond3_fu_1141_p2;
    sc_signal< sc_lv<16> > b_coeffs_q0;
    sc_signal< sc_lv<16> > b_coeffs_load_reg_2045;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_lv<16> > tmp_178_fu_1742_p2;
    sc_signal< sc_lv<16> > tmp_178_reg_2050;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_lv<4> > i_20_fu_1168_p2;
    sc_signal< sc_lv<4> > i_20_reg_2058;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_lv<11> > tmp_270_cast_fu_1180_p1;
    sc_signal< sc_lv<11> > tmp_270_cast_reg_2063;
    sc_signal< sc_lv<1> > exitcond2_fu_1162_p2;
    sc_signal< sc_lv<10> > j_6_fu_1194_p2;
    sc_signal< sc_lv<10> > j_6_reg_2076;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_lv<1> > exitcond1_fu_1188_p2;
    sc_signal< sc_lv<8> > b_assign_1_cast_fu_1215_p3;
    sc_signal< sc_lv<8> > b_assign_1_cast_reg_2086;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_lv<11> > i_18_fu_1239_p2;
    sc_signal< sc_lv<11> > i_18_reg_2099;
    sc_signal< sc_logic > ap_CS_fsm_state55;
    sc_signal< sc_lv<1> > tmp_213_fu_1245_p1;
    sc_signal< sc_lv<1> > tmp_213_reg_2104;
    sc_signal< sc_lv<1> > exitcond_i1_fu_1233_p2;
    sc_signal< sc_lv<10> > r_coeffs_addr_5_reg_2115;
    sc_signal< sc_lv<16> > k_5_fu_1347_p1;
    sc_signal< sc_lv<4> > start_pos_fu_1351_p3;
    sc_signal< sc_lv<4> > start_pos_reg_2125;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< sc_lv<4> > end_pos_fu_1359_p2;
    sc_signal< sc_lv<4> > end_pos_reg_2131;
    sc_signal< sc_lv<5> > tmp_225_fu_1426_p2;
    sc_signal< sc_lv<5> > tmp_225_reg_2137;
    sc_signal< sc_lv<16> > tmp_228_fu_1436_p2;
    sc_signal< sc_lv<16> > tmp_228_reg_2142;
    sc_signal< sc_lv<8> > tmp_249_fu_1540_p1;
    sc_signal< sc_lv<8> > tmp_249_reg_2147;
    sc_signal< sc_lv<10> > i_16_fu_1700_p2;
    sc_signal< sc_lv<10> > i_16_reg_2156;
    sc_signal< sc_logic > ap_CS_fsm_state58;
    sc_signal< sc_lv<10> > r_coeffs_addr_3_reg_2161;
    sc_signal< sc_lv<1> > exitcond_fu_1694_p2;
    sc_signal< sc_lv<16> > tmp_187_fu_1717_p2;
    sc_signal< sc_lv<16> > tmp_187_reg_2167;
    sc_signal< sc_logic > ap_CS_fsm_state59;
    sc_signal< sc_lv<10> > b_coeffs_address0;
    sc_signal< sc_logic > b_coeffs_ce0;
    sc_signal< sc_logic > b_coeffs_we0;
    sc_signal< sc_lv<16> > b_coeffs_d0;
    sc_signal< sc_lv<10> > c_coeffs_address0;
    sc_signal< sc_logic > c_coeffs_ce0;
    sc_signal< sc_logic > c_coeffs_we0;
    sc_signal< sc_lv<16> > c_coeffs_d0;
    sc_signal< sc_lv<10> > f_coeffs_address0;
    sc_signal< sc_logic > f_coeffs_ce0;
    sc_signal< sc_logic > f_coeffs_we0;
    sc_signal< sc_lv<16> > f_coeffs_d0;
    sc_signal< sc_lv<10> > g_coeffs_address0;
    sc_signal< sc_logic > g_coeffs_ce0;
    sc_signal< sc_logic > g_coeffs_we0;
    sc_signal< sc_lv<16> > g_coeffs_d0;
    sc_signal< sc_logic > grp_mod3_fu_621_ap_ready;
    sc_signal< sc_lv<16> > grp_mod3_fu_621_a;
    sc_signal< sc_lv<10> > i_reg_386;
    sc_signal< sc_lv<10> > i_1_reg_397;
    sc_signal< sc_lv<1> > exitcond9_fu_663_p2;
    sc_signal< sc_lv<10> > i_2_reg_408;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<10> > i_3_reg_419;
    sc_signal< sc_lv<16> > degg_reg_430;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<16> > degf_reg_442;
    sc_signal< sc_lv<11> > k_reg_454;
    sc_signal< sc_lv<11> > j_reg_466;
    sc_signal< sc_lv<10> > i_i4_reg_489;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<10> > i_i8_reg_500;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<10> > i_4_reg_511;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<10> > i_5_reg_522;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<10> > i_i_reg_533;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<10> > i_i5_reg_544;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<10> > i_6_reg_555;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_lv<16> > k_1_reg_566;
    sc_signal< sc_lv<4> > i_7_reg_576;
    sc_signal< sc_lv<10> > j_1_reg_587;
    sc_signal< sc_logic > ap_CS_fsm_state54;
    sc_signal< sc_lv<11> > i_i1_reg_599;
    sc_signal< sc_logic > ap_CS_fsm_state57;
    sc_signal< sc_lv<10> > i_8_reg_610;
    sc_signal< sc_logic > ap_CS_fsm_state61;
    sc_signal< sc_lv<16> > tmp_207_fu_726_p2;
    sc_signal< sc_lv<64> > tmp_fu_652_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_675_p1;
    sc_signal< sc_lv<64> > tmp_172_fu_709_p1;
    sc_signal< sc_lv<64> > tmp_361_i_fu_810_p1;
    sc_signal< sc_lv<64> > tmp_361_i1_fu_853_p1;
    sc_signal< sc_lv<64> > tmp_194_fu_952_p1;
    sc_signal< sc_lv<64> > tmp_198_fu_970_p1;
    sc_signal< sc_lv<64> > tmp_112_i_fu_988_p1;
    sc_signal< sc_lv<64> > tmp_114_i_fu_999_p1;
    sc_signal< sc_lv<64> > tmp_107_i_fu_1045_p1;
    sc_signal< sc_lv<64> > tmp_109_i_fu_1056_p1;
    sc_signal< sc_lv<64> > tmp_192_fu_1223_p1;
    sc_signal< sc_lv<64> > tmp_193_fu_1228_p1;
    sc_signal< sc_lv<64> > gepindex2_cast_fu_1297_p1;
    sc_signal< sc_lv<64> > gepindex2371_cast_fu_1332_p1;
    sc_signal< sc_lv<64> > tmp_186_fu_1706_p1;
    sc_signal< sc_lv<16> > tmp_363_i1_fu_926_p2;
    sc_signal< sc_lv<16> > tmp_364_i1_fu_933_p2;
    sc_signal< sc_lv<16> > tmp_110_i_fu_1090_p3;
    sc_signal< sc_lv<16> > tmp_105_i_fu_1099_p2;
    sc_signal< sc_lv<1> > exitcond6_fu_714_p2;
    sc_signal< sc_lv<16> > tmp_363_i_fu_827_p2;
    sc_signal< sc_lv<16> > tmp_115_i_fu_1010_p3;
    sc_signal< sc_lv<16> > tmp_111_i_fu_1026_p2;
    sc_signal< sc_lv<16> > tmp_364_i_fu_834_p2;
    sc_signal< sc_lv<16> > tmp_267_fu_1677_p2;
    sc_signal< sc_lv<2> > mask_fu_1687_p2;
    sc_signal< sc_lv<4> > grp_fu_626_p0;
    sc_signal< sc_lv<4> > grp_fu_626_p1;
    sc_signal< sc_lv<17> > tmp_250_cast_fu_748_p1;
    sc_signal< sc_lv<17> > tmp_251_cast_fu_752_p1;
    sc_signal< sc_lv<17> > tmp_176_fu_756_p2;
    sc_signal< sc_lv<1> > tmp21_fu_778_p2;
    sc_signal< sc_lv<1> > swap_fu_784_p2;
    sc_signal< sc_lv<16> > tmp_362_i_fu_816_p2;
    sc_signal< sc_lv<16> > t_fu_822_p2;
    sc_signal< sc_lv<1> > tmp22_fu_865_p2;
    sc_signal< sc_lv<1> > tmp_182_fu_870_p2;
    sc_signal< sc_lv<16> > tmp_181_fu_859_p2;
    sc_signal< sc_lv<16> > tmp_257_cast_fu_875_p3;
    sc_signal< sc_lv<16> > tmp_183_fu_883_p2;
    sc_signal< sc_lv<16> > tmp_184_fu_901_p3;
    sc_signal< sc_lv<16> > tmp_362_i1_fu_915_p2;
    sc_signal< sc_lv<16> > t_1_fu_921_p2;
    sc_signal< sc_lv<10> > tmp_113_i_fu_993_p2;
    sc_signal< sc_lv<10> > tmp_106_i_fu_1039_p2;
    sc_signal< sc_lv<10> > tmp_108_i_fu_1050_p2;
    sc_signal< sc_lv<16> > tmp_202_fu_1076_p2;
    sc_signal< sc_lv<11> > tmp_173_fu_1109_p2;
    sc_signal< sc_lv<1> > tmp_191_fu_1115_p3;
    sc_signal< sc_lv<12> > k_cast_fu_1105_p1;
    sc_signal< sc_lv<12> > tmp_240_cast_cast_fu_1123_p3;
    sc_signal< sc_lv<12> > k_2_fu_1131_p2;
    sc_signal< sc_lv<10> > i_7_cast_fu_1158_p1;
    sc_signal< sc_lv<10> > tmp_180_fu_1174_p2;
    sc_signal< sc_lv<11> > j_1_cast_fu_1184_p1;
    sc_signal< sc_lv<11> > grp_fu_1205_p0;
    sc_signal< sc_lv<1> > tmp_212_fu_1211_p1;
    sc_signal< sc_lv<11> > grp_fu_1205_p2;
    sc_signal< sc_lv<10> > adjSize_fu_1249_p4;
    sc_signal< sc_lv<14> > adjSize340_cast_cast_fu_1263_p1;
    sc_signal< sc_lv<14> > mem_index_gep_fu_1267_p2;
    sc_signal< sc_lv<10> > tmp_214_fu_1273_p1;
    sc_signal< sc_lv<1> > addrCmp_fu_1277_p2;
    sc_signal< sc_lv<10> > gepindex_fu_1283_p2;
    sc_signal< sc_lv<10> > gepindex2_fu_1289_p3;
    sc_signal< sc_lv<16> > adjSize340_cast_fu_1259_p1;
    sc_signal< sc_lv<16> > mem_index_gep1_fu_1302_p2;
    sc_signal< sc_lv<10> > tmp_232_fu_1308_p1;
    sc_signal< sc_lv<1> > addrCmp1_fu_1312_p2;
    sc_signal< sc_lv<10> > gepindex1_fu_1318_p2;
    sc_signal< sc_lv<10> > gepindex3_fu_1324_p3;
    sc_signal< sc_lv<15> > k_4_fu_1337_p4;
    sc_signal< sc_lv<5> > tmp_216_fu_1366_p1;
    sc_signal< sc_lv<5> > tmp_217_fu_1370_p1;
    sc_signal< sc_lv<1> > grp_fu_626_p2;
    sc_signal< sc_lv<5> > tmp_219_fu_1384_p2;
    sc_signal< sc_lv<5> > tmp_221_fu_1396_p2;
    sc_signal< sc_lv<16> > tmp_218_fu_1374_p4;
    sc_signal< sc_lv<5> > tmp_220_fu_1390_p2;
    sc_signal< sc_lv<5> > tmp_222_fu_1402_p3;
    sc_signal< sc_lv<5> > tmp_224_fu_1418_p3;
    sc_signal< sc_lv<16> > tmp_223_fu_1410_p3;
    sc_signal< sc_lv<16> > tmp_226_fu_1432_p1;
    sc_signal< sc_lv<5> > tmp_234_fu_1448_p1;
    sc_signal< sc_lv<5> > tmp_235_fu_1452_p1;
    sc_signal< sc_lv<1> > tmp_233_fu_1442_p2;
    sc_signal< sc_lv<5> > tmp_237_fu_1466_p2;
    sc_signal< sc_lv<5> > tmp_239_fu_1478_p2;
    sc_signal< sc_lv<16> > tmp_236_fu_1456_p4;
    sc_signal< sc_lv<5> > tmp_238_fu_1472_p2;
    sc_signal< sc_lv<5> > tmp_240_fu_1484_p3;
    sc_signal< sc_lv<5> > tmp_242_fu_1500_p3;
    sc_signal< sc_lv<5> > tmp_243_fu_1508_p2;
    sc_signal< sc_lv<16> > tmp_241_fu_1492_p3;
    sc_signal< sc_lv<16> > tmp_244_fu_1514_p1;
    sc_signal< sc_lv<16> > tmp_245_fu_1518_p1;
    sc_signal< sc_lv<16> > tmp_246_fu_1522_p2;
    sc_signal< sc_lv<16> > tmp_247_fu_1528_p2;
    sc_signal< sc_lv<16> > tmp_248_fu_1534_p2;
    sc_signal< sc_lv<16> > tmp_227_fu_1544_p1;
    sc_signal< sc_lv<16> > tmp_229_fu_1547_p2;
    sc_signal< sc_lv<16> > tmp_230_fu_1553_p2;
    sc_signal< sc_lv<8> > tmp_231_fu_1558_p1;
    sc_signal< sc_lv<8> > tmp_i1_fu_1562_p2;
    sc_signal< sc_lv<8> > tmp_i1_56_fu_1567_p2;
    sc_signal< sc_lv<8> > tmp_386_i_fu_1572_p2;
    sc_signal< sc_lv<5> > tmp_251_fu_1577_p1;
    sc_signal< sc_lv<5> > tmp_252_fu_1580_p1;
    sc_signal< sc_lv<5> > tmp_254_fu_1587_p2;
    sc_signal< sc_lv<5> > tmp_255_fu_1593_p3;
    sc_signal< sc_lv<5> > tmp_257_fu_1609_p3;
    sc_signal< sc_lv<5> > tmp_256_fu_1601_p3;
    sc_signal< sc_lv<5> > tmp_258_fu_1617_p2;
    sc_signal< sc_lv<16> > tmp_253_fu_1583_p1;
    sc_signal< sc_lv<16> > tmp_259_fu_1623_p1;
    sc_signal< sc_lv<16> > tmp_262_fu_1635_p2;
    sc_signal< sc_lv<16> > tmp_263_fu_1641_p4;
    sc_signal< sc_lv<16> > tmp_260_fu_1627_p1;
    sc_signal< sc_lv<16> > tmp_261_fu_1631_p1;
    sc_signal< sc_lv<16> > tmp_265_fu_1659_p2;
    sc_signal< sc_lv<16> > tmp_266_fu_1665_p2;
    sc_signal< sc_lv<16> > tmp_264_fu_1651_p3;
    sc_signal< sc_lv<16> > p_demorgan_fu_1671_p2;
    sc_signal< sc_lv<2> > tmp_268_fu_1684_p1;
    sc_signal< sc_lv<16> > tmp_211_fu_1711_p2;
    sc_signal< sc_logic > grp_fu_1205_ap_start;
    sc_signal< sc_logic > grp_fu_1205_ap_done;
    sc_signal< sc_lv<61> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<61> ap_ST_fsm_state1;
    static const sc_lv<61> ap_ST_fsm_state2;
    static const sc_lv<61> ap_ST_fsm_state3;
    static const sc_lv<61> ap_ST_fsm_state4;
    static const sc_lv<61> ap_ST_fsm_state5;
    static const sc_lv<61> ap_ST_fsm_state6;
    static const sc_lv<61> ap_ST_fsm_state7;
    static const sc_lv<61> ap_ST_fsm_state8;
    static const sc_lv<61> ap_ST_fsm_state9;
    static const sc_lv<61> ap_ST_fsm_state10;
    static const sc_lv<61> ap_ST_fsm_state11;
    static const sc_lv<61> ap_ST_fsm_state12;
    static const sc_lv<61> ap_ST_fsm_state13;
    static const sc_lv<61> ap_ST_fsm_state14;
    static const sc_lv<61> ap_ST_fsm_state15;
    static const sc_lv<61> ap_ST_fsm_state16;
    static const sc_lv<61> ap_ST_fsm_state17;
    static const sc_lv<61> ap_ST_fsm_state18;
    static const sc_lv<61> ap_ST_fsm_state19;
    static const sc_lv<61> ap_ST_fsm_state20;
    static const sc_lv<61> ap_ST_fsm_state21;
    static const sc_lv<61> ap_ST_fsm_state22;
    static const sc_lv<61> ap_ST_fsm_state23;
    static const sc_lv<61> ap_ST_fsm_state24;
    static const sc_lv<61> ap_ST_fsm_state25;
    static const sc_lv<61> ap_ST_fsm_state26;
    static const sc_lv<61> ap_ST_fsm_state27;
    static const sc_lv<61> ap_ST_fsm_state28;
    static const sc_lv<61> ap_ST_fsm_state29;
    static const sc_lv<61> ap_ST_fsm_state30;
    static const sc_lv<61> ap_ST_fsm_state31;
    static const sc_lv<61> ap_ST_fsm_state32;
    static const sc_lv<61> ap_ST_fsm_state33;
    static const sc_lv<61> ap_ST_fsm_state34;
    static const sc_lv<61> ap_ST_fsm_state35;
    static const sc_lv<61> ap_ST_fsm_state36;
    static const sc_lv<61> ap_ST_fsm_state37;
    static const sc_lv<61> ap_ST_fsm_state38;
    static const sc_lv<61> ap_ST_fsm_state39;
    static const sc_lv<61> ap_ST_fsm_state40;
    static const sc_lv<61> ap_ST_fsm_state41;
    static const sc_lv<61> ap_ST_fsm_state42;
    static const sc_lv<61> ap_ST_fsm_state43;
    static const sc_lv<61> ap_ST_fsm_state44;
    static const sc_lv<61> ap_ST_fsm_state45;
    static const sc_lv<61> ap_ST_fsm_state46;
    static const sc_lv<61> ap_ST_fsm_state47;
    static const sc_lv<61> ap_ST_fsm_state48;
    static const sc_lv<61> ap_ST_fsm_state49;
    static const sc_lv<61> ap_ST_fsm_state50;
    static const sc_lv<61> ap_ST_fsm_state51;
    static const sc_lv<61> ap_ST_fsm_state52;
    static const sc_lv<61> ap_ST_fsm_state53;
    static const sc_lv<61> ap_ST_fsm_state54;
    static const sc_lv<61> ap_ST_fsm_state55;
    static const sc_lv<61> ap_ST_fsm_state56;
    static const sc_lv<61> ap_ST_fsm_state57;
    static const sc_lv<61> ap_ST_fsm_state58;
    static const sc_lv<61> ap_ST_fsm_state59;
    static const sc_lv<61> ap_ST_fsm_state60;
    static const sc_lv<61> ap_ST_fsm_state61;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_3A;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<16> ap_const_lv16_2A4;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_2A4;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<10> ap_const_lv10_2A5;
    static const sc_lv<11> ap_const_lv11_547;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<16> ap_const_lv16_FFFF;
    static const sc_lv<10> ap_const_lv10_3FF;
    static const sc_lv<10> ap_const_lv10_2A4;
    static const sc_lv<11> ap_const_lv11_2A4;
    static const sc_lv<12> ap_const_lv12_2A5;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<11> ap_const_lv11_2A5;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<11> ap_const_lv11_54A;
    static const sc_lv<14> ap_const_lv14_2371;
    static const sc_lv<14> ap_const_lv14_2616;
    static const sc_lv<10> ap_const_lv10_8F;
    static const sc_lv<16> ap_const_lv16_9D1C;
    static const sc_lv<16> ap_const_lv16_9FC1;
    static const sc_lv<10> ap_const_lv10_2E4;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<5> ap_const_lv5_F;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_a_coeffs_address0();
    void thread_a_coeffs_ce0();
    void thread_addrCmp1_fu_1312_p2();
    void thread_addrCmp_fu_1277_p2();
    void thread_adjSize340_cast_cast_fu_1263_p1();
    void thread_adjSize340_cast_fu_1259_p1();
    void thread_adjSize_fu_1249_p4();
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
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state54();
    void thread_ap_CS_fsm_state55();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state57();
    void thread_ap_CS_fsm_state58();
    void thread_ap_CS_fsm_state59();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state60();
    void thread_ap_CS_fsm_state61();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_assign_1_cast_fu_1215_p3();
    void thread_b_coeffs_address0();
    void thread_b_coeffs_ce0();
    void thread_b_coeffs_d0();
    void thread_b_coeffs_we0();
    void thread_c_coeffs_address0();
    void thread_c_coeffs_ce0();
    void thread_c_coeffs_d0();
    void thread_c_coeffs_we0();
    void thread_degf_1_fu_889_p2();
    void thread_degf_2_fu_1067_p2();
    void thread_degg_1_fu_895_p2();
    void thread_end_pos_fu_1359_p2();
    void thread_exitcond10_fu_646_p2();
    void thread_exitcond1_fu_1188_p2();
    void thread_exitcond2_fu_1162_p2();
    void thread_exitcond3_fu_1141_p2();
    void thread_exitcond4_fu_958_p2();
    void thread_exitcond5_fu_940_p2();
    void thread_exitcond6_fu_714_p2();
    void thread_exitcond7_fu_697_p2();
    void thread_exitcond8_fu_680_p2();
    void thread_exitcond9_fu_663_p2();
    void thread_exitcond_fu_1694_p2();
    void thread_exitcond_i1_fu_1233_p2();
    void thread_exitcond_i5_fu_798_p2();
    void thread_exitcond_i6_fu_1033_p2();
    void thread_exitcond_i9_fu_841_p2();
    void thread_exitcond_i_fu_982_p2();
    void thread_f_coeffs_address0();
    void thread_f_coeffs_ce0();
    void thread_f_coeffs_d0();
    void thread_f_coeffs_we0();
    void thread_g_coeffs_address0();
    void thread_g_coeffs_ce0();
    void thread_g_coeffs_d0();
    void thread_g_coeffs_we0();
    void thread_gepindex1_fu_1318_p2();
    void thread_gepindex2371_cast_fu_1332_p1();
    void thread_gepindex2_cast_fu_1297_p1();
    void thread_gepindex2_fu_1289_p3();
    void thread_gepindex3_fu_1324_p3();
    void thread_gepindex_fu_1283_p2();
    void thread_grp_fu_1205_ap_start();
    void thread_grp_fu_1205_p0();
    void thread_grp_fu_626_p0();
    void thread_grp_fu_626_p1();
    void thread_grp_fu_626_p2();
    void thread_grp_mod3_fu_621_a();
    void thread_i_10_fu_657_p2();
    void thread_i_11_fu_669_p2();
    void thread_i_12_fu_686_p2();
    void thread_i_13_fu_703_p2();
    void thread_i_14_fu_1147_p2();
    void thread_i_15_fu_847_p2();
    void thread_i_16_fu_1700_p2();
    void thread_i_17_fu_946_p2();
    void thread_i_18_fu_1239_p2();
    void thread_i_19_fu_964_p2();
    void thread_i_20_fu_1168_p2();
    void thread_i_21_fu_1004_p2();
    void thread_i_22_fu_1061_p2();
    void thread_i_7_cast_fu_1158_p1();
    void thread_i_9_fu_804_p2();
    void thread_j_1_cast_fu_1184_p1();
    void thread_j_5_fu_720_p2();
    void thread_j_6_fu_1194_p2();
    void thread_k_2_cast_fu_1137_p1();
    void thread_k_2_fu_1131_p2();
    void thread_k_3_fu_1071_p2();
    void thread_k_4_fu_1337_p4();
    void thread_k_5_fu_1347_p1();
    void thread_k_cast_fu_1105_p1();
    void thread_mask_fu_1687_p2();
    void thread_mem_index_gep1_fu_1302_p2();
    void thread_mem_index_gep_fu_1267_p2();
    void thread_p_demorgan_fu_1671_p2();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_address1();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_ce1();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_d1();
    void thread_r_coeffs_we0();
    void thread_r_coeffs_we1();
    void thread_start_pos_fu_1351_p3();
    void thread_swap_fu_784_p2();
    void thread_t_1_fu_921_p2();
    void thread_t_fu_822_p2();
    void thread_tmp21_fu_778_p2();
    void thread_tmp22_fu_865_p2();
    void thread_tmp_105_i_fu_1099_p2();
    void thread_tmp_106_i_fu_1039_p2();
    void thread_tmp_107_i_fu_1045_p1();
    void thread_tmp_108_i_fu_1050_p2();
    void thread_tmp_109_i_fu_1056_p1();
    void thread_tmp_110_i_fu_1090_p3();
    void thread_tmp_111_i_fu_1026_p2();
    void thread_tmp_112_i_fu_988_p1();
    void thread_tmp_113_i_fu_993_p2();
    void thread_tmp_114_i_fu_999_p1();
    void thread_tmp_115_i_fu_1010_p3();
    void thread_tmp_171_fu_692_p1();
    void thread_tmp_172_fu_709_p1();
    void thread_tmp_173_fu_1109_p2();
    void thread_tmp_176_fu_756_p2();
    void thread_tmp_177_fu_1153_p1();
    void thread_tmp_180_fu_1174_p2();
    void thread_tmp_181_fu_859_p2();
    void thread_tmp_182_fu_870_p2();
    void thread_tmp_183_fu_883_p2();
    void thread_tmp_184_fu_901_p3();
    void thread_tmp_185_fu_909_p2();
    void thread_tmp_186_fu_1706_p1();
    void thread_tmp_187_fu_1717_p2();
    void thread_tmp_191_fu_1115_p3();
    void thread_tmp_192_fu_1223_p1();
    void thread_tmp_193_fu_1228_p1();
    void thread_tmp_194_fu_952_p1();
    void thread_tmp_198_fu_970_p1();
    void thread_tmp_202_fu_1076_p2();
    void thread_tmp_207_fu_726_p2();
    void thread_tmp_208_fu_732_p1();
    void thread_tmp_210_fu_762_p3();
    void thread_tmp_211_fu_1711_p2();
    void thread_tmp_212_fu_1211_p1();
    void thread_tmp_213_fu_1245_p1();
    void thread_tmp_214_fu_1273_p1();
    void thread_tmp_216_fu_1366_p1();
    void thread_tmp_217_fu_1370_p1();
    void thread_tmp_218_fu_1374_p4();
    void thread_tmp_219_fu_1384_p2();
    void thread_tmp_220_fu_1390_p2();
    void thread_tmp_221_fu_1396_p2();
    void thread_tmp_222_fu_1402_p3();
    void thread_tmp_223_fu_1410_p3();
    void thread_tmp_224_fu_1418_p3();
    void thread_tmp_225_fu_1426_p2();
    void thread_tmp_226_fu_1432_p1();
    void thread_tmp_227_fu_1544_p1();
    void thread_tmp_228_fu_1436_p2();
    void thread_tmp_229_fu_1547_p2();
    void thread_tmp_230_fu_1553_p2();
    void thread_tmp_231_fu_1558_p1();
    void thread_tmp_232_fu_1308_p1();
    void thread_tmp_233_fu_1442_p2();
    void thread_tmp_234_fu_1448_p1();
    void thread_tmp_235_fu_1452_p1();
    void thread_tmp_236_fu_1456_p4();
    void thread_tmp_237_fu_1466_p2();
    void thread_tmp_238_fu_1472_p2();
    void thread_tmp_239_fu_1478_p2();
    void thread_tmp_240_cast_cast_fu_1123_p3();
    void thread_tmp_240_fu_1484_p3();
    void thread_tmp_241_fu_1492_p3();
    void thread_tmp_242_fu_1500_p3();
    void thread_tmp_243_fu_1508_p2();
    void thread_tmp_244_fu_1514_p1();
    void thread_tmp_245_fu_1518_p1();
    void thread_tmp_246_fu_1522_p2();
    void thread_tmp_247_fu_1528_p2();
    void thread_tmp_248_fu_1534_p2();
    void thread_tmp_249_fu_1540_p1();
    void thread_tmp_250_cast_fu_748_p1();
    void thread_tmp_251_cast_fu_752_p1();
    void thread_tmp_251_fu_1577_p1();
    void thread_tmp_252_fu_1580_p1();
    void thread_tmp_253_fu_1583_p1();
    void thread_tmp_254_fu_1587_p2();
    void thread_tmp_255_fu_1593_p3();
    void thread_tmp_256_fu_1601_p3();
    void thread_tmp_257_cast_fu_875_p3();
    void thread_tmp_257_fu_1609_p3();
    void thread_tmp_258_fu_1617_p2();
    void thread_tmp_259_fu_1623_p1();
    void thread_tmp_260_fu_1627_p1();
    void thread_tmp_261_fu_1631_p1();
    void thread_tmp_262_fu_1635_p2();
    void thread_tmp_263_fu_1641_p4();
    void thread_tmp_264_fu_1651_p3();
    void thread_tmp_265_fu_1659_p2();
    void thread_tmp_266_fu_1665_p2();
    void thread_tmp_267_fu_1677_p2();
    void thread_tmp_268_fu_1684_p1();
    void thread_tmp_270_cast_fu_1180_p1();
    void thread_tmp_361_i1_fu_853_p1();
    void thread_tmp_361_i_fu_810_p1();
    void thread_tmp_362_i1_fu_915_p2();
    void thread_tmp_362_i_fu_816_p2();
    void thread_tmp_363_i1_fu_926_p2();
    void thread_tmp_363_i_fu_827_p2();
    void thread_tmp_364_i1_fu_933_p2();
    void thread_tmp_364_i_fu_834_p2();
    void thread_tmp_386_i_fu_1572_p2();
    void thread_tmp_61_cast_fu_744_p2();
    void thread_tmp_64_cast_fu_774_p1();
    void thread_tmp_64_fu_770_p1();
    void thread_tmp_fu_652_p1();
    void thread_tmp_i1_56_fu_1567_p2();
    void thread_tmp_i1_fu_1562_p2();
    void thread_tmp_i3_cast_fu_790_p3();
    void thread_tmp_i_50_fu_1019_p3();
    void thread_tmp_i_fu_976_p2();
    void thread_tmp_s_fu_675_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif