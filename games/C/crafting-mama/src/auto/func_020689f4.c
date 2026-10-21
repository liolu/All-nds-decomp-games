#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
s32 func_02039d78(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0205e9d4(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK func_020689b4;

void func_020689f4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4                         = func_020291d0(&func_020689b4, arg3);
    temp_r0                         = func_02039d78(1, func_0203663c(0x4B), 0, 0, arg3);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = temp_r0;
    func_0205e9d4(temp_r0, arg0, arg1, arg2);
}
