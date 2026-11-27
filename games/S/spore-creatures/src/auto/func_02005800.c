#include "m2c.h"

M2C_UNK func_0202e0fc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0202e138(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0202e280(M2C_UNK *);                   /* extern */
M2C_UNK func_0202f198();                            /* extern */
s32 func_02094b78(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_020abf74(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */
s32 func_020ac3a4(M2C_UNK *);                       /* extern */
s32 func_020ac3ac(M2C_UNK *);                       /* extern */

void func_02005800(M2C_UNK arg0) {
    u8 spC[32];
    u8 sp0[12];
    s32 temp_r4;

    func_0202e0fc(spC, -1);
    func_0202e280(spC);
    func_020abf74(sp0, 0x800);
    func_0202e138(spC, sp0, 1);
    temp_r4 = func_020ac3a4(sp0);
    if (func_02094b78(temp_r4, func_020ac3ac(sp0), arg0) != 0) {
        func_0202f198();
    }
    func_020abfd4(sp0);
}
