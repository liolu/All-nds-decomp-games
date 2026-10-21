#include "m2c.h"

s32 func_0203d640(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0203d73c(M2C_UNK *);                       /* extern */
M2C_UNK func_0203d860(M2C_UNK *);                   /* extern */

s32 func_0203da54(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_0203d640(sp0, arg0, arg1) == 0) || (func_0203d73c(sp0) == 0)) {
        return 0;
    }
    func_0203d860(sp0);
    return 1;
}
