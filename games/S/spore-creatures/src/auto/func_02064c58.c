#include "m2c.h"

M2C_UNK func_02064e48();                            /* extern */

void func_02064c58(void *arg0, s32 arg1) {
    func_02064e48();
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}
