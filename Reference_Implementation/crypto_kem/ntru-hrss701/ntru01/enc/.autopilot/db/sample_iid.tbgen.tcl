set moduleName sample_iid
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
set C_modelName {sample_iid}
set C_modelType { void 0 }
set C_modelArgList {
	{ r_coeffs int 16 regular {array 701 { 0 3 } 0 1 }  }
	{ uniformbytes int 8 regular {array 1400 { 1 3 } 1 1 }  }
	{ uniformbytes_offset int 12 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "r_coeffs", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "uniformbytes", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "uniformbytes_offset", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ r_coeffs_address0 sc_out sc_lv 10 signal 0 } 
	{ r_coeffs_ce0 sc_out sc_logic 1 signal 0 } 
	{ r_coeffs_we0 sc_out sc_logic 1 signal 0 } 
	{ r_coeffs_d0 sc_out sc_lv 16 signal 0 } 
	{ uniformbytes_address0 sc_out sc_lv 11 signal 1 } 
	{ uniformbytes_ce0 sc_out sc_logic 1 signal 1 } 
	{ uniformbytes_q0 sc_in sc_lv 8 signal 1 } 
	{ uniformbytes_offset sc_in sc_lv 12 signal 2 } 
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
 	{ "name": "r_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "r_coeffs", "role": "we0" }} , 
 	{ "name": "r_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "r_coeffs", "role": "d0" }} , 
 	{ "name": "uniformbytes_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "uniformbytes", "role": "address0" }} , 
 	{ "name": "uniformbytes_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "uniformbytes", "role": "ce0" }} , 
 	{ "name": "uniformbytes_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "uniformbytes", "role": "q0" }} , 
 	{ "name": "uniformbytes_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "uniformbytes_offset", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "sample_iid",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2101", "EstimateLatencyMax" : "2101",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "uniformbytes", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "uniformbytes_offset", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	sample_iid {
		r_coeffs {Type O LastRead -1 FirstWrite 1}
		uniformbytes {Type I LastRead 1 FirstWrite -1}
		uniformbytes_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2101", "Max" : "2101"}
	, {"Name" : "Interval", "Min" : "2101", "Max" : "2101"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	r_coeffs { ap_memory {  { r_coeffs_address0 mem_address 1 10 }  { r_coeffs_ce0 mem_ce 1 1 }  { r_coeffs_we0 mem_we 1 1 }  { r_coeffs_d0 mem_din 1 16 } } }
	uniformbytes { ap_memory {  { uniformbytes_address0 mem_address 1 11 }  { uniformbytes_ce0 mem_ce 1 1 }  { uniformbytes_q0 mem_dout 0 8 } } }
	uniformbytes_offset { ap_none {  { uniformbytes_offset in_data 0 12 } } }
}
