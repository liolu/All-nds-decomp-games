#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_020705f0;

void func_02070574(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    void *temp_r0;

    temp_r0                           = func_020291d0(&func_020705f0, 0x11E);
    M2C_FIELD(temp_r0, void **, 0x1C) = arg0;
    M2C_FIELD(temp_r0, s16 *, 0x20)   = 0;
    M2C_FIELD(temp_r0, s16 *, 0x22)   = 0;
    M2C_FIELD(temp_r0, s16 *, 0x24)   = arg3;
    M2C_FIELD(temp_r0, s16 *, 0x2A)   = arg4;
    M2C_FIELD(temp_r0, s16 *, 0x30)   = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x32)   = arg2;
    M2C_FIELD(temp_r0, s16 *, 0x2C)   = (s16) M2C_FIELD(arg0, s16 *, 8);
    M2C_FIELD(temp_r0, s16 *, 0x2E)   = (s16) M2C_FIELD(arg0, s16 *, 0xA);
    M2C_FIELD(temp_r0, s16 *, 0x26)   = (s16) (arg1 - M2C_FIELD(arg0, s16 *, 8));
    M2C_FIELD(temp_r0, s16 *, 0x28)   = (s16) (arg4 - M2C_FIELD(arg0, s16 *, 0xA));
    M2C_FIELD(temp_r0, s32 *, 0x34)   = 0;
}
