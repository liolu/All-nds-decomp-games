#include "m2c.h"

void *func_020291d0(M2C_UNK *, u16);                /* extern */
M2C_UNK func_0205d6d0(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_02030c88;

void func_02030c0c(void *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u16 arg8) {
    void *temp_r0;

    temp_r0                           = func_020291d0(&func_02030c88, arg8);
    M2C_FIELD(temp_r0, void **, 0x1C) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x20)   = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x24)   = (s32) ((s32) (arg2 + (arg2 >> 0x1F)) >> 1);
    M2C_FIELD(temp_r0, s32 *, 0x28)   = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x2C)   = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x30)   = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x34)   = arg6;
    M2C_FIELD(temp_r0, s32 *, 0x38)   = arg7;
    M2C_FIELD(temp_r0, s32 *, 0x3C)   = (s32) M2C_FIELD(arg0, s16 *, 8);
    M2C_FIELD(temp_r0, s32 *, 0x40)   = (s32) M2C_FIELD(arg0, s16 *, 0xA);
    func_0205d6d0(arg0, 2);
}
