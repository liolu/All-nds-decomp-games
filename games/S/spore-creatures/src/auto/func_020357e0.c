#include "m2c.h"

M2C_UNK func_0203505c(void *, M2C_UNK *);           /* extern */
s32 func_020358a0(M2C_UNK *, M2C_UNK);              /* extern */

s32 func_020357e0(void *arg0) {
    u8 sp0[64];
    s32 var_r4;

    var_r4 = 1;
    func_0203505c(arg0, sp0);
    if ((func_020358a0(sp0, 0x1F) <= 0) && (M2C_FIELD(arg0, u8 *, 0xE4) == 0)) {
        var_r4 = 0;
    }
    return var_r4;
}
