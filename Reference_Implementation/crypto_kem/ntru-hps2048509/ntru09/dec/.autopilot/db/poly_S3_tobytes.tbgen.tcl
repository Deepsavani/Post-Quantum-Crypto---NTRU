set moduleName poly_S3_tobytes
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
set C_modelName {poly_S3_tobytes}
set C_modelType { void 0 }
set C_modelArgList {
	{ msg int 8 regular {array 204 { 0 3 } 0 1 }  }
	{ msg_offset int 8 regular  }
	{ a_coeffs int 16 regular {array 509 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "msg", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "msg_offset", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "a_coeffs", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ msg_address0 sc_out sc_lv 8 signal 0 } 
	{ msg_ce0 sc_out sc_logic 1 signal 0 } 
	{ msg_we0 sc_out sc_logic 1 signal 0 } 
	{ msg_d0 sc_out sc_lv 8 signal 0 } 
	{ msg_offset sc_in sc_lv 8 signal 1 } 
	{ a_coeffs_address0 sc_out sc_lv 9 signal 2 } 
	{ a_coeffs_ce0 sc_out sc_logic 1 signal 2 } 
	{ a_coeffs_q0 sc_in sc_lv 16 signal 2 } 
	{ a_coeffs_address1 sc_out sc_lv 9 signal 2 } 
	{ a_coeffs_ce1 sc_out sc_logic 1 signal 2 } 
	{ a_coeffs_q1 sc_in sc_lv 16 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "msg_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "msg", "role": "address0" }} , 
 	{ "name": "msg_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "msg", "role": "ce0" }} , 
 	{ "name": "msg_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "msg", "role": "we0" }} , 
 	{ "name": "msg_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "msg", "role": "d0" }} , 
 	{ "name": "msg_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "msg_offset", "role": "default" }} , 
 	{ "name": "a_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "a_coeffs", "role": "address0" }} , 
 	{ "name": "a_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_coeffs", "role": "ce0" }} , 
 	{ "name": "a_coeffs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_coeffs", "role": "q0" }} , 
 	{ "name": "a_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "a_coeffs", "role": "address1" }} , 
 	{ "name": "a_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_coeffs", "role": "ce1" }} , 
 	{ "name": "a_coeffs_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_coeffs", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "poly_S3_tobytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "513", "EstimateLatencyMax" : "513",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "msg", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "msg_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	poly_S3_tobytes {
		msg {Type O LastRead -1 FirstWrite 2}
		msg_offset {Type I LastRead 0 FirstWrite -1}
		a_coeffs {Type I LastRead 4 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "513", "Max" : "513"}
	, {"Name" : "Interval", "Min" : "513", "Max" : "513"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	msg { ap_memory {  { msg_address0 mem_address 1 8 }  { msg_ce0 mem_ce 1 1 }  { msg_we0 mem_we 1 1 }  { msg_d0 mem_din 1 8 } } }
	msg_offset { ap_none {  { msg_offset in_data 0 8 } } }
	a_coeffs { ap_memory {  { a_coeffs_address0 mem_address 1 9 }  { a_coeffs_ce0 mem_ce 1 1 }  { a_coeffs_q0 mem_dout 0 16 }  { a_coeffs_address1 MemPortADDR2 1 9 }  { a_coeffs_ce1 MemPortCE2 1 1 }  { a_coeffs_q1 MemPortDOUT2 0 16 } } }
}
