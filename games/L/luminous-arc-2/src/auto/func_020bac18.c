#include "m2c.h"

M2C_UNK func_02018e4c(s32, s32, s32);               /* extern */
s32 func_0201b47c(s32);                             /* extern */

void func_020bac18(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r5;

    var_r5 = arg2;
    if ((arg1 != 0) && (var_r5 != 0)) {
        if (var_r5 == -1) {
            var_r5 = func_0201b47c(arg1);
        }
        func_02018e4c(M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8), arg1, var_r5);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + var_r5);
    }
}
