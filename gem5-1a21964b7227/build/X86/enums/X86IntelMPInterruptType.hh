#ifndef __ENUM__X86IntelMPInterruptType__
#define __ENUM__X86IntelMPInterruptType__

namespace Enums {
    enum X86IntelMPInterruptType {
        ExtInt = 3,
        INT = 0,
        NMI = 1,
        SMI = 2,
        Num_X86IntelMPInterruptType = 4
    };
extern const char *X86IntelMPInterruptTypeStrings[Num_X86IntelMPInterruptType];
}

#endif // __ENUM__X86IntelMPInterruptType__
