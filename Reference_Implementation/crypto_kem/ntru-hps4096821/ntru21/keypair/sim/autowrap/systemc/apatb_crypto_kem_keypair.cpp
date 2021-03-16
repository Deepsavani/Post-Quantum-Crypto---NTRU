// ==============================================================
// File generated on Wed Aug 26 13:46:30 EDT 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "pk"
#define AUTOTB_TVOUT_pk  "../tv/cdatafile/c.crypto_kem_keypair.autotvout_pk.dat"
#define AUTOTB_TVIN_pk  "../tv/cdatafile/c.crypto_kem_keypair.autotvin_pk.dat"
// wrapc file define: "sk"
#define AUTOTB_TVOUT_sk  "../tv/cdatafile/c.crypto_kem_keypair.autotvout_sk.dat"
#define AUTOTB_TVIN_sk  "../tv/cdatafile/c.crypto_kem_keypair.autotvin_sk.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.crypto_kem_keypair.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "pk"
#define AUTOTB_TVOUT_PC_pk  "../tv/rtldatafile/rtl.crypto_kem_keypair.autotvout_pk.dat"
// tvout file define: "sk"
#define AUTOTB_TVOUT_PC_sk  "../tv/rtldatafile/rtl.crypto_kem_keypair.autotvout_sk.dat"
// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.crypto_kem_keypair.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			pk_depth = 0;
			sk_depth = 0;
			ap_return_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{pk " << pk_depth << "}\n";
			total_list << "{sk " << sk_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int pk_depth;
		int sk_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" int crypto_kem_keypair (
char pk[1230],
char sk[1590]);

extern "C" int AESL_WRAP_crypto_kem_keypair (
char pk[1230],
char sk[1590])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		int AESL_return;

		// output port post check: "pk"
		aesl_fh.read(AUTOTB_TVOUT_PC_pk, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pk, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pk, AESL_token); // data

			sc_bv<8> *pk_pc_buffer = new sc_bv<8>[1230];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pk', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pk', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					pk_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pk, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pk))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pk
				{
					// bitslice(7, 0)
					// {
						// celement: pk(7, 0)
						// {
							sc_lv<8>* pk_lv0_0_1229_1 = new sc_lv<8>[1230];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: pk(7, 0)
						{
							// carray: (0) => (1229) @ (1)
							for (int i_0 = 0; i_0 <= 1229; i_0 += 1)
							{
								if (&(pk[0]) != NULL) // check the null address if the c port is array or others
								{
									pk_lv0_0_1229_1[hls_map_index].range(7, 0) = sc_bv<8>(pk_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: pk(7, 0)
						{
							// carray: (0) => (1229) @ (1)
							for (int i_0 = 0; i_0 <= 1229; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : pk[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : pk[0]
								// output_left_conversion : pk[i_0]
								// output_type_conversion : (pk_lv0_0_1229_1[hls_map_index]).to_uint64()
								if (&(pk[0]) != NULL) // check the null address if the c port is array or others
								{
									pk[i_0] = (pk_lv0_0_1229_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] pk_pc_buffer;
		}

		// output port post check: "sk"
		aesl_fh.read(AUTOTB_TVOUT_PC_sk, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sk, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sk, AESL_token); // data

			sc_bv<8> *sk_pc_buffer = new sc_bv<8>[1590];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sk', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sk', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sk_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sk, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sk))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sk
				{
					// bitslice(7, 0)
					// {
						// celement: sk(7, 0)
						// {
							sc_lv<8>* sk_lv0_0_1589_1 = new sc_lv<8>[1590];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: sk(7, 0)
						{
							// carray: (0) => (1589) @ (1)
							for (int i_0 = 0; i_0 <= 1589; i_0 += 1)
							{
								if (&(sk[0]) != NULL) // check the null address if the c port is array or others
								{
									sk_lv0_0_1589_1[hls_map_index].range(7, 0) = sc_bv<8>(sk_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: sk(7, 0)
						{
							// carray: (0) => (1589) @ (1)
							for (int i_0 = 0; i_0 <= 1589; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : sk[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : sk[0]
								// output_left_conversion : sk[i_0]
								// output_type_conversion : (sk_lv0_0_1589_1[hls_map_index]).to_uint64()
								if (&(sk[0]) != NULL) // check the null address if the c port is array or others
								{
									sk[i_0] = (sk_lv0_0_1589_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sk_pc_buffer;
		}

		// output port post check: "ap_return"
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data

			sc_bv<32> ap_return_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ap_return_pc_buffer = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ap_return))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ap_return
				{
					// bitslice(31, 0)
					// {
						// celement: return(31, 0)
						// {
							sc_lv<32> return_lv0_0_1_0;
						// }
					// }

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									return_lv0_0_1_0.range(31, 0) = sc_bv<32>(ap_return_pc_buffer.range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								// sub                    : 
								// ori_name               : AESL_return
								// sub_1st_elem           : 
								// ori_name_1st_elem      : AESL_return
								// output_left_conversion : AESL_return
								// output_type_conversion : (return_lv0_0_1_0).to_uint64()
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									AESL_return = (return_lv0_0_1_0).to_uint64();
								}
							}
						}
					}
				}
			}
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "pk"
		char* tvin_pk = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pk);
		char* tvout_pk = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pk);

		// "sk"
		char* tvin_sk = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sk);
		char* tvout_sk = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sk);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_pk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);

		sc_bv<8>* pk_tvin_wrapc_buffer = new sc_bv<8>[1230];

		// RTL Name: pk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: pk(7, 0)
				{
					// carray: (0) => (1229) @ (1)
					for (int i_0 = 0; i_0 <= 1229; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pk[0]
						// regulate_c_name       : pk
						// input_type_conversion : pk[i_0]
						if (&(pk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> pk_tmp_mem;
							pk_tmp_mem = pk[i_0];
							pk_tvin_wrapc_buffer[hls_map_index].range(7, 0) = pk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1230; i++)
		{
			sprintf(tvin_pk, "%s\n", (pk_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);
		}

		tcl_file.set_num(1230, &tcl_file.pk_depth);
		sprintf(tvin_pk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);

		// release memory allocation
		delete [] pk_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sk, tvin_sk);

		sc_bv<8>* sk_tvin_wrapc_buffer = new sc_bv<8>[1590];

		// RTL Name: sk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: sk(7, 0)
				{
					// carray: (0) => (1589) @ (1)
					for (int i_0 = 0; i_0 <= 1589; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sk[0]
						// regulate_c_name       : sk
						// input_type_conversion : sk[i_0]
						if (&(sk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> sk_tmp_mem;
							sk_tmp_mem = sk[i_0];
							sk_tvin_wrapc_buffer[hls_map_index].range(7, 0) = sk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1590; i++)
		{
			sprintf(tvin_sk, "%s\n", (sk_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sk, tvin_sk);
		}

		tcl_file.set_num(1590, &tcl_file.sk_depth);
		sprintf(tvin_sk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sk, tvin_sk);

		// release memory allocation
		delete [] sk_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		int AESL_return = crypto_kem_keypair(pk, sk);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_pk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pk, tvout_pk);

		sc_bv<8>* pk_tvout_wrapc_buffer = new sc_bv<8>[1230];

		// RTL Name: pk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: pk(7, 0)
				{
					// carray: (0) => (1229) @ (1)
					for (int i_0 = 0; i_0 <= 1229; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pk[0]
						// regulate_c_name       : pk
						// input_type_conversion : pk[i_0]
						if (&(pk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> pk_tmp_mem;
							pk_tmp_mem = pk[i_0];
							pk_tvout_wrapc_buffer[hls_map_index].range(7, 0) = pk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1230; i++)
		{
			sprintf(tvout_pk, "%s\n", (pk_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pk, tvout_pk);
		}

		tcl_file.set_num(1230, &tcl_file.pk_depth);
		sprintf(tvout_pk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pk, tvout_pk);

		// release memory allocation
		delete [] pk_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sk, tvout_sk);

		sc_bv<8>* sk_tvout_wrapc_buffer = new sc_bv<8>[1590];

		// RTL Name: sk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: sk(7, 0)
				{
					// carray: (0) => (1589) @ (1)
					for (int i_0 = 0; i_0 <= 1589; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sk[0]
						// regulate_c_name       : sk
						// input_type_conversion : sk[i_0]
						if (&(sk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> sk_tmp_mem;
							sk_tmp_mem = sk[i_0];
							sk_tvout_wrapc_buffer[hls_map_index].range(7, 0) = sk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1590; i++)
		{
			sprintf(tvout_sk, "%s\n", (sk_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sk, tvout_sk);
		}

		tcl_file.set_num(1590, &tcl_file.sk_depth);
		sprintf(tvout_sk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sk, tvout_sk);

		// release memory allocation
		delete [] sk_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ap_return, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		sc_bv<32> ap_return_tvout_wrapc_buffer;

		// RTL Name: ap_return
		{
			// bitslice(31, 0)
			{
				// celement: return(31, 0)
				{
					// carray: (0) => (1) @ (0)
					{
						// sub                   : 
						// ori_name              : AESL_return
						// sub_1st_elem          : 
						// ori_name_1st_elem     : AESL_return
						// regulate_c_name       : return
						// input_type_conversion : AESL_return
						if (&(AESL_return) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> return_tmp_mem;
							return_tmp_mem = AESL_return;
							ap_return_tvout_wrapc_buffer.range(31, 0) = return_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_ap_return, "%s\n", (ap_return_tvout_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);
		}

		tcl_file.set_num(1, &tcl_file.ap_return_depth);
		sprintf(tvout_ap_return, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "pk"
		delete [] tvout_pk;
		delete [] tvin_pk;
		// release memory allocation: "sk"
		delete [] tvout_sk;
		delete [] tvin_sk;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

