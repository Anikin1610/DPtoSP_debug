// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VrecFNToRecFN__Syms.h"


void VrecFNToRecFN::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VrecFNToRecFN__Syms* __restrict vlSymsp = static_cast<VrecFNToRecFN__Syms*>(userp);
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VrecFNToRecFN::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VrecFNToRecFN__Syms* __restrict vlSymsp = static_cast<VrecFNToRecFN__Syms*>(userp);
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    VlWide<17>/*543:0*/ __Vtemp56;
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->recFNToRecFN__DOT__isInf));
            tracep->chgQData(oldp+1,(vlTOPp->recFNToRecFN__DOT__sigIn),54);
            tracep->chgBit(oldp+3,(vlTOPp->recFNToRecFN__DOT__isSigNaN));
            tracep->chgBit(oldp+4,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
            tracep->chgBit(oldp+5,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut));
            tracep->chgIData(oldp+6,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig),27);
            tracep->chgSData(oldp+7,((0x1ffU & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))),9);
            tracep->chgIData(oldp+8,((0x7fffffU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)),23);
            tracep->chgBit(oldp+9,(VL_LTES_III(1,32,32, 3U, 
                                               VL_SHIFTRS_III(32,32,32, 
                                                              VL_EXTENDS_II(32,15, (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U))));
            tracep->chgBit(oldp+10,((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))));
            tracep->chgBit(oldp+11,(((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
                                     | (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound))));
            tracep->chgBit(oldp+12,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase));
            tracep->chgBit(oldp+13,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow));
            tracep->chgBit(oldp+14,(((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
                                     | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
                                        & ((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
                                           | (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound))))));
            tracep->chgBit(oldp+15,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp));
            tracep->chgBit(oldp+16,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut));
            tracep->chgBit(oldp+17,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut));
            tracep->chgBit(oldp+18,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut));
            tracep->chgIData(oldp+19,((3U | (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                             << 2U))),27);
            tracep->chgIData(oldp+20,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main),25);
            tracep->chgIData(oldp+21,((0x7ffffffU & 
                                       (1U | (0x7ffffffeU 
                                              & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                 << 1U))))),27);
            tracep->chgIData(oldp+22,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask),27);
            tracep->chgBit(oldp+23,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit));
            tracep->chgBit(oldp+24,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
            tracep->chgBit(oldp+25,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound));
            tracep->chgIData(oldp+26,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig),26);
            tracep->chgSData(oldp+27,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp),15);
            tracep->chgBit(oldp+28,((1U & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                           >> 1U))));
            tracep->chgBit(oldp+29,((0U != (3U & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig))));
            tracep->chgBit(oldp+30,((1U & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                           >> 0x18U))));
        }
        tracep->chgBit(oldp+31,(vlTOPp->control));
        tracep->chgWData(oldp+32,(vlTOPp->in),65);
        tracep->chgCData(oldp+35,(vlTOPp->roundingMode),3);
        tracep->chgQData(oldp+36,(vlTOPp->out),33);
        tracep->chgCData(oldp+38,(vlTOPp->exceptionFlags),5);
        tracep->chgBit(oldp+39,(((3U == (3U & ((0x3ffffcU 
                                                & (vlTOPp->in[2U] 
                                                   << 2U)) 
                                               | (vlTOPp->in[1U] 
                                                  >> 0x1eU)))) 
                                 & (vlTOPp->in[1U] 
                                    >> 0x1dU))));
        tracep->chgBit(oldp+40,((0U == (7U & ((0x7ffff8U 
                                               & (vlTOPp->in[2U] 
                                                  << 3U)) 
                                              | (vlTOPp->in[1U] 
                                                 >> 0x1dU))))));
        tracep->chgBit(oldp+41,((1U & vlTOPp->in[2U])));
        tracep->chgSData(oldp+42,((0xfffU & ((vlTOPp->in[2U] 
                                              << 0xcU) 
                                             | (vlTOPp->in[1U] 
                                                >> 0x14U)))),13);
        tracep->chgSData(oldp+43,((0xfffU & ((vlTOPp->in[2U] 
                                              << 0xcU) 
                                             | (vlTOPp->in[1U] 
                                                >> 0x14U)))),12);
        tracep->chgQData(oldp+44,((0xfffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlTOPp->in[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->in[0U]))))),52);
        tracep->chgBit(oldp+46,((3U == (3U & ((0x3ffffcU 
                                               & (vlTOPp->in[2U] 
                                                  << 2U)) 
                                              | (vlTOPp->in[1U] 
                                                 >> 0x1eU))))));
        tracep->chgBit(oldp+47,((7U == (7U & ((vlTOPp->in[2U] 
                                               << 3U) 
                                              | (vlTOPp->in[1U] 
                                                 >> 0x1dU))))));
        tracep->chgBit(oldp+48,((0U == (IData)(vlTOPp->roundingMode))));
        tracep->chgBit(oldp+49,((1U == (IData)(vlTOPp->roundingMode))));
        tracep->chgBit(oldp+50,((2U == (IData)(vlTOPp->roundingMode))));
        tracep->chgBit(oldp+51,((3U == (IData)(vlTOPp->roundingMode))));
        tracep->chgBit(oldp+52,((4U == (IData)(vlTOPp->roundingMode))));
        tracep->chgBit(oldp+53,((6U == (IData)(vlTOPp->roundingMode))));
        tracep->chgSData(oldp+54,((0x3fffU & ((IData)(0x3900U) 
                                              + VL_EXTENDS_II(14,13, 
                                                              (0xfffU 
                                                               & ((vlTOPp->in[2U] 
                                                                   << 0xcU) 
                                                                  | (vlTOPp->in[1U] 
                                                                     >> 0x14U))))))),14);
        tracep->chgBit(oldp+55,(((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
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
                                    & (~ (((((0U != 
                                              (1U & (IData)(vlTOPp->control))) 
                                             & (~ (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
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
                                                    & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig))))))))));
        tracep->chgBit(oldp+56,(((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
                                 & ((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
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
                                       & (~ (((((0U 
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
                                                       & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig)))))))))));
        tracep->chgBit(oldp+57,(((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                  ? 0U : (1U & vlTOPp->in[2U]))));
        tracep->chgSData(oldp+58,((0x1ffU & (((((((
                                                   ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
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
                                                 : 0U)))),9);
        tracep->chgIData(oldp+59,((0x7fffffU & (((((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
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
                                                | (- (IData)((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))),23);
        tracep->chgBit(oldp+60,(((((0U == (IData)(vlTOPp->roundingMode)) 
                                   | (4U == (IData)(vlTOPp->roundingMode))) 
                                  & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                                 | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                                    & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))));
        tracep->chgSData(oldp+61,((0x7fffU & VL_EXTENDS_II(15,14, 
                                                           (0x3fffU 
                                                            & ((IData)(0x3900U) 
                                                               + 
                                                               VL_EXTENDS_II(14,13, 
                                                                             (0xfffU 
                                                                              & ((vlTOPp->in[2U] 
                                                                                << 0xcU) 
                                                                                | (vlTOPp->in[1U] 
                                                                                >> 0x14U))))))))),15);
        tracep->chgBit(oldp+62,(((((0U == (IData)(vlTOPp->roundingMode)) 
                                   | (4U == (IData)(vlTOPp->roundingMode))) 
                                  & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                     >> 1U)) | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                & (0U 
                                                   != 
                                                   (3U 
                                                    & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig))))));
        tracep->chgSData(oldp+63,((0x1ffU & ((IData)(0x100U) 
                                             + VL_EXTENDS_II(9,13, 
                                                             (0xfffU 
                                                              & ((vlTOPp->in[2U] 
                                                                  << 0xcU) 
                                                                 | (vlTOPp->in[1U] 
                                                                    >> 0x14U))))))),9);
        VL_SHIFTRS_WWI(513,513,9, __Vtemp56, __Vconst2, 
                       (0x1ffU & (~ ((IData)(0x100U) 
                                     + VL_EXTENDS_II(9,13, 
                                                     (0xfffU 
                                                      & ((vlTOPp->in[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->in[1U] 
                                                            >> 0x14U))))))));
        tracep->chgIData(oldp+64,((0x1ffffffU & (((
                                                   __Vconst1[4U] 
                                                   & __Vtemp56[4U]) 
                                                  << 0x16U) 
                                                 | ((__Vconst1[3U] 
                                                     & __Vtemp56[3U]) 
                                                    >> 0xaU)))),25);
    }
}

void VrecFNToRecFN::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VrecFNToRecFN__Syms* __restrict vlSymsp = static_cast<VrecFNToRecFN__Syms*>(userp);
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
