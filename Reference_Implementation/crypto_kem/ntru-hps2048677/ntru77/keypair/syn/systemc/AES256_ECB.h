// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _AES256_ECB_HH_
#define _AES256_ECB_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "KeyExpansion.h"
#include "Cipher.h"
#include "AES256_ECB_ctx_RoundKey.h"
#include "AES256_ECB_1_test.h"

namespace ap_rtl {

struct AES256_ECB : public sc_module {
    // Port declarations 27
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > key_address0;
    sc_out< sc_logic > key_ce0;
    sc_in< sc_lv<8> > key_q0;
    sc_out< sc_lv<5> > key_address1;
    sc_out< sc_logic > key_ce1;
    sc_in< sc_lv<8> > key_q1;
    sc_out< sc_lv<4> > ctr_address0;
    sc_out< sc_logic > ctr_ce0;
    sc_in< sc_lv<8> > ctr_q0;
    sc_out< sc_lv<4> > ctr_address1;
    sc_out< sc_logic > ctr_ce1;
    sc_in< sc_lv<8> > ctr_q1;
    sc_out< sc_lv<6> > buffer_r_address0;
    sc_out< sc_logic > buffer_r_ce0;
    sc_out< sc_logic > buffer_r_we0;
    sc_out< sc_lv<8> > buffer_r_d0;
    sc_out< sc_lv<6> > buffer_r_address1;
    sc_out< sc_logic > buffer_r_ce1;
    sc_out< sc_logic > buffer_r_we1;
    sc_out< sc_lv<8> > buffer_r_d1;
    sc_in< sc_lv<6> > buffer_offset;


    // Module declarations
    AES256_ECB(sc_module_name name);
    SC_HAS_PROCESS(AES256_ECB);

    ~AES256_ECB();

    sc_trace_file* mVcdFile;

    AES256_ECB_ctx_RoundKey* ctx_RoundKey_U;
    AES256_ECB_1_test* test_U;
    KeyExpansion* grp_KeyExpansion_fu_525;
    Cipher* grp_Cipher_fu_536;
    sc_signal< sc_lv<20> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > test_addr_reg_710;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > test_addr_1_reg_715;
    sc_signal< sc_lv<4> > test_addr_2_reg_730;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > test_addr_3_reg_735;
    sc_signal< sc_lv<4> > test_addr_4_reg_750;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > test_addr_5_reg_755;
    sc_signal< sc_lv<4> > test_addr_6_reg_770;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > test_addr_7_reg_775;
    sc_signal< sc_lv<4> > test_addr_8_reg_790;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<4> > test_addr_9_reg_795;
    sc_signal< sc_lv<4> > test_addr_10_reg_810;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<4> > test_addr_11_reg_815;
    sc_signal< sc_lv<4> > test_addr_12_reg_830;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > test_addr_13_reg_835;
    sc_signal< sc_lv<4> > test_addr_14_reg_850;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_ap_ready;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_ap_done;
    sc_signal< sc_lv<4> > test_addr_15_reg_855;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<8> > ctx_RoundKey_address0;
    sc_signal< sc_logic > ctx_RoundKey_ce0;
    sc_signal< sc_logic > ctx_RoundKey_we0;
    sc_signal< sc_lv<8> > ctx_RoundKey_q0;
    sc_signal< sc_logic > ctx_RoundKey_ce1;
    sc_signal< sc_logic > ctx_RoundKey_we1;
    sc_signal< sc_lv<8> > ctx_RoundKey_q1;
    sc_signal< sc_lv<4> > test_address0;
    sc_signal< sc_logic > test_ce0;
    sc_signal< sc_logic > test_we0;
    sc_signal< sc_lv<8> > test_d0;
    sc_signal< sc_lv<8> > test_q0;
    sc_signal< sc_lv<4> > test_address1;
    sc_signal< sc_logic > test_ce1;
    sc_signal< sc_logic > test_we1;
    sc_signal< sc_lv<8> > test_d1;
    sc_signal< sc_lv<8> > test_q1;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_ap_start;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_ap_idle;
    sc_signal< sc_lv<8> > grp_KeyExpansion_fu_525_RoundKey_address0;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_RoundKey_ce0;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_RoundKey_we0;
    sc_signal< sc_lv<8> > grp_KeyExpansion_fu_525_RoundKey_d0;
    sc_signal< sc_lv<8> > grp_KeyExpansion_fu_525_RoundKey_address1;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_RoundKey_ce1;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_RoundKey_we1;
    sc_signal< sc_lv<8> > grp_KeyExpansion_fu_525_RoundKey_d1;
    sc_signal< sc_lv<5> > grp_KeyExpansion_fu_525_Key_address0;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_Key_ce0;
    sc_signal< sc_lv<5> > grp_KeyExpansion_fu_525_Key_address1;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_Key_ce1;
    sc_signal< sc_logic > grp_Cipher_fu_536_ap_start;
    sc_signal< sc_logic > grp_Cipher_fu_536_ap_done;
    sc_signal< sc_logic > grp_Cipher_fu_536_ap_idle;
    sc_signal< sc_logic > grp_Cipher_fu_536_ap_ready;
    sc_signal< sc_lv<4> > grp_Cipher_fu_536_state_address0;
    sc_signal< sc_logic > grp_Cipher_fu_536_state_ce0;
    sc_signal< sc_logic > grp_Cipher_fu_536_state_we0;
    sc_signal< sc_lv<8> > grp_Cipher_fu_536_state_d0;
    sc_signal< sc_lv<4> > grp_Cipher_fu_536_state_address1;
    sc_signal< sc_logic > grp_Cipher_fu_536_state_ce1;
    sc_signal< sc_logic > grp_Cipher_fu_536_state_we1;
    sc_signal< sc_lv<8> > grp_Cipher_fu_536_state_d1;
    sc_signal< sc_lv<8> > grp_Cipher_fu_536_RoundKey_address0;
    sc_signal< sc_logic > grp_Cipher_fu_536_RoundKey_ce0;
    sc_signal< sc_logic > grp_KeyExpansion_fu_525_ap_start_reg;
    sc_signal< sc_logic > grp_Cipher_fu_536_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > buffer_offset_cast_fu_544_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_555_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_565_p1;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<64> > sum6_cast_fu_575_p1;
    sc_signal< sc_lv<64> > sum8_cast_fu_585_p1;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<64> > sum10_cast_fu_595_p1;
    sc_signal< sc_lv<64> > sum12_cast_fu_605_p1;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<64> > sum14_cast_fu_615_p1;
    sc_signal< sc_lv<64> > sum16_cast_fu_625_p1;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > sum18_cast_fu_635_p1;
    sc_signal< sc_lv<64> > sum20_cast_fu_645_p1;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<64> > sum21_cast_fu_655_p1;
    sc_signal< sc_lv<64> > sum22_cast_fu_665_p1;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<64> > sum23_cast_fu_675_p1;
    sc_signal< sc_lv<64> > sum24_cast_fu_685_p1;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<64> > sum25_cast_fu_695_p1;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<6> > sum_fu_549_p2;
    sc_signal< sc_lv<6> > sum2_fu_560_p2;
    sc_signal< sc_lv<6> > sum6_fu_570_p2;
    sc_signal< sc_lv<6> > sum8_fu_580_p2;
    sc_signal< sc_lv<6> > sum10_fu_590_p2;
    sc_signal< sc_lv<6> > sum12_fu_600_p2;
    sc_signal< sc_lv<6> > sum14_fu_610_p2;
    sc_signal< sc_lv<6> > sum16_fu_620_p2;
    sc_signal< sc_lv<6> > sum18_fu_630_p2;
    sc_signal< sc_lv<6> > sum20_fu_640_p2;
    sc_signal< sc_lv<6> > sum21_fu_650_p2;
    sc_signal< sc_lv<6> > sum22_fu_660_p2;
    sc_signal< sc_lv<6> > sum23_fu_670_p2;
    sc_signal< sc_lv<6> > sum24_fu_680_p2;
    sc_signal< sc_lv<6> > sum25_fu_690_p2;
    sc_signal< sc_lv<20> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<20> ap_ST_fsm_state1;
    static const sc_lv<20> ap_ST_fsm_state2;
    static const sc_lv<20> ap_ST_fsm_state3;
    static const sc_lv<20> ap_ST_fsm_state4;
    static const sc_lv<20> ap_ST_fsm_state5;
    static const sc_lv<20> ap_ST_fsm_state6;
    static const sc_lv<20> ap_ST_fsm_state7;
    static const sc_lv<20> ap_ST_fsm_state8;
    static const sc_lv<20> ap_ST_fsm_state9;
    static const sc_lv<20> ap_ST_fsm_state10;
    static const sc_lv<20> ap_ST_fsm_state11;
    static const sc_lv<20> ap_ST_fsm_state12;
    static const sc_lv<20> ap_ST_fsm_state13;
    static const sc_lv<20> ap_ST_fsm_state14;
    static const sc_lv<20> ap_ST_fsm_state15;
    static const sc_lv<20> ap_ST_fsm_state16;
    static const sc_lv<20> ap_ST_fsm_state17;
    static const sc_lv<20> ap_ST_fsm_state18;
    static const sc_lv<20> ap_ST_fsm_state19;
    static const sc_lv<20> ap_ST_fsm_state20;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_2;
    static const sc_lv<6> ap_const_lv6_3;
    static const sc_lv<6> ap_const_lv6_4;
    static const sc_lv<6> ap_const_lv6_5;
    static const sc_lv<6> ap_const_lv6_6;
    static const sc_lv<6> ap_const_lv6_7;
    static const sc_lv<6> ap_const_lv6_8;
    static const sc_lv<6> ap_const_lv6_9;
    static const sc_lv<6> ap_const_lv6_A;
    static const sc_lv<6> ap_const_lv6_B;
    static const sc_lv<6> ap_const_lv6_C;
    static const sc_lv<6> ap_const_lv6_D;
    static const sc_lv<6> ap_const_lv6_E;
    static const sc_lv<6> ap_const_lv6_F;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
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
    void thread_buffer_offset_cast_fu_544_p1();
    void thread_buffer_r_address0();
    void thread_buffer_r_address1();
    void thread_buffer_r_ce0();
    void thread_buffer_r_ce1();
    void thread_buffer_r_d0();
    void thread_buffer_r_d1();
    void thread_buffer_r_we0();
    void thread_buffer_r_we1();
    void thread_ctr_address0();
    void thread_ctr_address1();
    void thread_ctr_ce0();
    void thread_ctr_ce1();
    void thread_ctx_RoundKey_address0();
    void thread_ctx_RoundKey_ce0();
    void thread_ctx_RoundKey_ce1();
    void thread_ctx_RoundKey_we0();
    void thread_ctx_RoundKey_we1();
    void thread_grp_Cipher_fu_536_ap_start();
    void thread_grp_KeyExpansion_fu_525_ap_start();
    void thread_key_address0();
    void thread_key_address1();
    void thread_key_ce0();
    void thread_key_ce1();
    void thread_sum10_cast_fu_595_p1();
    void thread_sum10_fu_590_p2();
    void thread_sum12_cast_fu_605_p1();
    void thread_sum12_fu_600_p2();
    void thread_sum14_cast_fu_615_p1();
    void thread_sum14_fu_610_p2();
    void thread_sum16_cast_fu_625_p1();
    void thread_sum16_fu_620_p2();
    void thread_sum18_cast_fu_635_p1();
    void thread_sum18_fu_630_p2();
    void thread_sum20_cast_fu_645_p1();
    void thread_sum20_fu_640_p2();
    void thread_sum21_cast_fu_655_p1();
    void thread_sum21_fu_650_p2();
    void thread_sum22_cast_fu_665_p1();
    void thread_sum22_fu_660_p2();
    void thread_sum23_cast_fu_675_p1();
    void thread_sum23_fu_670_p2();
    void thread_sum24_cast_fu_685_p1();
    void thread_sum24_fu_680_p2();
    void thread_sum25_cast_fu_695_p1();
    void thread_sum25_fu_690_p2();
    void thread_sum2_cast_fu_565_p1();
    void thread_sum2_fu_560_p2();
    void thread_sum6_cast_fu_575_p1();
    void thread_sum6_fu_570_p2();
    void thread_sum8_cast_fu_585_p1();
    void thread_sum8_fu_580_p2();
    void thread_sum_cast_fu_555_p1();
    void thread_sum_fu_549_p2();
    void thread_test_addr_10_reg_810();
    void thread_test_addr_11_reg_815();
    void thread_test_addr_12_reg_830();
    void thread_test_addr_13_reg_835();
    void thread_test_addr_14_reg_850();
    void thread_test_addr_15_reg_855();
    void thread_test_addr_1_reg_715();
    void thread_test_addr_2_reg_730();
    void thread_test_addr_3_reg_735();
    void thread_test_addr_4_reg_750();
    void thread_test_addr_5_reg_755();
    void thread_test_addr_6_reg_770();
    void thread_test_addr_7_reg_775();
    void thread_test_addr_8_reg_790();
    void thread_test_addr_9_reg_795();
    void thread_test_addr_reg_710();
    void thread_test_address0();
    void thread_test_address1();
    void thread_test_ce0();
    void thread_test_ce1();
    void thread_test_d0();
    void thread_test_d1();
    void thread_test_we0();
    void thread_test_we1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
