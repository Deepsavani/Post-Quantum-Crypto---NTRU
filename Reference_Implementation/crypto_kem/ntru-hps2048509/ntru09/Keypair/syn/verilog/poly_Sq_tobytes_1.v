// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_Sq_tobytes_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        r_address0,
        r_ce0,
        r_we0,
        r_d0,
        r_address1,
        r_ce1,
        r_we1,
        r_d1,
        a_coeffs_address0,
        a_coeffs_ce0,
        a_coeffs_q0
);

parameter    ap_ST_fsm_state1 = 17'd1;
parameter    ap_ST_fsm_state2 = 17'd2;
parameter    ap_ST_fsm_state3 = 17'd4;
parameter    ap_ST_fsm_state4 = 17'd8;
parameter    ap_ST_fsm_state5 = 17'd16;
parameter    ap_ST_fsm_state6 = 17'd32;
parameter    ap_ST_fsm_state7 = 17'd64;
parameter    ap_ST_fsm_state8 = 17'd128;
parameter    ap_ST_fsm_state9 = 17'd256;
parameter    ap_ST_fsm_state10 = 17'd512;
parameter    ap_ST_fsm_state11 = 17'd1024;
parameter    ap_ST_fsm_state12 = 17'd2048;
parameter    ap_ST_fsm_state13 = 17'd4096;
parameter    ap_ST_fsm_state14 = 17'd8192;
parameter    ap_ST_fsm_state15 = 17'd16384;
parameter    ap_ST_fsm_state16 = 17'd32768;
parameter    ap_ST_fsm_state17 = 17'd65536;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] r_address0;
output   r_ce0;
output   r_we0;
output  [7:0] r_d0;
output  [9:0] r_address1;
output   r_ce1;
output   r_we1;
output  [7:0] r_d1;
output  [8:0] a_coeffs_address0;
output   a_coeffs_ce0;
input  [15:0] a_coeffs_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] r_address0;
reg r_ce0;
reg r_we0;
reg[7:0] r_d0;
reg[9:0] r_address1;
reg r_ce1;
reg r_we1;
reg[7:0] r_d1;
reg[8:0] a_coeffs_address0;
reg a_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [16:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [9:0] next_mul_fu_526_p2;
reg   [9:0] next_mul_reg_1131;
wire    ap_CS_fsm_state2;
wire   [5:0] tmp_56_fu_538_p2;
reg   [5:0] tmp_56_reg_1139;
wire   [8:0] tmp_fu_544_p3;
reg   [8:0] tmp_reg_1144;
wire   [0:0] exitcond3_fu_532_p2;
wire   [3:0] j_3_fu_562_p2;
reg   [3:0] j_3_reg_1152;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond2_fu_556_p2;
reg   [7:0] tmp_21_reg_1162;
wire    ap_CS_fsm_state5;
wire   [5:0] grp_fu_496_p4;
reg   [5:0] tmp_32_reg_1167;
wire    ap_CS_fsm_state6;
reg   [7:0] tmp_30_reg_1172;
wire    ap_CS_fsm_state7;
reg   [6:0] tmp_40_reg_1177;
wire    ap_CS_fsm_state8;
reg   [7:0] tmp_72_reg_1182;
wire    ap_CS_fsm_state9;
wire   [2:0] tmp_57_fu_939_p2;
reg   [2:0] tmp_57_reg_1190;
wire    ap_CS_fsm_state11;
wire   [0:0] exitcond1_fu_933_p2;
wire   [3:0] j_4_fu_978_p2;
wire    ap_CS_fsm_state13;
wire   [0:0] exitcond_fu_967_p2;
wire   [4:0] tmp_92_fu_1003_p1;
reg   [4:0] tmp_92_reg_1208;
wire    ap_CS_fsm_state14;
wire   [1:0] grp_fu_506_p4;
reg   [1:0] tmp_51_reg_1213;
wire   [1:0] tmp_93_fu_1028_p1;
reg   [1:0] tmp_93_reg_1218;
wire    ap_CS_fsm_state15;
wire   [4:0] tmp_94_fu_1056_p1;
reg   [4:0] tmp_94_reg_1223;
wire    ap_CS_fsm_state16;
reg   [2:0] t_address0;
reg    t_ce0;
reg    t_we0;
reg   [15:0] t_d0;
wire   [15:0] t_q0;
reg   [2:0] t_address1;
reg    t_ce1;
reg    t_we1;
wire   [15:0] t_q1;
reg   [5:0] i_reg_427;
wire    ap_CS_fsm_state10;
reg   [9:0] phi_mul_reg_438;
reg   [3:0] j_reg_450;
wire    ap_CS_fsm_state4;
reg   [2:0] j_1_reg_462;
wire    ap_CS_fsm_state12;
reg   [3:0] j_2_reg_474;
wire   [63:0] tmp_75_fu_573_p1;
wire   [63:0] tmp_76_fu_578_p1;
wire   [63:0] sum_cast_fu_594_p1;
wire   [63:0] sum2_cast_fu_634_p1;
wire   [63:0] sum8_cast_fu_673_p1;
wire   [63:0] sum10_cast_fu_684_p1;
wire   [63:0] sum12_cast_fu_721_p1;
wire   [63:0] sum14_cast_fu_751_p1;
wire   [63:0] sum15_cast_fu_790_p1;
wire   [63:0] sum16_cast_fu_812_p1;
wire   [63:0] sum17_cast_fu_867_p1;
wire   [63:0] sum18_cast_fu_907_p1;
wire   [63:0] sum19_cast_fu_928_p1;
wire   [63:0] tmp_s_fu_957_p1;
wire   [63:0] tmp_58_fu_962_p1;
wire   [63:0] tmp_86_fu_973_p1;
wire    ap_CS_fsm_state17;
wire   [7:0] tmp_59_fu_583_p1;
wire   [7:0] tmp_61_fu_621_p2;
wire   [7:0] tmp_63_fu_661_p2;
wire   [7:0] tmp_65_fu_706_p3;
wire   [7:0] tmp_66_fu_738_p2;
wire   [7:0] tmp_67_fu_778_p2;
wire   [7:0] tmp_69_fu_852_p3;
wire   [7:0] tmp_71_fu_894_p2;
wire   [7:0] tmp_78_fu_996_p2;
wire   [7:0] tmp_79_fu_1020_p3;
wire   [7:0] tmp_82_fu_1049_p2;
wire   [7:0] tmp_84_fu_1077_p2;
wire   [7:0] tmp_95_fu_1084_p1;
wire   [8:0] j_cast6_fu_552_p1;
wire   [8:0] tmp_74_fu_568_p2;
wire   [9:0] sum_fu_588_p2;
wire   [4:0] tmp_60_fu_609_p1;
wire   [7:0] tmp_19_fu_613_p3;
wire   [7:0] tmp_18_fu_599_p4;
wire   [9:0] sum2_fu_628_p2;
wire   [1:0] tmp_62_fu_649_p1;
wire   [7:0] tmp_22_fu_653_p3;
wire   [9:0] sum8_fu_667_p2;
wire   [9:0] sum10_fu_678_p2;
wire   [4:0] tmp_73_fu_689_p1;
wire   [5:0] tmp_34_fu_693_p3;
wire   [5:0] tmp_36_fu_701_p2;
wire   [9:0] sum12_fu_715_p2;
wire   [3:0] tmp_85_fu_726_p1;
wire   [7:0] tmp_28_fu_730_p3;
wire   [7:0] grp_fu_516_p4;
wire   [9:0] sum14_fu_745_p2;
wire   [0:0] tmp_87_fu_766_p1;
wire   [7:0] tmp_31_fu_770_p3;
wire   [9:0] sum15_fu_784_p2;
wire   [9:0] sum16_fu_806_p2;
wire   [4:0] tmp_88_fu_827_p1;
wire   [6:0] tmp_42_fu_831_p3;
wire   [0:0] tmp_89_fu_844_p3;
wire   [6:0] tmp_43_fu_839_p2;
wire   [9:0] sum17_fu_861_p2;
wire   [2:0] tmp_90_fu_872_p1;
wire   [7:0] tmp_70_fu_876_p3;
wire   [7:0] tmp_35_fu_884_p4;
wire   [9:0] sum18_fu_901_p2;
wire   [9:0] sum19_fu_922_p2;
wire   [3:0] tmp_11_fu_945_p3;
wire  signed [8:0] tmp_cast9_fu_953_p1;
wire   [3:0] tmp_91_fu_984_p1;
wire   [7:0] tmp_77_fu_988_p3;
wire   [5:0] tmp_49_fu_1007_p3;
wire   [5:0] tmp_50_fu_1014_p2;
wire   [7:0] tmp_15_fu_1039_p4;
wire   [7:0] tmp_81_fu_1032_p3;
wire   [7:0] tmp_16_fu_1067_p4;
wire   [7:0] tmp_83_fu_1060_p3;
reg   [16:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 17'd1;
end

poly_Sq_tobytes_1_t #(
    .DataWidth( 16 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
t_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(t_address0),
    .ce0(t_ce0),
    .we0(t_we0),
    .d0(t_d0),
    .q0(t_q0),
    .address1(t_address1),
    .ce1(t_ce1),
    .we1(t_we1),
    .d1(a_coeffs_q0),
    .q1(t_q1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        i_reg_427 <= tmp_56_reg_1139;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_427 <= 6'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_532_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        j_1_reg_462 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        j_1_reg_462 <= tmp_57_reg_1190;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state11) & (exitcond1_fu_933_p2 == 1'd1))) begin
        j_2_reg_474 <= 4'd4;
    end else if (((exitcond_fu_967_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        j_2_reg_474 <= j_4_fu_978_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_532_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_450 <= 4'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_reg_450 <= j_3_reg_1152;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        phi_mul_reg_438 <= next_mul_reg_1131;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        phi_mul_reg_438 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_3_reg_1152 <= j_3_fu_562_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        next_mul_reg_1131 <= next_mul_fu_526_p2;
        tmp_56_reg_1139 <= tmp_56_fu_538_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        tmp_21_reg_1162 <= {{t_q1[12:5]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_30_reg_1172 <= {{t_q1[11:4]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tmp_32_reg_1167 <= {{t_q1[15:10]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tmp_40_reg_1177 <= {{t_q0[15:9]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        tmp_51_reg_1213 <= {{t_q0[6:5]}};
        tmp_92_reg_1208 <= tmp_92_fu_1003_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        tmp_57_reg_1190 <= tmp_57_fu_939_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        tmp_72_reg_1182 <= {{t_q0[10:3]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        tmp_93_reg_1218 <= tmp_93_fu_1028_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        tmp_94_reg_1223 <= tmp_94_fu_1056_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_532_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_reg_1144[8 : 3] <= tmp_fu_544_p3[8 : 3];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        a_coeffs_address0 = tmp_s_fu_957_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_coeffs_address0 = tmp_75_fu_573_p1;
    end else begin
        a_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state11))) begin
        a_coeffs_ce0 = 1'b1;
    end else begin
        a_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state17)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        r_address0 = 64'd897;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        r_address0 = 64'd899;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_address0 = 64'd901;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        r_address0 = sum19_cast_fu_928_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_address0 = sum17_cast_fu_867_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_address0 = sum15_cast_fu_790_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_address0 = sum12_cast_fu_721_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_address0 = sum8_cast_fu_673_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_address0 = sum_cast_fu_594_p1;
    end else begin
        r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        r_address1 = 64'd898;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_address1 = 64'd900;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        r_address1 = 64'd902;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_address1 = sum18_cast_fu_907_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_address1 = sum16_cast_fu_812_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_address1 = sum14_cast_fu_751_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_address1 = sum10_cast_fu_684_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_address1 = sum2_cast_fu_634_p1;
    end else begin
        r_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        r_ce0 = 1'b1;
    end else begin
        r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        r_ce1 = 1'b1;
    end else begin
        r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        r_d0 = tmp_95_fu_1084_p1;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        r_d0 = tmp_82_fu_1049_p2;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_d0 = tmp_79_fu_1020_p3;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        r_d0 = tmp_72_reg_1182;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_d0 = tmp_69_fu_852_p3;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_d0 = tmp_67_fu_778_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_d0 = tmp_65_fu_706_p3;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_d0 = tmp_63_fu_661_p2;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_d0 = tmp_59_fu_583_p1;
    end else begin
        r_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        r_d1 = tmp_84_fu_1077_p2;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        r_d1 = tmp_78_fu_996_p2;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_d1 = tmp_71_fu_894_p2;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_d1 = {{t_q0[8:1]}};
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_d1 = tmp_66_fu_738_p2;
    end else if (((1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state6))) begin
        r_d1 = {{t_q1[9:2]}};
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_d1 = tmp_61_fu_621_p2;
    end else begin
        r_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        r_we0 = 1'b1;
    end else begin
        r_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        r_we1 = 1'b1;
    end else begin
        r_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        t_address0 = 64'd1;
    end else if (((exitcond_fu_967_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        t_address0 = tmp_86_fu_973_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        t_address0 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        t_address0 = 64'd5;
    end else if (((1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_967_p2 == 1'd1)))) begin
        t_address0 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        t_address0 = tmp_76_fu_578_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        t_address0 = 64'd0;
    end else begin
        t_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        t_address1 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        t_address1 = tmp_58_fu_962_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        t_address1 = 64'd6;
    end else if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state6))) begin
        t_address1 = 64'd4;
    end else if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state5))) begin
        t_address1 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        t_address1 = 64'd1;
    end else begin
        t_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_967_p2 == 1'd1)) | ((exitcond_fu_967_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)))) begin
        t_ce0 = 1'b1;
    end else begin
        t_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        t_ce1 = 1'b1;
    end else begin
        t_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_fu_967_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        t_d0 = 16'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        t_d0 = a_coeffs_q0;
    end else begin
        t_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | ((exitcond_fu_967_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)))) begin
        t_we0 = 1'b1;
    end else begin
        t_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        t_we1 = 1'b1;
    end else begin
        t_we1 = 1'b0;
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
            if (((exitcond3_fu_532_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond2_fu_556_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
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
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state11 : begin
            if (((1'b1 == ap_CS_fsm_state11) & (exitcond1_fu_933_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state13 : begin
            if (((exitcond_fu_967_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
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

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond1_fu_933_p2 = ((j_1_reg_462 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond2_fu_556_p2 = ((j_reg_450 == 4'd8) ? 1'b1 : 1'b0);

assign exitcond3_fu_532_p2 = ((i_reg_427 == 6'd63) ? 1'b1 : 1'b0);

assign exitcond_fu_967_p2 = ((j_2_reg_474 == 4'd8) ? 1'b1 : 1'b0);

assign grp_fu_496_p4 = {{t_q1[15:10]}};

assign grp_fu_506_p4 = {{t_q0[6:5]}};

assign grp_fu_516_p4 = {{t_q0[14:7]}};

assign j_3_fu_562_p2 = (j_reg_450 + 4'd1);

assign j_4_fu_978_p2 = (j_2_reg_474 + 4'd1);

assign j_cast6_fu_552_p1 = j_reg_450;

assign next_mul_fu_526_p2 = (phi_mul_reg_438 + 10'd11);

assign sum10_cast_fu_684_p1 = sum10_fu_678_p2;

assign sum10_fu_678_p2 = (10'd207 + phi_mul_reg_438);

assign sum12_cast_fu_721_p1 = sum12_fu_715_p2;

assign sum12_fu_715_p2 = (10'd208 + phi_mul_reg_438);

assign sum14_cast_fu_751_p1 = sum14_fu_745_p2;

assign sum14_fu_745_p2 = (10'd209 + phi_mul_reg_438);

assign sum15_cast_fu_790_p1 = sum15_fu_784_p2;

assign sum15_fu_784_p2 = (10'd210 + phi_mul_reg_438);

assign sum16_cast_fu_812_p1 = sum16_fu_806_p2;

assign sum16_fu_806_p2 = (10'd211 + phi_mul_reg_438);

assign sum17_cast_fu_867_p1 = sum17_fu_861_p2;

assign sum17_fu_861_p2 = (10'd212 + phi_mul_reg_438);

assign sum18_cast_fu_907_p1 = sum18_fu_901_p2;

assign sum18_fu_901_p2 = (10'd213 + phi_mul_reg_438);

assign sum19_cast_fu_928_p1 = sum19_fu_922_p2;

assign sum19_fu_922_p2 = (10'd214 + phi_mul_reg_438);

assign sum2_cast_fu_634_p1 = sum2_fu_628_p2;

assign sum2_fu_628_p2 = (10'd205 + phi_mul_reg_438);

assign sum8_cast_fu_673_p1 = sum8_fu_667_p2;

assign sum8_fu_667_p2 = (10'd206 + phi_mul_reg_438);

assign sum_cast_fu_594_p1 = sum_fu_588_p2;

assign sum_fu_588_p2 = (10'd204 + phi_mul_reg_438);

assign tmp_11_fu_945_p3 = {{1'd1}, {j_1_reg_462}};

assign tmp_15_fu_1039_p4 = {{t_q0[12:5]}};

assign tmp_16_fu_1067_p4 = {{t_q1[15:8]}};

assign tmp_18_fu_599_p4 = {{t_q0[15:8]}};

assign tmp_19_fu_613_p3 = {{tmp_60_fu_609_p1}, {3'd0}};

assign tmp_22_fu_653_p3 = {{tmp_62_fu_649_p1}, {6'd0}};

assign tmp_28_fu_730_p3 = {{tmp_85_fu_726_p1}, {4'd0}};

assign tmp_31_fu_770_p3 = {{tmp_87_fu_766_p1}, {7'd0}};

assign tmp_34_fu_693_p3 = {{tmp_73_fu_689_p1}, {1'd0}};

assign tmp_35_fu_884_p4 = {{t_q1[13:6]}};

assign tmp_36_fu_701_p2 = (tmp_34_fu_693_p3 | tmp_32_reg_1167);

assign tmp_42_fu_831_p3 = {{tmp_88_fu_827_p1}, {2'd0}};

assign tmp_43_fu_839_p2 = (tmp_42_fu_831_p3 | tmp_40_reg_1177);

assign tmp_49_fu_1007_p3 = {{tmp_92_reg_1208}, {1'd0}};

assign tmp_50_fu_1014_p2 = (tmp_49_fu_1007_p3 | grp_fu_496_p4);

assign tmp_56_fu_538_p2 = (i_reg_427 + 6'd1);

assign tmp_57_fu_939_p2 = (j_1_reg_462 + 3'd1);

assign tmp_58_fu_962_p1 = j_1_reg_462;

assign tmp_59_fu_583_p1 = t_q0[7:0];

assign tmp_60_fu_609_p1 = t_q1[4:0];

assign tmp_61_fu_621_p2 = (tmp_19_fu_613_p3 | tmp_18_fu_599_p4);

assign tmp_62_fu_649_p1 = t_q1[1:0];

assign tmp_63_fu_661_p2 = (tmp_22_fu_653_p3 | tmp_21_reg_1162);

assign tmp_65_fu_706_p3 = {{grp_fu_506_p4}, {tmp_36_fu_701_p2}};

assign tmp_66_fu_738_p2 = (tmp_28_fu_730_p3 | grp_fu_516_p4);

assign tmp_67_fu_778_p2 = (tmp_31_fu_770_p3 | tmp_30_reg_1172);

assign tmp_69_fu_852_p3 = {{tmp_89_fu_844_p3}, {tmp_43_fu_839_p2}};

assign tmp_70_fu_876_p3 = {{tmp_90_fu_872_p1}, {5'd0}};

assign tmp_71_fu_894_p2 = (tmp_70_fu_876_p3 | tmp_35_fu_884_p4);

assign tmp_73_fu_689_p1 = t_q0[4:0];

assign tmp_74_fu_568_p2 = (tmp_reg_1144 + j_cast6_fu_552_p1);

assign tmp_75_fu_573_p1 = tmp_74_fu_568_p2;

assign tmp_76_fu_578_p1 = j_reg_450;

assign tmp_77_fu_988_p3 = {{tmp_91_fu_984_p1}, {4'd0}};

assign tmp_78_fu_996_p2 = (tmp_77_fu_988_p3 | grp_fu_516_p4);

assign tmp_79_fu_1020_p3 = {{tmp_51_reg_1213}, {tmp_50_fu_1014_p2}};

assign tmp_81_fu_1032_p3 = {{tmp_93_reg_1218}, {6'd0}};

assign tmp_82_fu_1049_p2 = (tmp_81_fu_1032_p3 | tmp_15_fu_1039_p4);

assign tmp_83_fu_1060_p3 = {{tmp_94_reg_1223}, {3'd0}};

assign tmp_84_fu_1077_p2 = (tmp_83_fu_1060_p3 | tmp_16_fu_1067_p4);

assign tmp_85_fu_726_p1 = t_q1[3:0];

assign tmp_86_fu_973_p1 = j_2_reg_474;

assign tmp_87_fu_766_p1 = t_q0[0:0];

assign tmp_88_fu_827_p1 = t_q1[4:0];

assign tmp_89_fu_844_p3 = t_q1[32'd5];

assign tmp_90_fu_872_p1 = t_q0[2:0];

assign tmp_91_fu_984_p1 = t_q1[3:0];

assign tmp_92_fu_1003_p1 = t_q0[4:0];

assign tmp_93_fu_1028_p1 = t_q1[1:0];

assign tmp_94_fu_1056_p1 = t_q0[4:0];

assign tmp_95_fu_1084_p1 = t_q1[7:0];

assign tmp_cast9_fu_953_p1 = $signed(tmp_11_fu_945_p3);

assign tmp_fu_544_p3 = {{i_reg_427}, {3'd0}};

assign tmp_s_fu_957_p1 = $unsigned(tmp_cast9_fu_953_p1);

always @ (posedge ap_clk) begin
    tmp_reg_1144[2:0] <= 3'b000;
end

endmodule //poly_Sq_tobytes_1