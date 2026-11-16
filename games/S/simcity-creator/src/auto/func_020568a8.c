/* compiler: 2.0/sp1p5 -O1,p */
#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02056bd0();                                /* extern */
M2C_UNK func_02056bf8(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_020568a8(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r0;
    s32 var_r5;

    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    var_r5                       = 0;
    do {
        var_r0 = func_020348ec(0x54);
        if (var_r0 != 0) {
            var_r0 = func_02056bd0();
        }
        M2C_FIELD((arg0 + (var_r5 * 4)), s32 *, 4) = var_r0;
        func_02056bf8(var_r0, arg1, arg2, arg3);
        var_r5 += 1;
    } while (var_r5 < 9);
}
