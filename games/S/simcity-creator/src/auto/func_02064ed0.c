#include "m2c.h"

s32 func_0206bbe0(M2C_UNK);                         /* extern */
s32 func_0206bdf4(M2C_UNK, M2C_UNK);                /* extern */

void func_02064ed0(void *arg0, s32 arg1, M2C_UNK arg2) {
    M2C_FIELD(arg0, s32 *, 0xC)  = func_0206bbe0(arg2);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0206bdf4(arg2, 2);
}
