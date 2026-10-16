#include "m2c.h"

M2C_UNK func_02064b9c(s32);                         /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */

s32 *func_020494a4(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_02064b9c(temp_r4);
        func_020934a8(temp_r4);
    }
    return arg0;
}
