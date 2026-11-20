#include "m2c.h"

M2C_UNK func_020ba78c(M2C_UNK *);                   /* extern */
s32 func_020ba7b4(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_020ba974(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_020ba78c(sp0);
    if (func_020ba7b4(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
