// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module sha3_256_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0,
        input_r_address0,
        input_r_ce0,
        input_r_q0
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
output  [4:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [7:0] output_r_d0;
output  [7:0] input_r_address0;
output   input_r_ce0;
input  [7:0] input_r_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg output_r_ce0;
reg output_r_we0;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] i_20_i_fu_169_p2;
reg   [4:0] i_20_i_reg_253;
wire    ap_CS_fsm_state5;
wire   [0:0] exitcond_i_fu_163_p2;
wire   [7:0] tmp_i_fu_180_p3;
reg   [7:0] tmp_i_reg_263;
wire    ap_CS_fsm_state6;
wire   [63:0] s_q0;
wire   [3:0] i_2_fu_194_p2;
wire    ap_CS_fsm_state7;
wire   [63:0] tmp_1_fu_229_p1;
wire   [0:0] tmp_i_i_fu_188_p2;
wire   [63:0] i_cast1_fu_233_p1;
reg   [63:0] i_cast1_reg_286;
wire    ap_CS_fsm_state8;
wire   [5:0] i_1_fu_244_p2;
reg   [5:0] i_1_reg_294;
wire   [0:0] tmp_fu_238_p2;
reg   [4:0] s_address0;
reg    s_ce0;
reg    s_we0;
reg   [63:0] s_d0;
reg   [4:0] s_address1;
reg    s_ce1;
reg    s_we1;
reg   [63:0] s_d1;
wire   [63:0] s_q1;
reg   [7:0] h_assign_address0;
reg    h_assign_ce0;
reg    h_assign_we0;
wire   [7:0] h_assign_d0;
wire   [7:0] h_assign_q0;
wire    grp_keccak_absorb_fu_146_ap_start;
wire    grp_keccak_absorb_fu_146_ap_done;
wire    grp_keccak_absorb_fu_146_ap_idle;
wire    grp_keccak_absorb_fu_146_ap_ready;
wire   [4:0] grp_keccak_absorb_fu_146_s_address0;
wire    grp_keccak_absorb_fu_146_s_ce0;
wire    grp_keccak_absorb_fu_146_s_we0;
wire   [63:0] grp_keccak_absorb_fu_146_s_d0;
wire   [4:0] grp_keccak_absorb_fu_146_s_address1;
wire    grp_keccak_absorb_fu_146_s_ce1;
wire    grp_keccak_absorb_fu_146_s_we1;
wire   [63:0] grp_keccak_absorb_fu_146_s_d1;
wire   [7:0] grp_keccak_absorb_fu_146_m_address0;
wire    grp_keccak_absorb_fu_146_m_ce0;
wire    grp_KeccakF1600_StatePer_fu_156_ap_start;
wire    grp_KeccakF1600_StatePer_fu_156_ap_done;
wire    grp_KeccakF1600_StatePer_fu_156_ap_idle;
wire    grp_KeccakF1600_StatePer_fu_156_ap_ready;
wire   [4:0] grp_KeccakF1600_StatePer_fu_156_state_address0;
wire    grp_KeccakF1600_StatePer_fu_156_state_ce0;
wire    grp_KeccakF1600_StatePer_fu_156_state_we0;
wire   [63:0] grp_KeccakF1600_StatePer_fu_156_state_d0;
wire   [4:0] grp_KeccakF1600_StatePer_fu_156_state_address1;
wire    grp_KeccakF1600_StatePer_fu_156_state_ce1;
wire    grp_KeccakF1600_StatePer_fu_156_state_we1;
wire   [63:0] grp_KeccakF1600_StatePer_fu_156_state_d1;
reg   [4:0] i_i_reg_103;
wire    ap_CS_fsm_state4;
reg   [63:0] p_0_i_i_reg_115;
reg   [3:0] i_i_i_reg_124;
reg   [5:0] i_reg_135;
wire    ap_CS_fsm_state9;
reg    grp_keccak_absorb_fu_146_ap_start_reg;
wire    ap_CS_fsm_state2;
reg    grp_KeccakF1600_StatePer_fu_156_ap_start_reg;
wire    ap_CS_fsm_state3;
wire   [63:0] tmp_248_i_fu_175_p1;
wire   [63:0] sum_i_i_cast_fu_214_p1;
wire   [7:0] tmp_2_i_i_cast_fu_205_p1;
wire   [7:0] sum_i_i_fu_209_p2;
wire   [55:0] u_assign_1_fu_219_p4;
reg   [8:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
#0 grp_keccak_absorb_fu_146_ap_start_reg = 1'b0;
#0 grp_KeccakF1600_StatePer_fu_156_ap_start_reg = 1'b0;
end

sha3_256_1_s #(
    .DataWidth( 64 ),
    .AddressRange( 25 ),
    .AddressWidth( 5 ))
s_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(s_address0),
    .ce0(s_ce0),
    .we0(s_we0),
    .d0(s_d0),
    .q0(s_q0),
    .address1(s_address1),
    .ce1(s_ce1),
    .we1(s_we1),
    .d1(s_d1),
    .q1(s_q1)
);

sha3_256_1_h_assign #(
    .DataWidth( 8 ),
    .AddressRange( 136 ),
    .AddressWidth( 8 ))
h_assign_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(h_assign_address0),
    .ce0(h_assign_ce0),
    .we0(h_assign_we0),
    .d0(h_assign_d0),
    .q0(h_assign_q0)
);

keccak_absorb grp_keccak_absorb_fu_146(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_keccak_absorb_fu_146_ap_start),
    .ap_done(grp_keccak_absorb_fu_146_ap_done),
    .ap_idle(grp_keccak_absorb_fu_146_ap_idle),
    .ap_ready(grp_keccak_absorb_fu_146_ap_ready),
    .s_address0(grp_keccak_absorb_fu_146_s_address0),
    .s_ce0(grp_keccak_absorb_fu_146_s_ce0),
    .s_we0(grp_keccak_absorb_fu_146_s_we0),
    .s_d0(grp_keccak_absorb_fu_146_s_d0),
    .s_q0(s_q0),
    .s_address1(grp_keccak_absorb_fu_146_s_address1),
    .s_ce1(grp_keccak_absorb_fu_146_s_ce1),
    .s_we1(grp_keccak_absorb_fu_146_s_we1),
    .s_d1(grp_keccak_absorb_fu_146_s_d1),
    .s_q1(s_q1),
    .m_address0(grp_keccak_absorb_fu_146_m_address0),
    .m_ce0(grp_keccak_absorb_fu_146_m_ce0),
    .m_q0(input_r_q0)
);

KeccakF1600_StatePer grp_KeccakF1600_StatePer_fu_156(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_KeccakF1600_StatePer_fu_156_ap_start),
    .ap_done(grp_KeccakF1600_StatePer_fu_156_ap_done),
    .ap_idle(grp_KeccakF1600_StatePer_fu_156_ap_idle),
    .ap_ready(grp_KeccakF1600_StatePer_fu_156_ap_ready),
    .state_address0(grp_KeccakF1600_StatePer_fu_156_state_address0),
    .state_ce0(grp_KeccakF1600_StatePer_fu_156_state_ce0),
    .state_we0(grp_KeccakF1600_StatePer_fu_156_state_we0),
    .state_d0(grp_KeccakF1600_StatePer_fu_156_state_d0),
    .state_q0(s_q0),
    .state_address1(grp_KeccakF1600_StatePer_fu_156_state_address1),
    .state_ce1(grp_KeccakF1600_StatePer_fu_156_state_ce1),
    .state_we1(grp_KeccakF1600_StatePer_fu_156_state_we1),
    .state_d1(grp_KeccakF1600_StatePer_fu_156_state_d1),
    .state_q1(s_q1)
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
        grp_KeccakF1600_StatePer_fu_156_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state3)) begin
            grp_KeccakF1600_StatePer_fu_156_ap_start_reg <= 1'b1;
        end else if ((grp_KeccakF1600_StatePer_fu_156_ap_ready == 1'b1)) begin
            grp_KeccakF1600_StatePer_fu_156_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_keccak_absorb_fu_146_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            grp_keccak_absorb_fu_146_ap_start_reg <= 1'b1;
        end else if ((grp_keccak_absorb_fu_146_ap_ready == 1'b1)) begin
            grp_keccak_absorb_fu_146_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_i_fu_188_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        i_i_i_reg_124 <= i_2_fu_194_p2;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        i_i_i_reg_124 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_i_fu_188_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        i_i_reg_103 <= i_20_i_reg_253;
    end else if (((1'b1 == ap_CS_fsm_state4) & (grp_KeccakF1600_StatePer_fu_156_ap_done == 1'b1))) begin
        i_i_reg_103 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_fu_163_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        i_reg_135 <= 6'd0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        i_reg_135 <= i_1_reg_294;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_i_fu_188_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        p_0_i_i_reg_115 <= tmp_1_fu_229_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        p_0_i_i_reg_115 <= s_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        i_1_reg_294 <= i_1_fu_244_p2;
        i_cast1_reg_286[5 : 0] <= i_cast1_fu_233_p1[5 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_20_i_reg_253 <= i_20_i_fu_169_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        tmp_i_reg_263[7 : 3] <= tmp_i_fu_180_p3[7 : 3];
    end
end

always @ (*) begin
    if ((((tmp_fu_238_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((tmp_fu_238_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        h_assign_address0 = i_cast1_fu_233_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        h_assign_address0 = sum_i_i_cast_fu_214_p1;
    end else begin
        h_assign_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        h_assign_ce0 = 1'b1;
    end else begin
        h_assign_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_i_i_fu_188_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        h_assign_we0 = 1'b1;
    end else begin
        h_assign_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        s_address0 = tmp_248_i_fu_175_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        s_address0 = grp_KeccakF1600_StatePer_fu_156_state_address0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_address0 = grp_keccak_absorb_fu_146_s_address0;
    end else begin
        s_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s_address1 = grp_KeccakF1600_StatePer_fu_156_state_address1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_address1 = grp_keccak_absorb_fu_146_s_address1;
    end else begin
        s_address1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        s_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        s_ce0 = grp_KeccakF1600_StatePer_fu_156_state_ce0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_ce0 = grp_keccak_absorb_fu_146_s_ce0;
    end else begin
        s_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s_ce1 = grp_KeccakF1600_StatePer_fu_156_state_ce1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_ce1 = grp_keccak_absorb_fu_146_s_ce1;
    end else begin
        s_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s_d0 = grp_KeccakF1600_StatePer_fu_156_state_d0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_d0 = grp_keccak_absorb_fu_146_s_d0;
    end else begin
        s_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s_d1 = grp_KeccakF1600_StatePer_fu_156_state_d1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_d1 = grp_keccak_absorb_fu_146_s_d1;
    end else begin
        s_d1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s_we0 = grp_KeccakF1600_StatePer_fu_156_state_we0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_we0 = grp_keccak_absorb_fu_146_s_we0;
    end else begin
        s_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s_we1 = grp_KeccakF1600_StatePer_fu_156_state_we1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_we1 = grp_keccak_absorb_fu_146_s_we1;
    end else begin
        s_we1 = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state2) & (grp_keccak_absorb_fu_146_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (grp_KeccakF1600_StatePer_fu_156_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((exitcond_i_fu_163_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            if (((tmp_i_i_fu_188_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state8 : begin
            if (((tmp_fu_238_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state8))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
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

assign exitcond_i_fu_163_p2 = ((i_i_reg_103 == 5'd17) ? 1'b1 : 1'b0);

assign grp_KeccakF1600_StatePer_fu_156_ap_start = grp_KeccakF1600_StatePer_fu_156_ap_start_reg;

assign grp_keccak_absorb_fu_146_ap_start = grp_keccak_absorb_fu_146_ap_start_reg;

assign h_assign_d0 = p_0_i_i_reg_115[7:0];

assign i_1_fu_244_p2 = (i_reg_135 + 6'd1);

assign i_20_i_fu_169_p2 = (i_i_reg_103 + 5'd1);

assign i_2_fu_194_p2 = (i_i_i_reg_124 + 4'd1);

assign i_cast1_fu_233_p1 = i_reg_135;

assign input_r_address0 = grp_keccak_absorb_fu_146_m_address0;

assign input_r_ce0 = grp_keccak_absorb_fu_146_m_ce0;

assign output_r_address0 = i_cast1_reg_286;

assign output_r_d0 = h_assign_q0;

assign sum_i_i_cast_fu_214_p1 = sum_i_i_fu_209_p2;

assign sum_i_i_fu_209_p2 = (tmp_i_reg_263 + tmp_2_i_i_cast_fu_205_p1);

assign tmp_1_fu_229_p1 = u_assign_1_fu_219_p4;

assign tmp_248_i_fu_175_p1 = i_i_reg_103;

assign tmp_2_i_i_cast_fu_205_p1 = i_i_i_reg_124;

assign tmp_fu_238_p2 = ((i_reg_135 == 6'd32) ? 1'b1 : 1'b0);

assign tmp_i_fu_180_p3 = {{i_i_reg_103}, {3'd0}};

assign tmp_i_i_fu_188_p2 = ((i_i_i_reg_124 == 4'd8) ? 1'b1 : 1'b0);

assign u_assign_1_fu_219_p4 = {{p_0_i_i_reg_115[63:8]}};

always @ (posedge ap_clk) begin
    tmp_i_reg_263[2:0] <= 3'b000;
    i_cast1_reg_286[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
end

endmodule //sha3_256_1
