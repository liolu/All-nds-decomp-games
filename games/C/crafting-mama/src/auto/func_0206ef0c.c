#include "m2c.h"

u32 func_0206eee4();                                /* extern */

s32 func_0206ef0c(s32 arg0, u32 arg1) {
    u32 temp_r0;

    temp_r0 = func_0206eee4();
    if ((arg1 <= temp_r0) && ((u32) (arg1 + 0x12C) > temp_r0)) {
        return 1;
    }
    return 0;
}
