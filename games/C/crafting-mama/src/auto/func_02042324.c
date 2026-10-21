#include "m2c.h"

void *func_020291d0(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK func_02042354;

void func_02042324(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_02042354, arg3);
    M2C_FIELD(temp_r0, s32 *, 0x20) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg2;
}
