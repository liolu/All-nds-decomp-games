#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_02063b40(s32);                         /* extern */

void func_0206b4d8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r4 != 0) {
        func_02063b40(temp_r4);
        func_0203491c(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}
