import recTorec_bsv :: *;

(*synthesize*)
module mkRecToRec_instance(Ifc_recTorec#(11, 53, 8, 24));
  let ifc();
  mk_recTorec recTorec(ifc);
  return (ifc);
endmodule


module tb_rectorec(Empty);
    let dut <- mkRecToRec_instance;
    Bit#(65) a = 65'h05897D9AAD93441A8;
    Bit#(65) zero = 65'd0;
    Bit#(3) rm = 3'b000;
    Reg#(Int#(32)) state <- mkReg(0);

    rule inputs (state == 0);
          dut.request(1'b1, rm, a);
          $display($time, " Input = %b", a);
          state <= state + 1;
    endrule

    rule disp_out (state == 1);
        $display($time, " Result_Bluespec = %h", dut.oout);
        $display($time, " Flags = %b", dut.oexceptionFlags);
        $finish;
    endrule
endmodule
