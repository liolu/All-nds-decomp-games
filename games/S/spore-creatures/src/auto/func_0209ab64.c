#include "m2c.h"

M2C_UNK func_0209a7d8();                            /* extern */
extern M2C_UNK data_020dfeec;

void *func_0209ab64(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfeec;
    M2C_FIELD(arg0, s8 *, 0x20)    = arg1;
    func_0209a7d8();
    return arg0;
}
