#include "m2c.h"

s32 func_0202962c(s32, u16);                        /* extern */
M2C_UNK func_0202b090(void *, s32, s32);            /* extern */

void func_020b0018(void *arg0, void *arg1) {
    func_0202b090(arg1 + 0x18, func_0202962c(M2C_FIELD(arg0, s32 *, 0xEC), M2C_FIELD(arg1, u16 *, 0xE)),
                  M2C_FIELD(arg0, s32 *, 0xE4));
}
