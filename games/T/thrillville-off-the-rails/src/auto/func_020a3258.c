#include "m2c.h"

M2C_UNK func_020a33d0();                            /* extern */

void func_020a3258(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2EC) = 3;
    M2C_FIELD(arg0, s32 *, 0x2F0) = -0x10000;
    M2C_FIELD(arg0, s8 *, 0x2E4)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2E5)  = 0;
    M2C_FIELD(arg0, s32 *, 0x2FC) = 3;
    func_020a33d0();
}
