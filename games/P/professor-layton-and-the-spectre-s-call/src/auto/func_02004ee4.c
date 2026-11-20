#include "m2c.h"

M2C_UNK func_020187e0(s32, s32);                    /* extern */
M2C_UNK func_020195cc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02019600(M2C_UNK, M2C_UNK);                /* extern */

void func_02004ee4(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_02019600(arg2, arg3)) {
        func_020195cc(arg2, arg3, 0);
    }
    func_020187e0(arg0, arg0 + arg1);
}
