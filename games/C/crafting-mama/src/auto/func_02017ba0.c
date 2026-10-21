#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020940c4;

s32 func_02017ba0(void) {
    s32 temp_r0;

    temp_r0                                = M2C_FIELD(&data_020940c4, s32 *, 0x18) + 1;
    M2C_FIELD(&data_020940c4, s32 *, 0x18) = temp_r0;
    return temp_r0;
}
