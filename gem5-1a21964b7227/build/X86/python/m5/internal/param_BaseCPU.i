%module(package="m5.internal") param_BaseCPU

%{
#include "sim/sim_object.hh"
#include "params/BaseCPU.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/X86TLB.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/BaseCPU.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/X86LocalApic.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <vector>
#include "params/Process.hh"
#include <cstddef>
#include "params/X86TLB.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/BranchPredictor.hh"
#include <vector>
#include "params/X86ISA.hh"
#include <cstddef>
#include "params/InstTracer.hh"
#include "cpu/base.hh"
/**
  * This is a workaround for bug in swig. Prior to gcc 4.6.1 the STL
  * headers like vector, string, etc. used to automatically pull in
  * the cstddef header but starting with gcc 4.6.1 they no longer do.
  * This leads to swig generated a file that does not compile so we
  * explicitly include cstddef. Additionally, including version 2.0.4,
  * swig uses ptrdiff_t without the std:: namespace prefix which is
  * required with gcc 4.6.1. We explicitly provide access to it.
  */
#include <cstddef>
using std::ptrdiff_t;
%}

%import "stdint.i"
%import "base/types.hh"
%import "python/m5/internal/param_X86TLB.i"
%import "stdint.i"
%import "base/types.hh"
%import "python/m5/internal/param_System.i"
%import "stdint.i"
%import "base/types.hh"
%import "stdint.i"
%import "base/types.hh"
%import "python/m5/internal/param_BaseCPU.i"
%import "stdint.i"
%import "base/types.hh"
%import "python/m5/internal/param_X86LocalApic.i"
%import "stdint.i"
%import "base/types.hh"
%import "stdint.i"
%import "base/types.hh"
%import "Process_vector.i"
%import "python/m5/internal/param_X86TLB.i"
%import "stdint.i"
%import "base/types.hh"
%import "stdint.i"
%import "base/types.hh"
%import "python/m5/internal/param_BranchPredictor.i"
%import "X86ISA_vector.i"
%import "python/m5/internal/param_InstTracer.i"

%import "python/m5/internal/param_MemObject.i"


// stop swig from creating/wrapping default ctor/dtor
%nodefault BaseCPU;
class BaseCPU
    : public MemObject
{
  public:
    void switchOut();
    void takeOverFrom(BaseCPU *cpu);
    bool switchedOut();
    void flushTLBs();
};

%include "params/BaseCPU.hh"
