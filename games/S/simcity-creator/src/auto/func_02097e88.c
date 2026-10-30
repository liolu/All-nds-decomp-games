#include "m2c.h"

s32 func_020b11e8(M2C_UNK);                         /* extern */
s32 func_020b11f0(M2C_UNK);                         /* extern */
s32 func_020b1200(M2C_UNK);                         /* extern */

s32 func_02097e88(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_020b11e8(arg1);
    temp_r4 = func_020b11f0(arg1);
    if ((func_020b1200(arg1) != 0) && (temp_r5 >= 0x72) && (temp_r5 <= 0xB6) && (temp_r4 >= 0x94) && (temp_r4 <= 0xAC)) {
        return 1;
    }
    return 0;
}
