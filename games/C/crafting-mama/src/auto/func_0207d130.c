#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
s32 func_0205ec24(void *);                          /* extern */
extern M2C_UNK func_0207d1a4;

void func_0207d130(s32 arg0, void *arg1, void *arg2, s16 arg3, u16 arg4) {
    void *temp_r0;
    void *var_r0;

    temp_r0                           = func_020291d0(&func_0207d1a4, 0x125);
    M2C_FIELD(temp_r0, void **, 0x1C) = arg2;
    M2C_FIELD(temp_r0, void **, 0x20) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x2C)   = 0;
    M2C_FIELD(temp_r0, s16 *, 0x2E)   = 0;
    M2C_FIELD(temp_r0, s16 *, 0x30)   = arg3;
    M2C_FIELD(temp_r0, u16 *, 0x32)   = arg4;
    M2C_FIELD(temp_r0, s16 *, 0x34)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x24)   = arg0;
    if (func_0205ec24(arg1) != 1) {
        var_r0 = M2C_FIELD(temp_r0, void **, 0x1C);
    } else {
        var_r0 = M2C_FIELD(temp_r0, void **, 0x20);
    }
    M2C_FIELD(temp_r0, s16 *, 0x36) = (s16) M2C_FIELD(var_r0, s16 *, 0xA);
}
