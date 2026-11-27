#include "m2c.h"

M2C_UNK func_02019d6c();                            /* extern */
extern M2C_UNK data_020de370;

void *func_0201bb60(void *arg0) {
    func_02019d6c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de370;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x40)    = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0x13893126;
    return arg0;
}
