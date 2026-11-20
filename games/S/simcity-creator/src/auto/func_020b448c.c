#include "m2c.h"

M2C_UNK func_020055c4(s32, s32);                    /* extern */
M2C_UNK func_02006a10(M2C_UNK, s32, s32, s32);      /* extern */

void func_020b448c(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0);
    if (M2C_FIELD(arg0, u8 *, 0x84) == 0) {
        return;
    }
    func_020055c4(M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(arg0, s32 *, 0x54));
    func_02006a10(arg1, M2C_FIELD(arg0, s32 *, 0x50), temp_r4, M2C_FIELD(arg0, s32 *, 0x54));
    M2C_FIELD(arg0, u8 *, 0x84) = 0U;
}
