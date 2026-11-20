#include "m2c.h"

M2C_UNK func_0200abc4();                            /* extern */
M2C_UNK func_0202b09c(s32, s32, M2C_UNK, u8);       /* extern */
M2C_UNK func_0202b14c(s32, s32, M2C_UNK);           /* extern */

void func_0202ae74(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, u8 arg5, u8 arg6) {
    func_0200abc4();
    if (arg6 & 1) {
        func_0202b09c(arg1, arg4, arg2, arg5);
    }
    if (!(arg6 & 2)) {
        return;
    }
    func_0202b14c(arg1 + 0x10, arg4, arg3);
}
