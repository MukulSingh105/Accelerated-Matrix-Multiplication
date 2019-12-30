############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project matrix_mult
set_top matrixmul
add_files matrix_mult/matrixmul.cpp
add_files matrix_mult/matrixmul.h
add_files -tb matrix_mult/matrixmul_test.cpp
open_solution "solution1"
set_part {xc7a35tcpg236-1}
create_clock -period 10 -name default
#source "./matrix_mult/solution1/directives.tcl"
csim_design -ldflags {-DHW_COSIM}
csynth_design
cosim_design -ldflags {-DHW_COSIM}
export_design -format ip_catalog
