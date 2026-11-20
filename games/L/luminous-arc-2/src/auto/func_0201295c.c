#include "m2c.h"

s32 func_02018348(s32);                             /* extern */

s32 func_0201295c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (M2C_FIELD(arg0, u16 *, 0x810) * func_02018348(arg1 & ((1 << arg3) - 1))) + arg2;
}
