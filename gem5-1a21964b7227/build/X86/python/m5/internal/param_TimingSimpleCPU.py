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
            fp, pathname, description = imp.find_module('_param_TimingSimpleCPU', [dirname(__file__)])
        except ImportError:
            import _param_TimingSimpleCPU
            return _param_TimingSimpleCPU
        if fp is not None:
            try:
                _mod = imp.load_module('_param_TimingSimpleCPU', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_TimingSimpleCPU = swig_import_helper()
    del swig_import_helper
else:
    import _param_TimingSimpleCPU
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


import param_BaseSimpleCPU
import param_BaseCPU
import param_X86TLB
import param_X86PagetableWalker
import param_System
import enum_MemoryMode
import AbstractMemory_vector
import param_AbstractMemory
import param_MemObject
import param_ClockedObject
import param_SimObject
import drain
import serialize
import AddrRange_vector
import param_BaseTLB
import param_X86LocalApic
import param_BasicPioDevice
import param_PioDevice
import Process_vector
import param_Process
import param_BranchPredictor
import X86ISA_vector
import param_X86ISA
import param_InstTracer
class TimingSimpleCPU(param_BaseSimpleCPU.BaseSimpleCPU):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
TimingSimpleCPU_swigregister = _param_TimingSimpleCPU.TimingSimpleCPU_swigregister
TimingSimpleCPU_swigregister(TimingSimpleCPU)

class TimingSimpleCPUParams(param_BaseSimpleCPU.BaseSimpleCPUParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_TimingSimpleCPU.TimingSimpleCPUParams_create(self)
    def __init__(self): 
        this = _param_TimingSimpleCPU.new_TimingSimpleCPUParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_TimingSimpleCPU.delete_TimingSimpleCPUParams
    __del__ = lambda self : None;
TimingSimpleCPUParams_swigregister = _param_TimingSimpleCPU.TimingSimpleCPUParams_swigregister
TimingSimpleCPUParams_swigregister(TimingSimpleCPUParams)



