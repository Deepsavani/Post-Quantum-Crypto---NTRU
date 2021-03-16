set moduleName crypto_kem_keypair
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
set C_modelName {crypto_kem_keypair}
set C_modelType { int 32 }
set C_modelArgList {
	{ pk int 8 regular {array 930 { 0 0 } 0 1 }  }
	{ sk int 8 regular {array 1234 { 0 0 } 0 1 }  }
	{ DRBG_ctx_V int 8 regular {array 16 { 2 1 } 1 1 } {global 2}  }
	{ DRBG_ctx_Key int 8 regular {array 32 { 2 1 } 1 1 } {global 2}  }
	{ DRBG_ctx_reseed_counter int 32 regular {pointer 2} {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "pk", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "pk","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 929,"step" : 1}]}]}]} , 
 	{ "Name" : "sk", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "sk","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 1233,"step" : 1}]}]}]} , 
 	{ "Name" : "DRBG_ctx_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "DRBG_ctx.V","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 15,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "DRBG_ctx_Key", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "DRBG_ctx.Key","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 31,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "DRBG_ctx_reseed_counter", "interface" : "wire", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "DRBG_ctx.reseed_counter","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 42
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ pk_address0 sc_out sc_lv 10 signal 0 } 
	{ pk_ce0 sc_out sc_logic 1 signal 0 } 
	{ pk_we0 sc_out sc_logic 1 signal 0 } 
	{ pk_d0 sc_out sc_lv 8 signal 0 } 
	{ pk_address1 sc_out sc_lv 10 signal 0 } 
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
	{ DRBG_ctx_V_address0 sc_out sc_lv 4 signal 2 } 
	{ DRBG_ctx_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ DRBG_ctx_V_we0 sc_out sc_logic 1 signal 2 } 
	{ DRBG_ctx_V_d0 sc_out sc_lv 8 signal 2 } 
	{ DRBG_ctx_V_q0 sc_in sc_lv 8 signal 2 } 
	{ DRBG_ctx_V_address1 sc_out sc_lv 4 signal 2 } 
	{ DRBG_ctx_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ DRBG_ctx_V_q1 sc_in sc_lv 8 signal 2 } 
	{ DRBG_ctx_Key_address0 sc_out sc_lv 5 signal 3 } 
	{ DRBG_ctx_Key_ce0 sc_out sc_logic 1 signal 3 } 
	{ DRBG_ctx_Key_we0 sc_out sc_logic 1 signal 3 } 
	{ DRBG_ctx_Key_d0 sc_out sc_lv 8 signal 3 } 
	{ DRBG_ctx_Key_q0 sc_in sc_lv 8 signal 3 } 
	{ DRBG_ctx_Key_address1 sc_out sc_lv 5 signal 3 } 
	{ DRBG_ctx_Key_ce1 sc_out sc_logic 1 signal 3 } 
	{ DRBG_ctx_Key_q1 sc_in sc_lv 8 signal 3 } 
	{ DRBG_ctx_reseed_counter_i sc_in sc_lv 32 signal 4 } 
	{ DRBG_ctx_reseed_counter_o sc_out sc_lv 32 signal 4 } 
	{ DRBG_ctx_reseed_counter_o_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "pk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "pk", "role": "address0" }} , 
 	{ "name": "pk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "ce0" }} , 
 	{ "name": "pk_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "we0" }} , 
 	{ "name": "pk_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pk", "role": "d0" }} , 
 	{ "name": "pk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "pk", "role": "address1" }} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "41", "65"],
		"CDFG" : "crypto_kem_keypair",
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
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_owcpa_keypair_fu_34"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_randombytes_fu_43"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_randombytes_1_fu_59"}],
		"Port" : [
			{"Name" : "pk", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_owcpa_keypair_fu_34", "Port" : "pk"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_randombytes_1_fu_59", "Port" : "x"},
					{"ID" : "2", "SubInstance" : "grp_owcpa_keypair_fu_34", "Port" : "sk"}]},
			{"Name" : "DRBG_ctx_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_randombytes_1_fu_59", "Port" : "DRBG_ctx_V"},
					{"ID" : "41", "SubInstance" : "grp_randombytes_fu_43", "Port" : "DRBG_ctx_V"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_randombytes_1_fu_59", "Port" : "sbox"},
					{"ID" : "41", "SubInstance" : "grp_randombytes_fu_43", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_randombytes_1_fu_59", "Port" : "Rcon"},
					{"ID" : "41", "SubInstance" : "grp_randombytes_fu_43", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_randombytes_1_fu_59", "Port" : "DRBG_ctx_Key"},
					{"ID" : "41", "SubInstance" : "grp_randombytes_fu_43", "Port" : "DRBG_ctx_Key"}]},
			{"Name" : "DRBG_ctx_reseed_counter", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_randombytes_1_fu_59", "Port" : "DRBG_ctx_reseed_counter"},
					{"ID" : "41", "SubInstance" : "grp_randombytes_fu_43", "Port" : "DRBG_ctx_reseed_counter"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.seed_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34", "Parent" : "0", "Child" : ["3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "15", "26", "33", "35", "37", "40"],
		"CDFG" : "owcpa_keypair",
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
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sample_fixed_type_fu_351"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_inv_fu_358"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_R2_inv_fu_364"},
			{"State" : "ap_ST_fsm_state53", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_tobytes_1_fu_370"},
			{"State" : "ap_ST_fsm_state57", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Sq_tobytes_fu_377"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state28", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state34", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state50", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state53", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_Rq_mul_fu_384"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_391"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_S3_tobytes_fu_391"}],
		"Port" : [
			{"Name" : "pk", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "35", "SubInstance" : "grp_poly_Sq_tobytes_fu_377", "Port" : "r"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_poly_Sq_tobytes_1_fu_370", "Port" : "r"},
					{"ID" : "40", "SubInstance" : "grp_poly_S3_tobytes_fu_391", "Port" : "msg"}]},
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "grp_sample_fixed_type_fu_351", "Port" : "u"}]}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.b_coeffs_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.c_coeffs_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.s_coeffs_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.ai2_coeffs_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.x1_coeffs_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.x2_coeffs_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.x3_coeffs_U", "Parent" : "2"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.x4_coeffs_U", "Parent" : "2"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.x5_coeffs_U", "Parent" : "2"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_sample_fixed_type_fu_351", "Parent" : "2", "Child" : ["13", "14"],
		"CDFG" : "sample_fixed_type",
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
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_crypto_sort_fu_369"}],
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "u", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_sample_fixed_type_fu_351.s_U", "Parent" : "12"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_sample_fixed_type_fu_351.grp_crypto_sort_fu_369", "Parent" : "12",
		"CDFG" : "crypto_sort",
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
		"Port" : [
			{"Name" : "array_r", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358", "Parent" : "2", "Child" : ["16", "17", "18", "19", "20", "21", "22", "23", "24", "25"],
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
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.b_coeffs_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.c_coeffs_U", "Parent" : "15"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.f_coeffs_U", "Parent" : "15"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.g_coeffs_U", "Parent" : "15"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.grp_mod3_fu_621", "Parent" : "15",
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
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1_U35", "Parent" : "15"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U36", "Parent" : "15"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U37", "Parent" : "15"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U38", "Parent" : "15"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_inv_fu_358.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U39", "Parent" : "15"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_R2_inv_fu_364", "Parent" : "2", "Child" : ["27", "28", "29", "30", "31", "32"],
		"CDFG" : "poly_R2_inv",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "14795853", "EstimateLatencyMax" : "14795853",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_R2_inv_fu_364.b_coeffs_U", "Parent" : "26"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_R2_inv_fu_364.f_coeffs_U", "Parent" : "26"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_R2_inv_fu_364.g_coeffs_U", "Parent" : "26"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_R2_inv_fu_364.crypto_kem_keypair_urem_11ns_11ns_11_15_seq_1_U54", "Parent" : "26"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_R2_inv_fu_364.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U55", "Parent" : "26"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_R2_inv_fu_364.crypto_kem_keypair_mul_mul_16s_16s_16_1_1_U56", "Parent" : "26"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_Sq_tobytes_1_fu_370", "Parent" : "2", "Child" : ["34"],
		"CDFG" : "poly_Sq_tobytes_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2035", "EstimateLatencyMax" : "2035",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_Sq_tobytes_1_fu_370.t_U", "Parent" : "33"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_Sq_tobytes_fu_377", "Parent" : "2", "Child" : ["36"],
		"CDFG" : "poly_Sq_tobytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2035", "EstimateLatencyMax" : "2035",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_Sq_tobytes_fu_377.t_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_Rq_mul_fu_384", "Parent" : "2", "Child" : ["38", "39"],
		"CDFG" : "poly_Rq_mul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4740", "EstimateLatencyMax" : "2750652",
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
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_Rq_mul_fu_384.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U49", "Parent" : "37"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_Rq_mul_fu_384.crypto_kem_keypair_mac_muladd_16s_16s_16ns_16_1_1_U50", "Parent" : "37"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_owcpa_keypair_fu_34.grp_poly_S3_tobytes_fu_391", "Parent" : "2",
		"CDFG" : "poly_S3_tobytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "677", "EstimateLatencyMax" : "677",
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
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43", "Parent" : "0", "Child" : ["42", "43", "55"],
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
					{"ID" : "43", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "V"},
					{"ID" : "55", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "ctr"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "sbox"},
					{"ID" : "55", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "Rcon"},
					{"ID" : "55", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "DRBG_ctx_Key"},
					{"ID" : "55", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "key"}]},
			{"Name" : "DRBG_ctx_reseed_counter", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.block_U", "Parent" : "41"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169", "Parent" : "41", "Child" : ["44", "45"],
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
					{"ID" : "45", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "ctr"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "key"}]}]},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.temp_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171", "Parent" : "43", "Child" : ["46", "47", "48", "51"],
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
					{"ID" : "48", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "Key"}]},
			{"Name" : "ctr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "sbox"},
					{"ID" : "51", "SubInstance" : "grp_Cipher_fu_536", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "Rcon"}]}]},
	{"ID" : "46", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.ctx_RoundKey_U", "Parent" : "45"},
	{"ID" : "47", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.test_U", "Parent" : "45"},
	{"ID" : "48", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525", "Parent" : "45", "Child" : ["49", "50"],
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
	{"ID" : "49", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525.sbox_U", "Parent" : "48"},
	{"ID" : "50", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525.Rcon_U", "Parent" : "48"},
	{"ID" : "51", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536", "Parent" : "45", "Child" : ["52", "53"],
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
					{"ID" : "52", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "state"},
					{"ID" : "53", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "state"}]},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "RoundKey"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "sbox"}]}]},
	{"ID" : "52", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_AddRoundKey_fu_238", "Parent" : "51",
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
	{"ID" : "53", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_SubBytes_fu_249", "Parent" : "51", "Child" : ["54"],
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
	{"ID" : "54", "Level" : "6", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_SubBytes_fu_249.sbox_U", "Parent" : "53"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181", "Parent" : "41", "Child" : ["56", "57", "58", "61"],
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
					{"ID" : "58", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "Key"}]},
			{"Name" : "ctr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "58", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "sbox"},
					{"ID" : "61", "SubInstance" : "grp_Cipher_fu_512", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "58", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "Rcon"}]}]},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.ctx_RoundKey_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.test_U", "Parent" : "55"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501", "Parent" : "55", "Child" : ["59", "60"],
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
	{"ID" : "59", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501.sbox_U", "Parent" : "58"},
	{"ID" : "60", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501.Rcon_U", "Parent" : "58"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512", "Parent" : "55", "Child" : ["62", "63"],
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
					{"ID" : "62", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "state"},
					{"ID" : "63", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "state"}]},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "RoundKey"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "sbox"}]}]},
	{"ID" : "62", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_AddRoundKey_fu_238", "Parent" : "61",
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
	{"ID" : "63", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_SubBytes_fu_249", "Parent" : "61", "Child" : ["64"],
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
	{"ID" : "64", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_43.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_SubBytes_fu_249.sbox_U", "Parent" : "63"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59", "Parent" : "0", "Child" : ["66", "67", "79"],
		"CDFG" : "randombytes_1",
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
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_173"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AES256_ECB_1_fu_185"}],
		"Port" : [
			{"Name" : "x", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "DRBG_ctx_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "79", "SubInstance" : "grp_AES256_ECB_1_fu_185", "Port" : "ctr"},
					{"ID" : "67", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_173", "Port" : "V"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "79", "SubInstance" : "grp_AES256_ECB_1_fu_185", "Port" : "sbox"},
					{"ID" : "67", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_173", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "79", "SubInstance" : "grp_AES256_ECB_1_fu_185", "Port" : "Rcon"},
					{"ID" : "67", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_173", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "79", "SubInstance" : "grp_AES256_ECB_1_fu_185", "Port" : "key"},
					{"ID" : "67", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_173", "Port" : "DRBG_ctx_Key"}]},
			{"Name" : "DRBG_ctx_reseed_counter", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.block_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173", "Parent" : "65", "Child" : ["68", "69"],
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
					{"ID" : "69", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "ctr"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "key"}]}]},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.temp_U", "Parent" : "67"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171", "Parent" : "67", "Child" : ["70", "71", "72", "75"],
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
					{"ID" : "72", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "Key"}]},
			{"Name" : "ctr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "sbox"},
					{"ID" : "75", "SubInstance" : "grp_Cipher_fu_536", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "Rcon"}]}]},
	{"ID" : "70", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.ctx_RoundKey_U", "Parent" : "69"},
	{"ID" : "71", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.test_U", "Parent" : "69"},
	{"ID" : "72", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525", "Parent" : "69", "Child" : ["73", "74"],
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
	{"ID" : "73", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525.sbox_U", "Parent" : "72"},
	{"ID" : "74", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525.Rcon_U", "Parent" : "72"},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.grp_Cipher_fu_536", "Parent" : "69", "Child" : ["76", "77"],
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
					{"ID" : "76", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "state"},
					{"ID" : "77", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "state"}]},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "76", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "RoundKey"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "77", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "sbox"}]}]},
	{"ID" : "76", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_AddRoundKey_fu_238", "Parent" : "75",
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
	{"ID" : "77", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_SubBytes_fu_249", "Parent" : "75", "Child" : ["78"],
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
	{"ID" : "78", "Level" : "6", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_CTR_DRBG_Upda_fu_173.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_SubBytes_fu_249.sbox_U", "Parent" : "77"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185", "Parent" : "65", "Child" : ["80", "81", "82", "85"],
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
					{"ID" : "82", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "Key"}]},
			{"Name" : "ctr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "82", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "sbox"},
					{"ID" : "85", "SubInstance" : "grp_Cipher_fu_512", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "82", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "Rcon"}]}]},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.ctx_RoundKey_U", "Parent" : "79"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.test_U", "Parent" : "79"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.grp_KeyExpansion_fu_501", "Parent" : "79", "Child" : ["83", "84"],
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
	{"ID" : "83", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.grp_KeyExpansion_fu_501.sbox_U", "Parent" : "82"},
	{"ID" : "84", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.grp_KeyExpansion_fu_501.Rcon_U", "Parent" : "82"},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.grp_Cipher_fu_512", "Parent" : "79", "Child" : ["86", "87"],
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
					{"ID" : "86", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "state"},
					{"ID" : "87", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "state"}]},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "86", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "RoundKey"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "sbox"}]}]},
	{"ID" : "86", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.grp_Cipher_fu_512.grp_AddRoundKey_fu_238", "Parent" : "85",
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
	{"ID" : "87", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.grp_Cipher_fu_512.grp_SubBytes_fu_249", "Parent" : "85", "Child" : ["88"],
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
	{"ID" : "88", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_1_fu_59.grp_AES256_ECB_1_fu_185.grp_Cipher_fu_512.grp_SubBytes_fu_249.sbox_U", "Parent" : "87"}]}


set ArgLastReadFirstWriteLatency {
	crypto_kem_keypair {
		pk {Type O LastRead -1 FirstWrite 3}
		sk {Type O LastRead -1 FirstWrite 2}
		DRBG_ctx_V {Type IO LastRead 8 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}
		DRBG_ctx_Key {Type IO LastRead 3 FirstWrite -1}
		DRBG_ctx_reseed_counter {Type IO LastRead 2 FirstWrite 2}}
	owcpa_keypair {
		pk {Type O LastRead -1 FirstWrite 3}
		sk {Type O LastRead -1 FirstWrite 2}
		seed {Type I LastRead 9 FirstWrite -1}}
	sample_fixed_type {
		r_coeffs {Type O LastRead -1 FirstWrite 5}
		u {Type I LastRead 9 FirstWrite -1}}
	crypto_sort {
		array_r {Type IO LastRead 6 FirstWrite 4}}
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
	poly_Rq_mul {
		r_coeffs {Type IO LastRead 4 FirstWrite 1}
		a_coeffs {Type I LastRead 3 FirstWrite -1}
		b_coeffs {Type I LastRead 3 FirstWrite -1}}
	poly_S3_tobytes {
		msg {Type O LastRead -1 FirstWrite 2}
		msg_offset {Type I LastRead 0 FirstWrite -1}
		a_coeffs {Type I LastRead 4 FirstWrite -1}}
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
	randombytes_1 {
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
		sbox {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	pk { ap_memory {  { pk_address0 mem_address 1 10 }  { pk_ce0 mem_ce 1 1 }  { pk_we0 mem_we 1 1 }  { pk_d0 mem_din 1 8 }  { pk_address1 MemPortADDR2 1 10 }  { pk_ce1 MemPortCE2 1 1 }  { pk_we1 MemPortWE2 1 1 }  { pk_d1 MemPortDIN2 1 8 } } }
	sk { ap_memory {  { sk_address0 mem_address 1 11 }  { sk_ce0 mem_ce 1 1 }  { sk_we0 mem_we 1 1 }  { sk_d0 mem_din 1 8 }  { sk_address1 MemPortADDR2 1 11 }  { sk_ce1 MemPortCE2 1 1 }  { sk_we1 MemPortWE2 1 1 }  { sk_d1 MemPortDIN2 1 8 } } }
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
