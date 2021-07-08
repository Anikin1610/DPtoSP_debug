INCLUDE_DIRS = -I../hardFloat_modules
VERILATOR_FLAGS = -Wall -Wno-fatal --trace -GinExpWidth=32\'sd11 -GinSigWidth=32\'sd53 -GoutExpWidth=32\'sd8 -GoutSigWidth=32\'sd24

BSC_COMP_FLAGS = -elab -keep-fires -aggressive-conditions -no-warn-action-shadowing
BSC_LINK_FLAGS = -keep-fires
BSC_PATHS = -p .:%/Libraries:./src:../hardFloat_modules
V_DIRS = -vdir verilog -bdir build_v -info-dir build_v -vsearch ../hardFloat_modules

TOP_FILE = recFNToRecFN.v
TOP_MODULE = recFNToRecFN

default: run-verilator run-iverilog run-bluespec

run-verilator:
	@echo Running Verilator Simulation
	cd verilator && verilator $(VERILATOR_FLAGS) $(INCLUDE_DIRS) --cc $(TOP_FILE) --top-module $(TOP_MODULE) --exe main.cpp
	cd verilator && make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
	./verilator/obj_dir/V$(TOP_MODULE)
	
run-iverilog:
	@echo Running Verilog Simulation
	cd verilog && iverilog -o tb_dp2sp -I ../hardFloat_modules -c iverilog_include_list.txt tb_rectorec.v
	vvp ./verilog/tb_dp2sp
	
run-bluespec:
	@echo Running Bluespec Simulation
	if (test -d "./build_v"); then echo "Build Directory exists"; else mkdir build_v; fi	
	if (test -d "./verilog"); then echo "Build Directory exists"; else mkdir verilog; fi	
	@echo Compiling for Bluesim ...
	cd bluespec && bsc -u -verilog $(V_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g tb_rectorec  tb_rectorec.bsv 
	@echo Compiling for Bluesim finished
	
	@echo Linking for Bluesim ...
	cd bluespec && bsc -e tb_rectorec -verilog -o ./out_v $(V_DIRS) -vsim iverilog
	@echo Linking for Bluesim finished
	
	@echo Bluesim simulation ...
	cd bluespec && ./out_v +bscvcd
	@echo Bluesim simulation finished
	
.PHONY:clean
clean:
	rm iverilog_waveform.vcd verilator_waveform.vcd
	cd verilator && rm -rf obj_dir
	cd bluespec && rm -f build_v/* verilog/*


