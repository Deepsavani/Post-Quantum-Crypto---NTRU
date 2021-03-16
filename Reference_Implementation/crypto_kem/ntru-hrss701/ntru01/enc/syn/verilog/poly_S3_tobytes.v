// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_S3_tobytes (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        msg_address0,
        msg_ce0,
        msg_we0,
        msg_d0,
        msg_offset,
        a_coeffs_address0,
        a_coeffs_ce0,
        a_coeffs_q0,
        a_coeffs_address1,
        a_coeffs_ce1,
        a_coeffs_q1
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_state3 = 6'd4;
parameter    ap_ST_fsm_state4 = 6'd8;
parameter    ap_ST_fsm_state5 = 6'd16;
parameter    ap_ST_fsm_state6 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [8:0] msg_address0;
output   msg_ce0;
output   msg_we0;
output  [7:0] msg_d0;
input  [9:0] msg_offset;
output  [9:0] a_coeffs_address0;
output   a_coeffs_ce0;
input  [15:0] a_coeffs_q0;
output  [9:0] a_coeffs_address1;
output   a_coeffs_ce1;
input  [15:0] a_coeffs_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg msg_ce0;
reg msg_we0;
reg[9:0] a_coeffs_address0;
reg a_coeffs_ce0;
reg[9:0] a_coeffs_address1;
reg a_coeffs_ce1;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [8:0] tmp_210_fu_115_p1;
reg   [8:0] tmp_210_reg_300;
wire   [7:0] i_9_fu_129_p2;
reg   [7:0] i_9_reg_308;
wire    ap_CS_fsm_state2;
wire   [9:0] tmp_fu_143_p2;
reg   [9:0] tmp_reg_313;
wire   [0:0] exitcond_fu_123_p2;
wire   [8:0] sum_fu_175_p2;
reg   [8:0] sum_reg_330;
wire   [7:0] c_1_fu_206_p2;
reg   [7:0] c_1_reg_335;
wire    ap_CS_fsm_state3;
wire   [7:0] c_2_fu_236_p2;
reg   [7:0] c_2_reg_346;
wire    ap_CS_fsm_state4;
wire   [7:0] c_3_fu_270_p2;
reg   [7:0] c_3_reg_362;
wire    ap_CS_fsm_state5;
wire   [7:0] tmp_219_fu_276_p1;
reg   [7:0] tmp_219_reg_368;
reg   [7:0] i_reg_104;
wire    ap_CS_fsm_state6;
wire   [63:0] tmp_195_fu_155_p1;
wire   [63:0] tmp_198_fu_166_p1;
wire   [63:0] tmp_202_fu_217_p1;
wire   [63:0] tmp_206_fu_247_p1;
wire   [63:0] tmp_208_fu_252_p1;
wire   [63:0] sum_cast_fu_296_p1;
wire   [9:0] p_shl5_fu_135_p3;
wire   [9:0] i_cast1_fu_119_p1;
wire   [9:0] tmp_s_fu_149_p2;
wire   [9:0] tmp_197_fu_160_p2;
wire   [8:0] tmp_258_cast_fu_171_p1;
wire   [5:0] tmp_212_fu_184_p1;
wire   [7:0] p_shl4_fu_188_p3;
wire   [7:0] c_fu_180_p1;
wire   [7:0] tmp_196_fu_196_p2;
wire   [7:0] tmp_213_fu_202_p1;
wire   [9:0] tmp_201_fu_212_p2;
wire   [7:0] tmp_214_fu_222_p2;
wire   [7:0] tmp_215_fu_232_p1;
wire   [7:0] tmp_200_fu_227_p2;
wire   [9:0] tmp_205_fu_242_p2;
wire   [7:0] tmp_216_fu_256_p2;
wire   [7:0] tmp_217_fu_266_p1;
wire   [7:0] tmp_204_fu_261_p2;
wire   [7:0] tmp_218_fu_280_p2;
wire   [7:0] tmp_207_fu_285_p2;
reg   [5:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_reg_104 <= i_9_reg_308;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_104 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        c_1_reg_335 <= c_1_fu_206_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        c_2_reg_346 <= c_2_fu_236_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        c_3_reg_362 <= c_3_fu_270_p2;
        tmp_219_reg_368 <= tmp_219_fu_276_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_9_reg_308 <= i_9_fu_129_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_123_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        sum_reg_330 <= sum_fu_175_p2;
        tmp_reg_313 <= tmp_fu_143_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_210_reg_300 <= tmp_210_fu_115_p1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        a_coeffs_address0 = tmp_208_fu_252_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_coeffs_address0 = tmp_202_fu_217_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        a_coeffs_address0 = tmp_195_fu_155_p1;
    end else begin
        a_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        a_coeffs_address1 = tmp_206_fu_247_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        a_coeffs_address1 = tmp_198_fu_166_p1;
    end else begin
        a_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        a_coeffs_ce0 = 1'b1;
    end else begin
        a_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state2))) begin
        a_coeffs_ce1 = 1'b1;
    end else begin
        a_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((((exitcond_fu_123_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((exitcond_fu_123_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        msg_ce0 = 1'b1;
    end else begin
        msg_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        msg_we0 = 1'b1;
    end else begin
        msg_we0 = 1'b0;
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
            if (((exitcond_fu_123_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
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
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign c_1_fu_206_p2 = (tmp_196_fu_196_p2 + tmp_213_fu_202_p1);

assign c_2_fu_236_p2 = (tmp_215_fu_232_p1 + tmp_200_fu_227_p2);

assign c_3_fu_270_p2 = (tmp_217_fu_266_p1 + tmp_204_fu_261_p2);

assign c_fu_180_p1 = a_coeffs_q0[7:0];

assign exitcond_fu_123_p2 = ((i_reg_104 == 8'd140) ? 1'b1 : 1'b0);

assign i_9_fu_129_p2 = (i_reg_104 + 8'd1);

assign i_cast1_fu_119_p1 = i_reg_104;

assign msg_address0 = sum_cast_fu_296_p1;

assign msg_d0 = (tmp_219_reg_368 + tmp_207_fu_285_p2);

assign p_shl4_fu_188_p3 = {{tmp_212_fu_184_p1}, {2'd0}};

assign p_shl5_fu_135_p3 = {{i_reg_104}, {2'd0}};

assign sum_cast_fu_296_p1 = sum_reg_330;

assign sum_fu_175_p2 = (tmp_258_cast_fu_171_p1 + tmp_210_reg_300);

assign tmp_195_fu_155_p1 = tmp_s_fu_149_p2;

assign tmp_196_fu_196_p2 = (p_shl4_fu_188_p3 - c_fu_180_p1);

assign tmp_197_fu_160_p2 = (10'd3 + tmp_fu_143_p2);

assign tmp_198_fu_166_p1 = tmp_197_fu_160_p2;

assign tmp_200_fu_227_p2 = (tmp_214_fu_222_p2 - c_1_reg_335);

assign tmp_201_fu_212_p2 = (10'd2 + tmp_reg_313);

assign tmp_202_fu_217_p1 = tmp_201_fu_212_p2;

assign tmp_204_fu_261_p2 = (tmp_216_fu_256_p2 - c_2_reg_346);

assign tmp_205_fu_242_p2 = (10'd1 + tmp_reg_313);

assign tmp_206_fu_247_p1 = tmp_205_fu_242_p2;

assign tmp_207_fu_285_p2 = (tmp_218_fu_280_p2 - c_3_reg_362);

assign tmp_208_fu_252_p1 = tmp_reg_313;

assign tmp_210_fu_115_p1 = msg_offset[8:0];

assign tmp_212_fu_184_p1 = a_coeffs_q0[5:0];

assign tmp_213_fu_202_p1 = a_coeffs_q1[7:0];

assign tmp_214_fu_222_p2 = c_1_reg_335 << 8'd2;

assign tmp_215_fu_232_p1 = a_coeffs_q0[7:0];

assign tmp_216_fu_256_p2 = c_2_reg_346 << 8'd2;

assign tmp_217_fu_266_p1 = a_coeffs_q1[7:0];

assign tmp_218_fu_280_p2 = c_3_reg_362 << 8'd2;

assign tmp_219_fu_276_p1 = a_coeffs_q0[7:0];

assign tmp_258_cast_fu_171_p1 = i_reg_104;

assign tmp_fu_143_p2 = (p_shl5_fu_135_p3 + i_cast1_fu_119_p1);

assign tmp_s_fu_149_p2 = (10'd4 + tmp_fu_143_p2);

endmodule //poly_S3_tobytes