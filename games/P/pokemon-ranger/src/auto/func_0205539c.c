#include "m2c.h"

M2C_UNK func_0201d5e0(void *, s16);                 /* extern */

void func_0205539c(void *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    M2C_FIELD(arg0, s16 *, 0x46) = arg1;
    M2C_FIELD(arg0, s16 *, 0x48) = arg2;
    M2C_FIELD(arg0, s16 *, 0x4A) = arg3;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg4;
    func_0201d5e0(arg0, M2C_FIELD(arg0, s16 *, 0x46));
}
