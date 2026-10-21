#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_020469b0;
extern M2C_UNK func_020469d4;

void func_02046930(s32 arg0, s16 arg1, s16 arg2, s16 arg3) {
    void *temp_r0;

    temp_r0                              = func_020291d0(&func_020469d4, 0x1016);
    M2C_FIELD(temp_r0, M2C_UNK **, 0x14) = &func_020469b0;
    M2C_FIELD(temp_r0, s16 *, 0x22)      = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x38)      = arg0;
    M2C_FIELD(temp_r0, s16 *, 0x28)      = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x2A)      = arg2;
}
