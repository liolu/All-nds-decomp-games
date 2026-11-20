#include "m2c.h"

M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0202b30c(M2C_UNK *, u16, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0210dfb4;

void func_020628c4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[64];

    func_0201b0f4(sp0, &data_0210dfb4, arg1);
    if (arg0 & 1) {
        func_0202b30c(sp0, *(u16 *) 0x04000008, arg2, 0xC00);
    }
    if (!(arg0 & 2)) {
        return;
    }
    func_0202b30c(sp0, *(u16 *) 0x04001008 | 0x80000000, arg2, 0xC00);
}
