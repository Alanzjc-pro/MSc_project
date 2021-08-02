############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ISI_MUL_EN
set_top estimate_ISI_encode
add_files code/ISI_MUL_En.cpp
add_files code/ISI_MUL_En.h
add_files -tb code/ISI_MUL_En_test.cpp
add_files -tb code/test_data_3.h
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
source "./ISI_MUL_EN/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
