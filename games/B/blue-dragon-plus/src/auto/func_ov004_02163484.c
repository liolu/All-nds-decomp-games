#include "m2c.h"

M2C_UNK func_0203d204(s32, s32, M2C_UNK);             /* extern */
M2C_UNK func_0203d0dc(s32);                          /* extern */
s32 func_0203d1f4(s32, M2C_UNK, s32);               /* extern */

s32 func_ov004_02163484(void *arg0, M2C_UNK arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        func_0203d0dc(M2C_FIELD(arg0, s32 *, 0xC));
        func_0203d204(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 8), 0);
        M2C_FIELD(arg0, u8 *, 0x10) = 0U;
    }
    if (func_0203d1f4(M2C_FIELD(arg0, s32 *, 0xC), arg1, arg2) != -1) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + arg2);
        return 1;
    }
    return 0;
}
