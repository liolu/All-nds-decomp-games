#include "m2c.h"

s32 func_02021644(void *arg0, s32 arg1) {
    if (((s32) M2C_FIELD(arg0, u8 *, 0x3C) >> (arg1 + 1)) & 1) {
        return 1;
    }
    return 0;
}
