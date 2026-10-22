#include "m2c.h"

M2C_UNK func_02052130(s32);                         /* extern */
s32 func_02052204(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_02052210(s32, s32, M2C_UNK);           /* extern */

s32 func_02063e38(void *arg0, M2C_UNK arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        func_02052130(M2C_FIELD(arg0, s32 *, 0xC));
        func_02052210(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 8), 0);
        M2C_FIELD(arg0, u8 *, 0x10) = 0U;
    }
    if (func_02052204(M2C_FIELD(arg0, s32 *, 0xC), arg1, arg2) == -1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + arg2);
    return 1;
}
