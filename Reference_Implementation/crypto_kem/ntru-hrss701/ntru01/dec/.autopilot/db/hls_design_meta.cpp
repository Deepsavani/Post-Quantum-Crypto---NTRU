#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("k_address0", 5, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("k_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("k_we0", 1, hls_out, 0, "ap_memory", "mem_we", 1),
	Port_Property("k_d0", 8, hls_out, 0, "ap_memory", "mem_din", 1),
	Port_Property("k_q0", 8, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("c_address0", 11, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("c_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("c_q0", 8, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("c_address1", 11, hls_out, 1, "ap_memory", "MemPortADDR2", 1),
	Port_Property("c_ce1", 1, hls_out, 1, "ap_memory", "MemPortCE2", 1),
	Port_Property("c_q1", 8, hls_in, 1, "ap_memory", "MemPortDOUT2", 1),
	Port_Property("sk_address0", 11, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("sk_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("sk_q0", 8, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("sk_address1", 11, hls_out, 2, "ap_memory", "MemPortADDR2", 1),
	Port_Property("sk_ce1", 1, hls_out, 2, "ap_memory", "MemPortCE2", 1),
	Port_Property("sk_q1", 8, hls_in, 2, "ap_memory", "MemPortDOUT2", 1),
	Port_Property("ap_return", 32, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "crypto_kem_dec";
