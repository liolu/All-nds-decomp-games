/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201e150(void *);                          /* extern */
s32 func_0208a87c(s32, s32, s32, s32, void *);      /* extern */

s32 func_020f1870(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r4;

    if ((arg2 != 0) && (M2C_FIELD(arg0, u8 *, 0x4C4) != 0)) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4B4);
    if (temp_r4 == 0) {
        return 0;
    }
    temp_r0 = func_0208a87c(func_0201e150(arg0), arg1 + 0x14, M2C_FIELD(arg0, s32 *, 0x434), temp_r4, arg0);
    if (arg2 == 0) {
        return temp_r0;
    }
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u8 *, 0x4C4) = 1U;
    }
    return temp_r0;
}
