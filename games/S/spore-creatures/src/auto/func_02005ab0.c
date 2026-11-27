#include "m2c.h"

s32 func_020065b8(M2C_UNK *);                       /* extern */
M2C_UNK func_0202f0d0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0202f198();                            /* extern */
s32 func_02094b78(s32, s32, s32);                   /* extern */
M2C_UNK func_020abf74(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */
s32 func_020ac3a4(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020e0bb8;
extern M2C_UNK data_020e0bcc;

void func_02005ab0(void) {
    u8 sp0[12];
    s32 temp_r4;
    s32 temp_r5;

    func_020abf74(sp0, M2C_FIELD(&data_020e0bb8, u8 *, 0x1A) << 0xB);
    func_0202f0d0(sp0, 1);
    temp_r5 = M2C_FIELD(&data_020e0bb8, u8 *, 0x1A) << 8;
    temp_r4 = func_020ac3a4(sp0);
    if (func_02094b78(temp_r4, temp_r5, func_020065b8(&data_020e0bcc)) != 0) {
        func_0202f198();
    }
    func_020abfd4(sp0);
}
