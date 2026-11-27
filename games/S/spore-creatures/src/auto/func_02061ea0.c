#include "m2c.h"

M2C_UNK func_02062328();                            /* extern */

void func_02061ea0(void *arg0, u16 arg1, u16 arg2) {
    if ((M2C_FIELD(arg0, u16 *, 0x2C) == arg1) && (M2C_FIELD(arg0, u16 *, 0x2E) == arg2)) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x2C) = arg1;
    M2C_FIELD(arg0, u16 *, 0x2E) = arg2;
    func_02062328();
}
