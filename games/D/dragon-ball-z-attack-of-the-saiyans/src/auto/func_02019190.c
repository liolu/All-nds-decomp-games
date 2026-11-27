#include "m2c.h"

extern M2C_UNK data_0209b6d8;
extern M2C_UNK data_0209b6f0;

s32 func_02019190(s32 *arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 < 0x64) {
        *arg0 = *((M2C_UNK *) ((s8 *) &data_0209b6d8 + (arg1 * 4)));
    } else if (var_r2 < 0xC8) {
        var_r2 -= 0x5F;
        *arg0 = *((M2C_UNK *) ((s8 *) &data_0209b6d8 + (arg1 * 4)));
    } else {
        var_r2 -= 0xC8;
        *arg0 = *((M2C_UNK *) ((s8 *) &data_0209b6f0 + (arg1 * 4)));
    }
    return var_r2;
}
