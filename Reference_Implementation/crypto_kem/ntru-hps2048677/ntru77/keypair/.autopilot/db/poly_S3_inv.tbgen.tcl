set moduleName poly_S3_inv
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {poly_S3_inv}
set C_modelType { void 0 }
set C_modelArgList {
	{ r_coeffs int 16 regular {array 677 { 2 2 } 1 1 }  }
	{ a_coeffs int 16 regular {array 677 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "r_coeffs", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "a_coeffs", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ r_coeffs_address0 sc_out sc_lv 10 signal 0 } 
	{ r_coeffs_ce0 sc_out sc_logic 1 signal 0 } 
	{ r_coeffs_we0 sc_out sc_lv 2 signal 0 } 
	{ r_coeffs_d0 sc_out sc_lv 16 signal 0 } 
	{ r_coeffs_q0 sc_in sc_lv 16 signal 0 } 
	{ r_coeffs_address1 sc_out sc_lv 10 signal 0 } 
	{ r_coeffs_ce1 sc_out sc_logic 1 signal 0 } 
	{ r_coeffs_we1 sc_out sc_lv 2 signal 0 } 
	{ r_coeffs_d1 sc_out sc_lv 16 signal 0 } 
	{ r_coeffs_q1 sc_in sc_lv 16 signal 0 } 
	{ a_coeffs_address0 sc_out sc_lv 10 signal 1 } 
	{ a_coeffs_ce0 sc_out sc_logic 1 signal 1 } 
	{ a_coeffs_q0 sc_in sc_lv 16 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "r_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "r_coeffs", "role": "address0" }} , 
 	{ "name": "r_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "r_coeffs", "role": "ce0" }} , 
 	{ "name": "r_coeffs_we0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "r_coeffs", "role": "we0" }} , 
 	{ "name": "r_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "r_coeffs", "role": "d0" }} , 
 	{ "name": "r_coeffs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "r_coeffs", "role": "q0" }} , 
 	{ "name": "r_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "r_coeffs", "role": "address1" }} , 
 	{ "name": "r_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "r_coeffs", "role": "ce1" }} , 
 	{ "name": "r_coeffs_we1", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "r_coeffs", "role": "we1" }} , 
 	{ "name": "r_coeffs_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "r_coeffs", "role": "d1" }} , 
 	{ "name": "r_coeffs_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "r_coeffs", "role": "q1" }} , 
 	{ "name": "a_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "a_coeffs", "role": "address0" }} , 
 	{ "name": "a_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_coeffs", "role": "ce0" }} , 
 	{ "name": "a_coeffs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_coeffs", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10"],
		"CDFG" : "poly_S3_inv",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16633901", "EstimateLatencyMax" : "16633901",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b_coeffs_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_coeffs_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f_coeffs_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.g_coeffs_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_mod3_fu_621", "Parent" : "0",
		"CDFG" : "mod3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1_U35", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U36", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U37", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U38", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U39", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	poly_S3_inv {
		r_coeffs {Type IO LastRead 23 FirstWrite 11}
		a_coeffs {Type I LastRead 3 FirstWrite -1}}
	mod3 {
		a {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16633901", "Max" : "16633901"}
	, {"Name" : "Interval", "Min" : "16633901", "Max" : "16633901"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	r_coeffs { ap_memory {  { r_coeffs_address0 mem_address 1 10 }  { r_coeffs_ce0 mem_ce 1 1 }  { r_coeffs_we0 mem_we 1 2 }  { r_coeffs_d0 mem_din 1 16 }  { r_coeffs_q0 mem_dout 0 16 }  { r_coeffs_address1 MemPortADDR2 1 10 }  { r_coeffs_ce1 MemPortCE2 1 1 }  { r_coeffs_we1 MemPortWE2 1 2 }  { r_coeffs_d1 MemPortDIN2 1 16 }  { r_coeffs_q1 MemPortDOUT2 0 16 } } }
	a_coeffs { ap_memory {  { a_coeffs_address0 mem_address 1 10 }  { a_coeffs_ce0 mem_ce 1 1 }  { a_coeffs_q0 mem_dout 0 16 } } }
}
