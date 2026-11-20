#include "m2c.h"

M2C_UNK func_02009bf8(M2C_UNK *);                   /* extern */
s32 func_02009c20(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_02009de0(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_02009bf8(sp0);
    if (func_02009c20(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
