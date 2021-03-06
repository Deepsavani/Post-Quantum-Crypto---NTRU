// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module owcpa_enc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        c_address0,
        c_ce0,
        c_we0,
        c_d0,
        c_address1,
        c_ce1,
        c_we1,
        c_d1,
        rm_address0,
        rm_ce0,
        rm_q0,
        pk_address0,
        pk_ce0,
        pk_q0,
        pk_address1,
        pk_ce1,
        pk_q1
);

parameter    ap_ST_fsm_state1 = 16'd1;
parameter    ap_ST_fsm_state2 = 16'd2;
parameter    ap_ST_fsm_state3 = 16'd4;
parameter    ap_ST_fsm_state4 = 16'd8;
parameter    ap_ST_fsm_state5 = 16'd16;
parameter    ap_ST_fsm_state6 = 16'd32;
parameter    ap_ST_fsm_state7 = 16'd64;
parameter    ap_ST_fsm_state8 = 16'd128;
parameter    ap_ST_fsm_state9 = 16'd256;
parameter    ap_ST_fsm_state10 = 16'd512;
parameter    ap_ST_fsm_state11 = 16'd1024;
parameter    ap_ST_fsm_state12 = 16'd2048;
parameter    ap_ST_fsm_state13 = 16'd4096;
parameter    ap_ST_fsm_state14 = 16'd8192;
parameter    ap_ST_fsm_state15 = 16'd16384;
parameter    ap_ST_fsm_state16 = 16'd32768;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [10:0] c_address0;
output   c_ce0;
output   c_we0;
output  [7:0] c_d0;
output  [10:0] c_address1;
output   c_ce1;
output   c_we1;
output  [7:0] c_d1;
output  [8:0] rm_address0;
output   rm_ce0;
input  [7:0] rm_q0;
output  [10:0] pk_address0;
output   pk_ce0;
input  [7:0] pk_q0;
output  [10:0] pk_address1;
output   pk_ce1;
input  [7:0] pk_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[10:0] c_address0;
reg c_ce0;
reg c_we0;
reg[7:0] c_d0;
reg c_ce1;
reg c_we1;
reg rm_ce0;

(* fsm_encoding = "none" *) reg   [15:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [9:0] i_15_fu_282_p2;
reg   [9:0] i_15_reg_595;
wire    ap_CS_fsm_state3;
reg   [9:0] m_coeffs_addr_reg_600;
wire   [0:0] exitcond_i_fu_276_p2;
wire   [9:0] i_16_fu_344_p2;
reg   [9:0] i_16_reg_608;
wire    ap_CS_fsm_state8;
wire   [63:0] tmp_i6_fu_350_p1;
reg   [63:0] tmp_i6_reg_613;
wire   [0:0] exitcond_i5_fu_338_p2;
wire   [9:0] i_17_fu_361_p2;
reg   [9:0] i_17_reg_626;
wire    ap_CS_fsm_state10;
reg   [9:0] liftm_coeffs_addr_1_reg_631;
wire   [0:0] exitcond_i_i_fu_355_p2;
wire   [9:0] i_18_fu_423_p2;
reg   [9:0] i_18_reg_639;
wire    ap_CS_fsm_state12;
reg   [9:0] ct_coeffs_addr_reg_644;
wire   [0:0] exitcond_fu_417_p2;
wire   [8:0] i_19_fu_464_p2;
reg   [8:0] i_19_reg_657;
wire    ap_CS_fsm_state14;
wire   [0:0] exitcond_i_i9_fu_458_p2;
wire  signed [11:0] tmp_109_i_i_fu_495_p2;
reg  signed [11:0] tmp_109_i_i_reg_667;
reg   [7:0] tmp_120_i_i_reg_679;
wire    ap_CS_fsm_state15;
reg   [9:0] x1_coeffs_address0;
reg    x1_coeffs_ce0;
reg    x1_coeffs_we0;
reg   [15:0] x1_coeffs_d0;
wire   [15:0] x1_coeffs_q0;
reg    x1_coeffs_ce1;
reg    x1_coeffs_we1;
wire   [15:0] x1_coeffs_q1;
reg   [9:0] x2_coeffs_address0;
reg    x2_coeffs_ce0;
reg    x2_coeffs_we0;
reg   [15:0] x2_coeffs_d0;
wire   [15:0] x2_coeffs_q0;
reg    x2_coeffs_ce1;
reg    x2_coeffs_we1;
reg   [9:0] x3_coeffs_address0;
reg    x3_coeffs_ce0;
reg    x3_coeffs_we0;
reg   [15:0] x3_coeffs_d0;
wire   [15:0] x3_coeffs_q0;
wire   [9:0] x3_coeffs_address1;
reg    x3_coeffs_ce1;
wire   [15:0] x3_coeffs_q1;
wire    grp_poly_S3_frombytes_fu_250_ap_start;
wire    grp_poly_S3_frombytes_fu_250_ap_done;
wire    grp_poly_S3_frombytes_fu_250_ap_idle;
wire    grp_poly_S3_frombytes_fu_250_ap_ready;
wire   [9:0] grp_poly_S3_frombytes_fu_250_r_coeffs_address0;
wire    grp_poly_S3_frombytes_fu_250_r_coeffs_ce0;
wire    grp_poly_S3_frombytes_fu_250_r_coeffs_we0;
wire   [15:0] grp_poly_S3_frombytes_fu_250_r_coeffs_d0;
wire   [9:0] grp_poly_S3_frombytes_fu_250_r_coeffs_address1;
wire    grp_poly_S3_frombytes_fu_250_r_coeffs_ce1;
wire    grp_poly_S3_frombytes_fu_250_r_coeffs_we1;
wire   [15:0] grp_poly_S3_frombytes_fu_250_r_coeffs_d1;
wire   [8:0] grp_poly_S3_frombytes_fu_250_msg_address0;
wire    grp_poly_S3_frombytes_fu_250_msg_ce0;
reg   [9:0] grp_poly_S3_frombytes_fu_250_msg_offset;
wire    grp_poly_Rq_mul_fu_261_ap_start;
wire    grp_poly_Rq_mul_fu_261_ap_done;
wire    grp_poly_Rq_mul_fu_261_ap_idle;
wire    grp_poly_Rq_mul_fu_261_ap_ready;
wire   [9:0] grp_poly_Rq_mul_fu_261_r_coeffs_address0;
wire    grp_poly_Rq_mul_fu_261_r_coeffs_ce0;
wire    grp_poly_Rq_mul_fu_261_r_coeffs_we0;
wire   [15:0] grp_poly_Rq_mul_fu_261_r_coeffs_d0;
wire   [9:0] grp_poly_Rq_mul_fu_261_a_coeffs_address0;
wire    grp_poly_Rq_mul_fu_261_a_coeffs_ce0;
wire   [9:0] grp_poly_Rq_mul_fu_261_b_coeffs_address0;
wire    grp_poly_Rq_mul_fu_261_b_coeffs_ce0;
wire    grp_poly_Rq_sum_zero_fro_fu_268_ap_start;
wire    grp_poly_Rq_sum_zero_fro_fu_268_ap_done;
wire    grp_poly_Rq_sum_zero_fro_fu_268_ap_idle;
wire    grp_poly_Rq_sum_zero_fro_fu_268_ap_ready;
wire   [9:0] grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_address0;
wire    grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_ce0;
wire    grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_we0;
wire   [15:0] grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_d0;
wire   [9:0] grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_address1;
wire    grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_ce1;
wire    grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_we1;
wire   [15:0] grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_d1;
wire   [10:0] grp_poly_Rq_sum_zero_fro_fu_268_a_address0;
wire    grp_poly_Rq_sum_zero_fro_fu_268_a_ce0;
wire   [10:0] grp_poly_Rq_sum_zero_fro_fu_268_a_address1;
wire    grp_poly_Rq_sum_zero_fro_fu_268_a_ce1;
reg   [9:0] i_i_reg_195;
wire    ap_CS_fsm_state2;
reg    ap_block_state2_on_subcall_done;
wire    ap_CS_fsm_state4;
reg   [9:0] i_i4_reg_206;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state9;
reg   [9:0] i_i_i_reg_217;
wire    ap_CS_fsm_state11;
reg   [9:0] i_reg_228;
wire    ap_CS_fsm_state13;
reg   [8:0] i_i_i8_reg_239;
wire    ap_CS_fsm_state16;
reg    grp_poly_S3_frombytes_fu_250_ap_start_reg;
wire    ap_CS_fsm_state6;
reg    grp_poly_Rq_mul_fu_261_ap_start_reg;
wire    ap_CS_fsm_state5;
reg    grp_poly_Rq_sum_zero_fro_fu_268_ap_start_reg;
wire   [63:0] tmp_i_fu_288_p1;
wire   [63:0] tmp_i_i_fu_367_p1;
wire   [63:0] tmp_fu_429_p1;
wire   [63:0] tmp_i_i1_39_fu_478_p1;
wire   [63:0] tmp_113_i_i_fu_507_p1;
wire   [63:0] tmp_110_i_i_fu_520_p1;
wire   [63:0] tmp_118_i_i_fu_563_p1;
wire   [63:0] tmp_122_i_i_fu_587_p1;
wire   [15:0] tmp_107_i_fu_329_p3;
wire   [15:0] tmp_107_i_i_fu_408_p3;
wire   [15:0] tmp_161_cast_fu_449_p1;
wire   [7:0] tmp_80_fu_512_p1;
wire   [11:0] tmp_28_fu_293_p4;
wire   [11:0] tmp_76_fu_309_p1;
wire   [11:0] tmp_105_i_cast_fu_303_p2;
wire   [3:0] tmp_31_fu_319_p4;
wire   [11:0] tmp_30_fu_313_p2;
wire   [11:0] tmp_32_fu_372_p4;
wire   [11:0] tmp_77_fu_388_p1;
wire   [11:0] tmp_105_i_i_cast_fu_382_p2;
wire   [3:0] tmp_35_fu_398_p4;
wire   [11:0] tmp_34_fu_392_p2;
wire   [11:0] tmp_79_fu_439_p1;
wire   [11:0] tmp_78_fu_435_p1;
wire   [11:0] tmp_cast_fu_443_p2;
wire   [9:0] tmp_i_i1_fu_470_p3;
wire   [10:0] p_shl_i_i_fu_483_p3;
wire   [11:0] p_shl_i_i_cast_fu_491_p1;
wire   [11:0] i_i_i8_cast2_fu_454_p1;
wire   [9:0] tmp_111_i_i_fu_501_p2;
wire  signed [31:0] tmp_109_i_i_cast_fu_517_p1;
wire   [3:0] tmp_81_fu_525_p1;
wire   [7:0] tmp_115_i_i_fu_529_p3;
wire   [7:0] tmp_5_i_i_fu_537_p4;
wire   [11:0] tmp_117_i_i_fu_554_p2;
wire  signed [31:0] tmp_117_i_i_cast_fu_559_p1;
wire   [11:0] tmp_121_i_i_fu_578_p2;
wire  signed [31:0] tmp_121_i_i_cast_fu_583_p1;
reg   [15:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 16'd1;
#0 grp_poly_S3_frombytes_fu_250_ap_start_reg = 1'b0;
#0 grp_poly_Rq_mul_fu_261_ap_start_reg = 1'b0;
#0 grp_poly_Rq_sum_zero_fro_fu_268_ap_start_reg = 1'b0;
end

owcpa_enc_x1_coeffs #(
    .DataWidth( 16 ),
    .AddressRange( 821 ),
    .AddressWidth( 10 ))
x1_coeffs_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(x1_coeffs_address0),
    .ce0(x1_coeffs_ce0),
    .we0(x1_coeffs_we0),
    .d0(x1_coeffs_d0),
    .q0(x1_coeffs_q0),
    .address1(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_address1),
    .ce1(x1_coeffs_ce1),
    .we1(x1_coeffs_we1),
    .d1(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_d1),
    .q1(x1_coeffs_q1)
);

owcpa_enc_x2_coeffs #(
    .DataWidth( 16 ),
    .AddressRange( 821 ),
    .AddressWidth( 10 ))
x2_coeffs_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(x2_coeffs_address0),
    .ce0(x2_coeffs_ce0),
    .we0(x2_coeffs_we0),
    .d0(x2_coeffs_d0),
    .q0(x2_coeffs_q0),
    .address1(grp_poly_S3_frombytes_fu_250_r_coeffs_address1),
    .ce1(x2_coeffs_ce1),
    .we1(x2_coeffs_we1),
    .d1(grp_poly_S3_frombytes_fu_250_r_coeffs_d1)
);

owcpa_enc_x3_coeffs #(
    .DataWidth( 16 ),
    .AddressRange( 821 ),
    .AddressWidth( 10 ))
x3_coeffs_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(x3_coeffs_address0),
    .ce0(x3_coeffs_ce0),
    .we0(x3_coeffs_we0),
    .d0(x3_coeffs_d0),
    .q0(x3_coeffs_q0),
    .address1(x3_coeffs_address1),
    .ce1(x3_coeffs_ce1),
    .q1(x3_coeffs_q1)
);

poly_S3_frombytes grp_poly_S3_frombytes_fu_250(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_poly_S3_frombytes_fu_250_ap_start),
    .ap_done(grp_poly_S3_frombytes_fu_250_ap_done),
    .ap_idle(grp_poly_S3_frombytes_fu_250_ap_idle),
    .ap_ready(grp_poly_S3_frombytes_fu_250_ap_ready),
    .r_coeffs_address0(grp_poly_S3_frombytes_fu_250_r_coeffs_address0),
    .r_coeffs_ce0(grp_poly_S3_frombytes_fu_250_r_coeffs_ce0),
    .r_coeffs_we0(grp_poly_S3_frombytes_fu_250_r_coeffs_we0),
    .r_coeffs_d0(grp_poly_S3_frombytes_fu_250_r_coeffs_d0),
    .r_coeffs_address1(grp_poly_S3_frombytes_fu_250_r_coeffs_address1),
    .r_coeffs_ce1(grp_poly_S3_frombytes_fu_250_r_coeffs_ce1),
    .r_coeffs_we1(grp_poly_S3_frombytes_fu_250_r_coeffs_we1),
    .r_coeffs_d1(grp_poly_S3_frombytes_fu_250_r_coeffs_d1),
    .msg_address0(grp_poly_S3_frombytes_fu_250_msg_address0),
    .msg_ce0(grp_poly_S3_frombytes_fu_250_msg_ce0),
    .msg_q0(rm_q0),
    .msg_offset(grp_poly_S3_frombytes_fu_250_msg_offset)
);

poly_Rq_mul grp_poly_Rq_mul_fu_261(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_poly_Rq_mul_fu_261_ap_start),
    .ap_done(grp_poly_Rq_mul_fu_261_ap_done),
    .ap_idle(grp_poly_Rq_mul_fu_261_ap_idle),
    .ap_ready(grp_poly_Rq_mul_fu_261_ap_ready),
    .r_coeffs_address0(grp_poly_Rq_mul_fu_261_r_coeffs_address0),
    .r_coeffs_ce0(grp_poly_Rq_mul_fu_261_r_coeffs_ce0),
    .r_coeffs_we0(grp_poly_Rq_mul_fu_261_r_coeffs_we0),
    .r_coeffs_d0(grp_poly_Rq_mul_fu_261_r_coeffs_d0),
    .r_coeffs_q0(x3_coeffs_q0),
    .a_coeffs_address0(grp_poly_Rq_mul_fu_261_a_coeffs_address0),
    .a_coeffs_ce0(grp_poly_Rq_mul_fu_261_a_coeffs_ce0),
    .a_coeffs_q0(x2_coeffs_q0),
    .b_coeffs_address0(grp_poly_Rq_mul_fu_261_b_coeffs_address0),
    .b_coeffs_ce0(grp_poly_Rq_mul_fu_261_b_coeffs_ce0),
    .b_coeffs_q0(x1_coeffs_q0)
);

poly_Rq_sum_zero_fro grp_poly_Rq_sum_zero_fro_fu_268(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_poly_Rq_sum_zero_fro_fu_268_ap_start),
    .ap_done(grp_poly_Rq_sum_zero_fro_fu_268_ap_done),
    .ap_idle(grp_poly_Rq_sum_zero_fro_fu_268_ap_idle),
    .ap_ready(grp_poly_Rq_sum_zero_fro_fu_268_ap_ready),
    .r_coeffs_address0(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_address0),
    .r_coeffs_ce0(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_ce0),
    .r_coeffs_we0(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_we0),
    .r_coeffs_d0(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_d0),
    .r_coeffs_q0(x1_coeffs_q0),
    .r_coeffs_address1(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_address1),
    .r_coeffs_ce1(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_ce1),
    .r_coeffs_we1(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_we1),
    .r_coeffs_d1(grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_d1),
    .r_coeffs_q1(x1_coeffs_q1),
    .a_address0(grp_poly_Rq_sum_zero_fro_fu_268_a_address0),
    .a_ce0(grp_poly_Rq_sum_zero_fro_fu_268_a_ce0),
    .a_q0(pk_q0),
    .a_address1(grp_poly_Rq_sum_zero_fro_fu_268_a_address1),
    .a_ce1(grp_poly_Rq_sum_zero_fro_fu_268_a_ce1),
    .a_q1(pk_q1)
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
        grp_poly_Rq_mul_fu_261_ap_start_reg <= 1'b0;
    end else begin
        if (((exitcond_i_fu_276_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
            grp_poly_Rq_mul_fu_261_ap_start_reg <= 1'b1;
        end else if ((grp_poly_Rq_mul_fu_261_ap_ready == 1'b1)) begin
            grp_poly_Rq_mul_fu_261_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_poly_Rq_sum_zero_fro_fu_268_ap_start_reg <= 1'b0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            grp_poly_Rq_sum_zero_fro_fu_268_ap_start_reg <= 1'b1;
        end else if ((grp_poly_Rq_sum_zero_fro_fu_268_ap_ready == 1'b1)) begin
            grp_poly_Rq_sum_zero_fro_fu_268_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_poly_S3_frombytes_fu_250_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state6) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
            grp_poly_S3_frombytes_fu_250_ap_start_reg <= 1'b1;
        end else if ((grp_poly_S3_frombytes_fu_250_ap_ready == 1'b1)) begin
            grp_poly_S3_frombytes_fu_250_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        i_i4_reg_206 <= i_16_reg_608;
    end else if (((1'b1 == ap_CS_fsm_state7) & (grp_poly_S3_frombytes_fu_250_ap_done == 1'b1))) begin
        i_i4_reg_206 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state12) & (exitcond_fu_417_p2 == 1'd1))) begin
        i_i_i8_reg_239 <= 9'd0;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        i_i_i8_reg_239 <= i_19_reg_657;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i5_fu_338_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
        i_i_i_reg_217 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        i_i_i_reg_217 <= i_17_reg_626;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_i_reg_195 <= i_15_reg_595;
    end else if (((1'b0 == ap_block_state2_on_subcall_done) & (1'b1 == ap_CS_fsm_state2))) begin
        i_i_reg_195 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_i_fu_355_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state10))) begin
        i_reg_228 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        i_reg_228 <= i_18_reg_639;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_417_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state12))) begin
        ct_coeffs_addr_reg_644 <= tmp_fu_429_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_15_reg_595 <= i_15_fu_282_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        i_16_reg_608 <= i_16_fu_344_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        i_17_reg_626 <= i_17_fu_361_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        i_18_reg_639 <= i_18_fu_423_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        i_19_reg_657 <= i_19_fu_464_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_i_fu_355_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state10))) begin
        liftm_coeffs_addr_1_reg_631 <= tmp_i_i_fu_367_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_fu_276_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        m_coeffs_addr_reg_600 <= tmp_i_fu_288_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_i9_fu_458_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state14))) begin
        tmp_109_i_i_reg_667 <= tmp_109_i_i_fu_495_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        tmp_120_i_i_reg_679 <= {{x3_coeffs_q1[11:4]}};
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i5_fu_338_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        tmp_i6_reg_613[9 : 0] <= tmp_i6_fu_350_p1[9 : 0];
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state14) & (exitcond_i_i9_fu_458_p2 == 1'd1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state14) & (exitcond_i_i9_fu_458_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        c_address0 = tmp_122_i_i_fu_587_p1;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        c_address0 = tmp_110_i_i_fu_520_p1;
    end else begin
        c_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15))) begin
        c_ce0 = 1'b1;
    end else begin
        c_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        c_ce1 = 1'b1;
    end else begin
        c_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        c_d0 = tmp_120_i_i_reg_679;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        c_d0 = tmp_80_fu_512_p1;
    end else begin
        c_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state15))) begin
        c_we0 = 1'b1;
    end else begin
        c_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        c_we1 = 1'b1;
    end else begin
        c_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_poly_S3_frombytes_fu_250_msg_offset = 10'd164;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_poly_S3_frombytes_fu_250_msg_offset = 10'd0;
    end else begin
        grp_poly_S3_frombytes_fu_250_msg_offset = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state2))) begin
        rm_ce0 = grp_poly_S3_frombytes_fu_250_msg_ce0;
    end else begin
        rm_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        x1_coeffs_address0 = tmp_fu_429_p1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        x1_coeffs_address0 = liftm_coeffs_addr_1_reg_631;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        x1_coeffs_address0 = tmp_i_i_fu_367_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        x1_coeffs_address0 = tmp_i6_reg_613;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        x1_coeffs_address0 = grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_address0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        x1_coeffs_address0 = grp_poly_Rq_mul_fu_261_b_coeffs_address0;
    end else begin
        x1_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state12))) begin
        x1_coeffs_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        x1_coeffs_ce0 = grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_ce0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        x1_coeffs_ce0 = grp_poly_Rq_mul_fu_261_b_coeffs_ce0;
    end else begin
        x1_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        x1_coeffs_ce1 = grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_ce1;
    end else begin
        x1_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        x1_coeffs_d0 = tmp_107_i_i_fu_408_p3;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        x1_coeffs_d0 = x2_coeffs_q0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        x1_coeffs_d0 = grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_d0;
    end else begin
        x1_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state9))) begin
        x1_coeffs_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        x1_coeffs_we0 = grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_we0;
    end else begin
        x1_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        x1_coeffs_we1 = grp_poly_Rq_sum_zero_fro_fu_268_r_coeffs_we1;
    end else begin
        x1_coeffs_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        x2_coeffs_address0 = tmp_i6_fu_350_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        x2_coeffs_address0 = m_coeffs_addr_reg_600;
    end else if (((exitcond_i_fu_276_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        x2_coeffs_address0 = tmp_i_fu_288_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        x2_coeffs_address0 = grp_poly_Rq_mul_fu_261_a_coeffs_address0;
    end else if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state2))) begin
        x2_coeffs_address0 = grp_poly_S3_frombytes_fu_250_r_coeffs_address0;
    end else begin
        x2_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state4) | ((exitcond_i_fu_276_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)))) begin
        x2_coeffs_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        x2_coeffs_ce0 = grp_poly_Rq_mul_fu_261_a_coeffs_ce0;
    end else if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state2))) begin
        x2_coeffs_ce0 = grp_poly_S3_frombytes_fu_250_r_coeffs_ce0;
    end else begin
        x2_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state2))) begin
        x2_coeffs_ce1 = grp_poly_S3_frombytes_fu_250_r_coeffs_ce1;
    end else begin
        x2_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        x2_coeffs_d0 = tmp_107_i_fu_329_p3;
    end else if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state2))) begin
        x2_coeffs_d0 = grp_poly_S3_frombytes_fu_250_r_coeffs_d0;
    end else begin
        x2_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        x2_coeffs_we0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state2))) begin
        x2_coeffs_we0 = grp_poly_S3_frombytes_fu_250_r_coeffs_we0;
    end else begin
        x2_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state2))) begin
        x2_coeffs_we1 = grp_poly_S3_frombytes_fu_250_r_coeffs_we1;
    end else begin
        x2_coeffs_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        x3_coeffs_address0 = tmp_i_i1_39_fu_478_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        x3_coeffs_address0 = ct_coeffs_addr_reg_644;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        x3_coeffs_address0 = tmp_fu_429_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        x3_coeffs_address0 = grp_poly_Rq_mul_fu_261_r_coeffs_address0;
    end else begin
        x3_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state12))) begin
        x3_coeffs_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        x3_coeffs_ce0 = grp_poly_Rq_mul_fu_261_r_coeffs_ce0;
    end else begin
        x3_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        x3_coeffs_ce1 = 1'b1;
    end else begin
        x3_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        x3_coeffs_d0 = tmp_161_cast_fu_449_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        x3_coeffs_d0 = grp_poly_Rq_mul_fu_261_r_coeffs_d0;
    end else begin
        x3_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        x3_coeffs_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        x3_coeffs_we0 = grp_poly_Rq_mul_fu_261_r_coeffs_we0;
    end else begin
        x3_coeffs_we0 = 1'b0;
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
            if (((1'b0 == ap_block_state2_on_subcall_done) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond_i_fu_276_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state5 : begin
            if (((grp_poly_Rq_mul_fu_261_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            if (((1'b1 == ap_CS_fsm_state7) & (grp_poly_S3_frombytes_fu_250_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state8 : begin
            if (((exitcond_i5_fu_338_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state10 : begin
            if (((exitcond_i_i_fu_355_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state10))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state12 : begin
            if (((1'b1 == ap_CS_fsm_state12) & (exitcond_fu_417_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state14 : begin
            if (((1'b1 == ap_CS_fsm_state14) & (exitcond_i_i9_fu_458_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
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

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state2_on_subcall_done = ((grp_poly_Rq_sum_zero_fro_fu_268_ap_done == 1'b0) | (grp_poly_S3_frombytes_fu_250_ap_done == 1'b0));
end

assign c_address1 = tmp_118_i_i_fu_563_p1;

assign c_d1 = (tmp_5_i_i_fu_537_p4 | tmp_115_i_i_fu_529_p3);

assign exitcond_fu_417_p2 = ((i_reg_228 == 10'd821) ? 1'b1 : 1'b0);

assign exitcond_i5_fu_338_p2 = ((i_i4_reg_206 == 10'd821) ? 1'b1 : 1'b0);

assign exitcond_i_fu_276_p2 = ((i_i_reg_195 == 10'd821) ? 1'b1 : 1'b0);

assign exitcond_i_i9_fu_458_p2 = ((i_i_i8_reg_239 == 9'd410) ? 1'b1 : 1'b0);

assign exitcond_i_i_fu_355_p2 = ((i_i_i_reg_217 == 10'd821) ? 1'b1 : 1'b0);

assign grp_poly_Rq_mul_fu_261_ap_start = grp_poly_Rq_mul_fu_261_ap_start_reg;

assign grp_poly_Rq_sum_zero_fro_fu_268_ap_start = grp_poly_Rq_sum_zero_fro_fu_268_ap_start_reg;

assign grp_poly_S3_frombytes_fu_250_ap_start = grp_poly_S3_frombytes_fu_250_ap_start_reg;

assign i_15_fu_282_p2 = (i_i_reg_195 + 10'd1);

assign i_16_fu_344_p2 = (i_i4_reg_206 + 10'd1);

assign i_17_fu_361_p2 = (i_i_i_reg_217 + 10'd1);

assign i_18_fu_423_p2 = (i_reg_228 + 10'd1);

assign i_19_fu_464_p2 = (i_i_i8_reg_239 + 9'd1);

assign i_i_i8_cast2_fu_454_p1 = i_i_i8_reg_239;

assign p_shl_i_i_cast_fu_491_p1 = p_shl_i_i_fu_483_p3;

assign p_shl_i_i_fu_483_p3 = {{i_i_i8_reg_239}, {2'd0}};

assign pk_address0 = grp_poly_Rq_sum_zero_fro_fu_268_a_address0;

assign pk_address1 = grp_poly_Rq_sum_zero_fro_fu_268_a_address1;

assign pk_ce0 = grp_poly_Rq_sum_zero_fro_fu_268_a_ce0;

assign pk_ce1 = grp_poly_Rq_sum_zero_fro_fu_268_a_ce1;

assign rm_address0 = grp_poly_S3_frombytes_fu_250_msg_address0;

assign tmp_105_i_cast_fu_303_p2 = (12'd0 - tmp_28_fu_293_p4);

assign tmp_105_i_i_cast_fu_382_p2 = (12'd0 - tmp_32_fu_372_p4);

assign tmp_107_i_fu_329_p3 = {{tmp_31_fu_319_p4}, {tmp_30_fu_313_p2}};

assign tmp_107_i_i_fu_408_p3 = {{tmp_35_fu_398_p4}, {tmp_34_fu_392_p2}};

assign tmp_109_i_i_cast_fu_517_p1 = tmp_109_i_i_reg_667;

assign tmp_109_i_i_fu_495_p2 = (p_shl_i_i_cast_fu_491_p1 - i_i_i8_cast2_fu_454_p1);

assign tmp_110_i_i_fu_520_p1 = $unsigned(tmp_109_i_i_cast_fu_517_p1);

assign tmp_111_i_i_fu_501_p2 = (tmp_i_i1_fu_470_p3 | 10'd1);

assign tmp_113_i_i_fu_507_p1 = tmp_111_i_i_fu_501_p2;

assign tmp_115_i_i_fu_529_p3 = {{tmp_81_fu_525_p1}, {4'd0}};

assign tmp_117_i_i_cast_fu_559_p1 = $signed(tmp_117_i_i_fu_554_p2);

assign tmp_117_i_i_fu_554_p2 = ($signed(12'd1) + $signed(tmp_109_i_i_reg_667));

assign tmp_118_i_i_fu_563_p1 = $unsigned(tmp_117_i_i_cast_fu_559_p1);

assign tmp_121_i_i_cast_fu_583_p1 = $signed(tmp_121_i_i_fu_578_p2);

assign tmp_121_i_i_fu_578_p2 = ($signed(12'd2) + $signed(tmp_109_i_i_reg_667));

assign tmp_122_i_i_fu_587_p1 = $unsigned(tmp_121_i_i_cast_fu_583_p1);

assign tmp_161_cast_fu_449_p1 = tmp_cast_fu_443_p2;

assign tmp_28_fu_293_p4 = {{x2_coeffs_q0[12:1]}};

assign tmp_30_fu_313_p2 = (tmp_76_fu_309_p1 | tmp_105_i_cast_fu_303_p2);

assign tmp_31_fu_319_p4 = {{x2_coeffs_q0[15:12]}};

assign tmp_32_fu_372_p4 = {{x1_coeffs_q0[12:1]}};

assign tmp_34_fu_392_p2 = (tmp_77_fu_388_p1 | tmp_105_i_i_cast_fu_382_p2);

assign tmp_35_fu_398_p4 = {{x1_coeffs_q0[15:12]}};

assign tmp_5_i_i_fu_537_p4 = {{x3_coeffs_q0[15:8]}};

assign tmp_76_fu_309_p1 = x2_coeffs_q0[11:0];

assign tmp_77_fu_388_p1 = x1_coeffs_q0[11:0];

assign tmp_78_fu_435_p1 = x1_coeffs_q0[11:0];

assign tmp_79_fu_439_p1 = x3_coeffs_q0[11:0];

assign tmp_80_fu_512_p1 = x3_coeffs_q0[7:0];

assign tmp_81_fu_525_p1 = x3_coeffs_q1[3:0];

assign tmp_cast_fu_443_p2 = (tmp_79_fu_439_p1 + tmp_78_fu_435_p1);

assign tmp_fu_429_p1 = i_reg_228;

assign tmp_i6_fu_350_p1 = i_i4_reg_206;

assign tmp_i_fu_288_p1 = i_i_reg_195;

assign tmp_i_i1_39_fu_478_p1 = tmp_i_i1_fu_470_p3;

assign tmp_i_i1_fu_470_p3 = {{i_i_i8_reg_239}, {1'd0}};

assign tmp_i_i_fu_367_p1 = i_i_i_reg_217;

assign x3_coeffs_address1 = tmp_113_i_i_fu_507_p1;

always @ (posedge ap_clk) begin
    tmp_i6_reg_613[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
end

endmodule //owcpa_enc
