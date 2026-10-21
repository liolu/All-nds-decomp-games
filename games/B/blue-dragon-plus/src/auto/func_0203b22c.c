#include "m2c.h"

M2C_UNK func_0203772c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203a56c();                            /* extern */
M2C_UNK func_0203a580();                            /* extern */

void func_0203b22c(s32 arg0, s32 arg1, s32 arg2) {
    func_0203a56c();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_0203772c(arg0 + 0x3C + (arg1 * 4), 4);
    func_0203a580();
}
