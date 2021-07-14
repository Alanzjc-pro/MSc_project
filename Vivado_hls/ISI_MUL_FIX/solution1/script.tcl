############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ISI_MUL_FIX
set_top estimate_ISI
add_files Compiled_Code/ISI_MUL_FIX.h
add_files Compiled_Code/ISI_MUL_FIX.cpp
add_files -tb SpksTimecell.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb ISIcell.dat -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb Compiled_Code/ISI_MUL_FIX_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020-clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./ISI_MUL_FIX/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
