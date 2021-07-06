#include <verilated.h>
#include <verilated_vcd_c.h>
#include <VrecFNToRecFN.h>
#include <iostream>

vluint64_t sim_time = 0; 

double sc_time_stamp () {    // Called by $time in Verilog     
    return sim_time; 
}

int main(int argc, char** argv, char** env){
    if (0 && argc && argv && env) {}

    Verilated::commandArgs (argc, argv);

    VrecFNToRecFN *dut = new VrecFNToRecFN;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while (sim_time < 20)
    {
        dut->control = 1;
        //dut->in = 0x05897D9AAD93441A8;
        dut->in[0] = 0xD93441A8;
        dut->in[1] = 0x5897D9AA;
        dut->in[2] = 0x0;
        dut->roundingMode = 0;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }
    std::cout << dut->out;
    m_trace->close();
    delete dut;
    exit(0);

}