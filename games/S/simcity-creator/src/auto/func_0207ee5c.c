#include "m2c.h"

void func_0207ee5c(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r1;
}
