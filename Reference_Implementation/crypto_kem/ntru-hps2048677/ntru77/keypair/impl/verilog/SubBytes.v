// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module SubBytes (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        state_address0,
        state_ce0,
        state_we0,
        state_d0,
        state_q0
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_state4 = 5'd8;
parameter    ap_ST_fsm_state5 = 5'd16;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [3:0] state_address0;
output   state_ce0;
output   state_we0;
output  [7:0] state_d0;
input  [7:0] state_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] state_address0;
reg state_ce0;
reg state_we0;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [7:0] sbox_address0;
reg    sbox_ce0;
wire   [7:0] sbox_q0;
wire   [2:0] i_42_fu_75_p2;
reg   [2:0] i_42_reg_127;
wire    ap_CS_fsm_state2;
wire   [5:0] tmp_cast_fu_81_p1;
reg   [5:0] tmp_cast_reg_132;
wire   [0:0] tmp_fu_69_p2;
wire   [2:0] j_9_fu_91_p2;
reg   [2:0] j_9_reg_140;
wire    ap_CS_fsm_state3;
reg   [3:0] state_addr_reg_145;
wire   [0:0] tmp_s_fu_85_p2;
wire    ap_CS_fsm_state4;
reg   [2:0] i_reg_47;
reg   [2:0] j_reg_58;
wire    ap_CS_fsm_state5;
wire   [63:0] tmp_173_cast_fu_114_p1;
wire   [63:0] tmp_259_fu_119_p1;
wire   [4:0] tmp_171_fu_97_p3;
wire   [5:0] tmp_172_cast_fu_105_p1;
wire   [5:0] tmp_173_fu_109_p2;
reg   [4:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'd1;
end

SubBytes_sbox #(
    .DataWidth( 8 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
sbox_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(sbox_address0),
    .ce0(sbox_ce0),
    .q0(sbox_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_85_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_47 <= i_42_reg_127;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_47 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_69_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_58 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        j_reg_58 <= j_9_reg_140;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_42_reg_127 <= i_42_fu_75_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_9_reg_140 <= j_9_fu_91_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_85_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        state_addr_reg_145 <= tmp_173_cast_fu_114_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_69_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_cast_reg_132[2 : 0] <= tmp_cast_fu_81_p1[2 : 0];
    end
end

always @ (*) begin
    if ((((tmp_fu_69_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((tmp_fu_69_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        sbox_ce0 = 1'b1;
    end else begin
        sbox_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        state_address0 = state_addr_reg_145;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_address0 = tmp_173_cast_fu_114_p1;
    end else begin
        state_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3))) begin
        state_ce0 = 1'b1;
    end else begin
        state_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        state_we0 = 1'b1;
    end else begin
        state_we0 = 1'b0;
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
            if (((tmp_fu_69_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_s_fu_85_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
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

assign i_42_fu_75_p2 = (i_reg_47 + 3'd1);

assign j_9_fu_91_p2 = (j_reg_58 + 3'd1);

assign sbox_address0 = tmp_259_fu_119_p1;

assign state_d0 = sbox_q0;

assign tmp_171_fu_97_p3 = {{j_reg_58}, {2'd0}};

assign tmp_172_cast_fu_105_p1 = tmp_171_fu_97_p3;

assign tmp_173_cast_fu_114_p1 = tmp_173_fu_109_p2;

assign tmp_173_fu_109_p2 = (tmp_cast_reg_132 + tmp_172_cast_fu_105_p1);

assign tmp_259_fu_119_p1 = state_q0;

assign tmp_cast_fu_81_p1 = i_reg_47;

assign tmp_fu_69_p2 = ((i_reg_47 == 3'd4) ? 1'b1 : 1'b0);

assign tmp_s_fu_85_p2 = ((j_reg_58 == 3'd4) ? 1'b1 : 1'b0);

always @ (posedge ap_clk) begin
    tmp_cast_reg_132[5:3] <= 3'b000;
end

endmodule //SubBytes
