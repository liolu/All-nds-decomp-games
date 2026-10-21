#include "m2c.h"

M2C_UNK func_0200abc4();                            /* extern */
M2C_UNK func_0202b09c(s32, s32, M2C_UNK, u8);       /* extern */
M2C_UNK func_0202b14c(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0202b1e8(s32, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_0202af68(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6, u8 arg7, u8 arg8) {
    func_0200abc4();
    if (arg8 & 1) {
        func_0202b09c(arg1, arg4, arg2, arg7);
    }
    if (arg8 & 2) {
        func_0202b14c(arg1 + 0x10, arg4, arg3);
    }
    if (!(arg8 & 4)) {
        return;
    }
    func_0202b1e8(arg1 + 0x20, arg4, arg2, arg3, arg5, arg6);
}
