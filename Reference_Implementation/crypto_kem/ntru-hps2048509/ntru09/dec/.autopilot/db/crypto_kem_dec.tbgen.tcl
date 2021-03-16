set moduleName crypto_kem_dec
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
set C_modelName {crypto_kem_dec}
set C_modelType { int 32 }
set C_modelArgList {
	{ k int 8 regular {array 32 { 2 3 } 1 1 }  }
	{ c int 8 regular {array 699 { 1 1 } 1 1 }  }
	{ sk int 8 regular {array 935 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "k", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "k","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "c", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "c","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 698,"step" : 1}]}]}]} , 
 	{ "Name" : "sk", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "sk","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 934,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ k_address0 sc_out sc_lv 5 signal 0 } 
	{ k_ce0 sc_out sc_logic 1 signal 0 } 
	{ k_we0 sc_out sc_logic 1 signal 0 } 
	{ k_d0 sc_out sc_lv 8 signal 0 } 
	{ k_q0 sc_in sc_lv 8 signal 0 } 
	{ c_address0 sc_out sc_lv 10 signal 1 } 
	{ c_ce0 sc_out sc_logic 1 signal 1 } 
	{ c_q0 sc_in sc_lv 8 signal 1 } 
	{ c_address1 sc_out sc_lv 10 signal 1 } 
	{ c_ce1 sc_out sc_logic 1 signal 1 } 
	{ c_q1 sc_in sc_lv 8 signal 1 } 
	{ sk_address0 sc_out sc_lv 10 signal 2 } 
	{ sk_ce0 sc_out sc_logic 1 signal 2 } 
	{ sk_q0 sc_in sc_lv 8 signal 2 } 
	{ sk_address1 sc_out sc_lv 10 signal 2 } 
	{ sk_ce1 sc_out sc_logic 1 signal 2 } 
	{ sk_q1 sc_in sc_lv 8 signal 2 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "k_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "k", "role": "address0" }} , 
 	{ "name": "k_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "k", "role": "ce0" }} , 
 	{ "name": "k_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "k", "role": "we0" }} , 
 	{ "name": "k_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "k", "role": "d0" }} , 
 	{ "name": "k_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "k", "role": "q0" }} , 
 	{ "name": "c_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "c", "role": "address0" }} , 
 	{ "name": "c_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c", "role": "ce0" }} , 
 	{ "name": "c_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "c", "role": "q0" }} , 
 	{ "name": "c_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "c", "role": "address1" }} , 
 	{ "name": "c_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c", "role": "ce1" }} , 
 	{ "name": "c_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "c", "role": "q1" }} , 
 	{ "name": "sk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "sk", "role": "address0" }} , 
 	{ "name": "sk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce0" }} , 
 	{ "name": "sk_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q0" }} , 
 	{ "name": "sk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "sk", "role": "address1" }} , 
 	{ "name": "sk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce1" }} , 
 	{ "name": "sk_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q1" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "12", "21"],
		"CDFG" : "crypto_kem_dec",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "32211", "EstimateLatencyMax" : "4686507",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sha3_256_fu_167"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sha3_256_1_fu_175"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_owcpa_dec_fu_184"}],
		"Port" : [
			{"Name" : "k", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "grp_sha3_256_1_fu_175", "Port" : "output_r"}]},
			{"Name" : "c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_owcpa_dec_fu_184", "Port" : "ciphertext"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_owcpa_dec_fu_184", "Port" : "secretkey"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_sha3_256_fu_167", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "12", "SubInstance" : "grp_sha3_256_1_fu_175", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rm_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buf_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167", "Parent" : "0", "Child" : ["4", "5", "6", "10"],
		"CDFG" : "sha3_256",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2778", "EstimateLatencyMax" : "2778",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_absorb_1_fu_146"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_156"}],
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_keccak_absorb_1_fu_146", "Port" : "m"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_keccak_absorb_1_fu_146", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "10", "SubInstance" : "grp_KeccakF1600_StatePer_fu_156", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167.s_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167.h_assign_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167.grp_keccak_absorb_1_fu_146", "Parent" : "3", "Child" : ["7", "8"],
		"CDFG" : "keccak_absorb_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2472", "EstimateLatencyMax" : "2472",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_309"}],
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_KeccakF1600_StatePer_fu_309", "Port" : "state"}]},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_KeccakF1600_StatePer_fu_309", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167.grp_keccak_absorb_1_fu_146.t_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167.grp_keccak_absorb_1_fu_146.grp_KeccakF1600_StatePer_fu_309", "Parent" : "6", "Child" : ["9"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167.grp_keccak_absorb_1_fu_146.grp_KeccakF1600_StatePer_fu_309.KeccakF_RoundConstan_U", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167.grp_KeccakF1600_StatePer_fu_156", "Parent" : "3", "Child" : ["11"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_167.grp_KeccakF1600_StatePer_fu_156.KeccakF_RoundConstan_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175", "Parent" : "0", "Child" : ["13", "14", "15", "19"],
		"CDFG" : "sha3_256_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1308", "EstimateLatencyMax" : "1308",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_absorb_fu_146"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_156"}],
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_keccak_absorb_fu_146", "Port" : "m"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_keccak_absorb_fu_146", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "19", "SubInstance" : "grp_KeccakF1600_StatePer_fu_156", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175.s_U", "Parent" : "12"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175.h_assign_U", "Parent" : "12"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175.grp_keccak_absorb_fu_146", "Parent" : "12", "Child" : ["16", "17"],
		"CDFG" : "keccak_absorb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1002", "EstimateLatencyMax" : "1002",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_297"}],
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "17", "SubInstance" : "grp_KeccakF1600_StatePer_fu_297", "Port" : "state"}]},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "17", "SubInstance" : "grp_KeccakF1600_StatePer_fu_297", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175.grp_keccak_absorb_fu_146.t_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175.grp_keccak_absorb_fu_146.grp_KeccakF1600_StatePer_fu_297", "Parent" : "15", "Child" : ["18"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175.grp_keccak_absorb_fu_146.grp_KeccakF1600_StatePer_fu_297.KeccakF_RoundConstan_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175.grp_KeccakF1600_StatePer_fu_156", "Parent" : "12", "Child" : ["20"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_1_fu_175.grp_KeccakF1600_StatePer_fu_156.KeccakF_RoundConstan_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184", "Parent" : "0", "Child" : ["22", "23", "24", "25", "26", "27", "28", "31", "34", "35", "36"],
		"CDFG" : "owcpa_dec",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26592", "EstimateLatencyMax" : "4680888",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state26", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_frombytes_1_fu_395"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_frombytes_fu_402"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_frombytes_fu_410"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_frombytes_fu_410"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_mul_fu_420"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_to_S3_fu_427"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_433"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_433"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_443"},
			{"State" : "ap_ST_fsm_state28", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_443"}],
		"Port" : [
			{"Name" : "rm", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "grp_poly_S3_tobytes_fu_433", "Port" : "msg"}]},
			{"Name" : "ciphertext", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "27", "SubInstance" : "grp_poly_Sq_frombytes_fu_402", "Port" : "a"}]},
			{"Name" : "secretkey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_poly_S3_frombytes_fu_410", "Port" : "msg"},
					{"ID" : "26", "SubInstance" : "grp_poly_Sq_frombytes_1_fu_395", "Port" : "a"}]}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.x1_coeffs_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.x2_coeffs_U", "Parent" : "21"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.x3_coeffs_U", "Parent" : "21"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.x4_coeffs_U", "Parent" : "21"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_Sq_frombytes_1_fu_395", "Parent" : "21",
		"CDFG" : "poly_Sq_frombytes_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "445", "EstimateLatencyMax" : "445",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_Sq_frombytes_fu_402", "Parent" : "21",
		"CDFG" : "poly_Sq_frombytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "445", "EstimateLatencyMax" : "445",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_S3_frombytes_fu_410", "Parent" : "21", "Child" : ["29", "30"],
		"CDFG" : "poly_S3_frombytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "615", "EstimateLatencyMax" : "615",
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
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_S3_frombytes_fu_410.grp_mod3_fu_199", "Parent" : "28",
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
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_S3_frombytes_fu_410.grp_mod3_fu_204", "Parent" : "28",
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
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_S3_mul_fu_420", "Parent" : "21", "Child" : ["32", "33"],
		"CDFG" : "poly_S3_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4583", "EstimateLatencyMax" : "1556015",
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
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_S3_mul_fu_420.crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U15", "Parent" : "31"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_S3_mul_fu_420.crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U16", "Parent" : "31"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_Rq_to_S3_fu_427", "Parent" : "21",
		"CDFG" : "poly_Rq_to_S3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2549", "EstimateLatencyMax" : "2549",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_S3_tobytes_fu_433", "Parent" : "21",
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
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_Rq_mul_fu_443", "Parent" : "21", "Child" : ["37", "38"],
		"CDFG" : "poly_Rq_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3564", "EstimateLatencyMax" : "1554996",
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
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_Rq_mul_fu_443.crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U7", "Parent" : "36"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_dec_fu_184.grp_poly_Rq_mul_fu_443.crypto_kem_dec_mac_muladd_16s_16s_16ns_16_1_1_U8", "Parent" : "36"}]}


set ArgLastReadFirstWriteLatency {
	crypto_kem_dec {
		k {Type IO LastRead 7 FirstWrite 6}
		c {Type I LastRead 7 FirstWrite -1}
		sk {Type I LastRead 7 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	sha3_256 {
		output_r {Type O LastRead -1 FirstWrite 6}
		input_r {Type I LastRead 5 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_1 {
		s {Type IO LastRead 13 FirstWrite 1}
		m {Type I LastRead 5 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	sha3_256_1 {
		output_r {Type O LastRead -1 FirstWrite 6}
		input_r {Type I LastRead 5 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb {
		s {Type IO LastRead 13 FirstWrite 1}
		m {Type I LastRead 5 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	owcpa_dec {
		rm {Type O LastRead -1 FirstWrite 2}
		ciphertext {Type I LastRead 7 FirstWrite -1}
		secretkey {Type I LastRead 7 FirstWrite -1}}
	poly_Sq_frombytes_1 {
		r_coeffs {Type O LastRead -1 FirstWrite 2}
		a {Type I LastRead 7 FirstWrite -1}}
	poly_Sq_frombytes {
		r_coeffs {Type O LastRead -1 FirstWrite 2}
		a {Type I LastRead 7 FirstWrite -1}}
	poly_S3_frombytes {
		r_coeffs {Type O LastRead -1 FirstWrite 3}
		msg {Type I LastRead 2 FirstWrite -1}
		msg_offset {Type I LastRead 0 FirstWrite -1}}
	mod3 {
		a {Type I LastRead 0 FirstWrite -1}}
	mod3 {
		a {Type I LastRead 0 FirstWrite -1}}
	poly_S3_mul {
		r_coeffs {Type IO LastRead 4 FirstWrite 1}
		a_coeffs {Type I LastRead 3 FirstWrite -1}
		b_coeffs {Type I LastRead 3 FirstWrite -1}}
	poly_Rq_to_S3 {
		r_coeffs {Type IO LastRead 5 FirstWrite 2}
		a_coeffs {Type I LastRead 1 FirstWrite -1}}
	poly_S3_tobytes {
		msg {Type O LastRead -1 FirstWrite 2}
		msg_offset {Type I LastRead 0 FirstWrite -1}
		a_coeffs {Type I LastRead 4 FirstWrite -1}}
	poly_Rq_mul {
		r_coeffs {Type IO LastRead 4 FirstWrite 1}
		a_coeffs {Type I LastRead 3 FirstWrite -1}
		b_coeffs {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "32211", "Max" : "4686507"}
	, {"Name" : "Interval", "Min" : "32212", "Max" : "4686508"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	k { ap_memory {  { k_address0 mem_address 1 5 }  { k_ce0 mem_ce 1 1 }  { k_we0 mem_we 1 1 }  { k_d0 mem_din 1 8 }  { k_q0 mem_dout 0 8 } } }
	c { ap_memory {  { c_address0 mem_address 1 10 }  { c_ce0 mem_ce 1 1 }  { c_q0 mem_dout 0 8 }  { c_address1 MemPortADDR2 1 10 }  { c_ce1 MemPortCE2 1 1 }  { c_q1 MemPortDOUT2 0 8 } } }
	sk { ap_memory {  { sk_address0 mem_address 1 10 }  { sk_ce0 mem_ce 1 1 }  { sk_q0 mem_dout 0 8 }  { sk_address1 MemPortADDR2 1 10 }  { sk_ce1 MemPortCE2 1 1 }  { sk_q1 MemPortDOUT2 0 8 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
