#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
extern M2C_UNK func_0207ab54;

void func_0207aaa4(s32 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, u16 arg9) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_0207ab54, arg9);
    M2C_FIELD(temp_r0, s32 *, 0x48) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x20) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg6;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg7;
    M2C_FIELD(temp_r0, s32 *, 0x4C) = arg8;
    M2C_FIELD(temp_r0, s16 *, 0x3C) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x50) = 0;
}
