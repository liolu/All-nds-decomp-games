#include "m2c.h"

M2C_UNK func_020ae480();                            /* extern */
extern M2C_UNK data_020e0264;

void *func_020ae31c(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0264;
    M2C_FIELD(arg0, s8 *, 0x20)    = arg1;
    func_020ae480();
    return arg0;
}
