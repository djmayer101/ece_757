// Auto generated C++ code started by /filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/StateMachine.py:1367
// DMA: DMA Controller

#ifndef __DMA_PROFILE_DUMPER_HH__
#define __DMA_PROFILE_DUMPER_HH__

#include <cassert>
#include <iostream>
#include <vector>

#include "DMA_Event.hh"
#include "DMA_Profiler.hh"

typedef std::vector<DMA_Profiler *> DMA_profilers;

class DMA_ProfileDumper
{
  public:
    DMA_ProfileDumper();
    void registerProfiler(DMA_Profiler* profiler);
    void dumpStats(std::ostream& out) const;

  private:
    DMA_profilers m_profilers;
};

#endif // __DMA_PROFILE_DUMPER_HH__
