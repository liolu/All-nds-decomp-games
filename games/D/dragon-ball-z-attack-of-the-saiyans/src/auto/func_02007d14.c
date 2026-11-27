#include "m2c.h"

void func_02007d14(u8 **arg0) {
    s32 var_r3;

    var_r3 = 0;
    if ((s32) * *arg0 <= 0) {
        return;
    }
    do {
        M2C_FIELD((*arg0 + var_r3), s8 *, 1) = 0;
        var_r3 += 1;
    } while (var_r3 < (s32) * *arg0);
}
