#include "m2c.h"

M2C_UNK func_020b0aa8(s32, s32);                    /* extern */

void func_020b0b0c(void *arg0) {
    func_020b0aa8(M2C_FIELD(arg0, s32 *, 0) + 0x80, M2C_FIELD(arg0, s32 *, 4) - 0x80);
}
