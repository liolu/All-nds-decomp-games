#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
M2C_UNK func_02071018(s32, s32);                    /* extern */
extern M2C_UNK func_0207118c;

void func_020712c0(s32 *arg0) {
    s32 var_r4;

    if (arg0 != NULL) {
        M2C_FIELD(func_020291d0(&func_0207118c, 0x119), s32 **, 0x3C) = arg0;
        *arg0                                                         = 0;
        return;
    }
    var_r4 = 0;
    do {
        func_02071018(var_r4, var_r4);
        var_r4 += 1;
    } while (var_r4 < 4);
}
