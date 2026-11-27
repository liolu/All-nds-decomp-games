#include "m2c.h"

s32 func_02063aec();                                /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
extern s32 data_020e0f5c;

s32 func_02063aac(void) {
    s32 var_r0;

    if (data_020e0f5c == 0) {
        var_r0 = func_02093480(0x840);
        if (var_r0 != 0) {
            var_r0 = func_02063aec();
        }
        data_020e0f5c = var_r0;
    }
    return data_020e0f5c;
}
