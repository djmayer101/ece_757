/** \file DMA_Controller.hh
 *
 * Auto generated C++ code started by /filespace/people/n/nhaas/ECE757/ece_757/gem5-1a21964b7227/src/mem/slicc/symbols/StateMachine.py:239
 * Created by slicc definition of Module "DMA Controller"
 */

#ifndef __DMA_CONTROLLER_HH__
#define __DMA_CONTROLLER_HH__

#include <iostream>
#include <sstream>
#include <string>

#include "mem/protocol/DMA_ProfileDumper.hh"
#include "mem/protocol/DMA_Profiler.hh"
#include "mem/protocol/TransitionResult.hh"
#include "mem/protocol/Types.hh"
#include "mem/ruby/common/Consumer.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/slicc_interface/AbstractController.hh"
#include "params/DMA_Controller.hh"
#include "mem/protocol/MessageBuffer.hh"
#include "mem/protocol/DMA_State.hh"
extern std::stringstream DMA_transitionComment;

class DMA_Controller : public AbstractController
{
  public:
    typedef DMA_ControllerParams Params;
    DMA_Controller(const Params *p);
    static int getNumControllers();
    void init();
    MessageBuffer* getMandatoryQueue() const;
    const int & getVersion() const;
    const std::string toString() const;
    const std::string getName() const;
    void stallBuffer(MessageBuffer* buf, Address addr);
    void wakeUpBuffers(Address addr);
    void wakeUpAllBuffers();
    void initNetworkPtr(Network* net_ptr) { m_net_ptr = net_ptr; }
    void print(std::ostream& out) const;
    void wakeup();
    void printStats(std::ostream& out) const;
    void clearStats();
    void blockOnQueue(Address addr, MessageBuffer* port);
    void unblock(Address addr);
    void recordCacheTrace(int cntrl, CacheRecorder* tr);
    Sequencer* getSequencer() const;

    bool functionalReadBuffers(PacketPtr&);
    uint32_t functionalWriteBuffers(PacketPtr&);

private:
    DMASequencer* m_dma_sequencer_ptr;
    Cycles m_request_latency;
    TransitionResult doTransition(DMA_Event event,
                                  const Address& addr);

    TransitionResult doTransitionWorker(DMA_Event event,
                                        DMA_State state,
                                        DMA_State& next_state,
                                        const Address& addr);

    static DMA_ProfileDumper s_profileDumper;
    DMA_Profiler m_profiler;
    static int m_num_controllers;

    // Internal functions
    DMA_State getState(const Address& param_addr);
    void setState(const Address& param_addr, const DMA_State& param_state);
    AccessPermission getAccessPermission(const Address& param_addr);
    void setAccessPermission(const Address& param_addr, const DMA_State& param_state);
    DataBlock& getDataBlock(const Address& param_addr);

    // Actions
    /** \brief Send a DMA read request to memory */
    void s_sendReadRequest(const Address& addr);
    /** \brief Send a DMA write request to memory */
    void s_sendWriteRequest(const Address& addr);
    /** \brief Notify dma controller that write request completed */
    void a_ackCallback(const Address& addr);
    /** \brief Write data to dma sequencer */
    void d_dataCallback(const Address& addr);
    /** \brief Pop request queue */
    void p_popRequestQueue(const Address& addr);
    /** \brief Pop request queue */
    void p_popResponseQueue(const Address& addr);

    // Objects
    MessageBuffer* m_DMA_responseFromDir_ptr;
    MessageBuffer* m_DMA_reqToDirectory_ptr;
    MessageBuffer* m_DMA_mandatoryQueue_ptr;
    DMA_State* m_DMA_cur_state_ptr;
};
#endif // __DMA_CONTROLLER_H__
