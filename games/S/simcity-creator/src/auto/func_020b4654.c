#include "m2c.h"

s32 func_020b3eec(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_020d0638;

s32 func_020b4654(M2C_UNK arg0, M2C_UNK *arg1, s32 arg2, s32 arg3) {
    s32 var_r4;
    u32 temp_r0;

    var_r4 = 0;
    if (arg3 > 0) {
        var_r4 = arg3 * 4 * func_020b3eec(arg0, &data_020d0638);
    }
    temp_r0 = var_r4 - func_020b3eec(arg0, arg1);
    return arg2 + ((s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1);
}
