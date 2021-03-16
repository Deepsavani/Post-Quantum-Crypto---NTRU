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
wire   [7:0] tmp_344_fu_66_p1;
wire   [8:0] tmp_cast_79_fu_70_p1;
wire   [8:0] tmp_cast_fu_62_p1;
wire   [8:0] r_fu_80_p2;
wire   [4:0] tmp_208_fu_86_p4;
wire   [3:0] tmp_47_fu_104_p4;
wire   [3:0] tmp_345_fu_100_p1;
wire   [3:0] fold_cast_fu_128_p2;
wire   [5:0] tmp_298_cast_fu_134_p1;
wire   [5:0] tmp_297_cast_fu_96_p1;
wire   [5:0] r_1_fu_138_p2;
wire   [1:0] tmp_48_fu_114_p4;
wire   [1:0] tmp_346_fu_124_p1;
wire   [7:0] tmp_207_fu_74_p2;
wire   [1:0] tmp_51_fu_160_p4;
wire   [1:0] tmp_50_fu_154_p2;
wire   [1:0] fold1_cast_fu_170_p2;
wire   [3:0] tmp_300_cast_fu_176_p1;
wire   [3:0] tmp_299_cast_fu_144_p4;
wire   [3:0] r_2_fu_180_p2;
wire   [1:0] tmp_209_fu_186_p4;
wire   [1:0] tmp_52_fu_200_p4;
wire   [1:0] fold2_cast_fu_210_p2;
wire   [2:0] tmp_302_cast_fu_216_p1;
wire   [2:0] tmp_301_cast_fu_196_p1;
wire   [2:0] r_3_fu_220_p2;
wire   [2:0] t_fu_226_p2;
wire   [0:0] tmp_347_fu_232_p3;
wire   [2:0] c_cast_fu_240_p3;
wire   [2:0] tmp_s_fu_248_p2;
wire   [0:0] not_tmp_s_fu_258_p2;
wire   [2:0] tmp_304_cast_cast_fu_264_p3;
wire   [2:0] tmp_243_fu_272_p2;
wire   [15:0] tmp_303_cast_fu_254_p1;
wire  signed [15:0] tmp_305_cast_fu_278_p1;

assign ap_ready = 1'b1;

assign ap_return = (tmp_305_cast_fu_278_p1 ^ tmp_303_cast_fu_254_p1);

assign c_cast_fu_240_p3 = ((tmp_347_fu_232_p3[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign fold1_cast_fu_170_p2 = (tmp_51_fu_160_p4 + tmp_50_fu_154_p2);

assign fold2_cast_fu_210_p2 = (fold1_cast_fu_170_p2 + tmp_52_fu_200_p4);

assign fold_cast_fu_128_p2 = (tmp_47_fu_104_p4 + tmp_345_fu_100_p1);

assign not_tmp_s_fu_258_p2 = (tmp_347_fu_232_p3 ^ 1'd1);

assign r_1_fu_138_p2 = (tmp_298_cast_fu_134_p1 + tmp_297_cast_fu_96_p1);

assign r_2_fu_180_p2 = (tmp_300_cast_fu_176_p1 + tmp_299_cast_fu_144_p4);

assign r_3_fu_220_p2 = (tmp_302_cast_fu_216_p1 + tmp_301_cast_fu_196_p1);

assign r_fu_80_p2 = (tmp_cast_79_fu_70_p1 + tmp_cast_fu_62_p1);

assign t_fu_226_p2 = ($signed(3'd5) + $signed(r_3_fu_220_p2));

assign tmp_207_fu_74_p2 = (tmp_fu_52_p4 + tmp_344_fu_66_p1);

assign tmp_208_fu_86_p4 = {{r_fu_80_p2[8:4]}};

assign tmp_209_fu_186_p4 = {{r_2_fu_180_p2[3:2]}};

assign tmp_243_fu_272_p2 = (tmp_304_cast_cast_fu_264_p3 & t_fu_226_p2);

assign tmp_297_cast_fu_96_p1 = tmp_208_fu_86_p4;

assign tmp_298_cast_fu_134_p1 = fold_cast_fu_128_p2;

assign tmp_299_cast_fu_144_p4 = {{r_1_fu_138_p2[5:2]}};

assign tmp_300_cast_fu_176_p1 = fold1_cast_fu_170_p2;

assign tmp_301_cast_fu_196_p1 = tmp_209_fu_186_p4;

assign tmp_302_cast_fu_216_p1 = fold2_cast_fu_210_p2;

assign tmp_303_cast_fu_254_p1 = tmp_s_fu_248_p2;

assign tmp_304_cast_cast_fu_264_p3 = ((not_tmp_s_fu_258_p2[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign tmp_305_cast_fu_278_p1 = $signed(tmp_243_fu_272_p2);

assign tmp_344_fu_66_p1 = a[7:0];

assign tmp_345_fu_100_p1 = a[3:0];

assign tmp_346_fu_124_p1 = a[1:0];

assign tmp_347_fu_232_p3 = t_fu_226_p2[32'd2];

assign tmp_47_fu_104_p4 = {{a[11:8]}};

assign tmp_48_fu_114_p4 = {{a[9:8]}};

assign tmp_50_fu_154_p2 = (tmp_48_fu_114_p4 + tmp_346_fu_124_p1);

assign tmp_51_fu_160_p4 = {{tmp_207_fu_74_p2[5:4]}};

assign tmp_52_fu_200_p4 = {{r_1_fu_138_p2[3:2]}};

assign tmp_cast_79_fu_70_p1 = tmp_344_fu_66_p1;

assign tmp_cast_fu_62_p1 = tmp_fu_52_p4;

assign tmp_fu_52_p4 = {{a[15:8]}};

assign tmp_s_fu_248_p2 = (r_3_fu_220_p2 & c_cast_fu_240_p3);

endmodule //mod3