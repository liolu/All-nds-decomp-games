#include "m2c.h"

M2C_UNK func_020c665c();                            /* extern */

void func_020d88bc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x168) = 3;
    func_020c665c(arg0, arg1);
}
