#include "m2c.h"

u32 func_02070914(s32);                             /* extern */
s32 func_02070a3c(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02080fe4(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u32 temp_r0;

    temp_r0 = func_02070914(M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != 0) {
        if ((temp_r0 >= 0x13U) && (temp_r0 <= 0x21U)) {
            return 2;
        }
        return 3;
    }
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x20) != 0) &&
        (func_02070a3c(M2C_FIELD(arg0, s32 *, 0), arg1, arg2) != 0)) {
        return 2;
    }
    return 0;
}
