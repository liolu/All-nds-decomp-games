#include "m2c.h"

s32 func_02006f0c(s32, s32);                        /* extern */
void *func_020291d0(M2C_UNK *, s32);                /* extern */
s32 func_02031700();                                /* extern */
s32 func_0203663c();                                /* extern */
M2C_UNK func_0205d38c(s32, s32);                    /* extern */
s32 func_0205d538(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0205d634(s32, M2C_UNK);                /* extern */
s32 func_0205e85c(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0205e9d4(s32, s32, s32, s32);          /* extern */
M2C_UNK func_0205eba4(s32, s32);                    /* extern */
extern M2C_UNK func_020433c8;

void *func_020432a0(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 temp_r0_2;
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = func_0203663c();
    if (func_02031700() == 0) {
        return NULL;
    }
    temp_r0                         = func_020291d0(&func_020433c8, 0x1016);
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg7;
    M2C_FIELD(temp_r0, s32 *, 0x38) = arg8;
    temp_r0_2                       = func_0205e85c(1, temp_r5, -1, arg1, 8);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = temp_r0_2;
    func_0205e9d4(temp_r0_2, arg2, arg3, arg4);
    func_0205eba4(M2C_FIELD(temp_r0, s32 *, 0x1C), arg6);
    func_0205d634(M2C_FIELD(temp_r0, s32 *, 0x1C), 0);
    func_0205d38c(M2C_FIELD(temp_r0, s32 *, 0x1C),
                  func_02006f0c(func_0205d538(M2C_FIELD(temp_r0, s32 *, 0x1C), arg1) << 0xC, arg8));
    return temp_r0;
}
