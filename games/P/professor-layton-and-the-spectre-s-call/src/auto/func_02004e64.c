#include "m2c.h"

M2C_UNK func_020187c0(s32, s32);                    /* extern */
M2C_UNK func_02019318(s32);                         /* extern */
M2C_UNK func_02004e0c(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02004e64(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02004e0c(arg0, arg2, arg3);
    func_020187c0(arg0, arg0 + arg1);
    func_02019318(arg0);
}
