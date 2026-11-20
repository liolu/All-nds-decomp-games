#include "m2c.h"

void *func_020b13b4(M2C_UNK, M2C_UNK);              /* extern */

void func_0200ccdc(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0                   = func_020b13b4(arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
}
