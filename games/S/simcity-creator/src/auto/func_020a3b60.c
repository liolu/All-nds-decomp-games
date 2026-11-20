#include "m2c.h"

M2C_UNK func_02006ee8(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020a3b60(void *arg0, s32 arg1, s8 arg2, s16 arg3, s16 arg4) {
    func_02006ee8(arg0 + 0x10, 0, 0x40);
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    M2C_FIELD(arg0, s8 *, 0x4A)  = arg2;
    M2C_FIELD(arg0, s8 *, 0x49)  = arg2;
    M2C_FIELD(arg0, s16 *, 0x28) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2A) = arg4;
    M2C_FIELD(arg0, s16 *, 0x24) = arg3;
    M2C_FIELD(arg0, s16 *, 0x26) = arg4;
    M2C_FIELD(arg0, s8 *, 0x48)  = 1;
}
