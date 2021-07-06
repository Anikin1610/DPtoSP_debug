// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecFNToRecFN.h for the primary calling header

#include "VrecFNToRecFN.h"
#include "VrecFNToRecFN__Syms.h"

//==========
VlWide<17>/*543:0*/ VrecFNToRecFN::__Vconst1;
VlWide<17>/*543:0*/ VrecFNToRecFN::__Vconst2;
VlWide<17>/*543:0*/ VrecFNToRecFN::__Vconst55;

VrecFNToRecFN::VrecFNToRecFN(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VrecFNToRecFN__Syms* __restrict vlSymsp = __VlSymsp = new VrecFNToRecFN__Syms(_vcontextp__, this, name());
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void VrecFNToRecFN::__Vconfigure(VrecFNToRecFN__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VrecFNToRecFN::~VrecFNToRecFN() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VrecFNToRecFN::_eval_initial(VrecFNToRecFN__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::_eval_initial\n"); );
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecFNToRecFN::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::final\n"); );
    // Variables
    VrecFNToRecFN__Syms* __restrict vlSymsp = this->__VlSymsp;
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VrecFNToRecFN::_eval_settle(VrecFNToRecFN__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::_eval_settle\n"); );
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VrecFNToRecFN::_ctor_var_reset(VrecFNToRecFN* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->control = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, self->in);
    self->roundingMode = VL_RAND_RESET_I(3);
    self->out = VL_RAND_RESET_Q(33);
    self->exceptionFlags = VL_RAND_RESET_I(5);
    self->recFNToRecFN__DOT__isInf = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__sigIn = VL_RAND_RESET_Q(54);
    self->recFNToRecFN__DOT__isSigNaN = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig = VL_RAND_RESET_I(27);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = VL_RAND_RESET_I(25);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask = VL_RAND_RESET_I(27);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound = VL_RAND_RESET_I(1);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig = VL_RAND_RESET_I(26);
    self->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp = VL_RAND_RESET_I(15);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        self->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
    self->__Vconst1[0] = 4294967295U;
    self->__Vconst1[1] = 4294967295U;
    self->__Vconst1[2] = 4294967295U;
    self->__Vconst1[3] = 4294967295U;
    self->__Vconst1[4] = 4294967295U;
    self->__Vconst1[5] = 4294967295U;
    self->__Vconst1[6] = 4294967295U;
    self->__Vconst1[7] = 4294967295U;
    self->__Vconst1[8] = 4294967295U;
    self->__Vconst1[9] = 4294967295U;
    self->__Vconst1[10] = 4294967295U;
    self->__Vconst1[11] = 4294967295U;
    self->__Vconst1[12] = 4294967295U;
    self->__Vconst1[13] = 4294967295U;
    self->__Vconst1[14] = 4294967295U;
    self->__Vconst1[15] = 4294967295U;
    self->__Vconst1[16] = 1U;
    self->__Vconst2[0] = 0U;
    self->__Vconst2[1] = 0U;
    self->__Vconst2[2] = 0U;
    self->__Vconst2[3] = 0U;
    self->__Vconst2[4] = 0U;
    self->__Vconst2[5] = 0U;
    self->__Vconst2[6] = 0U;
    self->__Vconst2[7] = 0U;
    self->__Vconst2[8] = 0U;
    self->__Vconst2[9] = 0U;
    self->__Vconst2[10] = 0U;
    self->__Vconst2[11] = 0U;
    self->__Vconst2[12] = 0U;
    self->__Vconst2[13] = 0U;
    self->__Vconst2[14] = 0U;
    self->__Vconst2[15] = 0U;
    self->__Vconst2[16] = 1U;
    self->__Vconst55[0] = 0U;
    self->__Vconst55[1] = 0U;
    self->__Vconst55[2] = 0U;
    self->__Vconst55[3] = 0U;
    self->__Vconst55[4] = 0U;
    self->__Vconst55[5] = 0U;
    self->__Vconst55[6] = 0U;
    self->__Vconst55[7] = 0U;
    self->__Vconst55[8] = 0U;
    self->__Vconst55[9] = 0U;
    self->__Vconst55[10] = 0U;
    self->__Vconst55[11] = 0U;
    self->__Vconst55[12] = 0U;
    self->__Vconst55[13] = 0U;
    self->__Vconst55[14] = 0U;
    self->__Vconst55[15] = 0U;
    self->__Vconst55[16] = 1U;
}
