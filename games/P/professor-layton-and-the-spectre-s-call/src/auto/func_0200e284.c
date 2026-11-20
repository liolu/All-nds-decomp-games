#include "m2c.h"

M2C_UNK func_0200e2d0(s32, s32, M2C_UNK);           /* extern */
s32 func_0200f3f0();                                /* extern */
extern s32 data_020348e0;

void func_0200e284(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_0200f3f0() != 0) {
        M2C_FIELD((data_020348e0 + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_0200e2d0(arg0, arg1, arg2);
}
