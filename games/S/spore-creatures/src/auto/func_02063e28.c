#include "m2c.h"

s32 func_02063b14(M2C_UNK, s32);                    /* extern */
M2C_UNK func_ov001_02109b30(M2C_UNK *);             /* extern */
s32 func_ov001_02109bbc(M2C_UNK *, s32);            /* extern */

s32 func_02063e28(M2C_UNK arg0) {
    u8 sp0[12];
    s32 var_r5;

    func_ov001_02109b30(sp0);
    var_r5 = 0;
loop_1:
    if (func_ov001_02109bbc(sp0, func_02063b14(arg0, var_r5)) != 0) {
        return 1;
    }
    var_r5 += 1;
    if (var_r5 >= 0x40) {
        return 0;
    }
    goto loop_1;
}
