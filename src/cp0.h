#include <cstdint>

struct CP0 {
    CP0(): registers_{ 0 } {
        // TODO: are these necessary?
        registers_[Compare] = 0xffffffff;
        registers_[EBase] = 0x80000180;
    }

    enum { 
        SR = 12, 
        Cause = 13,
        EPC = 14,
        Count = 9,
        Compare = 11,
        BadVAddr = 8,
        Context = 4,
        EntryHi = 10,
        EntryLo0 = 2,
        EntryLo1 = 3,
        Index = 0,
        EBase = 15
    };

    enum {
        // ExcCode field in Cause
        Exc_Int = 0,
        Exc_Mod = 1,
        Exc_TLBL = 2,
        Exc_TLBS = 3,
        Exc_AdEL = 4,
        Exc_AdES = 5,
        Exc_Syscall = 8,
        Exc_RI = 10
    };
    
    enum {
        // IP7-0 field in Cause
        IP_0 = 1,
        IP_1 = 2,
        IP_2 = 4,
        IP_3 = 8,
        IP_4 = 16,
        IP_5 = 32,
        IP_6 = 64,
        IP_7 = 128
    };

    uint32_t registers_[32];
};
