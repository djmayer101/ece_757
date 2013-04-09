%module(package="m5.internal") X86ISA_vector
%{
#include "params/X86ISA.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_X86ISA.i"

%include "std_vector.i"

%typemap(in) std::vector< X86ISA::ISA * >::value_type {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::ISA *), 0) == -1) {
            return NULL;
        }
    }
}

%typemap(in) std::vector< X86ISA::ISA * >::value_type * {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::ISA * *), 0) == -1) {
            return NULL;
        }
    }
}
%template(vector_X86ISA) std::vector< X86ISA::ISA * >;
