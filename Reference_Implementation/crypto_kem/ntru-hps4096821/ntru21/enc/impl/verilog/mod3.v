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

wire   [3:0] tmp_23_fu_38_p4;
wire   [3:0] tmp_fu_52_p1;
wire   [4:0] tmp_163_cast_fu_56_p1;
wire   [4:0] tmp_162_cast_fu_48_p1;
wire   [4:0] r_fu_66_p2;
wire   [2:0] tmp_25_fu_72_p4;
wire   [1:0] tmp_38_fu_90_p4;
wire   [1:0] tmp_82_fu_86_p1;
wire   [1:0] fold1_cast_fu_100_p2;
wire   [3:0] tmp_165_cast_fu_106_p1;
wire   [3:0] tmp_164_cast_fu_82_p1;
wire   [3:0] r_1_fu_110_p2;
wire   [1:0] tmp_26_fu_116_p4;
wire   [3:0] tmp_24_fu_60_p2;
wire   [1:0] tmp_39_fu_130_p4;
wire   [1:0] fold2_cast_fu_140_p2;
wire   [2:0] tmp_167_cast_fu_146_p1;
wire   [2:0] tmp_166_cast_fu_126_p1;
wire   [2:0] r_2_fu_150_p2;
wire   [2:0] t_fu_156_p2;
wire   [0:0] tmp_83_fu_162_p3;
wire   [2:0] c_cast_fu_170_p3;
wire   [2:0] tmp_s_fu_178_p2;
wire   [0:0] not_tmp_9_fu_188_p2;
wire   [2:0] tmp_169_cast_cast_fu_194_p3;
wire   [2:0] tmp_79_fu_202_p2;
wire   [15:0] tmp_168_cast_fu_184_p1;
wire  signed [15:0] tmp_170_cast_fu_208_p1;

assign ap_ready = 1'b1;

assign ap_return = (tmp_170_cast_fu_208_p1 ^ tmp_168_cast_fu_184_p1);

assign c_cast_fu_170_p3 = ((tmp_83_fu_162_p3[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign fold1_cast_fu_100_p2 = (tmp_38_fu_90_p4 + tmp_82_fu_86_p1);

assign fold2_cast_fu_140_p2 = (fold1_cast_fu_100_p2 + tmp_39_fu_130_p4);

assign not_tmp_9_fu_188_p2 = (tmp_83_fu_162_p3 ^ 1'd1);

assign r_1_fu_110_p2 = (tmp_165_cast_fu_106_p1 + tmp_164_cast_fu_82_p1);

assign r_2_fu_150_p2 = (tmp_167_cast_fu_146_p1 + tmp_166_cast_fu_126_p1);

assign r_fu_66_p2 = (tmp_163_cast_fu_56_p1 + tmp_162_cast_fu_48_p1);

assign t_fu_156_p2 = ($signed(3'd5) + $signed(r_2_fu_150_p2));

assign tmp_162_cast_fu_48_p1 = tmp_23_fu_38_p4;

assign tmp_163_cast_fu_56_p1 = tmp_fu_52_p1;

assign tmp_164_cast_fu_82_p1 = tmp_25_fu_72_p4;

assign tmp_165_cast_fu_106_p1 = fold1_cast_fu_100_p2;

assign tmp_166_cast_fu_126_p1 = tmp_26_fu_116_p4;

assign tmp_167_cast_fu_146_p1 = fold2_cast_fu_140_p2;

assign tmp_168_cast_fu_184_p1 = tmp_s_fu_178_p2;

assign tmp_169_cast_cast_fu_194_p3 = ((not_tmp_9_fu_188_p2[0:0] === 1'b1) ? 3'd7 : 3'd0);

assign tmp_170_cast_fu_208_p1 = $signed(tmp_79_fu_202_p2);

assign tmp_23_fu_38_p4 = {{a[7:4]}};

assign tmp_24_fu_60_p2 = (tmp_23_fu_38_p4 + tmp_fu_52_p1);

assign tmp_25_fu_72_p4 = {{r_fu_66_p2[4:2]}};

assign tmp_26_fu_116_p4 = {{r_1_fu_110_p2[3:2]}};

assign tmp_38_fu_90_p4 = {{a[5:4]}};

assign tmp_39_fu_130_p4 = {{tmp_24_fu_60_p2[3:2]}};

assign tmp_79_fu_202_p2 = (tmp_169_cast_cast_fu_194_p3 & t_fu_156_p2);

assign tmp_82_fu_86_p1 = a[1:0];

assign tmp_83_fu_162_p3 = t_fu_156_p2[32'd2];

assign tmp_fu_52_p1 = a[3:0];

assign tmp_s_fu_178_p2 = (r_2_fu_150_p2 & c_cast_fu_170_p3);

endmodule //mod3
