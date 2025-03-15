// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VANDGATE__SYMS_H_
#define VERILATED_VANDGATE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VANDgate.h"

// INCLUDE MODULE CLASSES
#include "VANDgate___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VANDgate__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VANDgate* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VANDgate___024root             TOP;

    // CONSTRUCTORS
    VANDgate__Syms(VerilatedContext* contextp, const char* namep, VANDgate* modelp);
    ~VANDgate__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
