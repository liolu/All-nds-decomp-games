#include "m2c.h"

u32 func_0203cdf8();                                /* extern */

s32 func_0203cef8(void) {
    s32 var_r4;
    u32 temp_r0;

    var_r4  = -1;
    temp_r0 = func_0203cdf8();
    switch (temp_r0) {
        default:
            break;
        case 0:
            var_r4 = 0x19;
            break;
        case 1:
            var_r4 = 0x32;
            break;
        case 2:
            var_r4 = 0x64;
            break;
        case 3:
            var_r4 = 0x64;
            break;
        case 4:
        case 5:
            var_r4 = 0x64;
            break;
    }
    return var_r4;
}
