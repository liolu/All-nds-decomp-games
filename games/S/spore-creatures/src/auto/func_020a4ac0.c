#include "m2c.h"

void func_020a4ac0(void *arg0, void *arg1, void *arg2, void *arg3) {
    M2C_FIELD(arg0, s32 *, 0)    = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(arg2, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg2, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(arg2, u16 *, 4);
}
