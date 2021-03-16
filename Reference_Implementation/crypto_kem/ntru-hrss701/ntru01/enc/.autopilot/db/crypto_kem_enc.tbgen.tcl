set moduleName crypto_kem_enc
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
set C_modelName {crypto_kem_enc}
set C_modelType { int 32 }
set C_modelArgList {
	{ c int 8 regular {array 1138 { 0 0 } 0 1 }  }
	{ k int 8 regular {array 32 { 0 3 } 0 1 }  }
	{ pk int 8 regular {array 1138 { 1 1 } 1 1 }  }
	{ DRBG_ctx_V int 8 regular {array 16 { 2 1 } 1 1 } {global 2}  }
	{ DRBG_ctx_Key int 8 regular {array 32 { 2 1 } 1 1 } {global 2}  }
	{ DRBG_ctx_reseed_counter int 32 regular {pointer 2} {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "c", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "c","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 1137,"step" : 1}]}]}]} , 
 	{ "Name" : "k", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "k","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "pk", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "pk","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 1137,"step" : 1}]}]}]} , 
 	{ "Name" : "DRBG_ctx_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "DRBG_ctx.V","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "DRBG_ctx_Key", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "DRBG_ctx.Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "DRBG_ctx_reseed_counter", "interface" : "wire", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "DRBG_ctx.reseed_counter","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 44
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ c_address0 sc_out sc_lv 11 signal 0 } 
	{ c_ce0 sc_out sc_logic 1 signal 0 } 
	{ c_we0 sc_out sc_logic 1 signal 0 } 
	{ c_d0 sc_out sc_lv 8 signal 0 } 
	{ c_address1 sc_out sc_lv 11 signal 0 } 
	{ c_ce1 sc_out sc_logic 1 signal 0 } 
	{ c_we1 sc_out sc_logic 1 signal 0 } 
	{ c_d1 sc_out sc_lv 8 signal 0 } 
	{ k_address0 sc_out sc_lv 5 signal 1 } 
	{ k_ce0 sc_out sc_logic 1 signal 1 } 
	{ k_we0 sc_out sc_logic 1 signal 1 } 
	{ k_d0 sc_out sc_lv 8 signal 1 } 
	{ pk_address0 sc_out sc_lv 11 signal 2 } 
	{ pk_ce0 sc_out sc_logic 1 signal 2 } 
	{ pk_q0 sc_in sc_lv 8 signal 2 } 
	{ pk_address1 sc_out sc_lv 11 signal 2 } 
	{ pk_ce1 sc_out sc_logic 1 signal 2 } 
	{ pk_q1 sc_in sc_lv 8 signal 2 } 
	{ DRBG_ctx_V_address0 sc_out sc_lv 4 signal 3 } 
	{ DRBG_ctx_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ DRBG_ctx_V_we0 sc_out sc_logic 1 signal 3 } 
	{ DRBG_ctx_V_d0 sc_out sc_lv 8 signal 3 } 
	{ DRBG_ctx_V_q0 sc_in sc_lv 8 signal 3 } 
	{ DRBG_ctx_V_address1 sc_out sc_lv 4 signal 3 } 
	{ DRBG_ctx_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ DRBG_ctx_V_q1 sc_in sc_lv 8 signal 3 } 
	{ DRBG_ctx_Key_address0 sc_out sc_lv 5 signal 4 } 
	{ DRBG_ctx_Key_ce0 sc_out sc_logic 1 signal 4 } 
	{ DRBG_ctx_Key_we0 sc_out sc_logic 1 signal 4 } 
	{ DRBG_ctx_Key_d0 sc_out sc_lv 8 signal 4 } 
	{ DRBG_ctx_Key_q0 sc_in sc_lv 8 signal 4 } 
	{ DRBG_ctx_Key_address1 sc_out sc_lv 5 signal 4 } 
	{ DRBG_ctx_Key_ce1 sc_out sc_logic 1 signal 4 } 
	{ DRBG_ctx_Key_q1 sc_in sc_lv 8 signal 4 } 
	{ DRBG_ctx_reseed_counter_i sc_in sc_lv 32 signal 5 } 
	{ DRBG_ctx_reseed_counter_o sc_out sc_lv 32 signal 5 } 
	{ DRBG_ctx_reseed_counter_o_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "c_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "c", "role": "address0" }} , 
 	{ "name": "c_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c", "role": "ce0" }} , 
 	{ "name": "c_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c", "role": "we0" }} , 
 	{ "name": "c_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "c", "role": "d0" }} , 
 	{ "name": "c_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "c", "role": "address1" }} , 
 	{ "name": "c_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c", "role": "ce1" }} , 
 	{ "name": "c_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c", "role": "we1" }} , 
 	{ "name": "c_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "c", "role": "d1" }} , 
 	{ "name": "k_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "k", "role": "address0" }} , 
 	{ "name": "k_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "k", "role": "ce0" }} , 
 	{ "name": "k_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "k", "role": "we0" }} , 
 	{ "name": "k_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "k", "role": "d0" }} , 
 	{ "name": "pk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pk", "role": "address0" }} , 
 	{ "name": "pk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "ce0" }} , 
 	{ "name": "pk_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pk", "role": "q0" }} , 
 	{ "name": "pk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pk", "role": "address1" }} , 
 	{ "name": "pk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "ce1" }} , 
 	{ "name": "pk_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pk", "role": "q1" }} , 
 	{ "name": "DRBG_ctx_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DRBG_ctx_V", "role": "address0" }} , 
 	{ "name": "DRBG_ctx_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DRBG_ctx_V", "role": "ce0" }} , 
 	{ "name": "DRBG_ctx_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DRBG_ctx_V", "role": "we0" }} , 
 	{ "name": "DRBG_ctx_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DRBG_ctx_V", "role": "d0" }} , 
 	{ "name": "DRBG_ctx_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DRBG_ctx_V", "role": "q0" }} , 
 	{ "name": "DRBG_ctx_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DRBG_ctx_V", "role": "address1" }} , 
 	{ "name": "DRBG_ctx_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DRBG_ctx_V", "role": "ce1" }} , 
 	{ "name": "DRBG_ctx_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DRBG_ctx_V", "role": "q1" }} , 
 	{ "name": "DRBG_ctx_Key_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "DRBG_ctx_Key", "role": "address0" }} , 
 	{ "name": "DRBG_ctx_Key_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DRBG_ctx_Key", "role": "ce0" }} , 
 	{ "name": "DRBG_ctx_Key_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DRBG_ctx_Key", "role": "we0" }} , 
 	{ "name": "DRBG_ctx_Key_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DRBG_ctx_Key", "role": "d0" }} , 
 	{ "name": "DRBG_ctx_Key_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DRBG_ctx_Key", "role": "q0" }} , 
 	{ "name": "DRBG_ctx_Key_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "DRBG_ctx_Key", "role": "address1" }} , 
 	{ "name": "DRBG_ctx_Key_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DRBG_ctx_Key", "role": "ce1" }} , 
 	{ "name": "DRBG_ctx_Key_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DRBG_ctx_Key", "role": "q1" }} , 
 	{ "name": "DRBG_ctx_reseed_counter_i", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DRBG_ctx_reseed_counter", "role": "i" }} , 
 	{ "name": "DRBG_ctx_reseed_counter_o", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DRBG_ctx_reseed_counter", "role": "o" }} , 
 	{ "name": "DRBG_ctx_reseed_counter_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "DRBG_ctx_reseed_counter", "role": "o_ap_vld" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "14", "38", "58", "59"],
		"CDFG" : "crypto_kem_enc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sha3_256_fu_62"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_randombytes_fu_71"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_owcpa_enc_fu_87"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_96"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_96"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sample_iid_fu_105"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sample_iid_fu_105"}],
		"Port" : [
			{"Name" : "c", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_owcpa_enc_fu_87", "Port" : "c"}]},
			{"Name" : "k", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_sha3_256_fu_62", "Port" : "output_r"}]},
			{"Name" : "pk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_owcpa_enc_fu_87", "Port" : "pk"}]},
			{"Name" : "DRBG_ctx_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_randombytes_fu_71", "Port" : "DRBG_ctx_V"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_randombytes_fu_71", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_randombytes_fu_71", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_randombytes_fu_71", "Port" : "DRBG_ctx_Key"}]},
			{"Name" : "DRBG_ctx_reseed_counter", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_randombytes_fu_71", "Port" : "DRBG_ctx_reseed_counter"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_sha3_256_fu_62", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.r_coeffs_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.m_coeffs_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rm_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rm_seed_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62", "Parent" : "0", "Child" : ["6", "7", "8", "12"],
		"CDFG" : "sha3_256",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1564", "EstimateLatencyMax" : "1564",
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
					{"ID" : "8", "SubInstance" : "grp_keccak_absorb_fu_146", "Port" : "m"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "grp_keccak_absorb_fu_146", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "12", "SubInstance" : "grp_KeccakF1600_StatePer_fu_156", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62.s_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62.h_assign_U", "Parent" : "5"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62.grp_keccak_absorb_fu_146", "Parent" : "5", "Child" : ["9", "10"],
		"CDFG" : "keccak_absorb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1258", "EstimateLatencyMax" : "1258",
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
					{"ID" : "10", "SubInstance" : "grp_KeccakF1600_StatePer_fu_297", "Port" : "state"}]},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_KeccakF1600_StatePer_fu_297", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62.grp_keccak_absorb_fu_146.t_U", "Parent" : "8"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62.grp_keccak_absorb_fu_146.grp_KeccakF1600_StatePer_fu_297", "Parent" : "8", "Child" : ["11"],
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
	{"ID" : "11", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62.grp_keccak_absorb_fu_146.grp_KeccakF1600_StatePer_fu_297.KeccakF_RoundConstan_U", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62.grp_KeccakF1600_StatePer_fu_156", "Parent" : "5", "Child" : ["13"],
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
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_sha3_256_fu_62.grp_KeccakF1600_StatePer_fu_156.KeccakF_RoundConstan_U", "Parent" : "12"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71", "Parent" : "0", "Child" : ["15", "16", "28"],
		"CDFG" : "randombytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AES256_ECB_1_fu_181"}],
		"Port" : [
			{"Name" : "x", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "DRBG_ctx_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "ctr"},
					{"ID" : "16", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "V"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "sbox"},
					{"ID" : "16", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "Rcon"},
					{"ID" : "16", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "key"},
					{"ID" : "16", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "DRBG_ctx_Key"}]},
			{"Name" : "DRBG_ctx_reseed_counter", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.block_U", "Parent" : "14"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169", "Parent" : "14", "Child" : ["17", "18"],
		"CDFG" : "AES256_CTR_DRBG_Upda",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6726", "EstimateLatencyMax" : "6819",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AES256_ECB_fu_171"}],
		"Port" : [
			{"Name" : "V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "ctr"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "key"}]}]},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.temp_U", "Parent" : "16"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171", "Parent" : "16", "Child" : ["19", "20", "21", "24"],
		"CDFG" : "AES256_ECB",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2203", "EstimateLatencyMax" : "2203",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeyExpansion_fu_525"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Cipher_fu_536"}],
		"Port" : [
			{"Name" : "key", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "Key"}]},
			{"Name" : "ctr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "sbox"},
					{"ID" : "24", "SubInstance" : "grp_Cipher_fu_536", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "Rcon"}]}]},
	{"ID" : "19", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.ctx_RoundKey_U", "Parent" : "18"},
	{"ID" : "20", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.test_U", "Parent" : "18"},
	{"ID" : "21", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525", "Parent" : "18", "Child" : ["22", "23"],
		"CDFG" : "KeyExpansion",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "338", "EstimateLatencyMax" : "338",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "Key", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525.sbox_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525.Rcon_U", "Parent" : "21"},
	{"ID" : "24", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536", "Parent" : "18", "Child" : ["25", "26"],
		"CDFG" : "Cipher",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1846", "EstimateLatencyMax" : "1846",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_249"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_249"}],
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "state"},
					{"ID" : "26", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "state"}]},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "RoundKey"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "sbox"}]}]},
	{"ID" : "25", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_AddRoundKey_fu_238", "Parent" : "24",
		"CDFG" : "AddRoundKey",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41", "EstimateLatencyMax" : "41",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "round", "Type" : "None", "Direction" : "I"},
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_SubBytes_fu_249", "Parent" : "24", "Child" : ["27"],
		"CDFG" : "SubBytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "57", "EstimateLatencyMax" : "57",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "27", "Level" : "6", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_SubBytes_fu_249.sbox_U", "Parent" : "26"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181", "Parent" : "14", "Child" : ["29", "30", "31", "34"],
		"CDFG" : "AES256_ECB_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2203", "EstimateLatencyMax" : "2203",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeyExpansion_fu_501"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Cipher_fu_512"}],
		"Port" : [
			{"Name" : "key", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "Key"}]},
			{"Name" : "ctr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_Cipher_fu_512", "Port" : "sbox"},
					{"ID" : "31", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "Rcon"}]}]},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.ctx_RoundKey_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.test_U", "Parent" : "28"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501", "Parent" : "28", "Child" : ["32", "33"],
		"CDFG" : "KeyExpansion",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "338", "EstimateLatencyMax" : "338",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "Key", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501.sbox_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501.Rcon_U", "Parent" : "31"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512", "Parent" : "28", "Child" : ["35", "36"],
		"CDFG" : "Cipher",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1846", "EstimateLatencyMax" : "1846",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_249"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_249"}],
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "state"},
					{"ID" : "36", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "state"}]},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "RoundKey"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "sbox"}]}]},
	{"ID" : "35", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_AddRoundKey_fu_238", "Parent" : "34",
		"CDFG" : "AddRoundKey",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41", "EstimateLatencyMax" : "41",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "round", "Type" : "None", "Direction" : "I"},
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_SubBytes_fu_249", "Parent" : "34", "Child" : ["37"],
		"CDFG" : "SubBytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "57", "EstimateLatencyMax" : "57",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_71.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_SubBytes_fu_249.sbox_U", "Parent" : "36"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87", "Parent" : "0", "Child" : ["39", "40", "41", "42", "49", "50", "52", "55"],
		"CDFG" : "owcpa_enc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "24200", "EstimateLatencyMax" : "2968400",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_lift_fu_164"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_frombytes_fu_170"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_tobytes_fu_178"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_frombytes_fu_185"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_frombytes_fu_185"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_195"}],
		"Port" : [
			{"Name" : "c", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_poly_Sq_tobytes_fu_178", "Port" : "r"}]},
			{"Name" : "rm", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "grp_poly_S3_frombytes_fu_185", "Port" : "msg"}]},
			{"Name" : "pk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_poly_Sq_frombytes_fu_170", "Port" : "a"}]}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.x1_coeffs_U", "Parent" : "38"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.x2_coeffs_U", "Parent" : "38"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.x3_coeffs_U", "Parent" : "38"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_lift_fu_164", "Parent" : "38", "Child" : ["43", "44", "45", "46", "47", "48"],
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
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_lift_fu_164.b_coeffs_U", "Parent" : "42"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_lift_fu_164.crypto_kem_enc_mac_muladd_16s_2ns_16ns_16_1_1_U57", "Parent" : "42"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_lift_fu_164.crypto_kem_enc_mac_muladd_16s_2ns_16ns_16_1_1_U58", "Parent" : "42"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_lift_fu_164.crypto_kem_enc_ama_addmuladd_2ns_3ns_16s_16ns_16_1_1_U59", "Parent" : "42"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_lift_fu_164.crypto_kem_enc_mac_muladd_2ns_16s_16ns_16_1_1_U60", "Parent" : "42"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_lift_fu_164.crypto_kem_enc_mac_muladd_2ns_16s_16ns_16_1_1_U61", "Parent" : "42"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_Sq_frombytes_fu_170", "Parent" : "38",
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
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_Sq_tobytes_fu_178", "Parent" : "38", "Child" : ["51"],
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
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_Sq_tobytes_fu_178.t_U", "Parent" : "50"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_S3_frombytes_fu_185", "Parent" : "38", "Child" : ["53", "54"],
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
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_S3_frombytes_fu_185.grp_mod3_fu_153", "Parent" : "52",
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
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_S3_frombytes_fu_185.grp_mod3_fu_158", "Parent" : "52",
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
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_Rq_mul_fu_195", "Parent" : "38", "Child" : ["56", "57"],
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
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_Rq_mul_fu_195.crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1_U51", "Parent" : "55"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_enc_fu_87.grp_poly_Rq_mul_fu_195.crypto_kem_enc_mac_muladd_16s_16s_16ns_16_1_1_U52", "Parent" : "55"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_S3_tobytes_fu_96", "Parent" : "0",
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
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sample_iid_fu_105", "Parent" : "0",
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
	crypto_kem_enc {
		c {Type O LastRead -1 FirstWrite 3}
		k {Type O LastRead -1 FirstWrite 6}
		pk {Type I LastRead 8 FirstWrite -1}
		DRBG_ctx_V {Type IO LastRead 8 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}
		DRBG_ctx_Key {Type IO LastRead 3 FirstWrite -1}
		DRBG_ctx_reseed_counter {Type IO LastRead 2 FirstWrite 2}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	sha3_256 {
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
	randombytes {
		x {Type O LastRead -1 FirstWrite 7}
		DRBG_ctx_V {Type IO LastRead 8 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}
		DRBG_ctx_Key {Type IO LastRead 3 FirstWrite -1}
		DRBG_ctx_reseed_counter {Type IO LastRead 2 FirstWrite 2}}
	AES256_CTR_DRBG_Upda {
		V {Type IO LastRead 8 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}
		DRBG_ctx_Key {Type IO LastRead 3 FirstWrite -1}}
	AES256_ECB {
		key {Type I LastRead 3 FirstWrite -1}
		ctr {Type I LastRead 8 FirstWrite -1}
		buffer_r {Type O LastRead -1 FirstWrite 12}
		buffer_offset {Type I LastRead 12 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}
	KeyExpansion {
		RoundKey {Type IO LastRead 6 FirstWrite 2}
		Key {Type I LastRead 3 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}
	Cipher {
		state {Type IO LastRead 18 FirstWrite 3}
		RoundKey {Type I LastRead 2 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}}
	AddRoundKey {
		round {Type I LastRead 0 FirstWrite -1}
		state {Type IO LastRead 2 FirstWrite 3}
		RoundKey {Type I LastRead 2 FirstWrite -1}}
	SubBytes {
		state {Type IO LastRead 2 FirstWrite 4}
		sbox {Type I LastRead -1 FirstWrite -1}}
	AES256_ECB_1 {
		key {Type I LastRead 3 FirstWrite -1}
		ctr {Type I LastRead 8 FirstWrite -1}
		buffer_r {Type O LastRead -1 FirstWrite 12}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}
	KeyExpansion {
		RoundKey {Type IO LastRead 6 FirstWrite 2}
		Key {Type I LastRead 3 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}
	Cipher {
		state {Type IO LastRead 18 FirstWrite 3}
		RoundKey {Type I LastRead 2 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}}
	AddRoundKey {
		round {Type I LastRead 0 FirstWrite -1}
		state {Type IO LastRead 2 FirstWrite 3}
		RoundKey {Type I LastRead 2 FirstWrite -1}}
	SubBytes {
		state {Type IO LastRead 2 FirstWrite 4}
		sbox {Type I LastRead -1 FirstWrite -1}}
	owcpa_enc {
		c {Type O LastRead -1 FirstWrite 3}
		rm {Type I LastRead 1 FirstWrite -1}
		pk {Type I LastRead 8 FirstWrite -1}}
	poly_lift {
		r_coeffs {Type O LastRead -1 FirstWrite 10}
		a_coeffs {Type I LastRead 7 FirstWrite -1}}
	poly_Sq_frombytes {
		r_coeffs {Type O LastRead -1 FirstWrite 2}
		a {Type I LastRead 8 FirstWrite -1}}
	poly_Sq_tobytes {
		r {Type O LastRead -1 FirstWrite 3}
		a_coeffs {Type I LastRead 3 FirstWrite -1}}
	poly_S3_frombytes {
		r_coeffs {Type O LastRead -1 FirstWrite 1}
		msg {Type I LastRead 1 FirstWrite -1}
		msg_offset {Type I LastRead 0 FirstWrite -1}}
	mod3 {
		a {Type I LastRead 0 FirstWrite -1}}
	mod3 {
		a {Type I LastRead 0 FirstWrite -1}}
	poly_Rq_mul {
		r_coeffs {Type IO LastRead 4 FirstWrite 1}
		a_coeffs {Type I LastRead 3 FirstWrite -1}
		b_coeffs {Type I LastRead 3 FirstWrite -1}}
	poly_S3_tobytes {
		msg {Type O LastRead -1 FirstWrite 5}
		msg_offset {Type I LastRead 0 FirstWrite -1}
		a_coeffs {Type I LastRead 4 FirstWrite -1}}
	sample_iid {
		r_coeffs {Type O LastRead -1 FirstWrite 1}
		uniformbytes {Type I LastRead 1 FirstWrite -1}
		uniformbytes_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	c { ap_memory {  { c_address0 mem_address 1 11 }  { c_ce0 mem_ce 1 1 }  { c_we0 mem_we 1 1 }  { c_d0 mem_din 1 8 }  { c_address1 MemPortADDR2 1 11 }  { c_ce1 MemPortCE2 1 1 }  { c_we1 MemPortWE2 1 1 }  { c_d1 MemPortDIN2 1 8 } } }
	k { ap_memory {  { k_address0 mem_address 1 5 }  { k_ce0 mem_ce 1 1 }  { k_we0 mem_we 1 1 }  { k_d0 mem_din 1 8 } } }
	pk { ap_memory {  { pk_address0 mem_address 1 11 }  { pk_ce0 mem_ce 1 1 }  { pk_q0 mem_dout 0 8 }  { pk_address1 MemPortADDR2 1 11 }  { pk_ce1 MemPortCE2 1 1 }  { pk_q1 MemPortDOUT2 0 8 } } }
	DRBG_ctx_V { ap_memory {  { DRBG_ctx_V_address0 mem_address 1 4 }  { DRBG_ctx_V_ce0 mem_ce 1 1 }  { DRBG_ctx_V_we0 mem_we 1 1 }  { DRBG_ctx_V_d0 mem_din 1 8 }  { DRBG_ctx_V_q0 mem_dout 0 8 }  { DRBG_ctx_V_address1 MemPortADDR2 1 4 }  { DRBG_ctx_V_ce1 MemPortCE2 1 1 }  { DRBG_ctx_V_q1 MemPortDOUT2 0 8 } } }
	DRBG_ctx_Key { ap_memory {  { DRBG_ctx_Key_address0 mem_address 1 5 }  { DRBG_ctx_Key_ce0 mem_ce 1 1 }  { DRBG_ctx_Key_we0 mem_we 1 1 }  { DRBG_ctx_Key_d0 mem_din 1 8 }  { DRBG_ctx_Key_q0 mem_dout 0 8 }  { DRBG_ctx_Key_address1 MemPortADDR2 1 5 }  { DRBG_ctx_Key_ce1 MemPortCE2 1 1 }  { DRBG_ctx_Key_q1 MemPortDOUT2 0 8 } } }
	DRBG_ctx_reseed_counter { ap_ovld {  { DRBG_ctx_reseed_counter_i in_data 0 32 }  { DRBG_ctx_reseed_counter_o out_data 1 32 }  { DRBG_ctx_reseed_counter_o_ap_vld out_vld 1 1 } } }
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
