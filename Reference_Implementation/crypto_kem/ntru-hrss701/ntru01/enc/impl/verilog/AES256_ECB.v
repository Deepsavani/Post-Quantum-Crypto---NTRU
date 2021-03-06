// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module AES256_ECB (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        key_address0,
        key_ce0,
        key_q0,
        key_address1,
        key_ce1,
        key_q1,
        ctr_address0,
        ctr_ce0,
        ctr_q0,
        ctr_address1,
        ctr_ce1,
        ctr_q1,
        buffer_r_address0,
        buffer_r_ce0,
        buffer_r_we0,
        buffer_r_d0,
        buffer_r_address1,
        buffer_r_ce1,
        buffer_r_we1,
        buffer_r_d1,
        buffer_offset
);

parameter    ap_ST_fsm_state1 = 20'd1;
parameter    ap_ST_fsm_state2 = 20'd2;
parameter    ap_ST_fsm_state3 = 20'd4;
parameter    ap_ST_fsm_state4 = 20'd8;
parameter    ap_ST_fsm_state5 = 20'd16;
parameter    ap_ST_fsm_state6 = 20'd32;
parameter    ap_ST_fsm_state7 = 20'd64;
parameter    ap_ST_fsm_state8 = 20'd128;
parameter    ap_ST_fsm_state9 = 20'd256;
parameter    ap_ST_fsm_state10 = 20'd512;
parameter    ap_ST_fsm_state11 = 20'd1024;
parameter    ap_ST_fsm_state12 = 20'd2048;
parameter    ap_ST_fsm_state13 = 20'd4096;
parameter    ap_ST_fsm_state14 = 20'd8192;
parameter    ap_ST_fsm_state15 = 20'd16384;
parameter    ap_ST_fsm_state16 = 20'd32768;
parameter    ap_ST_fsm_state17 = 20'd65536;
parameter    ap_ST_fsm_state18 = 20'd131072;
parameter    ap_ST_fsm_state19 = 20'd262144;
parameter    ap_ST_fsm_state20 = 20'd524288;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] key_address0;
output   key_ce0;
input  [7:0] key_q0;
output  [4:0] key_address1;
output   key_ce1;
input  [7:0] key_q1;
output  [3:0] ctr_address0;
output   ctr_ce0;
input  [7:0] ctr_q0;
output  [3:0] ctr_address1;
output   ctr_ce1;
input  [7:0] ctr_q1;
output  [5:0] buffer_r_address0;
output   buffer_r_ce0;
output   buffer_r_we0;
output  [7:0] buffer_r_d0;
output  [5:0] buffer_r_address1;
output   buffer_r_ce1;
output   buffer_r_we1;
output  [7:0] buffer_r_d1;
input  [5:0] buffer_offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] ctr_address0;
reg ctr_ce0;
reg[3:0] ctr_address1;
reg ctr_ce1;
reg[5:0] buffer_r_address0;
reg buffer_r_ce0;
reg buffer_r_we0;
reg[5:0] buffer_r_address1;
reg buffer_r_ce1;
reg buffer_r_we1;

(* fsm_encoding = "none" *) reg   [19:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] test_addr_reg_710;
wire    ap_CS_fsm_state2;
wire   [3:0] test_addr_1_reg_715;
wire   [3:0] test_addr_2_reg_730;
wire    ap_CS_fsm_state3;
wire   [3:0] test_addr_3_reg_735;
wire   [3:0] test_addr_4_reg_750;
wire    ap_CS_fsm_state4;
wire   [3:0] test_addr_5_reg_755;
wire   [3:0] test_addr_6_reg_770;
wire    ap_CS_fsm_state5;
wire   [3:0] test_addr_7_reg_775;
wire   [3:0] test_addr_8_reg_790;
wire    ap_CS_fsm_state6;
wire   [3:0] test_addr_9_reg_795;
wire   [3:0] test_addr_10_reg_810;
wire    ap_CS_fsm_state7;
wire   [3:0] test_addr_11_reg_815;
wire   [3:0] test_addr_12_reg_830;
wire    ap_CS_fsm_state8;
wire   [3:0] test_addr_13_reg_835;
wire   [3:0] test_addr_14_reg_850;
wire    ap_CS_fsm_state9;
wire    grp_KeyExpansion_fu_525_ap_ready;
wire    grp_KeyExpansion_fu_525_ap_done;
wire   [3:0] test_addr_15_reg_855;
wire    ap_CS_fsm_state13;
reg   [7:0] ctx_RoundKey_address0;
reg    ctx_RoundKey_ce0;
reg    ctx_RoundKey_we0;
wire   [7:0] ctx_RoundKey_q0;
reg    ctx_RoundKey_ce1;
reg    ctx_RoundKey_we1;
wire   [7:0] ctx_RoundKey_q1;
reg   [3:0] test_address0;
reg    test_ce0;
reg    test_we0;
reg   [7:0] test_d0;
wire   [7:0] test_q0;
reg   [3:0] test_address1;
reg    test_ce1;
reg    test_we1;
reg   [7:0] test_d1;
wire   [7:0] test_q1;
wire    grp_KeyExpansion_fu_525_ap_start;
wire    grp_KeyExpansion_fu_525_ap_idle;
wire   [7:0] grp_KeyExpansion_fu_525_RoundKey_address0;
wire    grp_KeyExpansion_fu_525_RoundKey_ce0;
wire    grp_KeyExpansion_fu_525_RoundKey_we0;
wire   [7:0] grp_KeyExpansion_fu_525_RoundKey_d0;
wire   [7:0] grp_KeyExpansion_fu_525_RoundKey_address1;
wire    grp_KeyExpansion_fu_525_RoundKey_ce1;
wire    grp_KeyExpansion_fu_525_RoundKey_we1;
wire   [7:0] grp_KeyExpansion_fu_525_RoundKey_d1;
wire   [4:0] grp_KeyExpansion_fu_525_Key_address0;
wire    grp_KeyExpansion_fu_525_Key_ce0;
wire   [4:0] grp_KeyExpansion_fu_525_Key_address1;
wire    grp_KeyExpansion_fu_525_Key_ce1;
wire    grp_Cipher_fu_536_ap_start;
wire    grp_Cipher_fu_536_ap_done;
wire    grp_Cipher_fu_536_ap_idle;
wire    grp_Cipher_fu_536_ap_ready;
wire   [3:0] grp_Cipher_fu_536_state_address0;
wire    grp_Cipher_fu_536_state_ce0;
wire    grp_Cipher_fu_536_state_we0;
wire   [7:0] grp_Cipher_fu_536_state_d0;
wire   [3:0] grp_Cipher_fu_536_state_address1;
wire    grp_Cipher_fu_536_state_ce1;
wire    grp_Cipher_fu_536_state_we1;
wire   [7:0] grp_Cipher_fu_536_state_d1;
wire   [7:0] grp_Cipher_fu_536_RoundKey_address0;
wire    grp_Cipher_fu_536_RoundKey_ce0;
reg    grp_KeyExpansion_fu_525_ap_start_reg;
reg    grp_Cipher_fu_536_ap_start_reg;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state11;
wire   [63:0] buffer_offset_cast_fu_544_p1;
wire   [63:0] sum_cast_fu_555_p1;
wire   [63:0] sum2_cast_fu_565_p1;
wire    ap_CS_fsm_state14;
wire   [63:0] sum6_cast_fu_575_p1;
wire   [63:0] sum8_cast_fu_585_p1;
wire    ap_CS_fsm_state15;
wire   [63:0] sum1_cast_fu_595_p1;
wire   [63:0] sum3_cast_fu_605_p1;
wire    ap_CS_fsm_state16;
wire   [63:0] sum4_cast_fu_615_p1;
wire   [63:0] sum5_cast_fu_625_p1;
wire    ap_CS_fsm_state17;
wire   [63:0] sum7_cast_fu_635_p1;
wire   [63:0] sum9_cast_fu_645_p1;
wire    ap_CS_fsm_state18;
wire   [63:0] sum10_cast_fu_655_p1;
wire   [63:0] sum11_cast_fu_665_p1;
wire    ap_CS_fsm_state19;
wire   [63:0] sum12_cast_fu_675_p1;
wire   [63:0] sum13_cast_fu_685_p1;
wire    ap_CS_fsm_state20;
wire   [63:0] sum14_cast_fu_695_p1;
wire    ap_CS_fsm_state12;
wire   [5:0] sum_fu_549_p2;
wire   [5:0] sum2_fu_560_p2;
wire   [5:0] sum6_fu_570_p2;
wire   [5:0] sum8_fu_580_p2;
wire   [5:0] sum1_fu_590_p2;
wire   [5:0] sum3_fu_600_p2;
wire   [5:0] sum4_fu_610_p2;
wire   [5:0] sum5_fu_620_p2;
wire   [5:0] sum7_fu_630_p2;
wire   [5:0] sum9_fu_640_p2;
wire   [5:0] sum10_fu_650_p2;
wire   [5:0] sum11_fu_660_p2;
wire   [5:0] sum12_fu_670_p2;
wire   [5:0] sum13_fu_680_p2;
wire   [5:0] sum14_fu_690_p2;
reg   [19:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 20'd1;
#0 grp_KeyExpansion_fu_525_ap_start_reg = 1'b0;
#0 grp_Cipher_fu_536_ap_start_reg = 1'b0;
end

AES256_ECB_ctx_RoundKey #(
    .DataWidth( 8 ),
    .AddressRange( 240 ),
    .AddressWidth( 8 ))
ctx_RoundKey_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(ctx_RoundKey_address0),
    .ce0(ctx_RoundKey_ce0),
    .we0(ctx_RoundKey_we0),
    .d0(grp_KeyExpansion_fu_525_RoundKey_d0),
    .q0(ctx_RoundKey_q0),
    .address1(grp_KeyExpansion_fu_525_RoundKey_address1),
    .ce1(ctx_RoundKey_ce1),
    .we1(ctx_RoundKey_we1),
    .d1(grp_KeyExpansion_fu_525_RoundKey_d1),
    .q1(ctx_RoundKey_q1)
);

AES256_ECB_1_test #(
    .DataWidth( 8 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
test_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(test_address0),
    .ce0(test_ce0),
    .we0(test_we0),
    .d0(test_d0),
    .q0(test_q0),
    .address1(test_address1),
    .ce1(test_ce1),
    .we1(test_we1),
    .d1(test_d1),
    .q1(test_q1)
);

KeyExpansion grp_KeyExpansion_fu_525(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_KeyExpansion_fu_525_ap_start),
    .ap_done(grp_KeyExpansion_fu_525_ap_done),
    .ap_idle(grp_KeyExpansion_fu_525_ap_idle),
    .ap_ready(grp_KeyExpansion_fu_525_ap_ready),
    .RoundKey_address0(grp_KeyExpansion_fu_525_RoundKey_address0),
    .RoundKey_ce0(grp_KeyExpansion_fu_525_RoundKey_ce0),
    .RoundKey_we0(grp_KeyExpansion_fu_525_RoundKey_we0),
    .RoundKey_d0(grp_KeyExpansion_fu_525_RoundKey_d0),
    .RoundKey_q0(ctx_RoundKey_q0),
    .RoundKey_address1(grp_KeyExpansion_fu_525_RoundKey_address1),
    .RoundKey_ce1(grp_KeyExpansion_fu_525_RoundKey_ce1),
    .RoundKey_we1(grp_KeyExpansion_fu_525_RoundKey_we1),
    .RoundKey_d1(grp_KeyExpansion_fu_525_RoundKey_d1),
    .RoundKey_q1(ctx_RoundKey_q1),
    .Key_address0(grp_KeyExpansion_fu_525_Key_address0),
    .Key_ce0(grp_KeyExpansion_fu_525_Key_ce0),
    .Key_q0(key_q0),
    .Key_address1(grp_KeyExpansion_fu_525_Key_address1),
    .Key_ce1(grp_KeyExpansion_fu_525_Key_ce1),
    .Key_q1(key_q1)
);

Cipher grp_Cipher_fu_536(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_Cipher_fu_536_ap_start),
    .ap_done(grp_Cipher_fu_536_ap_done),
    .ap_idle(grp_Cipher_fu_536_ap_idle),
    .ap_ready(grp_Cipher_fu_536_ap_ready),
    .state_address0(grp_Cipher_fu_536_state_address0),
    .state_ce0(grp_Cipher_fu_536_state_ce0),
    .state_we0(grp_Cipher_fu_536_state_we0),
    .state_d0(grp_Cipher_fu_536_state_d0),
    .state_q0(test_q0),
    .state_address1(grp_Cipher_fu_536_state_address1),
    .state_ce1(grp_Cipher_fu_536_state_ce1),
    .state_we1(grp_Cipher_fu_536_state_we1),
    .state_d1(grp_Cipher_fu_536_state_d1),
    .state_q1(test_q1),
    .RoundKey_address0(grp_Cipher_fu_536_RoundKey_address0),
    .RoundKey_ce0(grp_Cipher_fu_536_RoundKey_ce0),
    .RoundKey_q0(ctx_RoundKey_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_Cipher_fu_536_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state10)) begin
            grp_Cipher_fu_536_ap_start_reg <= 1'b1;
        end else if ((grp_Cipher_fu_536_ap_ready == 1'b1)) begin
            grp_Cipher_fu_536_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_KeyExpansion_fu_525_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state8)) begin
            grp_KeyExpansion_fu_525_ap_start_reg <= 1'b1;
        end else if ((grp_KeyExpansion_fu_525_ap_ready == 1'b1)) begin
            grp_KeyExpansion_fu_525_ap_start_reg <= 1'b0;
        end
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        buffer_r_address0 = sum13_cast_fu_685_p1;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        buffer_r_address0 = sum11_cast_fu_665_p1;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        buffer_r_address0 = sum9_cast_fu_645_p1;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        buffer_r_address0 = sum5_cast_fu_625_p1;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        buffer_r_address0 = sum3_cast_fu_605_p1;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        buffer_r_address0 = sum8_cast_fu_585_p1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        buffer_r_address0 = sum2_cast_fu_565_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        buffer_r_address0 = buffer_offset_cast_fu_544_p1;
    end else begin
        buffer_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        buffer_r_address1 = sum14_cast_fu_695_p1;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        buffer_r_address1 = sum12_cast_fu_675_p1;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        buffer_r_address1 = sum10_cast_fu_655_p1;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        buffer_r_address1 = sum7_cast_fu_635_p1;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        buffer_r_address1 = sum4_cast_fu_615_p1;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        buffer_r_address1 = sum1_cast_fu_595_p1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        buffer_r_address1 = sum6_cast_fu_575_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        buffer_r_address1 = sum_cast_fu_555_p1;
    end else begin
        buffer_r_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13))) begin
        buffer_r_ce0 = 1'b1;
    end else begin
        buffer_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13))) begin
        buffer_r_ce1 = 1'b1;
    end else begin
        buffer_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13))) begin
        buffer_r_we0 = 1'b1;
    end else begin
        buffer_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13))) begin
        buffer_r_we1 = 1'b1;
    end else begin
        buffer_r_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ctr_address0 = 64'd14;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        ctr_address0 = 64'd12;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        ctr_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        ctr_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        ctr_address0 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        ctr_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        ctr_address0 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        ctr_address0 = 64'd0;
    end else begin
        ctr_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ctr_address1 = 64'd15;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        ctr_address1 = 64'd13;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        ctr_address1 = 64'd11;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        ctr_address1 = 64'd9;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        ctr_address1 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        ctr_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        ctr_address1 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        ctr_address1 = 64'd1;
    end else begin
        ctr_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        ctr_ce0 = 1'b1;
    end else begin
        ctr_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        ctr_ce1 = 1'b1;
    end else begin
        ctr_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        ctx_RoundKey_address0 = grp_Cipher_fu_536_RoundKey_address0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        ctx_RoundKey_address0 = grp_KeyExpansion_fu_525_RoundKey_address0;
    end else begin
        ctx_RoundKey_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        ctx_RoundKey_ce0 = grp_Cipher_fu_536_RoundKey_ce0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        ctx_RoundKey_ce0 = grp_KeyExpansion_fu_525_RoundKey_ce0;
    end else begin
        ctx_RoundKey_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        ctx_RoundKey_ce1 = grp_KeyExpansion_fu_525_RoundKey_ce1;
    end else begin
        ctx_RoundKey_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        ctx_RoundKey_we0 = grp_KeyExpansion_fu_525_RoundKey_we0;
    end else begin
        ctx_RoundKey_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        ctx_RoundKey_we1 = grp_KeyExpansion_fu_525_RoundKey_we1;
    end else begin
        ctx_RoundKey_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        test_address0 = test_addr_14_reg_850;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        test_address0 = test_addr_12_reg_830;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        test_address0 = test_addr_10_reg_810;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        test_address0 = test_addr_8_reg_790;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        test_address0 = test_addr_6_reg_770;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        test_address0 = test_addr_4_reg_750;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        test_address0 = test_addr_2_reg_730;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        test_address0 = test_addr_reg_710;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        test_address0 = 64'd14;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        test_address0 = 64'd12;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        test_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        test_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        test_address0 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        test_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        test_address0 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        test_address0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        test_address0 = grp_Cipher_fu_536_state_address0;
    end else begin
        test_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        test_address1 = test_addr_15_reg_855;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        test_address1 = test_addr_13_reg_835;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        test_address1 = test_addr_11_reg_815;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        test_address1 = test_addr_9_reg_795;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        test_address1 = test_addr_7_reg_775;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        test_address1 = test_addr_5_reg_755;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        test_address1 = test_addr_3_reg_735;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        test_address1 = test_addr_1_reg_715;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        test_address1 = 64'd15;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        test_address1 = 64'd13;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        test_address1 = 64'd11;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        test_address1 = 64'd9;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        test_address1 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        test_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        test_address1 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        test_address1 = 64'd1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        test_address1 = grp_Cipher_fu_536_state_address1;
    end else begin
        test_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | ((1'b1 == ap_CS_fsm_state9) & (grp_KeyExpansion_fu_525_ap_done == 1'b1)))) begin
        test_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        test_ce0 = grp_Cipher_fu_536_state_ce0;
    end else begin
        test_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | ((1'b1 == ap_CS_fsm_state9) & (grp_KeyExpansion_fu_525_ap_done == 1'b1)))) begin
        test_ce1 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        test_ce1 = grp_Cipher_fu_536_state_ce1;
    end else begin
        test_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4))) begin
        test_d0 = ctr_q0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        test_d0 = grp_Cipher_fu_536_state_d0;
    end else begin
        test_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4))) begin
        test_d1 = ctr_q1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        test_d1 = grp_Cipher_fu_536_state_d1;
    end else begin
        test_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | ((1'b1 == ap_CS_fsm_state9) & (grp_KeyExpansion_fu_525_ap_done == 1'b1)))) begin
        test_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        test_we0 = grp_Cipher_fu_536_state_we0;
    end else begin
        test_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | ((1'b1 == ap_CS_fsm_state9) & (grp_KeyExpansion_fu_525_ap_done == 1'b1)))) begin
        test_we1 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        test_we1 = grp_Cipher_fu_536_state_we1;
    end else begin
        test_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            if (((1'b1 == ap_CS_fsm_state9) & (grp_KeyExpansion_fu_525_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            if (((grp_Cipher_fu_536_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state11))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign buffer_offset_cast_fu_544_p1 = buffer_offset;

assign buffer_r_d0 = test_q0;

assign buffer_r_d1 = test_q1;

assign grp_Cipher_fu_536_ap_start = grp_Cipher_fu_536_ap_start_reg;

assign grp_KeyExpansion_fu_525_ap_start = grp_KeyExpansion_fu_525_ap_start_reg;

assign key_address0 = grp_KeyExpansion_fu_525_Key_address0;

assign key_address1 = grp_KeyExpansion_fu_525_Key_address1;

assign key_ce0 = grp_KeyExpansion_fu_525_Key_ce0;

assign key_ce1 = grp_KeyExpansion_fu_525_Key_ce1;

assign sum10_cast_fu_655_p1 = sum10_fu_650_p2;

assign sum10_fu_650_p2 = (buffer_offset + 6'd11);

assign sum11_cast_fu_665_p1 = sum11_fu_660_p2;

assign sum11_fu_660_p2 = (buffer_offset + 6'd12);

assign sum12_cast_fu_675_p1 = sum12_fu_670_p2;

assign sum12_fu_670_p2 = (buffer_offset + 6'd13);

assign sum13_cast_fu_685_p1 = sum13_fu_680_p2;

assign sum13_fu_680_p2 = (buffer_offset + 6'd14);

assign sum14_cast_fu_695_p1 = sum14_fu_690_p2;

assign sum14_fu_690_p2 = (buffer_offset + 6'd15);

assign sum1_cast_fu_595_p1 = sum1_fu_590_p2;

assign sum1_fu_590_p2 = (buffer_offset + 6'd5);

assign sum2_cast_fu_565_p1 = sum2_fu_560_p2;

assign sum2_fu_560_p2 = (buffer_offset + 6'd2);

assign sum3_cast_fu_605_p1 = sum3_fu_600_p2;

assign sum3_fu_600_p2 = (buffer_offset + 6'd6);

assign sum4_cast_fu_615_p1 = sum4_fu_610_p2;

assign sum4_fu_610_p2 = (buffer_offset + 6'd7);

assign sum5_cast_fu_625_p1 = sum5_fu_620_p2;

assign sum5_fu_620_p2 = (buffer_offset + 6'd8);

assign sum6_cast_fu_575_p1 = sum6_fu_570_p2;

assign sum6_fu_570_p2 = (buffer_offset + 6'd3);

assign sum7_cast_fu_635_p1 = sum7_fu_630_p2;

assign sum7_fu_630_p2 = (buffer_offset + 6'd9);

assign sum8_cast_fu_585_p1 = sum8_fu_580_p2;

assign sum8_fu_580_p2 = (buffer_offset + 6'd4);

assign sum9_cast_fu_645_p1 = sum9_fu_640_p2;

assign sum9_fu_640_p2 = (buffer_offset + 6'd10);

assign sum_cast_fu_555_p1 = sum_fu_549_p2;

assign sum_fu_549_p2 = (buffer_offset + 6'd1);

assign test_addr_10_reg_810 = 64'd10;

assign test_addr_11_reg_815 = 64'd11;

assign test_addr_12_reg_830 = 64'd12;

assign test_addr_13_reg_835 = 64'd13;

assign test_addr_14_reg_850 = 64'd14;

assign test_addr_15_reg_855 = 64'd15;

assign test_addr_1_reg_715 = 64'd1;

assign test_addr_2_reg_730 = 64'd2;

assign test_addr_3_reg_735 = 64'd3;

assign test_addr_4_reg_750 = 64'd4;

assign test_addr_5_reg_755 = 64'd5;

assign test_addr_6_reg_770 = 64'd6;

assign test_addr_7_reg_775 = 64'd7;

assign test_addr_8_reg_790 = 64'd8;

assign test_addr_9_reg_795 = 64'd9;

assign test_addr_reg_710 = 64'd0;

endmodule //AES256_ECB
