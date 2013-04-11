// Auto generated C++ code started by /filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/StateMachine.py:1367
// Directory: Directory protocol

#ifndef __Directory_PROFILE_DUMPER_HH__
#define __Directory_PROFILE_DUMPER_HH__

#include <cassert>
#include <iostream>
#include <vector>

#include "Directory_Event.hh"
#include "Directory_Profiler.hh"

typedef std::vector<Directory_Profiler *> Directory_profilers;

class Directory_ProfileDumper
{
  public:
    Directory_ProfileDumper();
    void registerProfiler(Directory_Profiler* profiler);
    void dumpStats(std::ostream& out) const;

  private:
    Directory_profilers m_profilers;
};

#endif // __Directory_PROFILE_DUMPER_HH__
