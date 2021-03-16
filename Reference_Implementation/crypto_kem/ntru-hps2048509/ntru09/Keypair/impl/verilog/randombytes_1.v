// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module randombytes_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x_address0,
        x_ce0,
        x_we0,
        x_d0,
        DRBG_ctx_V_address0,
        DRBG_ctx_V_ce0,
        DRBG_ctx_V_we0,
        DRBG_ctx_V_d0,
        DRBG_ctx_V_q0,
        DRBG_ctx_V_address1,
        DRBG_ctx_V_ce1,
        DRBG_ctx_V_q1,
        DRBG_ctx_Key_address0,
        DRBG_ctx_Key_ce0,
        DRBG_ctx_Key_we0,
        DRBG_ctx_Key_d0,
        DRBG_ctx_Key_q0,
        DRBG_ctx_Key_address1,
        DRBG_ctx_Key_ce1,
        DRBG_ctx_Key_q1,
        DRBG_ctx_reseed_counter_i,
        DRBG_ctx_reseed_counter_o,
        DRBG_ctx_reseed_counter_o_ap_vld
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
output  [9:0] x_address0;
output   x_ce0;
output   x_we0;
output  [7:0] x_d0;
output  [3:0] DRBG_ctx_V_address0;
output   DRBG_ctx_V_ce0;
output   DRBG_ctx_V_we0;
output  [7:0] DRBG_ctx_V_d0;
input  [7:0] DRBG_ctx_V_q0;
output  [3:0] DRBG_ctx_V_address1;
output   DRBG_ctx_V_ce1;
input  [7:0] DRBG_ctx_V_q1;
output  [4:0] DRBG_ctx_Key_address0;
output   DRBG_ctx_Key_ce0;
output   DRBG_ctx_Key_we0;
output  [7:0] DRBG_ctx_Key_d0;
input  [7:0] DRBG_ctx_Key_q0;
output  [4:0] DRBG_ctx_Key_address1;
output   DRBG_ctx_Key_ce1;
input  [7:0] DRBG_ctx_Key_q1;
input  [31:0] DRBG_ctx_reseed_counter_i;
output  [31:0] DRBG_ctx_reseed_counter_o;
output   DRBG_ctx_reseed_counter_o_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] x_address0;
reg x_ce0;
reg x_we0;
reg[3:0] DRBG_ctx_V_address0;
reg DRBG_ctx_V_ce0;
reg DRBG_ctx_V_we0;
reg[7:0] DRBG_ctx_V_d0;
reg[3:0] DRBG_ctx_V_address1;
reg DRBG_ctx_V_ce1;
reg[4:0] DRBG_ctx_Key_address0;
reg DRBG_ctx_Key_ce0;
reg DRBG_ctx_Key_we0;
reg[4:0] DRBG_ctx_Key_address1;
reg DRBG_ctx_Key_ce1;
reg[31:0] DRBG_ctx_reseed_counter_o;
reg DRBG_ctx_reseed_counter_o_ap_vld;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [63:0] p_0_load_reg_405;
wire    ap_CS_fsm_state2;
reg   [3:0] DRBG_ctx_V_addr_reg_418;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_42_fu_224_p3;
wire   [4:0] j_1_fu_243_p2;
wire    ap_CS_fsm_state4;
wire   [0:0] tmp_39_fu_237_p2;
wire   [0:0] icmp_fu_265_p2;
reg   [0:0] icmp_reg_431;
wire    ap_CS_fsm_state6;
wire    grp_AES256_ECB_1_fu_185_ap_ready;
wire    grp_AES256_ECB_1_fu_185_ap_done;
wire   [10:0] tmp_47_fu_271_p1;
reg   [10:0] tmp_47_reg_435;
wire   [4:0] loop_1_fu_281_p2;
reg   [4:0] loop_1_reg_444;
wire    ap_CS_fsm_state7;
wire   [0:0] exitcond_fu_275_p2;
wire   [3:0] loop_2_fu_323_p2;
reg   [3:0] loop_2_reg_457;
wire   [0:0] tmp_43_fu_318_p2;
reg   [3:0] block_address0;
reg    block_ce0;
reg    block_we0;
wire   [7:0] block_q0;
reg    block_ce1;
reg    block_we1;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_ap_start;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_ap_done;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_ap_idle;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_ap_ready;
wire   [3:0] grp_AES256_CTR_DRBG_Upda_fu_173_V_address0;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_V_ce0;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_V_we0;
wire   [7:0] grp_AES256_CTR_DRBG_Upda_fu_173_V_d0;
wire   [3:0] grp_AES256_CTR_DRBG_Upda_fu_173_V_address1;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_V_ce1;
wire   [4:0] grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_address0;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_ce0;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_we0;
wire   [7:0] grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_d0;
wire   [4:0] grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_address1;
wire    grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_ce1;
wire    grp_AES256_ECB_1_fu_185_ap_start;
wire    grp_AES256_ECB_1_fu_185_ap_idle;
wire   [4:0] grp_AES256_ECB_1_fu_185_key_address0;
wire    grp_AES256_ECB_1_fu_185_key_ce0;
wire   [4:0] grp_AES256_ECB_1_fu_185_key_address1;
wire    grp_AES256_ECB_1_fu_185_key_ce1;
wire   [3:0] grp_AES256_ECB_1_fu_185_ctr_address0;
wire    grp_AES256_ECB_1_fu_185_ctr_ce0;
wire   [3:0] grp_AES256_ECB_1_fu_185_ctr_address1;
wire    grp_AES256_ECB_1_fu_185_ctr_ce1;
wire   [3:0] grp_AES256_ECB_1_fu_185_buffer_r_address0;
wire    grp_AES256_ECB_1_fu_185_buffer_r_ce0;
wire    grp_AES256_ECB_1_fu_185_buffer_r_we0;
wire   [7:0] grp_AES256_ECB_1_fu_185_buffer_r_d0;
wire   [3:0] grp_AES256_ECB_1_fu_185_buffer_r_address1;
wire    grp_AES256_ECB_1_fu_185_buffer_r_ce1;
wire    grp_AES256_ECB_1_fu_185_buffer_r_we1;
wire   [7:0] grp_AES256_ECB_1_fu_185_buffer_r_d1;
reg  signed [4:0] j_reg_137;
wire   [0:0] tmp_fu_214_p2;
reg   [4:0] loop_reg_149;
wire    ap_CS_fsm_state8;
reg   [3:0] loop1_reg_161;
wire    ap_CS_fsm_state9;
reg    grp_AES256_CTR_DRBG_Upda_fu_173_ap_start_reg;
wire    ap_CS_fsm_state10;
reg    grp_AES256_ECB_1_fu_185_ap_start_reg;
wire    ap_CS_fsm_state5;
wire   [63:0] tmp_38_fu_232_p1;
wire   [63:0] tmp_44_fu_287_p1;
wire   [63:0] tmp_41_fu_313_p1;
wire  signed [63:0] sum_cast_fu_349_p1;
wire  signed [63:0] sum2_cast_fu_369_p1;
reg   [63:0] p_0_fu_70;
wire   [63:0] xlen_assign_fu_298_p2;
reg   [31:0] i_fu_74;
wire   [31:0] i_8_fu_292_p2;
wire   [31:0] tmp_s_fu_378_p2;
wire   [7:0] tmp_40_fu_249_p2;
wire  signed [31:0] j_cast_fu_220_p1;
wire   [59:0] tmp_46_fu_256_p4;
wire   [10:0] tmp_36_fu_334_p1;
wire   [10:0] tmp_102_cast_fu_338_p2;
wire   [10:0] sum_fu_343_p2;
wire   [10:0] tmp_37_fu_354_p1;
wire   [10:0] tmp_104_cast_fu_358_p2;
wire   [10:0] sum2_fu_363_p2;
reg   [9:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
#0 grp_AES256_CTR_DRBG_Upda_fu_173_ap_start_reg = 1'b0;
#0 grp_AES256_ECB_1_fu_185_ap_start_reg = 1'b0;
end

randombytes_block #(
    .DataWidth( 8 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
block_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(block_address0),
    .ce0(block_ce0),
    .we0(block_we0),
    .d0(grp_AES256_ECB_1_fu_185_buffer_r_d0),
    .q0(block_q0),
    .address1(grp_AES256_ECB_1_fu_185_buffer_r_address1),
    .ce1(block_ce1),
    .we1(block_we1),
    .d1(grp_AES256_ECB_1_fu_185_buffer_r_d1)
);

AES256_CTR_DRBG_Upda grp_AES256_CTR_DRBG_Upda_fu_173(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_AES256_CTR_DRBG_Upda_fu_173_ap_start),
    .ap_done(grp_AES256_CTR_DRBG_Upda_fu_173_ap_done),
    .ap_idle(grp_AES256_CTR_DRBG_Upda_fu_173_ap_idle),
    .ap_ready(grp_AES256_CTR_DRBG_Upda_fu_173_ap_ready),
    .V_address0(grp_AES256_CTR_DRBG_Upda_fu_173_V_address0),
    .V_ce0(grp_AES256_CTR_DRBG_Upda_fu_173_V_ce0),
    .V_we0(grp_AES256_CTR_DRBG_Upda_fu_173_V_we0),
    .V_d0(grp_AES256_CTR_DRBG_Upda_fu_173_V_d0),
    .V_q0(DRBG_ctx_V_q0),
    .V_address1(grp_AES256_CTR_DRBG_Upda_fu_173_V_address1),
    .V_ce1(grp_AES256_CTR_DRBG_Upda_fu_173_V_ce1),
    .V_q1(DRBG_ctx_V_q1),
    .DRBG_ctx_Key_address0(grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_address0),
    .DRBG_ctx_Key_ce0(grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_ce0),
    .DRBG_ctx_Key_we0(grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_we0),
    .DRBG_ctx_Key_d0(grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_d0),
    .DRBG_ctx_Key_q0(DRBG_ctx_Key_q0),
    .DRBG_ctx_Key_address1(grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_address1),
    .DRBG_ctx_Key_ce1(grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_ce1),
    .DRBG_ctx_Key_q1(DRBG_ctx_Key_q1)
);

AES256_ECB_1 grp_AES256_ECB_1_fu_185(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_AES256_ECB_1_fu_185_ap_start),
    .ap_done(grp_AES256_ECB_1_fu_185_ap_done),
    .ap_idle(grp_AES256_ECB_1_fu_185_ap_idle),
    .ap_ready(grp_AES256_ECB_1_fu_185_ap_ready),
    .key_address0(grp_AES256_ECB_1_fu_185_key_address0),
    .key_ce0(grp_AES256_ECB_1_fu_185_key_ce0),
    .key_q0(DRBG_ctx_Key_q0),
    .key_address1(grp_AES256_ECB_1_fu_185_key_address1),
    .key_ce1(grp_AES256_ECB_1_fu_185_key_ce1),
    .key_q1(DRBG_ctx_Key_q1),
    .ctr_address0(grp_AES256_ECB_1_fu_185_ctr_address0),
    .ctr_ce0(grp_AES256_ECB_1_fu_185_ctr_ce0),
    .ctr_q0(DRBG_ctx_V_q0),
    .ctr_address1(grp_AES256_ECB_1_fu_185_ctr_address1),
    .ctr_ce1(grp_AES256_ECB_1_fu_185_ctr_ce1),
    .ctr_q1(DRBG_ctx_V_q1),
    .buffer_r_address0(grp_AES256_ECB_1_fu_185_buffer_r_address0),
    .buffer_r_ce0(grp_AES256_ECB_1_fu_185_buffer_r_ce0),
    .buffer_r_we0(grp_AES256_ECB_1_fu_185_buffer_r_we0),
    .buffer_r_d0(grp_AES256_ECB_1_fu_185_buffer_r_d0),
    .buffer_r_address1(grp_AES256_ECB_1_fu_185_buffer_r_address1),
    .buffer_r_ce1(grp_AES256_ECB_1_fu_185_buffer_r_ce1),
    .buffer_r_we1(grp_AES256_ECB_1_fu_185_buffer_r_we1),
    .buffer_r_d1(grp_AES256_ECB_1_fu_185_buffer_r_d1)
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
        grp_AES256_CTR_DRBG_Upda_fu_173_ap_start_reg <= 1'b0;
    end else begin
        if (((tmp_fu_214_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
            grp_AES256_CTR_DRBG_Upda_fu_173_ap_start_reg <= 1'b1;
        end else if ((grp_AES256_CTR_DRBG_Upda_fu_173_ap_ready == 1'b1)) begin
            grp_AES256_CTR_DRBG_Upda_fu_173_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_AES256_ECB_1_fu_185_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state5)) begin
            grp_AES256_ECB_1_fu_185_ap_start_reg <= 1'b1;
        end else if ((grp_AES256_ECB_1_fu_185_ap_ready == 1'b1)) begin
            grp_AES256_ECB_1_fu_185_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_275_p2 == 1'd1) & (icmp_reg_431 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        i_fu_74 <= i_8_fu_292_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_fu_74 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_214_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_137 <= 5'd15;
    end else if (((tmp_39_fu_237_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_reg_137 <= j_1_fu_243_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_AES256_ECB_1_fu_185_ap_done == 1'b1) & (icmp_fu_265_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        loop1_reg_161 <= 4'd0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        loop1_reg_161 <= loop_2_reg_457;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_AES256_ECB_1_fu_185_ap_done == 1'b1) & (icmp_fu_265_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        loop_reg_149 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        loop_reg_149 <= loop_1_reg_444;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_reg_431 == 1'd1) & (tmp_43_fu_318_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        p_0_fu_70 <= 64'd0;
    end else if (((exitcond_fu_275_p2 == 1'd1) & (icmp_reg_431 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        p_0_fu_70 <= xlen_assign_fu_298_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        p_0_fu_70 <= 64'd32;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_42_fu_224_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        DRBG_ctx_V_addr_reg_418 <= tmp_38_fu_232_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_AES256_ECB_1_fu_185_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
        icmp_reg_431 <= icmp_fu_265_p2;
        tmp_47_reg_435 <= tmp_47_fu_271_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_reg_431 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        loop_1_reg_444 <= loop_1_fu_281_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_reg_431 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        loop_2_reg_457 <= loop_2_fu_323_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        p_0_load_reg_405 <= p_0_fu_70;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_Key_address0 = grp_AES256_ECB_1_fu_185_key_address0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_Key_address0 = grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_address0;
    end else begin
        DRBG_ctx_Key_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_Key_address1 = grp_AES256_ECB_1_fu_185_key_address1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_Key_address1 = grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_address1;
    end else begin
        DRBG_ctx_Key_address1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_Key_ce0 = grp_AES256_ECB_1_fu_185_key_ce0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_Key_ce0 = grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_ce0;
    end else begin
        DRBG_ctx_Key_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_Key_ce1 = grp_AES256_ECB_1_fu_185_key_ce1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_Key_ce1 = grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_ce1;
    end else begin
        DRBG_ctx_Key_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_Key_we0 = grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_we0;
    end else begin
        DRBG_ctx_Key_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((((tmp_39_fu_237_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) | ((tmp_39_fu_237_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)))) begin
        DRBG_ctx_V_address0 = DRBG_ctx_V_addr_reg_418;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        DRBG_ctx_V_address0 = tmp_38_fu_232_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_V_address0 = grp_AES256_ECB_1_fu_185_ctr_address0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_V_address0 = grp_AES256_CTR_DRBG_Upda_fu_173_V_address0;
    end else begin
        DRBG_ctx_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_V_address1 = grp_AES256_ECB_1_fu_185_ctr_address1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_V_address1 = grp_AES256_CTR_DRBG_Upda_fu_173_V_address1;
    end else begin
        DRBG_ctx_V_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | ((tmp_39_fu_237_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) | ((tmp_39_fu_237_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)))) begin
        DRBG_ctx_V_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_V_ce0 = grp_AES256_ECB_1_fu_185_ctr_ce0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_V_ce0 = grp_AES256_CTR_DRBG_Upda_fu_173_V_ce0;
    end else begin
        DRBG_ctx_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        DRBG_ctx_V_ce1 = grp_AES256_ECB_1_fu_185_ctr_ce1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_V_ce1 = grp_AES256_CTR_DRBG_Upda_fu_173_V_ce1;
    end else begin
        DRBG_ctx_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_39_fu_237_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        DRBG_ctx_V_d0 = tmp_40_fu_249_p2;
    end else if (((tmp_39_fu_237_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        DRBG_ctx_V_d0 = 8'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_V_d0 = grp_AES256_CTR_DRBG_Upda_fu_173_V_d0;
    end else begin
        DRBG_ctx_V_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((tmp_39_fu_237_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) | ((tmp_39_fu_237_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4)))) begin
        DRBG_ctx_V_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        DRBG_ctx_V_we0 = grp_AES256_CTR_DRBG_Upda_fu_173_V_we0;
    end else begin
        DRBG_ctx_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) & (grp_AES256_CTR_DRBG_Upda_fu_173_ap_done == 1'b1))) begin
        DRBG_ctx_reseed_counter_o = tmp_s_fu_378_p2;
    end else begin
        DRBG_ctx_reseed_counter_o = DRBG_ctx_reseed_counter_i;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) & (grp_AES256_CTR_DRBG_Upda_fu_173_ap_done == 1'b1))) begin
        DRBG_ctx_reseed_counter_o_ap_vld = 1'b1;
    end else begin
        DRBG_ctx_reseed_counter_o_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state10) & (grp_AES256_CTR_DRBG_Upda_fu_173_ap_done == 1'b1)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state10) & (grp_AES256_CTR_DRBG_Upda_fu_173_ap_done == 1'b1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_reg_431 == 1'd1) & (tmp_43_fu_318_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        block_address0 = tmp_41_fu_313_p1;
    end else if (((icmp_reg_431 == 1'd0) & (exitcond_fu_275_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        block_address0 = tmp_44_fu_287_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        block_address0 = grp_AES256_ECB_1_fu_185_buffer_r_address0;
    end else begin
        block_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_reg_431 == 1'd1) & (tmp_43_fu_318_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7)) | ((icmp_reg_431 == 1'd0) & (exitcond_fu_275_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7)))) begin
        block_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        block_ce0 = grp_AES256_ECB_1_fu_185_buffer_r_ce0;
    end else begin
        block_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        block_ce1 = grp_AES256_ECB_1_fu_185_buffer_r_ce1;
    end else begin
        block_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        block_we0 = grp_AES256_ECB_1_fu_185_buffer_r_we0;
    end else begin
        block_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        block_we1 = grp_AES256_ECB_1_fu_185_buffer_r_we1;
    end else begin
        block_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        x_address0 = sum2_cast_fu_369_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        x_address0 = sum_cast_fu_349_p1;
    end else begin
        x_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8))) begin
        x_ce0 = 1'b1;
    end else begin
        x_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8))) begin
        x_we0 = 1'b1;
    end else begin
        x_we0 = 1'b0;
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
            if (((tmp_fu_214_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_42_fu_224_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((tmp_39_fu_237_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            if (((grp_AES256_ECB_1_fu_185_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((1'b1 == ap_CS_fsm_state7) & (((icmp_reg_431 == 1'd1) & (tmp_43_fu_318_p2 == 1'd0)) | ((exitcond_fu_275_p2 == 1'd1) & (icmp_reg_431 == 1'd0))))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else if (((icmp_reg_431 == 1'd1) & (tmp_43_fu_318_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state10 : begin
            if (((1'b1 == ap_CS_fsm_state10) & (grp_AES256_CTR_DRBG_Upda_fu_173_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign DRBG_ctx_Key_d0 = grp_AES256_CTR_DRBG_Upda_fu_173_DRBG_ctx_Key_d0;

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

assign exitcond_fu_275_p2 = ((loop_reg_149 == 5'd16) ? 1'b1 : 1'b0);

assign grp_AES256_CTR_DRBG_Upda_fu_173_ap_start = grp_AES256_CTR_DRBG_Upda_fu_173_ap_start_reg;

assign grp_AES256_ECB_1_fu_185_ap_start = grp_AES256_ECB_1_fu_185_ap_start_reg;

assign i_8_fu_292_p2 = (i_fu_74 + 32'd16);

assign icmp_fu_265_p2 = ((tmp_46_fu_256_p4 == 60'd0) ? 1'b1 : 1'b0);

assign j_1_fu_243_p2 = ($signed(j_reg_137) + $signed(5'd31));

assign j_cast_fu_220_p1 = j_reg_137;

assign loop_1_fu_281_p2 = (loop_reg_149 + 5'd1);

assign loop_2_fu_323_p2 = (loop1_reg_161 + 4'd1);

assign sum2_cast_fu_369_p1 = $signed(sum2_fu_363_p2);

assign sum2_fu_363_p2 = (tmp_104_cast_fu_358_p2 + 11'd903);

assign sum_cast_fu_349_p1 = $signed(sum_fu_343_p2);

assign sum_fu_343_p2 = (tmp_102_cast_fu_338_p2 + 11'd903);

assign tmp_102_cast_fu_338_p2 = (tmp_47_reg_435 + tmp_36_fu_334_p1);

assign tmp_104_cast_fu_358_p2 = (tmp_37_fu_354_p1 + tmp_47_reg_435);

assign tmp_36_fu_334_p1 = loop_reg_149;

assign tmp_37_fu_354_p1 = loop1_reg_161;

assign tmp_38_fu_232_p1 = $unsigned(j_cast_fu_220_p1);

assign tmp_39_fu_237_p2 = ((DRBG_ctx_V_q0 == 8'd255) ? 1'b1 : 1'b0);

assign tmp_40_fu_249_p2 = (DRBG_ctx_V_q0 + 8'd1);

assign tmp_41_fu_313_p1 = loop1_reg_161;

assign tmp_42_fu_224_p3 = j_reg_137[32'd4];

assign tmp_43_fu_318_p2 = ((tmp_41_fu_313_p1 < p_0_load_reg_405) ? 1'b1 : 1'b0);

assign tmp_44_fu_287_p1 = loop_reg_149;

assign tmp_46_fu_256_p4 = {{p_0_load_reg_405[63:4]}};

assign tmp_47_fu_271_p1 = i_fu_74[10:0];

assign tmp_fu_214_p2 = ((p_0_fu_70 == 64'd0) ? 1'b1 : 1'b0);

assign tmp_s_fu_378_p2 = (DRBG_ctx_reseed_counter_i + 32'd1);

assign x_d0 = block_q0;

assign xlen_assign_fu_298_p2 = ($signed(p_0_load_reg_405) + $signed(64'd18446744073709551600));

endmodule //randombytes_1
