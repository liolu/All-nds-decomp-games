#include "m2c.h"

void func_020642e0(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg1, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg1, u16 *, 0)    = (u16) M2C_FIELD(arg0, u16 *, 4);
}
