# ==============================================================
# File generated on Tue Aug 25 18:32:03 EDT 2020
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
CSIM_DESIGN = 1

__SIM_FPO__ = 1

__HLS_FPO_v6_1__ = 1

__SIM_MATHHLS__ = 1

__SIM_OPENCV__ = 1

__SIM_FFT__ = 1

__SIM_FIR__ = 1

__SIM_DDS__ = 1

ObjDir = obj

HLS_SOURCES = ../../../../PQCgenKAT_kem.c ../../../../aes.c ../../../../crypto_sort.c ../../../../fips202.c ../../../../kem.c ../../../../owcpa.c ../../../../pack3.c ../../../../packq.c ../../../../poly.c ../../../../rng.c ../../../../sample.c ../../../../verify.c

TARGET := csim.exe

AUTOPILOT_ROOT := /opt/Xilinx2018/Vivado/2018.3
AUTOPILOT_MACH := lnx64
ifdef AP_GCC_M32
  AUTOPILOT_MACH := Linux_x86
  IFLAG += -m32
endif
IFLAG += -fPIC
ifndef AP_GCC_PATH
  AP_GCC_PATH := /opt/Xilinx2018/Vivado/2018.3/tps/lnx64/gcc-6.2.0/bin
endif
AUTOPILOT_TOOL := ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
AP_CLANG_PATH := ${AUTOPILOT_TOOL}/clang-3.9/bin
AUTOPILOT_TECH := ${AUTOPILOT_ROOT}/common/technology


IFLAG += -I "${AUTOPILOT_TOOL}/systemc/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include/opencv"
IFLAG += -I "${AUTOPILOT_ROOT}/include/ap_sysc"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_FP_comp"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_comp"
IFLAG += -I "${AUTOPILOT_TOOL}/auto_cc/include"
IFLAG += -D__SIM_FPO__

IFLAG += -D__HLS_FPO_v6_1__

IFLAG += -D__SIM_OPENCV__

IFLAG += -D__SIM_FFT__

IFLAG += -D__SIM_FIR__

IFLAG += -D__SIM_DDS__

IFLAG += -D__DSP48E1__
IFLAG += -Wno-unknown-pragmas 
IFLAG += -g
DFLAG += -D__xilinx_ip_top= -DAESL_TB
CCFLAG += 
TOOLCHAIN += 



include ./Makefile.rules

all: $(TARGET)



$(ObjDir)/PQCgenKAT_kem.o: ../../../../PQCgenKAT_kem.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../PQCgenKAT_kem.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD -Wno-unknown-pragmas  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/PQCgenKAT_kem.d

$(ObjDir)/aes.o: ../../../../aes.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../aes.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/aes.d

$(ObjDir)/crypto_sort.o: ../../../../crypto_sort.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../crypto_sort.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/crypto_sort.d

$(ObjDir)/fips202.o: ../../../../fips202.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../fips202.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/fips202.d

$(ObjDir)/kem.o: ../../../../kem.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../kem.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/kem.d

$(ObjDir)/owcpa.o: ../../../../owcpa.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../owcpa.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/owcpa.d

$(ObjDir)/pack3.o: ../../../../pack3.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../pack3.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/pack3.d

$(ObjDir)/packq.o: ../../../../packq.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../packq.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/packq.d

$(ObjDir)/poly.o: ../../../../poly.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../poly.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/poly.d

$(ObjDir)/rng.o: ../../../../rng.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../rng.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/rng.d

$(ObjDir)/sample.o: ../../../../sample.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../sample.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/sample.d

$(ObjDir)/verify.o: ../../../../verify.c $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../verify.c in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CC) ${CCFLAG} -c -MMD  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/verify.d
