#include "m2c.h"

M2C_UNK func_02009ff4(void *);                      /* extern */
M2C_UNK func_0200a104(void *, M2C_UNK);             /* extern */
s32 func_0203f9f0(s32, M2C_UNK);                    /* extern */

void func_02009d0c(void *arg0) {
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0x20) == 0) &&
        (func_0203f9f0(M2C_FIELD(arg0, s32 *, 0x64), 0x67) == 3)) {
        func_0200a104(arg0, 3);
        M2C_FIELD(arg0, u8 *, 0x60) = 1U;
    }
    if (M2C_FIELD(arg0, u8 *, 0x60) == 0) {
        return;
    }
    func_02009ff4(arg0);
}
