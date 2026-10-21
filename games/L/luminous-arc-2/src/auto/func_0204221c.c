#include "m2c.h"

M2C_UNK func_0200a714(M2C_UNK *);                   /* extern */
s32 func_0200a9f4(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_0200aa3c(M2C_UNK *);                   /* extern */
M2C_UNK func_0200ab48(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0200ab58(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_020f0a5c;

void func_0204221c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    u8 sp0[72];

    if (arg0 != 3) {
        return;
    }
    func_0200a714(sp0);
    if (func_0200a9f4(sp0, &data_020f0a5c) == 0) {
        return;
    }
    func_0200ab58(sp0, arg1 << 5, 0);
    func_0200ab48(sp0, arg2, 0x20);
    func_0200aa3c(sp0);
}
