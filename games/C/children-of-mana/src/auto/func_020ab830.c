/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020ddbb0();                            /* extern */

void func_020ab830(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    do {
        if (M2C_FIELD((arg0 + (var_r4 * 4)), s32 *, 0x1668) != 0) {
            func_020ddbb0();
        }
        var_r4 += 1;
    } while (var_r4 < 0x10);
}
