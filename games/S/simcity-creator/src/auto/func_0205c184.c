#include "m2c.h"

s32 func_020547dc(M2C_UNK);                         /* extern */
s32 func_0206be00(s32, M2C_UNK);                    /* extern */

void func_0205c184(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = func_020547dc(arg3);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = func_0206be00(M2C_FIELD(arg0, s32 *, 8), 0x2C);
    M2C_FIELD(arg0, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
