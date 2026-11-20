#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_0205a34c(s32);                         /* extern */

void func_0206b27c(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r4 != 0) {
        func_0205a34c(temp_r4);
        func_0203491c(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
