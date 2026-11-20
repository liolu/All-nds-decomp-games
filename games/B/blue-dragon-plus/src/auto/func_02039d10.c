#include "engine.h"
#include "m2c.h"

void func_02039d10(s32 arg0, s32 arg1, s32 arg2) {
    s8 var_r3;

    M2C_FIELD(arg0, s32 *, 0)   = arg1;
    var_r3                      = 0;
    M2C_FIELD(arg0, u32 *, 4)   = (u32) ((u32) * (M2C_UNK *) arg2 >> 8);
    M2C_FIELD(arg0, s8 *, 0xF)  = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 3;
    M2C_FIELD(arg0, s16 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0xE)  = 0;
    if (((u32) (*(M2C_UNK *) arg2 << 0x1C) >> 0x1C) != 0) {
        var_r3 = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x12) = var_r3;
}
