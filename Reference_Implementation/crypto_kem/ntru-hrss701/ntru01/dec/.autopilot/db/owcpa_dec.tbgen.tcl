set moduleName owcpa_dec
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
set C_modelName {owcpa_dec}
set C_modelType { int 1 }
set C_modelArgList {
	{ rm int 8 regular {array 280 { 0 3 } 0 1 }  }
	{ ciphertext int 8 regular {array 1138 { 1 1 } 1 1 }  }
	{ secretkey int 8 regular {array 1450 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "rm", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ciphertext", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "secretkey", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 1} ]}
# RTL Port declarations: 
set portNum 23
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ rm_address0 sc_out sc_lv 9 signal 0 } 
	{ rm_ce0 sc_out sc_logic 1 signal 0 } 
	{ rm_we0 sc_out sc_logic 1 signal 0 } 
	{ rm_d0 sc_out sc_lv 8 signal 0 } 
	{ ciphertext_address0 sc_out sc_lv 11 signal 1 } 
	{ ciphertext_ce0 sc_out sc_logic 1 signal 1 } 
	{ ciphertext_q0 sc_in sc_lv 8 signal 1 } 
	{ ciphertext_address1 sc_out sc_lv 11 signal 1 } 
	{ ciphertext_ce1 sc_out sc_logic 1 signal 1 } 
	{ ciphertext_q1 sc_in sc_lv 8 signal 1 } 
	{ secretkey_address0 sc_out sc_lv 11 signal 2 } 
	{ secretkey_ce0 sc_out sc_logic 1 signal 2 } 
	{ secretkey_q0 sc_in sc_lv 8 signal 2 } 
	{ secretkey_address1 sc_out sc_lv 11 signal 2 } 
	{ secretkey_ce1 sc_out sc_logic 1 signal 2 } 
	{ secretkey_q1 sc_in sc_lv 8 signal 2 } 
	{ ap_return sc_out sc_lv 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "rm_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "rm", "role": "address0" }} , 
 	{ "name": "rm_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rm", "role": "ce0" }} , 
 	{ "name": "rm_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rm", "role": "we0" }} , 
 	{ "name": "rm_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "rm", "role": "d0" }} , 
 	{ "name": "ciphertext_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "ciphertext", "role": "address0" }} , 
 	{ "name": "ciphertext_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ciphertext", "role": "ce0" }} , 
 	{ "name": "ciphertext_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ciphertext", "role": "q0" }} , 
 	{ "name": "ciphertext_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "ciphertext", "role": "address1" }} , 
 	{ "name": "ciphertext_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ciphertext", "role": "ce1" }} , 
 	{ "name": "ciphertext_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ciphertext", "role": "q1" }} , 
 	{ "name": "secretkey_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "secretkey", "role": "address0" }} , 
 	{ "name": "secretkey_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "secretkey", "role": "ce0" }} , 
 	{ "name": "secretkey_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "secretkey", "role": "q0" }} , 
 	{ "name": "secretkey_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "secretkey", "role": "address1" }} , 
 	{ "name": "secretkey_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "secretkey", "role": "ce1" }} , 
 	{ "name": "secretkey_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "secretkey", "role": "q1" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "12", "13", "14", "17", "20", "21", "24"],
		"CDFG" : "owcpa_dec",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "43056", "EstimateLatencyMax" : "8875656",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_lift_fu_291"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_frombytes_1_fu_297"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_frombytes_fu_304"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_mul_fu_312"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_frombytes_fu_319"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_frombytes_fu_319"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_to_S3_fu_329"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_335"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_335"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_342"},
			{"State" : "ap_ST_fsm_state32", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_342"}],
		"Port" : [
			{"Name" : "rm", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "24", "SubInstance" : "grp_poly_S3_tobytes_fu_342", "Port" : "msg"}]},
			{"Name" : "ciphertext", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "grp_poly_Sq_frombytes_fu_304", "Port" : "a"}]},
			{"Name" : "secretkey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "grp_poly_Sq_frombytes_1_fu_297", "Port" : "a"},
					{"ID" : "17", "SubInstance" : "grp_poly_S3_frombytes_fu_319", "Port" : "msg"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x1_coeffs_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x2_coeffs_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x3_coeffs_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x4_coeffs_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_lift_fu_291", "Parent" : "0", "Child" : ["6", "7", "8", "9", "10", "11"],
		"CDFG" : "poly_lift",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10499", "EstimateLatencyMax" : "10499",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_lift_fu_291.b_coeffs_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_lift_fu_291.crypto_kem_dec_mac_muladd_16s_2ns_16ns_16_1_1_U23", "Parent" : "5"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_lift_fu_291.crypto_kem_dec_mac_muladd_16s_2ns_16ns_16_1_1_U24", "Parent" : "5"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_lift_fu_291.crypto_kem_dec_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1_U25", "Parent" : "5"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_lift_fu_291.crypto_kem_dec_mac_muladd_2ns_16s_16ns_16_1_1_U26", "Parent" : "5"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_lift_fu_291.crypto_kem_dec_mac_muladd_2ns_16s_16ns_16_1_1_U27", "Parent" : "5"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_Sq_frombytes_1_fu_297", "Parent" : "0",
		"CDFG" : "poly_Sq_frombytes_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "701", "EstimateLatencyMax" : "701",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_Sq_frombytes_fu_304", "Parent" : "0",
		"CDFG" : "poly_Sq_frombytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "701", "EstimateLatencyMax" : "701",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_mul_fu_312", "Parent" : "0", "Child" : ["15", "16"],
		"CDFG" : "poly_S3_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6311", "EstimateLatencyMax" : "2950511",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_mul_fu_312.crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U15", "Parent" : "14"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_mul_fu_312.crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U16", "Parent" : "14"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_frombytes_fu_319", "Parent" : "0", "Child" : ["18", "19"],
		"CDFG" : "poly_S3_frombytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "841", "EstimateLatencyMax" : "841",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "msg", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "msg_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_frombytes_fu_319.grp_mod3_fu_153", "Parent" : "17",
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
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_frombytes_fu_319.grp_mod3_fu_158", "Parent" : "17",
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
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_Rq_to_S3_fu_329", "Parent" : "0",
		"CDFG" : "poly_Rq_to_S3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3509", "EstimateLatencyMax" : "3509",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_Rq_mul_fu_335", "Parent" : "0", "Child" : ["22", "23"],
		"CDFG" : "poly_Rq_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4908", "EstimateLatencyMax" : "2949108",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_Rq_mul_fu_335.crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U7", "Parent" : "21"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_Rq_mul_fu_335.crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U8", "Parent" : "21"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_tobytes_fu_342", "Parent" : "0",
		"CDFG" : "poly_S3_tobytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "701", "EstimateLatencyMax" : "701",
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
	owcpa_dec {
		rm {Type O LastRead -1 FirstWrite 5}
		ciphertext {Type I LastRead 8 FirstWrite -1}
		secretkey {Type I LastRead 8 FirstWrite -1}}
	poly_lift {
		r_coeffs {Type O LastRead -1 FirstWrite 10}
		a_coeffs {Type I LastRead 7 FirstWrite -1}}
	poly_Sq_frombytes_1 {
		r_coeffs {Type O LastRead -1 FirstWrite 2}
		a {Type I LastRead 8 FirstWrite -1}}
	poly_Sq_frombytes {
		r_coeffs {Type O LastRead -1 FirstWrite 2}
		a {Type I LastRead 8 FirstWrite -1}}
	poly_S3_mul {
		r_coeffs {Type IO LastRead 4 FirstWrite 1}
		a_coeffs {Type I LastRead 3 FirstWrite -1}
		b_coeffs {Type I LastRead 3 FirstWrite -1}}
	poly_S3_frombytes {
		r_coeffs {Type O LastRead -1 FirstWrite 1}
		msg {Type I LastRead 1 FirstWrite -1}
		msg_offset {Type I LastRead 0 FirstWrite -1}}
	mod3 {
		a {Type I LastRead 0 FirstWrite -1}}
	mod3 {
		a {Type I LastRead 0 FirstWrite -1}}
	poly_Rq_to_S3 {
		r_coeffs {Type IO LastRead 5 FirstWrite 2}
		a_coeffs {Type I LastRead 1 FirstWrite -1}}
	poly_Rq_mul {
		r_coeffs {Type IO LastRead 4 FirstWrite 1}
		a_coeffs {Type I LastRead 3 FirstWrite -1}
		b_coeffs {Type I LastRead 3 FirstWrite -1}}
	poly_S3_tobytes {
		msg {Type O LastRead -1 FirstWrite 5}
		msg_offset {Type I LastRead 0 FirstWrite -1}
		a_coeffs {Type I LastRead 4 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "43056", "Max" : "8875656"}
	, {"Name" : "Interval", "Min" : "43056", "Max" : "8875656"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	rm { ap_memory {  { rm_address0 mem_address 1 9 }  { rm_ce0 mem_ce 1 1 }  { rm_we0 mem_we 1 1 }  { rm_d0 mem_din 1 8 } } }
	ciphertext { ap_memory {  { ciphertext_address0 mem_address 1 11 }  { ciphertext_ce0 mem_ce 1 1 }  { ciphertext_q0 mem_dout 0 8 }  { ciphertext_address1 MemPortADDR2 1 11 }  { ciphertext_ce1 MemPortCE2 1 1 }  { ciphertext_q1 MemPortDOUT2 0 8 } } }
	secretkey { ap_memory {  { secretkey_address0 mem_address 1 11 }  { secretkey_ce0 mem_ce 1 1 }  { secretkey_q0 mem_dout 0 8 }  { secretkey_address1 MemPortADDR2 1 11 }  { secretkey_ce1 MemPortCE2 1 1 }  { secretkey_q1 MemPortDOUT2 0 8 } } }
}
