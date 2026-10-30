#include "m2c.h"

M2C_UNK func_0209543c(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

s32 func_02095534(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x610);
    if (temp_r5 < 0x80) {
        func_0209543c(arg0 + 0xC + (temp_r5 * 8), arg1, arg2, M2C_FIELD(arg0, s32 *, 0x61C), M2C_FIELD(arg0, s32 *, 0x628),
                      M2C_FIELD(arg0, s32 *, 0x624), arg5, arg4, M2C_FIELD(arg0, s32 *, 0x630), arg3, arg6, 0);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x610) * 4)), s32 *, 0x40C) = 1;
        M2C_FIELD(arg0, s32 *, 0x610)                                         = (s32) (M2C_FIELD(arg0, s32 *, 0x610) + 1);
    }
    return M2C_FIELD(arg0, s32 *, 0x610);
}
