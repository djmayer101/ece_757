%module(package="m5.internal") X86SMBiosSMBiosStructure_vector
%{
#include "params/X86SMBiosSMBiosStructure.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_X86SMBiosSMBiosStructure.i"

%include "std_vector.i"

%typemap(in) std::vector< X86ISA::SMBios::SMBiosStructure * >::value_type {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::SMBios::SMBiosStructure *), 0) == -1) {
            return NULL;
        }
    }
}

%typemap(in) std::vector< X86ISA::SMBios::SMBiosStructure * >::value_type * {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::SMBios::SMBiosStructure * *), 0) == -1) {
            return NULL;
        }
    }
}
%template(vector_X86SMBiosSMBiosStructure) std::vector< X86ISA::SMBios::SMBiosStructure * >;
