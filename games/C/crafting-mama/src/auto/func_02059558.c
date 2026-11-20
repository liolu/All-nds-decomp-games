#include "m2c.h"

M2C_UNK func_0201ec94(s32, s32);                    /* extern */
M2C_UNK func_0201fa60(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0201fa94(M2C_UNK, M2C_UNK);                /* extern */

void func_02059558(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_0201fa94(arg2, arg3)) {
        func_0201fa60(arg2, arg3, 0);
    }
    func_0201ec94(arg0, arg0 + arg1);
}
