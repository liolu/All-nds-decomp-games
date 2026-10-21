#include "m2c.h"

extern M2C_UNK data_020aa378;
extern M2C_UNK data_020aa37c;

void func_02038de8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 var_r2;

    var_r2  = arg2;
    temp_ip = arg0 * 0x14;
    if (var_r2 < 1) {
        var_r2 = 1;
    }
    *((M2C_UNK *) ((s8 *) &data_020aa378 + temp_ip)) = arg1;
    *((M2C_UNK *) ((s8 *) &data_020aa37c + temp_ip)) = var_r2;
}
