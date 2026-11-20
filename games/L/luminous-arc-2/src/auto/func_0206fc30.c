#include "m2c.h"

extern M2C_UNK data_0216f3dc;

void func_0206fc30(s8 *arg0) {
    s32 var_r2;
    s8 *var_r3;

    var_r3 = arg0;
    var_r2 = 0x1C;
    do {
        var_r2 -= 1;
        *var_r3 = 0;
        var_r3 += 1;
    } while (var_r2 > 0);
    M2C_FIELD(arg0, s8 *, 0)    = M2C_FIELD(&data_0216f3dc, u8 *, 0x714) + 1;
    M2C_FIELD(arg0, s8 *, 1)    = 1;
    M2C_FIELD(arg0, s8 *, 2)    = 2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x1000;
}
