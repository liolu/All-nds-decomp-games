#include "m2c.h"

M2C_UNK func_0200a714(M2C_UNK *);                   /* extern */
s32 func_0200a73c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_0200a8fc(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_0200a714(sp0);
    if (func_0200a73c(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
