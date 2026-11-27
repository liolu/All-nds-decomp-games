#include "m2c.h"

extern M2C_UNK data_021112bc;

void func_0200f640(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 8)                                         = arg0;
    M2C_FIELD(arg2, s32 *, 0x14)                                      = arg1;
    M2C_FIELD(arg2, M2C_UNK **, 0x10)                                 = &data_021112bc;
    M2C_FIELD(arg2, void **, 0xC)                                     = (void *) M2C_FIELD(&data_021112bc, void **, 0xC);
    M2C_FIELD(M2C_FIELD(&data_021112bc, void **, 0xC), void **, 0x10) = arg2;
    M2C_FIELD(&data_021112bc, void **, 0xC)                           = arg2;
}
