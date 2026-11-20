#include "m2c.h"

void func_02030374(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 <= 0) {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1E0) = var_r1;
}
