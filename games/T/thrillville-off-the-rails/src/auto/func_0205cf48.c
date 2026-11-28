#include "m2c.h"

M2C_UNK func_0205d1c0(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02088534(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020e1740;

void func_0205cf48(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[256];

    func_02088534(sp0, &data_020e1740, arg1);
    func_0205d1c0(arg0, sp0);
}
