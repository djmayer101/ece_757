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
            fp, pathname, description = imp.find_module('_param_BaseCache', [dirname(__file__)])
        except ImportError:
            import _param_BaseCache
            return _param_BaseCache
        if fp is not None:
            try:
                _mod = imp.load_module('_param_BaseCache', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _param_BaseCache = swig_import_helper()
    del swig_import_helper
else:
    import _param_BaseCache
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
import param_BasePrefetcher
class BaseCache(param_MemObject.MemObject):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
BaseCache_swigregister = _param_BaseCache.BaseCache_swigregister
BaseCache_swigregister(BaseCache)

class BaseCacheParams(param_MemObject.MemObjectParams):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def create(self): return _param_BaseCache.BaseCacheParams_create(self)
    two_queue = _swig_property(_param_BaseCache.BaseCacheParams_two_queue_get, _param_BaseCache.BaseCacheParams_two_queue_set)
    prefetch_on_access = _swig_property(_param_BaseCache.BaseCacheParams_prefetch_on_access_get, _param_BaseCache.BaseCacheParams_prefetch_on_access_set)
    hit_latency = _swig_property(_param_BaseCache.BaseCacheParams_hit_latency_get, _param_BaseCache.BaseCacheParams_hit_latency_set)
    tgts_per_mshr = _swig_property(_param_BaseCache.BaseCacheParams_tgts_per_mshr_get, _param_BaseCache.BaseCacheParams_tgts_per_mshr_set)
    system = _swig_property(_param_BaseCache.BaseCacheParams_system_get, _param_BaseCache.BaseCacheParams_system_set)
    prefetcher = _swig_property(_param_BaseCache.BaseCacheParams_prefetcher_get, _param_BaseCache.BaseCacheParams_prefetcher_set)
    addr_ranges = _swig_property(_param_BaseCache.BaseCacheParams_addr_ranges_get, _param_BaseCache.BaseCacheParams_addr_ranges_set)
    max_miss_count = _swig_property(_param_BaseCache.BaseCacheParams_max_miss_count_get, _param_BaseCache.BaseCacheParams_max_miss_count_set)
    write_buffers = _swig_property(_param_BaseCache.BaseCacheParams_write_buffers_get, _param_BaseCache.BaseCacheParams_write_buffers_set)
    response_latency = _swig_property(_param_BaseCache.BaseCacheParams_response_latency_get, _param_BaseCache.BaseCacheParams_response_latency_set)
    is_top_level = _swig_property(_param_BaseCache.BaseCacheParams_is_top_level_get, _param_BaseCache.BaseCacheParams_is_top_level_set)
    assoc = _swig_property(_param_BaseCache.BaseCacheParams_assoc_get, _param_BaseCache.BaseCacheParams_assoc_set)
    block_size = _swig_property(_param_BaseCache.BaseCacheParams_block_size_get, _param_BaseCache.BaseCacheParams_block_size_set)
    mshrs = _swig_property(_param_BaseCache.BaseCacheParams_mshrs_get, _param_BaseCache.BaseCacheParams_mshrs_set)
    forward_snoops = _swig_property(_param_BaseCache.BaseCacheParams_forward_snoops_get, _param_BaseCache.BaseCacheParams_forward_snoops_set)
    size = _swig_property(_param_BaseCache.BaseCacheParams_size_get, _param_BaseCache.BaseCacheParams_size_set)
    port_mem_side_connection_count = _swig_property(_param_BaseCache.BaseCacheParams_port_mem_side_connection_count_get, _param_BaseCache.BaseCacheParams_port_mem_side_connection_count_set)
    port_cpu_side_connection_count = _swig_property(_param_BaseCache.BaseCacheParams_port_cpu_side_connection_count_get, _param_BaseCache.BaseCacheParams_port_cpu_side_connection_count_set)
    def __init__(self): 
        this = _param_BaseCache.new_BaseCacheParams()
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _param_BaseCache.delete_BaseCacheParams
    __del__ = lambda self : None;
BaseCacheParams_swigregister = _param_BaseCache.BaseCacheParams_swigregister
BaseCacheParams_swigregister(BaseCacheParams)


