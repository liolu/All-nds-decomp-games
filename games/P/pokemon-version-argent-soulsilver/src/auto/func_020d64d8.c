#include "m2c.h"

M2C_UNK func_020d2878(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d5508();                            /* extern */
M2C_UNK func_020d551c();                            /* extern */

void func_020d64d8(s32 arg0, s32 arg1, s32 arg2) {
    func_020d5508();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020d2878(arg0 + 0x3C + (arg1 * 4), 4);
    func_020d551c();
}
