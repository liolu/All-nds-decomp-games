#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_020435e8;

void func_02043578(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 *arg6, s32 arg7, s32 arg8) {
    void *temp_r0;

    if (arg6 != NULL) {
        *arg6 = arg5;
    }
    temp_r0                          = func_020291d0(&func_020435e8, 0x1016);
    M2C_FIELD(temp_r0, s32 *, 0x1C)  = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x20)  = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x24)  = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x28)  = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x2C)  = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x30)  = arg5;
    M2C_FIELD(temp_r0, s32 **, 0x34) = arg6;
    M2C_FIELD(temp_r0, s32 *, 0x38)  = arg7;
    M2C_FIELD(temp_r0, s32 *, 0x3C)  = arg8;
}
