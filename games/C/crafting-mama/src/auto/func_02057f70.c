#include "m2c.h"

M2C_UNK func_0201eb80(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_020217f4(void *);                      /* extern */
M2C_UNK func_02021814(void *);                      /* extern */

s32 func_02057f70(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_0201eb80(M2C_FIELD(arg0, s32 *, 0x4C), 0, 1 << M2C_FIELD(arg0, s32 *, 0x48), 0);
    temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) << 0x1E) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_020217f4(arg0 + 8);
    func_02021814(arg0 + 0x18);
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x2C) | 2;
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_r0;
    return temp_r0;
}
