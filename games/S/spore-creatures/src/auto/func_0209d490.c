#include "m2c.h"

u32 func_0209d490(void *arg0) {
    s32 var_r2;

    if (M2C_FIELD(arg0, u8 *, 0xC) == 2) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    return (u32) ((u32) (M2C_FIELD(arg0, s32 *, 4) << 0x10) >> 0xD) >> (4 - var_r2);
}
