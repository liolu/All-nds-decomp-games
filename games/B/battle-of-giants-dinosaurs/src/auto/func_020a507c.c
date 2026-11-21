#include "m2c.h"

s32 func_020a507c(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) <= (u32) M2C_FIELD(arg0, u32 *, 0x48)) {
        return 1;
    }
    return 0;
}
