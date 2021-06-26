BSC_COMP_FLAGS = -elab -keep-fires -no-warn-action-shadowing
BSC_LINK_FLAGS = -keep-fires
BSC_PATHS = -p .:%/Libraries:../hardFloat_modules:./src

.PHONY: default
default: v_compile v_link v_simulate

BSIM_DIRS = -simdir build_bsim -bdir build_bsim -info-dir build_bsim

# ----------------------------------------------------------------
# Verilog compile/link/sim

V_DIRS = -vdir verilog -bdir build_v -info-dir build_v -vsearch ../hardFloat_modules

.PHONY: v_compile
v_compile:
	if (test -d "./build_v"); then echo "Build Directory exists"; else mkdir build_v; fi
	if (test -d "./verilog"); then echo "Build Directory exists"; else mkdir verilog; fi
	@echo Compiling for Verilog ...
	bsc -u -verilog $(V_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g tb_rectorec  tb_rectorec.bsv
	@echo Compiling for Verilog finished

.PHONY: v_link
v_link:
	@echo Linking for Verilog sim ...
	bsc -e tb_rectorec -verilog -o ./out_v $(V_DIRS) -vsim iverilog
	@echo Linking for Verilog sim finished

.PHONY: v_simulate
v_simulate:
	@echo Verilog simulation...
	./out_v +bscvcd
	@echo Verilog simulation finished

# ----------------------------------------------------------------

.PHONY: clean
clean:
	rm -f  ./*~  src/*~  build_bsim/*  build_v/*

.PHONY: full_clean
full_clean:
	rm -f  ./*~  src/*~  build_bsim/*  build_v/*
	rm -f  out  out.so  out_v  verilog/*
