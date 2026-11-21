#include "m2c.h"

M2C_UNK func_02095158(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020b91dc;
extern M2C_UNK data_020b920c;

void *func_02095110(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020b920c;
    func_02095158(arg0 + 4, 0);
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020b91dc;
    M2C_FIELD(arg0, s8 *, 0x14)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    return arg0;
}
