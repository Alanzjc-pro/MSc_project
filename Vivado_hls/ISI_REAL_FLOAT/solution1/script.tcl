############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ISI_REAL
set_top estimate_ISI
add_files Compiled_Code/ISI_real.cpp
add_files Compiled_Code/ISI_real.h
add_files -tb FR_isi.dat
add_files -tb Compiled_Code/ISI_RealTime_test.cpp
add_files -tb SpksTime.dat
open_solution "solution1"
set_part {xc7z020-clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./ISI_REAL/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
