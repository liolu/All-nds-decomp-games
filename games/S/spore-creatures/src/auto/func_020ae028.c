#include "m2c.h"

M2C_UNK func_020ae18c();                            /* extern */
extern M2C_UNK data_020e02e0;

void *func_020ae028(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e02e0;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg1;
    func_020ae18c();
    return arg0;
}
