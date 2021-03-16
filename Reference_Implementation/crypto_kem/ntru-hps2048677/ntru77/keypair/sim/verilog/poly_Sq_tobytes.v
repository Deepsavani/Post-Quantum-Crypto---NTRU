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
output  [9:0] a_coeffs_address0;
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
reg[9:0] a_coeffs_address0;
reg a_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [16:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [9:0] next_mul_fu_520_p2;
reg   [9:0] next_mul_reg_1115;
wire    ap_CS_fsm_state2;
wire   [6:0] tmp_90_fu_532_p2;
reg   [6:0] tmp_90_reg_1123;
wire   [9:0] tmp_fu_538_p3;
reg   [9:0] tmp_reg_1128;
wire   [0:0] exitcond3_fu_526_p2;
wire   [3:0] j_3_fu_556_p2;
reg   [3:0] j_3_reg_1136;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond2_fu_550_p2;
reg   [7:0] tmp_44_reg_1146;
wire    ap_CS_fsm_state5;
wire   [5:0] grp_fu_490_p4;
reg   [5:0] tmp_86_reg_1151;
wire    ap_CS_fsm_state6;
reg   [7:0] tmp_53_reg_1156;
wire    ap_CS_fsm_state7;
reg   [6:0] tmp_119_reg_1161;
wire    ap_CS_fsm_state8;
reg   [7:0] tmp_132_reg_1166;
wire    ap_CS_fsm_state9;
wire   [2:0] tmp_89_fu_927_p2;
reg   [2:0] tmp_89_reg_1174;
wire    ap_CS_fsm_state11;
wire   [0:0] exitcond1_fu_921_p2;
wire   [3:0] j_4_fu_962_p2;
wire    ap_CS_fsm_state13;
wire   [0:0] exitcond_fu_951_p2;
wire   [4:0] tmp_152_fu_987_p1;
reg   [4:0] tmp_152_reg_1192;
wire    ap_CS_fsm_state14;
wire   [1:0] grp_fu_500_p4;
reg   [1:0] tmp_146_reg_1197;
wire   [1:0] tmp_155_fu_1012_p1;
reg   [1:0] tmp_155_reg_1202;
wire    ap_CS_fsm_state15;
wire   [4:0] tmp_157_fu_1040_p1;
reg   [4:0] tmp_157_reg_1207;
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
reg   [6:0] i_reg_421;
wire    ap_CS_fsm_state10;
reg   [9:0] phi_mul_reg_432;
reg   [3:0] j_reg_444;
wire    ap_CS_fsm_state4;
reg   [2:0] j_1_reg_456;
wire    ap_CS_fsm_state12;
reg   [3:0] j_2_reg_468;
wire   [63:0] tmp_137_fu_567_p1;
wire   [63:0] tmp_138_fu_572_p1;
wire   [63:0] tmp_92_fu_582_p1;
wire   [63:0] tmp_95_fu_622_p1;
wire   [63:0] tmp_98_fu_661_p1;
wire   [63:0] tmp_101_fu_672_p1;
wire   [63:0] tmp_107_fu_709_p1;
wire   [63:0] tmp_111_fu_739_p1;
wire   [63:0] tmp_115_fu_778_p1;
wire   [63:0] tmp_118_fu_800_p1;
wire   [63:0] tmp_126_fu_855_p1;
wire   [63:0] tmp_131_fu_895_p1;
wire   [63:0] tmp_134_fu_916_p1;
wire   [63:0] tmp_s_fu_941_p1;
wire   [63:0] tmp_88_fu_946_p1;
wire   [63:0] tmp_156_fu_957_p1;
wire    ap_CS_fsm_state17;
wire   [7:0] tmp_91_fu_577_p1;
wire   [7:0] tmp_93_fu_609_p2;
wire   [7:0] tmp_96_fu_649_p2;
wire   [7:0] tmp_105_fu_694_p3;
wire   [7:0] tmp_109_fu_726_p2;
wire   [7:0] tmp_113_fu_766_p2;
wire   [7:0] tmp_124_fu_840_p3;
wire   [7:0] tmp_129_fu_882_p2;
wire   [7:0] tmp_141_fu_980_p2;
wire   [7:0] tmp_147_fu_1004_p3;
wire   [7:0] tmp_151_fu_1033_p2;
wire   [7:0] tmp_154_fu_1061_p2;
wire   [7:0] tmp_158_fu_1068_p1;
wire   [9:0] j_cast6_fu_546_p1;
wire   [9:0] tmp_136_fu_562_p2;
wire   [4:0] tmp_108_fu_597_p1;
wire   [7:0] tmp_42_fu_601_p3;
wire   [7:0] tmp_41_fu_587_p4;
wire   [9:0] tmp_94_fu_616_p2;
wire   [1:0] tmp_112_fu_637_p1;
wire   [7:0] tmp_45_fu_641_p3;
wire   [9:0] tmp_97_fu_655_p2;
wire   [9:0] tmp_100_fu_666_p2;
wire   [4:0] tmp_120_fu_677_p1;
wire   [5:0] tmp_102_fu_681_p3;
wire   [5:0] tmp_103_fu_689_p2;
wire   [9:0] tmp_106_fu_703_p2;
wire   [3:0] tmp_123_fu_714_p1;
wire   [7:0] tmp_51_fu_718_p3;
wire   [7:0] grp_fu_510_p4;
wire   [9:0] tmp_110_fu_733_p2;
wire   [0:0] tmp_127_fu_754_p1;
wire   [7:0] tmp_54_fu_758_p3;
wire   [9:0] tmp_114_fu_772_p2;
wire   [9:0] tmp_117_fu_794_p2;
wire   [4:0] tmp_135_fu_815_p1;
wire   [6:0] tmp_121_fu_819_p3;
wire   [0:0] tmp_139_fu_832_p3;
wire   [6:0] tmp_122_fu_827_p2;
wire   [9:0] tmp_125_fu_849_p2;
wire   [2:0] tmp_142_fu_860_p1;
wire   [7:0] tmp_128_fu_864_p3;
wire   [7:0] tmp_58_fu_872_p4;
wire   [9:0] tmp_130_fu_889_p2;
wire   [9:0] tmp_133_fu_910_p2;
wire   [9:0] tmp_10_fu_933_p3;
wire   [3:0] tmp_149_fu_968_p1;
wire   [7:0] tmp_140_fu_972_p3;
wire   [5:0] tmp_144_fu_991_p3;
wire   [5:0] tmp_145_fu_998_p2;
wire   [7:0] tmp_38_fu_1023_p4;
wire   [7:0] tmp_150_fu_1016_p3;
wire   [7:0] tmp_39_fu_1051_p4;
wire   [7:0] tmp_153_fu_1044_p3;
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
        i_reg_421 <= tmp_90_reg_1123;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_421 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_526_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        j_1_reg_456 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        j_1_reg_456 <= tmp_89_reg_1174;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state11) & (exitcond1_fu_921_p2 == 1'd1))) begin
        j_2_reg_468 <= 4'd4;
    end else if (((exitcond_fu_951_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        j_2_reg_468 <= j_4_fu_962_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_526_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_444 <= 4'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_reg_444 <= j_3_reg_1136;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        phi_mul_reg_432 <= next_mul_reg_1115;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        phi_mul_reg_432 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_3_reg_1136 <= j_3_fu_556_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        next_mul_reg_1115 <= next_mul_fu_520_p2;
        tmp_90_reg_1123 <= tmp_90_fu_532_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tmp_119_reg_1161 <= {{t_q0[15:9]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        tmp_132_reg_1166 <= {{t_q0[10:3]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        tmp_146_reg_1197 <= {{t_q0[6:5]}};
        tmp_152_reg_1192 <= tmp_152_fu_987_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        tmp_155_reg_1202 <= tmp_155_fu_1012_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        tmp_157_reg_1207 <= tmp_157_fu_1040_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        tmp_44_reg_1146 <= {{t_q1[12:5]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_53_reg_1156 <= {{t_q1[11:4]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tmp_86_reg_1151 <= {{t_q1[15:10]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        tmp_89_reg_1174 <= tmp_89_fu_927_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_526_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_reg_1128[9 : 3] <= tmp_fu_538_p3[9 : 3];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        a_coeffs_address0 = tmp_s_fu_941_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_coeffs_address0 = tmp_137_fu_567_p1;
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
        r_address0 = 64'd924;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        r_address0 = 64'd926;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_address0 = 64'd928;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        r_address0 = tmp_134_fu_916_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_address0 = tmp_126_fu_855_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_address0 = tmp_115_fu_778_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_address0 = tmp_107_fu_709_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_address0 = tmp_98_fu_661_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_address0 = tmp_92_fu_582_p1;
    end else begin
        r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        r_address1 = 64'd925;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_address1 = 64'd927;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        r_address1 = 64'd929;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_address1 = tmp_131_fu_895_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_address1 = tmp_118_fu_800_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_address1 = tmp_111_fu_739_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_address1 = tmp_101_fu_672_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_address1 = tmp_95_fu_622_p1;
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
        r_d0 = tmp_158_fu_1068_p1;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        r_d0 = tmp_151_fu_1033_p2;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        r_d0 = tmp_147_fu_1004_p3;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        r_d0 = tmp_132_reg_1166;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_d0 = tmp_124_fu_840_p3;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_d0 = tmp_113_fu_766_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_d0 = tmp_105_fu_694_p3;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_d0 = tmp_96_fu_649_p2;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_d0 = tmp_91_fu_577_p1;
    end else begin
        r_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        r_d1 = tmp_154_fu_1061_p2;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        r_d1 = tmp_141_fu_980_p2;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_d1 = tmp_129_fu_882_p2;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_d1 = {{t_q0[8:1]}};
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_d1 = tmp_109_fu_726_p2;
    end else if (((1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state6))) begin
        r_d1 = {{t_q1[9:2]}};
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_d1 = tmp_93_fu_609_p2;
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
    end else if (((exitcond_fu_951_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        t_address0 = tmp_156_fu_957_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        t_address0 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        t_address0 = 64'd5;
    end else if (((1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_951_p2 == 1'd1)))) begin
        t_address0 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        t_address0 = tmp_138_fu_572_p1;
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
        t_address1 = tmp_88_fu_946_p1;
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
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | ((1'b1 == ap_CS_fsm_state13) & (exitcond_fu_951_p2 == 1'd1)) | ((exitcond_fu_951_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)))) begin
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
    if (((exitcond_fu_951_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        t_d0 = 16'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        t_d0 = a_coeffs_q0;
    end else begin
        t_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | ((exitcond_fu_951_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13)))) begin
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
            if (((exitcond3_fu_526_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond2_fu_550_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
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
            if (((1'b1 == ap_CS_fsm_state11) & (exitcond1_fu_921_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state13 : begin
            if (((exitcond_fu_951_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
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

assign exitcond1_fu_921_p2 = ((j_1_reg_456 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond2_fu_550_p2 = ((j_reg_444 == 4'd8) ? 1'b1 : 1'b0);

assign exitcond3_fu_526_p2 = ((i_reg_421 == 7'd84) ? 1'b1 : 1'b0);

assign exitcond_fu_951_p2 = ((j_2_reg_468 == 4'd8) ? 1'b1 : 1'b0);

assign grp_fu_490_p4 = {{t_q1[15:10]}};

assign grp_fu_500_p4 = {{t_q0[6:5]}};

assign grp_fu_510_p4 = {{t_q0[14:7]}};

assign j_3_fu_556_p2 = (j_reg_444 + 4'd1);

assign j_4_fu_962_p2 = (j_2_reg_468 + 4'd1);

assign j_cast6_fu_546_p1 = j_reg_444;

assign next_mul_fu_520_p2 = (phi_mul_reg_432 + 10'd11);

assign tmp_100_fu_666_p2 = (10'd3 + phi_mul_reg_432);

assign tmp_101_fu_672_p1 = tmp_100_fu_666_p2;

assign tmp_102_fu_681_p3 = {{tmp_120_fu_677_p1}, {1'd0}};

assign tmp_103_fu_689_p2 = (tmp_86_reg_1151 | tmp_102_fu_681_p3);

assign tmp_105_fu_694_p3 = {{grp_fu_500_p4}, {tmp_103_fu_689_p2}};

assign tmp_106_fu_703_p2 = (10'd4 + phi_mul_reg_432);

assign tmp_107_fu_709_p1 = tmp_106_fu_703_p2;

assign tmp_108_fu_597_p1 = t_q1[4:0];

assign tmp_109_fu_726_p2 = (tmp_51_fu_718_p3 | grp_fu_510_p4);

assign tmp_10_fu_933_p3 = {{7'd84}, {j_1_reg_456}};

assign tmp_110_fu_733_p2 = (10'd5 + phi_mul_reg_432);

assign tmp_111_fu_739_p1 = tmp_110_fu_733_p2;

assign tmp_112_fu_637_p1 = t_q1[1:0];

assign tmp_113_fu_766_p2 = (tmp_54_fu_758_p3 | tmp_53_reg_1156);

assign tmp_114_fu_772_p2 = (10'd6 + phi_mul_reg_432);

assign tmp_115_fu_778_p1 = tmp_114_fu_772_p2;

assign tmp_117_fu_794_p2 = (10'd7 + phi_mul_reg_432);

assign tmp_118_fu_800_p1 = tmp_117_fu_794_p2;

assign tmp_120_fu_677_p1 = t_q0[4:0];

assign tmp_121_fu_819_p3 = {{tmp_135_fu_815_p1}, {2'd0}};

assign tmp_122_fu_827_p2 = (tmp_121_fu_819_p3 | tmp_119_reg_1161);

assign tmp_123_fu_714_p1 = t_q1[3:0];

assign tmp_124_fu_840_p3 = {{tmp_139_fu_832_p3}, {tmp_122_fu_827_p2}};

assign tmp_125_fu_849_p2 = (10'd8 + phi_mul_reg_432);

assign tmp_126_fu_855_p1 = tmp_125_fu_849_p2;

assign tmp_127_fu_754_p1 = t_q0[0:0];

assign tmp_128_fu_864_p3 = {{tmp_142_fu_860_p1}, {5'd0}};

assign tmp_129_fu_882_p2 = (tmp_58_fu_872_p4 | tmp_128_fu_864_p3);

assign tmp_130_fu_889_p2 = (10'd9 + phi_mul_reg_432);

assign tmp_131_fu_895_p1 = tmp_130_fu_889_p2;

assign tmp_133_fu_910_p2 = (10'd10 + phi_mul_reg_432);

assign tmp_134_fu_916_p1 = tmp_133_fu_910_p2;

assign tmp_135_fu_815_p1 = t_q1[4:0];

assign tmp_136_fu_562_p2 = (tmp_reg_1128 + j_cast6_fu_546_p1);

assign tmp_137_fu_567_p1 = tmp_136_fu_562_p2;

assign tmp_138_fu_572_p1 = j_reg_444;

assign tmp_139_fu_832_p3 = t_q1[32'd5];

assign tmp_140_fu_972_p3 = {{tmp_149_fu_968_p1}, {4'd0}};

assign tmp_141_fu_980_p2 = (tmp_140_fu_972_p3 | grp_fu_510_p4);

assign tmp_142_fu_860_p1 = t_q0[2:0];

assign tmp_144_fu_991_p3 = {{tmp_152_reg_1192}, {1'd0}};

assign tmp_145_fu_998_p2 = (tmp_144_fu_991_p3 | grp_fu_490_p4);

assign tmp_147_fu_1004_p3 = {{tmp_146_reg_1197}, {tmp_145_fu_998_p2}};

assign tmp_149_fu_968_p1 = t_q1[3:0];

assign tmp_150_fu_1016_p3 = {{tmp_155_reg_1202}, {6'd0}};

assign tmp_151_fu_1033_p2 = (tmp_38_fu_1023_p4 | tmp_150_fu_1016_p3);

assign tmp_152_fu_987_p1 = t_q0[4:0];

assign tmp_153_fu_1044_p3 = {{tmp_157_reg_1207}, {3'd0}};

assign tmp_154_fu_1061_p2 = (tmp_39_fu_1051_p4 | tmp_153_fu_1044_p3);

assign tmp_155_fu_1012_p1 = t_q1[1:0];

assign tmp_156_fu_957_p1 = j_2_reg_468;

assign tmp_157_fu_1040_p1 = t_q0[4:0];

assign tmp_158_fu_1068_p1 = t_q1[7:0];

assign tmp_38_fu_1023_p4 = {{t_q0[12:5]}};

assign tmp_39_fu_1051_p4 = {{t_q1[15:8]}};

assign tmp_41_fu_587_p4 = {{t_q0[15:8]}};

assign tmp_42_fu_601_p3 = {{tmp_108_fu_597_p1}, {3'd0}};

assign tmp_45_fu_641_p3 = {{tmp_112_fu_637_p1}, {6'd0}};

assign tmp_51_fu_718_p3 = {{tmp_123_fu_714_p1}, {4'd0}};

assign tmp_54_fu_758_p3 = {{tmp_127_fu_754_p1}, {7'd0}};

assign tmp_58_fu_872_p4 = {{t_q1[13:6]}};

assign tmp_88_fu_946_p1 = j_1_reg_456;

assign tmp_89_fu_927_p2 = (j_1_reg_456 + 3'd1);

assign tmp_90_fu_532_p2 = (i_reg_421 + 7'd1);

assign tmp_91_fu_577_p1 = t_q0[7:0];

assign tmp_92_fu_582_p1 = phi_mul_reg_432;

assign tmp_93_fu_609_p2 = (tmp_42_fu_601_p3 | tmp_41_fu_587_p4);

assign tmp_94_fu_616_p2 = (10'd1 + phi_mul_reg_432);

assign tmp_95_fu_622_p1 = tmp_94_fu_616_p2;

assign tmp_96_fu_649_p2 = (tmp_45_fu_641_p3 | tmp_44_reg_1146);

assign tmp_97_fu_655_p2 = (10'd2 + phi_mul_reg_432);

assign tmp_98_fu_661_p1 = tmp_97_fu_655_p2;

assign tmp_fu_538_p3 = {{i_reg_421}, {3'd0}};

assign tmp_s_fu_941_p1 = tmp_10_fu_933_p3;

always @ (posedge ap_clk) begin
    tmp_reg_1128[2:0] <= 3'b000;
end

endmodule //poly_Sq_tobytes
