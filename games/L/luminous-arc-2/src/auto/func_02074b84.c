#include "m2c.h"

void *func_02074b84(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(arg3, u8 *, 0x5C) = (u8) *arg0;
    return arg0 + 1;
}
