/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020a39e0(s32, M2C_UNK);                /* extern */

void func_020a3f0c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
    do {
        temp_r0 = M2C_FIELD((arg0 + (var_r4 * 4)), s32 *, 0x3C);
        if (temp_r0 != 0) {
            func_020a39e0(temp_r0, arg1);
        }
        var_r4 += 1;
    } while (var_r4 < 0x40);
}
