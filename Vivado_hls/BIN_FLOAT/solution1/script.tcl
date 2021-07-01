############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project BIN_FLOAT
set_top estimate_FR
add_files BIN_FLOAT/solution1/FRbin.cpp
add_files BIN_FLOAT/solution1/.tcls/FRbin.h
add_files -tb BIN_FLOAT/FPbin_test.cpp
add_files -tb FRbin.dat
add_files -tb SpksTime.dat
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./BIN_FLOAT/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
