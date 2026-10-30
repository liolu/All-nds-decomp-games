#include "m2c.h"

extern M2C_UNK data_020ceeec;

void func_02096668(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ceeec;
    M2C_FIELD(arg0, s32 *, 4)      = 0x64;
    M2C_FIELD(arg0, s32 *, 8)      = 0x64;
}
