#include "m2c.h"

s32 func_02046284(void *arg0, u32 arg1) {
    if (arg1 < 0x14U) {
        M2C_FIELD(arg0, s8 *, 0x43) = (s8) arg1;
        return 1;
    }
    return 0;
}
