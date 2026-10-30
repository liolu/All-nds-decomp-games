#include "m2c.h"

M2C_UNK func_02003270(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02003570(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020b967c();                            /* extern */

void func_020b963c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_02003570(M2C_FIELD(arg0, s32 *, 0), 0x6000, 0x800);
        func_02003270(M2C_FIELD(arg0, s32 *, 4), 0x540, 0xC0);
        return;
    }
    func_020b967c(arg0);
}
