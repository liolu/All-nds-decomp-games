#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0215dabc;

s32 func_02036aa8(void) {
    s32 temp_r0;

    temp_r0                                = M2C_FIELD(&data_0215dabc, s32 *, 0x20) + 1;
    M2C_FIELD(&data_0215dabc, s32 *, 0x20) = temp_r0;
    return temp_r0;
}
