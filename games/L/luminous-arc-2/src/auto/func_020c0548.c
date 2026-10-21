#include "m2c.h"

M2C_UNK func_02004978(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020c057c(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0212fb9c;

void func_020c0548(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[20];

    func_02004978(sp0, &data_0212fb9c, arg1);
    func_020c057c(arg0, sp0);
}
