############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project BIN
set_top estimate_FR_2
add_files XilinxDocs/MSc_project-main/Vivado_hls/Compiled_Code/BIN_MUL_FIX_v3.cpp
add_files XilinxDocs/MSc_project-main/Vivado_hls/Compiled_Code/BIN_MUL_FIX_v3.h
add_files -tb XilinxDocs/MSc_project-main/Vivado_hls/Compiled_Code/BIN_MUL_FIX_v3_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb XilinxDocs/MSc_project-main/Vivado_hls/Compiled_Code/test_data_3.h -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "unroll_24"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
source "./BIN/unroll_24/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
