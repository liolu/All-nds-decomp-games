#include "m2c.h"

s32 func_01ff801c();                                /* extern */
s32 func_0200678c(s32);                             /* extern */
s32 func_020070c0(s32, s32);                        /* extern */

s32 func_02018d84(s32 arg0) {
    s32 temp_r0;

    if (func_0200678c(arg0 + 0x14) == 0) {
        return 0;
    }
    temp_r0 = func_020070c0(func_01ff801c(), arg0 + 0x14);
    if (temp_r0 != 0) {
        return temp_r0 + 0x10;
    }
    return 0;
}
