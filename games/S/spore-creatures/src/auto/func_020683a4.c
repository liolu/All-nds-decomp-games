#include "m2c.h"

s32 func_020683a4(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = 1;
    var_r2 = 0x17;
loop_1:
    if (var_r2 > arg0) {
        return var_r1 + 0x19;
    }
    var_r1 += 1;
    var_r2 += 0x17;
    if (var_r1 >= 0xC) {
        return 0x25;
    }
    goto loop_1;
}
