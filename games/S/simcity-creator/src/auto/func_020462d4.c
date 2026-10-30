#include "m2c.h"

void func_020462d4(s32 arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    do {
        *(s8 *) (arg1 + var_r3) = M2C_FIELD((arg0 + var_r3), s8 *, 0xBA0C);
        var_r3 += 1;
    } while (var_r3 < 3);
}