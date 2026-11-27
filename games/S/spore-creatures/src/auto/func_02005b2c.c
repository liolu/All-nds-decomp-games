#include "m2c.h"

M2C_UNK func_02005b78(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02005c5c();                            /* extern */
M2C_UNK func_020abf74(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */

void func_02005b2c(void) {
    u8 sp0[12];

    func_020abf74(sp0, 0x800);
    func_02005b78(1, sp0);
    func_02005c5c();
    func_02005b78(2, sp0);
    func_02005b78(3, sp0);
    func_020abfd4(sp0);
}
