#include "m2c.h"

M2C_UNK func_0200766c(s32, s32, u32);               /* extern */
s32 func_02098d7c(u32 *, M2C_UNK);                  /* extern */
M2C_UNK func_02098e5c(u32, M2C_UNK);                /* extern */

s32 func_0209f0a4(s32 arg0, u32 arg1, M2C_UNK arg2) {
    u32 sp0;
    s32 temp_r0;
    s32 var_r7;
    u32 var_r6;

    var_r7 = arg0;
    var_r6 = arg1;
loop_1:
    temp_r0 = func_02098d7c(&sp0, arg2);
    if (sp0 == 0) {
        return -1;
    }
    if (sp0 > var_r6) {
        sp0 = var_r6;
    }
    func_0200766c(temp_r0, var_r7, sp0);
    func_02098e5c(sp0, arg2);
    var_r6 -= sp0;
    var_r7 += sp0;
    if ((s32) var_r6 <= 0) {
        return 0;
    }
    goto loop_1;
}
