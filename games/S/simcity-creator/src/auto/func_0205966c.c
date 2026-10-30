#include "m2c.h"

s32 func_02070668(s32);                             /* extern */

void func_0205966c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_r0;

    temp_r0 = M2C_FIELD((arg0 + (func_02070668(M2C_FIELD(arg0, s32 *, 8)) * 4)), void ***, 0x14);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x10)(temp_r0, arg1, arg2);
}
