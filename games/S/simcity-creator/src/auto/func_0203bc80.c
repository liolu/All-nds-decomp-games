#include "m2c.h"

s32 func_0203bc80(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 == 1) {
        return 1;
    }
    if (((s32) ((s32) M2C_FIELD(arg0, u16 *, 0x94) >> ((arg1 - 1) * 2)) >> (arg2 - 2)) & 1) {
        return 1;
    }
    return 0;
}
