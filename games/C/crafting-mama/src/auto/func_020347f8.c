#include "m2c.h"

void *func_020291d0(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK func_02034970;

void func_020347f8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r2;
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_02034970, 0x114);
    M2C_FIELD(temp_r0, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg1;
    temp_r2                         = arg3 << 0x10;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x40) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x44) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x24) = -1;
    M2C_FIELD(temp_r0, s16 *, 0x48) = (s16) ((s32) (temp_r2 + ((u32) (temp_r2 >> 0xF) >> 0x10)) >> 0x10);
}
