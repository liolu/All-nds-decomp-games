#include "m2c.h"

s32 func_02030164();                                /* extern */
extern s8 data_020a8a2c;

s32 func_020301c0(void) {
    s32 var_r0;

    if (func_02030164() < 0) {
        var_r0 = 0 - func_02030164();
    } else {
        var_r0 = func_02030164();
    }
    if (var_r0 > (s32) data_020a8a2c) {
        return 1;
    }
    return 0;
}
