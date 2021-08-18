############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_interface -mode s_axilite "estimate_FR"
set_directive_interface -mode s_axilite "estimate_FR" inputs
set_directive_interface -mode s_axilite "estimate_FR" counts
set_directive_interface -mode s_axilite "estimate_FR" outputs
set_directive_array_partition -type cyclic -factor 2 -dim 1 "estimate_FR" inputs
set_directive_array_partition -type cyclic -factor 2 -dim 1 "estimate_FR" counts
set_directive_array_partition -type cyclic -factor 2 -dim 1 "estimate_FR" outputs
set_directive_unroll -factor 2 "estimate_FR/Unpack_count"
set_directive_pipeline "estimate_FR/Unpack_count"
set_directive_pipeline "estimate_FR/FR_estimation"
set_directive_unroll -factor 2 "estimate_FR/FR_estimation"
set_directive_unroll -factor 2 "estimate_FR/Pack_outputs"
set_directive_pipeline "estimate_FR/Pack_outputs"
set_directive_interface -mode s_axilite "estimate_FR_2" inputs
set_directive_interface -mode s_axilite "estimate_FR_2" inputs
set_directive_interface -mode s_axilite "estimate_FR_2" counts
set_directive_interface -mode s_axilite "estimate_FR_2" outputs
set_directive_array_partition -type cyclic -factor 12 -dim 1 "estimate_FR_2" inputs
set_directive_array_partition -type cyclic -factor 12 -dim 1 "estimate_FR_2" counts
set_directive_array_partition -type cyclic -factor 12 -dim 1 "estimate_FR_2" outputs
set_directive_interface -mode s_axilite "estimate_FR_2"
set_directive_unroll -factor 12 "estimate_FR_2/Unpack_count"
set_directive_pipeline "estimate_FR_2/Unpack_count"
set_directive_unroll -factor 12 "estimate_FR_2/FR_estimation"
set_directive_pipeline "estimate_FR_2/FR_estimation"
set_directive_pipeline "estimate_FR_2/Pack_outputs"
set_directive_pipeline "estimate_FR_2/Pack_outputs"
set_directive_unroll -factor 12 "estimate_FR_2/Pack_outputs"
set_directive_array_partition -type cyclic -factor 12 -dim 1 "estimate_FR_2" cnt
set_directive_array_partition -type cyclic -factor 12 -dim 1 "estimate_FR_2" FR
