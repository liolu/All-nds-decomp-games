#include "m2c.h"

M2C_UNK func_020a33d0(void *);                      /* extern */

void func_020a320c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg2 != 0) || ((u32) M2C_FIELD(arg0, u32 *, 0x2EC) <= 1U)) {
        M2C_FIELD(arg0, s32 *, 0x2FC) = arg3;
        M2C_FIELD(arg0, u32 *, 0x2EC) = 2U;
        M2C_FIELD(arg0, s32 *, 0x2F0) = 0;
        func_020a33d0(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x2FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2FC) | arg3);
}
