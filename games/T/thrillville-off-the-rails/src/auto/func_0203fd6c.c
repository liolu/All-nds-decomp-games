#include "m2c.h"

M2C_UNK func_0207b770(s32);                         /* extern */
s32 func_0207b780(s32);                             /* extern */

s32 func_0203fd6c(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_r4 != 0) {
            func_0207b770(temp_r4);
            M2C_FIELD(arg0, s32 *, 0x28) = func_0207b780(temp_r4);
        }
    }
    return M2C_FIELD(arg0, s32 *, 0x28);
}
