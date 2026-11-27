/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020327ec(s32);                             /* extern */

s32 func_020327b0(s32 arg0) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = 0;
loop_1:
    temp_r0 = func_020327ec(var_r5 + 1);
    if ((arg0 >= temp_r0) && (temp_r0 != 0xF423F)) {
        var_r5 += 1;
        goto loop_1;
    }
    return var_r5;
}
