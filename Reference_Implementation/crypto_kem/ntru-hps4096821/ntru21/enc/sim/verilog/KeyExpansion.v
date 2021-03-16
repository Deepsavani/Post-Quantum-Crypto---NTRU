// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module KeyExpansion (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        RoundKey_address0,
        RoundKey_ce0,
        RoundKey_we0,
        RoundKey_d0,
        RoundKey_q0,
        RoundKey_address1,
        RoundKey_ce1,
        RoundKey_we1,
        RoundKey_d1,
        RoundKey_q1,
        Key_address0,
        Key_ce0,
        Key_q0,
        Key_address1,
        Key_ce1,
        Key_q1
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_state9 = 10'd256;
parameter    ap_ST_fsm_state10 = 10'd512;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [7:0] RoundKey_address0;
output   RoundKey_ce0;
output   RoundKey_we0;
output  [7:0] RoundKey_d0;
input  [7:0] RoundKey_q0;
output  [7:0] RoundKey_address1;
output   RoundKey_ce1;
output   RoundKey_we1;
output  [7:0] RoundKey_d1;
input  [7:0] RoundKey_q1;
output  [4:0] Key_address0;
output   Key_ce0;
input  [7:0] Key_q0;
output  [4:0] Key_address1;
output   Key_ce1;
input  [7:0] Key_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[7:0] RoundKey_address0;
reg RoundKey_ce0;
reg RoundKey_we0;
reg[7:0] RoundKey_d0;
reg[7:0] RoundKey_address1;
reg RoundKey_ce1;
reg RoundKey_we1;
reg[7:0] RoundKey_d1;
reg[4:0] Key_address0;
reg Key_ce0;
reg[4:0] Key_address1;
reg Key_ce1;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [7:0] sbox_address0;
reg    sbox_ce0;
wire   [7:0] sbox_q0;
reg   [7:0] sbox_address1;
reg    sbox_ce1;
wire   [7:0] sbox_q1;
reg   [7:0] sbox_address2;
reg    sbox_ce2;
wire   [7:0] sbox_q2;
wire   [7:0] sbox_address3;
reg    sbox_ce3;
wire   [7:0] sbox_q3;
wire   [3:0] Rcon_address0;
reg    Rcon_ce0;
wire   [7:0] Rcon_q0;
reg   [7:0] reg_368;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state8;
wire   [3:0] i_28_fu_379_p2;
reg   [3:0] i_28_reg_723;
wire    ap_CS_fsm_state2;
wire   [4:0] tmp_s_fu_389_p3;
reg   [4:0] tmp_s_reg_728;
wire   [0:0] tmp_fu_373_p2;
wire   [63:0] tmp_111_fu_397_p1;
reg   [63:0] tmp_111_reg_734;
wire   [63:0] tmp_113_fu_408_p1;
reg   [63:0] tmp_113_reg_744;
wire   [63:0] tmp_115_fu_418_p1;
reg   [63:0] tmp_115_reg_754;
wire    ap_CS_fsm_state3;
wire   [63:0] tmp_117_fu_428_p1;
reg   [63:0] tmp_117_reg_764;
wire   [7:0] j_fu_439_p3;
reg   [7:0] j_reg_777;
wire    ap_CS_fsm_state5;
wire   [0:0] exitcond_fu_433_p2;
wire   [0:0] tmp_126_fu_473_p2;
reg   [0:0] tmp_126_reg_801;
reg   [2:0] tmp_131_reg_809;
wire   [0:0] tmp_133_fu_489_p2;
reg   [0:0] tmp_133_reg_814;
wire   [5:0] i_29_fu_495_p2;
reg   [5:0] i_29_reg_822;
reg   [7:0] tempa_1_reg_827;
reg   [7:0] tempa_3_reg_852;
wire   [7:0] tempa_0_2_fu_551_p3;
reg   [7:0] tempa_0_2_reg_872;
wire   [7:0] tempa_3_2_fu_583_p3;
reg   [7:0] tempa_3_2_reg_892;
wire   [7:0] tempa_2_2_fu_589_p3;
reg   [7:0] tempa_2_2_reg_897;
wire   [7:0] tempa_1_2_fu_596_p3;
reg   [7:0] tempa_1_2_reg_902;
wire   [7:0] tmp_140_fu_623_p2;
reg   [7:0] tmp_140_reg_922;
wire   [7:0] tmp_149_fu_688_p2;
reg   [7:0] tmp_149_reg_937;
wire    ap_CS_fsm_state9;
wire   [7:0] tmp_154_fu_694_p2;
reg   [7:0] tmp_154_reg_942;
reg   [3:0] i_reg_346;
wire    ap_CS_fsm_state4;
reg   [5:0] i_1_reg_357;
wire    ap_CS_fsm_state10;
wire   [63:0] tmp_119_fu_453_p1;
wire   [63:0] tmp_121_fu_464_p1;
wire   [63:0] tmp_123_fu_506_p1;
wire   [63:0] tmp_125_fu_516_p1;
wire   [63:0] tmp_127_fu_521_p1;
wire   [63:0] tmp_132_fu_526_p1;
wire   [63:0] tmp_128_fu_530_p1;
wire   [63:0] tmp_129_fu_535_p1;
wire   [63:0] tmp_130_fu_540_p1;
wire   [63:0] tmp_134_fu_558_p1;
wire   [63:0] tmp_139_fu_568_p1;
wire   [63:0] tmp_143_fu_578_p1;
wire   [63:0] tmp_135_fu_602_p1;
wire   [63:0] tmp_136_fu_607_p1;
wire   [63:0] tmp_137_fu_612_p1;
wire   [63:0] tmp_148_fu_634_p1;
wire   [63:0] tmp_153_fu_644_p1;
wire   [63:0] tmp_141_fu_667_p1;
wire   [63:0] tmp_146_fu_683_p1;
wire   [63:0] tmp_151_fu_705_p1;
wire   [63:0] tmp_156_fu_715_p1;
wire   [7:0] tmp_144_fu_671_p2;
wire   [2:0] tmp_158_fu_385_p1;
wire   [4:0] tmp_112_fu_402_p2;
wire   [4:0] tmp_114_fu_413_p2;
wire   [4:0] tmp_116_fu_423_p2;
wire   [7:0] tmp_118_fu_447_p2;
wire   [7:0] tmp_120_fu_458_p2;
wire   [2:0] tmp_159_fu_469_p1;
wire   [7:0] tmp_122_fu_501_p2;
wire   [7:0] tmp_124_fu_511_p2;
wire   [7:0] tempa_0_fu_545_p2;
wire   [7:0] tmp_138_fu_563_p2;
wire   [7:0] tmp_142_fu_573_p2;
wire   [7:0] tempa_0_4_fu_617_p3;
wire   [7:0] tmp_147_fu_629_p2;
wire   [7:0] tmp_152_fu_639_p2;
wire   [7:0] tempa_1_4_fu_661_p3;
wire   [7:0] tmp_145_fu_678_p2;
wire   [7:0] tempa_2_4_fu_655_p3;
wire   [7:0] tempa_3_4_fu_649_p3;
wire   [7:0] tmp_150_fu_700_p2;
wire   [7:0] tmp_155_fu_710_p2;
reg   [9:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
end

KeyExpansion_sbox #(
    .DataWidth( 8 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
sbox_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(sbox_address0),
    .ce0(sbox_ce0),
    .q0(sbox_q0),
    .address1(sbox_address1),
    .ce1(sbox_ce1),
    .q1(sbox_q1),
    .address2(sbox_address2),
    .ce2(sbox_ce2),
    .q2(sbox_q2),
    .address3(sbox_address3),
    .ce3(sbox_ce3),
    .q3(sbox_q3)
);

KeyExpansion_Rcon #(
    .DataWidth( 8 ),
    .AddressRange( 11 ),
    .AddressWidth( 4 ))
Rcon_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(Rcon_address0),
    .ce0(Rcon_ce0),
    .q0(Rcon_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_373_p2 == 1'd1))) begin
        i_1_reg_357 <= 6'd8;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        i_1_reg_357 <= i_29_reg_822;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_reg_346 <= i_28_reg_723;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_346 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        reg_368 <= RoundKey_q1;
    end else if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6))) begin
        reg_368 <= RoundKey_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_28_reg_723 <= i_28_fu_379_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond_fu_433_p2 == 1'd0))) begin
        i_29_reg_822 <= i_29_fu_495_p2;
        j_reg_777[7 : 2] <= j_fu_439_p3[7 : 2];
        tmp_126_reg_801 <= tmp_126_fu_473_p2;
        tmp_131_reg_809 <= {{i_1_reg_357[5:3]}};
        tmp_133_reg_814 <= tmp_133_fu_489_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        tempa_0_2_reg_872 <= tempa_0_2_fu_551_p3;
        tempa_3_reg_852 <= RoundKey_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tempa_1_2_reg_902 <= tempa_1_2_fu_596_p3;
        tempa_2_2_reg_897 <= tempa_2_2_fu_589_p3;
        tempa_3_2_reg_892 <= tempa_3_2_fu_583_p3;
        tmp_140_reg_922 <= tmp_140_fu_623_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tempa_1_reg_827 <= RoundKey_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_373_p2 == 1'd0))) begin
        tmp_111_reg_734[4 : 2] <= tmp_111_fu_397_p1[4 : 2];
        tmp_113_reg_744[4 : 2] <= tmp_113_fu_408_p1[4 : 2];
        tmp_s_reg_728[4 : 2] <= tmp_s_fu_389_p3[4 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_115_reg_754[4 : 2] <= tmp_115_fu_418_p1[4 : 2];
        tmp_117_reg_764[4 : 2] <= tmp_117_fu_428_p1[4 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        tmp_149_reg_937 <= tmp_149_fu_688_p2;
        tmp_154_reg_942 <= tmp_154_fu_694_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        Key_address0 = tmp_115_fu_418_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        Key_address0 = tmp_111_fu_397_p1;
    end else begin
        Key_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        Key_address1 = tmp_117_fu_428_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        Key_address1 = tmp_113_fu_408_p1;
    end else begin
        Key_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        Key_ce0 = 1'b1;
    end else begin
        Key_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        Key_ce1 = 1'b1;
    end else begin
        Key_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        Rcon_ce0 = 1'b1;
    end else begin
        Rcon_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        RoundKey_address0 = tmp_151_fu_705_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        RoundKey_address0 = tmp_141_fu_667_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        RoundKey_address0 = tmp_148_fu_634_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        RoundKey_address0 = tmp_139_fu_568_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        RoundKey_address0 = tmp_123_fu_506_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        RoundKey_address0 = tmp_119_fu_453_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        RoundKey_address0 = tmp_115_reg_754;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        RoundKey_address0 = tmp_111_reg_734;
    end else begin
        RoundKey_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        RoundKey_address1 = tmp_156_fu_715_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        RoundKey_address1 = tmp_146_fu_683_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        RoundKey_address1 = tmp_153_fu_644_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        RoundKey_address1 = tmp_143_fu_578_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        RoundKey_address1 = tmp_125_fu_516_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        RoundKey_address1 = tmp_121_fu_464_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        RoundKey_address1 = tmp_117_reg_764;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        RoundKey_address1 = tmp_113_reg_744;
    end else begin
        RoundKey_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3))) begin
        RoundKey_ce0 = 1'b1;
    end else begin
        RoundKey_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3))) begin
        RoundKey_ce1 = 1'b1;
    end else begin
        RoundKey_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        RoundKey_d0 = tmp_149_reg_937;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        RoundKey_d0 = tmp_140_reg_922;
    end else if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        RoundKey_d0 = Key_q0;
    end else begin
        RoundKey_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        RoundKey_d1 = tmp_154_reg_942;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        RoundKey_d1 = tmp_144_fu_671_p2;
    end else if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        RoundKey_d1 = Key_q1;
    end else begin
        RoundKey_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state3))) begin
        RoundKey_we0 = 1'b1;
    end else begin
        RoundKey_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state3))) begin
        RoundKey_we1 = 1'b1;
    end else begin
        RoundKey_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state5) & (exitcond_fu_433_p2 == 1'd1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond_fu_433_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        sbox_address0 = tmp_135_fu_602_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        sbox_address0 = tmp_128_fu_530_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        sbox_address0 = tmp_127_fu_521_p1;
    end else begin
        sbox_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        sbox_address1 = tmp_136_fu_607_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        sbox_address1 = tmp_129_fu_535_p1;
    end else begin
        sbox_address1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        sbox_address2 = tmp_137_fu_612_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        sbox_address2 = tmp_130_fu_540_p1;
    end else begin
        sbox_address2 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6))) begin
        sbox_ce0 = 1'b1;
    end else begin
        sbox_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        sbox_ce1 = 1'b1;
    end else begin
        sbox_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        sbox_ce2 = 1'b1;
    end else begin
        sbox_ce2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        sbox_ce3 = 1'b1;
    end else begin
        sbox_ce3 = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_373_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (exitcond_fu_433_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
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
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Rcon_address0 = tmp_132_fu_526_p1;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond_fu_433_p2 = ((i_1_reg_357 == 6'd60) ? 1'b1 : 1'b0);

assign i_28_fu_379_p2 = (i_reg_346 + 4'd1);

assign i_29_fu_495_p2 = (6'd1 + i_1_reg_357);

assign j_fu_439_p3 = {{i_1_reg_357}, {2'd0}};

assign sbox_address3 = tmp_134_fu_558_p1;

assign tempa_0_2_fu_551_p3 = ((tmp_126_reg_801[0:0] === 1'b1) ? tempa_0_fu_545_p2 : reg_368);

assign tempa_0_4_fu_617_p3 = ((tmp_133_reg_814[0:0] === 1'b1) ? sbox_q3 : tempa_0_2_reg_872);

assign tempa_0_fu_545_p2 = (sbox_q0 ^ Rcon_q0);

assign tempa_1_2_fu_596_p3 = ((tmp_126_reg_801[0:0] === 1'b1) ? sbox_q0 : tempa_1_reg_827);

assign tempa_1_4_fu_661_p3 = ((tmp_133_reg_814[0:0] === 1'b1) ? sbox_q0 : tempa_1_2_reg_902);

assign tempa_2_2_fu_589_p3 = ((tmp_126_reg_801[0:0] === 1'b1) ? sbox_q1 : reg_368);

assign tempa_2_4_fu_655_p3 = ((tmp_133_reg_814[0:0] === 1'b1) ? sbox_q1 : tempa_2_2_reg_897);

assign tempa_3_2_fu_583_p3 = ((tmp_126_reg_801[0:0] === 1'b1) ? sbox_q2 : tempa_3_reg_852);

assign tempa_3_4_fu_649_p3 = ((tmp_133_reg_814[0:0] === 1'b1) ? sbox_q2 : tempa_3_2_reg_892);

assign tmp_111_fu_397_p1 = tmp_s_fu_389_p3;

assign tmp_112_fu_402_p2 = (tmp_s_fu_389_p3 | 5'd1);

assign tmp_113_fu_408_p1 = tmp_112_fu_402_p2;

assign tmp_114_fu_413_p2 = (tmp_s_reg_728 | 5'd2);

assign tmp_115_fu_418_p1 = tmp_114_fu_413_p2;

assign tmp_116_fu_423_p2 = (tmp_s_reg_728 | 5'd3);

assign tmp_117_fu_428_p1 = tmp_116_fu_423_p2;

assign tmp_118_fu_447_p2 = ($signed(8'd252) + $signed(j_fu_439_p3));

assign tmp_119_fu_453_p1 = tmp_118_fu_447_p2;

assign tmp_120_fu_458_p2 = ($signed(8'd253) + $signed(j_fu_439_p3));

assign tmp_121_fu_464_p1 = tmp_120_fu_458_p2;

assign tmp_122_fu_501_p2 = ($signed(8'd254) + $signed(j_reg_777));

assign tmp_123_fu_506_p1 = tmp_122_fu_501_p2;

assign tmp_124_fu_511_p2 = ($signed(8'd255) + $signed(j_reg_777));

assign tmp_125_fu_516_p1 = tmp_124_fu_511_p2;

assign tmp_126_fu_473_p2 = ((tmp_159_fu_469_p1 == 3'd0) ? 1'b1 : 1'b0);

assign tmp_127_fu_521_p1 = RoundKey_q1;

assign tmp_128_fu_530_p1 = RoundKey_q0;

assign tmp_129_fu_535_p1 = RoundKey_q1;

assign tmp_130_fu_540_p1 = reg_368;

assign tmp_132_fu_526_p1 = tmp_131_reg_809;

assign tmp_133_fu_489_p2 = ((tmp_159_fu_469_p1 == 3'd4) ? 1'b1 : 1'b0);

assign tmp_134_fu_558_p1 = tempa_0_2_fu_551_p3;

assign tmp_135_fu_602_p1 = tempa_1_2_fu_596_p3;

assign tmp_136_fu_607_p1 = tempa_2_2_fu_589_p3;

assign tmp_137_fu_612_p1 = tempa_3_2_fu_583_p3;

assign tmp_138_fu_563_p2 = ($signed(8'd224) + $signed(j_reg_777));

assign tmp_139_fu_568_p1 = tmp_138_fu_563_p2;

assign tmp_140_fu_623_p2 = (tempa_0_4_fu_617_p3 ^ RoundKey_q0);

assign tmp_141_fu_667_p1 = j_reg_777;

assign tmp_142_fu_573_p2 = ($signed(8'd225) + $signed(j_reg_777));

assign tmp_143_fu_578_p1 = tmp_142_fu_573_p2;

assign tmp_144_fu_671_p2 = (tempa_1_4_fu_661_p3 ^ reg_368);

assign tmp_145_fu_678_p2 = (j_reg_777 | 8'd1);

assign tmp_146_fu_683_p1 = tmp_145_fu_678_p2;

assign tmp_147_fu_629_p2 = ($signed(8'd226) + $signed(j_reg_777));

assign tmp_148_fu_634_p1 = tmp_147_fu_629_p2;

assign tmp_149_fu_688_p2 = (tempa_2_4_fu_655_p3 ^ RoundKey_q0);

assign tmp_150_fu_700_p2 = (j_reg_777 | 8'd2);

assign tmp_151_fu_705_p1 = tmp_150_fu_700_p2;

assign tmp_152_fu_639_p2 = ($signed(8'd227) + $signed(j_reg_777));

assign tmp_153_fu_644_p1 = tmp_152_fu_639_p2;

assign tmp_154_fu_694_p2 = (tempa_3_4_fu_649_p3 ^ RoundKey_q1);

assign tmp_155_fu_710_p2 = (j_reg_777 | 8'd3);

assign tmp_156_fu_715_p1 = tmp_155_fu_710_p2;

assign tmp_158_fu_385_p1 = i_reg_346[2:0];

assign tmp_159_fu_469_p1 = i_1_reg_357[2:0];

assign tmp_fu_373_p2 = ((i_reg_346 == 4'd8) ? 1'b1 : 1'b0);

assign tmp_s_fu_389_p3 = {{tmp_158_fu_385_p1}, {2'd0}};

always @ (posedge ap_clk) begin
    tmp_s_reg_728[1:0] <= 2'b00;
    tmp_111_reg_734[1:0] <= 2'b00;
    tmp_111_reg_734[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    tmp_113_reg_744[1:0] <= 2'b01;
    tmp_113_reg_744[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    tmp_115_reg_754[1:0] <= 2'b10;
    tmp_115_reg_754[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    tmp_117_reg_764[1:0] <= 2'b11;
    tmp_117_reg_764[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    j_reg_777[1:0] <= 2'b00;
end

endmodule //KeyExpansion
