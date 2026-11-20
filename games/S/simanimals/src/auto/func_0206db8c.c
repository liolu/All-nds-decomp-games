#include "m2c.h"

M2C_UNK func_02065860(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02069e18(void *);                      /* extern */
M2C_UNK func_02069e30(void *);                      /* extern */

s32 func_0206db8c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_02065860(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_02069e18(arg0 + 8);
    func_02069e30(arg0 + 0x14);
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x24) | 2;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    return temp_r0;
}
