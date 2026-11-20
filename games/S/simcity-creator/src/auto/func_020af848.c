#include "m2c.h"

extern M2C_UNK data_020d0100;

void func_020af848(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d0100;
    M2C_FIELD(arg0, s32 *, 36)     = 0;
}
