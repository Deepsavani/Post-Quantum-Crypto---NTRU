// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module crypto_sort (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        array_r_address0,
        array_r_ce0,
        array_r_we0,
        array_r_d0,
        array_r_q0,
        array_r_address1,
        array_r_ce1,
        array_r_we1,
        array_r_d1,
        array_r_q1
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
output  [8:0] array_r_address0;
output   array_r_ce0;
output   array_r_we0;
output  [31:0] array_r_d0;
input  [31:0] array_r_q0;
output  [8:0] array_r_address1;
output   array_r_ce1;
output   array_r_we1;
output  [31:0] array_r_d1;
input  [31:0] array_r_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[8:0] array_r_address0;
reg array_r_ce0;
reg array_r_we0;
reg[31:0] array_r_d0;
reg[8:0] array_r_address1;
reg array_r_ce1;
reg array_r_we1;

(* fsm_encoding = "none" *) reg   [12:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [62:0] p_cast_fu_168_p1;
reg   [62:0] p_cast_reg_510;
wire    ap_CS_fsm_state2;
wire   [61:0] p_cast_cast9_fu_172_p1;
reg   [61:0] p_cast_cast9_reg_515;
wire   [60:0] tmp_s_fu_182_p2;
reg   [60:0] tmp_s_reg_523;
wire   [0:0] tmp_fu_176_p2;
wire   [8:0] i_18_fu_206_p2;
reg   [8:0] i_18_reg_531;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_231_fu_222_p2;
reg   [0:0] tmp_231_reg_536;
wire   [0:0] tmp_228_fu_201_p2;
reg   [8:0] array_addr_reg_540;
reg   [8:0] array_addr_1_reg_546;
reg   [31:0] array_load_reg_552;
wire    ap_CS_fsm_state4;
reg   [31:0] array_load_1_reg_559;
wire   [31:0] c_10_fu_284_p2;
reg   [31:0] c_10_reg_566;
wire    ap_CS_fsm_state5;
wire  signed [63:0] tmp_239_cast_fu_317_p1;
reg  signed [63:0] tmp_239_cast_reg_574;
wire    ap_CS_fsm_state8;
wire   [0:0] tmp_238_fu_306_p2;
wire   [63:0] i_19_fu_327_p3;
reg   [63:0] i_19_reg_579;
wire   [59:0] tmp_39_fu_345_p1;
wire   [0:0] tmp_243_fu_364_p2;
reg   [0:0] tmp_243_reg_592;
wire    ap_CS_fsm_state9;
wire   [0:0] tmp_241_fu_349_p2;
wire   [9:0] tmp_252_fu_370_p1;
reg   [9:0] tmp_252_reg_596;
reg   [8:0] array_addr_2_reg_601;
wire   [61:0] tmp_40_fu_399_p1;
wire    ap_CS_fsm_state10;
reg   [8:0] array_addr_3_reg_620;
wire    ap_CS_fsm_state11;
wire   [0:0] tmp_244_fu_407_p2;
wire   [61:0] tmp_44_fu_436_p1;
reg   [61:0] tmp_44_reg_626;
wire   [63:0] tmp_248_fu_440_p2;
wire   [31:0] a_1_fu_498_p2;
reg   [31:0] a_1_reg_636;
wire    ap_CS_fsm_state12;
wire   [31:0] tmp_247_fu_504_p2;
reg   [31:0] tmp_247_reg_641;
reg   [59:0] p_reg_85;
reg   [8:0] i_reg_97;
wire    ap_CS_fsm_state7;
reg   [61:0] r_reg_108;
reg   [63:0] i_1_reg_120;
reg   [63:0] i_2_reg_132;
reg   [61:0] r5_reg_143;
wire    ap_CS_fsm_state13;
reg   [31:0] a1_reg_153;
wire  signed [63:0] sum_cast_fu_238_p1;
wire   [63:0] i_cast_fu_192_p1;
wire   [63:0] sum4_cast_fu_384_p1;
wire   [63:0] sum6_cast_fu_421_p1;
wire   [31:0] tmp_236_fu_290_p2;
wire    ap_CS_fsm_state6;
wire   [31:0] tmp_237_fu_296_p2;
wire   [60:0] p_cast1_fu_164_p1;
wire   [60:0] i_cast_cast_cast_fu_197_p1;
wire   [8:0] tmp_229_fu_212_p1;
wire   [8:0] tmp_230_fu_216_p2;
wire   [9:0] tmp_232_fu_228_p1;
wire   [9:0] i_cast4_fu_188_p1;
wire   [9:0] sum_fu_232_p2;
wire   [31:0] c_fu_247_p2;
wire   [31:0] tmp_233_fu_251_p2;
wire   [31:0] ab_fu_243_p2;
wire   [31:0] tmp_234_fu_256_p2;
wire   [31:0] c_8_fu_262_p2;
wire   [0:0] tmp_235_fu_268_p3;
wire   [31:0] c_9_fu_276_p3;
wire   [62:0] r_cast8_fu_302_p1;
wire   [62:0] tmp_239_fu_311_p2;
wire   [0:0] tmp_240_fu_321_p2;
wire   [58:0] tmp_249_fu_335_p4;
wire   [59:0] tmp_250_fu_354_p1;
wire   [59:0] tmp_242_fu_358_p2;
wire   [9:0] tmp_253_fu_374_p1;
wire   [9:0] sum4_fu_378_p2;
wire   [60:0] tmp_251_fu_389_p4;
wire   [62:0] r5_cast_fu_403_p1;
wire   [9:0] tmp_254_fu_412_p1;
wire   [9:0] sum6_fu_416_p2;
wire   [60:0] tmp_256_fu_426_p4;
wire   [31:0] c_11_fu_452_p2;
wire   [31:0] tmp_245_fu_458_p2;
wire   [31:0] ab_1_fu_446_p2;
wire   [31:0] tmp_246_fu_464_p2;
wire   [31:0] c_12_fu_470_p2;
wire   [0:0] tmp_255_fu_476_p3;
wire   [31:0] c_13_fu_484_p3;
wire   [31:0] c_14_fu_492_p2;
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
    if ((1'b1 == ap_CS_fsm_state13)) begin
        a1_reg_153 <= a_1_reg_636;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        a1_reg_153 <= array_r_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_228_fu_201_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_1_reg_120 <= 64'd0;
    end else if (((tmp_241_fu_349_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
        i_1_reg_120 <= i_19_reg_579;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state11) & ((tmp_244_fu_407_p2 == 1'd0) | (tmp_243_reg_592 == 1'd0)))) begin
        i_2_reg_132 <= tmp_248_fu_440_p2;
    end else if (((tmp_238_fu_306_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
        i_2_reg_132 <= i_1_reg_120;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_176_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_97 <= 9'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        i_reg_97 <= i_18_reg_531;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                p_reg_85[0] <= 1'b0;
        p_reg_85[1] <= 1'b0;
        p_reg_85[2] <= 1'b0;
        p_reg_85[3] <= 1'b0;
        p_reg_85[4] <= 1'b0;
        p_reg_85[5] <= 1'b0;
        p_reg_85[6] <= 1'b0;
        p_reg_85[7] <= 1'b0;
        p_reg_85[8] <= 1'b1;
    end else if (((tmp_238_fu_306_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
                p_reg_85[8 : 0] <= tmp_39_fu_345_p1[8 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
                r5_reg_143[8 : 0] <= tmp_44_reg_626[8 : 0];
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
                r5_reg_143[8 : 0] <= r_reg_108[8 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_228_fu_201_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                r_reg_108[0] <= 1'b0;
        r_reg_108[1] <= 1'b0;
        r_reg_108[2] <= 1'b0;
        r_reg_108[3] <= 1'b0;
        r_reg_108[4] <= 1'b0;
        r_reg_108[5] <= 1'b0;
        r_reg_108[6] <= 1'b0;
        r_reg_108[7] <= 1'b0;
        r_reg_108[8] <= 1'b1;
    end else if (((tmp_241_fu_349_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
                r_reg_108[8 : 0] <= tmp_40_fu_399_p1[8 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        a_1_reg_636 <= a_1_fu_498_p2;
        tmp_247_reg_641 <= tmp_247_fu_504_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_228_fu_201_p2 == 1'd1) & (tmp_231_fu_222_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        array_addr_1_reg_546 <= i_cast_fu_192_p1;
        array_addr_reg_540 <= sum_cast_fu_238_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_241_fu_349_p2 == 1'd1) & (tmp_243_fu_364_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        array_addr_2_reg_601 <= sum4_cast_fu_384_p1;
        tmp_252_reg_596 <= tmp_252_fu_370_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_244_fu_407_p2 == 1'd1) & (tmp_243_reg_592 == 1'd1) & (1'b1 == ap_CS_fsm_state11))) begin
        array_addr_3_reg_620 <= sum6_cast_fu_421_p1;
        tmp_44_reg_626[7 : 0] <= tmp_44_fu_436_p1[7 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        array_load_1_reg_559 <= array_r_q1;
        array_load_reg_552 <= array_r_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        c_10_reg_566 <= c_10_fu_284_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_18_reg_531 <= i_18_fu_206_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_238_fu_306_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
        i_19_reg_579 <= i_19_fu_327_p3;
        tmp_239_cast_reg_574 <= tmp_239_cast_fu_317_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        p_cast_cast9_reg_515[8 : 0] <= p_cast_cast9_fu_172_p1[8 : 0];
        p_cast_reg_510[8 : 0] <= p_cast_fu_168_p1[8 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_228_fu_201_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_231_reg_536 <= tmp_231_fu_222_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_241_fu_349_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        tmp_243_reg_592 <= tmp_243_fu_364_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_176_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_s_reg_523 <= tmp_s_fu_182_p2;
    end
end

always @ (*) begin
    if ((((tmp_fu_176_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((tmp_fu_176_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_243_reg_592 == 1'd1) & (tmp_244_fu_407_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state11))) begin
        array_r_address0 = array_addr_2_reg_601;
    end else if (((tmp_244_fu_407_p2 == 1'd1) & (tmp_243_reg_592 == 1'd1) & (1'b1 == ap_CS_fsm_state11))) begin
        array_r_address0 = sum6_cast_fu_421_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        array_r_address0 = array_addr_reg_540;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        array_r_address0 = array_addr_1_reg_546;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        array_r_address0 = sum_cast_fu_238_p1;
    end else begin
        array_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        array_r_address1 = array_addr_3_reg_620;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        array_r_address1 = sum4_cast_fu_384_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        array_r_address1 = array_addr_reg_540;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        array_r_address1 = i_cast_fu_192_p1;
    end else begin
        array_r_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state7) | ((tmp_243_reg_592 == 1'd1) & (tmp_244_fu_407_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state11)) | ((tmp_244_fu_407_p2 == 1'd1) & (tmp_243_reg_592 == 1'd1) & (1'b1 == ap_CS_fsm_state11)))) begin
        array_r_ce0 = 1'b1;
    end else begin
        array_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state9))) begin
        array_r_ce1 = 1'b1;
    end else begin
        array_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_243_reg_592 == 1'd1) & (tmp_244_fu_407_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state11))) begin
        array_r_d0 = a1_reg_153;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        array_r_d0 = tmp_237_fu_296_p2;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        array_r_d0 = tmp_236_fu_290_p2;
    end else begin
        array_r_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | ((tmp_231_reg_536 == 1'd1) & (1'b1 == ap_CS_fsm_state7)) | ((tmp_243_reg_592 == 1'd1) & (tmp_244_fu_407_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state11)))) begin
        array_r_we0 = 1'b1;
    end else begin
        array_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        array_r_we1 = 1'b1;
    end else begin
        array_r_we1 = 1'b0;
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
            if (((tmp_fu_176_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_228_fu_201_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else if (((tmp_228_fu_201_p2 == 1'd1) & (tmp_231_fu_222_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
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
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state8 : begin
            if (((tmp_238_fu_306_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state9 : begin
            if (((tmp_241_fu_349_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else if (((tmp_241_fu_349_p2 == 1'd1) & (tmp_243_fu_364_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            if (((1'b1 == ap_CS_fsm_state11) & ((tmp_244_fu_407_p2 == 1'd0) | (tmp_243_reg_592 == 1'd0)))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_1_fu_498_p2 = (c_14_fu_492_p2 ^ a1_reg_153);

assign ab_1_fu_446_p2 = (array_r_q0 ^ a1_reg_153);

assign ab_fu_243_p2 = (array_load_reg_552 ^ array_load_1_reg_559);

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

assign array_r_d1 = tmp_247_reg_641;

assign c_10_fu_284_p2 = (c_9_fu_276_p3 & ab_fu_243_p2);

assign c_11_fu_452_p2 = (array_r_q0 - a1_reg_153);

assign c_12_fu_470_p2 = (tmp_246_fu_464_p2 ^ c_11_fu_452_p2);

assign c_13_fu_484_p3 = ((tmp_255_fu_476_p3[0:0] === 1'b1) ? 32'd4294967295 : 32'd0);

assign c_14_fu_492_p2 = (c_13_fu_484_p3 & ab_1_fu_446_p2);

assign c_8_fu_262_p2 = (tmp_234_fu_256_p2 ^ c_fu_247_p2);

assign c_9_fu_276_p3 = ((tmp_235_fu_268_p3[0:0] === 1'b1) ? 32'd4294967295 : 32'd0);

assign c_fu_247_p2 = (array_load_reg_552 - array_load_1_reg_559);

assign i_18_fu_206_p2 = (i_reg_97 + 9'd1);

assign i_19_fu_327_p3 = ((tmp_240_fu_321_p2[0:0] === 1'b1) ? i_1_reg_120 : tmp_239_cast_fu_317_p1);

assign i_cast4_fu_188_p1 = i_reg_97;

assign i_cast_cast_cast_fu_197_p1 = i_reg_97;

assign i_cast_fu_192_p1 = i_reg_97;

assign p_cast1_fu_164_p1 = p_reg_85;

assign p_cast_cast9_fu_172_p1 = p_reg_85;

assign p_cast_fu_168_p1 = p_reg_85;

assign r5_cast_fu_403_p1 = r5_reg_143;

assign r_cast8_fu_302_p1 = r_reg_108;

assign sum4_cast_fu_384_p1 = sum4_fu_378_p2;

assign sum4_fu_378_p2 = (tmp_252_fu_370_p1 + tmp_253_fu_374_p1);

assign sum6_cast_fu_421_p1 = sum6_fu_416_p2;

assign sum6_fu_416_p2 = (tmp_252_reg_596 + tmp_254_fu_412_p1);

assign sum_cast_fu_238_p1 = $signed(sum_fu_232_p2);

assign sum_fu_232_p2 = (tmp_232_fu_228_p1 + i_cast4_fu_188_p1);

assign tmp_228_fu_201_p2 = (($signed(i_cast_cast_cast_fu_197_p1) < $signed(tmp_s_reg_523)) ? 1'b1 : 1'b0);

assign tmp_229_fu_212_p1 = p_reg_85[8:0];

assign tmp_230_fu_216_p2 = (tmp_229_fu_212_p1 & i_reg_97);

assign tmp_231_fu_222_p2 = ((tmp_230_fu_216_p2 == 9'd0) ? 1'b1 : 1'b0);

assign tmp_232_fu_228_p1 = p_reg_85[9:0];

assign tmp_233_fu_251_p2 = (c_fu_247_p2 ^ array_load_reg_552);

assign tmp_234_fu_256_p2 = (tmp_233_fu_251_p2 & ab_fu_243_p2);

assign tmp_235_fu_268_p3 = c_8_fu_262_p2[32'd31];

assign tmp_236_fu_290_p2 = (c_10_fu_284_p2 ^ array_load_1_reg_559);

assign tmp_237_fu_296_p2 = (c_10_reg_566 ^ array_r_q1);

assign tmp_238_fu_306_p2 = ((r_reg_108 > p_cast_cast9_reg_515) ? 1'b1 : 1'b0);

assign tmp_239_cast_fu_317_p1 = $signed(tmp_239_fu_311_p2);

assign tmp_239_fu_311_p2 = (63'd508 - r_cast8_fu_302_p1);

assign tmp_240_fu_321_p2 = (($signed(i_1_reg_120) > $signed(tmp_239_cast_fu_317_p1)) ? 1'b1 : 1'b0);

assign tmp_241_fu_349_p2 = (($signed(i_2_reg_132) < $signed(tmp_239_cast_reg_574)) ? 1'b1 : 1'b0);

assign tmp_242_fu_358_p2 = (tmp_250_fu_354_p1 & p_reg_85);

assign tmp_243_fu_364_p2 = ((tmp_242_fu_358_p2 == 60'd0) ? 1'b1 : 1'b0);

assign tmp_244_fu_407_p2 = ((r5_cast_fu_403_p1 > p_cast_reg_510) ? 1'b1 : 1'b0);

assign tmp_245_fu_458_p2 = (c_11_fu_452_p2 ^ array_r_q0);

assign tmp_246_fu_464_p2 = (tmp_245_fu_458_p2 & ab_1_fu_446_p2);

assign tmp_247_fu_504_p2 = (c_14_fu_492_p2 ^ array_r_q0);

assign tmp_248_fu_440_p2 = (i_2_reg_132 + 64'd1);

assign tmp_249_fu_335_p4 = {{p_reg_85[59:1]}};

assign tmp_250_fu_354_p1 = i_2_reg_132[59:0];

assign tmp_251_fu_389_p4 = {{r_reg_108[61:1]}};

assign tmp_252_fu_370_p1 = i_2_reg_132[9:0];

assign tmp_253_fu_374_p1 = p_reg_85[9:0];

assign tmp_254_fu_412_p1 = r5_reg_143[9:0];

assign tmp_255_fu_476_p3 = c_12_fu_470_p2[32'd31];

assign tmp_256_fu_426_p4 = {{r5_reg_143[61:1]}};

assign tmp_39_fu_345_p1 = tmp_249_fu_335_p4;

assign tmp_40_fu_399_p1 = tmp_251_fu_389_p4;

assign tmp_44_fu_436_p1 = tmp_256_fu_426_p4;

assign tmp_fu_176_p2 = ((p_reg_85 == 60'd0) ? 1'b1 : 1'b0);

assign tmp_s_fu_182_p2 = (61'd508 - p_cast1_fu_164_p1);

always @ (posedge ap_clk) begin
    p_cast_reg_510[62:9] <= 54'b000000000000000000000000000000000000000000000000000000;
    p_cast_cast9_reg_515[61:9] <= 53'b00000000000000000000000000000000000000000000000000000;
    tmp_44_reg_626[61:8] <= 54'b000000000000000000000000000000000000000000000000000000;
    p_reg_85[59:9] <= 51'b000000000000000000000000000000000000000000000000000;
    r_reg_108[61:9] <= 53'b00000000000000000000000000000000000000000000000000000;
    r5_reg_143[61:9] <= 53'b00000000000000000000000000000000000000000000000000000;
end

endmodule //crypto_sort
