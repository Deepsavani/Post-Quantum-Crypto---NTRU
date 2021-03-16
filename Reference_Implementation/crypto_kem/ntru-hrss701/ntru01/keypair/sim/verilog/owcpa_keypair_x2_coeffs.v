// ==============================================================
// File generated on Sun Aug 23 22:38:40 EDT 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module owcpa_keypair_x2_coeffs_ram (addr0, ce0, d0, we0, q0, addr1, ce1, d1, we1, q1,  clk);

parameter DWIDTH = 16;
parameter AWIDTH = 10;
parameter MEM_SIZE = 701;
parameter COL_WIDTH = 8;
parameter NUM_COL = (DWIDTH/COL_WIDTH);

input[AWIDTH-1:0] addr0;
input ce0;
input[DWIDTH-1:0] d0;
input [NUM_COL-1:0] we0;
output reg[DWIDTH-1:0] q0;
input[AWIDTH-1:0] addr1;
input ce1;
input[DWIDTH-1:0] d1;
input [NUM_COL-1:0] we1;
output reg[DWIDTH-1:0] q1;
input clk;

(* ram_style = "block" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];



genvar i;

generate
    for (i=0;i<NUM_COL;i=i+1) begin
        always @(posedge clk) begin
            if (ce0) begin
                if (we0[i]) begin
                    ram[addr0][i*COL_WIDTH +: COL_WIDTH] <= d0[i*COL_WIDTH +: COL_WIDTH]; 
                end
                q0[i*COL_WIDTH +: COL_WIDTH] <= ram[addr0][i*COL_WIDTH +: COL_WIDTH];
            end
        end
    end
endgenerate


generate
    for (i=0;i<NUM_COL;i=i+1) begin
        always @(posedge clk) begin
            if (ce1) begin
                if (we1[i]) begin
                    ram[addr1][i*COL_WIDTH +: COL_WIDTH] <= d1[i*COL_WIDTH +: COL_WIDTH]; 
                end
                q1[i*COL_WIDTH +: COL_WIDTH] <= ram[addr1][i*COL_WIDTH +: COL_WIDTH];
            end
        end
    end
endgenerate


endmodule

`timescale 1 ns / 1 ps
module owcpa_keypair_x2_coeffs(
    reset,
    clk,
    address0,
    ce0,
    we0,
    d0,
    q0,
    address1,
    ce1,
    we1,
    d1,
    q1);

parameter DataWidth = 32'd16;
parameter AddressRange = 32'd701;
parameter AddressWidth = 32'd10;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
input[DataWidth/8 - 1:0] we0;
input[DataWidth - 1:0] d0;
output[DataWidth - 1:0] q0;
input[AddressWidth - 1:0] address1;
input ce1;
input[DataWidth/8 - 1:0] we1;
input[DataWidth - 1:0] d1;
output[DataWidth - 1:0] q1;



owcpa_keypair_x2_coeffs_ram owcpa_keypair_x2_coeffs_ram_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .we0( we0 ),
    .d0( d0 ),
    .q0( q0 ),
    .addr1( address1 ),
    .ce1( ce1 ),
    .we1( we1 ),
    .d1( d1 ),
    .q1( q1 ));

endmodule

