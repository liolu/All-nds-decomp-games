#include "m2c.h"

s32 func_02022bb8(s32);                             /* extern */
extern s32 data_020d4cec;

s32 func_020231ac(s32 arg0) {
    s32 temp_r0;
    s32 var_r2;

    temp_r0       = func_02022bb8(arg0 + 4);
    var_r2        = 0;
    data_020d4cec = 0;
    if (temp_r0 != 0) {
        var_r2 = 1;
    }
    return var_r2;
}
