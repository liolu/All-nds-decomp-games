#include "m2c.h"

void func_02097d20(s32 arg0, u16 *arg1, s8 *arg2) {
    s8 *var_r2;
    u16 *var_r1;
    u16 var_r0;

    var_r1 = arg1;
    var_r2 = arg2;
    var_r0 = *var_r1;
    if (var_r0 != 0) {
        do {
            *var_r2 = (s8) var_r0;
            var_r2  = (s8 *) ((s8 *) var_r2 + 1);
            var_r1  = (u16 *) ((s8 *) var_r1 + 2);
            var_r0  = *var_r1;
        } while (var_r0 != 0);
    }
    *var_r2 = 0;
}
