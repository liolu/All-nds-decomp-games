#include "m2c.h"

M2C_UNK func_0202f118(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020abf60(M2C_UNK *);                   /* extern */
M2C_UNK func_020abfd4(M2C_UNK *);                   /* extern */
s32 func_020ac3ac(M2C_UNK *);                       /* extern */

s32 func_020054cc(void) {
    u8 sp0[12];
    s32 temp_r4;

    func_020abf60(sp0);
    func_0202f118(sp0, 1);
    temp_r4 = func_020ac3ac(sp0);
    func_020abfd4(sp0);
    return temp_r4;
}
