// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRECFNTORECFN_H_
#define VERILATED_VRECFNTORECFN_H_  // guard

#include "verilated_heavy.h"

//==========

class VrecFNToRecFN__Syms;
class VrecFNToRecFN_VerilatedVcd;


//----------

VL_MODULE(VrecFNToRecFN) {
  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    VL_INW(in,64,0,3);
    VL_OUT64(out,32,0);

    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ recFNToRecFN__DOT__isInf;
    CData/*0:0*/ recFNToRecFN__DOT__isSigNaN;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra;
    CData/*0:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound;
    SData/*14:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp;
    IData/*26:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig;
    IData/*24:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    IData/*26:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask;
    IData/*25:0*/ recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig;
    QData/*53:0*/ recFNToRecFN__DOT__sigIn;

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    static VlWide<17>/*543:0*/ __Vconst1;
    static VlWide<17>/*543:0*/ __Vconst2;
    static VlWide<17>/*543:0*/ __Vconst55;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VrecFNToRecFN__Syms* __VlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VrecFNToRecFN);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VrecFNToRecFN(VerilatedContext* contextp, const char* name = "TOP");
    VrecFNToRecFN(const char* name = "TOP")
      : VrecFNToRecFN(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~VrecFNToRecFN();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);

    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();

    // INTERNAL METHODS
    static void _eval_initial_loop(VrecFNToRecFN__Syms* __restrict vlSymsp);
    void __Vconfigure(VrecFNToRecFN__Syms* symsp, bool first);
  private:
    static QData _change_request(VrecFNToRecFN__Syms* __restrict vlSymsp);
    static QData _change_request_1(VrecFNToRecFN__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VrecFNToRecFN__Syms* __restrict vlSymsp);
  private:
    static void _ctor_var_reset(VrecFNToRecFN* self) VL_ATTR_COLD;
  public:
    static void _eval(VrecFNToRecFN__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VrecFNToRecFN__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VrecFNToRecFN__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
