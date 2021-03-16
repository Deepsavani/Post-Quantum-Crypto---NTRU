// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_Sq_frombytes_1 (
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
        r_coeffs_address1,
        r_coeffs_ce1,
        r_coeffs_we1,
        r_coeffs_d1,
        a_address0,
        a_ce0,
        a_q0,
        a_address1,
        a_ce1,
        a_q1
);

parameter    ap_ST_fsm_state1 = 11'd1;
parameter    ap_ST_fsm_state2 = 11'd2;
parameter    ap_ST_fsm_state3 = 11'd4;
parameter    ap_ST_fsm_state4 = 11'd8;
parameter    ap_ST_fsm_state5 = 11'd16;
parameter    ap_ST_fsm_state6 = 11'd32;
parameter    ap_ST_fsm_state7 = 11'd64;
parameter    ap_ST_fsm_state8 = 11'd128;
parameter    ap_ST_fsm_state9 = 11'd256;
parameter    ap_ST_fsm_state10 = 11'd512;
parameter    ap_ST_fsm_state11 = 11'd1024;

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
output  [9:0] r_coeffs_address1;
output   r_coeffs_ce1;
output   r_coeffs_we1;
output  [15:0] r_coeffs_d1;
output  [10:0] a_address0;
output   a_ce0;
input  [7:0] a_q0;
output  [10:0] a_address1;
output   a_ce1;
input  [7:0] a_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] r_coeffs_address0;
reg r_coeffs_ce0;
reg r_coeffs_we0;
reg[15:0] r_coeffs_d0;
reg[9:0] r_coeffs_address1;
reg r_coeffs_ce1;
reg r_coeffs_we1;
reg[15:0] r_coeffs_d1;
reg[10:0] a_address0;
reg a_ce0;
reg[10:0] a_address1;
reg a_ce1;

(* fsm_encoding = "none" *) reg   [10:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [6:0] tmp_4_fu_432_p2;
reg   [6:0] tmp_4_reg_1085;
wire    ap_CS_fsm_state2;
wire   [0:0] exitcond_fu_426_p2;
reg   [7:0] a_load_6_reg_1105;
wire    ap_CS_fsm_state3;
wire   [9:0] tmp_20_fu_511_p3;
reg   [9:0] tmp_20_reg_1120;
wire    ap_CS_fsm_state4;
reg   [1:0] tmp_28_reg_1130;
wire   [6:0] grp_fu_416_p4;
reg   [6:0] tmp_39_reg_1145;
wire    ap_CS_fsm_state5;
reg   [0:0] tmp_51_reg_1160;
wire    ap_CS_fsm_state6;
wire   [9:0] next_mul_fu_811_p2;
reg   [9:0] next_mul_reg_1175;
wire    ap_CS_fsm_state7;
reg   [5:0] tmp_62_reg_1180;
wire    ap_CS_fsm_state9;
wire   [0:0] tmp_10_fu_997_p1;
reg   [0:0] tmp_10_reg_1205;
wire    ap_CS_fsm_state10;
wire   [5:0] tmp_12_fu_1049_p1;
reg   [5:0] tmp_12_reg_1215;
reg   [6:0] i_reg_382;
wire    ap_CS_fsm_state8;
reg   [9:0] phi_mul_reg_394;
wire   [63:0] sum_cast_fu_448_p1;
wire   [63:0] sum2_cast_fu_469_p1;
wire   [63:0] sum4_cast_fu_490_p1;
wire   [63:0] tmp_21_fu_519_p1;
wire   [63:0] tmp_27_fu_547_p1;
wire   [63:0] sum6_cast_fu_578_p1;
wire   [63:0] sum8_cast_fu_599_p1;
wire   [63:0] tmp_38_fu_651_p1;
wire   [63:0] sum1_cast_fu_672_p1;
wire   [63:0] sum3_cast_fu_693_p1;
wire   [63:0] tmp_44_fu_719_p1;
wire   [63:0] tmp_50_fu_756_p1;
wire   [63:0] sum5_cast_fu_785_p1;
wire   [63:0] sum7_cast_fu_806_p1;
wire   [63:0] tmp_61_fu_864_p1;
wire   [63:0] sum9_cast_fu_895_p1;
wire   [63:0] sum10_cast_fu_916_p1;
wire   [63:0] tmp_67_fu_942_p1;
wire   [63:0] tmp_72_fu_975_p1;
wire    ap_CS_fsm_state11;
wire   [15:0] tmp_19_fu_506_p1;
wire   [15:0] tmp_37_cast_fu_536_p1;
wire   [15:0] tmp_51_cast_fu_641_p1;
wire   [15:0] tmp_60_cast_fu_709_p1;
wire   [15:0] tmp_69_cast_fu_746_p1;
wire   [15:0] tmp_83_cast_fu_854_p1;
wire   [15:0] tmp_92_cast_fu_932_p1;
wire   [15:0] tmp_100_cast_fu_965_p1;
wire   [15:0] tmp_8_cast_fu_992_p1;
wire   [15:0] tmp_12_cast_fu_1044_p1;
wire   [15:0] tmp_17_cast_fu_1060_p1;
wire   [15:0] tmp_14_fu_1077_p1;
wire   [10:0] tmp_22_cast_fu_438_p1;
wire   [10:0] sum_fu_442_p2;
wire   [9:0] tmp_16_fu_453_p2;
wire   [10:0] tmp_24_cast_fu_459_p1;
wire   [10:0] sum2_fu_463_p2;
wire   [9:0] tmp_23_fu_474_p2;
wire   [10:0] tmp_33_cast_fu_480_p1;
wire   [10:0] sum4_fu_484_p2;
wire   [2:0] tmp_17_fu_495_p1;
wire   [10:0] tmp_18_fu_499_p3;
wire   [5:0] tmp_24_fu_524_p1;
wire   [4:0] grp_fu_406_p4;
wire   [10:0] tmp_25_fu_528_p3;
wire   [9:0] tmp_26_fu_541_p2;
wire   [9:0] tmp_30_fu_562_p2;
wire   [10:0] tmp_42_cast_fu_568_p1;
wire   [10:0] sum6_fu_572_p2;
wire   [9:0] tmp_32_fu_583_p2;
wire   [10:0] tmp_46_cast_fu_589_p1;
wire   [10:0] sum8_fu_593_p2;
wire   [7:0] tmp_29_fu_604_p1;
wire   [9:0] tmp_34_fu_619_p3;
wire   [9:0] tmp_31_fu_607_p3;
wire   [0:0] tmp_33_fu_615_p1;
wire   [9:0] tmp_35_fu_627_p2;
wire   [10:0] tmp_36_fu_633_p3;
wire   [9:0] tmp_37_fu_646_p2;
wire   [9:0] tmp_40_fu_656_p2;
wire   [10:0] tmp_56_cast_fu_662_p1;
wire   [10:0] sum1_fu_666_p2;
wire   [9:0] tmp_46_fu_677_p2;
wire   [10:0] tmp_65_cast_fu_683_p1;
wire   [10:0] sum3_fu_687_p2;
wire   [3:0] tmp_41_fu_698_p1;
wire   [10:0] tmp_42_fu_702_p3;
wire   [9:0] tmp_43_fu_714_p2;
wire   [6:0] tmp_47_fu_734_p1;
wire   [3:0] tmp_45_fu_724_p4;
wire   [10:0] tmp_48_fu_738_p3;
wire   [9:0] tmp_49_fu_751_p2;
wire   [9:0] tmp_53_fu_769_p2;
wire   [10:0] tmp_74_cast_fu_775_p1;
wire   [10:0] sum5_fu_779_p2;
wire   [9:0] tmp_55_fu_790_p2;
wire   [10:0] tmp_78_cast_fu_796_p1;
wire   [10:0] sum7_fu_800_p2;
wire   [7:0] tmp_52_fu_817_p1;
wire   [8:0] tmp_57_fu_832_p3;
wire   [8:0] tmp_54_fu_820_p3;
wire   [1:0] tmp_56_fu_828_p1;
wire   [8:0] tmp_58_fu_840_p2;
wire   [10:0] tmp_59_fu_846_p3;
wire   [9:0] tmp_60_fu_859_p2;
wire   [9:0] tmp_63_fu_879_p2;
wire   [10:0] tmp_88_cast_fu_885_p1;
wire   [10:0] sum9_fu_889_p2;
wire   [9:0] tmp_69_fu_900_p2;
wire   [10:0] tmp_97_cast_fu_906_p1;
wire   [10:0] sum10_fu_910_p2;
wire   [4:0] tmp_64_fu_921_p1;
wire   [10:0] tmp_65_fu_925_p3;
wire   [9:0] tmp_66_fu_937_p2;
wire   [2:0] tmp_68_fu_947_p4;
wire   [10:0] tmp_70_fu_957_p3;
wire   [9:0] tmp_71_fu_970_p2;
wire   [3:0] tmp_fu_980_p1;
wire   [10:0] tmp_8_fu_984_p3;
wire   [1:0] tmp_1_fu_1001_p4;
wire   [7:0] tmp_6_fu_1011_p1;
wire   [9:0] tmp_5_fu_1023_p3;
wire   [9:0] tmp_3_fu_1015_p3;
wire   [9:0] tmp_7_fu_1031_p2;
wire   [10:0] tmp_9_fu_1037_p3;
wire   [10:0] tmp_11_fu_1053_p3;
wire   [2:0] tmp_15_fu_1065_p1;
wire   [10:0] tmp_13_fu_1069_p3;
reg   [10:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 11'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        i_reg_382 <= tmp_4_reg_1085;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_382 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        phi_mul_reg_394 <= next_mul_reg_1175;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_mul_reg_394 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        a_load_6_reg_1105 <= a_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        next_mul_reg_1175 <= next_mul_fu_811_p2;
        tmp_62_reg_1180 <= {{a_q0[7:2]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        tmp_10_reg_1205 <= tmp_10_fu_997_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        tmp_12_reg_1215 <= tmp_12_fu_1049_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_20_reg_1120[9 : 3] <= tmp_20_fu_511_p3[9 : 3];
        tmp_28_reg_1130 <= {{a_q0[7:6]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        tmp_39_reg_1145 <= {{a_q0[7:1]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        tmp_4_reg_1085 <= tmp_4_fu_432_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tmp_51_reg_1160 <= a_q0[32'd7];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        a_address0 = 64'd1196;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        a_address0 = 64'd1199;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        a_address0 = sum10_cast_fu_916_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        a_address0 = sum7_cast_fu_806_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        a_address0 = sum3_cast_fu_693_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        a_address0 = sum8_cast_fu_599_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_address0 = sum4_cast_fu_490_p1;
    end else if (((exitcond_fu_426_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        a_address0 = 64'd1200;
    end else if (((exitcond_fu_426_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        a_address0 = sum_cast_fu_448_p1;
    end else begin
        a_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        a_address1 = 64'd1197;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        a_address1 = 64'd1198;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        a_address1 = sum9_cast_fu_895_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        a_address1 = sum5_cast_fu_785_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        a_address1 = sum1_cast_fu_672_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        a_address1 = sum6_cast_fu_578_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_address1 = sum2_cast_fu_469_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        a_address1 = 64'd1201;
    end else begin
        a_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | ((exitcond_fu_426_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((exitcond_fu_426_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        a_ce0 = 1'b1;
    end else begin
        a_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6))) begin
        a_ce1 = 1'b1;
    end else begin
        a_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state11)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_address0 = 64'd673;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_address0 = 64'd675;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_address0 = tmp_67_fu_942_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_address0 = tmp_50_fu_756_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_address0 = tmp_38_fu_651_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        r_coeffs_address0 = tmp_21_fu_519_p1;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_address1 = 64'd672;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        r_coeffs_address1 = 64'd674;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_address1 = tmp_72_fu_975_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_address1 = tmp_61_fu_864_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_address1 = tmp_44_fu_719_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        r_coeffs_address1 = tmp_27_fu_547_p1;
    end else begin
        r_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state6))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6))) begin
        r_coeffs_ce1 = 1'b1;
    end else begin
        r_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_d0 = tmp_17_cast_fu_1060_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_d0 = tmp_8_cast_fu_992_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_d0 = tmp_92_cast_fu_932_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_d0 = tmp_69_cast_fu_746_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d0 = tmp_51_cast_fu_641_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        r_coeffs_d0 = tmp_19_fu_506_p1;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_d1 = tmp_14_fu_1077_p1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        r_coeffs_d1 = tmp_12_cast_fu_1044_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_d1 = tmp_100_cast_fu_965_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_d1 = tmp_83_cast_fu_854_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_d1 = tmp_60_cast_fu_709_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        r_coeffs_d1 = tmp_37_cast_fu_536_p1;
    end else begin
        r_coeffs_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state6))) begin
        r_coeffs_we0 = 1'b1;
    end else begin
        r_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6))) begin
        r_coeffs_we1 = 1'b1;
    end else begin
        r_coeffs_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond_fu_426_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
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
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
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

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond_fu_426_p2 = ((i_reg_382 == 7'd84) ? 1'b1 : 1'b0);

assign grp_fu_406_p4 = {{a_q1[7:3]}};

assign grp_fu_416_p4 = {{a_q0[7:1]}};

assign next_mul_fu_811_p2 = (10'd11 + phi_mul_reg_394);

assign sum10_cast_fu_916_p1 = sum10_fu_910_p2;

assign sum10_fu_910_p2 = (11'd272 + tmp_97_cast_fu_906_p1);

assign sum1_cast_fu_672_p1 = sum1_fu_666_p2;

assign sum1_fu_666_p2 = (11'd272 + tmp_56_cast_fu_662_p1);

assign sum2_cast_fu_469_p1 = sum2_fu_463_p2;

assign sum2_fu_463_p2 = (11'd272 + tmp_24_cast_fu_459_p1);

assign sum3_cast_fu_693_p1 = sum3_fu_687_p2;

assign sum3_fu_687_p2 = (11'd272 + tmp_65_cast_fu_683_p1);

assign sum4_cast_fu_490_p1 = sum4_fu_484_p2;

assign sum4_fu_484_p2 = (11'd272 + tmp_33_cast_fu_480_p1);

assign sum5_cast_fu_785_p1 = sum5_fu_779_p2;

assign sum5_fu_779_p2 = (11'd272 + tmp_74_cast_fu_775_p1);

assign sum6_cast_fu_578_p1 = sum6_fu_572_p2;

assign sum6_fu_572_p2 = (11'd272 + tmp_42_cast_fu_568_p1);

assign sum7_cast_fu_806_p1 = sum7_fu_800_p2;

assign sum7_fu_800_p2 = (11'd272 + tmp_78_cast_fu_796_p1);

assign sum8_cast_fu_599_p1 = sum8_fu_593_p2;

assign sum8_fu_593_p2 = (11'd272 + tmp_46_cast_fu_589_p1);

assign sum9_cast_fu_895_p1 = sum9_fu_889_p2;

assign sum9_fu_889_p2 = (11'd272 + tmp_88_cast_fu_885_p1);

assign sum_cast_fu_448_p1 = sum_fu_442_p2;

assign sum_fu_442_p2 = (11'd272 + tmp_22_cast_fu_438_p1);

assign tmp_100_cast_fu_965_p1 = tmp_70_fu_957_p3;

assign tmp_10_fu_997_p1 = a_q0[0:0];

assign tmp_11_fu_1053_p3 = {{tmp_12_reg_1215}, {grp_fu_406_p4}};

assign tmp_12_cast_fu_1044_p1 = tmp_9_fu_1037_p3;

assign tmp_12_fu_1049_p1 = a_q1[5:0];

assign tmp_13_fu_1069_p3 = {{tmp_15_fu_1065_p1}, {a_q0}};

assign tmp_14_fu_1077_p1 = tmp_13_fu_1069_p3;

assign tmp_15_fu_1065_p1 = a_q1[2:0];

assign tmp_16_fu_453_p2 = (10'd1 + phi_mul_reg_394);

assign tmp_17_cast_fu_1060_p1 = tmp_11_fu_1053_p3;

assign tmp_17_fu_495_p1 = a_q1[2:0];

assign tmp_18_fu_499_p3 = {{tmp_17_fu_495_p1}, {a_load_6_reg_1105}};

assign tmp_19_fu_506_p1 = tmp_18_fu_499_p3;

assign tmp_1_fu_1001_p4 = {{a_q1[7:6]}};

assign tmp_20_fu_511_p3 = {{i_reg_382}, {3'd0}};

assign tmp_21_fu_519_p1 = tmp_20_fu_511_p3;

assign tmp_22_cast_fu_438_p1 = phi_mul_reg_394;

assign tmp_23_fu_474_p2 = (10'd2 + phi_mul_reg_394);

assign tmp_24_cast_fu_459_p1 = tmp_16_fu_453_p2;

assign tmp_24_fu_524_p1 = a_q0[5:0];

assign tmp_25_fu_528_p3 = {{tmp_24_fu_524_p1}, {grp_fu_406_p4}};

assign tmp_26_fu_541_p2 = (tmp_20_fu_511_p3 | 10'd1);

assign tmp_27_fu_547_p1 = tmp_26_fu_541_p2;

assign tmp_29_fu_604_p1 = tmp_28_reg_1130;

assign tmp_30_fu_562_p2 = (10'd3 + phi_mul_reg_394);

assign tmp_31_fu_607_p3 = {{a_q1}, {2'd0}};

assign tmp_32_fu_583_p2 = (10'd4 + phi_mul_reg_394);

assign tmp_33_cast_fu_480_p1 = tmp_23_fu_474_p2;

assign tmp_33_fu_615_p1 = a_q0[0:0];

assign tmp_34_fu_619_p3 = {{2'd0}, {tmp_29_fu_604_p1}};

assign tmp_35_fu_627_p2 = (tmp_34_fu_619_p3 | tmp_31_fu_607_p3);

assign tmp_36_fu_633_p3 = {{tmp_33_fu_615_p1}, {tmp_35_fu_627_p2}};

assign tmp_37_cast_fu_536_p1 = tmp_25_fu_528_p3;

assign tmp_37_fu_646_p2 = (tmp_20_reg_1120 | 10'd2);

assign tmp_38_fu_651_p1 = tmp_37_fu_646_p2;

assign tmp_3_fu_1015_p3 = {{a_q0}, {2'd0}};

assign tmp_40_fu_656_p2 = (10'd5 + phi_mul_reg_394);

assign tmp_41_fu_698_p1 = a_q1[3:0];

assign tmp_42_cast_fu_568_p1 = tmp_30_fu_562_p2;

assign tmp_42_fu_702_p3 = {{tmp_41_fu_698_p1}, {tmp_39_reg_1145}};

assign tmp_43_fu_714_p2 = (tmp_20_reg_1120 | 10'd3);

assign tmp_44_fu_719_p1 = tmp_43_fu_714_p2;

assign tmp_45_fu_724_p4 = {{a_q1[7:4]}};

assign tmp_46_cast_fu_589_p1 = tmp_32_fu_583_p2;

assign tmp_46_fu_677_p2 = (10'd6 + phi_mul_reg_394);

assign tmp_47_fu_734_p1 = a_q0[6:0];

assign tmp_48_fu_738_p3 = {{tmp_47_fu_734_p1}, {tmp_45_fu_724_p4}};

assign tmp_49_fu_751_p2 = (tmp_20_reg_1120 | 10'd4);

assign tmp_4_fu_432_p2 = (i_reg_382 + 7'd1);

assign tmp_50_fu_756_p1 = tmp_49_fu_751_p2;

assign tmp_51_cast_fu_641_p1 = tmp_36_fu_633_p3;

assign tmp_52_fu_817_p1 = tmp_51_reg_1160;

assign tmp_53_fu_769_p2 = (10'd7 + phi_mul_reg_394);

assign tmp_54_fu_820_p3 = {{a_q1}, {1'd0}};

assign tmp_55_fu_790_p2 = (10'd8 + phi_mul_reg_394);

assign tmp_56_cast_fu_662_p1 = tmp_40_fu_656_p2;

assign tmp_56_fu_828_p1 = a_q0[1:0];

assign tmp_57_fu_832_p3 = {{1'd0}, {tmp_52_fu_817_p1}};

assign tmp_58_fu_840_p2 = (tmp_57_fu_832_p3 | tmp_54_fu_820_p3);

assign tmp_59_fu_846_p3 = {{tmp_56_fu_828_p1}, {tmp_58_fu_840_p2}};

assign tmp_5_fu_1023_p3 = {{2'd0}, {tmp_6_fu_1011_p1}};

assign tmp_60_cast_fu_709_p1 = tmp_42_fu_702_p3;

assign tmp_60_fu_859_p2 = (tmp_20_reg_1120 | 10'd5);

assign tmp_61_fu_864_p1 = tmp_60_fu_859_p2;

assign tmp_63_fu_879_p2 = (10'd9 + phi_mul_reg_394);

assign tmp_64_fu_921_p1 = a_q1[4:0];

assign tmp_65_cast_fu_683_p1 = tmp_46_fu_677_p2;

assign tmp_65_fu_925_p3 = {{tmp_64_fu_921_p1}, {tmp_62_reg_1180}};

assign tmp_66_fu_937_p2 = (tmp_20_reg_1120 | 10'd6);

assign tmp_67_fu_942_p1 = tmp_66_fu_937_p2;

assign tmp_68_fu_947_p4 = {{a_q1[7:5]}};

assign tmp_69_cast_fu_746_p1 = tmp_48_fu_738_p3;

assign tmp_69_fu_900_p2 = (10'd10 + phi_mul_reg_394);

assign tmp_6_fu_1011_p1 = tmp_1_fu_1001_p4;

assign tmp_70_fu_957_p3 = {{a_q0}, {tmp_68_fu_947_p4}};

assign tmp_71_fu_970_p2 = (tmp_20_reg_1120 | 10'd7);

assign tmp_72_fu_975_p1 = tmp_71_fu_970_p2;

assign tmp_74_cast_fu_775_p1 = tmp_53_fu_769_p2;

assign tmp_78_cast_fu_796_p1 = tmp_55_fu_790_p2;

assign tmp_7_fu_1031_p2 = (tmp_5_fu_1023_p3 | tmp_3_fu_1015_p3);

assign tmp_83_cast_fu_854_p1 = tmp_59_fu_846_p3;

assign tmp_88_cast_fu_885_p1 = tmp_63_fu_879_p2;

assign tmp_8_cast_fu_992_p1 = tmp_8_fu_984_p3;

assign tmp_8_fu_984_p3 = {{tmp_fu_980_p1}, {grp_fu_416_p4}};

assign tmp_92_cast_fu_932_p1 = tmp_65_fu_925_p3;

assign tmp_97_cast_fu_906_p1 = tmp_69_fu_900_p2;

assign tmp_9_fu_1037_p3 = {{tmp_10_reg_1205}, {tmp_7_fu_1031_p2}};

assign tmp_fu_980_p1 = a_q1[3:0];

always @ (posedge ap_clk) begin
    tmp_20_reg_1120[2:0] <= 3'b000;
end

endmodule //poly_Sq_frombytes_1