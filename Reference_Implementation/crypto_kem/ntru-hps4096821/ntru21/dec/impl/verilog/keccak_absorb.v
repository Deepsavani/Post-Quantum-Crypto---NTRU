// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keccak_absorb (
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
output  [8:0] m_address0;
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
reg[8:0] m_address0;
reg m_ce0;

(* fsm_encoding = "none" *) reg   [15:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] i_28_fu_324_p2;
wire    ap_CS_fsm_state2;
wire   [63:0] i_1_cast_fu_336_p1;
reg   [63:0] i_1_cast_reg_602;
wire    ap_CS_fsm_state4;
wire   [4:0] i_7_fu_346_p2;
reg   [4:0] i_7_reg_610;
wire   [8:0] tmp_97_cast_fu_360_p1;
reg   [8:0] tmp_97_cast_reg_615;
wire   [0:0] exitcond4_fu_340_p2;
wire   [8:0] mlen_assign_fu_364_p2;
reg   [8:0] mlen_assign_reg_620;
wire   [3:0] i_31_fu_380_p2;
reg   [3:0] i_31_reg_628;
wire    ap_CS_fsm_state5;
wire   [0:0] tmp_i_fu_374_p2;
reg   [4:0] s_addr_3_reg_638;
wire   [63:0] r_fu_428_p2;
wire    ap_CS_fsm_state6;
wire   [8:0] p_rec_fu_441_p2;
wire    ap_CS_fsm_state8;
wire    grp_KeccakF1600_StatePer_fu_305_ap_ready;
wire    grp_KeccakF1600_StatePer_fu_305_ap_done;
wire   [7:0] i_30_fu_458_p2;
wire    ap_CS_fsm_state9;
wire   [63:0] i_3_cast6_fu_468_p1;
reg   [63:0] i_3_cast6_reg_661;
wire    ap_CS_fsm_state10;
wire   [5:0] tmp_89_fu_478_p2;
reg   [5:0] tmp_89_reg_669;
wire   [0:0] exitcond2_fu_472_p2;
wire   [63:0] i_4_cast5_fu_502_p1;
reg   [63:0] i_4_cast5_reg_685;
wire    ap_CS_fsm_state13;
wire   [4:0] i_32_fu_512_p2;
reg   [4:0] i_32_reg_693;
wire   [7:0] tmp_92_fu_518_p3;
reg   [7:0] tmp_92_reg_698;
wire   [0:0] exitcond_fu_506_p2;
wire   [3:0] i_8_fu_536_p2;
reg   [3:0] i_8_reg_706;
wire    ap_CS_fsm_state14;
wire   [0:0] tmp_i3_fu_530_p2;
reg   [4:0] s_addr_4_reg_716;
wire   [63:0] r_12_fu_578_p2;
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
wire    grp_KeccakF1600_StatePer_fu_305_ap_start;
wire    grp_KeccakF1600_StatePer_fu_305_ap_idle;
wire   [4:0] grp_KeccakF1600_StatePer_fu_305_state_address0;
wire    grp_KeccakF1600_StatePer_fu_305_state_ce0;
wire    grp_KeccakF1600_StatePer_fu_305_state_we0;
wire   [63:0] grp_KeccakF1600_StatePer_fu_305_state_d0;
wire   [4:0] grp_KeccakF1600_StatePer_fu_305_state_address1;
wire    grp_KeccakF1600_StatePer_fu_305_state_ce1;
wire    grp_KeccakF1600_StatePer_fu_305_state_we1;
wire   [63:0] grp_KeccakF1600_StatePer_fu_305_state_d1;
reg   [4:0] i_reg_178;
wire   [0:0] tmp_fu_318_p2;
reg   [8:0] i_29_reg_189;
reg   [8:0] p_01_rec_reg_201;
reg   [4:0] i_1_reg_213;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_s_fu_330_p2;
reg   [63:0] r_i_reg_224;
reg   [3:0] i_i_reg_236;
reg   [7:0] i_2_reg_248;
wire   [0:0] exitcond3_fu_452_p2;
reg   [5:0] i_3_reg_259;
wire    ap_CS_fsm_state11;
reg   [4:0] i_4_reg_270;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state16;
reg   [63:0] r_i1_reg_281;
reg   [3:0] i_i2_reg_293;
reg    grp_KeccakF1600_StatePer_fu_305_ap_start_reg;
wire   [63:0] i_cast_fu_313_p1;
wire   [63:0] sum_i_cast_fu_397_p1;
wire   [63:0] i_2_cast8_fu_447_p1;
wire   [63:0] sum9_cast_fu_490_p1;
wire   [63:0] sum_i4_cast_fu_547_p1;
wire   [63:0] tmp_91_fu_434_p2;
wire   [63:0] tmp_93_fu_584_p2;
wire   [7:0] tmp_88_fu_352_p3;
wire   [8:0] i_i_cast_fu_370_p1;
wire   [8:0] tmp1_fu_386_p2;
wire   [8:0] sum_i_fu_392_p2;
wire   [2:0] tmp_99_fu_406_p1;
wire   [5:0] tmp_131_i_fu_410_p3;
wire   [63:0] tmp_i_59_fu_402_p1;
wire   [63:0] tmp_131_i_cast_fu_418_p1;
wire   [63:0] tmp_132_i_fu_422_p2;
wire   [8:0] i_3_cast7_fu_464_p1;
wire   [8:0] sum9_fu_484_p2;
wire   [7:0] i_i2_cast3_fu_526_p1;
wire   [7:0] sum_i4_fu_542_p2;
wire   [2:0] tmp_100_fu_556_p1;
wire   [5:0] tmp_135_i_fu_560_p3;
wire   [63:0] tmp_i7_fu_552_p1;
wire   [63:0] tmp_135_i_cast_fu_568_p1;
wire   [63:0] tmp_136_i_fu_572_p2;
reg   [15:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 16'd1;
#0 grp_KeccakF1600_StatePer_fu_305_ap_start_reg = 1'b0;
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

KeccakF1600_StatePer grp_KeccakF1600_StatePer_fu_305(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_KeccakF1600_StatePer_fu_305_ap_start),
    .ap_done(grp_KeccakF1600_StatePer_fu_305_ap_done),
    .ap_idle(grp_KeccakF1600_StatePer_fu_305_ap_idle),
    .ap_ready(grp_KeccakF1600_StatePer_fu_305_ap_ready),
    .state_address0(grp_KeccakF1600_StatePer_fu_305_state_address0),
    .state_ce0(grp_KeccakF1600_StatePer_fu_305_state_ce0),
    .state_we0(grp_KeccakF1600_StatePer_fu_305_state_we0),
    .state_d0(grp_KeccakF1600_StatePer_fu_305_state_d0),
    .state_q0(s_q0),
    .state_address1(grp_KeccakF1600_StatePer_fu_305_state_address1),
    .state_ce1(grp_KeccakF1600_StatePer_fu_305_state_ce1),
    .state_we1(grp_KeccakF1600_StatePer_fu_305_state_we1),
    .state_d1(grp_KeccakF1600_StatePer_fu_305_state_d1),
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
        grp_KeccakF1600_StatePer_fu_305_ap_start_reg <= 1'b0;
    end else begin
        if (((exitcond4_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
            grp_KeccakF1600_StatePer_fu_305_ap_start_reg <= 1'b1;
        end else if ((grp_KeccakF1600_StatePer_fu_305_ap_ready == 1'b1)) begin
            grp_KeccakF1600_StatePer_fu_305_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_330_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_1_reg_213 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        i_1_reg_213 <= i_7_reg_610;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_318_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_29_reg_189 <= 9'd328;
    end else if (((1'b1 == ap_CS_fsm_state8) & (grp_KeccakF1600_StatePer_fu_305_ap_done == 1'b1))) begin
        i_29_reg_189 <= mlen_assign_reg_620;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_330_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_2_reg_248 <= 8'd0;
    end else if (((exitcond3_fu_452_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
        i_2_reg_248 <= i_30_fu_458_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_452_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        i_3_reg_259 <= 6'd0;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        i_3_reg_259 <= tmp_89_reg_669;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        i_4_reg_270 <= i_32_reg_693;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        i_4_reg_270 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        i_i2_reg_293 <= i_8_reg_706;
    end else if (((exitcond_fu_506_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        i_i2_reg_293 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_i_reg_236 <= i_31_reg_628;
    end else if (((exitcond4_fu_340_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        i_i_reg_236 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_318_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_178 <= i_28_fu_324_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_178 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_318_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        p_01_rec_reg_201 <= 9'd0;
    end else if (((1'b1 == ap_CS_fsm_state8) & (grp_KeccakF1600_StatePer_fu_305_ap_done == 1'b1))) begin
        p_01_rec_reg_201 <= p_rec_fu_441_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        r_i1_reg_281 <= r_12_fu_578_p2;
    end else if (((exitcond_fu_506_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        r_i1_reg_281 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        r_i_reg_224 <= r_fu_428_p2;
    end else if (((exitcond4_fu_340_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        r_i_reg_224 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_1_cast_reg_602[4 : 0] <= i_1_cast_fu_336_p1[4 : 0];
        i_7_reg_610 <= i_7_fu_346_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_31_reg_628 <= i_31_fu_380_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        i_32_reg_693 <= i_32_fu_512_p2;
        i_4_cast5_reg_685[4 : 0] <= i_4_cast5_fu_502_p1[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        i_3_cast6_reg_661[5 : 0] <= i_3_cast6_fu_468_p1[5 : 0];
        tmp_89_reg_669 <= tmp_89_fu_478_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        i_8_reg_706 <= i_8_fu_536_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_340_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        mlen_assign_reg_620 <= mlen_assign_fu_364_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_fu_374_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        s_addr_3_reg_638 <= i_1_cast_reg_602;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i3_fu_530_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14))) begin
        s_addr_4_reg_716 <= i_4_cast5_reg_685;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_506_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state13))) begin
        tmp_92_reg_698[7 : 3] <= tmp_92_fu_518_p3[7 : 3];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_340_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        tmp_97_cast_reg_615[7 : 3] <= tmp_97_cast_fu_360_p1[7 : 3];
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((exitcond_fu_506_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state13)))) begin
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
    if (((exitcond_fu_506_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state13))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        m_address0 = sum9_cast_fu_490_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        m_address0 = sum_i_cast_fu_397_p1;
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
        s_address0 = s_addr_4_reg_716;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        s_address0 = i_4_cast5_reg_685;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        s_address0 = s_addr_3_reg_638;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        s_address0 = i_1_cast_reg_602;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_address0 = i_cast_fu_313_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        s_address0 = grp_KeccakF1600_StatePer_fu_305_state_address0;
    end else begin
        s_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state14))) begin
        s_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        s_ce0 = grp_KeccakF1600_StatePer_fu_305_state_ce0;
    end else begin
        s_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        s_ce1 = grp_KeccakF1600_StatePer_fu_305_state_ce1;
    end else begin
        s_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        s_d0 = tmp_93_fu_584_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        s_d0 = tmp_91_fu_434_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        s_d0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        s_d0 = grp_KeccakF1600_StatePer_fu_305_state_d0;
    end else begin
        s_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state7) | ((tmp_fu_318_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        s_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        s_we0 = grp_KeccakF1600_StatePer_fu_305_state_we0;
    end else begin
        s_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        s_we1 = grp_KeccakF1600_StatePer_fu_305_state_we1;
    end else begin
        s_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        t_address0 = 64'd56;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        t_address0 = i_3_cast6_reg_661;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        t_address0 = 64'd135;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        t_address0 = i_2_cast8_fu_447_p1;
    end else begin
        t_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        t_address1 = sum_i4_cast_fu_547_p1;
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
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state11) | ((exitcond3_fu_452_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9)))) begin
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
            if (((tmp_fu_318_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_s_fu_330_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((exitcond4_fu_340_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((tmp_i_fu_374_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
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
            if (((1'b1 == ap_CS_fsm_state8) & (grp_KeccakF1600_StatePer_fu_305_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state9 : begin
            if (((exitcond3_fu_452_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state10 : begin
            if (((exitcond2_fu_472_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state10))) begin
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
            if (((exitcond_fu_506_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state13))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        ap_ST_fsm_state14 : begin
            if (((tmp_i3_fu_530_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state14))) begin
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

assign exitcond2_fu_472_p2 = ((i_3_reg_259 == 6'd56) ? 1'b1 : 1'b0);

assign exitcond3_fu_452_p2 = ((i_2_reg_248 == 8'd136) ? 1'b1 : 1'b0);

assign exitcond4_fu_340_p2 = ((i_1_reg_213 == 5'd17) ? 1'b1 : 1'b0);

assign exitcond_fu_506_p2 = ((i_4_reg_270 == 5'd17) ? 1'b1 : 1'b0);

assign grp_KeccakF1600_StatePer_fu_305_ap_start = grp_KeccakF1600_StatePer_fu_305_ap_start_reg;

assign i_1_cast_fu_336_p1 = i_1_reg_213;

assign i_28_fu_324_p2 = (i_reg_178 + 5'd1);

assign i_2_cast8_fu_447_p1 = i_2_reg_248;

assign i_30_fu_458_p2 = (i_2_reg_248 + 8'd1);

assign i_31_fu_380_p2 = (i_i_reg_236 + 4'd1);

assign i_32_fu_512_p2 = (i_4_reg_270 + 5'd1);

assign i_3_cast6_fu_468_p1 = i_3_reg_259;

assign i_3_cast7_fu_464_p1 = i_3_reg_259;

assign i_4_cast5_fu_502_p1 = i_4_reg_270;

assign i_7_fu_346_p2 = (i_1_reg_213 + 5'd1);

assign i_8_fu_536_p2 = (i_i2_reg_293 + 4'd1);

assign i_cast_fu_313_p1 = i_reg_178;

assign i_i2_cast3_fu_526_p1 = i_i2_reg_293;

assign i_i_cast_fu_370_p1 = i_i_reg_236;

assign mlen_assign_fu_364_p2 = ($signed(i_29_reg_189) + $signed(9'd376));

assign p_rec_fu_441_p2 = (p_01_rec_reg_201 + 9'd136);

assign r_12_fu_578_p2 = (tmp_136_i_fu_572_p2 | r_i1_reg_281);

assign r_fu_428_p2 = (tmp_132_i_fu_422_p2 | r_i_reg_224);

assign s_address1 = grp_KeccakF1600_StatePer_fu_305_state_address1;

assign s_d1 = grp_KeccakF1600_StatePer_fu_305_state_d1;

assign sum9_cast_fu_490_p1 = sum9_fu_484_p2;

assign sum9_fu_484_p2 = ($signed(i_3_cast7_fu_464_p1) + $signed(9'd272));

assign sum_i4_cast_fu_547_p1 = sum_i4_fu_542_p2;

assign sum_i4_fu_542_p2 = (tmp_92_reg_698 + i_i2_cast3_fu_526_p1);

assign sum_i_cast_fu_397_p1 = sum_i_fu_392_p2;

assign sum_i_fu_392_p2 = (tmp_97_cast_reg_615 + tmp1_fu_386_p2);

assign t_d1 = (t_q0 | 8'd128);

assign tmp1_fu_386_p2 = (i_i_cast_fu_370_p1 + p_01_rec_reg_201);

assign tmp_100_fu_556_p1 = i_i2_reg_293[2:0];

assign tmp_131_i_cast_fu_418_p1 = tmp_131_i_fu_410_p3;

assign tmp_131_i_fu_410_p3 = {{tmp_99_fu_406_p1}, {3'd0}};

assign tmp_132_i_fu_422_p2 = tmp_i_59_fu_402_p1 << tmp_131_i_cast_fu_418_p1;

assign tmp_135_i_cast_fu_568_p1 = tmp_135_i_fu_560_p3;

assign tmp_135_i_fu_560_p3 = {{tmp_100_fu_556_p1}, {3'd0}};

assign tmp_136_i_fu_572_p2 = tmp_i7_fu_552_p1 << tmp_135_i_cast_fu_568_p1;

assign tmp_88_fu_352_p3 = {{i_1_reg_213}, {3'd0}};

assign tmp_89_fu_478_p2 = (i_3_reg_259 + 6'd1);

assign tmp_91_fu_434_p2 = (s_q0 ^ r_i_reg_224);

assign tmp_92_fu_518_p3 = {{i_4_reg_270}, {3'd0}};

assign tmp_93_fu_584_p2 = (s_q0 ^ r_i1_reg_281);

assign tmp_97_cast_fu_360_p1 = tmp_88_fu_352_p3;

assign tmp_99_fu_406_p1 = i_i_reg_236[2:0];

assign tmp_fu_318_p2 = ((i_reg_178 == 5'd25) ? 1'b1 : 1'b0);

assign tmp_i3_fu_530_p2 = ((i_i2_reg_293 == 4'd8) ? 1'b1 : 1'b0);

assign tmp_i7_fu_552_p1 = t_q1;

assign tmp_i_59_fu_402_p1 = m_q0;

assign tmp_i_fu_374_p2 = ((i_i_reg_236 == 4'd8) ? 1'b1 : 1'b0);

assign tmp_s_fu_330_p2 = ((i_29_reg_189 < 9'd136) ? 1'b1 : 1'b0);

always @ (posedge ap_clk) begin
    i_1_cast_reg_602[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    tmp_97_cast_reg_615[2:0] <= 3'b000;
    tmp_97_cast_reg_615[8] <= 1'b0;
    i_3_cast6_reg_661[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
    i_4_cast5_reg_685[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    tmp_92_reg_698[2:0] <= 3'b000;
end

endmodule //keccak_absorb