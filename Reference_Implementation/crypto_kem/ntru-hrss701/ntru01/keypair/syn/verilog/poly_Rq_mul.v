// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_Rq_mul (
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
        a_coeffs_address0,
        a_coeffs_ce0,
        a_coeffs_q0,
        b_coeffs_address0,
        b_coeffs_ce0,
        b_coeffs_q0
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;

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
output  [9:0] a_coeffs_address0;
output   a_coeffs_ce0;
input  [15:0] a_coeffs_q0;
output  [9:0] b_coeffs_address0;
output   b_coeffs_ce0;
input  [15:0] b_coeffs_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] r_coeffs_address0;
reg r_coeffs_ce0;
reg r_coeffs_we0;
reg[15:0] r_coeffs_d0;
reg[9:0] a_coeffs_address0;
reg a_coeffs_ce0;
reg[9:0] b_coeffs_address0;
reg b_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg  signed [15:0] reg_129;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state7;
reg  signed [15:0] reg_133;
reg   [15:0] reg_137;
wire   [10:0] k_cast2_fu_141_p1;
reg   [10:0] k_cast2_reg_268;
wire    ap_CS_fsm_state2;
wire   [9:0] k_5_fu_151_p2;
reg   [9:0] k_5_reg_277;
reg   [9:0] r_coeffs_addr_reg_282;
wire   [0:0] exitcond1_fu_145_p2;
wire   [9:0] tmp_s_fu_162_p2;
reg   [9:0] tmp_s_reg_287;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_206_fu_172_p2;
wire   [9:0] i_23_fu_198_p2;
reg   [9:0] i_23_reg_305;
wire   [9:0] i_24_fu_214_p2;
reg   [9:0] i_24_reg_313;
wire    ap_CS_fsm_state6;
wire   [0:0] exitcond_fu_208_p2;
wire   [9:0] indvars_iv_next_fu_235_p2;
reg   [9:0] indvars_iv_next_reg_328;
reg   [9:0] indvars_iv_reg_84;
wire    ap_CS_fsm_state9;
reg   [9:0] k_reg_96;
reg   [9:0] i_reg_107;
wire    ap_CS_fsm_state5;
reg   [9:0] i_1_reg_118;
wire    ap_CS_fsm_state8;
wire   [63:0] tmp_fu_157_p1;
wire   [63:0] tmp_208_fu_182_p1;
wire   [63:0] tmp_210_fu_193_p1;
wire  signed [63:0] tmp_214_fu_225_p1;
wire   [63:0] tmp_215_fu_230_p1;
wire  signed [15:0] grp_fu_250_p3;
wire  signed [15:0] grp_fu_259_p3;
wire   [15:0] tmp_241_cast_fu_245_p1;
wire   [10:0] i_cast_fu_168_p1;
wire   [10:0] tmp_207_fu_177_p2;
wire   [9:0] tmp_209_fu_187_p2;
wire   [10:0] i_1_cast_fu_204_p1;
wire   [10:0] tmp_213_fu_220_p2;
wire   [12:0] tmp_272_fu_241_p1;
reg   [8:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49(
    .din0(reg_129),
    .din1(reg_133),
    .din2(reg_137),
    .dout(grp_fu_250_p3)
);

crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50(
    .din0(reg_129),
    .din1(reg_133),
    .din2(reg_137),
    .dout(grp_fu_259_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_206_fu_172_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_1_reg_118 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        i_1_reg_118 <= i_24_reg_313;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_reg_107 <= i_23_reg_305;
    end else if (((exitcond1_fu_145_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_107 <= 10'd1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvars_iv_reg_84 <= 10'd1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        indvars_iv_reg_84 <= indvars_iv_next_reg_328;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        k_reg_96 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        k_reg_96 <= k_5_reg_277;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_206_fu_172_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_23_reg_305 <= i_23_fu_198_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_24_reg_313 <= i_24_fu_214_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_208_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        indvars_iv_next_reg_328 <= indvars_iv_next_fu_235_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        k_5_reg_277 <= k_5_fu_151_p2;
        k_cast2_reg_268[9 : 0] <= k_cast2_fu_141_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_145_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        r_coeffs_addr_reg_282 <= tmp_fu_157_p1;
        tmp_s_reg_287 <= tmp_s_fu_162_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state4))) begin
        reg_129 <= a_coeffs_q0;
        reg_133 <= b_coeffs_q0;
        reg_137 <= r_coeffs_q0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        a_coeffs_address0 = tmp_214_fu_225_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_coeffs_address0 = tmp_208_fu_182_p1;
    end else begin
        a_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state6))) begin
        a_coeffs_ce0 = 1'b1;
    end else begin
        a_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((exitcond1_fu_145_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((exitcond1_fu_145_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        b_coeffs_address0 = tmp_215_fu_230_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        b_coeffs_address0 = tmp_210_fu_193_p1;
    end else begin
        b_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state6))) begin
        b_coeffs_ce0 = 1'b1;
    end else begin
        b_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state9) | ((exitcond_fu_208_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6)) | ((exitcond_fu_208_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6)))) begin
        r_coeffs_address0 = r_coeffs_addr_reg_282;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_address0 = tmp_fu_157_p1;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state9) | ((exitcond_fu_208_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6)) | ((exitcond_fu_208_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6)))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_d0 = tmp_241_cast_fu_245_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_d0 = grp_fu_259_p3;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d0 = grp_fu_250_p3;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_d0 = 16'd0;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state9) | ((exitcond1_fu_145_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        r_coeffs_we0 = 1'b1;
    end else begin
        r_coeffs_we0 = 1'b0;
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
            if (((exitcond1_fu_145_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_206_fu_172_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state6 : begin
            if (((exitcond_fu_208_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
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
        ap_ST_fsm_state9 : begin
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

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond1_fu_145_p2 = ((indvars_iv_reg_84 == 10'd702) ? 1'b1 : 1'b0);

assign exitcond_fu_208_p2 = ((i_1_reg_118 == indvars_iv_reg_84) ? 1'b1 : 1'b0);

assign i_1_cast_fu_204_p1 = i_1_reg_118;

assign i_23_fu_198_p2 = (i_reg_107 + 10'd1);

assign i_24_fu_214_p2 = (i_1_reg_118 + 10'd1);

assign i_cast_fu_168_p1 = i_reg_107;

assign indvars_iv_next_fu_235_p2 = (10'd1 + indvars_iv_reg_84);

assign k_5_fu_151_p2 = (k_reg_96 + 10'd1);

assign k_cast2_fu_141_p1 = k_reg_96;

assign tmp_206_fu_172_p2 = ((i_reg_107 < tmp_s_reg_287) ? 1'b1 : 1'b0);

assign tmp_207_fu_177_p2 = (k_cast2_reg_268 + i_cast_fu_168_p1);

assign tmp_208_fu_182_p1 = tmp_207_fu_177_p2;

assign tmp_209_fu_187_p2 = ($signed(10'd701) - $signed(i_reg_107));

assign tmp_210_fu_193_p1 = tmp_209_fu_187_p2;

assign tmp_213_fu_220_p2 = (k_cast2_reg_268 - i_1_cast_fu_204_p1);

assign tmp_214_fu_225_p1 = $signed(tmp_213_fu_220_p2);

assign tmp_215_fu_230_p1 = i_1_reg_118;

assign tmp_241_cast_fu_245_p1 = tmp_272_fu_241_p1;

assign tmp_272_fu_241_p1 = r_coeffs_q0[12:0];

assign tmp_fu_157_p1 = k_reg_96;

assign tmp_s_fu_162_p2 = ($signed(10'd701) - $signed(k_reg_96));

always @ (posedge ap_clk) begin
    k_cast2_reg_268[10] <= 1'b0;
end

endmodule //poly_Rq_mul