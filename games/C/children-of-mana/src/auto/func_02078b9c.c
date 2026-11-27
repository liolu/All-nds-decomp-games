/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02078858();                            /* extern */
s32 func_0208f4b0(s32, M2C_UNK, M2C_UNK);           /* extern */

void func_02078b9c(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, u8 arg4) {
    s32 temp_r4;
    s32 var_r2;

    temp_r4 = arg1 * 0x1A8;
    if (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), s32 *, 0x1A4) != 0) {
        func_02078858(arg0, arg1);
    }
    if (arg4 != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), s32 *, 0x1A0) = var_r2;
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), s32 *, 0x1A4) = func_0208f4b0(M2C_FIELD(arg0, s32 *, 4), arg2, arg3);
}
