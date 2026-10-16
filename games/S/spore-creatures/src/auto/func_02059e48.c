#include "m2c.h"

M2C_UNK func_020237b0(s32);                         /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */

s32 *func_02059e48(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_020237b0(temp_r4);
        func_020934a8(temp_r4);
    }
    return arg0;
}
