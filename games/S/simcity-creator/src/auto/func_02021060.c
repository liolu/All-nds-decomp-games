#include "m2c.h"

s8 func_020463a8(s32, s32);                         /* extern */
s32 func_02053114(M2C_UNK);                         /* extern */
s32 func_020537ec(s32);                             /* extern */

void func_02021060(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r5;
    s8 temp_r0;
    void *temp_r1;

    temp_r4 = func_02053114(arg1);
    var_r5  = 0;
    do {
        temp_r0 = func_020463a8(func_020537ec(temp_r4), var_r5);
        temp_r1 = arg2 + var_r5 + 0x34000;
        var_r5 += 1;
        M2C_FIELD(temp_r1, s8 *, 0x35C) = temp_r0;
    } while (var_r5 < 0xA);
}
