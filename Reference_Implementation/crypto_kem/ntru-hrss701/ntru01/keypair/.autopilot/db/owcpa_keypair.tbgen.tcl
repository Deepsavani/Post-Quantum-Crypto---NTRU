set moduleName owcpa_keypair
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
set C_modelName {owcpa_keypair}
set C_modelType { void 0 }
set C_modelArgList {
	{ pk int 8 regular {array 1138 { 0 0 } 0 1 }  }
	{ sk int 8 regular {array 1450 { 0 0 } 0 1 }  }
	{ seed int 8 regular {array 1400 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "pk", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "sk", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "seed", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 25
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ pk_address0 sc_out sc_lv 11 signal 0 } 
	{ pk_ce0 sc_out sc_logic 1 signal 0 } 
	{ pk_we0 sc_out sc_logic 1 signal 0 } 
	{ pk_d0 sc_out sc_lv 8 signal 0 } 
	{ pk_address1 sc_out sc_lv 11 signal 0 } 
	{ pk_ce1 sc_out sc_logic 1 signal 0 } 
	{ pk_we1 sc_out sc_logic 1 signal 0 } 
	{ pk_d1 sc_out sc_lv 8 signal 0 } 
	{ sk_address0 sc_out sc_lv 11 signal 1 } 
	{ sk_ce0 sc_out sc_logic 1 signal 1 } 
	{ sk_we0 sc_out sc_logic 1 signal 1 } 
	{ sk_d0 sc_out sc_lv 8 signal 1 } 
	{ sk_address1 sc_out sc_lv 11 signal 1 } 
	{ sk_ce1 sc_out sc_logic 1 signal 1 } 
	{ sk_we1 sc_out sc_logic 1 signal 1 } 
	{ sk_d1 sc_out sc_lv 8 signal 1 } 
	{ seed_address0 sc_out sc_lv 11 signal 2 } 
	{ seed_ce0 sc_out sc_logic 1 signal 2 } 
	{ seed_q0 sc_in sc_lv 8 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "pk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pk", "role": "address0" }} , 
 	{ "name": "pk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "ce0" }} , 
 	{ "name": "pk_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "we0" }} , 
 	{ "name": "pk_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pk", "role": "d0" }} , 
 	{ "name": "pk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pk", "role": "address1" }} , 
 	{ "name": "pk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "ce1" }} , 
 	{ "name": "pk_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "we1" }} , 
 	{ "name": "pk_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pk", "role": "d1" }} , 
 	{ "name": "sk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "sk", "role": "address0" }} , 
 	{ "name": "sk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce0" }} , 
 	{ "name": "sk_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "we0" }} , 
 	{ "name": "sk_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "d0" }} , 
 	{ "name": "sk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "sk", "role": "address1" }} , 
 	{ "name": "sk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce1" }} , 
 	{ "name": "sk_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "we1" }} , 
 	{ "name": "sk_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "d1" }} , 
 	{ "name": "seed_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "seed", "role": "address0" }} , 
 	{ "name": "seed_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "seed", "role": "ce0" }} , 
 	{ "name": "seed_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "seed", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "21", "28", "30", "32", "34", "37"],
		"CDFG" : "owcpa_keypair",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33772958", "EstimateLatencyMax" : "72047558",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_inv_fu_328"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_R2_inv_fu_334"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_tobytes_1_fu_340"},
			{"State" : "ap_ST_fsm_state59", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_tobytes_fu_347"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sample_iid_plus_fu_354"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sample_iid_plus_fu_354"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state26", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state32", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state38", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state44", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state50", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state52", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state57", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_365"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_372"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_372"}],
		"Port" : [
			{"Name" : "pk", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_poly_Sq_tobytes_fu_347", "Port" : "r"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_poly_Sq_tobytes_1_fu_340", "Port" : "r"},
					{"ID" : "37", "SubInstance" : "grp_poly_S3_tobytes_fu_372", "Port" : "msg"}]},
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_sample_iid_plus_fu_354", "Port" : "uniformbytes"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b_coeffs_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_coeffs_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s_coeffs_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ai2_coeffs_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x1_coeffs_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x2_coeffs_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x3_coeffs_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x4_coeffs_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.x5_coeffs_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15", "16", "17", "18", "19", "20"],
		"CDFG" : "poly_S3_inv",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "17829245", "EstimateLatencyMax" : "17829245",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.b_coeffs_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.c_coeffs_U", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.f_coeffs_U", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.g_coeffs_U", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.grp_mod3_fu_621", "Parent" : "10",
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
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1_U36", "Parent" : "10"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U37", "Parent" : "10"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U38", "Parent" : "10"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U39", "Parent" : "10"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_inv_fu_328.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U40", "Parent" : "10"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_R2_inv_fu_334", "Parent" : "0", "Child" : ["22", "23", "24", "25", "26", "27"],
		"CDFG" : "poly_R2_inv",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "15858741", "EstimateLatencyMax" : "15858741",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_R2_inv_fu_334.b_coeffs_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_R2_inv_fu_334.f_coeffs_U", "Parent" : "21"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_R2_inv_fu_334.g_coeffs_U", "Parent" : "21"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_R2_inv_fu_334.crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1_U54", "Parent" : "21"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_R2_inv_fu_334.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U55", "Parent" : "21"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_R2_inv_fu_334.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U56", "Parent" : "21"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_Sq_tobytes_1_fu_340", "Parent" : "0", "Child" : ["29"],
		"CDFG" : "poly_Sq_tobytes_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2194", "EstimateLatencyMax" : "2194",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_Sq_tobytes_1_fu_340.t_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_Sq_tobytes_fu_347", "Parent" : "0", "Child" : ["31"],
		"CDFG" : "poly_Sq_tobytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2194", "EstimateLatencyMax" : "2194",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_Sq_tobytes_fu_347.t_U", "Parent" : "30"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sample_iid_plus_fu_354", "Parent" : "0", "Child" : ["33"],
		"CDFG" : "sample_iid_plus",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7709", "EstimateLatencyMax" : "7709",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "uniformbytes", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "uniformbytes_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sample_iid_plus_fu_354.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U30", "Parent" : "32"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_Rq_mul_fu_365", "Parent" : "0", "Child" : ["35", "36"],
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
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_Rq_mul_fu_365.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_Rq_mul_fu_365.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50", "Parent" : "34"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_tobytes_fu_372", "Parent" : "0",
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
	owcpa_keypair {
		pk {Type O LastRead -1 FirstWrite 3}
		sk {Type O LastRead -1 FirstWrite 3}
		seed {Type I LastRead 1 FirstWrite -1}}
	poly_S3_inv {
		r_coeffs {Type IO LastRead 23 FirstWrite 11}
		a_coeffs {Type I LastRead 3 FirstWrite -1}}
	mod3 {
		a {Type I LastRead 0 FirstWrite -1}}
	poly_R2_inv {
		r_coeffs {Type IO LastRead 22 FirstWrite 2}
		a_coeffs {Type I LastRead 3 FirstWrite -1}}
	poly_Sq_tobytes_1 {
		r {Type O LastRead -1 FirstWrite 3}
		a_coeffs {Type I LastRead 3 FirstWrite -1}}
	poly_Sq_tobytes {
		r {Type O LastRead -1 FirstWrite 3}
		a_coeffs {Type I LastRead 3 FirstWrite -1}}
	sample_iid_plus {
		r_coeffs {Type IO LastRead 6 FirstWrite 1}
		uniformbytes {Type I LastRead 1 FirstWrite -1}
		uniformbytes_offset {Type I LastRead 0 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "33772958", "Max" : "72047558"}
	, {"Name" : "Interval", "Min" : "33772958", "Max" : "72047558"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	pk { ap_memory {  { pk_address0 mem_address 1 11 }  { pk_ce0 mem_ce 1 1 }  { pk_we0 mem_we 1 1 }  { pk_d0 mem_din 1 8 }  { pk_address1 MemPortADDR2 1 11 }  { pk_ce1 MemPortCE2 1 1 }  { pk_we1 MemPortWE2 1 1 }  { pk_d1 MemPortDIN2 1 8 } } }
	sk { ap_memory {  { sk_address0 mem_address 1 11 }  { sk_ce0 mem_ce 1 1 }  { sk_we0 mem_we 1 1 }  { sk_d0 mem_din 1 8 }  { sk_address1 MemPortADDR2 1 11 }  { sk_ce1 MemPortCE2 1 1 }  { sk_we1 MemPortWE2 1 1 }  { sk_d1 MemPortDIN2 1 8 } } }
	seed { ap_memory {  { seed_address0 mem_address 1 11 }  { seed_ce0 mem_ce 1 1 }  { seed_q0 mem_dout 0 8 } } }
}
