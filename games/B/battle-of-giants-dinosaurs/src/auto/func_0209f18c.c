#include "m2c.h"

M2C_UNK func_0209f16c();                            /* extern */
extern M2C_UNK data_020bf53c;

void *func_0209f18c(void *arg0, s32 arg1) {
    func_0209f16c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf53c;
    M2C_FIELD(arg0, s32 *, 0x18)   = arg1;
    return arg0;
}
