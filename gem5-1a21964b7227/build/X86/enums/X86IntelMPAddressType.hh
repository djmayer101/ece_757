#ifndef __ENUM__X86IntelMPAddressType__
#define __ENUM__X86IntelMPAddressType__

namespace Enums {
    enum X86IntelMPAddressType {
        IOAddress = 0,
        MemoryAddress = 1,
        PrefetchAddress = 2,
        Num_X86IntelMPAddressType = 3
    };
extern const char *X86IntelMPAddressTypeStrings[Num_X86IntelMPAddressType];
}

#endif // __ENUM__X86IntelMPAddressType__
