// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module poly_S3_frombytes (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        r_coeffs_address0,
        r_coeffs_ce0,
        r_coeffs_we0,
        r_coeffs_d0,
        r_coeffs_address1,
        r_coeffs_ce1,
        r_coeffs_we1,
        r_coeffs_d1,
        msg_address0,
        msg_ce0,
        msg_q0,
        msg_offset
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_state2 = 7'd2;
parameter    ap_ST_fsm_state3 = 7'd4;
parameter    ap_ST_fsm_state4 = 7'd8;
parameter    ap_ST_fsm_state5 = 7'd16;
parameter    ap_ST_fsm_state6 = 7'd32;
parameter    ap_ST_fsm_state7 = 7'd64;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] r_coeffs_address0;
output   r_coeffs_ce0;
output   r_coeffs_we0;
output  [15:0] r_coeffs_d0;
output  [9:0] r_coeffs_address1;
output   r_coeffs_ce1;
output   r_coeffs_we1;
output  [15:0] r_coeffs_d1;
output  [10:0] msg_address0;
output   msg_ce0;
input  [7:0] msg_q0;
input  [9:0] msg_offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] r_coeffs_address0;
reg r_coeffs_ce0;
reg r_coeffs_we0;
reg[15:0] r_coeffs_d0;
reg[9:0] r_coeffs_address1;
reg r_coeffs_ce1;
reg r_coeffs_we1;
reg[15:0] r_coeffs_d1;
reg msg_ce0;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [15:0] grp_mod3_fu_153_ap_return;
reg   [15:0] reg_163;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire   [15:0] grp_mod3_fu_158_ap_return;
reg   [15:0] reg_169;
wire   [8:0] tmp_53_fu_175_p1;
reg   [8:0] tmp_53_reg_357;
wire   [7:0] i_7_fu_189_p2;
reg   [7:0] i_7_reg_365;
wire    ap_CS_fsm_state2;
wire   [0:0] exitcond_fu_183_p2;
wire   [9:0] tmp_32_fu_217_p2;
reg   [9:0] tmp_32_reg_375;
reg   [7:0] c_reg_384;
wire    ap_CS_fsm_state3;
reg   [6:0] tmp_reg_391;
reg   [1:0] tmp_49_reg_396;
reg   [4:0] tmp_39_reg_401;
reg   [3:0] tmp_44_reg_406;
wire    grp_mod3_fu_153_ap_ready;
reg   [7:0] grp_mod3_fu_153_a;
wire    grp_mod3_fu_158_ap_ready;
reg   [7:0] grp_mod3_fu_158_a;
reg   [7:0] i_reg_142;
wire    ap_CS_fsm_state7;
wire   [7:0] tmp_42_cast_cast_fu_315_p1;
wire   [7:0] tmp_52_cast_fu_343_p1;
wire   [7:0] tmp_37_cast_fu_265_p1;
wire   [7:0] tmp_47_cast_cast_fu_319_p1;
wire   [63:0] sum_cast_fu_204_p1;
wire   [63:0] tmp_33_fu_301_p1;
wire   [63:0] tmp_37_fu_310_p1;
wire   [63:0] tmp_42_fu_328_p1;
wire   [63:0] tmp_47_fu_338_p1;
wire   [63:0] tmp_52_fu_352_p1;
wire   [8:0] tmp_cast_fu_195_p1;
wire   [8:0] sum_fu_199_p2;
wire   [9:0] p_shl_fu_209_p3;
wire   [9:0] i_cast3_fu_179_p1;
wire   [7:0] tmp_34_fu_227_p0;
wire   [15:0] tmp_s_fu_223_p1;
wire   [15:0] tmp_34_fu_227_p2;
wire   [7:0] tmp_48_fu_243_p0;
wire   [15:0] tmp_48_fu_243_p2;
wire   [7:0] tmp_38_fu_269_p0;
wire   [13:0] tmp_38_fu_269_p2;
wire   [7:0] tmp_43_fu_285_p0;
wire   [12:0] tmp_43_fu_285_p2;
wire   [9:0] tmp_36_fu_305_p2;
wire   [9:0] tmp_41_fu_323_p2;
wire   [9:0] tmp_46_fu_333_p2;
wire   [9:0] tmp_51_fu_347_p2;
reg   [6:0] ap_NS_fsm;
wire   [13:0] tmp_38_fu_269_p00;
wire   [12:0] tmp_43_fu_285_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
end

mod3 grp_mod3_fu_153(
    .ap_ready(grp_mod3_fu_153_ap_ready),
    .a(grp_mod3_fu_153_a),
    .ap_return(grp_mod3_fu_153_ap_return)
);

mod3 grp_mod3_fu_158(
    .ap_ready(grp_mod3_fu_158_ap_ready),
    .a(grp_mod3_fu_158_a),
    .ap_return(grp_mod3_fu_158_ap_return)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        i_reg_142 <= i_7_reg_365;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_142 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        c_reg_384 <= msg_q0;
        tmp_49_reg_396 <= {{tmp_48_fu_243_p2[15:14]}};
        tmp_reg_391 <= {{tmp_34_fu_227_p2[15:9]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_7_reg_365 <= i_7_fu_189_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4))) begin
        reg_163 <= grp_mod3_fu_153_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4))) begin
        reg_169 <= grp_mod3_fu_158_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_183_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_32_reg_375 <= tmp_32_fu_217_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_39_reg_401 <= {{tmp_38_fu_269_p2[13:9]}};
        tmp_44_reg_406 <= {{tmp_43_fu_285_p2[12:9]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_53_reg_357 <= tmp_53_fu_175_p1;
    end
end

always @ (*) begin
    if ((((exitcond_fu_183_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((exitcond_fu_183_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_mod3_fu_153_a = tmp_52_cast_fu_343_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_mod3_fu_153_a = tmp_42_cast_cast_fu_315_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_mod3_fu_153_a = c_reg_384;
    end else begin
        grp_mod3_fu_153_a = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_mod3_fu_158_a = tmp_47_cast_cast_fu_319_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_mod3_fu_158_a = tmp_37_cast_fu_265_p1;
    end else begin
        grp_mod3_fu_158_a = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        msg_ce0 = 1'b1;
    end else begin
        msg_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_address0 = tmp_47_fu_338_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_address0 = tmp_33_fu_301_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_address0 = 64'd820;
    end else begin
        r_coeffs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        r_coeffs_address1 = tmp_52_fu_352_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_address1 = tmp_42_fu_328_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_address1 = tmp_37_fu_310_p1;
    end else begin
        r_coeffs_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        r_coeffs_ce0 = 1'b1;
    end else begin
        r_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state7))) begin
        r_coeffs_ce1 = 1'b1;
    end else begin
        r_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        r_coeffs_d0 = reg_169;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d0 = reg_163;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        r_coeffs_d0 = 16'd0;
    end else begin
        r_coeffs_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state7))) begin
        r_coeffs_d1 = reg_163;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        r_coeffs_d1 = reg_169;
    end else begin
        r_coeffs_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | ((exitcond_fu_183_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)))) begin
        r_coeffs_we0 = 1'b1;
    end else begin
        r_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state7))) begin
        r_coeffs_we1 = 1'b1;
    end else begin
        r_coeffs_we1 = 1'b0;
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
            if (((exitcond_fu_183_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
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

assign exitcond_fu_183_p2 = ((i_reg_142 == 8'd164) ? 1'b1 : 1'b0);

assign i_7_fu_189_p2 = (i_reg_142 + 8'd1);

assign i_cast3_fu_179_p1 = i_reg_142;

assign msg_address0 = sum_cast_fu_204_p1;

assign p_shl_fu_209_p3 = {{i_reg_142}, {2'd0}};

assign sum_cast_fu_204_p1 = sum_fu_199_p2;

assign sum_fu_199_p2 = (tmp_cast_fu_195_p1 + tmp_53_reg_357);

assign tmp_32_fu_217_p2 = (p_shl_fu_209_p3 + i_cast3_fu_179_p1);

assign tmp_33_fu_301_p1 = tmp_32_reg_375;

assign tmp_34_fu_227_p0 = tmp_s_fu_223_p1;

assign tmp_34_fu_227_p2 = (tmp_34_fu_227_p0 * $signed('hAB));

assign tmp_36_fu_305_p2 = (tmp_32_reg_375 + 10'd1);

assign tmp_37_cast_fu_265_p1 = tmp_reg_391;

assign tmp_37_fu_310_p1 = tmp_36_fu_305_p2;

assign tmp_38_fu_269_p0 = tmp_38_fu_269_p00;

assign tmp_38_fu_269_p00 = c_reg_384;

assign tmp_38_fu_269_p2 = (tmp_38_fu_269_p0 * $signed('h39));

assign tmp_41_fu_323_p2 = (tmp_32_reg_375 + 10'd2);

assign tmp_42_cast_cast_fu_315_p1 = tmp_39_reg_401;

assign tmp_42_fu_328_p1 = tmp_41_fu_323_p2;

assign tmp_43_fu_285_p0 = tmp_43_fu_285_p00;

assign tmp_43_fu_285_p00 = c_reg_384;

assign tmp_43_fu_285_p2 = (tmp_43_fu_285_p0 * $signed('h13));

assign tmp_46_fu_333_p2 = (tmp_32_reg_375 + 10'd3);

assign tmp_47_cast_cast_fu_319_p1 = tmp_44_reg_406;

assign tmp_47_fu_338_p1 = tmp_46_fu_333_p2;

assign tmp_48_fu_243_p0 = tmp_s_fu_223_p1;

assign tmp_48_fu_243_p2 = (tmp_48_fu_243_p0 * $signed('hCB));

assign tmp_51_fu_347_p2 = (tmp_32_reg_375 + 10'd4);

assign tmp_52_cast_fu_343_p1 = tmp_49_reg_396;

assign tmp_52_fu_352_p1 = tmp_51_fu_347_p2;

assign tmp_53_fu_175_p1 = msg_offset[8:0];

assign tmp_cast_fu_195_p1 = i_reg_142;

assign tmp_s_fu_223_p1 = msg_q0;

endmodule //poly_S3_frombytes
