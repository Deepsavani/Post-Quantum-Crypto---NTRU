// ==============================================================
// File generated on Sun Aug 23 23:06:02 EDT 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      crypto_kem_keypair
`define AUTOTB_DUT_INST AESL_inst_crypto_kem_keypair
`define AUTOTB_TOP      apatb_crypto_kem_keypair_top
`define AUTOTB_LAT_RESULT_FILE "crypto_kem_keypair.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "crypto_kem_keypair.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_crypto_kem_keypair_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00

`define AESL_MEM_pk AESL_automem_pk
`define AESL_MEM_INST_pk mem_inst_pk
`define AESL_MEM_sk AESL_automem_sk
`define AESL_MEM_INST_sk mem_inst_sk
`define AESL_MEM_DRBG_ctx_V AESL_automem_DRBG_ctx_V
`define AESL_MEM_INST_DRBG_ctx_V mem_inst_DRBG_ctx_V
`define AESL_MEM_DRBG_ctx_Key AESL_automem_DRBG_ctx_Key
`define AESL_MEM_INST_DRBG_ctx_Key mem_inst_DRBG_ctx_Key
`define AESL_DEPTH_DRBG_ctx_reseed_counter 1
`define AUTOTB_TVIN_pk  "./c.crypto_kem_keypair.autotvin_pk.dat"
`define AUTOTB_TVIN_sk  "./c.crypto_kem_keypair.autotvin_sk.dat"
`define AUTOTB_TVIN_DRBG_ctx_V  "./c.crypto_kem_keypair.autotvin_DRBG_ctx_V.dat"
`define AUTOTB_TVIN_DRBG_ctx_Key  "./c.crypto_kem_keypair.autotvin_DRBG_ctx_Key.dat"
`define AUTOTB_TVIN_DRBG_ctx_reseed_counter  "./c.crypto_kem_keypair.autotvin_DRBG_ctx_reseed_counter.dat"
`define AUTOTB_TVIN_pk_out_wrapc  "./rtl.crypto_kem_keypair.autotvin_pk.dat"
`define AUTOTB_TVIN_sk_out_wrapc  "./rtl.crypto_kem_keypair.autotvin_sk.dat"
`define AUTOTB_TVIN_DRBG_ctx_V_out_wrapc  "./rtl.crypto_kem_keypair.autotvin_DRBG_ctx_V.dat"
`define AUTOTB_TVIN_DRBG_ctx_Key_out_wrapc  "./rtl.crypto_kem_keypair.autotvin_DRBG_ctx_Key.dat"
`define AUTOTB_TVIN_DRBG_ctx_reseed_counter_out_wrapc  "./rtl.crypto_kem_keypair.autotvin_DRBG_ctx_reseed_counter.dat"
`define AUTOTB_TVOUT_pk  "./c.crypto_kem_keypair.autotvout_pk.dat"
`define AUTOTB_TVOUT_sk  "./c.crypto_kem_keypair.autotvout_sk.dat"
`define AUTOTB_TVOUT_DRBG_ctx_V  "./c.crypto_kem_keypair.autotvout_DRBG_ctx_V.dat"
`define AUTOTB_TVOUT_DRBG_ctx_Key  "./c.crypto_kem_keypair.autotvout_DRBG_ctx_Key.dat"
`define AUTOTB_TVOUT_DRBG_ctx_reseed_counter  "./c.crypto_kem_keypair.autotvout_DRBG_ctx_reseed_counter.dat"
`define AUTOTB_TVOUT_ap_return  "./c.crypto_kem_keypair.autotvout_ap_return.dat"
`define AUTOTB_TVOUT_pk_out_wrapc  "./impl_rtl.crypto_kem_keypair.autotvout_pk.dat"
`define AUTOTB_TVOUT_sk_out_wrapc  "./impl_rtl.crypto_kem_keypair.autotvout_sk.dat"
`define AUTOTB_TVOUT_DRBG_ctx_V_out_wrapc  "./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_V.dat"
`define AUTOTB_TVOUT_DRBG_ctx_Key_out_wrapc  "./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_Key.dat"
`define AUTOTB_TVOUT_DRBG_ctx_reseed_counter_out_wrapc  "./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_reseed_counter.dat"
`define AUTOTB_TVOUT_ap_return_out_wrapc  "./impl_rtl.crypto_kem_keypair.autotvout_ap_return.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 2;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = -1;
parameter LENGTH_pk = 1138;
parameter LENGTH_sk = 1450;
parameter LENGTH_DRBG_ctx_V = 16;
parameter LENGTH_DRBG_ctx_Key = 32;
parameter LENGTH_DRBG_ctx_reseed_counter = 1;
parameter LENGTH_ap_return = 1;

task read_token;
    input integer fp;
    output reg [279 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

task post_check;
    input integer fp1;
    input integer fp2;
    reg [279 : 0] token1;
    reg [279 : 0] token2;
    reg [279 : 0] golden;
    reg [279 : 0] result;
    integer ret;
    begin
        read_token(fp1, token1);
        read_token(fp2, token2);
        if (token1 != "[[[runtime]]]" || token2 != "[[[runtime]]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
            $finish;
        end
        read_token(fp1, token1);
        read_token(fp2, token2);
        while (token1 != "[[[/runtime]]]" && token2 != "[[[/runtime]]]") begin
            if (token1 != "[[transaction]]" || token2 != "[[transaction]]") begin
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
            end
            read_token(fp1, token1);  // skip transaction number
            read_token(fp2, token2);  // skip transaction number
              read_token(fp1, token1);
              read_token(fp2, token2);
            while(token1 != "[[/transaction]]" && token2 != "[[/transaction]]") begin
                ret = $sscanf(token1, "0x%x", golden);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                ret = $sscanf(token2, "0x%x", result);
                  if (ret != 1) begin
                      $display("Failed to parse token!");
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                  end
                if(golden != result) begin
                      $display("%x (expected) vs. %x (actual) - mismatch", golden, result);
                    $display("ERROR: Simulation using HLS TB failed.");
                      $finish;
                end
                  read_token(fp1, token1);
                  read_token(fp2, token2);
            end
              read_token(fp1, token1);
              read_token(fp2, token2);
        end
    end
endtask

reg AESL_clock;
reg rst;
reg start;
reg ce;
reg tb_continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
wire ap_start;
wire ap_done;
wire ap_idle;
wire ap_ready;
wire [10 : 0] pk_address0;
wire  pk_ce0;
wire  pk_we0;
wire [7 : 0] pk_d0;
wire [10 : 0] pk_address1;
wire  pk_ce1;
wire  pk_we1;
wire [7 : 0] pk_d1;
wire [10 : 0] sk_address0;
wire  sk_ce0;
wire  sk_we0;
wire [7 : 0] sk_d0;
wire [10 : 0] sk_address1;
wire  sk_ce1;
wire  sk_we1;
wire [7 : 0] sk_d1;
wire [3 : 0] DRBG_ctx_V_address0;
wire  DRBG_ctx_V_ce0;
wire  DRBG_ctx_V_we0;
wire [7 : 0] DRBG_ctx_V_d0;
wire [7 : 0] DRBG_ctx_V_q0;
wire [3 : 0] DRBG_ctx_V_address1;
wire  DRBG_ctx_V_ce1;
wire [7 : 0] DRBG_ctx_V_q1;
wire [4 : 0] DRBG_ctx_Key_address0;
wire  DRBG_ctx_Key_ce0;
wire  DRBG_ctx_Key_we0;
wire [7 : 0] DRBG_ctx_Key_d0;
wire [7 : 0] DRBG_ctx_Key_q0;
wire [4 : 0] DRBG_ctx_Key_address1;
wire  DRBG_ctx_Key_ce1;
wire [7 : 0] DRBG_ctx_Key_q1;
wire [31 : 0] DRBG_ctx_reseed_counter_i;
wire [31 : 0] DRBG_ctx_reseed_counter_o;
wire  DRBG_ctx_reseed_counter_o_ap_vld;
wire [31 : 0] ap_return;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;

wire ap_clk;
wire ap_rst;
wire ap_rst_n;

`AUTOTB_DUT `AUTOTB_DUT_INST(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .ap_ready(ap_ready),
    .pk_address0(pk_address0),
    .pk_ce0(pk_ce0),
    .pk_we0(pk_we0),
    .pk_d0(pk_d0),
    .pk_address1(pk_address1),
    .pk_ce1(pk_ce1),
    .pk_we1(pk_we1),
    .pk_d1(pk_d1),
    .sk_address0(sk_address0),
    .sk_ce0(sk_ce0),
    .sk_we0(sk_we0),
    .sk_d0(sk_d0),
    .sk_address1(sk_address1),
    .sk_ce1(sk_ce1),
    .sk_we1(sk_we1),
    .sk_d1(sk_d1),
    .DRBG_ctx_V_address0(DRBG_ctx_V_address0),
    .DRBG_ctx_V_ce0(DRBG_ctx_V_ce0),
    .DRBG_ctx_V_we0(DRBG_ctx_V_we0),
    .DRBG_ctx_V_d0(DRBG_ctx_V_d0),
    .DRBG_ctx_V_q0(DRBG_ctx_V_q0),
    .DRBG_ctx_V_address1(DRBG_ctx_V_address1),
    .DRBG_ctx_V_ce1(DRBG_ctx_V_ce1),
    .DRBG_ctx_V_q1(DRBG_ctx_V_q1),
    .DRBG_ctx_Key_address0(DRBG_ctx_Key_address0),
    .DRBG_ctx_Key_ce0(DRBG_ctx_Key_ce0),
    .DRBG_ctx_Key_we0(DRBG_ctx_Key_we0),
    .DRBG_ctx_Key_d0(DRBG_ctx_Key_d0),
    .DRBG_ctx_Key_q0(DRBG_ctx_Key_q0),
    .DRBG_ctx_Key_address1(DRBG_ctx_Key_address1),
    .DRBG_ctx_Key_ce1(DRBG_ctx_Key_ce1),
    .DRBG_ctx_Key_q1(DRBG_ctx_Key_q1),
    .DRBG_ctx_reseed_counter_i(DRBG_ctx_reseed_counter_i),
    .DRBG_ctx_reseed_counter_o(DRBG_ctx_reseed_counter_o),
    .DRBG_ctx_reseed_counter_o_ap_vld(DRBG_ctx_reseed_counter_o_ap_vld),
    .ap_return(ap_return));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst = AESL_reset;
assign ap_rst_n = ~AESL_reset;
assign AESL_reset = rst;
assign ap_start = AESL_start;
assign AESL_start = start;
assign AESL_done = ap_done;
assign AESL_idle = ap_idle;
assign AESL_ready = ap_ready;
assign AESL_ce = ce;
assign AESL_continue = tb_continue;
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_done !== 1 && AESL_done !== 0) begin
                $display("ERROR: Control signal AESL_done is invalid!");
                $finish;
            end
        end
    end
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_ready !== 1 && AESL_ready !== 0) begin
                $display("ERROR: Control signal AESL_ready is invalid!");
                $finish;
            end
        end
    end
//------------------------arraypk Instantiation--------------

// The input and output of arraypk
wire    arraypk_ce0, arraypk_ce1;
wire    arraypk_we0, arraypk_we1;
wire    [10 : 0]    arraypk_address0, arraypk_address1;
wire    [7 : 0]    arraypk_din0, arraypk_din1;
wire    [7 : 0]    arraypk_dout0, arraypk_dout1;
wire    arraypk_ready;
wire    arraypk_done;

`AESL_MEM_pk `AESL_MEM_INST_pk(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraypk_ce0),
    .we0        (arraypk_we0),
    .address0   (arraypk_address0),
    .din0       (arraypk_din0),
    .dout0      (arraypk_dout0),
    .ce1        (arraypk_ce1),
    .we1        (arraypk_we1),
    .address1   (arraypk_address1),
    .din1       (arraypk_din1),
    .dout1      (arraypk_dout1),
    .ready      (arraypk_ready),
    .done    (arraypk_done)
);

// Assignment between dut and arraypk
assign arraypk_address0 = pk_address0;
assign arraypk_ce0 = pk_ce0;
assign arraypk_we0 = pk_we0;
assign arraypk_din0 = pk_d0;
assign arraypk_address1 = pk_address1;
assign arraypk_ce1 = pk_ce1;
assign arraypk_we1 = pk_we1;
assign arraypk_din1 = pk_d1;
assign arraypk_ready= ready_initial | arraypk_done;
assign arraypk_done =    AESL_done_delay;


//------------------------arraysk Instantiation--------------

// The input and output of arraysk
wire    arraysk_ce0, arraysk_ce1;
wire    arraysk_we0, arraysk_we1;
wire    [10 : 0]    arraysk_address0, arraysk_address1;
wire    [7 : 0]    arraysk_din0, arraysk_din1;
wire    [7 : 0]    arraysk_dout0, arraysk_dout1;
wire    arraysk_ready;
wire    arraysk_done;

`AESL_MEM_sk `AESL_MEM_INST_sk(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysk_ce0),
    .we0        (arraysk_we0),
    .address0   (arraysk_address0),
    .din0       (arraysk_din0),
    .dout0      (arraysk_dout0),
    .ce1        (arraysk_ce1),
    .we1        (arraysk_we1),
    .address1   (arraysk_address1),
    .din1       (arraysk_din1),
    .dout1      (arraysk_dout1),
    .ready      (arraysk_ready),
    .done    (arraysk_done)
);

// Assignment between dut and arraysk
assign arraysk_address0 = sk_address0;
assign arraysk_ce0 = sk_ce0;
assign arraysk_we0 = sk_we0;
assign arraysk_din0 = sk_d0;
assign arraysk_address1 = sk_address1;
assign arraysk_ce1 = sk_ce1;
assign arraysk_we1 = sk_we1;
assign arraysk_din1 = sk_d1;
assign arraysk_ready= ready_initial | arraysk_done;
assign arraysk_done =    AESL_done_delay;


//------------------------arrayDRBG_ctx_V Instantiation--------------

// The input and output of arrayDRBG_ctx_V
wire    arrayDRBG_ctx_V_ce0, arrayDRBG_ctx_V_ce1;
wire    arrayDRBG_ctx_V_we0, arrayDRBG_ctx_V_we1;
wire    [3 : 0]    arrayDRBG_ctx_V_address0, arrayDRBG_ctx_V_address1;
wire    [7 : 0]    arrayDRBG_ctx_V_din0, arrayDRBG_ctx_V_din1;
wire    [7 : 0]    arrayDRBG_ctx_V_dout0, arrayDRBG_ctx_V_dout1;
wire    arrayDRBG_ctx_V_ready;
wire    arrayDRBG_ctx_V_done;

`AESL_MEM_DRBG_ctx_V `AESL_MEM_INST_DRBG_ctx_V(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayDRBG_ctx_V_ce0),
    .we0        (arrayDRBG_ctx_V_we0),
    .address0   (arrayDRBG_ctx_V_address0),
    .din0       (arrayDRBG_ctx_V_din0),
    .dout0      (arrayDRBG_ctx_V_dout0),
    .ce1        (arrayDRBG_ctx_V_ce1),
    .we1        (arrayDRBG_ctx_V_we1),
    .address1   (arrayDRBG_ctx_V_address1),
    .din1       (arrayDRBG_ctx_V_din1),
    .dout1      (arrayDRBG_ctx_V_dout1),
    .ready      (arrayDRBG_ctx_V_ready),
    .done    (arrayDRBG_ctx_V_done)
);

// Assignment between dut and arrayDRBG_ctx_V
assign arrayDRBG_ctx_V_address0 = DRBG_ctx_V_address0;
assign arrayDRBG_ctx_V_ce0 = DRBG_ctx_V_ce0;
assign DRBG_ctx_V_q0 = arrayDRBG_ctx_V_dout0;
assign arrayDRBG_ctx_V_we0 = DRBG_ctx_V_we0;
assign arrayDRBG_ctx_V_din0 = DRBG_ctx_V_d0;
assign arrayDRBG_ctx_V_address1 = DRBG_ctx_V_address1;
assign arrayDRBG_ctx_V_ce1 = DRBG_ctx_V_ce1;
assign DRBG_ctx_V_q1 = arrayDRBG_ctx_V_dout1;
assign arrayDRBG_ctx_V_we1 = 0;
assign arrayDRBG_ctx_V_din1 = 0;
assign arrayDRBG_ctx_V_ready= ready;
assign arrayDRBG_ctx_V_done = interface_done;


//------------------------arrayDRBG_ctx_Key Instantiation--------------

// The input and output of arrayDRBG_ctx_Key
wire    arrayDRBG_ctx_Key_ce0, arrayDRBG_ctx_Key_ce1;
wire    arrayDRBG_ctx_Key_we0, arrayDRBG_ctx_Key_we1;
wire    [4 : 0]    arrayDRBG_ctx_Key_address0, arrayDRBG_ctx_Key_address1;
wire    [7 : 0]    arrayDRBG_ctx_Key_din0, arrayDRBG_ctx_Key_din1;
wire    [7 : 0]    arrayDRBG_ctx_Key_dout0, arrayDRBG_ctx_Key_dout1;
wire    arrayDRBG_ctx_Key_ready;
wire    arrayDRBG_ctx_Key_done;

`AESL_MEM_DRBG_ctx_Key `AESL_MEM_INST_DRBG_ctx_Key(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arrayDRBG_ctx_Key_ce0),
    .we0        (arrayDRBG_ctx_Key_we0),
    .address0   (arrayDRBG_ctx_Key_address0),
    .din0       (arrayDRBG_ctx_Key_din0),
    .dout0      (arrayDRBG_ctx_Key_dout0),
    .ce1        (arrayDRBG_ctx_Key_ce1),
    .we1        (arrayDRBG_ctx_Key_we1),
    .address1   (arrayDRBG_ctx_Key_address1),
    .din1       (arrayDRBG_ctx_Key_din1),
    .dout1      (arrayDRBG_ctx_Key_dout1),
    .ready      (arrayDRBG_ctx_Key_ready),
    .done    (arrayDRBG_ctx_Key_done)
);

// Assignment between dut and arrayDRBG_ctx_Key
assign arrayDRBG_ctx_Key_address0 = DRBG_ctx_Key_address0;
assign arrayDRBG_ctx_Key_ce0 = DRBG_ctx_Key_ce0;
assign DRBG_ctx_Key_q0 = arrayDRBG_ctx_Key_dout0;
assign arrayDRBG_ctx_Key_we0 = DRBG_ctx_Key_we0;
assign arrayDRBG_ctx_Key_din0 = DRBG_ctx_Key_d0;
assign arrayDRBG_ctx_Key_address1 = DRBG_ctx_Key_address1;
assign arrayDRBG_ctx_Key_ce1 = DRBG_ctx_Key_ce1;
assign DRBG_ctx_Key_q1 = arrayDRBG_ctx_Key_dout1;
assign arrayDRBG_ctx_Key_we1 = 0;
assign arrayDRBG_ctx_Key_din1 = 0;
assign arrayDRBG_ctx_Key_ready= ready;
assign arrayDRBG_ctx_Key_done = interface_done;


// The signal of port DRBG_ctx_reseed_counter_i
reg [31: 0] AESL_REG_DRBG_ctx_reseed_counter_i = 0;
assign DRBG_ctx_reseed_counter_i = AESL_REG_DRBG_ctx_reseed_counter_i;
always @(posedge AESL_clock)
begin
    if(DRBG_ctx_reseed_counter_o_ap_vld === 1)
        AESL_REG_DRBG_ctx_reseed_counter_i <= DRBG_ctx_reseed_counter_o;
end

initial begin : read_file_process_DRBG_ctx_reseed_counter
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [279  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_DRBG_ctx_reseed_counter,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_DRBG_ctx_reseed_counter);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_DRBG_ctx_reseed_counter_i);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end

reg AESL_REG_DRBG_ctx_reseed_counter_o_ap_vld = 0;
// The signal of port DRBG_ctx_reseed_counter_o
reg [31: 0] AESL_REG_DRBG_ctx_reseed_counter_o = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_DRBG_ctx_reseed_counter_o = 0; 
    else if(DRBG_ctx_reseed_counter_o_ap_vld) begin
        AESL_REG_DRBG_ctx_reseed_counter_o <= DRBG_ctx_reseed_counter_o;
        AESL_REG_DRBG_ctx_reseed_counter_o_ap_vld <= 1;
    end
end 

initial begin : write_file_process_DRBG_ctx_reseed_counter
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer DRBG_ctx_reseed_counter_count;
    reg [279:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_DRBG_ctx_reseed_counter_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_DRBG_ctx_reseed_counter_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_DRBG_ctx_reseed_counter_o_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_DRBG_ctx_reseed_counter_o);
        AESL_REG_DRBG_ctx_reseed_counter_o_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


initial begin : write_file_process_ap_return
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer ap_return_count;
    reg [279:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_ap_return_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ap_return_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
          $fdisplay(fp,"0x%x", ap_return);
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end

initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 0);
    while(AESL_ready_cnt != AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

    event next_trigger_ready_cnt;
    
    initial begin : gen_ready_cnt
        ready_cnt = 0;
        wait (AESL_reset === 0);
        forever begin
            @ (posedge AESL_clock);
            if (ready == 1) begin
                if (ready_cnt < AUTOTB_TRANSACTION_NUM) begin
                    ready_cnt = ready_cnt + 1;
                end
            end
            -> next_trigger_ready_cnt;
        end
    end
    
    wire all_finish = (done_cnt == AUTOTB_TRANSACTION_NUM);
    
    // done_cnt
    always @ (posedge AESL_clock) begin
        if (AESL_reset) begin
            done_cnt <= 0;
        end else begin
            if (AESL_done == 1) begin
                if (done_cnt < AUTOTB_TRANSACTION_NUM) begin
                    done_cnt <= done_cnt + 1;
                end
            end
        end
    end
    
    initial begin : finish_simulation
        integer fp1;
        integer fp2;
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
    fp1 = $fopen("./rtl.crypto_kem_keypair.autotvout_pk.dat", "r");
    fp2 = $fopen("./impl_rtl.crypto_kem_keypair.autotvout_pk.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.crypto_kem_keypair.autotvout_pk.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.crypto_kem_keypair.autotvout_pk.dat\"!");
    else begin
        $display("Comparing rtl.crypto_kem_keypair.autotvout_pk.dat with impl_rtl.crypto_kem_keypair.autotvout_pk.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.crypto_kem_keypair.autotvout_sk.dat", "r");
    fp2 = $fopen("./impl_rtl.crypto_kem_keypair.autotvout_sk.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.crypto_kem_keypair.autotvout_sk.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.crypto_kem_keypair.autotvout_sk.dat\"!");
    else begin
        $display("Comparing rtl.crypto_kem_keypair.autotvout_sk.dat with impl_rtl.crypto_kem_keypair.autotvout_sk.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.crypto_kem_keypair.autotvout_DRBG_ctx_V.dat", "r");
    fp2 = $fopen("./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_V.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.crypto_kem_keypair.autotvout_DRBG_ctx_V.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_V.dat\"!");
    else begin
        $display("Comparing rtl.crypto_kem_keypair.autotvout_DRBG_ctx_V.dat with impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_V.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.crypto_kem_keypair.autotvout_DRBG_ctx_Key.dat", "r");
    fp2 = $fopen("./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_Key.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.crypto_kem_keypair.autotvout_DRBG_ctx_Key.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_Key.dat\"!");
    else begin
        $display("Comparing rtl.crypto_kem_keypair.autotvout_DRBG_ctx_Key.dat with impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_Key.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.crypto_kem_keypair.autotvout_DRBG_ctx_reseed_counter.dat", "r");
    fp2 = $fopen("./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_reseed_counter.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.crypto_kem_keypair.autotvout_DRBG_ctx_reseed_counter.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_reseed_counter.dat\"!");
    else begin
        $display("Comparing rtl.crypto_kem_keypair.autotvout_DRBG_ctx_reseed_counter.dat with impl_rtl.crypto_kem_keypair.autotvout_DRBG_ctx_reseed_counter.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
    fp1 = $fopen("./rtl.crypto_kem_keypair.autotvout_ap_return.dat", "r");
    fp2 = $fopen("./impl_rtl.crypto_kem_keypair.autotvout_ap_return.dat", "r");
    if(fp1 == 0)        // Failed to open file
        $display("Failed to open file \"./rtl.crypto_kem_keypair.autotvout_ap_return.dat\"!");
    else if(fp2 == 0)
        $display("Failed to open file \"./impl_rtl.crypto_kem_keypair.autotvout_ap_return.dat\"!");
    else begin
        $display("Comparing rtl.crypto_kem_keypair.autotvout_ap_return.dat with impl_rtl.crypto_kem_keypair.autotvout_ap_return.dat");
        post_check(fp1, fp2);
    end
    $fclose(fp1);
    $fclose(fp2);
        $display("Simulation Passed.");
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_pk;
reg [31:0] size_pk;
reg [31:0] size_pk_backup;
reg end_sk;
reg [31:0] size_sk;
reg [31:0] size_sk_backup;
reg end_DRBG_ctx_V;
reg [31:0] size_DRBG_ctx_V;
reg [31:0] size_DRBG_ctx_V_backup;
reg end_DRBG_ctx_Key;
reg [31:0] size_DRBG_ctx_Key;
reg [31:0] size_DRBG_ctx_Key_backup;
reg end_DRBG_ctx_reseed_counter;
reg [31:0] size_DRBG_ctx_reseed_counter;
reg [31:0] size_DRBG_ctx_reseed_counter_backup;
reg end_ap_return;
reg [31:0] size_ap_return;
reg [31:0] size_ap_return_backup;

initial begin : initial_process
    integer proc_rand;
    rst = 1;
    # 100;
    repeat(3) @ (posedge AESL_clock);
    rst = 0;
end
initial begin : start_process
    integer proc_rand;
    reg [31:0] start_cnt;
    ce = 1;
    start = 0;
    start_cnt = 0;
    wait (AESL_reset === 0);
    @ (posedge AESL_clock);
    #0 start = 1;
    start_cnt = start_cnt + 1;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt >= AUTOTB_TRANSACTION_NUM) begin
            // keep pushing garbage in
            #0 start = 1;
        end
        if (AESL_ready) begin
            start_cnt = start_cnt + 1;
        end
    end
end

always @(AESL_done)
begin
    tb_continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end

reg dump_tvout_finish_pk;

initial begin : dump_tvout_runtime_sign_pk
    integer fp;
    dump_tvout_finish_pk = 0;
    fp = $fopen(`AUTOTB_TVOUT_pk_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_pk_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_pk_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_pk_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_pk = 1;
end


reg dump_tvout_finish_sk;

initial begin : dump_tvout_runtime_sign_sk
    integer fp;
    dump_tvout_finish_sk = 0;
    fp = $fopen(`AUTOTB_TVOUT_sk_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sk_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sk_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sk_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sk = 1;
end


reg dump_tvout_finish_DRBG_ctx_V;

initial begin : dump_tvout_runtime_sign_DRBG_ctx_V
    integer fp;
    dump_tvout_finish_DRBG_ctx_V = 0;
    fp = $fopen(`AUTOTB_TVOUT_DRBG_ctx_V_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_DRBG_ctx_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_DRBG_ctx_V_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_DRBG_ctx_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_DRBG_ctx_V = 1;
end


reg dump_tvout_finish_DRBG_ctx_Key;

initial begin : dump_tvout_runtime_sign_DRBG_ctx_Key
    integer fp;
    dump_tvout_finish_DRBG_ctx_Key = 0;
    fp = $fopen(`AUTOTB_TVOUT_DRBG_ctx_Key_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_DRBG_ctx_Key_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_DRBG_ctx_Key_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_DRBG_ctx_Key_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_DRBG_ctx_Key = 1;
end


////////////////////////////////////////////
// progress and performance
////////////////////////////////////////////

task wait_start();
    while (~AESL_start) begin
        @ (posedge AESL_clock);
    end
endtask

reg [31:0] clk_cnt = 0;
reg AESL_ready_p1;
reg AESL_start_p1;

always @ (posedge AESL_clock) begin
    clk_cnt <= clk_cnt + 1;
    AESL_ready_p1 <= AESL_ready;
    AESL_start_p1 <= AESL_start;
end

reg [31:0] start_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] start_cnt;
reg [31:0] ready_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] ap_ready_cnt;
reg [31:0] finish_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] finish_cnt;
event report_progress;

initial begin
    start_cnt = 0;
    finish_cnt = 0;
    ap_ready_cnt = 0;
    wait (AESL_reset == 0);
    wait_start();
    start_timestamp[start_cnt] = clk_cnt;
    start_cnt = start_cnt + 1;
    if (AESL_done) begin
        finish_timestamp[finish_cnt] = clk_cnt;
        finish_cnt = finish_cnt + 1;
    end
    -> report_progress;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt < AUTOTB_TRANSACTION_NUM) begin
            if ((AESL_start && AESL_ready_p1)||(AESL_start && ~AESL_start_p1)) begin
                start_timestamp[start_cnt] = clk_cnt;
                start_cnt = start_cnt + 1;
            end
        end
        if (ap_ready_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_start_p1 && AESL_ready_p1) begin
                ready_timestamp[ap_ready_cnt] = clk_cnt;
                ap_ready_cnt = ap_ready_cnt + 1;
            end
        end
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                finish_timestamp[finish_cnt] = clk_cnt;
                finish_cnt = finish_cnt + 1;
            end
        end
        -> report_progress;
    end
end

reg [31:0] progress_timeout;

initial begin : simulation_progress
    real intra_progress;
    wait (AESL_reset == 0);
    progress_timeout = PROGRESS_TIMEOUT;
    $display("////////////////////////////////////////////////////////////////////////////////////");
    $display("// Inter-Transaction Progress: Completed Transaction / Total Transaction");
    $display("// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%%");
    $display("//");
    $display("// RTL Simulation : \"Inter-Transaction Progress\" [\"Intra-Transaction Progress\"] @ \"Simulation Time\"");
    $display("////////////////////////////////////////////////////////////////////////////////////");
    print_progress();
    while (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
        @ (report_progress);
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                print_progress();
                progress_timeout = PROGRESS_TIMEOUT;
            end else begin
                if (progress_timeout == 0) begin
                    print_progress();
                    progress_timeout = PROGRESS_TIMEOUT;
                end else begin
                    progress_timeout = progress_timeout - 1;
                end
            end
        end
    end
    print_progress();
    $display("////////////////////////////////////////////////////////////////////////////////////");
    calculate_performance();
end

task get_intra_progress(output real intra_progress);
    begin
        if (start_cnt > finish_cnt) begin
            intra_progress = clk_cnt - start_timestamp[finish_cnt];
        end else if(finish_cnt > 0) begin
            intra_progress = LATENCY_ESTIMATION;
        end else begin
            intra_progress = 0;
        end
        intra_progress = intra_progress / LATENCY_ESTIMATION;
    end
endtask

task print_progress();
    real intra_progress;
    begin
        if (LATENCY_ESTIMATION > 0) begin
            get_intra_progress(intra_progress);
            $display("// RTL Simulation : %0d / %0d [%2.2f%%] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, intra_progress * 100, $time);
        end else begin
            $display("// RTL Simulation : %0d / %0d [n/a] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, $time);
        end
    end
endtask

task calculate_performance();
    integer i;
    integer fp;
    reg [31:0] latency [0:AUTOTB_TRANSACTION_NUM - 1];
    reg [31:0] latency_min;
    reg [31:0] latency_max;
    reg [31:0] latency_total;
    reg [31:0] latency_average;
    reg [31:0] interval [0:AUTOTB_TRANSACTION_NUM - 2];
    reg [31:0] interval_min;
    reg [31:0] interval_max;
    reg [31:0] interval_total;
    reg [31:0] interval_average;
    begin
        latency_min = -1;
        latency_max = 0;
        latency_total = 0;
        interval_min = -1;
        interval_max = 0;
        interval_total = 0;

        for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
            // calculate latency
            latency[i] = finish_timestamp[i] - start_timestamp[i];
            if (latency[i] > latency_max) latency_max = latency[i];
            if (latency[i] < latency_min) latency_min = latency[i];
            latency_total = latency_total + latency[i];
            // calculate interval
            if (AUTOTB_TRANSACTION_NUM == 1) begin
                interval[i] = 0;
                interval_max = 0;
                interval_min = 0;
                interval_total = 0;
            end else if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                interval[i] = finish_timestamp[i] - start_timestamp[i]+1;
                if (interval[i] > interval_max) interval_max = interval[i];
                if (interval[i] < interval_min) interval_min = interval[i];
                interval_total = interval_total + interval[i];
            end
        end

        latency_average = latency_total / AUTOTB_TRANSACTION_NUM;
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            interval_average = 0;
        end else begin
            interval_average = interval_total / (AUTOTB_TRANSACTION_NUM - 1);
        end

        fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

        $fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latency_max);
        $fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latency_min);
        $fdisplay(fp, "$AVER_LATENCY = \"%0d\"", latency_average);
        $fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", interval_max);
        $fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", interval_min);
        $fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", interval_average);

        $fclose(fp);

        fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");

        $fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            i = 0;
            $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
        end else begin
            for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
                if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                    $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
                end else begin
                    $fdisplay(fp, "transaction%8d:%16d               x", i, latency[i]);
                end
            end
        end

        $fclose(fp);
    end
endtask


////////////////////////////////////////////
// Dependence Check
////////////////////////////////////////////

`ifndef POST_SYN

`endif

endmodule
