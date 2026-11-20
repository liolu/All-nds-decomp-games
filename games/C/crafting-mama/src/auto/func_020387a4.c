#include "m2c.h"

s32 func_0204d480(s32);                             /* extern */

void func_020387a4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;

    temp_r5 = arg0 - arg1;
    if (temp_r5 < 0) {
        var_r1 = 0 - temp_r5;
    } else {
        var_r1 = temp_r5;
    }
    if (var_r1 <= arg2) {
        return;
    }
    temp_r4 = func_0204d480(arg1 - arg0);
    if (temp_r4 >= func_0204d480(temp_r5)) {
        var_r0 = arg1 + arg2;
    } else {
        var_r0 = arg1 - arg2;
    }
    func_0204d480(var_r0);
}
