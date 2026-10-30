#include "m2c.h"

s32 func_020761ac(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 0xF0) << 0x1F) >> 0x1F) == 1) {
        return 1;
    }
    return 0;
}
