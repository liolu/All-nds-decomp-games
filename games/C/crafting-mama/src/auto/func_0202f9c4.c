#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_0202f9f8;

void func_0202f9c4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_0202f9f8, 0x119);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x20) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg2;
}
