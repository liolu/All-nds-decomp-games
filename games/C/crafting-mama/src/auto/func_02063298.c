#include "m2c.h"

M2C_UNK func_02063778(s32, s32);                    /* extern */

void func_02063298(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    if (arg1 >= 2) {
        return;
    }
    temp_r0 = M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x54);
    if ((temp_r0 != 0) && (arg2 != 4)) {
        func_02063778(temp_r0, arg2);
    }
}
