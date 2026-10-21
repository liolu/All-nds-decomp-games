#include "m2c.h"

M2C_UNK func_01ffb4f0();                            /* extern */

void func_020542f8(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x50) = arg1;
    M2C_FIELD(arg0, s16 *, 0x52) = arg2;
    func_01ffb4f0();
}
