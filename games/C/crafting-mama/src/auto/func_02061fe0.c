#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_02061f6c;
extern M2C_UNK func_02061fcc;
extern M2C_UNK func_02061fdc;

void *func_02061fe0(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *temp_r0;
    void *temp_r4;

    temp_r4                              = func_020291d0(&func_02061f6c, 0xD070);
    temp_r0                              = func_020291d0(&func_02061fdc, 0x1015);
    M2C_FIELD(temp_r0, M2C_UNK **, 0x14) = &func_02061fcc;
    M2C_FIELD(temp_r0, void **, 0x1C)    = temp_r4;
    M2C_FIELD(temp_r4, s16 *, 0x24)      = arg0;
    M2C_FIELD(temp_r4, s16 *, 0x26)      = arg1;
    M2C_FIELD(temp_r4, s16 *, 0x28)      = arg2;
    M2C_FIELD(temp_r4, s16 *, 0x2A)      = arg3;
    M2C_FIELD(temp_r4, s32 *, 0x2C)      = arg4;
    M2C_FIELD(temp_r4, s32 *, 0x30)      = arg5;
    M2C_FIELD(temp_r4, s32 *, 0x34)      = arg6;
    return temp_r4;
}
