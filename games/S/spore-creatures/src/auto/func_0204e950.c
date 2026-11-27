#include "m2c.h"

s32 func_0204e950(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x70) >> 1) & 1) {
        return 1;
    }
    return 0;
}
