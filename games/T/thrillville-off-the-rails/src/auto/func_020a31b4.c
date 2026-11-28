#include "m2c.h"

M2C_UNK func_020a33d0(void *);                      /* extern */

void func_020a31b4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    if ((arg1 == 0) && (temp_r0 = M2C_FIELD(arg0, s32 *, 0x2EC), (temp_r0 != 3)) && (temp_r0 != 0)) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x2FC) = arg2;
        M2C_FIELD(arg0, s32 *, 0x2EC) = 4;
        M2C_FIELD(arg0, s32 *, 0x2F0) = -0x10000;
        M2C_FIELD(arg0, s32 *, 0x2F4) = 4;
        func_020a33d0(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x2FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2FC) | arg2);
}
