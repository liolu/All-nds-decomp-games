#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
s32 func_0205e85c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02039e18;

void func_02039d78(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    void *temp_r4;

    temp_r4                         = func_020291d0(&func_02039e18, arg4);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = func_0205e85c(arg0, arg1, -1, arg2, arg3);
}
