#include "m2c.h"

s32 func_02070914(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02070ad8(s32);                             /* extern */

s32 func_02087820(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02070ad8(*arg0) != 0) {
        return 1;
    }
    if ((u32) (u8) (func_02070914(*arg0, arg1, arg2) + 0xD7) <= 1U) {
        return 1;
    }
    return 0;
}
