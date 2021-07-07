INCLUDE_DIRS = -I../hardFloat_modules
VERILATOR_FLAGS = -Wall -Wno-fatal --trace -GinExpWidth=11 -GinSigWidth=53 -GoutExpWidth=8 -GoutSigWidth=24
TOP_FILE = recFNToRecFN.v
TOP_MODULE = recFNToRecFN

default: run-verilator run-iverilog

run-verilator:
	@echo Running Verilator Simulation
	cd verilator && verilator $(VERILATOR_FLAGS) $(INCLUDE_DIRS) --cc $(TOP_FILE) --top-module $(TOP_MODULE) --exe main.cpp
	cd verilator && make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)
	./verilator/obj_dir/V$(TOP_MODULE)
	
run-iverilog:
	@echo Running Verilog Simulation
	cd verilog && iverilog -o tb_dp2sp -I ../hardFloat_modules -c iverilog_include_list.txt tb_rectorec.v
	vvp ./verilog/tb_dp2sp
	
.PHONY:clean
clean:
	rm iverilog_waveform.vcd verilator_waveform.vcd
	cd verilator && rm -rf obj_dir


