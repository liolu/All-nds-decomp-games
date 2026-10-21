#include "m2c.h"

void func_020cc4f8(void *arg0, s8 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5, u8 arg6, s32 arg7) {
    M2C_FIELD(arg0, u16 *, 4)    = 0xC880U;
    M2C_FIELD(arg0, s8 *, 0x1C)  = arg1;
    M2C_FIELD(arg0, s16 *, 6)    = arg4;
    M2C_FIELD(arg0, s16 *, 8)    = arg5;
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) arg7;
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (arg3 + (arg2 << 0x10));
    M2C_FIELD(arg0, s8 *, 0xF)   = 0;
    if (arg6 == 0x20) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 4)  = (u16) (M2C_FIELD(arg0, u16 *, 4) | 4);
    M2C_FIELD(arg0, u8 *, 0xE) = arg6;
}
