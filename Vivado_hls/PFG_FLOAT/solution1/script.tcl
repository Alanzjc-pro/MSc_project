############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project PFG_FLOAT
set_top estimate_FR
add_files FR.h
add_files -tb FR.dat
add_files -tb PFG_FLOAT/solution1/FR_test.c
add_files -tb PFG_FLOAT/solution1/SpksTime.dat
open_solution "solution1"
set_part {xc7z020-clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./PFG_FLOAT/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
