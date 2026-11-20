#include "m2c.h"

extern M2C_UNK data_020a74c4;

void func_0202dfa4(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = *((M2C_UNK *) ((s8 *) &data_020a74c4 + (arg0 * 4)));
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x34) = arg1;
    }
}
