// Auto generated C++ code started by /filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/StateMachine.py:1367
// L1Cache: MI Example L1 Cache

#ifndef __L1Cache_PROFILE_DUMPER_HH__
#define __L1Cache_PROFILE_DUMPER_HH__

#include <cassert>
#include <iostream>
#include <vector>

#include "L1Cache_Event.hh"
#include "L1Cache_Profiler.hh"

typedef std::vector<L1Cache_Profiler *> L1Cache_profilers;

class L1Cache_ProfileDumper
{
  public:
    L1Cache_ProfileDumper();
    void registerProfiler(L1Cache_Profiler* profiler);
    void dumpStats(std::ostream& out) const;

  private:
    L1Cache_profilers m_profilers;
};

#endif // __L1Cache_PROFILE_DUMPER_HH__
