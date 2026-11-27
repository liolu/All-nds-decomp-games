#include "m2c.h"

void func_02077508(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x110);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x114);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x118);
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1000;
    if (M2C_FIELD(arg0, u8 *, 0x122) != 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, s16 *, 0x11C);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg0, s16 *, 0x11E);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg0, s16 *, 0x120);
    M2C_FIELD(arg0, s8 *, 0x2E)  = 1;
}
