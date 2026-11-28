#include "m2c.h"

M2C_UNK func_02043d88(s32, M2C_UNK);                /* extern */

void func_020441c0(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r5;
    s32 var_r7;

    var_r5 = arg1;
    var_r7 = M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x10) * 4) + (M2C_FIELD(arg0, s32 *, 4) * 4);
    if (var_r5 == 0) {
        return;
    }
    do {
        func_02043d88(var_r7, arg2);
        var_r5 -= 1;
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
        var_r7 += 4;
    } while (var_r5 != 0);
}
