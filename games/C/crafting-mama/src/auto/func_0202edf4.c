#include "m2c.h"

extern M2C_UNK data_020a7508;

void func_0202edf4(s32 arg0) {
    void *temp_r1;

    temp_r1 = *((M2C_UNK *) ((s8 *) &data_020a7508 + (arg0 * 4)));
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s8 *, 0x34) = 1;
    }
}
