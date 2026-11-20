#include "m2c.h"

M2C_UNK func_020cd7d0(s32);                         /* extern */
s32 func_020cdd14(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020ce208(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_020cde1c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r0;

    temp_r0 = func_020cdd14(arg1, 0);
    func_020ce208(arg0, temp_r0, arg2, arg3, arg4);
    func_020cd7d0(temp_r0);
}
