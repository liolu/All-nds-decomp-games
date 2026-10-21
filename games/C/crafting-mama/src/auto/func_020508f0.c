#include "m2c.h"

M2C_UNK func_02016ab0(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_020508f0(void *arg0) {
    func_02016ab0(0, arg0 + 4, 0x18);
    M2C_FIELD(arg0, s32 *, 4) = 0x1000;
    M2C_FIELD(arg0, s32 *, 8) = 0x1000;
}
