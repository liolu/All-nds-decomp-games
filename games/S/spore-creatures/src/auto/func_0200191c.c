#include "m2c.h"

s32 func_0200191c(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= (u32) M2C_FIELD(arg0, u32 *, 4)) {
        return 1;
    }
    return 0;
}
