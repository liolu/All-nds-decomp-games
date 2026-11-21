/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

M2C_UNK func_020e5ad8(s32, s32, s32);               /* extern */
M2C_UNK func_ov013_02225530(s32, s32, s32, s32, s32); /* extern */
s32 func_ov013_02224644(M2C_UNK, s32 *, s32 *);     /* extern */

s32 func_ov013_02224958(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4;
    s32 sp8;
    s32 temp_r0;

    temp_r0 = func_ov013_02224644(arg0, &sp4, &sp8);
    if (temp_r0 == 0) {
        return 0;
    }
    if (sp4 != arg1) {
        return 0;
    }
    if (arg3 != 0) {
        func_ov013_02225530(arg2, temp_r0, sp8, arg3, 0x10);
        sp8 -= 8;
    } else {
        func_020e5ad8(arg2, temp_r0, sp8);
    }
    return sp8;
}
