%module(package="m5.internal") X86IntelMPExtConfigEntry_vector
%{
#include "params/X86IntelMPExtConfigEntry.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_X86IntelMPExtConfigEntry.i"

%include "std_vector.i"

%typemap(in) std::vector< X86ISA::IntelMP::ExtConfigEntry * >::value_type {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::IntelMP::ExtConfigEntry *), 0) == -1) {
            return NULL;
        }
    }
}

%typemap(in) std::vector< X86ISA::IntelMP::ExtConfigEntry * >::value_type * {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::IntelMP::ExtConfigEntry * *), 0) == -1) {
            return NULL;
        }
    }
}
%template(vector_X86IntelMPExtConfigEntry) std::vector< X86ISA::IntelMP::ExtConfigEntry * >;
