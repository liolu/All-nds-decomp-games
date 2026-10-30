#include "m2c.h"

s32 func_0206bbe0(M2C_UNK);                         /* extern */
s32 func_02071c48(s32);                             /* extern */
s32 func_0207441c(s32, M2C_UNK);                    /* extern */

void func_0205d5c4(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 4)    = func_0206bbe0(arg2);
    M2C_FIELD(arg0, s32 *, 0xC)  = arg3;
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = func_0207441c(func_02071c48(arg1), 0);
}
