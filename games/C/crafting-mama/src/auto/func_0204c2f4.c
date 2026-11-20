#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
s32 func_0205e85c(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0205e9d4(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205eba4(s32, M2C_UNK);                /* extern */
extern M2C_UNK func_0204c178;

void *func_0204c2f4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r0_2;
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = func_0203663c(0x1D);
    if (func_02031700() == 0) {
        return NULL;
    }
    temp_r0                         = func_020291d0(&func_0204c178, 0x1016);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0x7BA58AB0;
    temp_r0_2                       = func_0205e85c(1, temp_r5, -1, 0, 0x10002);
    M2C_FIELD(temp_r0, s32 *, 0x24) = temp_r0_2;
    func_0205eba4(temp_r0_2, arg3);
    func_0205e9d4(M2C_FIELD(temp_r0, s32 *, 0x24), arg0, arg1, arg2);
    return temp_r0;
}
