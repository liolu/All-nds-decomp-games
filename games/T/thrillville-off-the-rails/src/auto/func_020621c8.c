#include "m2c.h"

M2C_UNK func_0202d948();                            /* extern */
s32 func_020742ec(s32);                             /* extern */

void func_020621c8(void *arg0, u32 arg1) {
    if (arg1 > 0x15555555U) {
        func_0202d948();
    }
    M2C_FIELD(arg0, s32 *, 0) = func_020742ec(arg1 * 0xC);
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
