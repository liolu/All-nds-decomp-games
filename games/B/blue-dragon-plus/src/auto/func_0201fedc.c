#include "m2c.h"

extern M2C_UNK data_0207bb18;

void func_0201fedc(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207bb18;
    M2C_FIELD(arg0, s32 *, 4)      = arg2;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
}
