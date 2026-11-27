#include "m2c.h"

s32 func_0201466c(s32, s32, M2C_UNK *);             /* extern */
M2C_UNK func_020441f0(M2C_UNK, s32);                /* extern */

s32 func_02044328(s32 arg0) {
    M2C_UNK sp0;
    s32 temp_r4;

    temp_r4 = func_0201466c(arg0, 0x02360000, &sp0);
    if (arg0 & ~0xFF000000) {
        func_020441f0(1, arg0);
    }
    return temp_r4;
}
