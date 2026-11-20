#include "m2c.h"

void func_02077500(s32 arg0, s16 *arg1) {
    s16 *var_r2;
    s32 var_r3;

    var_r2 = arg0 + 4;
    var_r3 = 0x400;
    do {
        var_r3 -= 1;
        *var_r2 = *arg1;
        var_r2  = (s16 *) ((s8 *) var_r2 + 2);
    } while (var_r3 >= 0);
}
