#include "m2c.h"

s32 func_02070818(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02070914(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020709ac(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02070a3c(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02070ad8(s32);                             /* extern */
s32 func_02081efc(s32);                             /* extern */

s32 func_020821a8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    if (func_02070ad8(M2C_FIELD(arg0, s32 *, 4)) != 0) {
        return 3;
    }
    if (func_02070818(M2C_FIELD(arg0, s32 *, 4), arg1, arg2) != 0) {
        return 2;
    }
    temp_r0 = func_02070914(M2C_FIELD(arg0, s32 *, 4), arg1, arg2);
    if ((u32) (u8) (temp_r0 + 0xD7) <= 1U) {
        return 3;
    }
    if (temp_r0 != 0) {
        return 2;
    }
    if (func_020709ac(M2C_FIELD(arg0, s32 *, 4), arg1, arg2) != 0) {
        return 1;
    }
    if ((func_02081efc(M2C_FIELD(arg0, s32 *, 0x18)) != 0) && (func_02070a3c(M2C_FIELD(arg0, s32 *, 4), arg1, arg2) != 0)) {
        return 2;
    }
    return 0;
}
