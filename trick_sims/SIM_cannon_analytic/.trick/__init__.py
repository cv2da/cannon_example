from pkgutil import extend_path
__path__ = extend_path(__path__, __name__)
import sys
import os
sys.path.append(os.getcwd() + "/trick.zip/trick")

import _sim_services
from sim_services import *

# create "all_cvars" to hold all global/static vars
all_cvars = new_cvar_list()
combine_cvars(all_cvars, cvar)
cvar = None

# /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/S_source.hh
import _mb1ce029b6b8f232cf2e0e336910de253
combine_cvars(all_cvars, cvar)
cvar = None

# /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon.h
import _m91b8cb079eb94d427520e6948aeb1e18
combine_cvars(all_cvars, cvar)
cvar = None

# /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h
import _m01de4b73b37ffd19b14d65fceb70cfbd
combine_cvars(all_cvars, cvar)
cvar = None

# /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/S_source.hh
from mb1ce029b6b8f232cf2e0e336910de253 import *
# /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon.h
from m91b8cb079eb94d427520e6948aeb1e18 import *
# /home/cris/Documents/cannon_example/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h
from m01de4b73b37ffd19b14d65fceb70cfbd import *

# S_source.hh
import _mb1ce029b6b8f232cf2e0e336910de253
from mb1ce029b6b8f232cf2e0e336910de253 import *

import _top
import top

import _swig_double
import swig_double

import _swig_int
import swig_int

import _swig_ref
import swig_ref

from shortcuts import *

from exception import *

cvar = all_cvars

