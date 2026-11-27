#include "m2c.h"

extern M2C_UNK data_020ae400;

s16 func_0200a48c(s32 arg0) {
    s16 var_r2;

    var_r2 = 0;
    if ((arg0 != 0) && (arg0 != 2)) {

    } else {
        var_r2 |= M2C_FIELD(&data_020ae400, s16 *, 2);
    }
    if ((u32) (arg0 - 1) <= 1U) {
        var_r2 |= M2C_FIELD(&data_020ae400, s16 *, 0xA);
    }
    return var_r2;
}
