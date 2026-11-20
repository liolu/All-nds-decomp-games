#include "m2c.h"

extern M2C_UNK data_020e3eb0;

void func_020b105c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e3eb0;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
}
