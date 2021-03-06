// ==============================================================
// File generated on Sun Aug 23 20:04:52 EDT 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps

(* use_dsp = "yes" *) module crypto_kem_dec_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1_DSP48_2 (
    input  [2 - 1:0] in0,
    input  [3 - 1:0] in1,
    input  [16 - 1:0] in2,
    input  [16 - 1:0] in3,
    output [16 - 1:0]  dout);


wire signed [18 - 1:0]     b;
wire signed [25 - 1:0]     a;
wire signed [25 - 1:0]     d;
wire signed [48 - 1:0]     c;
wire signed [43 - 1:0]     m;
wire signed [48 - 1:0]     p;
wire signed [25 - 1:0]     ad;

assign a = $unsigned(in0);
assign d = $unsigned(in1);
assign b = $signed(in2);
assign c = $unsigned(in3);

assign ad = a + d;
assign m  = ad * b;
assign p  = m + c;

assign dout = p;

endmodule
`timescale 1 ns / 1 ps
module crypto_kem_dec_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1(
    din0,
    din1,
    din2,
    din3,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter din2_WIDTH = 32'd1;
parameter din3_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
input[din2_WIDTH - 1:0] din2;
input[din3_WIDTH - 1:0] din3;
output[dout_WIDTH - 1:0] dout;



crypto_kem_dec_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1_DSP48_2 crypto_kem_dec_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1_DSP48_2_U(
    .in0( din0 ),
    .in1( din1 ),
    .in2( din2 ),
    .in3( din3 ),
    .dout( dout ));

endmodule

