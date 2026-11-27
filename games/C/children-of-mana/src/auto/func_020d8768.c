#include "m2c.h"

s32 func_020d8768(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x168) <= 1U) {
        return 1;
    }
    return 0;
}
