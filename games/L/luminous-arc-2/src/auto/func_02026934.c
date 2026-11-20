#include "m2c.h"

M2C_UNK func_02007e64(s32, s32);                    /* extern */
M2C_UNK func_02008c64(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02008c98(M2C_UNK, M2C_UNK);                /* extern */

void func_02026934(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_02008c98(arg2, arg3)) {
        func_02008c64(arg2, arg3, 0);
    }
    func_02007e64(arg0, arg0 + arg1);
}
