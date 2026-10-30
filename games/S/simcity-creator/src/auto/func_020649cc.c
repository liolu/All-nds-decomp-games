#include "m2c.h"

s32 func_0206bbe0(M2C_UNK);                         /* extern */
s32 func_0206bdf4(M2C_UNK, M2C_UNK);                /* extern */

void func_020649cc(void *arg0, s32 arg1, M2C_UNK arg2) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = func_0206bbe0(arg2);
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x14)  = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = func_0206bdf4(arg2, 3);
}
