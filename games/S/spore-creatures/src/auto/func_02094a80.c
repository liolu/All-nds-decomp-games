#include "m2c.h"

s32 func_020949f8(M2C_UNK *);                       /* extern */
M2C_UNK func_02094a40(M2C_UNK *);                   /* extern */
M2C_UNK func_020bdb10(M2C_UNK);                     /* extern */
s32 func_020be1b8(s32);                             /* extern */

s32 func_02094a80(void) {
    M2C_UNK sp0;
    s32 var_r4;

    func_020bdb10(1);
    if (func_020949f8(&sp0) == 0) {
        return 0;
    }
    if (func_020be1b8(0x1202) != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02094a40(&sp0);
    return var_r4;
}
