#include "m2c.h"

s32 func_02075f6c(void *, u8);                      /* extern */

void *func_02074970(u8 *arg0, void *arg1, s32 arg2, void *arg3) {
    s32 temp_r0;

    temp_r0 = func_02075f6c(arg3, *arg0);
    if (temp_r0 < 0) {
        M2C_FIELD(arg1, M2C_UNK(**)(s32, M2C_UNK, s32, s32), 0xBC)(M2C_FIELD(arg1, s32 *, 0x24), -0xCC,
                                                                   (M2C_FIELD(arg3, u16 *, 0x10) << 0x10) - temp_r0,
                                                                   M2C_FIELD(arg1, s32 *, 0xC0));
    }
    return arg0 + 1;
}
