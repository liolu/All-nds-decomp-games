#include "m2c.h"

s32 func_020198b0(M2C_UNK);                         /* extern */

void func_020af540(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = func_020198b0(arg1);
    M2C_FIELD(arg0, s32 *, 0xC)  = arg3;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
}
