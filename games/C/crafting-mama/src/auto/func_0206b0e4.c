#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
s32 func_0205e85c(M2C_UNK, s32, M2C_UNK, u32, s32); /* extern */
M2C_UNK func_0205e9d4(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK func_0206b160;

void func_0206b0e4(M2C_UNK arg0, u32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    void *temp_r4;

    if (arg1 > 9U) {
        return;
    }
    temp_r5 = func_0203663c(0x58);
    if (func_02031700() == 0) {
        return;
    }
    temp_r4                         = func_020291d0(&func_0206b160, 0x1016);
    temp_r0                         = func_0205e85c(1, temp_r5, -1, arg1, 1);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = temp_r0;
    M2C_FIELD(temp_r4, s16 *, 0x20) = 0;
    func_0205e9d4(temp_r0, 0x80, 0x60, arg0);
}
