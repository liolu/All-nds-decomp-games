#include "m2c.h"

s32 func_0206bbe0(M2C_UNK);                         /* extern */
s32 func_0206bdec(M2C_UNK);                         /* extern */
s32 func_0206bdf4(M2C_UNK, M2C_UNK);                /* extern */

void func_0205e75c(void *arg0, s16 arg1, s16 arg2, M2C_UNK arg3, s32 arg4) {
    M2C_FIELD(arg0, s16 *, 0)    = arg1;
    M2C_FIELD(arg0, s16 *, 2)    = arg2;
    M2C_FIELD(arg0, s32 *, 4)    = func_0206bbe0(arg3);
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0xC)  = func_0206bdec(arg3);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0206bdf4(arg3, 8);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0206bdf4(arg3, 0xB);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
}
