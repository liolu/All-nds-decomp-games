#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
extern M2C_UNK func_0204c9a8;

void func_0204c914(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, u16 arg9,
                   u16 argA, u16 argB) {
    s32 temp_r4;
    void *temp_r0;

    temp_r4 = func_0203663c(0x16);
    if (func_02031700() == 0) {
        return;
    }
    temp_r0                         = func_020291d0(&func_0204c9a8, argB);
    M2C_FIELD(temp_r0, s32 *, 0x54) = temp_r4;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r0, s16 *, 0x34) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x36) = arg2;
    M2C_FIELD(temp_r0, s16 *, 0x38) = arg3;
    M2C_FIELD(temp_r0, s16 *, 0x40) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x4C) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x50) = arg6;
    M2C_FIELD(temp_r0, s32 *, 0x44) = arg7;
    M2C_FIELD(temp_r0, s32 *, 0x48) = arg8;
    M2C_FIELD(temp_r0, u16 *, 0x3A) = arg9;
    M2C_FIELD(temp_r0, u16 *, 0x3C) = argA;
    M2C_FIELD(temp_r0, u16 *, 0x3E) = argB;
}
