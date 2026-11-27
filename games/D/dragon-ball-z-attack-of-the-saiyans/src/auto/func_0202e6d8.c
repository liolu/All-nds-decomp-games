#include "m2c.h"

M2C_UNK func_0200bd28(M2C_UNK);                     /* extern */
M2C_UNK func_02032678();                            /* extern */
extern void *data_020d1d24;

void func_0202e6d8(M2C_UNK arg0) {
    if (M2C_FIELD(data_020d1d24, u8 *, 1) != 1) {
        return;
    }
    M2C_FIELD(data_020d1d24, s8 *, 0xF) = 0;
    M2C_FIELD(data_020d1d24, s8 *, 4)   = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0xB) = 0;
    func_02032678();
    func_0200bd28(arg0);
}
