#include "m2c.h"

M2C_UNK func_01ffba64(s32, M2C_UNK, s32);           /* extern */
s32 func_02093494(s32);                             /* extern */

void *func_0209ccf8(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    M2C_FIELD(arg0, s32 *, 8)   = func_02093494(arg3);
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    func_01ffba64(M2C_FIELD(arg0, s32 *, 8), arg2, arg3);
    return arg0;
}
