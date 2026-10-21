#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
extern M2C_UNK func_0207bef4;

void func_0207c060(s16 arg0, s16 arg1, s16 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_0207bef4, arg4);
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg5;
    M2C_FIELD(temp_r0, s16 *, 0x38) = arg0;
    M2C_FIELD(temp_r0, s16 *, 0x3A) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x3C) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg6;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg7;
}
