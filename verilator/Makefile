INCLUDE_DIRS = -I../hardFloat_modules
VERILATOR_FLAGS = -Wall --trace -GinExpWidth=11 -GinSigWidth=53 -GoutExpWidth=8 -GoutSigWidth=24

#-pvalue+inExpWidth=11 -pvalue+inSigWidth=53 -pvalue+outExpWidth=8 -pvalue+outSigWidth=24

default: verilate compile simulate

verilate:
	@echo Verilating verilog files
	verilator $(VERILATOR_FLAGS) $(INCLUDE_DIRS) --cc $(TOP_FILE) --top-module $(TOP_MODULE) --exe main.cpp

compile:
	@echo Building Executable
	make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)

simulate:
	@echo Starting simulation
	./obj_dir/V$(TOP_MODULE)


