// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _poly_R2_inv_HH_
#define _poly_R2_inv_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1.h"
#include "crypto_kem_keypair_mul_mul_16s_16s_16_1_1.h"
#include "poly_S3_inv_b_coeffs.h"

namespace ap_rtl {

struct poly_R2_inv : public sc_module {
    // Port declarations 14
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
    sc_out< sc_lv<10> > a_coeffs_address0;
    sc_out< sc_logic > a_coeffs_ce0;
    sc_in< sc_lv<16> > a_coeffs_q0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<11> > ap_var_for_const0;


    // Module declarations
    poly_R2_inv(sc_module_name name);
    SC_HAS_PROCESS(poly_R2_inv);

    ~poly_R2_inv();

    sc_trace_file* mVcdFile;

    poly_S3_inv_b_coeffs* b_coeffs_U;
    poly_S3_inv_b_coeffs* f_coeffs_U;
    poly_S3_inv_b_coeffs* g_coeffs_U;
    crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1<1,15,11,11,11>* crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1_U54;
    crypto_kem_keypair_mul_mul_16s_16s_16_1_1<1,1,16,16,16>* crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U55;
    crypto_kem_keypair_mul_mul_16s_16s_16_1_1<1,1,16,16,16>* crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U56;
    sc_signal< sc_lv<48> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > i_25_fu_590_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond9_fu_579_p2;
    sc_signal< sc_lv<10> > i_26_fu_602_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > i_27_fu_619_p2;
    sc_signal< sc_lv<10> > i_27_reg_1661;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > tmp_215_fu_625_p1;
    sc_signal< sc_lv<64> > tmp_215_reg_1666;
    sc_signal< sc_lv<1> > exitcond7_fu_613_p2;
    sc_signal< sc_lv<10> > i_28_fu_645_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > exitcond6_fu_639_p2;
    sc_signal< sc_lv<11> > j_7_fu_662_p2;
    sc_signal< sc_lv<11> > j_7_reg_1702;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<30> > k_6_cast_cast_fu_700_p1;
    sc_signal< sc_lv<30> > k_6_cast_cast_reg_1707;
    sc_signal< sc_lv<1> > exitcond5_fu_656_p2;
    sc_signal< sc_lv<16> > f_coeffs_q0;
    sc_signal< sc_lv<16> > temp_r_coeffs_load_reg_1712;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > tmp_273_fu_704_p1;
    sc_signal< sc_lv<1> > tmp_273_reg_1718;
    sc_signal< sc_lv<11> > s_assign_cast_fu_708_p1;
    sc_signal< sc_lv<11> > s_assign_cast_reg_1723;
    sc_signal< sc_lv<1> > tmp_274_fu_726_p3;
    sc_signal< sc_lv<1> > tmp_274_reg_1728;
    sc_signal< sc_lv<16> > tmp_67_fu_734_p1;
    sc_signal< sc_lv<16> > tmp_67_reg_1733;
    sc_signal< sc_lv<16> > tmp_i3_cast_fu_750_p3;
    sc_signal< sc_lv<16> > tmp_i3_cast_reg_1738;
    sc_signal< sc_lv<10> > i_20_fu_764_p2;
    sc_signal< sc_lv<10> > i_20_reg_1747;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<10> > temp_r_coeffs_addr_8_reg_1752;
    sc_signal< sc_lv<1> > exitcond_i5_fu_758_p2;
    sc_signal< sc_lv<10> > g_coeffs_addr_4_reg_1757;
    sc_signal< sc_lv<10> > i_21_fu_807_p2;
    sc_signal< sc_lv<10> > i_21_reg_1765;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<10> > b_coeffs_addr_6_reg_1770;
    sc_signal< sc_lv<1> > exitcond_i9_fu_801_p2;
    sc_signal< sc_lv<10> > r_coeffs_addr_11_reg_1775;
    sc_signal< sc_lv<16> > degf_3_fu_849_p2;
    sc_signal< sc_lv<16> > degf_3_reg_1780;
    sc_signal< sc_lv<16> > degg_2_fu_855_p2;
    sc_signal< sc_lv<16> > degg_2_reg_1785;
    sc_signal< sc_lv<16> > tmp_224_fu_861_p3;
    sc_signal< sc_lv<16> > tmp_224_reg_1790;
    sc_signal< sc_lv<10> > i_22_fu_900_p2;
    sc_signal< sc_lv<10> > i_22_reg_1799;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<1> > exitcond4_fu_894_p2;
    sc_signal< sc_lv<10> > temp_r_coeffs_addr_10_reg_1809;
    sc_signal< sc_lv<16> > g_coeffs_q0;
    sc_signal< sc_lv<16> > g_coeffs_load_3_reg_1814;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<16> > tmp_230_fu_1633_p2;
    sc_signal< sc_lv<16> > tmp_230_reg_1819;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<10> > i_24_fu_929_p2;
    sc_signal< sc_lv<10> > i_24_reg_1827;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<1> > exitcond3_fu_923_p2;
    sc_signal< sc_lv<10> > b_coeffs_addr_7_reg_1837;
    sc_signal< sc_lv<1> > tmp_i_fu_941_p2;
    sc_signal< sc_lv<1> > tmp_i_reg_1842;
    sc_signal< sc_lv<16> > r_coeffs_load_reg_1847;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<16> > tmp_236_fu_951_p2;
    sc_signal< sc_lv<16> > tmp_236_reg_1852;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<1> > exitcond_i_fu_957_p2;
    sc_signal< sc_lv<1> > done_reg_442;
    sc_signal< sc_lv<10> > temp_r_coeffs_addr_12_reg_1865;
    sc_signal< sc_lv<10> > i_31_fu_979_p2;
    sc_signal< sc_lv<10> > i_31_reg_1870;
    sc_signal< sc_lv<16> > tmp_i_69_fu_994_p3;
    sc_signal< sc_lv<16> > tmp_i_69_reg_1875;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<1> > exitcond_i3_fu_1008_p2;
    sc_signal< sc_lv<10> > r_coeffs_addr_10_reg_1888;
    sc_signal< sc_lv<10> > i_32_fu_1036_p2;
    sc_signal< sc_lv<10> > i_32_reg_1893;
    sc_signal< sc_lv<16> > degf_4_fu_1042_p2;
    sc_signal< sc_lv<16> > degf_4_reg_1898;
    sc_signal< sc_lv<11> > k_7_fu_1046_p2;
    sc_signal< sc_lv<11> > k_7_reg_1903;
    sc_signal< sc_lv<1> > tmp_332_reg_1908;
    sc_signal< sc_lv<10> > i_29_fu_1086_p2;
    sc_signal< sc_lv<10> > i_29_reg_1916;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<64> > tmp_219_fu_1092_p1;
    sc_signal< sc_lv<64> > tmp_219_reg_1921;
    sc_signal< sc_lv<1> > exitcond2_fu_1080_p2;
    sc_signal< sc_lv<4> > i_30_fu_1107_p2;
    sc_signal< sc_lv<4> > i_30_reg_1934;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_lv<11> > tmp_335_cast_fu_1119_p1;
    sc_signal< sc_lv<11> > tmp_335_cast_reg_1939;
    sc_signal< sc_lv<1> > exitcond1_fu_1101_p2;
    sc_signal< sc_lv<10> > j_8_fu_1133_p2;
    sc_signal< sc_lv<10> > j_8_reg_1947;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<1> > exitcond_fu_1127_p2;
    sc_signal< sc_lv<8> > b_assign_2_cast_fu_1154_p3;
    sc_signal< sc_lv<8> > b_assign_2_cast_reg_1957;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_lv<11> > i_23_fu_1178_p2;
    sc_signal< sc_lv<11> > i_23_reg_1970;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_lv<1> > tmp_277_fu_1184_p1;
    sc_signal< sc_lv<1> > tmp_277_reg_1975;
    sc_signal< sc_lv<1> > exitcond_i8_fu_1172_p2;
    sc_signal< sc_lv<10> > r_coeffs_addr_12_reg_1986;
    sc_signal< sc_lv<30> > tmp_37_fu_1286_p1;
    sc_signal< sc_lv<4> > start_pos_fu_1290_p3;
    sc_signal< sc_lv<4> > start_pos_reg_1996;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_lv<4> > end_pos_fu_1298_p2;
    sc_signal< sc_lv<4> > end_pos_reg_2002;
    sc_signal< sc_lv<5> > tmp_289_fu_1365_p2;
    sc_signal< sc_lv<5> > tmp_289_reg_2008;
    sc_signal< sc_lv<16> > tmp_292_fu_1375_p2;
    sc_signal< sc_lv<16> > tmp_292_reg_2013;
    sc_signal< sc_lv<8> > tmp_312_fu_1479_p1;
    sc_signal< sc_lv<8> > tmp_312_reg_2018;
    sc_signal< sc_lv<10> > b_coeffs_address0;
    sc_signal< sc_logic > b_coeffs_ce0;
    sc_signal< sc_logic > b_coeffs_we0;
    sc_signal< sc_lv<16> > b_coeffs_d0;
    sc_signal< sc_lv<16> > b_coeffs_q0;
    sc_signal< sc_lv<10> > f_coeffs_address0;
    sc_signal< sc_logic > f_coeffs_ce0;
    sc_signal< sc_logic > f_coeffs_we0;
    sc_signal< sc_lv<16> > f_coeffs_d0;
    sc_signal< sc_lv<10> > g_coeffs_address0;
    sc_signal< sc_logic > g_coeffs_ce0;
    sc_signal< sc_logic > g_coeffs_we0;
    sc_signal< sc_lv<16> > g_coeffs_d0;
    sc_signal< sc_lv<10> > i_reg_351;
    sc_signal< sc_lv<10> > i_1_reg_362;
    sc_signal< sc_lv<1> > exitcond8_fu_596_p2;
    sc_signal< sc_lv<10> > i_2_reg_373;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<10> > i_3_reg_384;
    sc_signal< sc_lv<16> > degf_reg_395;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<11> > k_reg_407;
    sc_signal< sc_lv<11> > j_reg_419;
    sc_signal< sc_lv<16> > degg_reg_430;
    sc_signal< sc_lv<10> > i_i4_reg_454;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<10> > i_i8_reg_465;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<10> > i_4_reg_476;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<10> > i_5_reg_487;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<10> > i_i_reg_498;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<10> > i_i2_reg_509;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<10> > i_6_reg_520;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<30> > k_1_reg_531;
    sc_signal< sc_lv<4> > i_7_reg_541;
    sc_signal< sc_lv<10> > j_1_reg_552;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_lv<11> > i_i7_reg_564;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_lv<64> > tmp_fu_585_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_608_p1;
    sc_signal< sc_lv<64> > tmp_216_fu_651_p1;
    sc_signal< sc_lv<64> > tmp_361_i_fu_770_p1;
    sc_signal< sc_lv<64> > tmp_361_i2_fu_813_p1;
    sc_signal< sc_lv<64> > tmp_229_fu_906_p1;
    sc_signal< sc_lv<64> > tmp_233_fu_935_p1;
    sc_signal< sc_lv<64> > tmp_112_i_fu_963_p1;
    sc_signal< sc_lv<64> > tmp_114_i_fu_974_p1;
    sc_signal< sc_lv<64> > tmp_107_i_fu_1020_p1;
    sc_signal< sc_lv<64> > tmp_109_i_fu_1031_p1;
    sc_signal< sc_lv<64> > tmp_227_fu_1162_p1;
    sc_signal< sc_lv<64> > tmp_228_fu_1167_p1;
    sc_signal< sc_lv<64> > gepindex2_cast_fu_1232_p1;
    sc_signal< sc_lv<64> > gepindex2335_cast_fu_1271_p1;
    sc_signal< sc_lv<16> > tmp_363_i2_fu_880_p2;
    sc_signal< sc_lv<16> > tmp_364_i2_fu_887_p2;
    sc_signal< sc_lv<16> > tmp_110_i_fu_1065_p3;
    sc_signal< sc_lv<16> > tmp_105_i_fu_1074_p2;
    sc_signal< sc_lv<16> > tmp_330_fu_1616_p2;
    sc_signal< sc_lv<2> > mask_fu_1626_p2;
    sc_signal< sc_lv<16> > tmp_308_cast_fu_634_p1;
    sc_signal< sc_lv<16> > tmp_363_i_fu_787_p2;
    sc_signal< sc_lv<16> > tmp_232_fu_916_p2;
    sc_signal< sc_lv<16> > tmp_115_i_fu_985_p3;
    sc_signal< sc_lv<16> > tmp_111_i_fu_1001_p2;
    sc_signal< sc_lv<16> > tmp_364_i_fu_794_p2;
    sc_signal< sc_lv<4> > grp_fu_575_p0;
    sc_signal< sc_lv<4> > grp_fu_575_p1;
    sc_signal< sc_lv<1> > tmp_271_fu_630_p1;
    sc_signal< sc_lv<11> > tmp_217_fu_672_p2;
    sc_signal< sc_lv<1> > tmp_272_fu_678_p3;
    sc_signal< sc_lv<12> > k_cast_fu_668_p1;
    sc_signal< sc_lv<12> > tmp_315_cast_cast_fu_686_p3;
    sc_signal< sc_lv<12> > k_6_fu_694_p2;
    sc_signal< sc_lv<16> > tmp_273_fu_704_p0;
    sc_signal< sc_lv<17> > tmp_318_cast_fu_712_p1;
    sc_signal< sc_lv<17> > tmp_319_cast_fu_716_p1;
    sc_signal< sc_lv<17> > tmp_218_fu_720_p2;
    sc_signal< sc_lv<1> > tmp21_fu_738_p2;
    sc_signal< sc_lv<1> > swap_fu_744_p2;
    sc_signal< sc_lv<16> > tmp_362_i_fu_776_p2;
    sc_signal< sc_lv<16> > t_fu_782_p2;
    sc_signal< sc_lv<1> > tmp22_fu_825_p2;
    sc_signal< sc_lv<1> > tmp_222_fu_830_p2;
    sc_signal< sc_lv<16> > tmp_221_fu_819_p2;
    sc_signal< sc_lv<16> > tmp_325_cast_fu_835_p3;
    sc_signal< sc_lv<16> > tmp_223_fu_843_p2;
    sc_signal< sc_lv<16> > tmp_362_i2_fu_869_p2;
    sc_signal< sc_lv<16> > t_2_fu_875_p2;
    sc_signal< sc_lv<16> > tmp_231_fu_912_p2;
    sc_signal< sc_lv<16> > tmp_234_fu_1637_p2;
    sc_signal< sc_lv<16> > tmp_235_fu_947_p2;
    sc_signal< sc_lv<10> > tmp_113_i_fu_968_p2;
    sc_signal< sc_lv<10> > tmp_106_i_fu_1014_p2;
    sc_signal< sc_lv<10> > tmp_108_i_fu_1025_p2;
    sc_signal< sc_lv<16> > tmp_237_fu_1051_p2;
    sc_signal< sc_lv<10> > i_7_cast_fu_1097_p1;
    sc_signal< sc_lv<10> > tmp_220_fu_1113_p2;
    sc_signal< sc_lv<11> > j_1_cast_fu_1123_p1;
    sc_signal< sc_lv<11> > grp_fu_1144_p0;
    sc_signal< sc_lv<1> > tmp_275_fu_1150_p1;
    sc_signal< sc_lv<11> > grp_fu_1144_p2;
    sc_signal< sc_lv<10> > adjSize_fu_1188_p4;
    sc_signal< sc_lv<12> > adjSize309_cast_cast_fu_1198_p1;
    sc_signal< sc_lv<12> > mem_index_gep_fu_1202_p2;
    sc_signal< sc_lv<10> > tmp_278_fu_1208_p1;
    sc_signal< sc_lv<1> > addrCmp_fu_1212_p2;
    sc_signal< sc_lv<10> > gepindex_fu_1218_p2;
    sc_signal< sc_lv<10> > gepindex2_fu_1224_p3;
    sc_signal< sc_lv<16> > adjSize311_cast_fu_1237_p1;
    sc_signal< sc_lv<16> > mem_index_gep2_fu_1241_p2;
    sc_signal< sc_lv<1> > addrCmp2_fu_1247_p2;
    sc_signal< sc_lv<10> > gepindex333_cast_fu_1253_p4;
    sc_signal< sc_lv<10> > gepindex4_fu_1263_p3;
    sc_signal< sc_lv<29> > tmp_276_fu_1276_p4;
    sc_signal< sc_lv<5> > tmp_280_fu_1305_p1;
    sc_signal< sc_lv<5> > tmp_281_fu_1309_p1;
    sc_signal< sc_lv<1> > grp_fu_575_p2;
    sc_signal< sc_lv<5> > tmp_283_fu_1323_p2;
    sc_signal< sc_lv<5> > tmp_285_fu_1335_p2;
    sc_signal< sc_lv<16> > tmp_282_fu_1313_p4;
    sc_signal< sc_lv<5> > tmp_284_fu_1329_p2;
    sc_signal< sc_lv<5> > tmp_286_fu_1341_p3;
    sc_signal< sc_lv<5> > tmp_288_fu_1357_p3;
    sc_signal< sc_lv<16> > tmp_287_fu_1349_p3;
    sc_signal< sc_lv<16> > tmp_290_fu_1371_p1;
    sc_signal< sc_lv<5> > tmp_297_fu_1387_p1;
    sc_signal< sc_lv<5> > tmp_298_fu_1391_p1;
    sc_signal< sc_lv<1> > tmp_296_fu_1381_p2;
    sc_signal< sc_lv<5> > tmp_300_fu_1405_p2;
    sc_signal< sc_lv<5> > tmp_302_fu_1417_p2;
    sc_signal< sc_lv<16> > tmp_299_fu_1395_p4;
    sc_signal< sc_lv<5> > tmp_301_fu_1411_p2;
    sc_signal< sc_lv<5> > tmp_303_fu_1423_p3;
    sc_signal< sc_lv<5> > tmp_305_fu_1439_p3;
    sc_signal< sc_lv<5> > tmp_306_fu_1447_p2;
    sc_signal< sc_lv<16> > tmp_304_fu_1431_p3;
    sc_signal< sc_lv<16> > tmp_307_fu_1453_p1;
    sc_signal< sc_lv<16> > tmp_308_fu_1457_p1;
    sc_signal< sc_lv<16> > tmp_309_fu_1461_p2;
    sc_signal< sc_lv<16> > tmp_310_fu_1467_p2;
    sc_signal< sc_lv<16> > tmp_311_fu_1473_p2;
    sc_signal< sc_lv<16> > tmp_291_fu_1483_p1;
    sc_signal< sc_lv<16> > tmp_293_fu_1486_p2;
    sc_signal< sc_lv<16> > tmp_294_fu_1492_p2;
    sc_signal< sc_lv<8> > tmp_295_fu_1497_p1;
    sc_signal< sc_lv<8> > tmp_i9_fu_1501_p2;
    sc_signal< sc_lv<8> > tmp_i2_fu_1506_p2;
    sc_signal< sc_lv<8> > tmp_386_i_fu_1511_p2;
    sc_signal< sc_lv<5> > tmp_314_fu_1516_p1;
    sc_signal< sc_lv<5> > tmp_315_fu_1519_p1;
    sc_signal< sc_lv<5> > tmp_317_fu_1526_p2;
    sc_signal< sc_lv<5> > tmp_318_fu_1532_p3;
    sc_signal< sc_lv<5> > tmp_320_fu_1548_p3;
    sc_signal< sc_lv<5> > tmp_319_fu_1540_p3;
    sc_signal< sc_lv<5> > tmp_321_fu_1556_p2;
    sc_signal< sc_lv<16> > tmp_316_fu_1522_p1;
    sc_signal< sc_lv<16> > tmp_322_fu_1562_p1;
    sc_signal< sc_lv<16> > tmp_325_fu_1574_p2;
    sc_signal< sc_lv<16> > tmp_326_fu_1580_p4;
    sc_signal< sc_lv<16> > tmp_323_fu_1566_p1;
    sc_signal< sc_lv<16> > tmp_324_fu_1570_p1;
    sc_signal< sc_lv<16> > tmp_328_fu_1598_p2;
    sc_signal< sc_lv<16> > tmp_329_fu_1604_p2;
    sc_signal< sc_lv<16> > tmp_327_fu_1590_p3;
    sc_signal< sc_lv<16> > p_demorgan_fu_1610_p2;
    sc_signal< sc_lv<2> > tmp_331_fu_1623_p1;
    sc_signal< sc_logic > grp_fu_1144_ap_start;
    sc_signal< sc_logic > grp_fu_1144_ap_done;
    sc_signal< sc_lv<48> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<48> ap_ST_fsm_state1;
    static const sc_lv<48> ap_ST_fsm_state2;
    static const sc_lv<48> ap_ST_fsm_state3;
    static const sc_lv<48> ap_ST_fsm_state4;
    static const sc_lv<48> ap_ST_fsm_state5;
    static const sc_lv<48> ap_ST_fsm_state6;
    static const sc_lv<48> ap_ST_fsm_state7;
    static const sc_lv<48> ap_ST_fsm_state8;
    static const sc_lv<48> ap_ST_fsm_state9;
    static const sc_lv<48> ap_ST_fsm_state10;
    static const sc_lv<48> ap_ST_fsm_state11;
    static const sc_lv<48> ap_ST_fsm_state12;
    static const sc_lv<48> ap_ST_fsm_state13;
    static const sc_lv<48> ap_ST_fsm_state14;
    static const sc_lv<48> ap_ST_fsm_state15;
    static const sc_lv<48> ap_ST_fsm_state16;
    static const sc_lv<48> ap_ST_fsm_state17;
    static const sc_lv<48> ap_ST_fsm_state18;
    static const sc_lv<48> ap_ST_fsm_state19;
    static const sc_lv<48> ap_ST_fsm_state20;
    static const sc_lv<48> ap_ST_fsm_state21;
    static const sc_lv<48> ap_ST_fsm_state22;
    static const sc_lv<48> ap_ST_fsm_state23;
    static const sc_lv<48> ap_ST_fsm_state24;
    static const sc_lv<48> ap_ST_fsm_state25;
    static const sc_lv<48> ap_ST_fsm_state26;
    static const sc_lv<48> ap_ST_fsm_state27;
    static const sc_lv<48> ap_ST_fsm_state28;
    static const sc_lv<48> ap_ST_fsm_state29;
    static const sc_lv<48> ap_ST_fsm_state30;
    static const sc_lv<48> ap_ST_fsm_state31;
    static const sc_lv<48> ap_ST_fsm_state32;
    static const sc_lv<48> ap_ST_fsm_state33;
    static const sc_lv<48> ap_ST_fsm_state34;
    static const sc_lv<48> ap_ST_fsm_state35;
    static const sc_lv<48> ap_ST_fsm_state36;
    static const sc_lv<48> ap_ST_fsm_state37;
    static const sc_lv<48> ap_ST_fsm_state38;
    static const sc_lv<48> ap_ST_fsm_state39;
    static const sc_lv<48> ap_ST_fsm_state40;
    static const sc_lv<48> ap_ST_fsm_state41;
    static const sc_lv<48> ap_ST_fsm_state42;
    static const sc_lv<48> ap_ST_fsm_state43;
    static const sc_lv<48> ap_ST_fsm_state44;
    static const sc_lv<48> ap_ST_fsm_state45;
    static const sc_lv<48> ap_ST_fsm_state46;
    static const sc_lv<48> ap_ST_fsm_state47;
    static const sc_lv<48> ap_ST_fsm_state48;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<16> ap_const_lv16_2A4;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_2A4;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<16> ap_const_lv16_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<10> ap_const_lv10_2A5;
    static const sc_lv<11> ap_const_lv11_547;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<11> ap_const_lv11_2A4;
    static const sc_lv<12> ap_const_lv12_2A5;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<16> ap_const_lv16_FFFF;
    static const sc_lv<10> ap_const_lv10_3FF;
    static const sc_lv<10> ap_const_lv10_2A4;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<11> ap_const_lv11_2A5;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<11> ap_const_lv11_54A;
    static const sc_lv<12> ap_const_lv12_816;
    static const sc_lv<12> ap_const_lv12_ABB;
    static const sc_lv<10> ap_const_lv10_3EA;
    static const sc_lv<16> ap_const_lv16_7D60;
    static const sc_lv<16> ap_const_lv16_8005;
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
    void thread_addrCmp2_fu_1247_p2();
    void thread_addrCmp_fu_1212_p2();
    void thread_adjSize309_cast_cast_fu_1198_p1();
    void thread_adjSize311_cast_fu_1237_p1();
    void thread_adjSize_fu_1188_p4();
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
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_assign_2_cast_fu_1154_p3();
    void thread_b_coeffs_address0();
    void thread_b_coeffs_ce0();
    void thread_b_coeffs_d0();
    void thread_b_coeffs_we0();
    void thread_degf_3_fu_849_p2();
    void thread_degf_4_fu_1042_p2();
    void thread_degg_2_fu_855_p2();
    void thread_end_pos_fu_1298_p2();
    void thread_exitcond1_fu_1101_p2();
    void thread_exitcond2_fu_1080_p2();
    void thread_exitcond3_fu_923_p2();
    void thread_exitcond4_fu_894_p2();
    void thread_exitcond5_fu_656_p2();
    void thread_exitcond6_fu_639_p2();
    void thread_exitcond7_fu_613_p2();
    void thread_exitcond8_fu_596_p2();
    void thread_exitcond9_fu_579_p2();
    void thread_exitcond_fu_1127_p2();
    void thread_exitcond_i3_fu_1008_p2();
    void thread_exitcond_i5_fu_758_p2();
    void thread_exitcond_i8_fu_1172_p2();
    void thread_exitcond_i9_fu_801_p2();
    void thread_exitcond_i_fu_957_p2();
    void thread_f_coeffs_address0();
    void thread_f_coeffs_ce0();
    void thread_f_coeffs_d0();
    void thread_f_coeffs_we0();
    void thread_g_coeffs_address0();
    void thread_g_coeffs_ce0();
    void thread_g_coeffs_d0();
    void thread_g_coeffs_we0();
    void thread_gepindex2335_cast_fu_1271_p1();
    void thread_gepindex2_cast_fu_1232_p1();
    void thread_gepindex2_fu_1224_p3();
    void thread_gepindex333_cast_fu_1253_p4();
    void thread_gepindex4_fu_1263_p3();
    void thread_gepindex_fu_1218_p2();
    void thread_grp_fu_1144_ap_start();
    void thread_grp_fu_1144_p0();
    void thread_grp_fu_575_p0();
    void thread_grp_fu_575_p1();
    void thread_grp_fu_575_p2();
    void thread_i_20_fu_764_p2();
    void thread_i_21_fu_807_p2();
    void thread_i_22_fu_900_p2();
    void thread_i_23_fu_1178_p2();
    void thread_i_24_fu_929_p2();
    void thread_i_25_fu_590_p2();
    void thread_i_26_fu_602_p2();
    void thread_i_27_fu_619_p2();
    void thread_i_28_fu_645_p2();
    void thread_i_29_fu_1086_p2();
    void thread_i_30_fu_1107_p2();
    void thread_i_31_fu_979_p2();
    void thread_i_32_fu_1036_p2();
    void thread_i_7_cast_fu_1097_p1();
    void thread_j_1_cast_fu_1123_p1();
    void thread_j_7_fu_662_p2();
    void thread_j_8_fu_1133_p2();
    void thread_k_6_cast_cast_fu_700_p1();
    void thread_k_6_fu_694_p2();
    void thread_k_7_fu_1046_p2();
    void thread_k_cast_fu_668_p1();
    void thread_mask_fu_1626_p2();
    void thread_mem_index_gep2_fu_1241_p2();
    void thread_mem_index_gep_fu_1202_p2();
    void thread_p_demorgan_fu_1610_p2();
    void thread_r_coeffs_address0();
    void thread_r_coeffs_ce0();
    void thread_r_coeffs_d0();
    void thread_r_coeffs_we0();
    void thread_s_assign_cast_fu_708_p1();
    void thread_start_pos_fu_1290_p3();
    void thread_swap_fu_744_p2();
    void thread_t_2_fu_875_p2();
    void thread_t_fu_782_p2();
    void thread_tmp21_fu_738_p2();
    void thread_tmp22_fu_825_p2();
    void thread_tmp_105_i_fu_1074_p2();
    void thread_tmp_106_i_fu_1014_p2();
    void thread_tmp_107_i_fu_1020_p1();
    void thread_tmp_108_i_fu_1025_p2();
    void thread_tmp_109_i_fu_1031_p1();
    void thread_tmp_110_i_fu_1065_p3();
    void thread_tmp_111_i_fu_1001_p2();
    void thread_tmp_112_i_fu_963_p1();
    void thread_tmp_113_i_fu_968_p2();
    void thread_tmp_114_i_fu_974_p1();
    void thread_tmp_115_i_fu_985_p3();
    void thread_tmp_215_fu_625_p1();
    void thread_tmp_216_fu_651_p1();
    void thread_tmp_217_fu_672_p2();
    void thread_tmp_218_fu_720_p2();
    void thread_tmp_219_fu_1092_p1();
    void thread_tmp_220_fu_1113_p2();
    void thread_tmp_221_fu_819_p2();
    void thread_tmp_222_fu_830_p2();
    void thread_tmp_223_fu_843_p2();
    void thread_tmp_224_fu_861_p3();
    void thread_tmp_227_fu_1162_p1();
    void thread_tmp_228_fu_1167_p1();
    void thread_tmp_229_fu_906_p1();
    void thread_tmp_231_fu_912_p2();
    void thread_tmp_232_fu_916_p2();
    void thread_tmp_233_fu_935_p1();
    void thread_tmp_235_fu_947_p2();
    void thread_tmp_236_fu_951_p2();
    void thread_tmp_237_fu_1051_p2();
    void thread_tmp_271_fu_630_p1();
    void thread_tmp_272_fu_678_p3();
    void thread_tmp_273_fu_704_p0();
    void thread_tmp_273_fu_704_p1();
    void thread_tmp_274_fu_726_p3();
    void thread_tmp_275_fu_1150_p1();
    void thread_tmp_276_fu_1276_p4();
    void thread_tmp_277_fu_1184_p1();
    void thread_tmp_278_fu_1208_p1();
    void thread_tmp_280_fu_1305_p1();
    void thread_tmp_281_fu_1309_p1();
    void thread_tmp_282_fu_1313_p4();
    void thread_tmp_283_fu_1323_p2();
    void thread_tmp_284_fu_1329_p2();
    void thread_tmp_285_fu_1335_p2();
    void thread_tmp_286_fu_1341_p3();
    void thread_tmp_287_fu_1349_p3();
    void thread_tmp_288_fu_1357_p3();
    void thread_tmp_289_fu_1365_p2();
    void thread_tmp_290_fu_1371_p1();
    void thread_tmp_291_fu_1483_p1();
    void thread_tmp_292_fu_1375_p2();
    void thread_tmp_293_fu_1486_p2();
    void thread_tmp_294_fu_1492_p2();
    void thread_tmp_295_fu_1497_p1();
    void thread_tmp_296_fu_1381_p2();
    void thread_tmp_297_fu_1387_p1();
    void thread_tmp_298_fu_1391_p1();
    void thread_tmp_299_fu_1395_p4();
    void thread_tmp_300_fu_1405_p2();
    void thread_tmp_301_fu_1411_p2();
    void thread_tmp_302_fu_1417_p2();
    void thread_tmp_303_fu_1423_p3();
    void thread_tmp_304_fu_1431_p3();
    void thread_tmp_305_fu_1439_p3();
    void thread_tmp_306_fu_1447_p2();
    void thread_tmp_307_fu_1453_p1();
    void thread_tmp_308_cast_fu_634_p1();
    void thread_tmp_308_fu_1457_p1();
    void thread_tmp_309_fu_1461_p2();
    void thread_tmp_310_fu_1467_p2();
    void thread_tmp_311_fu_1473_p2();
    void thread_tmp_312_fu_1479_p1();
    void thread_tmp_314_fu_1516_p1();
    void thread_tmp_315_cast_cast_fu_686_p3();
    void thread_tmp_315_fu_1519_p1();
    void thread_tmp_316_fu_1522_p1();
    void thread_tmp_317_fu_1526_p2();
    void thread_tmp_318_cast_fu_712_p1();
    void thread_tmp_318_fu_1532_p3();
    void thread_tmp_319_cast_fu_716_p1();
    void thread_tmp_319_fu_1540_p3();
    void thread_tmp_320_fu_1548_p3();
    void thread_tmp_321_fu_1556_p2();
    void thread_tmp_322_fu_1562_p1();
    void thread_tmp_323_fu_1566_p1();
    void thread_tmp_324_fu_1570_p1();
    void thread_tmp_325_cast_fu_835_p3();
    void thread_tmp_325_fu_1574_p2();
    void thread_tmp_326_fu_1580_p4();
    void thread_tmp_327_fu_1590_p3();
    void thread_tmp_328_fu_1598_p2();
    void thread_tmp_329_fu_1604_p2();
    void thread_tmp_330_fu_1616_p2();
    void thread_tmp_331_fu_1623_p1();
    void thread_tmp_335_cast_fu_1119_p1();
    void thread_tmp_361_i2_fu_813_p1();
    void thread_tmp_361_i_fu_770_p1();
    void thread_tmp_362_i2_fu_869_p2();
    void thread_tmp_362_i_fu_776_p2();
    void thread_tmp_363_i2_fu_880_p2();
    void thread_tmp_363_i_fu_787_p2();
    void thread_tmp_364_i2_fu_887_p2();
    void thread_tmp_364_i_fu_794_p2();
    void thread_tmp_37_fu_1286_p1();
    void thread_tmp_386_i_fu_1511_p2();
    void thread_tmp_67_fu_734_p1();
    void thread_tmp_fu_585_p1();
    void thread_tmp_i2_fu_1506_p2();
    void thread_tmp_i3_cast_fu_750_p3();
    void thread_tmp_i9_fu_1501_p2();
    void thread_tmp_i_69_fu_994_p3();
    void thread_tmp_i_fu_941_p2();
    void thread_tmp_s_fu_608_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
