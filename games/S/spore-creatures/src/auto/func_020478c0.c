#include "m2c.h"

M2C_UNK func_02047564();                            /* extern */
extern M2C_UNK data_020defac;

void *func_020478c0(void *arg0) {
    func_02047564();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020defac;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x40)   = 0;
    M2C_FIELD(arg0, s32 *, 0x44)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s32 *, 0x4C)   = 0;
    return arg0;
}
