#include "m2c.h"

M2C_UNK func_02045610();                            /* extern */

void func_020455fc(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 0x158) = arg1;
    M2C_FIELD(arg0, s8 *, 0x161)  = arg2;
    func_02045610();
}
