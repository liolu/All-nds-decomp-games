#include "m2c.h"

void func_020add94(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x49C) = (s32) (var_r1 - 1);
    M2C_FIELD(arg0, u8 *, 0x4A0)  = (u8) (M2C_FIELD(arg0, u8 *, 0x4A0) | 8);
}
