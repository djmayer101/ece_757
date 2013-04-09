%module(package="m5.internal") ExtCharacteristic_vector
%{
#include "enums/ExtCharacteristic.hh"
%}

%include "std_container.i"

%import "python/m5/internal/enum_ExtCharacteristic.i"

%include "std_vector.i"

%typemap(in) std::vector< Enums::ExtCharacteristic >::value_type {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(Enums::ExtCharacteristic), 0) == -1) {
            return NULL;
        }
    }
}

%typemap(in) std::vector< Enums::ExtCharacteristic >::value_type * {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(Enums::ExtCharacteristic *), 0) == -1) {
            return NULL;
        }
    }
}
%template(vector_ExtCharacteristic) std::vector< Enums::ExtCharacteristic >;
