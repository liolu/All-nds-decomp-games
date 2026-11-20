#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
extern M2C_UNK func_0202f114;

void func_0202f08c(s32 arg0, s8 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s32 arg6, s32 arg7, u8 arg8, u16 arg9, s32 argA,
                   s32 argB) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_0202f114, arg9);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = arg0;
    M2C_FIELD(temp_r0, s8 *, 0x24)  = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x26) = arg2;
    M2C_FIELD(temp_r0, s16 *, 0x28) = arg3;
    M2C_FIELD(temp_r0, s16 *, 0x2A) = arg4;
    M2C_FIELD(temp_r0, s16 *, 0x2C) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg6;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg7;
    M2C_FIELD(temp_r0, u8 *, 0x25)  = arg8;
    M2C_FIELD(temp_r0, s32 *, 0x38) = argA;
    M2C_FIELD(temp_r0, s32 *, 0x44) = argB;
    M2C_FIELD(temp_r0, s32 *, 0x48) = 2;
    M2C_FIELD(temp_r0, s32 *, 0x4C) = 8;
    M2C_FIELD(temp_r0, s32 *, 0x50) = 0xA;
}
