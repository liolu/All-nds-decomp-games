#include "m2c.h"

s32 func_02037050();                                /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
extern s32 data_020e0d54;

s32 func_02037554(void) {
    s32 var_r0;

    if (data_020e0d54 == 0) {
        var_r0 = func_02093480(4);
        if (var_r0 != 0) {
            var_r0 = func_02037050();
        }
        data_020e0d54 = var_r0;
    }
    return data_020e0d54;
}
