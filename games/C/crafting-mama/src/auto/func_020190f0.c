#include "m2c.h"

M2C_UNK func_02019054(M2C_UNK, s32);                /* extern */

void func_020190f0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    func_02019054(arg0, arg2 | (arg1 & (-0x1000 << ((u32) (arg2 - 0x16) >> 1))) | 1);
}
