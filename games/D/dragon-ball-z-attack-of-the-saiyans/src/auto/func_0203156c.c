#include "m2c.h"

M2C_UNK func_0200b798(M2C_UNK);                     /* extern */
M2C_UNK func_02018344(M2C_UNK);                     /* extern */
M2C_UNK func_020183b0(M2C_UNK, M2C_UNK);            /* extern */
extern void *data_020d1d24;

void func_0203156c(void) {
    func_02018344(0);
    func_020183b0(0, 0xF);
    func_0200b798(0);
    M2C_FIELD(data_020d1d24, s8 *, 0) = 1;
    M2C_FIELD(data_020d1d24, s8 *, 1) = 0;
    M2C_FIELD(data_020d1d24, s8 *, 2) = 0;
    M2C_FIELD(data_020d1d24, s8 *, 3) = 1;
}
