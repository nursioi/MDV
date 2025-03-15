// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VANDgate.h for the primary calling header

#include "VANDgate__pch.h"
#include "VANDgate__Syms.h"
#include "VANDgate___024root.h"

void VANDgate___024root___ctor_var_reset(VANDgate___024root* vlSelf);

VANDgate___024root::VANDgate___024root(VANDgate__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VANDgate___024root___ctor_var_reset(this);
}

void VANDgate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VANDgate___024root::~VANDgate___024root() {
}
