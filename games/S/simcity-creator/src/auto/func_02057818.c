#include "m2c.h"

void func_02057818(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0)    = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 2)    = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, s16 *, 4)    = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6)    = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(arg1, s16 *, 0x10);
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg1, u16 *, 0x12);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg1, s16 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) M2C_FIELD(arg1, s16 *, 0x20);
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) M2C_FIELD(arg1, u16 *, 0x22);
}
