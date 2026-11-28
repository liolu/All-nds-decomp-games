#include "m2c.h"

M2C_UNK func_0207432c();                            /* extern */

void func_02097ae8(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = (arg1 * 0x1C) + (arg0 + 4);
    if (M2C_FIELD(temp_r4, s32 *, 0xC) != 0) {
        func_0207432c();
        M2C_FIELD(temp_r4, s32 *, 0xC) = 0;
    }
    M2C_FIELD((arg0 + arg1), s8 *, 0x250) = 0;
}
