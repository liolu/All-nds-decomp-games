#include "m2c.h"

M2C_UNK func_02008cc0(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
u32 func_020099f8(M2C_UNK, M2C_UNK);                /* extern */

void func_02009338(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u32 temp_r0;

    temp_r0 = func_020099f8(arg2, 0);
    func_02008cc0(arg0 - ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1), arg1, arg2, arg3, 0);
}
