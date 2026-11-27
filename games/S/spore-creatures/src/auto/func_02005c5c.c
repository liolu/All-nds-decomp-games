#include "m2c.h"

M2C_UNK func_0200547c();                            /* extern */
M2C_UNK func_020055f4(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_0200575c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02006090(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
s32 func_020065dc(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0202f118(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020abf74(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */
M2C_UNK func_020ac39c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e0bb8;
extern M2C_UNK data_020e0bcc;

void func_02005c5c(void) {
    u8 sp0[12];
    s32 temp_r0;

    func_020abf74(sp0, M2C_FIELD(&data_020e0bb8, u8 *, 0x26) << 0xB);
    temp_r0 = func_020065dc(&data_020e0bcc, 1, 0);
    if ((temp_r0 != 0) && (func_0200575c(1, 0, sp0, 0) != 0)) {
        func_020ac39c(sp0, 0);
        func_0202f118(sp0, 0);
    } else {
        func_0200547c();
        if ((temp_r0 == 1) && (func_02006090(1, 0, sp0) != 0)) {
            func_0202f118(sp0, 0);
        } else {
            func_0202f118(sp0, 1);
            func_020055f4(1, 0, sp0);
        }
    }
    func_020abfd4(sp0);
}
