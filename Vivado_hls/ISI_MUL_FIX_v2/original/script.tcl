############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ISI_MUL_FIX_v4
set_top estimate_ISI
add_files Compiled_Code/ISI_MUL_FIX_v4.cpp
add_files Compiled_Code/ISI_MUL_FIX_v4.h
add_files Compiled_Code/golden_data.h
add_files Compiled_Code/test_data_3.h
add_files -tb Compiled_Code/ISI_MUL_FIX_v4_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "original"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
source "./ISI_MUL_FIX_v4/original/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
