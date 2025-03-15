// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VANDgate.h for the primary calling header

#include "VANDgate__pch.h"
#include "VANDgate___024root.h"

void VANDgate___024root___ico_sequent__TOP__0(VANDgate___024root* vlSelf);

void VANDgate___024root___eval_ico(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_ico\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VANDgate___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VANDgate___024root___ico_sequent__TOP__0(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___ico_sequent__TOP__0\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.y = ((IData)(vlSelfRef.a) & (IData)(vlSelfRef.b));
}

void VANDgate___024root___eval_triggers__ico(VANDgate___024root* vlSelf);

bool VANDgate___024root___eval_phase__ico(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_phase__ico\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VANDgate___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VANDgate___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VANDgate___024root___eval_act(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_act\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VANDgate___024root___eval_nba(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_nba\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VANDgate___024root___eval_triggers__act(VANDgate___024root* vlSelf);

bool VANDgate___024root___eval_phase__act(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_phase__act\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VANDgate___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VANDgate___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VANDgate___024root___eval_phase__nba(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_phase__nba\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VANDgate___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VANDgate___024root___dump_triggers__ico(VANDgate___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VANDgate___024root___dump_triggers__nba(VANDgate___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VANDgate___024root___dump_triggers__act(VANDgate___024root* vlSelf);
#endif  // VL_DEBUG

void VANDgate___024root___eval(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VANDgate___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("ANDgate.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VANDgate___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VANDgate___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ANDgate.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VANDgate___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ANDgate.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VANDgate___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VANDgate___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VANDgate___024root___eval_debug_assertions(VANDgate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root___eval_debug_assertions\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xfeU)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xfeU)))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
