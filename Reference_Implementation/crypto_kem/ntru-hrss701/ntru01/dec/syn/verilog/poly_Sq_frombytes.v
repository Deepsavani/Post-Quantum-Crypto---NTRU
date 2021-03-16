// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_Sq_frombytes (
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

parameter    ap_ST_fsm_state1 = 13'd1;
parameter    ap_ST_fsm_state2 = 13'd2;
parameter    ap_ST_fsm_state3 = 13'd4;
parameter    ap_ST_fsm_state4 = 13'd8;
parameter    ap_ST_fsm_state5 = 13'd16;
parameter    ap_ST_fsm_state6 = 13'd32;
parameter    ap_ST_fsm_state7 = 13'd64;
parameter    ap_ST_fsm_state8 = 13'd128;
parameter    ap_ST_fsm_state9 = 13'd256;
parameter    ap_ST_fsm_state10 = 13'd512;
parameter    ap_ST_fsm_state11 = 13'd1024;
parameter    ap_ST_fsm_state12 = 13'd2048;
parameter    ap_ST_fsm_state13 = 13'd4096;

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

(* fsm_encoding = "none" *) reg   [12:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [7:0] reg_477;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state10;
wire   [6:0] tmp_s_fu_488_p2;
reg   [6:0] tmp_s_reg_1129;
wire    ap_CS_fsm_state2;
wire   [0:0] exitcond_fu_482_p2;
wire   [9:0] tmp_77_fu_527_p3;
reg   [9:0] tmp_77_reg_1154;
wire    ap_CS_fsm_state3;
wire   [2:0] grp_fu_459_p4;
reg   [2:0] tmp_80_reg_1165;
reg   [5:0] tmp_95_reg_1180;
wire    ap_CS_fsm_state4;
reg   [0:0] tmp_167_reg_1190;
wire    ap_CS_fsm_state5;
reg   [3:0] tmp_120_reg_1205;
wire    ap_CS_fsm_state6;
reg   [6:0] tmp_135_reg_1220;
wire    ap_CS_fsm_state7;
wire   [10:0] next_mul_fu_851_p2;
reg   [10:0] next_mul_reg_1235;
reg   [1:0] tmp_145_reg_1240;
reg   [0:0] tmp_reg_1255;
wire   [6:0] tmp_119_fu_1000_p1;
reg   [6:0] tmp_119_reg_1270;
wire    ap_CS_fsm_state11;
wire   [1:0] tmp_134_fu_1068_p1;
reg   [1:0] tmp_134_reg_1285;
wire    ap_CS_fsm_state12;
wire   [4:0] tmp_139_fu_1110_p1;
reg   [4:0] tmp_139_reg_1295;
reg   [6:0] i_reg_435;
wire    ap_CS_fsm_state9;
reg   [10:0] phi_mul_reg_447;
wire   [63:0] tmp_69_fu_494_p1;
wire   [63:0] tmp_72_fu_505_p1;
wire   [63:0] tmp_78_fu_535_p1;
wire   [63:0] tmp_82_fu_546_p1;
wire   [63:0] tmp_86_fu_557_p1;
wire   [63:0] tmp_93_fu_609_p1;
wire   [63:0] tmp_97_fu_630_p1;
wire   [63:0] tmp_103_fu_656_p1;
wire   [63:0] tmp_107_fu_667_p1;
wire   [63:0] tmp_111_fu_678_p1;
wire   [63:0] tmp_118_fu_730_p1;
wire   [63:0] tmp_122_fu_751_p1;
wire   [63:0] tmp_126_fu_762_p1;
wire   [63:0] tmp_133_fu_814_p1;
wire   [63:0] tmp_137_fu_835_p1;
wire   [63:0] tmp_147_fu_846_p1;
wire   [63:0] tmp_143_fu_878_p1;
wire   [63:0] tmp_151_fu_899_p1;
wire   [63:0] tmp_161_fu_910_p1;
wire   [63:0] tmp_158_fu_962_p1;
wire   [63:0] tmp_166_fu_995_p1;
wire    ap_CS_fsm_state13;
wire   [15:0] tmp_76_fu_522_p1;
wire   [15:0] tmp_91_cast_fu_599_p1;
wire   [15:0] tmp_101_cast_fu_646_p1;
wire   [15:0] tmp_116_cast_fu_720_p1;
wire   [15:0] tmp_131_cast_fu_804_p1;
wire   [15:0] tmp_141_cast_fu_868_p1;
wire   [15:0] tmp_156_cast_fu_952_p1;
wire   [15:0] tmp_164_cast_fu_985_p1;
wire   [15:0] tmp_47_cast_fu_1041_p1;
wire   [15:0] tmp_53_cast_fu_1063_p1;
wire   [15:0] tmp_62_cast_fu_1105_p1;
wire   [15:0] tmp_67_fu_1121_p1;
wire   [10:0] tmp_71_fu_499_p2;
wire   [4:0] tmp_140_fu_510_p1;
wire   [12:0] tmp_79_fu_514_p3;
wire   [10:0] tmp_81_fu_540_p2;
wire   [10:0] tmp_85_fu_551_p2;
wire   [7:0] tmp_138_fu_562_p1;
wire   [10:0] tmp_129_fu_577_p3;
wire   [10:0] tmp_84_fu_565_p3;
wire   [1:0] tmp_152_fu_573_p1;
wire   [10:0] tmp_130_fu_585_p2;
wire   [12:0] tmp_91_fu_591_p3;
wire   [9:0] tmp_92_fu_604_p2;
wire   [10:0] tmp_96_fu_624_p2;
wire   [6:0] tmp_163_fu_635_p1;
wire   [12:0] tmp_101_fu_639_p3;
wire   [9:0] tmp_102_fu_651_p2;
wire   [10:0] tmp_106_fu_661_p2;
wire   [10:0] tmp_110_fu_672_p2;
wire   [7:0] tmp_155_fu_683_p1;
wire   [8:0] tmp_144_fu_698_p3;
wire   [8:0] tmp_109_fu_686_p3;
wire   [3:0] tmp_168_fu_694_p1;
wire   [8:0] tmp_148_fu_706_p2;
wire   [12:0] tmp_116_fu_712_p3;
wire   [9:0] tmp_117_fu_725_p2;
wire   [10:0] tmp_121_fu_745_p2;
wire   [10:0] tmp_125_fu_756_p2;
wire   [7:0] tmp_162_fu_767_p1;
wire   [11:0] tmp_153_fu_782_p3;
wire   [11:0] tmp_124_fu_770_p3;
wire   [0:0] tmp_172_fu_778_p1;
wire   [11:0] tmp_154_fu_790_p2;
wire   [12:0] tmp_131_fu_796_p3;
wire   [9:0] tmp_132_fu_809_p2;
wire   [10:0] tmp_136_fu_829_p2;
wire   [10:0] tmp_146_fu_840_p2;
wire   [5:0] tmp_173_fu_857_p1;
wire   [12:0] tmp_141_fu_861_p3;
wire   [9:0] tmp_142_fu_873_p2;
wire   [10:0] tmp_150_fu_893_p2;
wire   [10:0] tmp_160_fu_904_p2;
wire   [7:0] tmp_171_fu_915_p1;
wire   [9:0] tmp_169_fu_930_p3;
wire   [9:0] tmp_149_fu_918_p3;
wire   [2:0] tmp_174_fu_926_p1;
wire   [9:0] tmp_170_fu_938_p2;
wire   [12:0] tmp_156_fu_944_p3;
wire   [9:0] tmp_157_fu_957_p2;
wire   [4:0] tmp_159_fu_967_p4;
wire   [12:0] tmp_164_fu_977_p3;
wire   [9:0] tmp_165_fu_990_p2;
wire   [7:0] tmp_114_fu_1004_p1;
wire   [8:0] tmp_112_fu_1019_p3;
wire   [8:0] tmp_42_fu_1007_p3;
wire   [3:0] tmp_115_fu_1015_p1;
wire   [8:0] tmp_113_fu_1027_p2;
wire   [12:0] tmp_47_fu_1033_p3;
wire   [5:0] tmp_49_fu_1046_p4;
wire   [12:0] tmp_53_fu_1056_p3;
wire   [7:0] tmp_128_fu_1072_p1;
wire   [10:0] tmp_123_fu_1084_p3;
wire   [10:0] tmp_57_fu_1076_p3;
wire   [10:0] tmp_127_fu_1092_p2;
wire   [12:0] tmp_62_fu_1098_p3;
wire   [12:0] tmp_74_fu_1114_p3;
reg   [12:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 13'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        i_reg_435 <= tmp_s_reg_1129;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_435 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        phi_mul_reg_447 <= next_mul_reg_1235;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_mul_reg_447 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        reg_477 <= a_q1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        reg_477 <= a_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        next_mul_reg_1235 <= next_mul_fu_851_p2;
        tmp_145_reg_1240 <= {{a_q1[7:6]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        tmp_119_reg_1270 <= tmp_119_fu_1000_p1;
        tmp_reg_1255 <= a_q0[32'd7];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tmp_120_reg_1205 <= {{a_q0[7:4]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        tmp_134_reg_1285 <= tmp_134_fu_1068_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tmp_135_reg_1220 <= {{a_q0[7:1]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        tmp_139_reg_1295 <= tmp_139_fu_1110_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        tmp_167_reg_1190 <= a_q0[32'd7];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_77_reg_1154[9 : 3] <= tmp_77_fu_527_p3[9 : 3];
        tmp_80_reg_1165 <= {{a_q1[7:5]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_95_reg_1180 <= {{a_q1[7:2]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        tmp_s_reg_1129 <= tmp_s_fu_488_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        a_address0 = 64'd1133;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        a_address0 = 64'd1134;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        a_address0 = tmp_161_fu_910_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        a_address0 = tmp_147_fu_846_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        a_address0 = tmp_126_fu_762_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        a_address0 = tmp_111_fu_678_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        a_address0 = tmp_97_fu_630_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_address0 = tmp_82_fu_546_p1;
    end else if (((exitcond_fu_482_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        a_address0 = 64'd1135;
    end else if (((exitcond_fu_482_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        a_address0 = tmp_69_fu_494_p1;
    end else begin
        a_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        a_address1 = 64'd1131;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        a_address1 = 64'd1132;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        a_address1 = 64'd1137;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        a_address1 = tmp_151_fu_899_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        a_address1 = tmp_137_fu_835_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        a_address1 = tmp_122_fu_751_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        a_address1 = tmp_107_fu_667_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_address1 = tmp_86_fu_557_p1;
    end else if (((exitcond_fu_482_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        a_address1 = 64'd1136;
    end else if (((exitcond_fu_482_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        a_address1 = tmp_72_fu_505_p1;
    end else begin
        a_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | ((exitcond_fu_482_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((exitcond_fu_482_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        a_ce0 = 1'b1;
    end else begin
        a_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | ((exitcond_fu_482_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((exitcond_fu_482_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        a_ce1 = 1'b1;
    end else begin
        a_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state13)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_address0 = 64'd698;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_address0 = tmp_158_fu_962_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_address0 = tmp_143_fu_878_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_address0 = tmp_133_fu_814_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_address0 = tmp_118_fu_730_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_address0 = tmp_103_fu_656_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        r_coeffs_address0 = tmp_93_fu_609_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        r_coeffs_address0 = tmp_78_fu_535_p1;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        r_coeffs_address1 = 64'd696;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        r_coeffs_address1 = 64'd697;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_address1 = 64'd699;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_address1 = tmp_166_fu_995_p1;
    end else begin
        r_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11))) begin
        r_coeffs_ce1 = 1'b1;
    end else begin
        r_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_d0 = tmp_53_cast_fu_1063_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_d0 = tmp_156_cast_fu_952_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_d0 = tmp_141_cast_fu_868_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_d0 = tmp_131_cast_fu_804_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_d0 = tmp_116_cast_fu_720_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d0 = tmp_101_cast_fu_646_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        r_coeffs_d0 = tmp_91_cast_fu_599_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        r_coeffs_d0 = tmp_76_fu_522_p1;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        r_coeffs_d1 = tmp_67_fu_1121_p1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        r_coeffs_d1 = tmp_62_cast_fu_1105_p1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_d1 = tmp_47_cast_fu_1041_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_d1 = tmp_164_cast_fu_985_p1;
    end else begin
        r_coeffs_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4))) begin
        r_coeffs_we0 = 1'b1;
    end else begin
        r_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11))) begin
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
            if (((exitcond_fu_482_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
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
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
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

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond_fu_482_p2 = ((i_reg_435 == 7'd87) ? 1'b1 : 1'b0);

assign grp_fu_459_p4 = {{a_q1[7:5]}};

assign next_mul_fu_851_p2 = (11'd13 + phi_mul_reg_447);

assign tmp_101_cast_fu_646_p1 = tmp_101_fu_639_p3;

assign tmp_101_fu_639_p3 = {{tmp_163_fu_635_p1}, {tmp_95_reg_1180}};

assign tmp_102_fu_651_p2 = (tmp_77_reg_1154 | 10'd2);

assign tmp_103_fu_656_p1 = tmp_102_fu_651_p2;

assign tmp_106_fu_661_p2 = (11'd5 + phi_mul_reg_447);

assign tmp_107_fu_667_p1 = tmp_106_fu_661_p2;

assign tmp_109_fu_686_p3 = {{a_q1}, {1'd0}};

assign tmp_110_fu_672_p2 = (11'd6 + phi_mul_reg_447);

assign tmp_111_fu_678_p1 = tmp_110_fu_672_p2;

assign tmp_112_fu_1019_p3 = {{1'd0}, {tmp_114_fu_1004_p1}};

assign tmp_113_fu_1027_p2 = (tmp_42_fu_1007_p3 | tmp_112_fu_1019_p3);

assign tmp_114_fu_1004_p1 = tmp_reg_1255;

assign tmp_115_fu_1015_p1 = a_q1[3:0];

assign tmp_116_cast_fu_720_p1 = tmp_116_fu_712_p3;

assign tmp_116_fu_712_p3 = {{tmp_168_fu_694_p1}, {tmp_148_fu_706_p2}};

assign tmp_117_fu_725_p2 = (tmp_77_reg_1154 | 10'd3);

assign tmp_118_fu_730_p1 = tmp_117_fu_725_p2;

assign tmp_119_fu_1000_p1 = a_q0[6:0];

assign tmp_121_fu_745_p2 = (11'd7 + phi_mul_reg_447);

assign tmp_122_fu_751_p1 = tmp_121_fu_745_p2;

assign tmp_123_fu_1084_p3 = {{3'd0}, {tmp_128_fu_1072_p1}};

assign tmp_124_fu_770_p3 = {{a_q1}, {4'd0}};

assign tmp_125_fu_756_p2 = (11'd8 + phi_mul_reg_447);

assign tmp_126_fu_762_p1 = tmp_125_fu_756_p2;

assign tmp_127_fu_1092_p2 = (tmp_57_fu_1076_p3 | tmp_123_fu_1084_p3);

assign tmp_128_fu_1072_p1 = grp_fu_459_p4;

assign tmp_129_fu_577_p3 = {{3'd0}, {tmp_138_fu_562_p1}};

assign tmp_130_fu_585_p2 = (tmp_84_fu_565_p3 | tmp_129_fu_577_p3);

assign tmp_131_cast_fu_804_p1 = tmp_131_fu_796_p3;

assign tmp_131_fu_796_p3 = {{tmp_172_fu_778_p1}, {tmp_154_fu_790_p2}};

assign tmp_132_fu_809_p2 = (tmp_77_reg_1154 | 10'd4);

assign tmp_133_fu_814_p1 = tmp_132_fu_809_p2;

assign tmp_134_fu_1068_p1 = a_q0[1:0];

assign tmp_136_fu_829_p2 = (11'd9 + phi_mul_reg_447);

assign tmp_137_fu_835_p1 = tmp_136_fu_829_p2;

assign tmp_138_fu_562_p1 = tmp_80_reg_1165;

assign tmp_139_fu_1110_p1 = a_q1[4:0];

assign tmp_140_fu_510_p1 = a_q1[4:0];

assign tmp_141_cast_fu_868_p1 = tmp_141_fu_861_p3;

assign tmp_141_fu_861_p3 = {{tmp_173_fu_857_p1}, {tmp_135_reg_1220}};

assign tmp_142_fu_873_p2 = (tmp_77_reg_1154 | 10'd5);

assign tmp_143_fu_878_p1 = tmp_142_fu_873_p2;

assign tmp_144_fu_698_p3 = {{1'd0}, {tmp_155_fu_683_p1}};

assign tmp_146_fu_840_p2 = (11'd10 + phi_mul_reg_447);

assign tmp_147_fu_846_p1 = tmp_146_fu_840_p2;

assign tmp_148_fu_706_p2 = (tmp_144_fu_698_p3 | tmp_109_fu_686_p3);

assign tmp_149_fu_918_p3 = {{reg_477}, {2'd0}};

assign tmp_150_fu_893_p2 = (11'd11 + phi_mul_reg_447);

assign tmp_151_fu_899_p1 = tmp_150_fu_893_p2;

assign tmp_152_fu_573_p1 = a_q1[1:0];

assign tmp_153_fu_782_p3 = {{4'd0}, {tmp_162_fu_767_p1}};

assign tmp_154_fu_790_p2 = (tmp_153_fu_782_p3 | tmp_124_fu_770_p3);

assign tmp_155_fu_683_p1 = tmp_167_reg_1190;

assign tmp_156_cast_fu_952_p1 = tmp_156_fu_944_p3;

assign tmp_156_fu_944_p3 = {{tmp_174_fu_926_p1}, {tmp_170_fu_938_p2}};

assign tmp_157_fu_957_p2 = (tmp_77_reg_1154 | 10'd6);

assign tmp_158_fu_962_p1 = tmp_157_fu_957_p2;

assign tmp_159_fu_967_p4 = {{a_q1[7:3]}};

assign tmp_160_fu_904_p2 = (11'd12 + phi_mul_reg_447);

assign tmp_161_fu_910_p1 = tmp_160_fu_904_p2;

assign tmp_162_fu_767_p1 = tmp_120_reg_1205;

assign tmp_163_fu_635_p1 = a_q0[6:0];

assign tmp_164_cast_fu_985_p1 = tmp_164_fu_977_p3;

assign tmp_164_fu_977_p3 = {{a_q0}, {tmp_159_fu_967_p4}};

assign tmp_165_fu_990_p2 = (tmp_77_reg_1154 | 10'd7);

assign tmp_166_fu_995_p1 = tmp_165_fu_990_p2;

assign tmp_168_fu_694_p1 = a_q0[3:0];

assign tmp_169_fu_930_p3 = {{2'd0}, {tmp_171_fu_915_p1}};

assign tmp_170_fu_938_p2 = (tmp_169_fu_930_p3 | tmp_149_fu_918_p3);

assign tmp_171_fu_915_p1 = tmp_145_reg_1240;

assign tmp_172_fu_778_p1 = a_q0[0:0];

assign tmp_173_fu_857_p1 = a_q1[5:0];

assign tmp_174_fu_926_p1 = a_q1[2:0];

assign tmp_42_fu_1007_p3 = {{reg_477}, {1'd0}};

assign tmp_47_cast_fu_1041_p1 = tmp_47_fu_1033_p3;

assign tmp_47_fu_1033_p3 = {{tmp_115_fu_1015_p1}, {tmp_113_fu_1027_p2}};

assign tmp_49_fu_1046_p4 = {{a_q0[7:2]}};

assign tmp_53_cast_fu_1063_p1 = tmp_53_fu_1056_p3;

assign tmp_53_fu_1056_p3 = {{tmp_119_reg_1270}, {tmp_49_fu_1046_p4}};

assign tmp_57_fu_1076_p3 = {{a_q0}, {3'd0}};

assign tmp_62_cast_fu_1105_p1 = tmp_62_fu_1098_p3;

assign tmp_62_fu_1098_p3 = {{tmp_134_reg_1285}, {tmp_127_fu_1092_p2}};

assign tmp_67_fu_1121_p1 = tmp_74_fu_1114_p3;

assign tmp_69_fu_494_p1 = phi_mul_reg_447;

assign tmp_71_fu_499_p2 = (11'd1 + phi_mul_reg_447);

assign tmp_72_fu_505_p1 = tmp_71_fu_499_p2;

assign tmp_74_fu_1114_p3 = {{tmp_139_reg_1295}, {a_q1}};

assign tmp_76_fu_522_p1 = tmp_79_fu_514_p3;

assign tmp_77_fu_527_p3 = {{i_reg_435}, {3'd0}};

assign tmp_78_fu_535_p1 = tmp_77_fu_527_p3;

assign tmp_79_fu_514_p3 = {{tmp_140_fu_510_p1}, {a_q0}};

assign tmp_81_fu_540_p2 = (11'd2 + phi_mul_reg_447);

assign tmp_82_fu_546_p1 = tmp_81_fu_540_p2;

assign tmp_84_fu_565_p3 = {{a_q0}, {3'd0}};

assign tmp_85_fu_551_p2 = (11'd3 + phi_mul_reg_447);

assign tmp_86_fu_557_p1 = tmp_85_fu_551_p2;

assign tmp_91_cast_fu_599_p1 = tmp_91_fu_591_p3;

assign tmp_91_fu_591_p3 = {{tmp_152_fu_573_p1}, {tmp_130_fu_585_p2}};

assign tmp_92_fu_604_p2 = (tmp_77_reg_1154 | 10'd1);

assign tmp_93_fu_609_p1 = tmp_92_fu_604_p2;

assign tmp_96_fu_624_p2 = (11'd4 + phi_mul_reg_447);

assign tmp_97_fu_630_p1 = tmp_96_fu_624_p2;

assign tmp_s_fu_488_p2 = (i_reg_435 + 7'd1);

always @ (posedge ap_clk) begin
    tmp_77_reg_1154[2:0] <= 3'b000;
end

endmodule //poly_Sq_frombytes