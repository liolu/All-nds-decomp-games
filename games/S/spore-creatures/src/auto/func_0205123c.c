#include "m2c.h"

void func_0205123c(void *arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0xA5;
    }
    M2C_FIELD(arg0, s32 *, 0x418) = var_r1;
}
