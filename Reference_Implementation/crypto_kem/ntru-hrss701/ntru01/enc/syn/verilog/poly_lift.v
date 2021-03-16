// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_lift (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        r_coeffs_address0,
        r_coeffs_ce0,
        r_coeffs_we0,
        r_coeffs_d0,
        a_coeffs_address0,
        a_coeffs_ce0,
        a_coeffs_q0,
        a_coeffs_address1,
        a_coeffs_ce1,
        a_coeffs_q1
);

parameter    ap_ST_fsm_state1 = 21'd1;
parameter    ap_ST_fsm_state2 = 21'd2;
parameter    ap_ST_fsm_state3 = 21'd4;
parameter    ap_ST_fsm_state4 = 21'd8;
parameter    ap_ST_fsm_state5 = 21'd16;
parameter    ap_ST_fsm_state6 = 21'd32;
parameter    ap_ST_fsm_state7 = 21'd64;
parameter    ap_ST_fsm_state8 = 21'd128;
parameter    ap_ST_fsm_state9 = 21'd256;
parameter    ap_ST_fsm_state10 = 21'd512;
parameter    ap_ST_fsm_state11 = 21'd1024;
parameter    ap_ST_fsm_state12 = 21'd2048;
parameter    ap_ST_fsm_state13 = 21'd4096;
parameter    ap_ST_fsm_state14 = 21'd8192;
parameter    ap_ST_fsm_state15 = 21'd16384;
parameter    ap_ST_fsm_state16 = 21'd32768;
parameter    ap_ST_fsm_state17 = 21'd65536;
parameter    ap_ST_fsm_state18 = 21'd131072;
parameter    ap_ST_fsm_state19 = 21'd262144;
parameter    ap_ST_fsm_state20 = 21'd524288;
parameter    ap_ST_fsm_state21 = 21'd1048576;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] r_coeffs_address0;
output   r_coeffs_ce0;
output   r_coeffs_we0;
output  [15:0] r_coeffs_d0;
output  [9:0] a_coeffs_address0;
output   a_coeffs_ce0;
input  [15:0] a_coeffs_q0;
output  [9:0] a_coeffs_address1;
output   a_coeffs_ce1;
input  [15:0] a_coeffs_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] r_coeffs_address0;
reg r_coeffs_ce0;
reg r_coeffs_we0;
reg[15:0] r_coeffs_d0;
reg[9:0] a_coeffs_address0;
reg a_coeffs_ce0;
reg[9:0] a_coeffs_address1;
reg a_coeffs_ce1;

(* fsm_encoding = "none" *) reg   [20:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [15:0] b_coeffs_q1;
reg   [15:0] reg_392;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state18;
reg  signed [15:0] a_coeffs_load_reg_1028;
wire    ap_CS_fsm_state2;
reg  signed [15:0] a_coeffs_load_1_reg_1035;
wire   [9:0] b_coeffs_addr_1_reg_1046;
wire    ap_CS_fsm_state3;
wire   [15:0] tmp_fu_396_p2;
wire   [9:0] b_coeffs_addr_reg_1061;
wire   [9:0] b_coeffs_addr_2_reg_1067;
wire   [2:0] zj_cast9_fu_402_p1;
reg   [2:0] zj_cast9_reg_1073;
wire    ap_CS_fsm_state4;
wire   [15:0] zj_cast_fu_406_p1;
reg   [15:0] zj_cast_reg_1078;
wire   [0:0] exitcond2_fu_410_p2;
wire   [9:0] i_5_fu_421_p2;
reg   [9:0] i_5_reg_1091;
wire  signed [15:0] grp_fu_982_p3;
reg  signed [15:0] tmp_17_reg_1096;
wire  signed [15:0] grp_fu_989_p3;
reg  signed [15:0] tmp1_reg_1101;
reg  signed [15:0] a_coeffs_load_3_reg_1106;
wire   [1:0] grp_fu_385_p2;
reg   [1:0] tmp_25_reg_1113;
wire   [15:0] b_coeffs_q0;
reg   [15:0] b_coeffs_load_1_reg_1118;
wire   [1:0] tmp_31_fu_448_p3;
reg   [1:0] tmp_31_reg_1123;
wire  signed [15:0] grp_fu_996_p4;
reg  signed [15:0] tmp_24_reg_1128;
wire    ap_CS_fsm_state6;
wire  signed [15:0] grp_fu_1005_p3;
reg  signed [15:0] tmp_27_reg_1133;
wire  signed [15:0] grp_fu_1012_p3;
reg  signed [15:0] tmp_29_reg_1138;
wire   [63:0] tmp_34_fu_471_p1;
reg   [63:0] tmp_34_reg_1147;
wire    ap_CS_fsm_state9;
wire   [0:0] exitcond1_fu_465_p2;
wire    ap_CS_fsm_state10;
wire   [14:0] tmp_44_fu_509_p1;
reg   [14:0] tmp_44_reg_1177;
wire   [9:0] i_6_fu_513_p2;
reg   [9:0] i_6_reg_1182;
wire   [15:0] tmp_42_fu_546_p2;
reg   [15:0] tmp_42_reg_1187;
wire    ap_CS_fsm_state11;
wire   [9:0] i_7_fu_558_p2;
reg   [9:0] i_7_reg_1195;
wire    ap_CS_fsm_state13;
reg   [9:0] b_coeffs_addr_6_reg_1200;
wire   [0:0] exitcond_fu_552_p2;
reg   [3:0] tmp_310_i_cast_reg_1205;
wire    ap_CS_fsm_state14;
wire   [1:0] fold1_i_cast_fu_753_p2;
reg   [1:0] fold1_i_cast_reg_1210;
reg   [1:0] tmp_52_reg_1216;
wire   [9:0] i_8_fu_874_p2;
reg   [9:0] i_8_reg_1224;
wire    ap_CS_fsm_state16;
reg   [9:0] b_coeffs_addr_7_reg_1229;
wire   [0:0] exitcond_i_fu_868_p2;
wire   [9:0] i_9_fu_936_p2;
reg   [9:0] i_9_reg_1238;
wire    ap_CS_fsm_state19;
wire   [0:0] tmp_i6_fu_930_p2;
wire   [63:0] tmp_289_i_fu_947_p1;
reg   [63:0] tmp_289_i_reg_1248;
reg   [9:0] b_coeffs_address0;
reg    b_coeffs_ce0;
reg    b_coeffs_we0;
reg   [15:0] b_coeffs_d0;
reg   [9:0] b_coeffs_address1;
reg    b_coeffs_ce1;
reg    b_coeffs_we1;
reg   [15:0] b_coeffs_d1;
reg   [15:0] tmp_s_reg_288;
wire    ap_CS_fsm_state7;
reg   [15:0] tmp_13_reg_298;
reg   [15:0] tmp_14_reg_308;
reg   [9:0] i_reg_317;
wire   [1:0] ap_phi_mux_zj_phi_fu_332_p4;
reg   [1:0] zj_reg_328;
reg   [9:0] i_1_reg_340;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state12;
reg   [9:0] i_2_reg_352;
wire    ap_CS_fsm_state15;
reg   [9:0] i_i_reg_363;
wire    ap_CS_fsm_state17;
reg   [9:0] i_i5_reg_374;
wire    ap_CS_fsm_state20;
wire   [63:0] tmp_21_fu_416_p1;
wire   [63:0] tmp_33_fu_482_p1;
wire   [63:0] tmp_36_fu_493_p1;
wire   [63:0] tmp_38_fu_504_p1;
wire   [63:0] tmp_43_fu_564_p1;
wire   [63:0] tmp_i3_fu_880_p1;
wire   [63:0] tmp_i7_fu_942_p1;
wire    ap_CS_fsm_state21;
(* use_dsp48 = "no" *) wire   [15:0] tmp_20_fu_459_p2;
wire   [15:0] tmp_317_i_fu_861_p2;
wire   [15:0] tmp_51_i_fu_921_p3;
wire   [15:0] tmp_291_i_cast_fu_962_p1;
wire   [15:0] tmp_293_i_cast_fu_977_p1;
reg   [1:0] grp_fu_385_p0;
wire   [1:0] tmp_18_fu_431_p1;
wire   [0:0] tmp_30_fu_436_p2;
wire   [1:0] tmp_40_fu_442_p2;
wire   [9:0] tmp_32_fu_476_p2;
wire   [9:0] tmp_35_fu_487_p2;
wire   [9:0] tmp_37_fu_498_p2;
wire   [14:0] tmp_53_fu_523_p1;
wire   [14:0] tmp2_fu_527_p2;
wire   [14:0] tmp_45_fu_519_p1;
wire   [14:0] tmp_39_fu_532_p2;
wire   [15:0] tmp_41_fu_538_p3;
wire   [6:0] tmp_55_fu_575_p1;
wire   [2:0] tmp_61_fu_595_p1;
wire   [0:0] tmp_66_fu_607_p1;
wire   [15:0] tmp_54_fu_569_p2;
wire   [7:0] tmp_7_fu_579_p3;
wire   [7:0] tmp_57_fu_587_p1;
wire   [15:0] a_assign_fu_623_p2;
wire   [7:0] tmp_62_fu_635_p4;
wire   [7:0] a_assign_cast_fu_629_p2;
wire   [8:0] tmp_i_cast_fu_645_p1;
wire   [8:0] tmp_i_cast_27_fu_649_p1;
wire   [8:0] r_fu_659_p2;
wire   [4:0] tmp_64_fu_665_p4;
wire   [3:0] tmp_11_fu_599_p3;
wire   [3:0] tmp_60_fu_591_p1;
wire   [1:0] tmp_12_fu_611_p3;
wire   [1:0] tmp_67_fu_619_p1;
wire   [3:0] tmp_46_fu_679_p2;
wire   [3:0] tmp_47_fu_685_p4;
wire   [3:0] fold_i_cast_fu_711_p2;
wire   [5:0] tmp_308_i_cast_fu_675_p1;
wire   [5:0] tmp_309_i_cast_fu_717_p1;
wire   [5:0] r_3_fu_721_p2;
wire   [1:0] tmp_49_fu_705_p2;
wire   [1:0] tmp_48_fu_695_p4;
wire   [7:0] tmp_63_fu_653_p2;
wire   [1:0] tmp_50_fu_737_p2;
wire   [1:0] tmp_51_fu_743_p4;
wire   [3:0] tmp_311_i_cast_fu_769_p1;
wire   [3:0] r_4_fu_772_p2;
wire   [1:0] tmp_65_fu_777_p4;
wire   [1:0] fold2_i_cast_fu_791_p2;
wire   [2:0] tmp_312_i_cast_fu_787_p1;
wire   [2:0] tmp_313_i_cast_fu_795_p1;
wire   [2:0] r_5_fu_799_p2;
wire   [2:0] t_fu_805_p2;
wire   [0:0] tmp_68_fu_811_p3;
wire   [2:0] c_cast_fu_819_p3;
wire   [2:0] tmp_314_i_fu_827_p2;
wire   [0:0] not_tmp_37_i_fu_837_p2;
wire   [2:0] tmp_315_i_cast_cast_fu_843_p3;
wire   [2:0] tmp_316_i_fu_851_p2;
wire   [15:0] tmp_314_i_cast_fu_833_p1;
wire  signed [15:0] tmp_316_i_cast_fu_857_p1;
wire   [12:0] tmp_56_fu_885_p4;
wire   [12:0] tmp_69_fu_901_p1;
wire   [12:0] tmp_49_i_cast_fu_895_p2;
wire   [2:0] tmp_59_fu_911_p4;
wire   [12:0] tmp_58_fu_905_p2;
wire   [15:0] tmp_290_i_fu_952_p2;
wire   [12:0] tmp_71_fu_958_p1;
wire   [15:0] tmp_292_i_fu_967_p2;
wire   [12:0] tmp_70_fu_973_p1;
wire   [1:0] grp_fu_982_p1;
wire   [15:0] tmp_15_cast_fu_427_p1;
wire   [1:0] grp_fu_989_p1;
wire   [15:0] grp_fu_989_p2;
wire   [1:0] grp_fu_996_p0;
wire   [1:0] grp_fu_1005_p0;
wire   [1:0] grp_fu_1012_p0;
reg   [20:0] ap_NS_fsm;
wire   [15:0] grp_fu_1005_p00;
wire   [15:0] tmp_18_fu_431_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 21'd1;
end

poly_lift_b_coeffs #(
    .DataWidth( 16 ),
    .AddressRange( 701 ),
    .AddressWidth( 10 ))
b_coeffs_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(b_coeffs_address0),
    .ce0(b_coeffs_ce0),
    .we0(b_coeffs_we0),
    .d0(b_coeffs_d0),
    .q0(b_coeffs_q0),
    .address1(b_coeffs_address1),
    .ce1(b_coeffs_ce1),
    .we1(b_coeffs_we1),
    .d1(b_coeffs_d1),
    .q1(b_coeffs_q1)
);

crypto_kem_enc_mac_muladd_16s_2ns_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 2 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_enc_mac_muladd_16s_2ns_16ns_16_1_1_U57(
    .din0(a_coeffs_load_reg_1028),
    .din1(grp_fu_982_p1),
    .din2(tmp_14_reg_308),
    .dout(grp_fu_982_p3)
);

crypto_kem_enc_mac_muladd_16s_2ns_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 2 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_enc_mac_muladd_16s_2ns_16ns_16_1_1_U58(
    .din0(a_coeffs_load_1_reg_1035),
    .din1(grp_fu_989_p1),
    .din2(grp_fu_989_p2),
    .dout(grp_fu_989_p3)
);

crypto_kem_enc_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 2 ),
    .din1_WIDTH( 3 ),
    .din2_WIDTH( 16 ),
    .din3_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_enc_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1_U59(
    .din0(grp_fu_996_p0),
    .din1(3'd2),
    .din2(a_coeffs_load_3_reg_1106),
    .din3(reg_392),
    .dout(grp_fu_996_p4)
);

crypto_kem_enc_mac_muladd_2ns_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 2 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_enc_mac_muladd_2ns_16s_16ns_16_1_1_U60(
    .din0(grp_fu_1005_p0),
    .din1(a_coeffs_load_3_reg_1106),
    .din2(b_coeffs_load_1_reg_1118),
    .dout(grp_fu_1005_p3)
);

crypto_kem_enc_mac_muladd_2ns_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 2 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_enc_mac_muladd_2ns_16s_16ns_16_1_1_U61(
    .din0(grp_fu_1012_p0),
    .din1(a_coeffs_load_3_reg_1106),
    .din2(b_coeffs_q0),
    .dout(grp_fu_1012_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        i_1_reg_340 <= i_6_reg_1182;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        i_1_reg_340 <= 10'd3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state9) & (exitcond1_fu_465_p2 == 1'd1))) begin
        i_2_reg_352 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        i_2_reg_352 <= i_7_reg_1195;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state20)) begin
        i_i5_reg_374 <= i_9_reg_1238;
    end else if ((1'b1 == ap_CS_fsm_state18)) begin
        i_i5_reg_374 <= 10'd700;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_552_p2 == 1'd1))) begin
        i_i_reg_363 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        i_i_reg_363 <= i_8_reg_1224;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        i_reg_317 <= i_5_reg_1091;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        i_reg_317 <= 10'd3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_13_reg_298 <= tmp_29_reg_1138;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_13_reg_298 <= a_coeffs_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_14_reg_308 <= tmp_27_reg_1133;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_14_reg_308 <= a_coeffs_load_1_reg_1035;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_s_reg_288 <= tmp_24_reg_1128;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_s_reg_288 <= tmp_fu_396_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        zj_reg_328 <= tmp_31_reg_1123;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        zj_reg_328 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        a_coeffs_load_1_reg_1035 <= a_coeffs_q1;
        a_coeffs_load_reg_1028 <= a_coeffs_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        a_coeffs_load_3_reg_1106 <= a_coeffs_q1;
        b_coeffs_load_1_reg_1118 <= b_coeffs_q0;
        tmp_25_reg_1113 <= grp_fu_385_p2;
        tmp_31_reg_1123 <= tmp_31_fu_448_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_552_p2 == 1'd0))) begin
        b_coeffs_addr_6_reg_1200 <= tmp_43_fu_564_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state16) & (exitcond_i_fu_868_p2 == 1'd0))) begin
        b_coeffs_addr_7_reg_1229 <= tmp_i3_fu_880_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        fold1_i_cast_reg_1210 <= fold1_i_cast_fu_753_p2;
        tmp_310_i_cast_reg_1205 <= {{r_3_fu_721_p2[5:2]}};
        tmp_52_reg_1216 <= {{r_3_fu_721_p2[3:2]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd0))) begin
        i_5_reg_1091 <= i_5_fu_421_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        i_6_reg_1182 <= i_6_fu_513_p2;
        tmp_44_reg_1177 <= tmp_44_fu_509_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        i_7_reg_1195 <= i_7_fu_558_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        i_8_reg_1224 <= i_8_fu_874_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state19) & (tmp_i6_fu_930_p2 == 1'd0))) begin
        i_9_reg_1238 <= i_9_fu_936_p2;
        tmp_289_i_reg_1248[9 : 0] <= tmp_289_i_fu_947_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state18) | (1'b1 == ap_CS_fsm_state5))) begin
        reg_392 <= b_coeffs_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd1))) begin
        tmp1_reg_1101 <= grp_fu_989_p3;
        tmp_17_reg_1096 <= grp_fu_982_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tmp_24_reg_1128 <= grp_fu_996_p4;
        tmp_27_reg_1133 <= grp_fu_1005_p3;
        tmp_29_reg_1138 <= grp_fu_1012_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state9) & (exitcond1_fu_465_p2 == 1'd0))) begin
        tmp_34_reg_1147[9 : 0] <= tmp_34_fu_471_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        tmp_42_reg_1187 <= tmp_42_fu_546_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        zj_cast9_reg_1073[1 : 0] <= zj_cast9_fu_402_p1[1 : 0];
        zj_cast_reg_1078[1 : 0] <= zj_cast_fu_406_p1[1 : 0];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        a_coeffs_address0 = tmp_38_fu_504_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        a_coeffs_address0 = tmp_34_fu_471_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        a_coeffs_address0 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        a_coeffs_address0 = 64'd0;
    end else begin
        a_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        a_coeffs_address1 = tmp_36_fu_493_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        a_coeffs_address1 = tmp_21_fu_416_p1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        a_coeffs_address1 = 64'd1;
    end else begin
        a_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        a_coeffs_ce0 = 1'b1;
    end else begin
        a_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state4) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        a_coeffs_ce1 = 1'b1;
    end else begin
        a_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state21) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state21)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state19) & (tmp_i6_fu_930_p2 == 1'd1))) begin
        b_coeffs_address0 = b_coeffs_addr_reg_1061;
    end else if (((1'b1 == ap_CS_fsm_state19) & (tmp_i6_fu_930_p2 == 1'd0))) begin
        b_coeffs_address0 = tmp_i7_fu_942_p1;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        b_coeffs_address0 = b_coeffs_addr_7_reg_1229;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        b_coeffs_address0 = b_coeffs_addr_6_reg_1200;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        b_coeffs_address0 = tmp_43_fu_564_p1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        b_coeffs_address0 = tmp_33_fu_482_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        b_coeffs_address0 = 64'd2;
    end else if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state4))) begin
        b_coeffs_address0 = b_coeffs_addr_1_reg_1046;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        b_coeffs_address0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        b_coeffs_address0 = 64'd1;
    end else begin
        b_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        b_coeffs_address1 = tmp_289_i_fu_947_p1;
    end else if (((1'b1 == ap_CS_fsm_state16) & (exitcond_i_fu_868_p2 == 1'd0))) begin
        b_coeffs_address1 = tmp_i3_fu_880_p1;
    end else if (((1'b1 == ap_CS_fsm_state13) | ((1'b1 == ap_CS_fsm_state16) & (exitcond_i_fu_868_p2 == 1'd1)))) begin
        b_coeffs_address1 = 64'd700;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        b_coeffs_address1 = tmp_34_reg_1147;
    end else if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        b_coeffs_address1 = b_coeffs_addr_2_reg_1067;
    end else if (((1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd1)) | ((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd0)))) begin
        b_coeffs_address1 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        b_coeffs_address1 = 64'd2;
    end else begin
        b_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state4) | ((1'b1 == ap_CS_fsm_state19) & (tmp_i6_fu_930_p2 == 1'd1)) | ((1'b1 == ap_CS_fsm_state19) & (tmp_i6_fu_930_p2 == 1'd0)))) begin
        b_coeffs_ce0 = 1'b1;
    end else begin
        b_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state16) & (exitcond_i_fu_868_p2 == 1'd1)) | ((1'b1 == ap_CS_fsm_state16) & (exitcond_i_fu_868_p2 == 1'd0)) | ((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd1)) | ((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd0)))) begin
        b_coeffs_ce1 = 1'b1;
    end else begin
        b_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        b_coeffs_d0 = tmp_51_i_fu_921_p3;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        b_coeffs_d0 = tmp_317_i_fu_861_p2;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        b_coeffs_d0 = tmp_17_reg_1096;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        b_coeffs_d0 = grp_fu_1005_p3;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        b_coeffs_d0 = tmp_fu_396_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        b_coeffs_d0 = a_coeffs_q1;
    end else begin
        b_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        b_coeffs_d1 = tmp_42_reg_1187;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        b_coeffs_d1 = tmp_20_fu_459_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        b_coeffs_d1 = tmp_29_reg_1138;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        b_coeffs_d1 = grp_fu_996_p4;
    end else if (((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd1))) begin
        b_coeffs_d1 = tmp_s_reg_288;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        b_coeffs_d1 = a_coeffs_q0;
    end else begin
        b_coeffs_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state6))) begin
        b_coeffs_we0 = 1'b1;
    end else begin
        b_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd1)))) begin
        b_coeffs_we1 = 1'b1;
    end else begin
        b_coeffs_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_fu_385_p0 = zj_reg_328;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_fu_385_p0 = ap_phi_mux_zj_phi_fu_332_p4;
    end else begin
        grp_fu_385_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        r_coeffs_address0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        r_coeffs_address0 = tmp_289_i_reg_1248;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state20))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        r_coeffs_d0 = tmp_293_i_cast_fu_977_p1;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        r_coeffs_d0 = tmp_291_i_cast_fu_962_p1;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state20))) begin
        r_coeffs_we0 = 1'b1;
    end else begin
        r_coeffs_we0 = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state4) & (exitcond2_fu_410_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            if (((1'b1 == ap_CS_fsm_state9) & (exitcond1_fu_465_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state13 : begin
            if (((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_552_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state16 : begin
            if (((1'b1 == ap_CS_fsm_state16) & (exitcond_i_fu_868_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            if (((1'b1 == ap_CS_fsm_state19) & (tmp_i6_fu_930_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state21;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_cast_fu_629_p2 = (tmp_7_fu_579_p3 + tmp_57_fu_587_p1);

assign a_assign_fu_623_p2 = (b_coeffs_q0 + tmp_54_fu_569_p2);

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

assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_phi_mux_zj_phi_fu_332_p4 = zj_reg_328;

assign b_coeffs_addr_1_reg_1046 = 64'd1;

assign b_coeffs_addr_2_reg_1067 = 64'd2;

assign b_coeffs_addr_reg_1061 = 64'd0;

assign c_cast_fu_819_p3 = ((tmp_68_fu_811_p3[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign exitcond1_fu_465_p2 = ((i_1_reg_340 == 10'd701) ? 1'b1 : 1'b0);

assign exitcond2_fu_410_p2 = ((i_reg_317 == 10'd701) ? 1'b1 : 1'b0);

assign exitcond_fu_552_p2 = ((i_2_reg_352 == 10'd701) ? 1'b1 : 1'b0);

assign exitcond_i_fu_868_p2 = ((i_i_reg_363 == 10'd701) ? 1'b1 : 1'b0);

assign fold1_i_cast_fu_753_p2 = (tmp_50_fu_737_p2 + tmp_51_fu_743_p4);

assign fold2_i_cast_fu_791_p2 = (tmp_52_reg_1216 + fold1_i_cast_reg_1210);

assign fold_i_cast_fu_711_p2 = (tmp_46_fu_679_p2 + tmp_47_fu_685_p4);

assign grp_fu_1005_p0 = grp_fu_1005_p00;

assign grp_fu_1005_p00 = tmp_25_reg_1113;

assign grp_fu_1012_p0 = zj_cast_reg_1078;

assign grp_fu_385_p2 = (grp_fu_385_p0 + 2'd1);

assign grp_fu_982_p1 = tmp_15_cast_fu_427_p1;

assign grp_fu_989_p1 = tmp_15_cast_fu_427_p1;

assign grp_fu_989_p2 = ($signed(a_coeffs_load_reg_1028) * $signed({{1'b0}, {tmp_18_fu_431_p1}}));

assign grp_fu_996_p0 = zj_cast9_reg_1073;

assign i_5_fu_421_p2 = (i_reg_317 + 10'd1);

assign i_6_fu_513_p2 = (10'd1 + i_1_reg_340);

assign i_7_fu_558_p2 = (i_2_reg_352 + 10'd1);

assign i_8_fu_874_p2 = (i_i_reg_363 + 10'd1);

assign i_9_fu_936_p2 = ($signed(10'd1023) + $signed(i_i5_reg_374));

assign not_tmp_37_i_fu_837_p2 = (tmp_68_fu_811_p3 ^ 1'd1);

assign r_3_fu_721_p2 = (tmp_308_i_cast_fu_675_p1 + tmp_309_i_cast_fu_717_p1);

assign r_4_fu_772_p2 = (tmp_310_i_cast_reg_1205 + tmp_311_i_cast_fu_769_p1);

assign r_5_fu_799_p2 = (tmp_312_i_cast_fu_787_p1 + tmp_313_i_cast_fu_795_p1);

assign r_fu_659_p2 = (tmp_i_cast_fu_645_p1 + tmp_i_cast_27_fu_649_p1);

assign t_fu_805_p2 = ($signed(3'd5) + $signed(r_5_fu_799_p2));

assign tmp2_fu_527_p2 = (tmp_44_reg_1177 + tmp_53_fu_523_p1);

assign tmp_11_fu_599_p3 = {{tmp_61_fu_595_p1}, {1'd0}};

assign tmp_12_fu_611_p3 = {{tmp_66_fu_607_p1}, {1'd0}};

assign tmp_15_cast_fu_427_p1 = grp_fu_385_p2;

assign tmp_18_fu_431_p1 = tmp_18_fu_431_p10;

assign tmp_18_fu_431_p10 = zj_reg_328;

assign tmp_20_fu_459_p2 = ($signed(tmp1_reg_1101) + $signed(tmp_13_reg_298));

assign tmp_21_fu_416_p1 = i_reg_317;

assign tmp_289_i_fu_947_p1 = i_i5_reg_374;

assign tmp_290_i_fu_952_p2 = (b_coeffs_q0 - b_coeffs_q1);

assign tmp_291_i_cast_fu_962_p1 = tmp_71_fu_958_p1;

assign tmp_292_i_fu_967_p2 = (reg_392 - b_coeffs_q0);

assign tmp_293_i_cast_fu_977_p1 = tmp_70_fu_973_p1;

assign tmp_308_i_cast_fu_675_p1 = tmp_64_fu_665_p4;

assign tmp_309_i_cast_fu_717_p1 = fold_i_cast_fu_711_p2;

assign tmp_30_fu_436_p2 = ((grp_fu_385_p2 != 2'd3) ? 1'b1 : 1'b0);

assign tmp_311_i_cast_fu_769_p1 = fold1_i_cast_reg_1210;

assign tmp_312_i_cast_fu_787_p1 = tmp_65_fu_777_p4;

assign tmp_313_i_cast_fu_795_p1 = fold2_i_cast_fu_791_p2;

assign tmp_314_i_cast_fu_833_p1 = tmp_314_i_fu_827_p2;

assign tmp_314_i_fu_827_p2 = (r_5_fu_799_p2 & c_cast_fu_819_p3);

assign tmp_315_i_cast_cast_fu_843_p3 = ((not_tmp_37_i_fu_837_p2[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign tmp_316_i_cast_fu_857_p1 = $signed(tmp_316_i_fu_851_p2);

assign tmp_316_i_fu_851_p2 = (tmp_315_i_cast_cast_fu_843_p3 & t_fu_805_p2);

assign tmp_317_i_fu_861_p2 = (tmp_316_i_cast_fu_857_p1 ^ tmp_314_i_cast_fu_833_p1);

assign tmp_31_fu_448_p3 = ((tmp_30_fu_436_p2[0:0] === 1'b1) ? grp_fu_385_p2 : tmp_40_fu_442_p2);

assign tmp_32_fu_476_p2 = ($signed(10'd1021) + $signed(i_1_reg_340));

assign tmp_33_fu_482_p1 = tmp_32_fu_476_p2;

assign tmp_34_fu_471_p1 = i_1_reg_340;

assign tmp_35_fu_487_p2 = ($signed(10'd1023) + $signed(i_1_reg_340));

assign tmp_36_fu_493_p1 = tmp_35_fu_487_p2;

assign tmp_37_fu_498_p2 = ($signed(10'd1022) + $signed(i_1_reg_340));

assign tmp_38_fu_504_p1 = tmp_37_fu_498_p2;

assign tmp_39_fu_532_p2 = (tmp2_fu_527_p2 + tmp_45_fu_519_p1);

assign tmp_40_fu_442_p2 = (zj_reg_328 ^ 2'd2);

assign tmp_41_fu_538_p3 = {{tmp_39_fu_532_p2}, {1'd0}};

assign tmp_42_fu_546_p2 = (b_coeffs_q0 + tmp_41_fu_538_p3);

assign tmp_43_fu_564_p1 = i_2_reg_352;

assign tmp_44_fu_509_p1 = a_coeffs_q0[14:0];

assign tmp_45_fu_519_p1 = a_coeffs_q1[14:0];

assign tmp_46_fu_679_p2 = (tmp_11_fu_599_p3 + tmp_60_fu_591_p1);

assign tmp_47_fu_685_p4 = {{a_assign_fu_623_p2[11:8]}};

assign tmp_48_fu_695_p4 = {{a_assign_fu_623_p2[9:8]}};

assign tmp_49_fu_705_p2 = (tmp_12_fu_611_p3 + tmp_67_fu_619_p1);

assign tmp_49_i_cast_fu_895_p2 = (13'd0 - tmp_56_fu_885_p4);

assign tmp_50_fu_737_p2 = (tmp_49_fu_705_p2 + tmp_48_fu_695_p4);

assign tmp_51_fu_743_p4 = {{tmp_63_fu_653_p2[5:4]}};

assign tmp_51_i_fu_921_p3 = {{tmp_59_fu_911_p4}, {tmp_58_fu_905_p2}};

assign tmp_53_fu_523_p1 = a_coeffs_q0[14:0];

assign tmp_54_fu_569_p2 = b_coeffs_q1 << 16'd1;

assign tmp_55_fu_575_p1 = b_coeffs_q1[6:0];

assign tmp_56_fu_885_p4 = {{b_coeffs_q1[13:1]}};

assign tmp_57_fu_587_p1 = b_coeffs_q0[7:0];

assign tmp_58_fu_905_p2 = (tmp_69_fu_901_p1 | tmp_49_i_cast_fu_895_p2);

assign tmp_59_fu_911_p4 = {{b_coeffs_q1[15:13]}};

assign tmp_60_fu_591_p1 = b_coeffs_q0[3:0];

assign tmp_61_fu_595_p1 = b_coeffs_q1[2:0];

assign tmp_62_fu_635_p4 = {{a_assign_fu_623_p2[15:8]}};

assign tmp_63_fu_653_p2 = (a_assign_cast_fu_629_p2 + tmp_62_fu_635_p4);

assign tmp_64_fu_665_p4 = {{r_fu_659_p2[8:4]}};

assign tmp_65_fu_777_p4 = {{r_4_fu_772_p2[3:2]}};

assign tmp_66_fu_607_p1 = b_coeffs_q1[0:0];

assign tmp_67_fu_619_p1 = b_coeffs_q0[1:0];

assign tmp_68_fu_811_p3 = t_fu_805_p2[32'd2];

assign tmp_69_fu_901_p1 = b_coeffs_q1[12:0];

assign tmp_70_fu_973_p1 = tmp_292_i_fu_967_p2[12:0];

assign tmp_71_fu_958_p1 = tmp_290_i_fu_952_p2[12:0];

assign tmp_7_fu_579_p3 = {{tmp_55_fu_575_p1}, {1'd0}};

assign tmp_fu_396_p2 = ($signed(a_coeffs_q0) + $signed(a_coeffs_load_reg_1028));

assign tmp_i3_fu_880_p1 = i_i_reg_363;

assign tmp_i6_fu_930_p2 = ((i_i5_reg_374 == 10'd0) ? 1'b1 : 1'b0);

assign tmp_i7_fu_942_p1 = i_9_fu_936_p2;

assign tmp_i_cast_27_fu_649_p1 = a_assign_cast_fu_629_p2;

assign tmp_i_cast_fu_645_p1 = tmp_62_fu_635_p4;

assign zj_cast9_fu_402_p1 = zj_reg_328;

assign zj_cast_fu_406_p1 = zj_reg_328;

always @ (posedge ap_clk) begin
    zj_cast9_reg_1073[2] <= 1'b0;
    zj_cast_reg_1078[15:2] <= 14'b00000000000000;
    tmp_34_reg_1147[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
    tmp_289_i_reg_1248[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
end

endmodule //poly_lift