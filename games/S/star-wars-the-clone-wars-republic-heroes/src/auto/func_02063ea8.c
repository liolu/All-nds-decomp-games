#include "m2c.h"

s32 func_020521f8(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_02052210(s32, s32, M2C_UNK);           /* extern */

s32 func_02063ea8(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r8;

    temp_r3 = M2C_FIELD(arg0, s32 *, 8);
    temp_r1 = temp_r3 & ~0x1FF;
    temp_r4 = temp_r3 - temp_r1;
    var_r8  = arg2 + temp_r4;
    if (var_r8 & (-0x200U >> 0x17)) {
        var_r8 = (var_r8 & ~0x1FF) + 0x200;
    }
    func_02052210(M2C_FIELD(arg0, s32 *, 0xC), temp_r1, 0);
    if (func_020521f8(M2C_FIELD(arg0, s32 *, 0xC), arg1, var_r8) == -1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s32 *, 8) + arg2);
    M2C_FIELD(arg0, s8 *, 0x10) = 1;
    return temp_r4;
}
