#include "m2c.h"

M2C_UNK func_02052130(s32);                         /* extern */
s32 func_02052210(s32, s32, M2C_UNK);               /* extern */

s32 func_02063dec(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        func_02052130(M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, u8 *, 0x10) = 0U;
    }
    if (func_02052210(M2C_FIELD(arg0, s32 *, 0xC), arg1, 0) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 1;
}
