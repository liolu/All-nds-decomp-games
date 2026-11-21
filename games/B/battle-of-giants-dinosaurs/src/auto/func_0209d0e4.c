#include "m2c.h"

void func_0209d0e4(void *arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 != 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x18);
    } else {
        var_r1 = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r1;
}
