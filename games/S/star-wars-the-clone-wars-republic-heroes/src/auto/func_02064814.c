#include "m2c.h"

extern M2C_UNK data_0209f370;
extern M2C_UNK data_0209f380;

s32 func_02064814(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_ip;
    s32 var_r1;
    s32 var_r3;

    temp_r2 = *((M2C_UNK *) ((s8 *) &data_0209f380 + (M2C_FIELD(arg0, s32 *, 0) * 4)));
    var_ip  = temp_r2 >> 3;
    if (arg1 & 1) {
        var_ip += temp_r2 >> 2;
    }
    if (arg1 & 2) {
        var_ip += temp_r2 >> 1;
    }
    if (arg1 & 4) {
        var_ip += temp_r2;
    }
    if (arg1 & 8) {
        var_ip = 0 - var_ip;
    }
    var_r3 = M2C_FIELD(arg0, s32 *, 4) + var_ip;
    if (var_r3 < -0x8000) {
        var_r3 = -0x8000;
    }
    if (var_r3 > 0x7FFF) {
        var_r3 = 0x7FFF;
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r3;
    var_r1                    = M2C_FIELD(arg0, s32 *, 0) + ((s8 *) &data_0209f370)[arg1];
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x58) {
        var_r1 = 0x58;
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r1;
    return var_r3;
}
