#include "m2c.h"

void *func_0205e85c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_0202f598(M2C_UNK arg0, M2C_UNK arg1, s16 arg2, s16 arg3, s32 arg4) {
    void *temp_r0;

    temp_r0                        = func_0205e85c(1, arg0, 0, arg1, 0x10040);
    M2C_FIELD(temp_r0, s16 *, 8)   = arg2;
    M2C_FIELD(temp_r0, s16 *, 0xA) = arg3;
    M2C_FIELD(temp_r0, s16 *, 0xC) = (s16) arg4;
}
