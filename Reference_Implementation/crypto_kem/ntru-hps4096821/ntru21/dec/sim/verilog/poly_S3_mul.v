// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_S3_mul (
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
        a_coeffs_q0,
        b_coeffs_address0,
        b_coeffs_ce0,
        b_coeffs_q0
);

parameter    ap_ST_fsm_state1 = 11'd1;
parameter    ap_ST_fsm_state2 = 11'd2;
parameter    ap_ST_fsm_state3 = 11'd4;
parameter    ap_ST_fsm_state4 = 11'd8;
parameter    ap_ST_fsm_state5 = 11'd16;
parameter    ap_ST_fsm_state6 = 11'd32;
parameter    ap_ST_fsm_state7 = 11'd64;
parameter    ap_ST_fsm_state8 = 11'd128;
parameter    ap_ST_fsm_state9 = 11'd256;
parameter    ap_ST_fsm_state10 = 11'd512;
parameter    ap_ST_fsm_state11 = 11'd1024;

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
reg[9:0] r_coeffs_address1;
reg r_coeffs_ce1;
reg r_coeffs_we1;
reg[9:0] a_coeffs_address0;
reg a_coeffs_ce0;
reg[9:0] b_coeffs_address0;
reg b_coeffs_ce0;

(* fsm_encoding = "none" *) reg   [10:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg  signed [15:0] reg_210;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state7;
reg  signed [15:0] reg_214;
reg   [15:0] reg_218;
wire   [10:0] k_cast5_fu_222_p1;
reg   [10:0] k_cast5_reg_656;
wire    ap_CS_fsm_state2;
wire   [9:0] k_3_fu_232_p2;
reg   [9:0] k_3_reg_665;
reg   [9:0] r_coeffs_addr_1_reg_670;
wire   [0:0] exitcond2_fu_226_p2;
wire   [9:0] tmp_s_fu_243_p2;
reg   [9:0] tmp_s_reg_675;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_15_fu_253_p2;
wire   [9:0] i_5_fu_279_p2;
reg   [9:0] i_5_reg_698;
wire   [9:0] i_6_fu_295_p2;
reg   [9:0] i_6_reg_706;
wire    ap_CS_fsm_state6;
wire   [0:0] exitcond1_fu_289_p2;
wire   [9:0] indvars_iv_next_fu_316_p2;
wire   [9:0] k_2_fu_328_p2;
reg   [9:0] k_2_reg_729;
wire    ap_CS_fsm_state9;
reg   [9:0] r_coeffs_addr_2_reg_734;
wire   [0:0] exitcond_fu_322_p2;
reg   [3:0] tmp_123_i_cast_reg_740;
wire    ap_CS_fsm_state10;
wire   [1:0] fold1_i_cast_fu_523_p2;
reg   [1:0] fold1_i_cast_reg_745;
reg   [1:0] tmp_13_reg_751;
reg   [9:0] indvars_iv_reg_154;
reg   [9:0] k_reg_166;
reg   [9:0] i_reg_177;
wire    ap_CS_fsm_state5;
reg   [9:0] i_1_reg_188;
wire    ap_CS_fsm_state8;
reg   [9:0] k_1_reg_199;
wire    ap_CS_fsm_state11;
wire   [63:0] tmp_fu_238_p1;
wire   [63:0] tmp_21_fu_263_p1;
wire   [63:0] tmp_23_fu_274_p1;
wire  signed [63:0] tmp_27_fu_306_p1;
wire   [63:0] tmp_28_fu_311_p1;
wire   [63:0] tmp_16_fu_334_p1;
wire  signed [15:0] grp_fu_638_p3;
wire  signed [15:0] grp_fu_647_p3;
wire   [10:0] i_cast_fu_249_p1;
wire   [10:0] tmp_20_fu_258_p2;
wire   [9:0] tmp_22_fu_268_p2;
wire   [10:0] i_1_cast_fu_285_p1;
wire   [10:0] tmp_26_fu_301_p2;
wire   [6:0] tmp_32_fu_345_p1;
wire   [2:0] tmp_39_fu_365_p1;
wire   [0:0] tmp_40_fu_377_p1;
wire   [15:0] tmp_31_fu_339_p2;
wire   [7:0] tmp_1_fu_349_p3;
wire   [7:0] tmp_33_fu_357_p1;
wire   [15:0] a_assign_fu_393_p2;
wire   [7:0] tmp_17_fu_405_p4;
wire   [7:0] a_assign_cast_fu_399_p2;
wire   [8:0] tmp_i_cast_fu_415_p1;
wire   [8:0] tmp_i_cast_30_fu_419_p1;
wire   [8:0] r_fu_429_p2;
wire   [4:0] tmp_19_fu_435_p4;
wire   [3:0] tmp_4_fu_369_p3;
wire   [3:0] tmp_34_fu_361_p1;
wire   [1:0] tmp_5_fu_381_p3;
wire   [1:0] tmp_41_fu_389_p1;
wire   [3:0] tmp_7_fu_449_p2;
wire   [3:0] tmp_8_fu_455_p4;
wire   [3:0] fold_i_cast_fu_481_p2;
wire   [5:0] tmp_121_i_cast_fu_445_p1;
wire   [5:0] tmp_122_i_cast_fu_487_p1;
wire   [5:0] r_1_fu_491_p2;
wire   [1:0] tmp_10_fu_475_p2;
wire   [1:0] tmp_9_fu_465_p4;
wire   [7:0] tmp_18_fu_423_p2;
wire   [1:0] tmp_11_fu_507_p2;
wire   [1:0] tmp_12_fu_513_p4;
wire   [3:0] tmp_124_i_cast_fu_539_p1;
wire   [3:0] r_2_fu_542_p2;
wire   [1:0] tmp_35_fu_547_p4;
wire   [1:0] fold2_i_cast_fu_561_p2;
wire   [2:0] tmp_125_i_cast_fu_557_p1;
wire   [2:0] tmp_126_i_cast_fu_565_p1;
wire   [2:0] r_3_fu_569_p2;
wire   [2:0] t_fu_575_p2;
wire   [0:0] tmp_42_fu_581_p3;
wire   [2:0] c_cast_fu_589_p3;
wire   [2:0] tmp_127_i_fu_597_p2;
wire   [0:0] not_tmp_17_i_fu_607_p2;
wire   [2:0] tmp_128_i_cast_cast_fu_613_p3;
wire   [2:0] tmp_129_i_fu_621_p2;
wire   [15:0] tmp_127_i_cast_fu_603_p1;
wire  signed [15:0] tmp_129_i_cast_fu_627_p1;
reg   [10:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 11'd1;
end

crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U15(
    .din0(reg_210),
    .din1(reg_214),
    .din2(reg_218),
    .dout(grp_fu_638_p3)
);

crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U16(
    .din0(reg_210),
    .din1(reg_214),
    .din2(reg_218),
    .dout(grp_fu_647_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_15_fu_253_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_1_reg_188 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        i_1_reg_188 <= i_6_reg_706;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_reg_177 <= i_5_reg_698;
    end else if (((exitcond2_fu_226_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_177 <= 10'd1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvars_iv_reg_154 <= 10'd1;
    end else if (((exitcond1_fu_289_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        indvars_iv_reg_154 <= indvars_iv_next_fu_316_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_226_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        k_1_reg_199 <= 10'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        k_1_reg_199 <= k_2_reg_729;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        k_reg_166 <= 10'd0;
    end else if (((exitcond1_fu_289_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        k_reg_166 <= k_3_reg_665;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        fold1_i_cast_reg_745 <= fold1_i_cast_fu_523_p2;
        tmp_123_i_cast_reg_740 <= {{r_1_fu_491_p2[5:2]}};
        tmp_13_reg_751 <= {{r_1_fu_491_p2[3:2]}};
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_15_fu_253_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_5_reg_698 <= i_5_fu_279_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_6_reg_706 <= i_6_fu_295_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        k_2_reg_729 <= k_2_fu_328_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        k_3_reg_665 <= k_3_fu_232_p2;
        k_cast5_reg_656[9 : 0] <= k_cast5_fu_222_p1[9 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_226_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        r_coeffs_addr_1_reg_670 <= tmp_fu_238_p1;
        tmp_s_reg_675 <= tmp_s_fu_243_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_322_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
        r_coeffs_addr_2_reg_734 <= tmp_16_fu_334_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state4))) begin
        reg_210 <= a_coeffs_q0;
        reg_214 <= b_coeffs_q0;
        reg_218 <= r_coeffs_q0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        a_coeffs_address0 = tmp_27_fu_306_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        a_coeffs_address0 = tmp_21_fu_263_p1;
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
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_fu_322_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9)))) begin
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
    if (((exitcond_fu_322_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        b_coeffs_address0 = tmp_28_fu_311_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        b_coeffs_address0 = tmp_23_fu_274_p1;
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
    if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_address0 = tmp_16_fu_334_p1;
    end else if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state6))) begin
        r_coeffs_address0 = r_coeffs_addr_1_reg_670;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_address0 = tmp_fu_238_p1;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        r_coeffs_address1 = r_coeffs_addr_2_reg_734;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        r_coeffs_address1 = 64'd820;
    end else begin
        r_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state6))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state9))) begin
        r_coeffs_ce1 = 1'b1;
    end else begin
        r_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        r_coeffs_d0 = grp_fu_647_p3;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d0 = grp_fu_638_p3;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_d0 = 16'd0;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state5) | ((exitcond2_fu_226_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        r_coeffs_we0 = 1'b1;
    end else begin
        r_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
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
            if (((exitcond2_fu_226_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_15_fu_253_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
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
            if (((exitcond1_fu_289_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
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
            if (((exitcond_fu_322_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_cast_fu_399_p2 = (tmp_1_fu_349_p3 + tmp_33_fu_357_p1);

assign a_assign_fu_393_p2 = (r_coeffs_q0 + tmp_31_fu_339_p2);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign c_cast_fu_589_p3 = ((tmp_42_fu_581_p3[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign exitcond1_fu_289_p2 = ((i_1_reg_188 == indvars_iv_reg_154) ? 1'b1 : 1'b0);

assign exitcond2_fu_226_p2 = ((indvars_iv_reg_154 == 10'd822) ? 1'b1 : 1'b0);

assign exitcond_fu_322_p2 = ((k_1_reg_199 == 10'd821) ? 1'b1 : 1'b0);

assign fold1_i_cast_fu_523_p2 = (tmp_11_fu_507_p2 + tmp_12_fu_513_p4);

assign fold2_i_cast_fu_561_p2 = (tmp_13_reg_751 + fold1_i_cast_reg_745);

assign fold_i_cast_fu_481_p2 = (tmp_7_fu_449_p2 + tmp_8_fu_455_p4);

assign i_1_cast_fu_285_p1 = i_1_reg_188;

assign i_5_fu_279_p2 = (i_reg_177 + 10'd1);

assign i_6_fu_295_p2 = (i_1_reg_188 + 10'd1);

assign i_cast_fu_249_p1 = i_reg_177;

assign indvars_iv_next_fu_316_p2 = (indvars_iv_reg_154 + 10'd1);

assign k_2_fu_328_p2 = (k_1_reg_199 + 10'd1);

assign k_3_fu_232_p2 = (k_reg_166 + 10'd1);

assign k_cast5_fu_222_p1 = k_reg_166;

assign not_tmp_17_i_fu_607_p2 = (tmp_42_fu_581_p3 ^ 1'd1);

assign r_1_fu_491_p2 = (tmp_121_i_cast_fu_445_p1 + tmp_122_i_cast_fu_487_p1);

assign r_2_fu_542_p2 = (tmp_123_i_cast_reg_740 + tmp_124_i_cast_fu_539_p1);

assign r_3_fu_569_p2 = (tmp_125_i_cast_fu_557_p1 + tmp_126_i_cast_fu_565_p1);

assign r_coeffs_d1 = (tmp_129_i_cast_fu_627_p1 ^ tmp_127_i_cast_fu_603_p1);

assign r_fu_429_p2 = (tmp_i_cast_fu_415_p1 + tmp_i_cast_30_fu_419_p1);

assign t_fu_575_p2 = ($signed(3'd5) + $signed(r_3_fu_569_p2));

assign tmp_10_fu_475_p2 = (tmp_5_fu_381_p3 + tmp_41_fu_389_p1);

assign tmp_11_fu_507_p2 = (tmp_10_fu_475_p2 + tmp_9_fu_465_p4);

assign tmp_121_i_cast_fu_445_p1 = tmp_19_fu_435_p4;

assign tmp_122_i_cast_fu_487_p1 = fold_i_cast_fu_481_p2;

assign tmp_124_i_cast_fu_539_p1 = fold1_i_cast_reg_745;

assign tmp_125_i_cast_fu_557_p1 = tmp_35_fu_547_p4;

assign tmp_126_i_cast_fu_565_p1 = fold2_i_cast_fu_561_p2;

assign tmp_127_i_cast_fu_603_p1 = tmp_127_i_fu_597_p2;

assign tmp_127_i_fu_597_p2 = (r_3_fu_569_p2 & c_cast_fu_589_p3);

assign tmp_128_i_cast_cast_fu_613_p3 = ((not_tmp_17_i_fu_607_p2[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign tmp_129_i_cast_fu_627_p1 = $signed(tmp_129_i_fu_621_p2);

assign tmp_129_i_fu_621_p2 = (tmp_128_i_cast_cast_fu_613_p3 & t_fu_575_p2);

assign tmp_12_fu_513_p4 = {{tmp_18_fu_423_p2[5:4]}};

assign tmp_15_fu_253_p2 = ((i_reg_177 < tmp_s_reg_675) ? 1'b1 : 1'b0);

assign tmp_16_fu_334_p1 = k_1_reg_199;

assign tmp_17_fu_405_p4 = {{a_assign_fu_393_p2[15:8]}};

assign tmp_18_fu_423_p2 = (a_assign_cast_fu_399_p2 + tmp_17_fu_405_p4);

assign tmp_19_fu_435_p4 = {{r_fu_429_p2[8:4]}};

assign tmp_1_fu_349_p3 = {{tmp_32_fu_345_p1}, {1'd0}};

assign tmp_20_fu_258_p2 = (k_cast5_reg_656 + i_cast_fu_249_p1);

assign tmp_21_fu_263_p1 = tmp_20_fu_258_p2;

assign tmp_22_fu_268_p2 = ($signed(10'd821) - $signed(i_reg_177));

assign tmp_23_fu_274_p1 = tmp_22_fu_268_p2;

assign tmp_26_fu_301_p2 = (k_cast5_reg_656 - i_1_cast_fu_285_p1);

assign tmp_27_fu_306_p1 = $signed(tmp_26_fu_301_p2);

assign tmp_28_fu_311_p1 = i_1_reg_188;

assign tmp_31_fu_339_p2 = r_coeffs_q1 << 16'd1;

assign tmp_32_fu_345_p1 = r_coeffs_q1[6:0];

assign tmp_33_fu_357_p1 = r_coeffs_q0[7:0];

assign tmp_34_fu_361_p1 = r_coeffs_q0[3:0];

assign tmp_35_fu_547_p4 = {{r_2_fu_542_p2[3:2]}};

assign tmp_39_fu_365_p1 = r_coeffs_q1[2:0];

assign tmp_40_fu_377_p1 = r_coeffs_q1[0:0];

assign tmp_41_fu_389_p1 = r_coeffs_q0[1:0];

assign tmp_42_fu_581_p3 = t_fu_575_p2[32'd2];

assign tmp_4_fu_369_p3 = {{tmp_39_fu_365_p1}, {1'd0}};

assign tmp_5_fu_381_p3 = {{tmp_40_fu_377_p1}, {1'd0}};

assign tmp_7_fu_449_p2 = (tmp_4_fu_369_p3 + tmp_34_fu_361_p1);

assign tmp_8_fu_455_p4 = {{a_assign_fu_393_p2[11:8]}};

assign tmp_9_fu_465_p4 = {{a_assign_fu_393_p2[9:8]}};

assign tmp_fu_238_p1 = k_reg_166;

assign tmp_i_cast_30_fu_419_p1 = a_assign_cast_fu_399_p2;

assign tmp_i_cast_fu_415_p1 = tmp_17_fu_405_p4;

assign tmp_s_fu_243_p2 = ($signed(10'd821) - $signed(k_reg_166));

always @ (posedge ap_clk) begin
    k_cast5_reg_656[10] <= 1'b0;
end

endmodule //poly_S3_mul
