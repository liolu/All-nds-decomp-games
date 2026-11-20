#include "m2c.h"

M2C_UNK func_02003a10();                            /* extern */
extern M2C_UNK data_020ddb4c;

void *func_0200388c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ddb4c;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg1;
    func_02003a10();
    return arg0;
}
