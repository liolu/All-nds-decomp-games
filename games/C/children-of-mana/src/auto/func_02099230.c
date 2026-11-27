#include "m2c.h"

s32 func_02099230(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) <= 1U) {
        return 1;
    }
    return 0;
}
