#include "m2c.h"

s32 func_0200a4a0(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0200a59c(M2C_UNK *);                       /* extern */
M2C_UNK func_0200a6c0(M2C_UNK *);                   /* extern */

s32 func_0200a8b4(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_0200a4a0(sp0, arg0, arg1) == 0) || (func_0200a59c(sp0) == 0)) {
        return 0;
    }
    func_0200a6c0(sp0);
    return 1;
}
