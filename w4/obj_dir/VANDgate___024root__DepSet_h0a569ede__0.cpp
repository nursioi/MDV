// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VANDgate.h for the primary calling header

#include "VANDgate__pch.h"
#include "VANDgate__Syms.h"
#include "VANDgate___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VANDgate___024root___dump_triggers__ico(VANDgate___024root* vlSelf);
#endif  // VL_DEBUG

void VANDgate___024root___eval_triggers__ico(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_triggers__ico\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VANDgate___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VANDgate___024root___dump_triggers__act(VANDgate___024root* vlSelf);
#endif  // VL_DEBUG

void VANDgate___024root___eval_triggers__act(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_triggers__act\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VANDgate___024root___dump_triggers__act(vlSelf);
    }
#endif
}
