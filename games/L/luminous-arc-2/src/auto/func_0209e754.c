#include "m2c.h"

M2C_UNK func_0200766c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209e6b8(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0211d89c;
extern M2C_UNK data_0211d8a0;
extern M2C_UNK data_0211d8a4;

void func_0209e754(M2C_UNK arg0) {
    u8 sp20[16];
    u8 sp10[16];
    u8 sp0[16];

    func_0209e6b8(sp0, &data_0211d89c, arg0);
    func_0209e6b8(sp10, &data_0211d8a0, arg0);
    func_0209e6b8(sp20, &data_0211d8a4, arg0);
    func_0200766c(sp0, arg0, 0x30);
}
