#include "m2c.h"

M2C_UNK func_02090a4c();                            /* extern */

void *func_02090c04(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x31) = 0x10;
    M2C_FIELD(arg0, s8 *, 0x33) = 0;
    func_02090a4c(arg0, arg1);
    return arg0;
}
