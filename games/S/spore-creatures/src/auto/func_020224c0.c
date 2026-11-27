#include "m2c.h"

void func_020224c0(void *arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, u16 arg5) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
    }
    M2C_FIELD(arg0, s32 *, 0)   = arg1;
    M2C_FIELD(arg0, s32 *, 4)   = arg2;
    M2C_FIELD(arg0, u16 *, 8)   = arg3;
    M2C_FIELD(arg0, u16 *, 0xA) = arg4;
    M2C_FIELD(arg0, u16 *, 0xC) = arg5;
}
