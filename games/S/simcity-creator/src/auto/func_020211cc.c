#include "m2c.h"

s32 func_02073764(s32, M2C_UNK);                    /* extern */

void func_020211cc(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x34938) = func_02073764(M2C_FIELD(arg0, s32 *, 0x34E8), 1);
}
