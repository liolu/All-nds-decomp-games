#include "m2c.h"

void *func_02074bd4(s8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(arg3, s16 *, 0x58) = (s16) (M2C_FIELD(arg3, s16 *, 0x58) + (*arg0 * 4));
    M2C_FIELD(arg3, u16 *, 8)    = (u16) (M2C_FIELD(arg3, u16 *, 8) | 0x10);
    return arg0 + 1;
}
