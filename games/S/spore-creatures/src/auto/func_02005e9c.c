#include "m2c.h"

M2C_UNK func_020055f4(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_0200575c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0202f16c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0202f198();                            /* extern */
M2C_UNK func_020abf74(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */
M2C_UNK func_020ac39c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e0bb8;

void func_02005e9c(M2C_UNK arg0) {
    u8 sp0[12];

    func_020abf74(sp0, M2C_FIELD(&data_020e0bb8, u8 *, 0x3E) << 0xB);
    if (func_0200575c(3, arg0, sp0, 1) != 0) {
        func_020ac39c(sp0, 0);
        func_0202f16c(sp0, 1, 1);
        func_020055f4(3, arg0, sp0);
    } else {
        func_0202f198();
    }
    func_020abfd4(sp0);
}
