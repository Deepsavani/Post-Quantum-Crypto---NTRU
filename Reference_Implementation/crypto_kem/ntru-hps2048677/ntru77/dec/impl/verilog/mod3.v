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
input  [7:0] a;
output  [15:0] ap_return;

wire   [3:0] tmp_135_fu_38_p4;
wire   [3:0] tmp_fu_52_p1;
wire   [4:0] tmp_198_cast_fu_56_p1;
wire   [4:0] tmp_197_cast_fu_48_p1;
wire   [4:0] r_1_fu_66_p2;
wire   [2:0] tmp_137_fu_72_p4;
wire   [1:0] tmp_s_fu_90_p4;
wire   [1:0] tmp_228_fu_86_p1;
wire   [1:0] fold1_cast_fu_100_p2;
wire   [3:0] tmp_200_cast_fu_106_p1;
wire   [3:0] tmp_199_cast_fu_82_p1;
wire   [3:0] r_2_fu_110_p2;
wire   [1:0] tmp_138_fu_116_p4;
wire   [3:0] tmp_136_fu_60_p2;
wire   [1:0] tmp_215_fu_130_p4;
wire   [1:0] fold2_cast_fu_140_p2;
wire   [2:0] tmp_202_cast_fu_146_p1;
wire   [2:0] tmp_201_cast_fu_126_p1;
wire   [2:0] r_3_fu_150_p2;
wire   [2:0] t_fu_156_p2;
wire   [0:0] tmp_229_fu_162_p3;
wire   [2:0] c_cast_fu_170_p3;
wire   [2:0] tmp_198_fu_178_p2;
wire   [0:0] not_tmp_s_fu_188_p2;
wire   [2:0] tmp_204_cast_cast_fu_194_p3;
wire   [2:0] tmp_199_fu_202_p2;
wire   [15:0] tmp_203_cast_fu_184_p1;
wire  signed [15:0] tmp_205_cast_fu_208_p1;

assign ap_ready = 1'b1;

assign ap_return = (tmp_205_cast_fu_208_p1 ^ tmp_203_cast_fu_184_p1);

assign c_cast_fu_170_p3 = ((tmp_229_fu_162_p3[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign fold1_cast_fu_100_p2 = (tmp_s_fu_90_p4 + tmp_228_fu_86_p1);

assign fold2_cast_fu_140_p2 = (fold1_cast_fu_100_p2 + tmp_215_fu_130_p4);

assign not_tmp_s_fu_188_p2 = (tmp_229_fu_162_p3 ^ 1'd1);

assign r_1_fu_66_p2 = (tmp_198_cast_fu_56_p1 + tmp_197_cast_fu_48_p1);

assign r_2_fu_110_p2 = (tmp_200_cast_fu_106_p1 + tmp_199_cast_fu_82_p1);

assign r_3_fu_150_p2 = (tmp_202_cast_fu_146_p1 + tmp_201_cast_fu_126_p1);

assign t_fu_156_p2 = ($signed(3'd5) + $signed(r_3_fu_150_p2));

assign tmp_135_fu_38_p4 = {{a[7:4]}};

assign tmp_136_fu_60_p2 = (tmp_135_fu_38_p4 + tmp_fu_52_p1);

assign tmp_137_fu_72_p4 = {{r_1_fu_66_p2[4:2]}};

assign tmp_138_fu_116_p4 = {{r_2_fu_110_p2[3:2]}};

assign tmp_197_cast_fu_48_p1 = tmp_135_fu_38_p4;

assign tmp_198_cast_fu_56_p1 = tmp_fu_52_p1;

assign tmp_198_fu_178_p2 = (r_3_fu_150_p2 & c_cast_fu_170_p3);

assign tmp_199_cast_fu_82_p1 = tmp_137_fu_72_p4;

assign tmp_199_fu_202_p2 = (tmp_204_cast_cast_fu_194_p3 & t_fu_156_p2);

assign tmp_200_cast_fu_106_p1 = fold1_cast_fu_100_p2;

assign tmp_201_cast_fu_126_p1 = tmp_138_fu_116_p4;

assign tmp_202_cast_fu_146_p1 = fold2_cast_fu_140_p2;

assign tmp_203_cast_fu_184_p1 = tmp_198_fu_178_p2;

assign tmp_204_cast_cast_fu_194_p3 = ((not_tmp_s_fu_188_p2[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign tmp_205_cast_fu_208_p1 = $signed(tmp_199_fu_202_p2);

assign tmp_215_fu_130_p4 = {{tmp_136_fu_60_p2[3:2]}};

assign tmp_228_fu_86_p1 = a[1:0];

assign tmp_229_fu_162_p3 = t_fu_156_p2[32'd2];

assign tmp_fu_52_p1 = a[3:0];

assign tmp_s_fu_90_p4 = {{a[5:4]}};

endmodule //mod3
