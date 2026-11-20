#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_020675ec;

void func_02067598(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_020675ec, 0x1015);
    M2C_FIELD(temp_r0, s32 *, 0x4C) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x38) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x50) = arg6;
}
