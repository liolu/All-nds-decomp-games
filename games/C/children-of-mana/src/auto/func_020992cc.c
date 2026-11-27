#include "m2c.h"

void func_020992cc(void *arg0, s32 arg1) {
    s8 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x38) == arg1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x97) = var_r1;
}
