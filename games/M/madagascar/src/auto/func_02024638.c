#include "m2c.h"

extern s32 data_020d0250;

s32 func_02024638(void) {
    s32 var_r0;

    var_r0 = 0;
    if (data_020d0250 != 0) {
        var_r0 = 1;
    }
    return var_r0;
}
