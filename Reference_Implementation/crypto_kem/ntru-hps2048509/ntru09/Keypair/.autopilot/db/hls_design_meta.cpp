#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("pk_address0", 10, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("pk_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("pk_we0", 1, hls_out, 0, "ap_memory", "mem_we", 1),
	Port_Property("pk_d0", 8, hls_out, 0, "ap_memory", "mem_din", 1),
	Port_Property("pk_address1", 10, hls_out, 0, "ap_memory", "MemPortADDR2", 1),
	Port_Property("pk_ce1", 1, hls_out, 0, "ap_memory", "MemPortCE2", 1),
	Port_Property("pk_we1", 1, hls_out, 0, "ap_memory", "MemPortWE2", 1),
	Port_Property("pk_d1", 8, hls_out, 0, "ap_memory", "MemPortDIN2", 1),
	Port_Property("sk_address0", 10, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("sk_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("sk_we0", 1, hls_out, 1, "ap_memory", "mem_we", 1),
	Port_Property("sk_d0", 8, hls_out, 1, "ap_memory", "mem_din", 1),
	Port_Property("sk_address1", 10, hls_out, 1, "ap_memory", "MemPortADDR2", 1),
	Port_Property("sk_ce1", 1, hls_out, 1, "ap_memory", "MemPortCE2", 1),
	Port_Property("sk_we1", 1, hls_out, 1, "ap_memory", "MemPortWE2", 1),
	Port_Property("sk_d1", 8, hls_out, 1, "ap_memory", "MemPortDIN2", 1),
	Port_Property("DRBG_ctx_V_address0", 4, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("DRBG_ctx_V_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("DRBG_ctx_V_we0", 1, hls_out, 2, "ap_memory", "mem_we", 1),
	Port_Property("DRBG_ctx_V_d0", 8, hls_out, 2, "ap_memory", "mem_din", 1),
	Port_Property("DRBG_ctx_V_q0", 8, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("DRBG_ctx_V_address1", 4, hls_out, 2, "ap_memory", "MemPortADDR2", 1),
	Port_Property("DRBG_ctx_V_ce1", 1, hls_out, 2, "ap_memory", "MemPortCE2", 1),
	Port_Property("DRBG_ctx_V_q1", 8, hls_in, 2, "ap_memory", "MemPortDOUT2", 1),
	Port_Property("DRBG_ctx_Key_address0", 5, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("DRBG_ctx_Key_ce0", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("DRBG_ctx_Key_we0", 1, hls_out, 3, "ap_memory", "mem_we", 1),
	Port_Property("DRBG_ctx_Key_d0", 8, hls_out, 3, "ap_memory", "mem_din", 1),
	Port_Property("DRBG_ctx_Key_q0", 8, hls_in, 3, "ap_memory", "mem_dout", 1),
	Port_Property("DRBG_ctx_Key_address1", 5, hls_out, 3, "ap_memory", "MemPortADDR2", 1),
	Port_Property("DRBG_ctx_Key_ce1", 1, hls_out, 3, "ap_memory", "MemPortCE2", 1),
	Port_Property("DRBG_ctx_Key_q1", 8, hls_in, 3, "ap_memory", "MemPortDOUT2", 1),
	Port_Property("DRBG_ctx_reseed_counter_i", 32, hls_in, 4, "ap_ovld", "in_data", 1),
	Port_Property("DRBG_ctx_reseed_counter_o", 32, hls_out, 4, "ap_ovld", "out_data", 1),
	Port_Property("DRBG_ctx_reseed_counter_o_ap_vld", 1, hls_out, 4, "ap_ovld", "out_vld", 1),
	Port_Property("ap_return", 32, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "crypto_kem_keypair";
