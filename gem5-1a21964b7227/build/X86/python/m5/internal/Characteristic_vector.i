%module(package="m5.internal") Characteristic_vector
%{
#include "enums/Characteristic.hh"
%}

%include "std_container.i"

%import "python/m5/internal/enum_Characteristic.i"

%include "std_vector.i"

%typemap(in) std::vector< Enums::Characteristic >::value_type {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(Enums::Characteristic), 0) == -1) {
            return NULL;
        }
    }
}

%typemap(in) std::vector< Enums::Characteristic >::value_type * {
    if (SWIG_ConvertPtr($input, (void **)&$1, $1_descriptor, 0) == -1) {
        if (SWIG_ConvertPtr($input, (void **)&$1,
                            $descriptor(Enums::Characteristic *), 0) == -1) {
            return NULL;
        }
    }
}
%template(vector_Characteristic) std::vector< Enums::Characteristic >;
