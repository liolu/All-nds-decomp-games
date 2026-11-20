#include "m2c.h"

s32 func_020bb09c(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_020bb198(M2C_UNK *);                       /* extern */
M2C_UNK func_020bb2bc(M2C_UNK *);                   /* extern */

s32 func_020bb4b0(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_020bb09c(sp0, arg0, arg1) == 0) || (func_020bb198(sp0) == 0)) {
        return 0;
    }
    func_020bb2bc(sp0);
    return 1;
}
