/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020106bc();                       /* extern */
M2C_UNK func_02010938();         /* extern */
s32 func_020960f4();                             /* extern */
s32 func_02096210();                             /* extern */

s32 func_02096790(s32 arg0, s32 arg1) {
    u8 sp0[16];
    s32 temp_r4;
    s32 var_r5;

    var_r5 = 0;
    if ((arg0 != 0) && (arg1 != 0) && (arg0 != arg1) && (func_02096210() != 0) && (func_02096210(arg1) != 0)) {
        temp_r4 = func_020960f4(arg0);
        func_02010938(sp0, temp_r4, func_020960f4(arg1));
        if (func_020106bc(sp0) < 0xC) {
            var_r5 = 1;
        }
    }
    return var_r5;
}
