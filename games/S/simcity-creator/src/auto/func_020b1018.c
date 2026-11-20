#include "m2c.h"

extern M2C_UNK data_020d01fc;

void func_020b1018(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d01fc;
    M2C_FIELD(arg0, s32 *, 0x30)   = 0;
    M2C_FIELD(arg0, s32 *, 0x34)   = 5;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
}
