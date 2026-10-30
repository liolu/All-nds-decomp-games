#include "m2c.h"

extern M2C_UNK data_020d0214;
extern M2C_UNK data_020d0240;

s32 func_020b139c(s32 arg0, u8 arg1) {
    s32 var_r0;
    u8 var_r1;

    var_r0 = arg0;
    var_r1 = arg1;
    if (var_r0 < 0) {
        var_r0 = (s32) M2C_FIELD(&data_020d0214, u8 *, 0);
        var_r1 = M2C_FIELD(&data_020d0214, u8 *, 1);
    }
    if (((s32) var_r1 < 4) || ((s32) var_r1 > 6)) {
        var_r1 = 4;
    }
    if (var_r0 == 8) {
        var_r0 = 0xA;
    } else if (var_r0 == 7) {
        var_r0 = var_r1 + 3;
    }
    return *((M2C_UNK *) ((s8 *) &data_020d0240 + (var_r0 * 4)));
}
