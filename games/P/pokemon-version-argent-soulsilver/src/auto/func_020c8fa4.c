#include "m2c.h"

M2C_UNK func_020c8ea8(void *, M2C_UNK);             /* extern */
s32 func_020d3a38();                                /* extern */
M2C_UNK func_020d3a4c(s32);                         /* extern */
s32 func_020d5174(s32, M2C_UNK, s32, M2C_UNK);      /* extern */

s32 func_020c8fa4(void *arg0) {
    s32 temp_r0;
    s32 temp_r6;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        do {
            temp_r6 = func_020d3a38();
            func_020c8ea8(arg0, 1);
            func_020d3a4c(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x38) != 0);
    }
    return func_020d5174(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
}
