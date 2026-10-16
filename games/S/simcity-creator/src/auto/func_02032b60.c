#include "m2c.h"

M2C_UNK func_0200751c(s32, s32);                    /* extern */
M2C_UNK func_020080f0(s32);                         /* extern */
M2C_UNK func_02032ab0(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02032b60(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02032ab0(arg0, arg2, arg3);
    func_0200751c(arg0, arg0 + arg1);
    func_020080f0(arg0);
}
