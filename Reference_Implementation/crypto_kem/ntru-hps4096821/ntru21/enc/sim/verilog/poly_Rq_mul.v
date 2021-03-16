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
reg  signed [15:0] reg_127;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state7;
reg  signed [15:0] reg_131;
reg   [15:0] reg_135;
wire   [10:0] k_cast2_fu_139_p1;
reg   [10:0] k_cast2_reg_266;
wire    ap_CS_fsm_state2;
wire   [9:0] k_1_fu_149_p2;
reg   [9:0] k_1_reg_275;
reg   [9:0] r_coeffs_addr_reg_280;
wire   [0:0] exitcond1_fu_143_p2;
wire   [9:0] tmp_s_fu_160_p2;
reg   [9:0] tmp_s_reg_285;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_66_fu_170_p2;
wire   [9:0] i_13_fu_196_p2;
reg   [9:0] i_13_reg_303;
wire   [9:0] i_14_fu_212_p2;
reg   [9:0] i_14_reg_311;
wire    ap_CS_fsm_state6;
wire   [0:0] exitcond_fu_206_p2;
wire   [9:0] indvars_iv_next_fu_233_p2;
reg   [9:0] indvars_iv_next_reg_326;
reg   [9:0] indvars_iv_reg_82;
wire    ap_CS_fsm_state9;
reg   [9:0] k_reg_94;
reg   [9:0] i_reg_105;
wire    ap_CS_fsm_state5;
reg   [9:0] i_1_reg_116;
wire    ap_CS_fsm_state8;
wire   [63:0] tmp_fu_155_p1;
wire   [63:0] tmp_68_fu_180_p1;
wire   [63:0] tmp_70_fu_191_p1;
wire  signed [63:0] tmp_74_fu_223_p1;
wire   [63:0] tmp_76_fu_228_p1;
wire  signed [15:0] grp_fu_248_p3;
wire  signed [15:0] grp_fu_257_p3;
wire   [15:0] tmp_155_cast_fu_243_p1;
wire   [10:0] i_cast_fu_166_p1;
wire   [10:0] tmp_67_fu_175_p2;
wire   [9:0] tmp_69_fu_185_p2;
wire   [10:0] i_1_cast_fu_202_p1;
wire   [10:0] tmp_73_fu_218_p2;
wire   [11:0] tmp_75_fu_239_p1;
reg   [8:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1_U52(
    .din0(reg_127),
    .din1(reg_131),
    .din2(reg_135),
    .dout(grp_fu_248_p3)
);

crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1_U53(
    .din0(reg_127),
    .din1(reg_131),
    .din2(reg_135),
    .dout(grp_fu_257_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_66_fu_170_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_1_reg_116 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        i_1_reg_116 <= i_14_reg_311;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_reg_105 <= i_13_reg_303;
    end else if (((exitcond1_fu_143_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_105 <= 10'd1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvars_iv_reg_82 <= 10'd1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        indvars_iv_reg_82 <= indvars_iv_next_reg_326;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        k_reg_94 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        k_reg_94 <= k_1_reg_275;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_66_fu_170_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_13_reg_303 <= i_13_fu_196_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_14_reg_311 <= i_14_fu_212_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_206_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        indvars_iv_next_reg_326 <= indvars_iv_next_fu_233_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        k_1_reg_275 <= k_1_fu_149_p2;
        k_cast2_reg_266[9 : 0] <= k_cast2_fu_139_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_143_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        r_coeffs_addr_reg_280 <= tmp_fu_155_p1;
        tmp_s_reg_285 <= tmp_s_fu_160_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state4))) begin
        reg_127 <= a_coeffs_q0;
        reg_131 <= b_coeffs_q0;
        reg_135 <= r_coeffs_q0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        a_coeffs_address0 = tmp_74_fu_223_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_coeffs_address0 = tmp_68_fu_180_p1;
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
    if ((((exitcond1_fu_143_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((exitcond1_fu_143_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        b_coeffs_address0 = tmp_76_fu_228_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        b_coeffs_address0 = tmp_70_fu_191_p1;
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
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state9) | ((exitcond_fu_206_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6)) | ((exitcond_fu_206_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6)))) begin
        r_coeffs_address0 = r_coeffs_addr_reg_280;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_address0 = tmp_fu_155_p1;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state9) | ((exitcond_fu_206_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6)) | ((exitcond_fu_206_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6)))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_d0 = tmp_155_cast_fu_243_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_d0 = grp_fu_257_p3;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d0 = grp_fu_248_p3;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_d0 = 16'd0;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state9) | ((exitcond1_fu_143_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
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
            if (((exitcond1_fu_143_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_66_fu_170_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
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
            if (((exitcond_fu_206_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
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

assign exitcond1_fu_143_p2 = ((indvars_iv_reg_82 == 10'd822) ? 1'b1 : 1'b0);

assign exitcond_fu_206_p2 = ((i_1_reg_116 == indvars_iv_reg_82) ? 1'b1 : 1'b0);

assign i_13_fu_196_p2 = (i_reg_105 + 10'd1);

assign i_14_fu_212_p2 = (i_1_reg_116 + 10'd1);

assign i_1_cast_fu_202_p1 = i_1_reg_116;

assign i_cast_fu_166_p1 = i_reg_105;

assign indvars_iv_next_fu_233_p2 = (10'd1 + indvars_iv_reg_82);

assign k_1_fu_149_p2 = (k_reg_94 + 10'd1);

assign k_cast2_fu_139_p1 = k_reg_94;

assign tmp_155_cast_fu_243_p1 = tmp_75_fu_239_p1;

assign tmp_66_fu_170_p2 = ((i_reg_105 < tmp_s_reg_285) ? 1'b1 : 1'b0);

assign tmp_67_fu_175_p2 = (k_cast2_reg_266 + i_cast_fu_166_p1);

assign tmp_68_fu_180_p1 = tmp_67_fu_175_p2;

assign tmp_69_fu_185_p2 = ($signed(10'd821) - $signed(i_reg_105));

assign tmp_70_fu_191_p1 = tmp_69_fu_185_p2;

assign tmp_73_fu_218_p2 = (k_cast2_reg_266 - i_1_cast_fu_202_p1);

assign tmp_74_fu_223_p1 = $signed(tmp_73_fu_218_p2);

assign tmp_75_fu_239_p1 = r_coeffs_q0[11:0];

assign tmp_76_fu_228_p1 = i_1_reg_116;

assign tmp_fu_155_p1 = k_reg_94;

assign tmp_s_fu_160_p2 = ($signed(10'd821) - $signed(k_reg_94));

always @ (posedge ap_clk) begin
    k_cast2_reg_266[10] <= 1'b0;
end

endmodule //poly_Rq_mul
