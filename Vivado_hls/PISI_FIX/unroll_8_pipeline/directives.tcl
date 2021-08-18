############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_interface -mode s_axilite "estimate_ISI_encode" inputs
set_directive_interface -mode s_axilite "estimate_ISI_encode" rem
set_directive_interface -mode s_axilite "estimate_ISI_encode" output
set_directive_interface -mode s_axilite "estimate_ISI_encode"
set_directive_pipeline "estimate_ISI_encode/Pack_output"
set_directive_unroll -factor 12 "estimate_ISI_encode/Pack_output"
set_directive_pipeline "estimate_ISI_encode/estimate_ISI"
set_directive_unroll -factor 8 "estimate_ISI_encode/estimate_ISI"
set_directive_array_partition -type cyclic -factor 8 -dim 1 "estimate_ISI_encode" inputs
set_directive_array_partition -type cyclic -factor 8 -dim 1 "estimate_ISI_encode" rem
set_directive_array_partition -type cyclic -factor 8 -dim 1 "estimate_ISI_encode" output
set_directive_array_partition -type cyclic -factor 8 -dim 1 "estimate_ISI_encode" ISIquan
