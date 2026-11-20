#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
s32 func_02060360(M2C_UNK);                         /* extern */
M2C_UNK func_02067a84(M2C_UNK, s32);                /* extern */
extern M2C_UNK func_02067c48;

void *func_02067a18(M2C_UNK arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    func_02067a84(arg0, arg2);
    temp_r0                          = func_020291d0(&func_02067c48, 0x141);
    M2C_FIELD(temp_r0, s32 *, 0x24)  = 0;
    M2C_FIELD(temp_r0, s32 **, 0x30) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x38)  = arg2;
    *arg1 |= 0x800000;
    if (arg3 != 0) {
        M2C_FIELD(temp_r0, s32 *, 0x3C) = arg3;
    } else {
        M2C_FIELD(temp_r0, s32 *, 0x3C) = func_02060360(2);
    }
    return temp_r0;
}
