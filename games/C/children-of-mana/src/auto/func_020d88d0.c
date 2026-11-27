#include "m2c.h"

M2C_UNK func_020c66a8();                            /* extern */

void func_020d88d0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x168) = 2;
    func_020c66a8(arg0, arg1);
}
