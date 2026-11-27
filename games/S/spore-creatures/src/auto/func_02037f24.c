#include "m2c.h"

M2C_UNK func_01ffba64(s32, M2C_UNK, u32);           /* extern */
M2C_UNK func_02037e18();                            /* extern */

void func_02037f24(void *arg0, M2C_UNK arg1, u32 arg2) {
    func_02037e18();
    func_01ffba64(M2C_FIELD(arg0, s32 *, 0x34) + (M2C_FIELD(arg0, s32 *, 0x3C) * 4), arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + (arg2 >> 2));
}
