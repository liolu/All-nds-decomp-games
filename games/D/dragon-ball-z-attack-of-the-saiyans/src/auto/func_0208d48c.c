#include "m2c.h"

M2C_UNK _Z15CleanCacheRangePKvj(s32, s32);          /* extern */
s32 func_0208cc74();                                /* extern */
s32 func_0208cc9c(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_0208cf30(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_0208d48c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_0208cc74();
    if (temp_r0_2 == 0) {
        return 0;
    }
    if (arg4 == 0) {
        return 0;
    }
    temp_r0 = func_0208cf30(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_0208cc9c(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    _Z15CleanCacheRangePKvj(temp_r0, temp_r0_2);
    return temp_r0;
}
