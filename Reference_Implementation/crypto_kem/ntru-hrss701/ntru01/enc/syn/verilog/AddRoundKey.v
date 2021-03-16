// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module AddRoundKey (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        round,
        state_address0,
        state_ce0,
        state_we0,
        state_d0,
        state_q0,
        RoundKey_address0,
        RoundKey_ce0,
        RoundKey_q0
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_state3 = 4'd4;
parameter    ap_ST_fsm_state4 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [5:0] round;
output  [3:0] state_address0;
output   state_ce0;
output   state_we0;
output  [7:0] state_d0;
input  [7:0] state_q0;
output  [7:0] RoundKey_address0;
output   RoundKey_ce0;
input  [7:0] RoundKey_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] state_address0;
reg state_ce0;
reg state_we0;
reg RoundKey_ce0;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [2:0] i_24_fu_98_p2;
reg   [2:0] i_24_reg_194;
wire    ap_CS_fsm_state2;
wire   [3:0] tmp_468_fu_108_p3;
reg   [3:0] tmp_468_reg_199;
wire   [0:0] tmp_s_fu_92_p2;
wire   [5:0] tmp_312_cast_fu_124_p1;
reg   [5:0] tmp_312_cast_reg_204;
wire   [2:0] j_6_fu_134_p2;
reg   [2:0] j_6_reg_212;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_469_fu_128_p2;
reg   [3:0] state_addr_reg_222;
reg   [2:0] i_reg_70;
reg   [2:0] j_reg_81;
wire    ap_CS_fsm_state4;
wire   [63:0] tmp_471_fu_160_p1;
wire   [63:0] tmp_313_cast_fu_174_p1;
wire   [1:0] tmp_fu_104_p1;
wire   [4:0] tmp_311_fu_116_p3;
wire   [3:0] tmp_626_cast_fu_140_p1;
wire   [3:0] tmp_539_fu_149_p1;
wire   [3:0] tmp1_fu_144_p2;
wire   [7:0] tmp_470_fu_152_p3;
wire   [5:0] tmp_475_cast_fu_165_p1;
wire   [5:0] tmp_313_fu_169_p2;
reg   [3:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_469_fu_128_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_70 <= i_24_reg_194;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_70 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        j_reg_81 <= j_6_reg_212;
    end else if (((tmp_s_fu_92_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_81 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_24_reg_194 <= i_24_fu_98_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_6_reg_212 <= j_6_fu_134_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_469_fu_128_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        state_addr_reg_222 <= tmp_313_cast_fu_174_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_92_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_312_cast_reg_204[4 : 2] <= tmp_312_cast_fu_124_p1[4 : 2];
        tmp_468_reg_199[3 : 2] <= tmp_468_fu_108_p3[3 : 2];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        RoundKey_ce0 = 1'b1;
    end else begin
        RoundKey_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((tmp_s_fu_92_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((tmp_s_fu_92_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        state_address0 = state_addr_reg_222;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_address0 = tmp_313_cast_fu_174_p1;
    end else begin
        state_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3))) begin
        state_ce0 = 1'b1;
    end else begin
        state_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        state_we0 = 1'b1;
    end else begin
        state_we0 = 1'b0;
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
            if (((tmp_s_fu_92_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_469_fu_128_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign RoundKey_address0 = tmp_471_fu_160_p1;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign i_24_fu_98_p2 = (i_reg_70 + 3'd1);

assign j_6_fu_134_p2 = (j_reg_81 + 3'd1);

assign state_d0 = (state_q0 ^ RoundKey_q0);

assign tmp1_fu_144_p2 = (tmp_626_cast_fu_140_p1 + tmp_468_reg_199);

assign tmp_311_fu_116_p3 = {{i_reg_70}, {2'd0}};

assign tmp_312_cast_fu_124_p1 = tmp_311_fu_116_p3;

assign tmp_313_cast_fu_174_p1 = tmp_313_fu_169_p2;

assign tmp_313_fu_169_p2 = (tmp_475_cast_fu_165_p1 + tmp_312_cast_reg_204);

assign tmp_468_fu_108_p3 = {{tmp_fu_104_p1}, {2'd0}};

assign tmp_469_fu_128_p2 = ((j_reg_81 == 3'd4) ? 1'b1 : 1'b0);

assign tmp_470_fu_152_p3 = {{tmp_539_fu_149_p1}, {tmp1_fu_144_p2}};

assign tmp_471_fu_160_p1 = tmp_470_fu_152_p3;

assign tmp_475_cast_fu_165_p1 = j_reg_81;

assign tmp_539_fu_149_p1 = round[3:0];

assign tmp_626_cast_fu_140_p1 = j_reg_81;

assign tmp_fu_104_p1 = i_reg_70[1:0];

assign tmp_s_fu_92_p2 = ((i_reg_70 == 3'd4) ? 1'b1 : 1'b0);

always @ (posedge ap_clk) begin
    tmp_468_reg_199[1:0] <= 2'b00;
    tmp_312_cast_reg_204[1:0] <= 2'b00;
    tmp_312_cast_reg_204[5] <= 1'b0;
end

endmodule //AddRoundKey
