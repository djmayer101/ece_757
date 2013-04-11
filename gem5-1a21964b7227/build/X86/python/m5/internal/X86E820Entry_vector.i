%module(package="m5.internal") X86E820Entry_vector
%{
#include "params/X86E820Entry.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_X86E820Entry.i"

%include "std_vector.i"

%typemap(in) std::vector< X86ISA::E820Entry * >::value_type {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::E820Entry *), 0) == -1) {
            return NULL;
        }
    }
}

%typemap(in) std::vector< X86ISA::E820Entry * >::value_type * {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::E820Entry * *), 0) == -1) {
            return NULL;
        }
    }
}
%template(vector_X86E820Entry) std::vector< X86ISA::E820Entry * >;
