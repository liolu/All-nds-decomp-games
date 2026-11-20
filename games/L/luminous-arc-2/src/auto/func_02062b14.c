#include "m2c.h"

M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_0202b30c(M2C_UNK *, u16, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0210e014;

void func_02062b14(s32 arg0, s32 arg1, M2C_UNK arg2) {
    u8 sp0[64];

    func_0201b0f4(sp0, &data_0210e014, arg1 + 1);
    if (arg0 & 1) {
        func_0202b30c(sp0, *(u16 *) 0x04000008, arg2, 0x300);
    }
    if (!(arg0 & 2)) {
        return;
    }
    func_0202b30c(sp0, *(u16 *) 0x04001008 | 0x80000000, arg2, 0x300);
}
