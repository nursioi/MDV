// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VANDgate__pch.h"

//============================================================
// Constructors

VANDgate::VANDgate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VANDgate__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VANDgate::VANDgate(const char* _vcname__)
    : VANDgate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VANDgate::~VANDgate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VANDgate___024root___eval_debug_assertions(VANDgate___024root* vlSelf);
#endif  // VL_DEBUG
void VANDgate___024root___eval_static(VANDgate___024root* vlSelf);
void VANDgate___024root___eval_initial(VANDgate___024root* vlSelf);
void VANDgate___024root___eval_settle(VANDgate___024root* vlSelf);
void VANDgate___024root___eval(VANDgate___024root* vlSelf);

void VANDgate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VANDgate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VANDgate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VANDgate___024root___eval_static(&(vlSymsp->TOP));
        VANDgate___024root___eval_initial(&(vlSymsp->TOP));
        VANDgate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VANDgate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VANDgate::eventsPending() { return false; }

uint64_t VANDgate::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VANDgate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VANDgate___024root___eval_final(VANDgate___024root* vlSelf);

VL_ATTR_COLD void VANDgate::final() {
    VANDgate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VANDgate::hierName() const { return vlSymsp->name(); }
const char* VANDgate::modelName() const { return "VANDgate"; }
unsigned VANDgate::threads() const { return 1; }
void VANDgate::prepareClone() const { contextp()->prepareClone(); }
void VANDgate::atClone() const {
    contextp()->threadPoolpOnClone();
}
