#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
extern M2C_UNK func_0204d6c4;

void func_0204d654(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_0204d6c4, arg5);
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg4;
}
