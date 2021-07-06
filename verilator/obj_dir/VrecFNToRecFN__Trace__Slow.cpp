// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VrecFNToRecFN__Syms.h"


//======================

void VrecFNToRecFN::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VrecFNToRecFN::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VrecFNToRecFN__Syms* __restrict vlSymsp = static_cast<VrecFNToRecFN__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VrecFNToRecFN::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VrecFNToRecFN::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VrecFNToRecFN__Syms* __restrict vlSymsp = static_cast<VrecFNToRecFN__Syms*>(userp);
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VrecFNToRecFN::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VrecFNToRecFN__Syms* __restrict vlSymsp = static_cast<VrecFNToRecFN__Syms*>(userp);
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+32,"control", false,-1, 0,0);
        tracep->declArray(c+33,"in", false,-1, 64,0);
        tracep->declBus(c+36,"roundingMode", false,-1, 2,0);
        tracep->declQuad(c+37,"out", false,-1, 32,0);
        tracep->declBus(c+39,"exceptionFlags", false,-1, 4,0);
        tracep->declBus(c+32,"recFNToRecFN control", false,-1, 0,0);
        tracep->declArray(c+33,"recFNToRecFN in", false,-1, 64,0);
        tracep->declBus(c+36,"recFNToRecFN roundingMode", false,-1, 2,0);
        tracep->declQuad(c+37,"recFNToRecFN out", false,-1, 32,0);
        tracep->declBus(c+39,"recFNToRecFN exceptionFlags", false,-1, 4,0);
        tracep->declBit(c+40,"recFNToRecFN isNaN", false,-1);
        tracep->declBit(c+1,"recFNToRecFN isInf", false,-1);
        tracep->declBit(c+41,"recFNToRecFN isZero", false,-1);
        tracep->declBit(c+42,"recFNToRecFN sign", false,-1);
        tracep->declBus(c+43,"recFNToRecFN sExpIn", false,-1, 12,0);
        tracep->declQuad(c+2,"recFNToRecFN sigIn", false,-1, 53,0);
        tracep->declBit(c+4,"recFNToRecFN isSigNaN", false,-1);
        tracep->declBus(c+66,"recFNToRecFN inToRawIn expWidth", false,-1, 31,0);
        tracep->declBus(c+67,"recFNToRecFN inToRawIn sigWidth", false,-1, 31,0);
        tracep->declArray(c+33,"recFNToRecFN inToRawIn in", false,-1, 64,0);
        tracep->declBit(c+40,"recFNToRecFN inToRawIn isNaN", false,-1);
        tracep->declBit(c+1,"recFNToRecFN inToRawIn isInf", false,-1);
        tracep->declBit(c+41,"recFNToRecFN inToRawIn isZero", false,-1);
        tracep->declBit(c+42,"recFNToRecFN inToRawIn sign", false,-1);
        tracep->declBus(c+43,"recFNToRecFN inToRawIn sExp", false,-1, 12,0);
        tracep->declQuad(c+2,"recFNToRecFN inToRawIn sig", false,-1, 53,0);
        tracep->declBus(c+44,"recFNToRecFN inToRawIn exp", false,-1, 11,0);
        tracep->declQuad(c+45,"recFNToRecFN inToRawIn fract", false,-1, 51,0);
        tracep->declBit(c+47,"recFNToRecFN inToRawIn isSpecial", false,-1);
        tracep->declBus(c+66,"recFNToRecFN isSigNaNIn expWidth", false,-1, 31,0);
        tracep->declBus(c+67,"recFNToRecFN isSigNaNIn sigWidth", false,-1, 31,0);
        tracep->declArray(c+33,"recFNToRecFN isSigNaNIn in", false,-1, 64,0);
        tracep->declBit(c+4,"recFNToRecFN isSigNaNIn isSigNaN", false,-1);
        tracep->declBit(c+48,"recFNToRecFN isSigNaNIn isNaN", false,-1);
        tracep->declBus(c+66,"recFNToRecFN genblk1 roundRawInToOut inExpWidth", false,-1, 31,0);
        tracep->declBus(c+67,"recFNToRecFN genblk1 roundRawInToOut inSigWidth", false,-1, 31,0);
        tracep->declBus(c+68,"recFNToRecFN genblk1 roundRawInToOut outExpWidth", false,-1, 31,0);
        tracep->declBus(c+69,"recFNToRecFN genblk1 roundRawInToOut outSigWidth", false,-1, 31,0);
        tracep->declBus(c+70,"recFNToRecFN genblk1 roundRawInToOut options", false,-1, 31,0);
        tracep->declBus(c+32,"recFNToRecFN genblk1 roundRawInToOut control", false,-1, 0,0);
        tracep->declBit(c+4,"recFNToRecFN genblk1 roundRawInToOut invalidExc", false,-1);
        tracep->declBit(c+71,"recFNToRecFN genblk1 roundRawInToOut infiniteExc", false,-1);
        tracep->declBit(c+40,"recFNToRecFN genblk1 roundRawInToOut in_isNaN", false,-1);
        tracep->declBit(c+1,"recFNToRecFN genblk1 roundRawInToOut in_isInf", false,-1);
        tracep->declBit(c+41,"recFNToRecFN genblk1 roundRawInToOut in_isZero", false,-1);
        tracep->declBit(c+42,"recFNToRecFN genblk1 roundRawInToOut in_sign", false,-1);
        tracep->declBus(c+43,"recFNToRecFN genblk1 roundRawInToOut in_sExp", false,-1, 12,0);
        tracep->declQuad(c+2,"recFNToRecFN genblk1 roundRawInToOut in_sig", false,-1, 53,0);
        tracep->declBus(c+36,"recFNToRecFN genblk1 roundRawInToOut roundingMode", false,-1, 2,0);
        tracep->declQuad(c+37,"recFNToRecFN genblk1 roundRawInToOut out", false,-1, 32,0);
        tracep->declBus(c+39,"recFNToRecFN genblk1 roundRawInToOut exceptionFlags", false,-1, 4,0);
        tracep->declBus(c+72,"recFNToRecFN genblk1 roundRawInToOut sigMSBitAlwaysZero", false,-1, 0,0);
        tracep->declBus(c+67,"recFNToRecFN genblk1 roundRawInToOut effectiveInSigWidth", false,-1, 31,0);
        tracep->declBus(c+73,"recFNToRecFN genblk1 roundRawInToOut neverUnderflows", false,-1, 0,0);
        tracep->declBus(c+73,"recFNToRecFN genblk1 roundRawInToOut neverOverflows", false,-1, 0,0);
        tracep->declBus(c+74,"recFNToRecFN genblk1 roundRawInToOut adjustedExpWidth", false,-1, 31,0);
        tracep->declBus(c+75,"recFNToRecFN genblk1 roundRawInToOut outNaNExp", false,-1, 31,0);
        tracep->declBus(c+76,"recFNToRecFN genblk1 roundRawInToOut outInfExp", false,-1, 31,0);
        tracep->declBus(c+77,"recFNToRecFN genblk1 roundRawInToOut outMaxFiniteExp", false,-1, 31,0);
        tracep->declBus(c+78,"recFNToRecFN genblk1 roundRawInToOut outMinNormExp", false,-1, 31,0);
        tracep->declBus(c+79,"recFNToRecFN genblk1 roundRawInToOut outMinNonzeroExp", false,-1, 31,0);
        tracep->declBit(c+49,"recFNToRecFN genblk1 roundRawInToOut roundingMode_near_even", false,-1);
        tracep->declBit(c+50,"recFNToRecFN genblk1 roundRawInToOut roundingMode_minMag", false,-1);
        tracep->declBit(c+51,"recFNToRecFN genblk1 roundRawInToOut roundingMode_min", false,-1);
        tracep->declBit(c+52,"recFNToRecFN genblk1 roundRawInToOut roundingMode_max", false,-1);
        tracep->declBit(c+53,"recFNToRecFN genblk1 roundRawInToOut roundingMode_near_maxMag", false,-1);
        tracep->declBit(c+54,"recFNToRecFN genblk1 roundRawInToOut roundingMode_odd", false,-1);
        tracep->declBit(c+5,"recFNToRecFN genblk1 roundRawInToOut roundMagUp", false,-1);
        tracep->declBit(c+6,"recFNToRecFN genblk1 roundRawInToOut isNaNOut", false,-1);
        tracep->declBit(c+71,"recFNToRecFN genblk1 roundRawInToOut propagateNaNPayload", false,-1);
        tracep->declBus(c+55,"recFNToRecFN genblk1 roundRawInToOut sAdjustedExp", false,-1, 13,0);
        tracep->declBus(c+7,"recFNToRecFN genblk1 roundRawInToOut adjustedSig", false,-1, 26,0);
        tracep->declBit(c+71,"recFNToRecFN genblk1 roundRawInToOut doShiftSigDown1", false,-1);
        tracep->declBus(c+8,"recFNToRecFN genblk1 roundRawInToOut common_expOut", false,-1, 8,0);
        tracep->declBus(c+9,"recFNToRecFN genblk1 roundRawInToOut common_fractOut", false,-1, 22,0);
        tracep->declBit(c+10,"recFNToRecFN genblk1 roundRawInToOut common_overflow", false,-1);
        tracep->declBit(c+11,"recFNToRecFN genblk1 roundRawInToOut common_totalUnderflow", false,-1);
        tracep->declBit(c+56,"recFNToRecFN genblk1 roundRawInToOut common_underflow", false,-1);
        tracep->declBit(c+12,"recFNToRecFN genblk1 roundRawInToOut common_inexact", false,-1);
        tracep->declBit(c+1,"recFNToRecFN genblk1 roundRawInToOut notNaN_isSpecialInfOut", false,-1);
        tracep->declBit(c+13,"recFNToRecFN genblk1 roundRawInToOut commonCase", false,-1);
        tracep->declBit(c+14,"recFNToRecFN genblk1 roundRawInToOut overflow", false,-1);
        tracep->declBit(c+57,"recFNToRecFN genblk1 roundRawInToOut underflow", false,-1);
        tracep->declBit(c+15,"recFNToRecFN genblk1 roundRawInToOut inexact", false,-1);
        tracep->declBit(c+16,"recFNToRecFN genblk1 roundRawInToOut overflow_roundMagUp", false,-1);
        tracep->declBit(c+17,"recFNToRecFN genblk1 roundRawInToOut pegMinNonzeroMagOut", false,-1);
        tracep->declBit(c+18,"recFNToRecFN genblk1 roundRawInToOut pegMaxFiniteMagOut", false,-1);
        tracep->declBit(c+19,"recFNToRecFN genblk1 roundRawInToOut notNaN_isInfOut", false,-1);
        tracep->declBit(c+58,"recFNToRecFN genblk1 roundRawInToOut signOut", false,-1);
        tracep->declBus(c+59,"recFNToRecFN genblk1 roundRawInToOut expOut", false,-1, 8,0);
        tracep->declBus(c+60,"recFNToRecFN genblk1 roundRawInToOut fractOut", false,-1, 22,0);
        tracep->declBus(c+20,"recFNToRecFN genblk1 roundRawInToOut genblk2 roundMask", false,-1, 26,0);
        tracep->declBus(c+21,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 roundMask_main", false,-1, 24,0);
        tracep->declBus(c+22,"recFNToRecFN genblk1 roundRawInToOut genblk2 shiftedRoundMask", false,-1, 26,0);
        tracep->declBus(c+23,"recFNToRecFN genblk1 roundRawInToOut genblk2 roundPosMask", false,-1, 26,0);
        tracep->declBit(c+24,"recFNToRecFN genblk1 roundRawInToOut genblk2 roundPosBit", false,-1);
        tracep->declBit(c+25,"recFNToRecFN genblk1 roundRawInToOut genblk2 anyRoundExtra", false,-1);
        tracep->declBit(c+26,"recFNToRecFN genblk1 roundRawInToOut genblk2 anyRound", false,-1);
        tracep->declBit(c+61,"recFNToRecFN genblk1 roundRawInToOut genblk2 roundIncr", false,-1);
        tracep->declBus(c+27,"recFNToRecFN genblk1 roundRawInToOut genblk2 roundedSig", false,-1, 25,0);
        tracep->declBus(c+62,"recFNToRecFN genblk1 roundRawInToOut genblk2 sExtAdjustedExp", false,-1, 14,0);
        tracep->declBus(c+28,"recFNToRecFN genblk1 roundRawInToOut genblk2 sRoundedExp", false,-1, 14,0);
        tracep->declBit(c+29,"recFNToRecFN genblk1 roundRawInToOut genblk2 unboundedRange_roundPosBit", false,-1);
        tracep->declBit(c+30,"recFNToRecFN genblk1 roundRawInToOut genblk2 unboundedRange_anyRound", false,-1);
        tracep->declBit(c+63,"recFNToRecFN genblk1 roundRawInToOut genblk2 unboundedRange_roundIncr", false,-1);
        tracep->declBit(c+31,"recFNToRecFN genblk1 roundRawInToOut genblk2 roundCarry", false,-1);
        tracep->declBus(c+80,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask inWidth", false,-1, 31,0);
        tracep->declBus(c+81,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask topBound", false,-1, 31,0);
        tracep->declBus(c+78,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask bottomBound", false,-1, 31,0);
        tracep->declBus(c+64,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask in", false,-1, 8,0);
        tracep->declBus(c+21,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask out", false,-1, 24,0);
        tracep->declBus(c+82,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask numInVals", false,-1, 31,0);
        tracep->declArray(c+83,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask c", false,-1, 512,0);
        tracep->declBus(c+65,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask reverseOut", false,-1, 24,0);
        tracep->declBus(c+100,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask reverse width", false,-1, 31,0);
        tracep->declBus(c+65,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask reverse in", false,-1, 24,0);
        tracep->declBus(c+21,"recFNToRecFN genblk1 roundRawInToOut genblk2 genblk1 lowMask_roundMask reverse out", false,-1, 24,0);
    }
}

void VrecFNToRecFN::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VrecFNToRecFN::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VrecFNToRecFN__Syms* __restrict vlSymsp = static_cast<VrecFNToRecFN__Syms*>(userp);
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VrecFNToRecFN::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VrecFNToRecFN__Syms* __restrict vlSymsp = static_cast<VrecFNToRecFN__Syms*>(userp);
    VrecFNToRecFN* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    VlWide<17>/*543:0*/ __Vtemp53;
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->recFNToRecFN__DOT__isInf));
        tracep->fullQData(oldp+2,(vlTOPp->recFNToRecFN__DOT__sigIn),54);
        tracep->fullBit(oldp+4,(vlTOPp->recFNToRecFN__DOT__isSigNaN));
        tracep->fullBit(oldp+5,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
        tracep->fullBit(oldp+6,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut));
        tracep->fullIData(oldp+7,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig),27);
        tracep->fullSData(oldp+8,((0x1ffU & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))),9);
        tracep->fullIData(oldp+9,((0x7fffffU & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)),23);
        tracep->fullBit(oldp+10,(VL_LTES_III(1,32,32, 3U, 
                                             VL_SHIFTRS_III(32,32,32, 
                                                            VL_EXTENDS_II(32,15, (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U))));
        tracep->fullBit(oldp+11,((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))));
        tracep->fullBit(oldp+12,(((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
                                  | (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound))));
        tracep->fullBit(oldp+13,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase));
        tracep->fullBit(oldp+14,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow));
        tracep->fullBit(oldp+15,(((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
                                  | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
                                     & ((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
                                        | (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound))))));
        tracep->fullBit(oldp+16,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp));
        tracep->fullBit(oldp+17,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut));
        tracep->fullBit(oldp+18,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut));
        tracep->fullBit(oldp+19,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut));
        tracep->fullIData(oldp+20,((3U | (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                          << 2U))),27);
        tracep->fullIData(oldp+21,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main),25);
        tracep->fullIData(oldp+22,((0x7ffffffU & (1U 
                                                  | (0x7ffffffeU 
                                                     & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 1U))))),27);
        tracep->fullIData(oldp+23,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask),27);
        tracep->fullBit(oldp+24,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit));
        tracep->fullBit(oldp+25,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
        tracep->fullBit(oldp+26,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound));
        tracep->fullIData(oldp+27,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig),26);
        tracep->fullSData(oldp+28,(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp),15);
        tracep->fullBit(oldp+29,((1U & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                        >> 1U))));
        tracep->fullBit(oldp+30,((0U != (3U & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig))));
        tracep->fullBit(oldp+31,((1U & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                        >> 0x18U))));
        tracep->fullBit(oldp+32,(vlTOPp->control));
        tracep->fullWData(oldp+33,(vlTOPp->in),65);
        tracep->fullCData(oldp+36,(vlTOPp->roundingMode),3);
        tracep->fullQData(oldp+37,(vlTOPp->out),33);
        tracep->fullCData(oldp+39,(vlTOPp->exceptionFlags),5);
        tracep->fullBit(oldp+40,(((3U == (3U & ((0x3ffffcU 
                                                 & (vlTOPp->in[2U] 
                                                    << 2U)) 
                                                | (vlTOPp->in[1U] 
                                                   >> 0x1eU)))) 
                                  & (vlTOPp->in[1U] 
                                     >> 0x1dU))));
        tracep->fullBit(oldp+41,((0U == (7U & ((0x7ffff8U 
                                                & (vlTOPp->in[2U] 
                                                   << 3U)) 
                                               | (vlTOPp->in[1U] 
                                                  >> 0x1dU))))));
        tracep->fullBit(oldp+42,((1U & vlTOPp->in[2U])));
        tracep->fullSData(oldp+43,((0xfffU & ((vlTOPp->in[2U] 
                                               << 0xcU) 
                                              | (vlTOPp->in[1U] 
                                                 >> 0x14U)))),13);
        tracep->fullSData(oldp+44,((0xfffU & ((vlTOPp->in[2U] 
                                               << 0xcU) 
                                              | (vlTOPp->in[1U] 
                                                 >> 0x14U)))),12);
        tracep->fullQData(oldp+45,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlTOPp->in[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->in[0U]))))),52);
        tracep->fullBit(oldp+47,((3U == (3U & ((0x3ffffcU 
                                                & (vlTOPp->in[2U] 
                                                   << 2U)) 
                                               | (vlTOPp->in[1U] 
                                                  >> 0x1eU))))));
        tracep->fullBit(oldp+48,((7U == (7U & ((vlTOPp->in[2U] 
                                                << 3U) 
                                               | (vlTOPp->in[1U] 
                                                  >> 0x1dU))))));
        tracep->fullBit(oldp+49,((0U == (IData)(vlTOPp->roundingMode))));
        tracep->fullBit(oldp+50,((1U == (IData)(vlTOPp->roundingMode))));
        tracep->fullBit(oldp+51,((2U == (IData)(vlTOPp->roundingMode))));
        tracep->fullBit(oldp+52,((3U == (IData)(vlTOPp->roundingMode))));
        tracep->fullBit(oldp+53,((4U == (IData)(vlTOPp->roundingMode))));
        tracep->fullBit(oldp+54,((6U == (IData)(vlTOPp->roundingMode))));
        tracep->fullSData(oldp+55,((0x3fffU & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & ((vlTOPp->in[2U] 
                                                                    << 0xcU) 
                                                                   | (vlTOPp->in[1U] 
                                                                      >> 0x14U))))))),14);
        tracep->fullBit(oldp+56,(((0x6bU > (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)) 
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
                                                     & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig))))))))));
        tracep->fullBit(oldp+57,(((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
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
        tracep->fullBit(oldp+58,(((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                   ? 0U : (1U & vlTOPp->in[2U]))));
        tracep->fullSData(oldp+59,((0x1ffU & ((((((
                                                   (((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
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
        tracep->fullIData(oldp+60,((0x7fffffU & (((
                                                   ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
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
        tracep->fullBit(oldp+61,(((((0U == (IData)(vlTOPp->roundingMode)) 
                                    | (4U == (IData)(vlTOPp->roundingMode))) 
                                   & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                                  | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                                     & (IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))));
        tracep->fullSData(oldp+62,((0x7fffU & VL_EXTENDS_II(15,14, 
                                                            (0x3fffU 
                                                             & ((IData)(0x3900U) 
                                                                + 
                                                                VL_EXTENDS_II(14,13, 
                                                                              (0xfffU 
                                                                               & ((vlTOPp->in[2U] 
                                                                                << 0xcU) 
                                                                                | (vlTOPp->in[1U] 
                                                                                >> 0x14U))))))))),15);
        tracep->fullBit(oldp+63,(((((0U == (IData)(vlTOPp->roundingMode)) 
                                    | (4U == (IData)(vlTOPp->roundingMode))) 
                                   & (vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                      >> 1U)) | ((IData)(vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & vlTOPp->recFNToRecFN__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig))))));
        tracep->fullSData(oldp+64,((0x1ffU & ((IData)(0x100U) 
                                              + VL_EXTENDS_II(9,13, 
                                                              (0xfffU 
                                                               & ((vlTOPp->in[2U] 
                                                                   << 0xcU) 
                                                                  | (vlTOPp->in[1U] 
                                                                     >> 0x14U))))))),9);
        VL_SHIFTRS_WWI(513,513,9, __Vtemp53, __Vconst2, 
                       (0x1ffU & (~ ((IData)(0x100U) 
                                     + VL_EXTENDS_II(9,13, 
                                                     (0xfffU 
                                                      & ((vlTOPp->in[2U] 
                                                          << 0xcU) 
                                                         | (vlTOPp->in[1U] 
                                                            >> 0x14U))))))));
        tracep->fullIData(oldp+65,((0x1ffffffU & ((
                                                   (__Vconst1[4U] 
                                                    & __Vtemp53[4U]) 
                                                   << 0x16U) 
                                                  | ((__Vconst1[3U] 
                                                      & __Vtemp53[3U]) 
                                                     >> 0xaU)))),25);
        tracep->fullIData(oldp+66,(0xbU),32);
        tracep->fullIData(oldp+67,(0x35U),32);
        tracep->fullIData(oldp+68,(8U),32);
        tracep->fullIData(oldp+69,(0x18U),32);
        tracep->fullIData(oldp+70,(1U),32);
        tracep->fullBit(oldp+71,(0U));
        tracep->fullBit(oldp+72,(1U));
        tracep->fullBit(oldp+73,(0U));
        tracep->fullIData(oldp+74,(0xeU),32);
        tracep->fullIData(oldp+75,(0x1c0U),32);
        tracep->fullIData(oldp+76,(0x180U),32);
        tracep->fullIData(oldp+77,(0x17fU),32);
        tracep->fullIData(oldp+78,(0x82U),32);
        tracep->fullIData(oldp+79,(0x6bU),32);
        tracep->fullIData(oldp+80,(9U),32);
        tracep->fullIData(oldp+81,(0x69U),32);
        tracep->fullIData(oldp+82,(0x200U),32);
        tracep->fullWData(oldp+83,(__Vconst55),513);
        tracep->fullIData(oldp+100,(0x19U),32);
    }
}
