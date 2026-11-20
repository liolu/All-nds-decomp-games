#include "m2c.h"

M2C_UNK _Z15CleanCacheRangePKvj(s32, M2C_UNK);                /* extern */
M2C_UNK func_02086468();                            /* extern */
M2C_UNK func_0208647c();                            /* extern */

void func_020870f8(s32 arg0, s32 arg1, s32 arg2) {
    func_02086468();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    _Z15CleanCacheRangePKvj(arg0 + 0x3C + (arg1 * 4), 4);
    func_0208647c();
}
