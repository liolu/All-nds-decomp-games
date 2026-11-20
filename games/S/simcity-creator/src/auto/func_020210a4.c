#include "m2c.h"

M2C_UNK func_02046394(s32, s32, s8);                /* extern */
s32 func_02053114(M2C_UNK);                         /* extern */
s32 func_020537ec(s32);                             /* extern */

void func_020210a4(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r5;
    s32 var_r6;

    temp_r5 = func_02053114(arg1);
    var_r6  = 0;
    do {
        func_02046394(func_020537ec(temp_r5), var_r6, M2C_FIELD((arg2 + var_r6), s8 *, 0x3435C));
        var_r6 += 1;
    } while (var_r6 < 0xA);
}
