#include "m2c.h"

extern M2C_UNK data_020e0008;

void func_020a4374(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0008;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
}
