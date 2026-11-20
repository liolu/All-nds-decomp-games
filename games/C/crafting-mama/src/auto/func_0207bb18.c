#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
s32 func_02035190(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK func_0207b9f8;

void *func_0207bb18(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s16 arg4, s32 arg5, u16 arg6) {
    void *temp_r4;

    temp_r4                         = func_020291d0(&func_0207b9f8, arg6);
    M2C_FIELD(temp_r4, s32 *, 0x28) = func_02035190(arg0, arg1, arg2, arg3, (s32) arg4, 0);
    M2C_FIELD(temp_r4, s32 *, 0x24) = arg5;
    return temp_r4;
}
