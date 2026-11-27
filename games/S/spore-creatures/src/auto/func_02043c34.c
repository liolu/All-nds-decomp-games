#include "m2c.h"

s32 func_02000ebc(s32);                             /* extern */
extern s32 data_020e0ba0;

s32 func_02043c34(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u8 *, 0x120) < 4U) && (func_02000ebc(data_020e0ba0 + 0x54C) != 0)) {
        return 1;
    }
    return 0;
}
