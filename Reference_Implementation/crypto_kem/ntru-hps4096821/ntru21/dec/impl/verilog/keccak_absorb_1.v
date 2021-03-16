// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keccak_absorb_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        s_address0,
        s_ce0,
        s_we0,
        s_d0,
        s_q0,
        s_address1,
        s_ce1,
        s_we1,
        s_d1,
        s_q1,
        m_address0,
        m_ce0,
        m_q0
);

parameter    ap_ST_fsm_state1 = 16'd1;
parameter    ap_ST_fsm_state2 = 16'd2;
parameter    ap_ST_fsm_state3 = 16'd4;
parameter    ap_ST_fsm_state4 = 16'd8;
parameter    ap_ST_fsm_state5 = 16'd16;
parameter    ap_ST_fsm_state6 = 16'd32;
parameter    ap_ST_fsm_state7 = 16'd64;
parameter    ap_ST_fsm_state8 = 16'd128;
parameter    ap_ST_fsm_state9 = 16'd256;
parameter    ap_ST_fsm_state10 = 16'd512;
parameter    ap_ST_fsm_state11 = 16'd1024;
parameter    ap_ST_fsm_state12 = 16'd2048;
parameter    ap_ST_fsm_state13 = 16'd4096;
parameter    ap_ST_fsm_state14 = 16'd8192;
parameter    ap_ST_fsm_state15 = 16'd16384;
parameter    ap_ST_fsm_state16 = 16'd32768;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] s_address0;
output   s_ce0;
output   s_we0;
output  [63:0] s_d0;
input  [63:0] s_q0;
output  [4:0] s_address1;
output   s_ce1;
output   s_we1;
output  [63:0] s_d1;
input  [63:0] s_q1;
output  [10:0] m_address0;
output   m_ce0;
input  [7:0] m_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[4:0] s_address0;
reg s_ce0;
reg s_we0;
reg[63:0] s_d0;
reg s_ce1;
reg s_we1;
reg[10:0] m_address0;
reg m_ce0;

(* fsm_encoding = "none" *) reg   [15:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] i_23_fu_328_p2;
wire    ap_CS_fsm_state2;
wire   [63:0] i_1_cast_fu_340_p1;
reg   [63:0] i_1_cast_reg_614;
wire    ap_CS_fsm_state4;
wire   [4:0] i_5_fu_350_p2;
reg   [4:0] i_5_reg_622;
wire   [10:0] tmp1_fu_368_p2;
reg   [10:0] tmp1_reg_627;
wire   [0:0] exitcond4_fu_344_p2;
wire   [10:0] mlen_assign_fu_374_p2;
reg   [10:0] mlen_assign_reg_632;
wire   [10:0] p_rec_fu_380_p2;
reg   [10:0] p_rec_reg_637;
wire   [3:0] i_26_fu_392_p2;
reg   [3:0] i_26_reg_645;
wire    ap_CS_fsm_state5;
wire   [0:0] tmp_i_fu_386_p2;
reg   [4:0] s_addr_1_reg_655;
wire   [63:0] r_fu_446_p2;
wire    ap_CS_fsm_state6;
wire   [7:0] i_25_fu_470_p2;
wire    ap_CS_fsm_state9;
wire   [63:0] i_3_cast7_fu_480_p1;
reg   [63:0] i_3_cast7_reg_673;
wire    ap_CS_fsm_state10;
wire   [5:0] tmp_83_fu_490_p2;
reg   [5:0] tmp_83_reg_681;
wire   [0:0] exitcond2_fu_484_p2;
wire   [63:0] i_4_cast6_fu_514_p1;
reg   [63:0] i_4_cast6_reg_697;
wire    ap_CS_fsm_state13;
wire   [4:0] i_27_fu_524_p2;
reg   [4:0] i_27_reg_705;
wire   [7:0] tmp_86_fu_530_p3;
reg   [7:0] tmp_86_reg_710;
wire   [0:0] exitcond_fu_518_p2;
wire   [3:0] i_6_fu_548_p2;
reg   [3:0] i_6_reg_718;
wire    ap_CS_fsm_state14;
wire   [0:0] tmp_i3_fu_542_p2;
reg   [4:0] s_addr_2_reg_728;
wire   [63:0] r_11_fu_590_p2;
wire    ap_CS_fsm_state15;
reg   [7:0] t_address0;
reg    t_ce0;
reg    t_we0;
reg   [7:0] t_d0;
wire   [7:0] t_q0;
reg   [7:0] t_address1;
reg    t_ce1;
reg    t_we1;
wire   [7:0] t_d1;
wire   [7:0] t_q1;
wire    grp_KeccakF1600_StatePer_fu_309_ap_start;
wire    grp_KeccakF1600_StatePer_fu_309_ap_done;
wire    grp_KeccakF1600_StatePer_fu_309_ap_idle;
wire    grp_KeccakF1600_StatePer_fu_309_ap_ready;
wire   [4:0] grp_KeccakF1600_StatePer_fu_309_state_address0;
wire    grp_KeccakF1600_StatePer_fu_309_state_ce0;
wire    grp_KeccakF1600_StatePer_fu_309_state_we0;
wire   [63:0] grp_KeccakF1600_StatePer_fu_309_state_d0;
wire   [4:0] grp_KeccakF1600_StatePer_fu_309_state_address1;
wire    grp_KeccakF1600_StatePer_fu_309_state_ce1;
wire    grp_KeccakF1600_StatePer_fu_309_state_we1;
wire   [63:0] grp_KeccakF1600_StatePer_fu_309_state_d1;
reg   [4:0] i_reg_182;
wire   [0:0] tmp_fu_322_p2;
reg   [10:0] i_24_reg_193;
wire    ap_CS_fsm_state8;
reg   [10:0] p_01_rec_reg_205;
reg   [4:0] i_1_reg_217;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_s_fu_334_p2;
reg   [63:0] r_i_reg_228;
reg   [3:0] i_i_reg_240;
reg   [7:0] i_2_reg_252;
wire   [0:0] exitcond3_fu_464_p2;
reg   [5:0] i_3_reg_263;
wire    ap_CS_fsm_state11;
reg   [4:0] i_4_reg_274;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state16;
reg   [63:0] r_i1_reg_285;
reg   [3:0] i_i2_reg_297;
reg    grp_KeccakF1600_StatePer_fu_309_ap_start_reg;
wire   [63:0] i_cast_fu_317_p1;
wire   [63:0] sum_i_cast_fu_415_p1;
wire   [63:0] i_2_cast9_fu_459_p1;
wire   [63:0] sum2_cast_fu_502_p1;
wire   [63:0] sum_i4_cast_fu_559_p1;
wire   [63:0] tmp_85_fu_452_p2;
wire   [63:0] tmp_87_fu_596_p2;
wire   [7:0] tmp_82_fu_356_p3;
wire   [10:0] tmp_91_cast_fu_364_p1;
wire   [5:0] tmp81_fu_398_p3;
wire   [10:0] tmp2_cast_fu_406_p1;
wire   [10:0] sum_i_fu_410_p2;
wire   [2:0] tmp_97_fu_424_p1;
wire   [5:0] tmp_133_i_fu_428_p3;
wire   [63:0] tmp_i_51_fu_420_p1;
wire   [63:0] tmp_133_i_cast_fu_436_p1;
wire   [63:0] tmp_134_i_fu_440_p2;
wire   [10:0] i_3_cast8_fu_476_p1;
wire   [10:0] sum2_fu_496_p2;
wire   [7:0] i_i2_cast4_fu_538_p1;
wire   [7:0] sum_i4_fu_554_p2;
wire   [2:0] tmp_98_fu_568_p1;
wire   [5:0] tmp_135_i_fu_572_p3;
wire   [63:0] tmp_i7_fu_564_p1;
wire   [63:0] tmp_135_i_cast_fu_580_p1;
wire   [63:0] tmp_136_i_fu_584_p2;
reg   [15:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 16'd1;
#0 grp_KeccakF1600_StatePer_fu_309_ap_start_reg = 1'b0;
end

keccak_absorb_t #(
    .DataWidth( 8 ),
    .AddressRange( 200 ),
    .AddressWidth( 8 ))
t_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(t_address0),
    .ce0(t_ce0),
    .we0(t_we0),
    .d0(t_d0),
    .q0(t_q0),
    .address1(t_address1),
    .ce1(t_ce1),
    .we1(t_we1),
    .d1(t_d1),
    .q1(t_q1)
);

KeccakF1600_StatePer grp_KeccakF1600_StatePer_fu_309(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_KeccakF1600_StatePer_fu_309_ap_start),
    .ap_done(grp_KeccakF1600_StatePer_fu_309_ap_done),
    .ap_idle(grp_KeccakF1600_StatePer_fu_309_ap_idle),
    .ap_ready(grp_KeccakF1600_StatePer_fu_309_ap_ready),
    .state_address0(grp_KeccakF1600_StatePer_fu_309_state_address0),
    .state_ce0(grp_KeccakF1600_StatePer_fu_309_state_ce0),
    .state_we0(grp_KeccakF1600_StatePer_fu_309_state_we0),
    .state_d0(grp_KeccakF1600_StatePer_fu_309_state_d0),
    .state_q0(s_q0),
    .state_address1(grp_KeccakF1600_StatePer_fu_309_state_address1),
    .state_ce1(grp_KeccakF1600_StatePer_fu_309_state_ce1),
    .state_we1(grp_KeccakF1600_StatePer_fu_309_state_we1),
    .state_d1(grp_KeccakF1600_StatePer_fu_309_state_d1),
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
        grp_KeccakF1600_StatePer_fu_309_ap_start_reg <= 1'b0;
    end else begin
        if (((exitcond4_fu_344_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
            grp_KeccakF1600_StatePer_fu_309_ap_start_reg <= 1'b1;
        end else if ((grp_KeccakF1600_StatePer_fu_309_ap_ready == 1'b1)) begin
            grp_KeccakF1600_StatePer_fu_309_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_334_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_1_reg_217 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        i_1_reg_217 <= i_5_reg_622;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_322_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_24_reg_193 <= 11'd1262;
    end else if (((1'b1 == ap_CS_fsm_state8) & (grp_KeccakF1600_StatePer_fu_309_ap_done == 1'b1))) begin
        i_24_reg_193 <= mlen_assign_reg_632;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_334_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_2_reg_252 <= 8'd0;
    end else if (((exitcond3_fu_464_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
        i_2_reg_252 <= i_25_fu_470_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_464_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        i_3_reg_263 <= 6'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        i_3_reg_263 <= tmp_83_reg_681;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        i_4_reg_274 <= i_27_reg_705;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        i_4_reg_274 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        i_i2_reg_297 <= i_6_reg_718;
    end else if (((exitcond_fu_518_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        i_i2_reg_297 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_i_reg_240 <= i_26_reg_645;
    end else if (((exitcond4_fu_344_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        i_i_reg_240 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_322_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_182 <= i_23_fu_328_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_182 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_322_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        p_01_rec_reg_205 <= 11'd0;
    end else if (((1'b1 == ap_CS_fsm_state8) & (grp_KeccakF1600_StatePer_fu_309_ap_done == 1'b1))) begin
        p_01_rec_reg_205 <= p_rec_reg_637;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        r_i1_reg_285 <= r_11_fu_590_p2;
    end else if (((exitcond_fu_518_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        r_i1_reg_285 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        r_i_reg_228 <= r_fu_446_p2;
    end else if (((exitcond4_fu_344_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        r_i_reg_228 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_1_cast_reg_614[4 : 0] <= i_1_cast_fu_340_p1[4 : 0];
        i_5_reg_622 <= i_5_fu_350_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_26_reg_645 <= i_26_fu_392_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        i_27_reg_705 <= i_27_fu_524_p2;
        i_4_cast6_reg_697[4 : 0] <= i_4_cast6_fu_514_p1[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        i_3_cast7_reg_673[5 : 0] <= i_3_cast7_fu_480_p1[5 : 0];
        tmp_83_reg_681 <= tmp_83_fu_490_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        i_6_reg_718 <= i_6_fu_548_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_344_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        mlen_assign_reg_632 <= mlen_assign_fu_374_p2;
        p_rec_reg_637 <= p_rec_fu_380_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_fu_386_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        s_addr_1_reg_655 <= i_1_cast_reg_614;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i3_fu_542_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14))) begin
        s_addr_2_reg_728 <= i_4_cast6_reg_697;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_344_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        tmp1_reg_627 <= tmp1_fu_368_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_518_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        tmp_86_reg_710[7 : 3] <= tmp_86_fu_530_p3[7 : 3];
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_fu_518_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state13)))) begin
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
    if (((exitcond_fu_518_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state13))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        m_address0 = sum2_cast_fu_502_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        m_address0 = sum_i_cast_fu_415_p1;
    end else begin
        m_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state10))) begin
        m_ce0 = 1'b1;
    end else begin
        m_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        s_address0 = s_addr_2_reg_728;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        s_address0 = i_4_cast6_reg_697;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        s_address0 = s_addr_1_reg_655;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        s_address0 = i_1_cast_reg_614;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_address0 = i_cast_fu_317_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        s_address0 = grp_KeccakF1600_StatePer_fu_309_state_address0;
    end else begin
        s_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state14))) begin
        s_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        s_ce0 = grp_KeccakF1600_StatePer_fu_309_state_ce0;
    end else begin
        s_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        s_ce1 = grp_KeccakF1600_StatePer_fu_309_state_ce1;
    end else begin
        s_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        s_d0 = tmp_87_fu_596_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        s_d0 = tmp_85_fu_452_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_d0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        s_d0 = grp_KeccakF1600_StatePer_fu_309_state_d0;
    end else begin
        s_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state7) | ((tmp_fu_322_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        s_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        s_we0 = grp_KeccakF1600_StatePer_fu_309_state_we0;
    end else begin
        s_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        s_we1 = grp_KeccakF1600_StatePer_fu_309_state_we1;
    end else begin
        s_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        t_address0 = 64'd38;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        t_address0 = i_3_cast7_reg_673;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        t_address0 = 64'd135;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        t_address0 = i_2_cast9_fu_459_p1;
    end else begin
        t_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        t_address1 = sum_i4_cast_fu_559_p1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        t_address1 = 64'd135;
    end else begin
        t_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        t_ce0 = 1'b1;
    end else begin
        t_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state14))) begin
        t_ce1 = 1'b1;
    end else begin
        t_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        t_d0 = 8'd6;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        t_d0 = m_q0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        t_d0 = 8'd0;
    end else begin
        t_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | ((exitcond3_fu_464_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9)))) begin
        t_we0 = 1'b1;
    end else begin
        t_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        t_we1 = 1'b1;
    end else begin
        t_we1 = 1'b0;
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
            if (((tmp_fu_322_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_s_fu_334_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((exitcond4_fu_344_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((tmp_i_fu_386_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state8 : begin
            if (((1'b1 == ap_CS_fsm_state8) & (grp_KeccakF1600_StatePer_fu_309_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state9 : begin
            if (((exitcond3_fu_464_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state10 : begin
            if (((exitcond2_fu_484_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state10))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            if (((exitcond_fu_518_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state13))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        ap_ST_fsm_state14 : begin
            if (((tmp_i3_fu_542_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14))) begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign exitcond2_fu_484_p2 = ((i_3_reg_263 == 6'd38) ? 1'b1 : 1'b0);

assign exitcond3_fu_464_p2 = ((i_2_reg_252 == 8'd136) ? 1'b1 : 1'b0);

assign exitcond4_fu_344_p2 = ((i_1_reg_217 == 5'd17) ? 1'b1 : 1'b0);

assign exitcond_fu_518_p2 = ((i_4_reg_274 == 5'd17) ? 1'b1 : 1'b0);

assign grp_KeccakF1600_StatePer_fu_309_ap_start = grp_KeccakF1600_StatePer_fu_309_ap_start_reg;

assign i_1_cast_fu_340_p1 = i_1_reg_217;

assign i_23_fu_328_p2 = (i_reg_182 + 5'd1);

assign i_25_fu_470_p2 = (i_2_reg_252 + 8'd1);

assign i_26_fu_392_p2 = (i_i_reg_240 + 4'd1);

assign i_27_fu_524_p2 = (i_4_reg_274 + 5'd1);

assign i_2_cast9_fu_459_p1 = i_2_reg_252;

assign i_3_cast7_fu_480_p1 = i_3_reg_263;

assign i_3_cast8_fu_476_p1 = i_3_reg_263;

assign i_4_cast6_fu_514_p1 = i_4_reg_274;

assign i_5_fu_350_p2 = (i_1_reg_217 + 5'd1);

assign i_6_fu_548_p2 = (i_i2_reg_297 + 4'd1);

assign i_cast_fu_317_p1 = i_reg_182;

assign i_i2_cast4_fu_538_p1 = i_i2_reg_297;

assign mlen_assign_fu_374_p2 = ($signed(i_24_reg_193) + $signed(11'd1912));

assign p_rec_fu_380_p2 = (p_01_rec_reg_205 + 11'd136);

assign r_11_fu_590_p2 = (tmp_136_i_fu_584_p2 | r_i1_reg_285);

assign r_fu_446_p2 = (tmp_134_i_fu_440_p2 | r_i_reg_228);

assign s_address1 = grp_KeccakF1600_StatePer_fu_309_state_address1;

assign s_d1 = grp_KeccakF1600_StatePer_fu_309_state_d1;

assign sum2_cast_fu_502_p1 = sum2_fu_496_p2;

assign sum2_fu_496_p2 = ($signed(i_3_cast8_fu_476_p1) + $signed(11'd1256));

assign sum_i4_cast_fu_559_p1 = sum_i4_fu_554_p2;

assign sum_i4_fu_554_p2 = (tmp_86_reg_710 + i_i2_cast4_fu_538_p1);

assign sum_i_cast_fu_415_p1 = sum_i_fu_410_p2;

assign sum_i_fu_410_p2 = (tmp1_reg_627 + tmp2_cast_fu_406_p1);

assign t_d1 = (t_q0 | 8'd128);

assign tmp1_fu_368_p2 = (p_01_rec_reg_205 + tmp_91_cast_fu_364_p1);

assign tmp2_cast_fu_406_p1 = tmp81_fu_398_p3;

assign tmp81_fu_398_p3 = {{2'd2}, {i_i_reg_240}};

assign tmp_133_i_cast_fu_436_p1 = tmp_133_i_fu_428_p3;

assign tmp_133_i_fu_428_p3 = {{tmp_97_fu_424_p1}, {3'd0}};

assign tmp_134_i_fu_440_p2 = tmp_i_51_fu_420_p1 << tmp_133_i_cast_fu_436_p1;

assign tmp_135_i_cast_fu_580_p1 = tmp_135_i_fu_572_p3;

assign tmp_135_i_fu_572_p3 = {{tmp_98_fu_568_p1}, {3'd0}};

assign tmp_136_i_fu_584_p2 = tmp_i7_fu_564_p1 << tmp_135_i_cast_fu_580_p1;

assign tmp_82_fu_356_p3 = {{i_1_reg_217}, {3'd0}};

assign tmp_83_fu_490_p2 = (i_3_reg_263 + 6'd1);

assign tmp_85_fu_452_p2 = (s_q0 ^ r_i_reg_228);

assign tmp_86_fu_530_p3 = {{i_4_reg_274}, {3'd0}};

assign tmp_87_fu_596_p2 = (s_q0 ^ r_i1_reg_285);

assign tmp_91_cast_fu_364_p1 = tmp_82_fu_356_p3;

assign tmp_97_fu_424_p1 = i_i_reg_240[2:0];

assign tmp_98_fu_568_p1 = i_i2_reg_297[2:0];

assign tmp_fu_322_p2 = ((i_reg_182 == 5'd25) ? 1'b1 : 1'b0);

assign tmp_i3_fu_542_p2 = ((i_i2_reg_297 == 4'd8) ? 1'b1 : 1'b0);

assign tmp_i7_fu_564_p1 = t_q1;

assign tmp_i_51_fu_420_p1 = m_q0;

assign tmp_i_fu_386_p2 = ((i_i_reg_240 == 4'd8) ? 1'b1 : 1'b0);

assign tmp_s_fu_334_p2 = ((i_24_reg_193 < 11'd136) ? 1'b1 : 1'b0);

always @ (posedge ap_clk) begin
    i_1_cast_reg_614[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    i_3_cast7_reg_673[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    i_4_cast6_reg_697[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    tmp_86_reg_710[2:0] <= 3'b000;
end

endmodule //keccak_absorb_1