#include "m2c.h"

M2C_UNK func_02073384(s32, s32);                    /* extern */
M2C_UNK func_02073da0(s32);                         /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */

void func_02073db4(void *arg0) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_02073da0(temp_r5);
            func_020934a8(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_02073384(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
        func_02073384(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 4)   = 0;
        M2C_FIELD(arg0, u8 *, 0x4C) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
