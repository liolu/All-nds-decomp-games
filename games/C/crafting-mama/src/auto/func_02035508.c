#include "m2c.h"

void *func_020291d0(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK func_02035720;

void func_02035508(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    s32 var_r3;
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_02035720, 0x114);
    M2C_FIELD(temp_r0, s16 *, 0x24) = arg0;
    M2C_FIELD(temp_r0, s16 *, 0x26) = arg1;
    var_r3                          = 0;
    M2C_FIELD(temp_r0, s16 *, 0x28) = arg4;
    M2C_FIELD(temp_r0, s16 *, 0x2A) = arg2;
    M2C_FIELD(temp_r0, s16 *, 0x2C) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x30) = 0;
    if (arg5 != 0) {
        var_r3 = 1;
    }
    M2C_FIELD(temp_r0, s32 *, 0x34) = var_r3;
}
