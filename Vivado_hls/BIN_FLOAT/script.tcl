############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project BIN_FLOAT
set_top estimate_FR
add_files code/BIN_FLOAT.cpp
add_files code/BIN_FLOAT.h
add_files -tb code/BIN_FLOAT_test.cpp
add_files -tb code/test_data_3.h
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
source "./BIN_FLOAT/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
