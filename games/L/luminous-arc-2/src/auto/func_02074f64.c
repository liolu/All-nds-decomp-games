#include "m2c.h"

void *func_02074f64(u8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    s8 var_r1_2;
    u8 var_r1;

    var_r1 = *arg0;
    if (var_r1 == 2) {
        var_r1 = 1;
    }
    M2C_FIELD(arg3, u8 *, 0x89) = var_r1;
    if (var_r1 == 0) {
        var_r1_2 = 0;
    } else {
        var_r1_2 = 2;
    }
    M2C_FIELD(arg3, s8 *, 0x8A) = var_r1_2;
    return arg0 + 1;
}
