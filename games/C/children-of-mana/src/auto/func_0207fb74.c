#include "m2c.h"

void func_0207fb74(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3B8) = var_r1;
}
