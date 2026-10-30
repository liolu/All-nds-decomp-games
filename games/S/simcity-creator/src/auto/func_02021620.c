#include "m2c.h"

s32 func_02021620(void *arg0) {
    if (((s32) M2C_FIELD(arg0, u8 *, 0x3C) >> (M2C_FIELD(arg0, s32 *, 0x34FC) + 1)) & 1) {
        return 1;
    }
    return 0;
}
