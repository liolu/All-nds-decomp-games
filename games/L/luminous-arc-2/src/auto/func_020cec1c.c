#include "m2c.h"

void func_020cec1c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 & 1) {
        M2C_FIELD((void *) 0x04000050, s16 *, 0) = (s16) (arg1 | arg2);
        M2C_FIELD((void *) 0x04000050, s16 *, 4) = (s16) (arg3 & 0x1F);
    }
    if (!(arg0 & 2)) {
        return;
    }
    M2C_FIELD((void *) 0x04001050, s16 *, 0) = (s16) (arg1 | arg2);
    M2C_FIELD((void *) 0x04001050, s16 *, 4) = (s16) (arg3 & 0x1F);
}
