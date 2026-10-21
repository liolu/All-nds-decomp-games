#include "m2c.h"

extern M2C_UNK data_0217296c;

s32 func_020a5234(void) {
    s32 temp_r0;

    temp_r0                                 = M2C_FIELD(&data_0217296c, s32 *, 0xE90);
    M2C_FIELD(&data_0217296c, s32 *, 0xE90) = 0;
    return temp_r0;
}
