############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project msc_prj
set_top estimate_FR
add_files msc_prj/solution1/FR.c
add_files msc_prj/solution1/.tcls/FR.h
add_files -tb FR.dat
add_files -tb msc_prj/solution1/FR_test.c
add_files -tb msc_prj/solution1/SpksTime.dat
open_solution "solution1"
set_part {xc7z020-clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./msc_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
