
set PATH=
call D:/xilinx/Vivado/2019.1/bin/xelab xil_defaultlib.apatb_crypto_kem_dec_top glbl -prj crypto_kem_dec.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm --initfile "D:/xilinx/Vivado/2019.1/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s crypto_kem_dec 
call D:/xilinx/Vivado/2019.1/bin/xsim --noieeewarnings crypto_kem_dec -tclbatch crypto_kem_dec.tcl

