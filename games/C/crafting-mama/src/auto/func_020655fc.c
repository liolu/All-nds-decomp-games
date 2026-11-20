#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
s32 func_02031700();                                /* extern */
M2C_UNK func_0203663c(M2C_UNK);                     /* extern */
extern M2C_UNK func_020654c0;

void func_020655fc(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u16 arg7) {
    void *temp_r0;

    func_0203663c(0x48);
    if (func_02031700() == 0) {
        return;
    }
    temp_r0                         = func_020291d0(&func_020654c0, arg7);
    M2C_FIELD(temp_r0, s16 *, 0x1C) = arg0;
    M2C_FIELD(temp_r0, s16 *, 0x1E) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x20) = arg2;
    M2C_FIELD(temp_r0, s16 *, 0x22) = arg3;
    M2C_FIELD(temp_r0, s16 *, 0x24) = arg4;
    M2C_FIELD(temp_r0, s16 *, 0x26) = arg5;
    M2C_FIELD(temp_r0, s16 *, 0x28) = arg6;
    M2C_FIELD(temp_r0, u16 *, 0x2C) = arg7;
}
