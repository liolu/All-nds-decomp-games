#include "m2c.h"

s32 func_0200a80c(s32, s32);                        /* extern */
s32 func_02021a50();                                /* extern */

s32 func_0200a8d4(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;
    u8 temp_r1;

    var_r4  = func_02021a50();
    temp_r0 = func_0200a80c(arg0, var_r4);
    if (temp_r0 >= 0) {
        temp_r1 = *(s8 *) (arg0 + temp_r0);
        if ((temp_r1 != 0x2F) && (temp_r1 != 0x5C)) {

        } else {
            var_r4                   = temp_r0;
            *(s8 *) (arg0 + temp_r0) = 0;
        }
    }
    return var_r4;
}