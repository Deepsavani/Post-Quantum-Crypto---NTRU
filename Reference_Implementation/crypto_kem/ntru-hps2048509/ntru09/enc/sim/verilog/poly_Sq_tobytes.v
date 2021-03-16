// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_Sq_tobytes (
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
wire   [9:0] next_mul_fu_524_p2;
reg   [9:0] next_mul_reg_1123;
wire    ap_CS_fsm_state2;
wire   [5:0] tmp_49_fu_536_p2;
reg   [5:0] tmp_49_reg_1131;
wire   [8:0] tmp_fu_542_p3;
reg   [8:0] tmp_reg_1136;
wire   [0:0] exitcond3_fu_530_p2;
wire   [3:0] j_3_fu_560_p2;
reg   [3:0] j_3_reg_1144;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond2_fu_554_p2;
reg   [7:0] tmp_13_reg_1154;
wire    ap_CS_fsm_state5;
wire   [5:0] grp_fu_494_p4;
reg   [5:0] tmp_30_reg_1159;
wire    ap_CS_fsm_state6;
reg   [7:0] tmp_22_reg_1164;
wire    ap_CS_fsm_state7;
reg   [6:0] tmp_37_reg_1169;
wire    ap_CS_fsm_state8;
reg   [7:0] tmp_83_reg_1174;
wire    ap_CS_fsm_state9;
wire   [2:0] tmp_51_fu_931_p2;
reg   [2:0] tmp_51_reg_1182;
wire    ap_CS_fsm_state11;
wire   [0:0] exitcond1_fu_925_p2;
wire   [3:0] j_4_fu_970_p2;
wire    ap_CS_fsm_state13;
wire   [0:0] exitcond_fu_959_p2;
wire   [4:0] tmp_106_fu_995_p1;
reg   [4:0] tmp_106_reg_1200;
wire    ap_CS_fsm_state14;
wire   [1:0] grp_fu_504_p4;
reg   [1:0] tmp_48_reg_1205;
wire   [1:0] tmp_107_fu_1020_p1;
reg   [1:0] tmp_107_reg_1210;
wire    ap_CS_fsm_state15;
wire   [4:0] tmp_108_fu_1048_p1;
reg   [4:0] tmp_108_reg_1215;
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
reg   [5:0] i_reg_425;
wire    ap_CS_fsm_state10;
reg   [9:0] phi_mul_reg_436;
reg   [3:0] j_reg_448;
wire    ap_CS_fsm_state4;
reg   [2:0] j_1_reg_460;
wire    ap_CS_fsm_state12;
reg   [3:0] j_2_reg_472;
wire   [63:0] tmp_88_fu_571_p1;
wire   [63:0] tmp_89_fu_576_p1;
wire   [63:0] tmp_53_fu_586_p1;
wire   [63:0] tmp_57_fu_626_p1;
wire   [63:0] tmp_60_fu_665_p1;
wire   [63:0] tmp_63_fu_676_p1;
wire   [63:0] tmp_66_fu_713_p1;
wire   [63:0] tmp_69_fu_743_p1;
wire   [63:0] tmp_72_fu_782_p1;
wire   [63:0] tmp_75_fu_804_p1;
wire   [63:0] tmp_78_fu_859_p1;
wire   [63:0] tmp_82_fu_899_p1;
wire   [63:0] tmp_85_fu_920_p1;
wire   [63:0] tmp_s_fu_949_p1;
wire   [63:0] tmp_50_fu_954_p1;
wire   [63:0] tmp_100_fu_965_p1;
wire    ap_CS_fsm_state17;
wire   [7:0] tmp_52_fu_581_p1;
wire   [7:0] tmp_55_fu_613_p2;
wire   [7:0] tmp_58_fu_653_p2;
wire   [7:0] tmp_64_fu_698_p3;
wire   [7:0] tmp_67_fu_730_p2;
wire   [7:0] tmp_70_fu_770_p2;
wire   [7:0] tmp_76_fu_844_p3;
wire   [7:0] tmp_80_fu_886_p2;
wire   [7:0] tmp_91_fu_988_p2;
wire   [7:0] tmp_92_fu_1012_p3;
wire   [7:0] tmp_95_fu_1041_p2;
wire   [7:0] tmp_98_fu_1069_p2;
wire   [7:0] tmp_109_fu_1076_p1;
wire   [8:0] j_cast6_fu_550_p1;
wire   [8:0] tmp_87_fu_566_p2;
wire   [4:0] tmp_54_fu_601_p1;
wire   [7:0] tmp_11_fu_605_p3;
wire   [7:0] tmp_10_fu_591_p4;
wire   [9:0] tmp_56_fu_620_p2;
wire   [1:0] tmp_86_fu_641_p1;
wire   [7:0] tmp_14_fu_645_p3;
wire   [9:0] tmp_59_fu_659_p2;
wire   [9:0] tmp_62_fu_670_p2;
wire   [4:0] tmp_96_fu_681_p1;
wire   [5:0] tmp_32_fu_685_p3;
wire   [5:0] tmp_33_fu_693_p2;
wire   [9:0] tmp_65_fu_707_p2;
wire   [3:0] tmp_99_fu_718_p1;
wire   [7:0] tmp_20_fu_722_p3;
wire   [7:0] grp_fu_514_p4;
wire   [9:0] tmp_68_fu_737_p2;
wire   [0:0] tmp_101_fu_758_p1;
wire   [7:0] tmp_23_fu_762_p3;
wire   [9:0] tmp_71_fu_776_p2;
wire   [9:0] tmp_74_fu_798_p2;
wire   [4:0] tmp_102_fu_819_p1;
wire   [6:0] tmp_39_fu_823_p3;
wire   [0:0] tmp_103_fu_836_p3;
wire   [6:0] tmp_40_fu_831_p2;
wire   [9:0] tmp_77_fu_853_p2;
wire   [2:0] tmp_104_fu_864_p1;
wire   [7:0] tmp_79_fu_868_p3;
wire   [7:0] tmp_27_fu_876_p4;
wire   [9:0] tmp_81_fu_893_p2;
wire   [9:0] tmp_84_fu_914_p2;
wire   [3:0] tmp_28_fu_937_p3;
wire  signed [8:0] tmp_cast9_fu_945_p1;
wire   [3:0] tmp_105_fu_976_p1;
wire   [7:0] tmp_90_fu_980_p3;
wire   [5:0] tmp_46_fu_999_p3;
wire   [5:0] tmp_47_fu_1006_p2;
wire   [7:0] tmp_7_fu_1031_p4;
wire   [7:0] tmp_94_fu_1024_p3;
wire   [7:0] tmp_8_fu_1059_p4;
wire   [7:0] tmp_97_fu_1052_p3;
reg   [16:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 17'd1;
end

poly_Sq_tobytes_t #(
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
        i_reg_425 <= tmp_49_reg_1131;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_425 <= 6'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_530_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        j_1_reg_460 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        j_1_reg_460 <= tmp_51_reg_1182;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state11) & (exitcond1_fu_925_p2 == 1'd1))) begin
        j_2_reg_472 <= 4'd4;
    end else if (((exitcond_fu_959_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        j_2_reg_472 <= j_4_fu_970_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_530_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_448 <= 4'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_reg_448 <= j_3_reg_1144;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        phi_mul_reg_436 <= next_mul_reg_1123;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        phi_mul_reg_436 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_3_reg_1144 <= j_3_fu_560_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        next_mul_reg_1123 <= next_mul_fu_524_p2;
        tmp_49_reg_1131 <= tmp_49_fu_536_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        tmp_106_reg_1200 <= tmp_106_fu_995_p1;
        tmp_48_reg_1205 <= {{t_q0[6:5]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        tmp_107_reg_1210 <= tmp_107_fu_1020_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        tmp_108_reg_1215 <= tmp_108_fu_1048_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        tmp_13_reg_1154 <= {{t_q1[12:5]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_22_reg_1164 <= {{t_q1[11:4]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tmp_30_reg_1159 <= {{t_q1[15:10]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tmp_37_reg_1169 <= {{t_q0[15:9]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        tmp_51_reg_1182 <= tmp_51_fu_931_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        tmp_83_reg_1174 <= {{t_q0[10:3]}};
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_530_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_reg_1136[8 : 3] <= tmp_fu_542_p3[8 : 3];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        a_coeffs_address0 = tmp_s_fu_949_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_coeffs_address0 = tmp_88_fu_571_p1;
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
        r_address0 = 64'd693;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        r_address0 = 64'd695;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_address0 = 64'd697;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        r_address0 = tmp_85_fu_920_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_address0 = tmp_78_fu_859_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_address0 = tmp_72_fu_782_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_address0 = tmp_66_fu_713_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_address0 = tmp_60_fu_665_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_address0 = tmp_53_fu_586_p1;
    end else begin
        r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        r_address1 = 64'd694;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_address1 = 64'd696;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        r_address1 = 64'd698;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_address1 = tmp_82_fu_899_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_address1 = tmp_75_fu_804_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_address1 = tmp_69_fu_743_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_address1 = tmp_63_fu_676_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_address1 = tmp_57_fu_626_p1;
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
        r_d0 = tmp_109_fu_1076_p1;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        r_d0 = tmp_95_fu_1041_p2;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_d0 = tmp_92_fu_1012_p3;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        r_d0 = tmp_83_reg_1174;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_d0 = tmp_76_fu_844_p3;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_d0 = tmp_70_fu_770_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_d0 = tmp_64_fu_698_p3;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_d0 = tmp_58_fu_653_p2;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_d0 = tmp_52_fu_581_p1;
    end else begin
        r_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        r_d1 = tmp_98_fu_1069_p2;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        r_d1 = tmp_91_fu_988_p2;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_d1 = tmp_80_fu_886_p2;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_d1 = {{t_q0[8:1]}};
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_d1 = tmp_67_fu_730_p2;
    end else if (((1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state6))) begin
        r_d1 = {{t_q1[9:2]}};
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_d1 = tmp_55_fu_613_p2;
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
    end else if (((exitcond_fu_959_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        t_address0 = tmp_100_fu_965_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        t_address0 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        t_address0 = 64'd5;
    end else if (((1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_959_p2 == 1'd1)))) begin
        t_address0 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        t_address0 = tmp_89_fu_576_p1;
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
        t_address1 = tmp_50_fu_954_p1;
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
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_959_p2 == 1'd1)) | ((exitcond_fu_959_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)))) begin
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
    if (((exitcond_fu_959_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        t_d0 = 16'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        t_d0 = a_coeffs_q0;
    end else begin
        t_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | ((exitcond_fu_959_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)))) begin
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
            if (((exitcond3_fu_530_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond2_fu_554_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
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
            if (((1'b1 == ap_CS_fsm_state11) & (exitcond1_fu_925_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state13 : begin
            if (((exitcond_fu_959_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
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

assign exitcond1_fu_925_p2 = ((j_1_reg_460 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond2_fu_554_p2 = ((j_reg_448 == 4'd8) ? 1'b1 : 1'b0);

assign exitcond3_fu_530_p2 = ((i_reg_425 == 6'd63) ? 1'b1 : 1'b0);

assign exitcond_fu_959_p2 = ((j_2_reg_472 == 4'd8) ? 1'b1 : 1'b0);

assign grp_fu_494_p4 = {{t_q1[15:10]}};

assign grp_fu_504_p4 = {{t_q0[6:5]}};

assign grp_fu_514_p4 = {{t_q0[14:7]}};

assign j_3_fu_560_p2 = (j_reg_448 + 4'd1);

assign j_4_fu_970_p2 = (j_2_reg_472 + 4'd1);

assign j_cast6_fu_550_p1 = j_reg_448;

assign next_mul_fu_524_p2 = (phi_mul_reg_436 + 10'd11);

assign tmp_100_fu_965_p1 = j_2_reg_472;

assign tmp_101_fu_758_p1 = t_q0[0:0];

assign tmp_102_fu_819_p1 = t_q1[4:0];

assign tmp_103_fu_836_p3 = t_q1[32'd5];

assign tmp_104_fu_864_p1 = t_q0[2:0];

assign tmp_105_fu_976_p1 = t_q1[3:0];

assign tmp_106_fu_995_p1 = t_q0[4:0];

assign tmp_107_fu_1020_p1 = t_q1[1:0];

assign tmp_108_fu_1048_p1 = t_q0[4:0];

assign tmp_109_fu_1076_p1 = t_q1[7:0];

assign tmp_10_fu_591_p4 = {{t_q0[15:8]}};

assign tmp_11_fu_605_p3 = {{tmp_54_fu_601_p1}, {3'd0}};

assign tmp_14_fu_645_p3 = {{tmp_86_fu_641_p1}, {6'd0}};

assign tmp_20_fu_722_p3 = {{tmp_99_fu_718_p1}, {4'd0}};

assign tmp_23_fu_762_p3 = {{tmp_101_fu_758_p1}, {7'd0}};

assign tmp_27_fu_876_p4 = {{t_q1[13:6]}};

assign tmp_28_fu_937_p3 = {{1'd1}, {j_1_reg_460}};

assign tmp_32_fu_685_p3 = {{tmp_96_fu_681_p1}, {1'd0}};

assign tmp_33_fu_693_p2 = (tmp_32_fu_685_p3 | tmp_30_reg_1159);

assign tmp_39_fu_823_p3 = {{tmp_102_fu_819_p1}, {2'd0}};

assign tmp_40_fu_831_p2 = (tmp_39_fu_823_p3 | tmp_37_reg_1169);

assign tmp_46_fu_999_p3 = {{tmp_106_reg_1200}, {1'd0}};

assign tmp_47_fu_1006_p2 = (tmp_46_fu_999_p3 | grp_fu_494_p4);

assign tmp_49_fu_536_p2 = (i_reg_425 + 6'd1);

assign tmp_50_fu_954_p1 = j_1_reg_460;

assign tmp_51_fu_931_p2 = (j_1_reg_460 + 3'd1);

assign tmp_52_fu_581_p1 = t_q0[7:0];

assign tmp_53_fu_586_p1 = phi_mul_reg_436;

assign tmp_54_fu_601_p1 = t_q1[4:0];

assign tmp_55_fu_613_p2 = (tmp_11_fu_605_p3 | tmp_10_fu_591_p4);

assign tmp_56_fu_620_p2 = (10'd1 + phi_mul_reg_436);

assign tmp_57_fu_626_p1 = tmp_56_fu_620_p2;

assign tmp_58_fu_653_p2 = (tmp_14_fu_645_p3 | tmp_13_reg_1154);

assign tmp_59_fu_659_p2 = (10'd2 + phi_mul_reg_436);

assign tmp_60_fu_665_p1 = tmp_59_fu_659_p2;

assign tmp_62_fu_670_p2 = (10'd3 + phi_mul_reg_436);

assign tmp_63_fu_676_p1 = tmp_62_fu_670_p2;

assign tmp_64_fu_698_p3 = {{grp_fu_504_p4}, {tmp_33_fu_693_p2}};

assign tmp_65_fu_707_p2 = (10'd4 + phi_mul_reg_436);

assign tmp_66_fu_713_p1 = tmp_65_fu_707_p2;

assign tmp_67_fu_730_p2 = (tmp_20_fu_722_p3 | grp_fu_514_p4);

assign tmp_68_fu_737_p2 = (10'd5 + phi_mul_reg_436);

assign tmp_69_fu_743_p1 = tmp_68_fu_737_p2;

assign tmp_70_fu_770_p2 = (tmp_23_fu_762_p3 | tmp_22_reg_1164);

assign tmp_71_fu_776_p2 = (10'd6 + phi_mul_reg_436);

assign tmp_72_fu_782_p1 = tmp_71_fu_776_p2;

assign tmp_74_fu_798_p2 = (10'd7 + phi_mul_reg_436);

assign tmp_75_fu_804_p1 = tmp_74_fu_798_p2;

assign tmp_76_fu_844_p3 = {{tmp_103_fu_836_p3}, {tmp_40_fu_831_p2}};

assign tmp_77_fu_853_p2 = (10'd8 + phi_mul_reg_436);

assign tmp_78_fu_859_p1 = tmp_77_fu_853_p2;

assign tmp_79_fu_868_p3 = {{tmp_104_fu_864_p1}, {5'd0}};

assign tmp_7_fu_1031_p4 = {{t_q0[12:5]}};

assign tmp_80_fu_886_p2 = (tmp_79_fu_868_p3 | tmp_27_fu_876_p4);

assign tmp_81_fu_893_p2 = (10'd9 + phi_mul_reg_436);

assign tmp_82_fu_899_p1 = tmp_81_fu_893_p2;

assign tmp_84_fu_914_p2 = (10'd10 + phi_mul_reg_436);

assign tmp_85_fu_920_p1 = tmp_84_fu_914_p2;

assign tmp_86_fu_641_p1 = t_q1[1:0];

assign tmp_87_fu_566_p2 = (tmp_reg_1136 + j_cast6_fu_550_p1);

assign tmp_88_fu_571_p1 = tmp_87_fu_566_p2;

assign tmp_89_fu_576_p1 = j_reg_448;

assign tmp_8_fu_1059_p4 = {{t_q1[15:8]}};

assign tmp_90_fu_980_p3 = {{tmp_105_fu_976_p1}, {4'd0}};

assign tmp_91_fu_988_p2 = (tmp_90_fu_980_p3 | grp_fu_514_p4);

assign tmp_92_fu_1012_p3 = {{tmp_48_reg_1205}, {tmp_47_fu_1006_p2}};

assign tmp_94_fu_1024_p3 = {{tmp_107_reg_1210}, {6'd0}};

assign tmp_95_fu_1041_p2 = (tmp_94_fu_1024_p3 | tmp_7_fu_1031_p4);

assign tmp_96_fu_681_p1 = t_q0[4:0];

assign tmp_97_fu_1052_p3 = {{tmp_108_reg_1215}, {3'd0}};

assign tmp_98_fu_1069_p2 = (tmp_97_fu_1052_p3 | tmp_8_fu_1059_p4);

assign tmp_99_fu_718_p1 = t_q1[3:0];

assign tmp_cast9_fu_945_p1 = $signed(tmp_28_fu_937_p3);

assign tmp_fu_542_p3 = {{i_reg_425}, {3'd0}};

assign tmp_s_fu_949_p1 = $unsigned(tmp_cast9_fu_945_p1);

always @ (posedge ap_clk) begin
    tmp_reg_1136[2:0] <= 3'b000;
end

endmodule //poly_Sq_tobytes
