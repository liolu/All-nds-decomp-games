#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_02046778;
extern M2C_UNK func_020467a4;

void *func_02046668(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s16 arg6, s16 arg7, s32 arg8, s32 arg9,
                    s32 argA, s32 argB) {
    void *temp_r0;

    if (arg2 >= 0xA) {
        return NULL;
    }
    temp_r0                              = func_020291d0(&func_020467a4, 0x1016);
    M2C_FIELD(temp_r0, M2C_UNK **, 0x14) = &func_02046778;
    M2C_FIELD(temp_r0, s16 *, 0x24)      = (s16) arg2;
    M2C_FIELD(temp_r0, s32 *, 0x34)      = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x38)      = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x3C)      = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x28)      = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x30)      = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x40)      = arg6;
    M2C_FIELD(temp_r0, s16 *, 0x42)      = arg7;
    M2C_FIELD(temp_r0, s32 *, 0x6C)      = arg8;
    M2C_FIELD(temp_r0, s32 *, 0x70)      = arg9;
    M2C_FIELD(temp_r0, s32 *, 0x7C)      = argB;
    M2C_FIELD(temp_r0, s32 *, 0x74)      = argA;
    return temp_r0;
}
