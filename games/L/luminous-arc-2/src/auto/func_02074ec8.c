#include "m2c.h"

void *func_02074ec8(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(arg3, u8 *, 0x54) = (u8) *arg0;
    M2C_FIELD(arg3, u16 *, 8)   = (u16) (M2C_FIELD(arg3, u16 *, 8) | 0x20);
    return arg0 + 1;
}
