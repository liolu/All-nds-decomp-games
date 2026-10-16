#include "m2c.h"

s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
s32 func_02085bb0(s32);                             /* extern */
s32 func_02085f7c(M2C_UNK);                         /* extern */
M2C_UNK func_02085fa4(M2C_UNK, M2C_UNK);            /* extern */

void func_020895a4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_020b6bd0();
    temp_r4 = func_02085bb0(arg1);
    if (arg0 == func_02085f7c(arg2)) {
        func_02085fa4(arg2, 0);
    }
    func_02085bb0(temp_r4);
    func_020b6be4(temp_r5);
}
