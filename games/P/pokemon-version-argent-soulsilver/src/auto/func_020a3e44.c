#include "m2c.h"

s32 func_020a3e04();                                /* extern */
extern M2C_UNK data_021d4640;

s32 func_020a3e44(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (func_020a3e04() == 0) {
        var_r4 = M2C_FIELD(&data_021d4640, s32 *, 0x2C);
    }
    return var_r4;
}
