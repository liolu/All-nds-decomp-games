#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020d8cdc;

void func_0200129c(s32 arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8cdc;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
}
