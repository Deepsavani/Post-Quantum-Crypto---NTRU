// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module mod3 (
        ap_ready,
        a,
        ap_return
);


output   ap_ready;
input  [15:0] a;
output  [15:0] ap_return;

wire   [7:0] tmp_fu_52_p4;
wire   [7:0] tmp_326_fu_66_p1;
wire   [8:0] tmp_cast_82_fu_70_p1;
wire   [8:0] tmp_cast_fu_62_p1;
wire   [8:0] r_fu_80_p2;
wire   [4:0] tmp_93_fu_86_p4;
wire   [3:0] tmp_65_fu_104_p4;
wire   [3:0] tmp_327_fu_100_p1;
wire   [3:0] fold_cast_fu_128_p2;
wire   [5:0] tmp_356_cast_fu_134_p1;
wire   [5:0] tmp_355_cast_fu_96_p1;
wire   [5:0] r_1_fu_138_p2;
wire   [1:0] tmp_66_fu_114_p4;
wire   [1:0] tmp_328_fu_124_p1;
wire   [7:0] tmp_92_fu_74_p2;
wire   [1:0] tmp_69_fu_160_p4;
wire   [1:0] tmp_68_fu_154_p2;
wire   [1:0] fold1_cast_fu_170_p2;
wire   [3:0] tmp_358_cast_fu_176_p1;
wire   [3:0] tmp_357_cast_fu_144_p4;
wire   [3:0] r_2_fu_180_p2;
wire   [1:0] tmp_94_fu_186_p4;
wire   [1:0] tmp_70_fu_200_p4;
wire   [1:0] fold2_cast_fu_210_p2;
wire   [2:0] tmp_360_cast_fu_216_p1;
wire   [2:0] tmp_359_cast_fu_196_p1;
wire   [2:0] r_3_fu_220_p2;
wire   [2:0] t_fu_226_p2;
wire   [0:0] tmp_329_fu_232_p3;
wire   [2:0] c_cast_fu_240_p3;
wire   [2:0] tmp_s_fu_248_p2;
wire   [0:0] not_tmp_s_fu_258_p2;
wire   [2:0] tmp_362_cast_cast_fu_264_p3;
wire   [2:0] tmp_219_fu_272_p2;
wire   [15:0] tmp_361_cast_fu_254_p1;
wire  signed [15:0] tmp_363_cast_fu_278_p1;

assign ap_ready = 1'b1;

assign ap_return = (tmp_363_cast_fu_278_p1 ^ tmp_361_cast_fu_254_p1);

assign c_cast_fu_240_p3 = ((tmp_329_fu_232_p3[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign fold1_cast_fu_170_p2 = (tmp_69_fu_160_p4 + tmp_68_fu_154_p2);

assign fold2_cast_fu_210_p2 = (fold1_cast_fu_170_p2 + tmp_70_fu_200_p4);

assign fold_cast_fu_128_p2 = (tmp_65_fu_104_p4 + tmp_327_fu_100_p1);

assign not_tmp_s_fu_258_p2 = (tmp_329_fu_232_p3 ^ 1'd1);

assign r_1_fu_138_p2 = (tmp_356_cast_fu_134_p1 + tmp_355_cast_fu_96_p1);

assign r_2_fu_180_p2 = (tmp_358_cast_fu_176_p1 + tmp_357_cast_fu_144_p4);

assign r_3_fu_220_p2 = (tmp_360_cast_fu_216_p1 + tmp_359_cast_fu_196_p1);

assign r_fu_80_p2 = (tmp_cast_82_fu_70_p1 + tmp_cast_fu_62_p1);

assign t_fu_226_p2 = ($signed(3'd5) + $signed(r_3_fu_220_p2));

assign tmp_219_fu_272_p2 = (tmp_362_cast_cast_fu_264_p3 & t_fu_226_p2);

assign tmp_326_fu_66_p1 = a[7:0];

assign tmp_327_fu_100_p1 = a[3:0];

assign tmp_328_fu_124_p1 = a[1:0];

assign tmp_329_fu_232_p3 = t_fu_226_p2[32'd2];

assign tmp_355_cast_fu_96_p1 = tmp_93_fu_86_p4;

assign tmp_356_cast_fu_134_p1 = fold_cast_fu_128_p2;

assign tmp_357_cast_fu_144_p4 = {{r_1_fu_138_p2[5:2]}};

assign tmp_358_cast_fu_176_p1 = fold1_cast_fu_170_p2;

assign tmp_359_cast_fu_196_p1 = tmp_94_fu_186_p4;

assign tmp_360_cast_fu_216_p1 = fold2_cast_fu_210_p2;

assign tmp_361_cast_fu_254_p1 = tmp_s_fu_248_p2;

assign tmp_362_cast_cast_fu_264_p3 = ((not_tmp_s_fu_258_p2[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign tmp_363_cast_fu_278_p1 = $signed(tmp_219_fu_272_p2);

assign tmp_65_fu_104_p4 = {{a[11:8]}};

assign tmp_66_fu_114_p4 = {{a[9:8]}};

assign tmp_68_fu_154_p2 = (tmp_66_fu_114_p4 + tmp_328_fu_124_p1);

assign tmp_69_fu_160_p4 = {{tmp_92_fu_74_p2[5:4]}};

assign tmp_70_fu_200_p4 = {{r_1_fu_138_p2[3:2]}};

assign tmp_92_fu_74_p2 = (tmp_fu_52_p4 + tmp_326_fu_66_p1);

assign tmp_93_fu_86_p4 = {{r_fu_80_p2[8:4]}};

assign tmp_94_fu_186_p4 = {{r_2_fu_180_p2[3:2]}};

assign tmp_cast_82_fu_70_p1 = tmp_326_fu_66_p1;

assign tmp_cast_fu_62_p1 = tmp_fu_52_p4;

assign tmp_fu_52_p4 = {{a[15:8]}};

assign tmp_s_fu_248_p2 = (r_3_fu_220_p2 & c_cast_fu_240_p3);

endmodule //mod3
