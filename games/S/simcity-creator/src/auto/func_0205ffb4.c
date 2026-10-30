#include "m2c.h"

s32 func_0206bbe0(M2C_UNK);                         /* extern */
s32 func_0206bdec(M2C_UNK);                         /* extern */
s32 func_0206bdf4(M2C_UNK, M2C_UNK);                /* extern */

void func_0205ffb4(void *arg0, s16 arg1, s16 arg2, M2C_UNK arg3) {
    M2C_FIELD(arg0, s16 *, 0)    = 0;
    M2C_FIELD(arg0, s16 *, 2)    = 0;
    M2C_FIELD(arg0, s16 *, 4)    = arg1;
    M2C_FIELD(arg0, s16 *, 6)    = arg2;
    M2C_FIELD(arg0, s32 *, 8)    = func_0206bbe0(arg3);
    M2C_FIELD(arg0, s16 *, 0x14) = 0x7FFF;
    M2C_FIELD(arg0, s32 *, 0xC)  = func_0206bdec(arg3);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0206bdf4(arg3, 0);
    M2C_FIELD(arg0, s16 *, 0x16) = 0;
}
