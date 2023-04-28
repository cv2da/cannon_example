#include <Python.h>
#if PY_VERSION_HEX >= 0x03000000
extern "C" {

PyObject * PyInit__mb1ce029b6b8f232cf2e0e336910de253(void) ; /* /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/S_source.hh */
PyObject * PyInit__m91b8cb079eb94d427520e6948aeb1e18(void) ; /* /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon.h */
PyObject * PyInit__m01de4b73b37ffd19b14d65fceb70cfbd(void) ; /* /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h */
PyObject * PyInit__sim_services(void) ;
PyObject * PyInit__top(void) ;
PyObject * PyInit__swig_double(void) ;
PyObject * PyInit__swig_int(void) ;
PyObject * PyInit__swig_ref(void) ;

void init_swig_modules(void) {

    PyImport_AppendInittab("_m91b8cb079eb94d427520e6948aeb1e18", PyInit__m91b8cb079eb94d427520e6948aeb1e18) ;
    PyImport_AppendInittab("_m01de4b73b37ffd19b14d65fceb70cfbd", PyInit__m01de4b73b37ffd19b14d65fceb70cfbd) ;
    PyImport_AppendInittab("_mb1ce029b6b8f232cf2e0e336910de253", PyInit__mb1ce029b6b8f232cf2e0e336910de253) ;
    PyImport_AppendInittab("_sim_services", PyInit__sim_services) ;
    PyImport_AppendInittab("_top", PyInit__top) ;
    PyImport_AppendInittab("_swig_double", PyInit__swig_double) ;
    PyImport_AppendInittab("_swig_int", PyInit__swig_int) ;
    PyImport_AppendInittab("_swig_ref", PyInit__swig_ref) ;
    return ;
}

}
#else
extern "C" {

void init_mb1ce029b6b8f232cf2e0e336910de253(void) ; /* /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/S_source.hh */
void init_m91b8cb079eb94d427520e6948aeb1e18(void) ; /* /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon.h */
void init_m01de4b73b37ffd19b14d65fceb70cfbd(void) ; /* /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h */
void init_sim_services(void) ;
void init_top(void) ;
void init_swig_double(void) ;
void init_swig_int(void) ;
void init_swig_ref(void) ;

void init_swig_modules(void) {

    init_m91b8cb079eb94d427520e6948aeb1e18() ;
    init_m01de4b73b37ffd19b14d65fceb70cfbd() ;
    init_mb1ce029b6b8f232cf2e0e336910de253() ;
    init_sim_services() ;
    init_top() ;
    init_swig_double() ;
    init_swig_int() ;
    init_swig_ref() ;
    return ;
}

}
#endif
