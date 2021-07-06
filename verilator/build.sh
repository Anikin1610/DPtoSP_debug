#!/bin/bash
INCLUDE_DIRS=-I../hardFloat_modules
VERILATOR_FLAGS='-Wall --trace -GinExpWidth=11 -GinSigWidth=53 -GoutExpWidth=8 -GoutSigWidth=24'

if [ $# -ge 2 ]; then
    verilator -GinExpWidth=11 -GinSigWidth=53 -GoutExpWidth=8 -GoutSigWidth=24 $INCLUDE_DIRS --cc $1 --top-module $2 --exe main.cpp
    verilator $VERILATOR_FLAGS $INCLUDE_DIRS --cc $1 --top-module $2 --exe main.cpp
    make -C obj_dir -f V$2.mk V$2
    ./obj_dir/V$2
fi
