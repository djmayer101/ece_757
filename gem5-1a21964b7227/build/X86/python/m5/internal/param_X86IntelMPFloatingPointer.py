# This file was automatically generated by SWIG (http://www.swig.org).
# Version 1.3.40
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

from sys import version_info
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_param_X86IntelMPFloatingPointer', [dirname(__file__)])
        except ImportError:
            import _param_X86IntelMPFloatingPointer
            return _param_X86IntelMPFloatingPointer
        if fp is not None:
            try:
                _mod = imp.load_module('_param_X86IntelMPFloatingPointer', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_X86IntelMPFloatingPointer = swig_import_helper()
    del swig_import_helper
else:
    import _param_X86IntelMPFloatingPointer
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static) or hasattr(self,name):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0


def _swig_setattr_nondynamic_method(set):
    def set_attr(self,name,value):
        if (name == "thisown"): return self.this.own(value)
        if hasattr(self,name) or (name == "this"):
            set(self,name,value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


import param_SimObject
import drain
import serialize
class X86ISA_COLONS_IntelMP_COLONS_FloatingPointer(param_SimObject.SimObject):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
X86ISA_COLONS_IntelMP_COLONS_FloatingPointer_swigregister = _param_X86IntelMPFloatingPointer.X86ISA_COLONS_IntelMP_COLONS_FloatingPointer_swigregister
X86ISA_COLONS_IntelMP_COLONS_FloatingPointer_swigregister(X86ISA_COLONS_IntelMP_COLONS_FloatingPointer)

class X86IntelMPFloatingPointerParams(param_SimObject.SimObjectParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_X86IntelMPFloatingPointer.X86IntelMPFloatingPointerParams_create(self)
    imcr_present = _swig_property(_param_X86IntelMPFloatingPointer.X86IntelMPFloatingPointerParams_imcr_present_get, _param_X86IntelMPFloatingPointer.X86IntelMPFloatingPointerParams_imcr_present_set)
    spec_rev = _swig_property(_param_X86IntelMPFloatingPointer.X86IntelMPFloatingPointerParams_spec_rev_get, _param_X86IntelMPFloatingPointer.X86IntelMPFloatingPointerParams_spec_rev_set)
    default_config = _swig_property(_param_X86IntelMPFloatingPointer.X86IntelMPFloatingPointerParams_default_config_get, _param_X86IntelMPFloatingPointer.X86IntelMPFloatingPointerParams_default_config_set)
    def __init__(self): 
        this = _param_X86IntelMPFloatingPointer.new_X86IntelMPFloatingPointerParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_X86IntelMPFloatingPointer.delete_X86IntelMPFloatingPointerParams
    __del__ = lambda self : None;
X86IntelMPFloatingPointerParams_swigregister = _param_X86IntelMPFloatingPointer.X86IntelMPFloatingPointerParams_swigregister
X86IntelMPFloatingPointerParams_swigregister(X86IntelMPFloatingPointerParams)



