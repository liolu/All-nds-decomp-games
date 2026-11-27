#include "m2c.h"

M2C_UNK func_0200547c();                            /* extern */
s32 func_0200575c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02006090(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
s32 func_020065dc(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0202eab0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020abf74(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */
M2C_UNK func_020ac39c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e0bb8;
extern M2C_UNK data_020e0bcc;

s32 func_02005fa4(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[12];

    if (func_020065dc(&data_020e0bcc, 3, arg0) == 0) {
        return 0;
    }
    func_020abf74(sp0, M2C_FIELD(&data_020e0bb8, u8 *, 0x3E) << 0xB);
    if (func_0200575c(3, arg0, sp0, 0) != 0) {
        func_020ac39c(sp0, 0);
        func_0202eab0(arg1, sp0, 0);
        func_020abfd4(sp0);
        return 1;
    }
    func_0200547c();
    if (func_02006090(3, arg0, sp0) != 0) {
        func_0202eab0(arg1, sp0, 0);
        func_020abfd4(sp0);
        return 1;
    }
    func_020abfd4(sp0);
    return 0;
}
