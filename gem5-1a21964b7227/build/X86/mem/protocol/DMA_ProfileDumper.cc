// Auto generated C++ code started by /filespace/people/c/collinsm/ece757/project/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/StateMachine.py:1428
// DMA: DMA Controller

#include "mem/protocol/DMA_ProfileDumper.hh"

DMA_ProfileDumper::DMA_ProfileDumper()
{
}

void
DMA_ProfileDumper::registerProfiler(DMA_Profiler* profiler)
{
    m_profilers.push_back(profiler);
}

void
DMA_ProfileDumper::dumpStats(std::ostream& out) const
{
    out << " --- DMA ---\n";
    out << " - Event Counts -\n";
    for (DMA_Event event = DMA_Event_FIRST;
         event < DMA_Event_NUM;
         ++event) {
        out << (DMA_Event) event << " [";
        uint64 total = 0;
        for (int i = 0; i < m_profilers.size(); i++) {
             out << m_profilers[i]->getEventCount(event) << " ";
             total += m_profilers[i]->getEventCount(event);
        }
        out << "] " << total << "\n";
    }
    out << "\n";
    out << " - Transitions -\n";
    for (DMA_State state = DMA_State_FIRST;
         state < DMA_State_NUM;
         ++state) {
        for (DMA_Event event = DMA_Event_FIRST;
             event < DMA_Event_NUM;
             ++event) {
            if (m_profilers[0]->isPossible(state, event)) {
                out << (DMA_State) state << "  "
                    << (DMA_Event) event << " [";
                uint64 total = 0;
                for (int i = 0; i < m_profilers.size(); i++) {
                     out << m_profilers[i]->getTransitionCount(state, event) << " ";
                     total += m_profilers[i]->getTransitionCount(state, event);
                }
                out << "] " << total << "\n";
            }
        }
        out << "\n";
    }
}
