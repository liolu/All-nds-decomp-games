#include "m2c.h"

M2C_UNK func_0202f408(s32);                         /* extern */
M2C_UNK func_0202f41c();                            /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */

s32 func_0202987c(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x56C) != 0) {
        func_0202f41c();
        temp_r4                       = M2C_FIELD(arg0, s32 *, 0x56C);
        M2C_FIELD(arg0, s32 *, 0x56C) = 0;
        if (temp_r4 != 0) {
            func_0202f408(temp_r4);
            func_020934a8(temp_r4);
        }
        M2C_FIELD(arg0, s8 *, 0x572) = 0;
        M2C_FIELD(arg0, s8 *, 0x573) = 0;
        return 1;
    }
    return 0;
}
