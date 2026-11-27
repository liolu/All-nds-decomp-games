#include "m2c.h"

M2C_UNK func_0200547c();                            /* extern */
s32 func_0200575c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02006090(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_0202edc0(s32);                         /* extern */
M2C_UNK func_0202f140(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020abf74(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */
M2C_UNK func_020ac39c(M2C_UNK *, M2C_UNK);          /* extern */
extern void *data_020e0ba0;
extern M2C_UNK data_020e0bb8;

s32 func_02005d80(M2C_UNK arg0) {
    u8 sp0[12];

    func_020abf74(sp0, M2C_FIELD(&data_020e0bb8, u8 *, 0x32) << 0xB);
    if (func_0200575c(2, arg0, sp0, 0) != 0) {
        func_020ac39c(sp0, 0);
        func_0202f140(sp0, 0);
        func_020abfd4(sp0);
        return 1;
    }
    func_0200547c();
    if (func_02006090(2, arg0, sp0) != 0) {
        func_0202f140(sp0, 0);
    } else {
        func_0202edc0(M2C_FIELD(data_020e0ba0, s32 *, 4) + 0x2E68);
    }
    func_020abfd4(sp0);
    return 1;
}
