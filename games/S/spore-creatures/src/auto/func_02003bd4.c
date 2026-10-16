#include "m2c.h"

M2C_UNK func_02003d38();                            /* extern */
extern M2C_UNK data_020ddabc;

void *func_02003bd4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ddabc;
    M2C_FIELD(arg0, s8 *, 0x20)    = arg1;
    func_02003d38();
    return arg0;
}
