#include "m2c.h"

void func_02047490(void *arg0, s32 arg1) {
    s8 var_r1;

    if (arg1 == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x1B07) = var_r1;
}
