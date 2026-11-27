#include "m2c.h"

extern M2C_UNK data_020f5588;

void func_0203ea80(s32 arg0, void *arg1) {
    s16 temp_r0_2;
    s16 temp_r3;
    s32 temp_r0;

    temp_r0                      = (arg0 >> 4) * 2;
    temp_r3                      = *((s16 *) ((s8 *) &data_020f5588 + ((temp_r0 + 1) * 2)));
    temp_r0_2                    = 0 - *((s16 *) ((s8 *) &data_020f5588 + (temp_r0 * 2)));
    M2C_FIELD(arg1, s32 *, 0)    = (s32) temp_r3;
    M2C_FIELD(arg1, s32 *, 4)    = (s32) temp_r0_2;
    M2C_FIELD(arg1, s32 *, 8)    = 0;
    M2C_FIELD(arg1, s32 *, 0xC)  = (s32) (0 - temp_r0_2);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) temp_r3;
    M2C_FIELD(arg1, s32 *, 0x14) = 0;
    M2C_FIELD(arg1, s32 *, 0x18) = 0;
    M2C_FIELD(arg1, s32 *, 0x1C) = 0;
    M2C_FIELD(arg1, s32 *, 0x20) = 0x1000;
}
