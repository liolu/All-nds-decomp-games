#include "m2c.h"

M2C_UNK func_020d4790(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_020b89c8(void *arg0) {
    func_020d4790(0, arg0 + 4, 0x18);
    M2C_FIELD(arg0, s32 *, 4) = 0x1000;
    M2C_FIELD(arg0, s32 *, 8) = 0x1000;
}
