#include "m2c.h"

s32 func_0203047c(s32);                             /* extern */
M2C_UNK func_02030544(void *, s32, M2C_UNK);        /* extern */
s32 func_020ae880();                                /* extern */

void func_020ae7e0(void *arg0) {
    if (func_020ae880() == 0) {
        return;
    }
    if (func_0203047c(M2C_FIELD(arg0, s32 *, 0xB0)) != 0) {
        return;
    }
    func_02030544(arg0 + 0x9C, M2C_FIELD(arg0, s32 *, 0xB8), 0);
    M2C_FIELD(arg0, s32 *, 0xB0) = -1;
    M2C_FIELD(arg0, s8 *, 0xB4)  = 0;
}
