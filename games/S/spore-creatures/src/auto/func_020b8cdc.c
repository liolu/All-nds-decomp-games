#include "m2c.h"

M2C_UNK func_020b5ba4(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b7f98();                            /* extern */
M2C_UNK func_020b7fac();                            /* extern */

void func_020b8cdc(s32 arg0, s32 arg1, s32 arg2) {
    func_020b7f98();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020b5ba4(arg0 + 0x3C + (arg1 * 4), 4);
    func_020b7fac();
}
