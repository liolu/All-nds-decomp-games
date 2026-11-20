#include "m2c.h"

M2C_UNK func_020a6648(s32 *);                       /* extern */
s32 func_020a68a0(s32);                             /* extern */

void func_020a7dc4(void *arg0) {
    s32 sp0;
    s32 var_r5;

    var_r5 = M2C_FIELD(arg0, s32 *, 0x7D8);
    if (var_r5 == 0) {
        return;
    }
    sp0 = var_r5;
    if (var_r5 != 0) {
        do {
            var_r5 = func_020a68a0(var_r5);
            func_020a6648(&sp0);
            sp0 = var_r5;
        } while (var_r5 != 0);
    }
    M2C_FIELD(arg0, s32 *, 0x7D8) = 0;
}
