#include "m2c.h"

M2C_UNK func_02003f2c();                            /* extern */
extern M2C_UNK data_020dee04;

void *func_020426e8(void *arg0) {
    func_02003f2c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dee04;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    return arg0;
}
