#include "m2c.h"

s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
s32 func_020585a4(s32);                             /* extern */
s32 func_02058914(M2C_UNK);                         /* extern */
M2C_UNK func_0205893c(M2C_UNK, M2C_UNK);            /* extern */

void func_02059458(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_02019d04();
    temp_r4 = func_020585a4(arg1);
    if (arg0 == func_02058914(arg2)) {
        func_0205893c(arg2, 0);
    }
    func_020585a4(temp_r4);
    func_02019d18(temp_r5);
}
