#include "m2c.h"

extern s32 data_02175a48;

void func_0203f870(s32 arg0) {
    s32 temp_r3;

    temp_r3                                          = arg0 * 0x44;
    M2C_FIELD((data_02175a48 + temp_r3), s8 *, 0x28) = 0;
    M2C_FIELD((data_02175a48 + temp_r3), s8 *, 0x29) = 0;
    M2C_FIELD((data_02175a48 + temp_r3), s8 *, 0x2A) = 0;
    M2C_FIELD((data_02175a48 + temp_r3), s8 *, 0x2C) = 0;
}
