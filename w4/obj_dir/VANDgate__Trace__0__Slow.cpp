// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VANDgate__Syms.h"


VL_ATTR_COLD void VANDgate___024root__trace_init_sub__TOP__0(VANDgate___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root__trace_init_sub__TOP__0\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("and_gate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void VANDgate___024root__trace_init_top(VANDgate___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root__trace_init_top\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VANDgate___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VANDgate___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VANDgate___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VANDgate___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VANDgate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VANDgate___024root__trace_register(VANDgate___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root__trace_register\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VANDgate___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VANDgate___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VANDgate___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VANDgate___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VANDgate___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root__trace_const_0\n"); );
    // Init
    VANDgate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VANDgate___024root*>(voidSelf);
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VANDgate___024root__trace_full_0_sub_0(VANDgate___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VANDgate___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root__trace_full_0\n"); );
    // Init
    VANDgate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VANDgate___024root*>(voidSelf);
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VANDgate___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VANDgate___024root__trace_full_0_sub_0(VANDgate___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VANDgate___024root__trace_full_0_sub_0\n"); );
    VANDgate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.a));
    bufp->fullBit(oldp+2,(vlSelfRef.b));
    bufp->fullBit(oldp+3,(vlSelfRef.y));
}
