#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_020702c8;

void func_0207029c(s32 arg0) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_020702c8, 0x119);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = arg0;
    M2C_FIELD(temp_r0, s16 *, 0x20) = 0;
}
