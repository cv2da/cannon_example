%module m01de4b73b37ffd19b14d65fceb70cfbd

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h"
%}




#ifndef CANNON_ANALYTIC_H
#define CANNON_ANALYTIC_H
%import "build/home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_py.i"
#ifdef __cplusplus
extern "C" {
#endif
int cannon_analytic(CANNON*) ;
#ifdef __cplusplus
}
#endif
#endif
