#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_02067348;

void func_020672ec(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    void *temp_r0;
    void *temp_r1;

    temp_r0                           = func_020291d0(&func_02067348, 0x1015);
    M2C_FIELD(temp_r0, s32 *, 0x28)   = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x48)   = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x2C)   = arg1;
    M2C_FIELD(temp_r0, void **, 0x50) = arg3;
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x50), u16 *, 0x12) = 0U;
    temp_r1                                                   = M2C_FIELD(temp_r0, void **, 0x50);
    M2C_FIELD(temp_r1, u16 *, 0x10)                           = (u16) M2C_FIELD(temp_r1, u16 *, 0x12);
}
