#include "m2c.h"

s32 func_0204e914(s32, M2C_UNK);                    /* extern */
s32 func_0204e990(s32);                             /* extern */

s32 func_0204e968(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0204e914(arg0 + 0x10, 0x7F0);
    return temp_r4 ^ func_0204e990(arg0);
}
