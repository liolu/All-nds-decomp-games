#include "m2c.h"

void func_020b05d8(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg1, s16 *, 0)    = 0;
    M2C_FIELD(arg1, s32 *, 4)    = 0x1000;
    M2C_FIELD(arg1, s32 *, 8)    = 0x1000;
    M2C_FIELD(arg1, s32 *, 0xC)  = (s32) (arg2 << 0xC);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) (arg3 << 0xC);
    M2C_FIELD(arg1, s32 *, 0x1C) = 0x1000;
    M2C_FIELD(arg1, s32 *, 0x14) = 1;
    M2C_FIELD(arg1, s16 *, 0x18) = (s16) M2C_FIELD(arg0, s32 *, 4);
}
