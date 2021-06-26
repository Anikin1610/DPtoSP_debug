package recTorec_bsv;

    interface Ifc_recTorec#(numeric type expWidthIn, numeric type sigWidthIn, numeric type expWidthOut, numeric type sigWidthOut);
            (*always_ready*)
            method Bit#(TAdd#(TAdd#(expWidthOut, 1), sigWidthOut)) oout ();
            method Bit#(5) oexceptionFlags ();
            (*always_ready*)(*always_enabled*)
            method Action request (Bit#(1) control, Bit#(3) roundingmode, Bit#(TAdd#(TAdd#(expWidthIn, 1), sigWidthIn)) in);
    endinterface

    import "BVI" recFNToRecFN = module mk_recTorec (Ifc_recTorec#(expWidthIn, sigWidthIn, expWidthOut, sigWidthOut));
        parameter inExpWidth = valueOf(expWidthIn);
        parameter inSigWidth = valueOf(sigWidthIn);
        parameter outExpWidth = valueOf(expWidthOut);
        parameter outSigWidth = valueOf(sigWidthOut);

        default_clock clk();
        default_reset rst();

        method out oout();
        method exceptionFlags oexceptionFlags();
        method request (control, roundingMode, in) enable((*inhigh*)en) clocked_by(clk);

        schedule oout CF oout;
        schedule oout CF oexceptionFlags;
        schedule oout CF request;
        schedule oexceptionFlags CF oexceptionFlags;
        schedule oexceptionFlags CF request;
        schedule request C request;

    endmodule
endpackage
