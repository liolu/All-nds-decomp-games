#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02053d3c(s32);                             /* extern */
M2C_UNK func_02055ba4(s32, s32, M2C_UNK);           /* extern */

s32 func_020499e0(M2C_UNK arg0) {
    M2C_UNK var_r2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r6 = func_02012a90(arg0, 2);
    temp_r4 = func_02012a90(arg0, 3);
    if (func_02053d3c(temp_r5) != 0) {
        if (temp_r4 != 1) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        func_02055ba4(temp_r5, temp_r6, var_r2);
    }
    return 1;
}
