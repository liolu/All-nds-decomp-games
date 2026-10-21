#include "m2c.h"

M2C_UNK func_020a21d4(M2C_UNK *);                   /* extern */
M2C_UNK func_020a21e0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020a21ec(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020aa7c8(M2C_UNK *, M2C_UNK);          /* extern */

void func_020aa824(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp10[88];
    u8 sp0[16];

    func_020a21d4(sp10);
    func_020a21e0(sp10, arg0, arg1);
    func_020a21ec(sp0, sp10);
    func_020aa7c8(sp0, arg2);
}
