#include "m2c.h"

extern M2C_UNK data_020e0110;

void func_020a88ac(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0110;
    M2C_FIELD(arg0, s32 *, 4)      = -1;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
}
