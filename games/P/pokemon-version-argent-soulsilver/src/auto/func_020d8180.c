#include "m2c.h"

M2C_UNK func_020d7f98(M2C_UNK *);                   /* extern */
s32 func_020d7fc0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_020d8180(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_020d7f98(sp0);
    if (func_020d7fc0(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
