#include "m2c.h"

M2C_UNK func_02004978(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020a666c(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_0212d924;

void func_020a66ac(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[20];

    func_02004978(sp0, &data_0212d924);
    func_020a666c(arg0, arg1, sp0);
}
