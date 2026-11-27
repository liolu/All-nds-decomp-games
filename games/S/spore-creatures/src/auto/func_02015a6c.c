#include "m2c.h"

M2C_UNK func_02015fa0();                            /* extern */
extern M2C_UNK data_020de248;

void *func_02015a6c(void *arg0) {
    func_02015fa0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de248;
    M2C_FIELD(arg0, s32 *, 0x30)   = 0;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x40)   = 0;
    M2C_FIELD(arg0, s32 *, 0x44)   = 0;
    return arg0;
}
