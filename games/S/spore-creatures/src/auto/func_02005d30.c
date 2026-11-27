#include "m2c.h"

M2C_UNK func_020055f4(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0202f140(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020abf74(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e0bb8;

void func_02005d30(M2C_UNK arg0) {
    u8 sp0[12];

    func_020abf74(sp0, M2C_FIELD(&data_020e0bb8, u8 *, 0x32) << 0xB);
    func_0202f140(sp0, 1);
    func_020055f4(2, arg0, sp0);
    func_020abfd4(sp0);
}
