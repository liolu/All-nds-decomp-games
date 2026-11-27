#include "m2c.h"

M2C_UNK func_020d8e00(M2C_UNK *);                   /* extern */
M2C_UNK func_020d8e40(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020d8f08(M2C_UNK, M2C_UNK *);          /* extern */

void func_020e3758(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[88];

    func_020d8e00(sp0);
    func_020d8e40(sp0, arg1, arg2);
    func_020d8f08(arg0, sp0);
}
