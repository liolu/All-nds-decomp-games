#include "m2c.h"

M2C_UNK func_0203cd78(M2C_UNK *);                   /* extern */
s32 func_0203cda0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_0203cf60(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_0203cd78(sp0);
    if (func_0203cda0(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
