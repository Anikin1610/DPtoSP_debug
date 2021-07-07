`include "recFNToRecFN.v"

module tb_dp2sp ();

    reg control;
    reg [64:0] in;
    reg [2:0] roundingMode;
    wire [32:0] out;
    wire [4:0] Flags;

    recFNToRecFN#(11, 53, 8, 24) dut (control, in , roundingMode, out, Flags);

    initial begin
        $dumpfile("iverilog_waveform.vcd");
        $dumpvars;
    end
    
    initial begin
        in <= 65'h05897D9AAD93441A8;
        control <= 1'b1;
        roundingMode <= 3'b0;
        #10 $finish;
    end
endmodule