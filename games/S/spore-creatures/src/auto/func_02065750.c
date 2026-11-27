#include "m2c.h"

extern M2C_UNK data_020e0f6c;

void func_02065750(void *arg0) {
    s32 temp_r1;

    temp_r1                                                = M2C_FIELD(arg0, s32 *, 0xCC);
    *((M2C_UNK *) ((s8 *) &data_020e0f6c + (temp_r1 * 4))) = *((M2C_UNK *) ((s8 *) &data_020e0f6c + (temp_r1 * 4))) - 1;
}
