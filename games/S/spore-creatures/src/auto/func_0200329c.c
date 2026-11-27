#include "m2c.h"

M2C_UNK func_02003798(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020ddaf4;

void *func_0200329c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ddaf4;
    func_02003798(arg0 + 4, 0xA);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    return arg0;
}
