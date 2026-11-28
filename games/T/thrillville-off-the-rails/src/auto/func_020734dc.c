#include "m2c.h"

M2C_UNK func_02072ce0(s32, u32);                    /* extern */

void func_020734dc(void *arg0, u32 arg1, u32 arg2) {
    s32 var_r4;
    u32 var_r5;

    var_r5 = arg2;
    var_r4 = M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10);
    if (var_r5 <= arg1) {
        return;
    }
    do {
        var_r5 -= 0x10;
        var_r4 -= 0x10;
        func_02072ce0(var_r4, var_r5);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - 1);
        M2C_FIELD(arg0, s32 *, 4)    = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    } while (var_r5 > arg1);
}
