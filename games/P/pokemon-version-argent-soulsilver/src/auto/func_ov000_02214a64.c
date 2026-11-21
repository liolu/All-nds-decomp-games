#include "m2c.h"

s32 func_ov000_02214a64(s32 arg0) {
    s32 var_r2;

    var_r2 = 5;
    if (arg0 & 2) {
        var_r2 += 4;
    }
    if (arg0 & 8) {
        var_r2 += 4;
    }
    if (arg0 & 0x10) {
        var_r2 += 2;
    }
    if (arg0 & 0x20) {
        var_r2 += 2;
    }
    return var_r2;
}
