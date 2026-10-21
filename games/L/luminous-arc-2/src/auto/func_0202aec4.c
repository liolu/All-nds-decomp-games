#include "m2c.h"

M2C_UNK func_0200abc4();                            /* extern */
M2C_UNK func_0202b238(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0202b298(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_0202aec4(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, u8 arg6) {
    func_0200abc4();
    if (arg6 & 1) {
        func_0202b238(arg1, arg4, arg2);
    }
    if (!(arg6 & 2)) {
        return;
    }
    func_0202b298(arg1 + 0x10, arg4, arg3, 1);
}
