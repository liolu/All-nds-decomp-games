#include "m2c.h"

s32 func_0200b03c(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0200b138(M2C_UNK *);                       /* extern */
M2C_UNK func_0200b25c(M2C_UNK *);                   /* extern */

s32 func_0200b450(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_0200b03c(sp0, arg0, arg1) == 0) || (func_0200b138(sp0) == 0)) {
        return 0;
    }
    func_0200b25c(sp0);
    return 1;
}
