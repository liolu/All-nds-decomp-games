/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020068c8();                                /* extern */
s32 func_020068d0(s32);                             /* extern */

s32 func_0200688c(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (func_020068c8() != 0) {
        var_r4 = arg0 ^ 0xC;
    }
    if (func_020068d0(arg0) != 0) {
        var_r4 ^= 3;
    }
    return var_r4;
}
