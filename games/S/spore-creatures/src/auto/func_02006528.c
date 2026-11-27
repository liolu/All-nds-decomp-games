#include "m2c.h"

M2C_UNK func_02006294(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
extern s32 data_020ddba0;

void func_02006528(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 var_r1;

    func_02006294((arg1 * 0xC) + arg0, arg2, arg3, arg4);
    var_r1 = arg4;
    if ((s32) data_020ddba0 >= var_r1) {
        var_r1 = data_020ddba0;
    }
    data_020ddba0 = var_r1;
}
