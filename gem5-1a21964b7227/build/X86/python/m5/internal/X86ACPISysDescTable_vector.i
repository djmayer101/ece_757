%module(package="m5.internal") X86ACPISysDescTable_vector
%{
#include "params/X86ACPISysDescTable.hh"
%}

%include "std_container.i"

%import "python/m5/internal/param_X86ACPISysDescTable.i"

%include "std_vector.i"

%typemap(in) std::vector< X86ISA::ACPI::SysDescTable * >::value_type {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::ACPI::SysDescTable *), 0) == -1) {
            return NULL;
        }
    }
}

%typemap(in) std::vector< X86ISA::ACPI::SysDescTable * >::value_type * {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(X86ISA::ACPI::SysDescTable * *), 0) == -1) {
            return NULL;
        }
    }
}
%template(vector_X86ACPISysDescTable) std::vector< X86ISA::ACPI::SysDescTable * >;
