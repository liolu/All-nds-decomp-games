#include "m2c.h"

M2C_UNK func_02004978(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020afe40(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_0212dde4;

void func_020afe70(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[16];

    func_02004978(sp0, &data_0212dde4);
    func_020afe40(arg0, arg1, sp0);
}
