#ifndef __PARAMS__RubyNetwork__
#define __PARAMS__RubyNetwork__

class Network;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/RubySystem.hh"
#include <cstddef>
#include "params/Topology.hh"

#include "params/ClockedObject.hh"

struct RubyNetworkParams
    : public ClockedObjectParams
{
    int control_msg_size;
    int number_of_virtual_networks;
    RubySystem * ruby_system;
    Topology * topology;
};

#endif // __PARAMS__RubyNetwork__
