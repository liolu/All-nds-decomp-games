#include "m2c.h"

M2C_UNK func_02016d0c();                            /* extern */
M2C_UNK func_02017364();                            /* extern */
s32 func_020182d4();                                /* extern */
M2C_UNK func_02019740();                            /* extern */
s32 func_020198f8(M2C_UNK);                         /* extern */
s32 func_020199ac(s32, s32);                        /* extern */

void func_02057a0c(s32 arg0, M2C_UNK arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    s32 temp_r4;
    s32 temp_r5;

    func_020199ac(0x3C8EFA33, func_020198f8(arg1));
    func_02019740();
    func_02017364();
    temp_r5 = func_020182d4();
    func_020199ac(0x3C8EFA33, func_020198f8(arg1));
    func_02019740();
    func_02016d0c();
    temp_r4 = func_020182d4();
    *arg3   = func_020199ac(temp_r5, arg2);
    *arg4   = func_020199ac(temp_r4, arg2);
}
