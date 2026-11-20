#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020e0274;

void func_020ae574(s32 arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0274;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
}
