#include "m2c.h"

void func_02056534(void *arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 == 0) {
        var_r1 = 2;
    } else {
        var_r1 = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x84) = var_r1;
}
