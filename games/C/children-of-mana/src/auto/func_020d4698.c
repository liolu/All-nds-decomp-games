/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020a4c1c(s32);                         /* extern */

void func_020d4698(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_020a4c1c(M2C_FIELD((arg0 + (var_r4 * 4)), s32 *, 0x64));
        var_r4 += 1;
    } while (var_r4 < 2);
}
