#include "m2c.h"

void func_02065024(void *arg0, void *arg1) {
    if (arg0 == arg1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
}
