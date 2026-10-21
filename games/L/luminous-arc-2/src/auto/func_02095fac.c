#include "m2c.h"

s32 func_02095f6c();                                /* extern */
extern M2C_UNK data_02170d04;

s32 func_02095fac(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (func_02095f6c() == 0) {
        var_r4 = M2C_FIELD(&data_02170d04, s32 *, 0x2C);
    }
    return var_r4;
}
