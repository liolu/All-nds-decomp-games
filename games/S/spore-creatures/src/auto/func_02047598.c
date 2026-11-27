#include "m2c.h"

M2C_UNK func_02058c2c();                            /* extern */
extern M2C_UNK data_020defc4;

void *func_02047598(void *arg0) {
    func_02058c2c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020defc4;
    M2C_FIELD(arg0, s16 *, 0x34)   = 0x7FFF;
    M2C_FIELD(arg0, s8 *, 0x36)    = 1;
    return arg0;
}
