#include "m2c.h"

s32 func_0205b72c(void *, s32);                     /* extern */
s32 func_020b1330(s32, s32);                        /* extern */

s32 func_0204e600(void *arg0) {
    if (func_020b1330(M2C_FIELD(arg0, s32 *, 0x15C), M2C_FIELD(arg0, s32 *, 0x154)) < 0x400) {
        return 0x9F51A0D1;
    }
    if ((((u32) M2C_FIELD(arg0, u32 *, 0x70) >> 0xB) & 1) && (func_0205b72c(arg0 + 0x1C0, 0x125EE) != 0)) {
        return 0xABD8C27F;
    }
    return 0x2237D4;
}
