// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrecFNToRecFN.h for the primary calling header

#include "VrecFNToRecFN.h"
#include "VrecFNToRecFN__Syms.h"

//==========

VerilatedContext* VrecFNToRecFN::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VrecFNToRecFN::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VrecFNToRecFN::eval\n"); );
    VrecFNToRecFN__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../hardFloat_modules/recFNToRecFN.v", 44, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VrecFNToRecFN::_eval_initial_loop(VrecFNToRecFN__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../hardFloat_modules/recFNToRecFN.v", 44, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VrecFNToRecFN::_combo__TOP__1(VrecFNToRecFN__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::_combo__TOP__1\n"); );
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<17>/*543:0*/ __Vtemp3;
    VlWide<17>/*543:0*/ __Vtemp5;
    VlWide<17>/*543:0*/ __Vtemp7;
    VlWide<17>/*543:0*/ __Vtemp9;
    VlWide<17>/*543:0*/ __Vtemp11;
    VlWide<17>/*543:0*/ __Vtemp13;
    VlWide<17>/*543:0*/ __Vtemp15;
    VlWide<17>/*543:0*/ __Vtemp17;
    VlWide<17>/*543:0*/ __Vtemp19;
    VlWide<17>/*543:0*/ __Vtemp21;
    VlWide<17>/*543:0*/ __Vtemp23;
    VlWide<17>/*543:0*/ __Vtemp25;
    VlWide<17>/*543:0*/ __Vtemp27;
    VlWide<17>/*543:0*/ __Vtemp29;
    VlWide<17>/*543:0*/ __Vtemp31;
    VlWide<17>/*543:0*/ __Vtemp33;
    VlWide<17>/*543:0*/ __Vtemp35;
    VlWide<17>/*543:0*/ __Vtemp37;
    VlWide<17>/*543:0*/ __Vtemp39;
    VlWide<17>/*543:0*/ __Vtemp41;
    VlWide<17>/*543:0*/ __Vtemp43;
    VlWide<17>/*543:0*/ __Vtemp45;
    VlWide<17>/*543:0*/ __Vtemp47;
    VlWide<17>/*543:0*/ __Vtemp49;
    VlWide<17>/*543:0*/ __Vtemp51;
    // Body
    vlTOPp->recFNToRecFN__DOT__isInf = ((3U == (3U 
                                                & ((0x3ffffcU 
                                                    & (vlTOPp->in[2U] 
                                                       << 2U)) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x1eU)))) 
                                        & (~ (vlTOPp->in[1U] 
                                              >> 0x1dU)));
    vlTOPp->recFNToRecFN__DOT__isSigNaN = ((7U == (7U 
                                                   & ((vlTOPp->in[2U] 
                                                       << 3U) 
                                                      | (vlTOPp->in[1U] 
                                                         >> 0x1dU)))) 
                                           & (~ (vlTOPp->in[1U] 
                                                 >> 0x13U)));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = (((2U == (IData)(vlTOPp->roundingMode)) & 
            vlTOPp->in[2U]) | ((3U == (IData)(vlTOPp->roundingMode)) 
                               & (~ vlTOPp->in[2U])));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp3, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp5, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp7, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((__Vconst1[4U] & __Vtemp3[4U]) 
                     << 2U)) | ((2U & (__Vconst1[4U] 
                                       & __Vtemp5[4U])) 
                                | (1U & ((__Vconst1[4U] 
                                          & __Vtemp7[4U]) 
                                         >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp9, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp11, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp13, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((__Vconst1[3U] & __Vtemp9[3U]) 
                        >> 0x18U)) | ((0x10U & ((__Vconst1[3U] 
                                                 & __Vtemp11[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((__Vconst1[3U] 
                                                & __Vtemp13[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp15, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp17, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp19, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((__Vconst1[3U] & __Vtemp15[3U]) 
                         >> 0x12U)) | ((0x80U & ((__Vconst1[3U] 
                                                  & __Vtemp17[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (__Vconst1[3U] 
                                                    & __Vtemp19[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp21, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp23, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp25, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((__Vconst1[3U] & __Vtemp21[3U]) 
                         >> 0xcU)) | ((0x400U & ((__Vconst1[3U] 
                                                  & __Vtemp23[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (__Vconst1[3U] 
                                                    & __Vtemp25[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp27, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp29, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp31, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((__Vconst1[3U] & __Vtemp27[3U]) 
                          >> 6U)) | ((0x2000U & ((__Vconst1[3U] 
                                                  & __Vtemp29[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (__Vconst1[3U] 
                                                    & __Vtemp31[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp33, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp35, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp37, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (__Vconst1[3U] & __Vtemp33[3U])) 
              | ((0x10000U & ((__Vconst1[3U] & __Vtemp35[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((__Vconst1[3U] 
                                           & __Vtemp37[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp39, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp41, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp43, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((__Vconst1[3U] & __Vtemp39[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((__Vconst1[3U] 
                                          & __Vtemp41[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((__Vconst1[3U] 
                                          & __Vtemp43[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp45, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp47, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp49, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((__Vconst1[3U] & __Vtemp45[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((__Vconst1[3U] 
                                              & __Vtemp47[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((__Vconst1[3U] 
                                                & __Vtemp49[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp51, __Vconst2, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlTOPp->in[2U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->in[1U] 
                                                      >> 0x14U))))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((__Vconst1[3U] & __Vtemp51[3U]) 
                            << 0xeU)));
    vlTOPp->recFNToRecFN__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & ((0x7ffff8U 
                                                               & (vlTOPp->in[2U] 
                                                                  << 3U)) 
                                                              | (vlTOPp->in[1U] 
                                                                 >> 0x1dU)))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlTOPp->in[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlTOPp->in[0U])))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlTOPp->recFNToRecFN__DOT__isSigNaN) 
           | ((3U == (3U & ((0x3ffffcU & (vlTOPp->in[2U] 
                                          << 2U)) | 
                            (vlTOPp->in[1U] >> 0x1eU)))) 
              & (vlTOPp->in[1U] >> 0x1dU)));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (IData)(vlTOPp->roundingMode)) | 
            (4U == (IData)(vlTOPp->roundingMode))) 
           | (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlTOPp->recFNToRecFN__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlTOPp->recFNToRecFN__DOT__sigIn))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlTOPp->recFNToRecFN__DOT__isInf))) 
           & (0U != (7U & ((0x7ffff8U & (vlTOPp->in[2U] 
                                         << 3U)) | 
                           (vlTOPp->in[1U] >> 0x1dU)))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (IData)(vlTOPp->roundingMode)) 
                            | (4U == (IData)(vlTOPp->roundingMode))) 
                           & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ ((((0U == (IData)(vlTOPp->roundingMode)) 
                                     & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                                    & (~ (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | (((6U 
                                                    == (IData)(vlTOPp->roundingMode)) 
                                                   & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound))
                                                   ? 
                                                  (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & ((vlTOPp->in[2U] 
                                                                    << 0xcU) 
                                                                   | (vlTOPp->in[1U] 
                                                                      >> 0x14U))))))) 
                      + (0x3ffffffU & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & (0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))) 
           & ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (IData)(vlTOPp->roundingMode))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(1,32,32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                     VL_EXTENDS_II(32,15, (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlTOPp->exceptionFlags = (((IData)(vlTOPp->recFNToRecFN__DOT__isSigNaN) 
                               << 4U) | (((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
                                          << 2U) | 
                                         ((((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
                                            & ((0x6bU 
                                                > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
                                               | ((((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound) 
                                                    & VL_GTES_III(1,32,32, 0U, 
                                                                  VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,14, 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x3900U) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                (0xfffU 
                                                                                & ((vlTOPp->in[2U] 
                                                                                << 0xcU) 
                                                                                | (vlTOPp->in[1U] 
                                                                                >> 0x14U))))))), 8U))) 
                                                   & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
                                                  & (~ 
                                                     (((((0U 
                                                          != 
                                                          (1U 
                                                           & (IData)(vlTOPp->control))) 
                                                         & (~ 
                                                            (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                             >> 1U))) 
                                                        & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                                           >> 0x18U)) 
                                                       & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                                                      & ((((0U 
                                                            == (IData)(vlTOPp->roundingMode)) 
                                                           | (4U 
                                                              == (IData)(vlTOPp->roundingMode))) 
                                                          & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                             >> 1U)) 
                                                         | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                            & (0U 
                                                               != 
                                                               (3U 
                                                                & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig))))))))) 
                                           << 1U) | 
                                          ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
                                           | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
                                              & ((0x6bU 
                                                  > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
                                                 | (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))))));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlTOPp->recFNToRecFN__DOT__isInf) 
           | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlTOPp->out = (((QData)((IData)(((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                      ? 0U : (1U & 
                                              vlTOPp->in[2U])))) 
                    << 0x20U) | (QData)((IData)(((0xff800000U 
                                                  & ((((((((((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                             & (~ 
                                                                (((0U 
                                                                   == 
                                                                   (7U 
                                                                    & ((0x7ffff8U 
                                                                        & (vlTOPp->in[2U] 
                                                                           << 3U)) 
                                                                       | (vlTOPp->in[1U] 
                                                                          >> 0x1dU)))) 
                                                                  | (0x6bU 
                                                                     > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (~ 
                                                               ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                 ? 0xffffff94U
                                                                 : 0U))) 
                                                           & (~ 
                                                              ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                ? 0x80U
                                                                : 0U))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                               ? 0x40U
                                                               : 0U))) 
                                                         | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                             ? 0x6bU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                            ? 0x17fU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                           ? 0x180U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U)) 
                                                     << 0x17U)) 
                                                 | (0x7fffffU 
                                                    & (((((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                           ? 0x400000U
                                                           : 0U) 
                                                         | (((0U 
                                                              != 
                                                              (7U 
                                                               & ((0x7ffff8U 
                                                                   & (vlTOPp->in[2U] 
                                                                      << 3U)) 
                                                                  | (vlTOPp->in[1U] 
                                                                     >> 0x1dU)))) 
                                                             & (0x6bU 
                                                                <= (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))
                                                             ? 
                                                            (0x400000U 
                                                             & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                             : 0U)) 
                                                        | ((((~ (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                             & (0U 
                                                                != 
                                                                (7U 
                                                                 & ((0x7ffff8U 
                                                                     & (vlTOPp->in[2U] 
                                                                        << 3U)) 
                                                                    | (vlTOPp->in[1U] 
                                                                       >> 0x1dU))))) 
                                                            & (0x6bU 
                                                               <= (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                            : 0U)) 
                                                       | (- (IData)((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
}

void VrecFNToRecFN::_eval(VrecFNToRecFN__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::_eval\n"); );
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData VrecFNToRecFN::_change_request(VrecFNToRecFN__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::_change_request\n"); );
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VrecFNToRecFN::_change_request_1(VrecFNToRecFN__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::_change_request_1\n"); );
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VrecFNToRecFN::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrecFNToRecFN::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((control & 0xfeU))) {
        Verilated::overWidthError("control");}
    if (VL_UNLIKELY((in[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((roundingMode & 0xf8U))) {
        Verilated::overWidthError("roundingMode");}
}
#endif  // VL_DEBUG
