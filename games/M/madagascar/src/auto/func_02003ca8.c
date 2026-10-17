/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003ce8();                                /* extern */

s32 func_02003ca8(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r5;

    var_r5  = arg1;
    temp_r4 = *M2C_FIELD(arg0, s32 **, 0x18);
    temp_r0 = func_02003ce8(arg0);
    if (var_r5 < 0) {
        var_r5 = 0;
    } else if (var_r5 >= temp_r0) {
        var_r5 = temp_r0 - 1;
    }
    *M2C_FIELD(arg0, s32 **, 0x18) = var_r5;
    return temp_r4;
}
