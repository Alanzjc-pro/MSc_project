############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ISI_REAL_FIXED
set_top estimate_ISI
add_files Documents/Vivado_hls/Compiled_Code/ISI_RealTime_FIX.cpp
add_files Documents/Vivado_hls/Compiled_Code/ISI_Realtime_FIX.h
add_files -tb Documents/Vivado_hls/FR_isi.dat
add_files -tb Documents/Vivado_hls/Compiled_Code/ISI_RealTime_FIX_test.cpp
add_files -tb Documents/Vivado_hls/SpksTime.dat
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./ISI_REAL_FIXED/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
