#include "m2c.h"

extern M2C_UNK data_020a74c4;

void func_0202dd30(s32 arg0) {
    void *temp_r1;

    temp_r1 = *((M2C_UNK *) ((s8 *) &data_020a74c4 + (arg0 * 4)));
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x3C) = 1;
    }
}
