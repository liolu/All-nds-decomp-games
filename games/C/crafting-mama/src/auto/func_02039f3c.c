#include "m2c.h"

M2C_UNK func_0205ecac(s32 *, s32 *);                /* extern */

s32 func_02039f3c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4;
    s32 sp0;
    s32 var_r4;
    s32 var_r6;

    var_r4 = arg2 - M2C_FIELD(arg0, s16 *, 8);
    var_r6 = arg3 - M2C_FIELD(arg0, s16 *, 0xA);
    if (M2C_FIELD(arg0, s32 *, 4) & 0x10000) {
        sp4 = 0;
        sp0 = 0;
        func_0205ecac(&sp4, &sp0);
        var_r4 -= sp4;
        var_r6 -= sp0;
    }
    if ((s32) ((var_r4 * var_r4) + (var_r6 * var_r6)) < (s32) (arg1 * arg1)) {
        return 1;
    }
    return 0;
}
