#include "m2c.h"

M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0202b1b8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020effac;

void func_02031e9c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[64];

    func_0201b0f4(sp0, &data_020effac, arg0);
    func_0202b1b8(sp0, arg2, arg1, 0x10);
}
