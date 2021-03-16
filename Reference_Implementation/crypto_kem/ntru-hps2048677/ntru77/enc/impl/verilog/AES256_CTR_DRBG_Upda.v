// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module AES256_CTR_DRBG_Upda (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        V_address0,
        V_ce0,
        V_we0,
        V_d0,
        V_q0,
        V_address1,
        V_ce1,
        V_q1,
        DRBG_ctx_Key_address0,
        DRBG_ctx_Key_ce0,
        DRBG_ctx_Key_we0,
        DRBG_ctx_Key_d0,
        DRBG_ctx_Key_q0,
        DRBG_ctx_Key_address1,
        DRBG_ctx_Key_ce1,
        DRBG_ctx_Key_q1
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
output  [3:0] V_address0;
output   V_ce0;
output   V_we0;
output  [7:0] V_d0;
input  [7:0] V_q0;
output  [3:0] V_address1;
output   V_ce1;
input  [7:0] V_q1;
output  [4:0] DRBG_ctx_Key_address0;
output   DRBG_ctx_Key_ce0;
output   DRBG_ctx_Key_we0;
output  [7:0] DRBG_ctx_Key_d0;
input  [7:0] DRBG_ctx_Key_q0;
output  [4:0] DRBG_ctx_Key_address1;
output   DRBG_ctx_Key_ce1;
input  [7:0] DRBG_ctx_Key_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] V_address0;
reg V_ce0;
reg V_we0;
reg[7:0] V_d0;
reg V_ce1;
reg[4:0] DRBG_ctx_Key_address0;
reg DRBG_ctx_Key_ce0;
reg DRBG_ctx_Key_we0;
reg DRBG_ctx_Key_ce1;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [1:0] i_28_fu_191_p2;
reg   [1:0] i_28_reg_292;
wire    ap_CS_fsm_state2;
reg   [3:0] V_addr_reg_300;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_fu_201_p3;
wire   [4:0] j_7_fu_220_p2;
wire    ap_CS_fsm_state4;
wire   [0:0] tmp_456_fu_214_p2;
wire   [5:0] tmp_461_fu_233_p3;
reg   [5:0] tmp_461_reg_313;
wire    ap_CS_fsm_state5;
wire   [5:0] i_7_fu_248_p2;
reg   [5:0] i_7_reg_321;
wire    ap_CS_fsm_state7;
wire   [63:0] tmp_s_fu_254_p1;
reg   [63:0] tmp_s_reg_326;
wire   [0:0] exitcond1_fu_242_p2;
wire   [4:0] i_8_fu_265_p2;
reg   [4:0] i_8_reg_339;
wire    ap_CS_fsm_state9;
wire   [0:0] exitcond_fu_259_p2;
reg   [5:0] temp_address0;
reg    temp_ce0;
reg    temp_we0;
wire   [7:0] temp_q0;
reg    temp_ce1;
reg    temp_we1;
wire    grp_AES256_ECB_fu_171_ap_start;
wire    grp_AES256_ECB_fu_171_ap_done;
wire    grp_AES256_ECB_fu_171_ap_idle;
wire    grp_AES256_ECB_fu_171_ap_ready;
wire   [4:0] grp_AES256_ECB_fu_171_key_address0;
wire    grp_AES256_ECB_fu_171_key_ce0;
wire   [4:0] grp_AES256_ECB_fu_171_key_address1;
wire    grp_AES256_ECB_fu_171_key_ce1;
wire   [3:0] grp_AES256_ECB_fu_171_ctr_address0;
wire    grp_AES256_ECB_fu_171_ctr_ce0;
wire   [3:0] grp_AES256_ECB_fu_171_ctr_address1;
wire    grp_AES256_ECB_fu_171_ctr_ce1;
wire   [5:0] grp_AES256_ECB_fu_171_buffer_r_address0;
wire    grp_AES256_ECB_fu_171_buffer_r_ce0;
wire    grp_AES256_ECB_fu_171_buffer_r_we0;
wire   [7:0] grp_AES256_ECB_fu_171_buffer_r_d0;
wire   [5:0] grp_AES256_ECB_fu_171_buffer_r_address1;
wire    grp_AES256_ECB_fu_171_buffer_r_ce1;
wire    grp_AES256_ECB_fu_171_buffer_r_we1;
wire   [7:0] grp_AES256_ECB_fu_171_buffer_r_d1;
reg   [1:0] i_reg_124;
wire    ap_CS_fsm_state6;
reg  signed [4:0] j_reg_136;
wire   [0:0] exitcond4_fu_185_p2;
reg   [5:0] i_2_reg_148;
wire    ap_CS_fsm_state8;
reg   [4:0] i_3_reg_159;
wire    ap_CS_fsm_state10;
reg    grp_AES256_ECB_fu_171_ap_start_reg;
wire   [63:0] tmp_455_fu_209_p1;
wire   [63:0] tmp_459_fu_279_p1;
wire   [63:0] tmp_460_fu_284_p1;
wire   [7:0] tmp_457_fu_226_p2;
wire  signed [31:0] j_cast_fu_197_p1;
wire   [5:0] tmp_458_fu_271_p3;
reg   [9:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
#0 grp_AES256_ECB_fu_171_ap_start_reg = 1'b0;
end

AES256_CTR_DRBG_Upda_temp #(
    .DataWidth( 8 ),
    .AddressRange( 48 ),
    .AddressWidth( 6 ))
temp_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(temp_address0),
    .ce0(temp_ce0),
    .we0(temp_we0),
    .d0(grp_AES256_ECB_fu_171_buffer_r_d0),
    .q0(temp_q0),
    .address1(grp_AES256_ECB_fu_171_buffer_r_address1),
    .ce1(temp_ce1),
    .we1(temp_we1),
    .d1(grp_AES256_ECB_fu_171_buffer_r_d1)
);

AES256_ECB grp_AES256_ECB_fu_171(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_AES256_ECB_fu_171_ap_start),
    .ap_done(grp_AES256_ECB_fu_171_ap_done),
    .ap_idle(grp_AES256_ECB_fu_171_ap_idle),
    .ap_ready(grp_AES256_ECB_fu_171_ap_ready),
    .key_address0(grp_AES256_ECB_fu_171_key_address0),
    .key_ce0(grp_AES256_ECB_fu_171_key_ce0),
    .key_q0(DRBG_ctx_Key_q0),
    .key_address1(grp_AES256_ECB_fu_171_key_address1),
    .key_ce1(grp_AES256_ECB_fu_171_key_ce1),
    .key_q1(DRBG_ctx_Key_q1),
    .ctr_address0(grp_AES256_ECB_fu_171_ctr_address0),
    .ctr_ce0(grp_AES256_ECB_fu_171_ctr_ce0),
    .ctr_q0(V_q0),
    .ctr_address1(grp_AES256_ECB_fu_171_ctr_address1),
    .ctr_ce1(grp_AES256_ECB_fu_171_ctr_ce1),
    .ctr_q1(V_q1),
    .buffer_r_address0(grp_AES256_ECB_fu_171_buffer_r_address0),
    .buffer_r_ce0(grp_AES256_ECB_fu_171_buffer_r_ce0),
    .buffer_r_we0(grp_AES256_ECB_fu_171_buffer_r_we0),
    .buffer_r_d0(grp_AES256_ECB_fu_171_buffer_r_d0),
    .buffer_r_address1(grp_AES256_ECB_fu_171_buffer_r_address1),
    .buffer_r_ce1(grp_AES256_ECB_fu_171_buffer_r_ce1),
    .buffer_r_we1(grp_AES256_ECB_fu_171_buffer_r_we1),
    .buffer_r_d1(grp_AES256_ECB_fu_171_buffer_r_d1),
    .buffer_offset(tmp_461_reg_313)
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
        grp_AES256_ECB_fu_171_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state5)) begin
            grp_AES256_ECB_fu_171_ap_start_reg <= 1'b1;
        end else if ((grp_AES256_ECB_fu_171_ap_ready == 1'b1)) begin
            grp_AES256_ECB_fu_171_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_185_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_2_reg_148 <= 6'd0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        i_2_reg_148 <= i_7_reg_321;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_242_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        i_3_reg_159 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        i_3_reg_159 <= i_8_reg_339;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (grp_AES256_ECB_fu_171_ap_done == 1'b1))) begin
        i_reg_124 <= i_28_reg_292;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_124 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_185_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_136 <= 5'd15;
    end else if (((tmp_456_fu_214_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_reg_136 <= j_7_fu_220_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_201_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        V_addr_reg_300 <= tmp_455_fu_209_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_28_reg_292 <= i_28_fu_191_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        i_7_reg_321 <= i_7_fu_248_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        i_8_reg_339 <= i_8_fu_265_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        tmp_461_reg_313[5 : 4] <= tmp_461_fu_233_p3[5 : 4];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_242_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        tmp_s_reg_326[5 : 0] <= tmp_s_fu_254_p1[5 : 0];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        DRBG_ctx_Key_address0 = tmp_s_reg_326;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_Key_address0 = grp_AES256_ECB_fu_171_key_address0;
    end else begin
        DRBG_ctx_Key_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        DRBG_ctx_Key_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_Key_ce0 = grp_AES256_ECB_fu_171_key_ce0;
    end else begin
        DRBG_ctx_Key_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_Key_ce1 = grp_AES256_ECB_fu_171_key_ce1;
    end else begin
        DRBG_ctx_Key_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        DRBG_ctx_Key_we0 = 1'b1;
    end else begin
        DRBG_ctx_Key_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        V_address0 = tmp_460_fu_284_p1;
    end else if ((((tmp_456_fu_214_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) | ((tmp_456_fu_214_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)))) begin
        V_address0 = V_addr_reg_300;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        V_address0 = tmp_455_fu_209_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        V_address0 = grp_AES256_ECB_fu_171_ctr_address0;
    end else begin
        V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state10) | ((tmp_456_fu_214_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) | ((tmp_456_fu_214_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)))) begin
        V_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        V_ce0 = grp_AES256_ECB_fu_171_ctr_ce0;
    end else begin
        V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        V_ce1 = grp_AES256_ECB_fu_171_ctr_ce1;
    end else begin
        V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        V_d0 = temp_q0;
    end else if (((tmp_456_fu_214_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        V_d0 = tmp_457_fu_226_p2;
    end else if (((tmp_456_fu_214_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        V_d0 = 8'd0;
    end else begin
        V_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | ((tmp_456_fu_214_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) | ((tmp_456_fu_214_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)))) begin
        V_we0 = 1'b1;
    end else begin
        V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_fu_259_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9)))) begin
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
    if (((exitcond_fu_259_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        temp_address0 = tmp_459_fu_279_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        temp_address0 = tmp_s_fu_254_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        temp_address0 = grp_AES256_ECB_fu_171_buffer_r_address0;
    end else begin
        temp_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state9))) begin
        temp_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        temp_ce0 = grp_AES256_ECB_fu_171_buffer_r_ce0;
    end else begin
        temp_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        temp_ce1 = grp_AES256_ECB_fu_171_buffer_r_ce1;
    end else begin
        temp_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        temp_we0 = grp_AES256_ECB_fu_171_buffer_r_we0;
    end else begin
        temp_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        temp_we1 = grp_AES256_ECB_fu_171_buffer_r_we1;
    end else begin
        temp_we1 = 1'b0;
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
            if (((exitcond4_fu_185_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_fu_201_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((tmp_456_fu_214_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (grp_AES256_ECB_fu_171_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((exitcond1_fu_242_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state9 : begin
            if (((exitcond_fu_259_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign DRBG_ctx_Key_address1 = grp_AES256_ECB_fu_171_key_address1;

assign DRBG_ctx_Key_d0 = temp_q0;

assign V_address1 = grp_AES256_ECB_fu_171_ctr_address1;

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

assign exitcond1_fu_242_p2 = ((i_2_reg_148 == 6'd32) ? 1'b1 : 1'b0);

assign exitcond4_fu_185_p2 = ((i_reg_124 == 2'd3) ? 1'b1 : 1'b0);

assign exitcond_fu_259_p2 = ((i_3_reg_159 == 5'd16) ? 1'b1 : 1'b0);

assign grp_AES256_ECB_fu_171_ap_start = grp_AES256_ECB_fu_171_ap_start_reg;

assign i_28_fu_191_p2 = (i_reg_124 + 2'd1);

assign i_7_fu_248_p2 = (i_2_reg_148 + 6'd1);

assign i_8_fu_265_p2 = (i_3_reg_159 + 5'd1);

assign j_7_fu_220_p2 = ($signed(j_reg_136) + $signed(5'd31));

assign j_cast_fu_197_p1 = j_reg_136;

assign tmp_455_fu_209_p1 = $unsigned(j_cast_fu_197_p1);

assign tmp_456_fu_214_p2 = ((V_q0 == 8'd255) ? 1'b1 : 1'b0);

assign tmp_457_fu_226_p2 = (V_q0 + 8'd1);

assign tmp_458_fu_271_p3 = {{1'd1}, {i_3_reg_159}};

assign tmp_459_fu_279_p1 = tmp_458_fu_271_p3;

assign tmp_460_fu_284_p1 = i_3_reg_159;

assign tmp_461_fu_233_p3 = {{i_reg_124}, {4'd0}};

assign tmp_fu_201_p3 = j_reg_136[32'd4];

assign tmp_s_fu_254_p1 = i_2_reg_148;

always @ (posedge ap_clk) begin
    tmp_461_reg_313[3:0] <= 4'b0000;
    tmp_s_reg_326[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
end

endmodule //AES256_CTR_DRBG_Upda
