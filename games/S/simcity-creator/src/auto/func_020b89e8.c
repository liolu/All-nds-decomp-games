#include "m2c.h"

M2C_UNK func_020b886c(s32);                         /* extern */
M2C_UNK func_0203491c(s32);                         /* extern */

s32 *func_020b89e8(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_020b886c(temp_r4);
        func_0203491c(temp_r4);
    }
    return arg0;
}
