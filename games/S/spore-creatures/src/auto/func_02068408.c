#include "m2c.h"

s32 func_020683f8();                                /* extern */
s32 func_02068400();                                /* extern */
M2C_UNK func_02084c28(s32, s32);                    /* extern */
extern M2C_UNK data_020e10ac;

s32 func_02068408(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 <= 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0) {
        var_r4 = 0;
    }
    M2C_FIELD(&data_020e10ac, s32 *, 0x31C) = (s32) (var_r4 + func_02068400());
    if (var_r4 > 0) {
        func_02084c28(func_020683f8(), M2C_FIELD(&data_020e10ac, s32 *, 0x31C));
    }
    return var_r4;
}
