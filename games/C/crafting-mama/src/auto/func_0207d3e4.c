#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
s32 func_02031700();                                /* extern */
s32 func_0203663c(M2C_UNK);                         /* extern */
s32 func_0205e85c(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0205e9d4(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK func_0207d32c;

void *func_0207d3e4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s16 arg3, u16 arg4) {
    s32 temp_r0_2;
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = func_0203663c(0x53);
    if (func_02031700() == 0) {
        return NULL;
    }
    temp_r0                         = func_020291d0(&func_0207d32c, arg4);
    M2C_FIELD(temp_r0, s16 *, 0x24) = arg3;
    temp_r0_2                       = func_0205e85c(1, temp_r5, -1, 0, 8);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = temp_r0_2;
    func_0205e9d4(temp_r0_2, arg0, arg1, arg2);
    return temp_r0;
}
