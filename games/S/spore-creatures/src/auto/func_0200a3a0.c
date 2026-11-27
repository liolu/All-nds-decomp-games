#include "m2c.h"

M2C_UNK func_02092c68(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
extern s32 data_027e05e8;

void func_0200a3a0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r0;

    if (data_027e05e8 & 8) {
        var_r0 = 0;
    } else {
        var_r0 = arg1;
    }
    func_02092c68(var_r0, arg2, (M2C_FIELD((arg0 + (arg1 * 0x10)), u16 *, 8) * 0x10) + 1, 0);
}
