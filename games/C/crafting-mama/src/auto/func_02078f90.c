#include "m2c.h"

void *func_020291d0(M2C_UNK *, M2C_UNK);            /* extern */
M2C_UNK func_0205f758(s32);                         /* extern */
extern M2C_UNK func_02078f64;

void func_02078f90(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r4;

    temp_r4 = func_020291d0(&func_02078f64, arg2);
    func_0205f758(arg0);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = arg0;
    M2C_FIELD(temp_r4, s32 *, 0x20) = arg1;
}
