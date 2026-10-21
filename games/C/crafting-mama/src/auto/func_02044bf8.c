#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
M2C_UNK func_0205f758(s32);                         /* extern */
extern M2C_UNK func_02044c48;

void func_02044bf8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r2;
    void *temp_r0;

    temp_r0                          = func_020291d0(&func_02044c48, 0x1016);
    M2C_FIELD(temp_r0, s32 **, 0x1C) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x24)  = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x28)  = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x2C)  = arg3;
    temp_r2                          = *arg0;
    M2C_FIELD(temp_r0, s32 *, 0x20)  = temp_r2;
    func_0205f758(M2C_FIELD((temp_r0 + (temp_r2 * 4)), s32 *, 0x24));
}
