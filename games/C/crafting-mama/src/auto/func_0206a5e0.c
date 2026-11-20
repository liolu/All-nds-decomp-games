#include "m2c.h"

s16 func_02006f0c(s16, s16);                        /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
void *func_02039e58(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
void *func_0205e85c(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0205e9d4(void *, s16, s16, M2C_UNK);   /* extern */
extern M2C_UNK func_0206a3f4;
extern M2C_UNK func_0206a5d0;

void *func_0206a5e0(s16 arg0, s16 arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, s16 arg5, s16 arg6, s16 arg7, s32 arg8,
                    s32 arg9) {
    void *temp_r0;
    void *temp_r4;

    temp_r4                           = func_02039e58(&func_0206a3f4, arg3, &func_0206a5d0);
    temp_r0                           = func_0205e85c(1, func_0203663c(0x4C), -1, 0, 0x209);
    M2C_FIELD(temp_r4, void **, 0x1C) = temp_r0;
    func_0205e9d4(temp_r0, arg0, arg1, arg2);
    M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x1C), s16 *, 0x12) = func_02006f0c(arg6, arg7);
    M2C_FIELD(temp_r4, s16 *, 0x20)                           = arg0;
    M2C_FIELD(temp_r4, s16 *, 0x22)                           = arg1;
    M2C_FIELD(temp_r4, u16 *, 0x24)                           = arg4;
    M2C_FIELD(temp_r4, s16 *, 0x26)                           = arg5;
    M2C_FIELD(temp_r4, s16 *, 0x28)                           = arg7;
    M2C_FIELD(temp_r4, s16 *, 0x2C)                           = arg6;
    M2C_FIELD(temp_r4, s32 *, 0x30)                           = arg8;
    M2C_FIELD(temp_r4, s32 *, 0x38)                           = arg9;
    return temp_r4;
}
