#include "m2c.h"

extern M2C_UNK data_02127214;

void func_020aa284(s32 arg0) {
    s32 var_r2;

    var_r2                                 = M2C_FIELD(&data_02127214, s32 *, 0x28) + arg0;
    M2C_FIELD(&data_02127214, s32 *, 0x28) = var_r2;
    if (var_r2 < 0) {
        var_r2 = 0;
    } else if (var_r2 > 0xF423F) {
        var_r2 = 0xF423F;
    }
    M2C_FIELD(&data_02127214, s32 *, 0x28) = var_r2;
}
