#include "m2c.h"

s32 func_02095f6c();                                /* extern */
extern M2C_UNK data_02170d04;

s32 func_02095fd0(s32 arg0) {
    s32 temp_r1;
    s32 var_r4;

    var_r4 = 0;
    if (func_02095f6c() != 0) {
        temp_r1 = ~M2C_FIELD(&data_02170d04, s32 *, 0x1C);
        if (temp_r1 == (temp_r1 & arg0)) {
            var_r4 = 1;
        }
    }
    return var_r4;
}
