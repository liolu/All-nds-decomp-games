#include "m2c.h"

s32 func_02070914(s32, M2C_UNK, M2C_UNK);           /* extern */
u32 func_02070ad8(s32);                             /* extern */

s32 func_020898d8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0_2;
    s32 var_r4;
    u32 temp_r0;

    var_r4  = 0;
    temp_r0 = func_02070ad8(*arg0);
    if (temp_r0 != 0) {
        switch (temp_r0) {
            default:
                break;
            case 1:
            case 6:
            case 7:
                var_r4 = 1;
                break;
            case 2:
            case 4:
            case 5:
                var_r4 = 2;
                break;
            case 3:
                var_r4 = 3;
                break;
        }
    } else {
        temp_r0_2 = func_02070914(*arg0, arg1, arg2);
        if (temp_r0_2 == 0x29) {
            var_r4 = 5;
        } else if (temp_r0_2 == 0x2A) {
            var_r4 = 6;
        }
    }
    return var_r4;
}
