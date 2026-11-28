#include "m2c.h"

M2C_UNK func_020358c0(s32);                         /* extern */
s32 func_0203599c(s32);                             /* extern */
M2C_UNK func_02036024(s32, s32, M2C_UNK, s32);      /* extern */
s32 func_0203bedc();                                /* extern */
s32 func_0205323c();                                /* extern */
s32 func_02053284();                                /* extern */
M2C_UNK func_020565d0();                            /* extern */

void func_02058238(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg0 == 0) {
        return;
    }
    func_020565d0();
    if (func_0203599c(arg0) == 0) {
        return;
    }
    temp_r5 = func_0203bedc();
    func_020358c0(arg0);
    temp_r4 = func_02053284();
    func_020358c0(arg0);
    func_02036024(temp_r5, temp_r4, 1, func_0205323c());
}
