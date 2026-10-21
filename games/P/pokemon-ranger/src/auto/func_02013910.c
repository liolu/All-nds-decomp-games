#include "m2c.h"

M2C_UNK func_020b7b5c();                            /* extern */
extern M2C_UNK data_020e71a0;

void *func_02013910(void *arg0) {
    func_020b7b5c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e71a0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0x7F;
    return arg0;
}
