#include "m2c.h"

s32 func_020046d4(s32, M2C_UNK);                    /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
extern s32 data_020e0bb4;

s32 func_02003f88(void) {
    s32 var_r0;

    if (data_020e0bb4 == 0) {
        var_r0 = func_02093480(0x18);
        if (var_r0 != 0) {
            var_r0 = func_020046d4(var_r0, 0x13);
        }
        data_020e0bb4 = var_r0;
    }
    return data_020e0bb4;
}
