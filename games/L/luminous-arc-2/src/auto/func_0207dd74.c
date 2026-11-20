#include "m2c.h"

M2C_UNK func_0200766c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02018ef8(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_0207ddf4(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0211c114;

void func_0207dd74(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp8[16];
    u8 sp0[8];

    func_0207ddf4(arg0, sp0);
    if (func_02018ef8(sp0, &data_0211c114, 8) != 0) {
        return;
    }
    func_0200766c(sp8, arg1, 0xA);
}
