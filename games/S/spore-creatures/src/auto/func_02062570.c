#include "m2c.h"

s32 func_02062600();                                /* extern */
s32 func_02062a00();                                /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
extern s32 data_020e0f10;

s32 func_02062570(void) {
    s32 var_r0;

    if (data_020e0f10 == 0) {
        var_r0 = func_02093480(8);
        if (var_r0 != 0) {
            var_r0 = func_02062600();
        }
        data_020e0f10 = var_r0;
        return func_02062a00();
    }
    return 1;
}
