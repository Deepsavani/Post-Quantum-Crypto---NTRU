// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_Rq_to_S3 (
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
        r_coeffs_q0,
        r_coeffs_address1,
        r_coeffs_ce1,
        r_coeffs_we1,
        r_coeffs_d1,
        r_coeffs_q1,
        a_coeffs_address0,
        a_coeffs_ce0,
        a_coeffs_q0
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

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
input  [15:0] r_coeffs_q0;
output  [9:0] r_coeffs_address1;
output   r_coeffs_ce1;
output   r_coeffs_we1;
output  [15:0] r_coeffs_d1;
input  [15:0] r_coeffs_q1;
output  [9:0] a_coeffs_address0;
output   a_coeffs_ce0;
input  [15:0] a_coeffs_q0;

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
reg a_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [9:0] i_13_fu_157_p2;
reg   [9:0] i_13_reg_753;
wire    ap_CS_fsm_state2;
wire   [63:0] tmp_s_fu_163_p1;
reg   [63:0] tmp_s_reg_758;
wire   [0:0] exitcond1_fu_151_p2;
wire   [9:0] r_coeffs_addr_reg_768;
reg   [1:0] tmp_234_reg_774;
wire    ap_CS_fsm_state4;
wire   [1:0] fold2_i_cast_fu_353_p2;
reg   [1:0] fold2_i_cast_reg_779;
wire   [9:0] i_14_fu_440_p2;
reg   [9:0] i_14_reg_787;
wire    ap_CS_fsm_state6;
reg   [9:0] r_coeffs_addr_21_reg_792;
wire   [0:0] exitcond_fu_434_p2;
reg   [3:0] tmp_263_i8_cast_reg_798;
wire    ap_CS_fsm_state7;
wire   [1:0] fold1_i9_cast_fu_635_p2;
reg   [1:0] fold1_i9_cast_reg_803;
reg   [1:0] tmp_230_reg_809;
reg   [9:0] i_reg_129;
wire    ap_CS_fsm_state3;
reg   [9:0] i_1_reg_140;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state8;
wire   [63:0] tmp_227_fu_446_p1;
wire   [15:0] tmp_226_fu_192_p2;
wire   [15:0] tmp_270_i_fu_427_p2;
wire   [2:0] tmp_235_fu_168_p4;
wire   [15:0] tmp_224_fu_178_p3;
wire   [15:0] tmp_225_fu_186_p2;
wire   [7:0] tmp_223_fu_203_p4;
wire   [7:0] tmp_228_fu_199_p1;
wire   [8:0] tmp_i_cast_35_fu_217_p1;
wire   [8:0] tmp_i_cast_fu_213_p1;
wire   [8:0] r_fu_227_p2;
wire   [4:0] tmp_232_fu_233_p4;
wire   [3:0] tmp_233_fu_257_p1;
wire   [3:0] tmp_fu_247_p4;
wire   [3:0] fold_i_cast_fu_275_p2;
wire   [5:0] tmp_262_i_cast_fu_281_p1;
wire   [5:0] tmp_261_i_cast_fu_243_p1;
wire   [5:0] r_7_fu_285_p2;
wire   [1:0] tmp_236_fu_261_p1;
wire   [1:0] tmp_205_fu_265_p4;
wire   [7:0] tmp_231_fu_221_p2;
wire   [1:0] tmp_207_fu_307_p4;
wire   [1:0] tmp_206_fu_301_p2;
wire   [1:0] fold1_i_cast_fu_317_p2;
wire   [3:0] tmp_264_i_cast_fu_323_p1;
wire   [3:0] tmp_263_i_cast_fu_291_p4;
wire   [3:0] r_8_fu_327_p2;
wire   [1:0] tmp_208_fu_343_p4;
wire   [2:0] tmp_266_i_cast_fu_362_p1;
wire   [2:0] tmp_265_i_cast_fu_359_p1;
wire   [2:0] r_9_fu_365_p2;
wire   [2:0] t_fu_371_p2;
wire   [0:0] tmp_237_fu_377_p3;
wire   [2:0] c_cast_fu_385_p3;
wire   [2:0] tmp_267_i_fu_393_p2;
wire   [0:0] not_tmp_87_i_fu_403_p2;
wire   [2:0] tmp_268_i_cast_cast_fu_409_p3;
wire   [2:0] tmp_269_i_fu_417_p2;
wire   [15:0] tmp_267_i_cast_fu_399_p1;
wire  signed [15:0] tmp_269_i_cast_fu_423_p1;
wire   [6:0] tmp_239_fu_457_p1;
wire   [2:0] tmp_246_fu_477_p1;
wire   [0:0] tmp_247_fu_489_p1;
wire   [15:0] tmp_238_fu_451_p2;
wire   [7:0] tmp_212_fu_461_p3;
wire   [7:0] tmp_244_fu_469_p1;
wire   [15:0] a_assign_1_fu_505_p2;
wire   [7:0] tmp_240_fu_517_p4;
wire   [7:0] a_assign_1_cast_fu_511_p2;
wire   [8:0] tmp_i1_cast_fu_527_p1;
wire   [8:0] tmp_i2_cast_fu_531_p1;
wire   [8:0] r_10_fu_541_p2;
wire   [4:0] tmp_242_fu_547_p4;
wire   [3:0] tmp_215_fu_481_p3;
wire   [3:0] tmp_245_fu_473_p1;
wire   [1:0] tmp_216_fu_493_p3;
wire   [1:0] tmp_248_fu_501_p1;
wire   [3:0] tmp_218_fu_561_p2;
wire   [3:0] tmp_219_fu_567_p4;
wire   [3:0] fold_i5_cast_fu_593_p2;
wire   [5:0] tmp_261_i4_cast_fu_557_p1;
wire   [5:0] tmp_262_i6_cast_fu_599_p1;
wire   [5:0] r_11_fu_603_p2;
wire   [1:0] tmp_221_fu_587_p2;
wire   [1:0] tmp_220_fu_577_p4;
wire   [7:0] tmp_241_fu_535_p2;
wire   [1:0] tmp_222_fu_619_p2;
wire   [1:0] tmp_229_fu_625_p4;
wire   [3:0] tmp_264_i1_cast_fu_651_p1;
wire   [3:0] r_12_fu_654_p2;
wire   [1:0] tmp_243_fu_659_p4;
wire   [1:0] fold2_i1_cast_fu_673_p2;
wire   [2:0] tmp_265_i1_cast_fu_669_p1;
wire   [2:0] tmp_266_i1_cast_fu_677_p1;
wire   [2:0] r_13_fu_681_p2;
wire   [2:0] t_1_fu_687_p2;
wire   [0:0] tmp_249_fu_693_p3;
wire   [2:0] c_5_cast_fu_701_p3;
wire   [2:0] tmp_267_i1_fu_709_p2;
wire   [0:0] not_tmp_87_i1_fu_719_p2;
wire   [2:0] tmp_268_i1_cast_cast_fu_725_p3;
wire   [2:0] tmp_269_i1_fu_733_p2;
wire   [15:0] tmp_267_i1_cast_fu_715_p1;
wire  signed [15:0] tmp_269_i1_cast_fu_739_p1;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
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
        i_1_reg_140 <= i_14_reg_787;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        i_1_reg_140 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_reg_129 <= i_13_reg_753;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_129 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        fold1_i9_cast_reg_803 <= fold1_i9_cast_fu_635_p2;
        tmp_230_reg_809 <= {{r_11_fu_603_p2[3:2]}};
        tmp_263_i8_cast_reg_798 <= {{r_11_fu_603_p2[5:2]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        fold2_i_cast_reg_779 <= fold2_i_cast_fu_353_p2;
        tmp_234_reg_774 <= {{r_8_fu_327_p2[3:2]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_13_reg_753 <= i_13_fu_157_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_14_reg_787 <= i_14_fu_440_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_434_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        r_coeffs_addr_21_reg_792 <= tmp_227_fu_446_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_151_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_s_reg_758[9 : 0] <= tmp_s_fu_163_p1[9 : 0];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        a_coeffs_ce0 = 1'b1;
    end else begin
        a_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((exitcond_fu_434_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((exitcond_fu_434_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_address0 = tmp_227_fu_446_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_address0 = r_coeffs_addr_reg_768;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        r_coeffs_address0 = tmp_s_reg_758;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_address0 = 64'd700;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_address1 = r_coeffs_addr_21_reg_792;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_address1 = 64'd700;
    end else begin
        r_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state8))) begin
        r_coeffs_ce1 = 1'b1;
    end else begin
        r_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d0 = tmp_270_i_fu_427_p2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        r_coeffs_d0 = tmp_226_fu_192_p2;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3))) begin
        r_coeffs_we0 = 1'b1;
    end else begin
        r_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
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
            if (((exitcond1_fu_151_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((exitcond_fu_434_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_1_cast_fu_511_p2 = (tmp_212_fu_461_p3 + tmp_244_fu_469_p1);

assign a_assign_1_fu_505_p2 = (r_coeffs_q0 + tmp_238_fu_451_p2);

assign a_coeffs_address0 = tmp_s_fu_163_p1;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign c_5_cast_fu_701_p3 = ((tmp_249_fu_693_p3[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign c_cast_fu_385_p3 = ((tmp_237_fu_377_p3[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign exitcond1_fu_151_p2 = ((i_reg_129 == 10'd701) ? 1'b1 : 1'b0);

assign exitcond_fu_434_p2 = ((i_1_reg_140 == 10'd701) ? 1'b1 : 1'b0);

assign fold1_i9_cast_fu_635_p2 = (tmp_222_fu_619_p2 + tmp_229_fu_625_p4);

assign fold1_i_cast_fu_317_p2 = (tmp_207_fu_307_p4 + tmp_206_fu_301_p2);

assign fold2_i1_cast_fu_673_p2 = (tmp_230_reg_809 + fold1_i9_cast_reg_803);

assign fold2_i_cast_fu_353_p2 = (fold1_i_cast_fu_317_p2 + tmp_208_fu_343_p4);

assign fold_i5_cast_fu_593_p2 = (tmp_218_fu_561_p2 + tmp_219_fu_567_p4);

assign fold_i_cast_fu_275_p2 = (tmp_233_fu_257_p1 + tmp_fu_247_p4);

assign i_13_fu_157_p2 = (i_reg_129 + 10'd1);

assign i_14_fu_440_p2 = (i_1_reg_140 + 10'd1);

assign not_tmp_87_i1_fu_719_p2 = (tmp_249_fu_693_p3 ^ 1'd1);

assign not_tmp_87_i_fu_403_p2 = (tmp_237_fu_377_p3 ^ 1'd1);

assign r_10_fu_541_p2 = (tmp_i1_cast_fu_527_p1 + tmp_i2_cast_fu_531_p1);

assign r_11_fu_603_p2 = (tmp_261_i4_cast_fu_557_p1 + tmp_262_i6_cast_fu_599_p1);

assign r_12_fu_654_p2 = (tmp_263_i8_cast_reg_798 + tmp_264_i1_cast_fu_651_p1);

assign r_13_fu_681_p2 = (tmp_265_i1_cast_fu_669_p1 + tmp_266_i1_cast_fu_677_p1);

assign r_7_fu_285_p2 = (tmp_262_i_cast_fu_281_p1 + tmp_261_i_cast_fu_243_p1);

assign r_8_fu_327_p2 = (tmp_264_i_cast_fu_323_p1 + tmp_263_i_cast_fu_291_p4);

assign r_9_fu_365_p2 = (tmp_266_i_cast_fu_362_p1 + tmp_265_i_cast_fu_359_p1);

assign r_coeffs_addr_reg_768 = 64'd700;

assign r_coeffs_d1 = (tmp_269_i1_cast_fu_739_p1 ^ tmp_267_i1_cast_fu_715_p1);

assign r_fu_227_p2 = (tmp_i_cast_35_fu_217_p1 + tmp_i_cast_fu_213_p1);

assign t_1_fu_687_p2 = ($signed(3'd5) + $signed(r_13_fu_681_p2));

assign t_fu_371_p2 = ($signed(3'd5) + $signed(r_9_fu_365_p2));

assign tmp_205_fu_265_p4 = {{r_coeffs_q0[9:8]}};

assign tmp_206_fu_301_p2 = (tmp_236_fu_261_p1 + tmp_205_fu_265_p4);

assign tmp_207_fu_307_p4 = {{tmp_231_fu_221_p2[5:4]}};

assign tmp_208_fu_343_p4 = {{r_7_fu_285_p2[3:2]}};

assign tmp_212_fu_461_p3 = {{tmp_239_fu_457_p1}, {1'd0}};

assign tmp_215_fu_481_p3 = {{tmp_246_fu_477_p1}, {1'd0}};

assign tmp_216_fu_493_p3 = {{tmp_247_fu_489_p1}, {1'd0}};

assign tmp_218_fu_561_p2 = (tmp_215_fu_481_p3 + tmp_245_fu_473_p1);

assign tmp_219_fu_567_p4 = {{a_assign_1_fu_505_p2[11:8]}};

assign tmp_220_fu_577_p4 = {{a_assign_1_fu_505_p2[9:8]}};

assign tmp_221_fu_587_p2 = (tmp_216_fu_493_p3 + tmp_248_fu_501_p1);

assign tmp_222_fu_619_p2 = (tmp_221_fu_587_p2 + tmp_220_fu_577_p4);

assign tmp_223_fu_203_p4 = {{r_coeffs_q0[15:8]}};

assign tmp_224_fu_178_p3 = {{tmp_235_fu_168_p4}, {13'd0}};

assign tmp_225_fu_186_p2 = (tmp_224_fu_178_p3 ^ 16'd24576);

assign tmp_226_fu_192_p2 = (tmp_225_fu_186_p2 + a_coeffs_q0);

assign tmp_227_fu_446_p1 = i_1_reg_140;

assign tmp_228_fu_199_p1 = r_coeffs_q0[7:0];

assign tmp_229_fu_625_p4 = {{tmp_241_fu_535_p2[5:4]}};

assign tmp_231_fu_221_p2 = (tmp_223_fu_203_p4 + tmp_228_fu_199_p1);

assign tmp_232_fu_233_p4 = {{r_fu_227_p2[8:4]}};

assign tmp_233_fu_257_p1 = r_coeffs_q0[3:0];

assign tmp_235_fu_168_p4 = {{a_coeffs_q0[14:12]}};

assign tmp_236_fu_261_p1 = r_coeffs_q0[1:0];

assign tmp_237_fu_377_p3 = t_fu_371_p2[32'd2];

assign tmp_238_fu_451_p2 = r_coeffs_q1 << 16'd1;

assign tmp_239_fu_457_p1 = r_coeffs_q1[6:0];

assign tmp_240_fu_517_p4 = {{a_assign_1_fu_505_p2[15:8]}};

assign tmp_241_fu_535_p2 = (a_assign_1_cast_fu_511_p2 + tmp_240_fu_517_p4);

assign tmp_242_fu_547_p4 = {{r_10_fu_541_p2[8:4]}};

assign tmp_243_fu_659_p4 = {{r_12_fu_654_p2[3:2]}};

assign tmp_244_fu_469_p1 = r_coeffs_q0[7:0];

assign tmp_245_fu_473_p1 = r_coeffs_q0[3:0];

assign tmp_246_fu_477_p1 = r_coeffs_q1[2:0];

assign tmp_247_fu_489_p1 = r_coeffs_q1[0:0];

assign tmp_248_fu_501_p1 = r_coeffs_q0[1:0];

assign tmp_249_fu_693_p3 = t_1_fu_687_p2[32'd2];

assign tmp_261_i4_cast_fu_557_p1 = tmp_242_fu_547_p4;

assign tmp_261_i_cast_fu_243_p1 = tmp_232_fu_233_p4;

assign tmp_262_i6_cast_fu_599_p1 = fold_i5_cast_fu_593_p2;

assign tmp_262_i_cast_fu_281_p1 = fold_i_cast_fu_275_p2;

assign tmp_263_i_cast_fu_291_p4 = {{r_7_fu_285_p2[5:2]}};

assign tmp_264_i1_cast_fu_651_p1 = fold1_i9_cast_reg_803;

assign tmp_264_i_cast_fu_323_p1 = fold1_i_cast_fu_317_p2;

assign tmp_265_i1_cast_fu_669_p1 = tmp_243_fu_659_p4;

assign tmp_265_i_cast_fu_359_p1 = tmp_234_reg_774;

assign tmp_266_i1_cast_fu_677_p1 = fold2_i1_cast_fu_673_p2;

assign tmp_266_i_cast_fu_362_p1 = fold2_i_cast_reg_779;

assign tmp_267_i1_cast_fu_715_p1 = tmp_267_i1_fu_709_p2;

assign tmp_267_i1_fu_709_p2 = (r_13_fu_681_p2 & c_5_cast_fu_701_p3);

assign tmp_267_i_cast_fu_399_p1 = tmp_267_i_fu_393_p2;

assign tmp_267_i_fu_393_p2 = (r_9_fu_365_p2 & c_cast_fu_385_p3);

assign tmp_268_i1_cast_cast_fu_725_p3 = ((not_tmp_87_i1_fu_719_p2[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign tmp_268_i_cast_cast_fu_409_p3 = ((not_tmp_87_i_fu_403_p2[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign tmp_269_i1_cast_fu_739_p1 = $signed(tmp_269_i1_fu_733_p2);

assign tmp_269_i1_fu_733_p2 = (tmp_268_i1_cast_cast_fu_725_p3 & t_1_fu_687_p2);

assign tmp_269_i_cast_fu_423_p1 = $signed(tmp_269_i_fu_417_p2);

assign tmp_269_i_fu_417_p2 = (tmp_268_i_cast_cast_fu_409_p3 & t_fu_371_p2);

assign tmp_270_i_fu_427_p2 = (tmp_269_i_cast_fu_423_p1 ^ tmp_267_i_cast_fu_399_p1);

assign tmp_fu_247_p4 = {{r_coeffs_q0[11:8]}};

assign tmp_i1_cast_fu_527_p1 = tmp_240_fu_517_p4;

assign tmp_i2_cast_fu_531_p1 = a_assign_1_cast_fu_511_p2;

assign tmp_i_cast_35_fu_217_p1 = tmp_228_fu_199_p1;

assign tmp_i_cast_fu_213_p1 = tmp_223_fu_203_p4;

assign tmp_s_fu_163_p1 = i_reg_129;

always @ (posedge ap_clk) begin
    tmp_s_reg_758[63:10] <= 54'b000000000000000000000000000000000000000000000000000000;
end

endmodule //poly_Rq_to_S3
