#include "m2c.h"

s32 func_0201b47c();                                /* extern */
M2C_UNK func_0201b498(s32, s32);                    /* extern */
s32 func_020ab2dc(s32);                             /* extern */

s32 func_020aad3c(s32 arg0) {
    s32 temp_r0;

    if (arg0 == 0) {
        return 0;
    }
    temp_r0 = func_020ab2dc(func_0201b47c() + 1);
    if (temp_r0 != 0) {
        func_0201b498(temp_r0, arg0);
    }
    return temp_r0;
}
