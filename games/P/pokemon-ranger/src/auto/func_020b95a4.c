/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b9328(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32 *); /* extern */
s32 func_020b9f68(s32, s32, s32 *);                 /* extern */
s32 func_020ba818(s32, s32, s32, s32 *);            /* extern */

s32 func_020b95a4(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 *arg4) {
    s32 temp_r5;
    s32 var_r5;
    s32 var_r6;

    temp_r5 = *arg4;
    var_r6  = (temp_r5 * 0x14) + (s32) (((s8 *) arg4 + 4));
    *arg4   = temp_r5 + 1;
    var_r5  = 0;
    if (arg2 != 0) {
        if (arg1 == arg2) {
            if (func_020b9f68(var_r6, arg1, arg4) == 0) {

            } else {
                goto block_7;
            }
        } else if (func_020ba818(var_r6, arg1, arg2, arg4) == 0) {

        } else {
            goto block_7;
        }
    } else {
        var_r6 = arg1;
    block_7:
        func_020b9328(0, arg0, var_r6, arg3, arg4);
        var_r5 = 1;
    }
    *arg4 -= 1;
    return var_r5;
}
