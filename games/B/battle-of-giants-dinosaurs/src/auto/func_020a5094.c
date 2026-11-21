#include "m2c.h"

s32 func_020a507c(s32);                             /* extern */

s32 func_020a5094(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4                      = M2C_FIELD(arg0, s32 *, 0x14);
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x18) - 1;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_r4 + (~temp_r0 & (arg1 + temp_r0)));
    if (func_020a507c(M2C_FIELD(arg0, s32 *, 0x1C)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_r4;
        return 0;
    }
    return temp_r4;
}
