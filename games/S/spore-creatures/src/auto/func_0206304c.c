#include "m2c.h"

M2C_UNK func_020630a0(M2C_UNK, M2C_UNK);            /* extern */
u32 func_02063170(s32);                             /* extern */
s32 func_ov001_02101268();                          /* extern */
extern s32 data_020e0f10;

s32 func_0206304c(M2C_UNK arg0) {
    s32 var_r4;

    if (func_02063170(data_020e0f10) <= 1U) {
        var_r4 = 1;
    } else {
        var_r4 = func_ov001_02101268();
    }
    if (var_r4 >= 0) {
        func_020630a0(arg0, 5);
    } else {
        func_020630a0(arg0, 0xE);
    }
    return var_r4;
}
