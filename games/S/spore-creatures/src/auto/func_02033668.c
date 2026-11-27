#include "m2c.h"

M2C_UNK func_020ac26c(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020ac310(M2C_UNK, s32, M2C_UNK);       /* extern */

s32 func_02033668(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r8;
    s32 var_r9;

    if (arg2 == 1) {
        var_r8 = 0;
        do {
            func_020ac26c(arg1, arg0 + var_r8, 2);
            var_r8 += 1;
        } while (var_r8 < 0x14A);
    } else {
        var_r9 = 0;
        do {
            *(s8 *) (arg0 + var_r9) = 0;
            func_020ac310(arg1, arg0 + var_r9, 2);
            var_r9 += 1;
        } while (var_r9 < 0x14A);
    }
    return 1;
}