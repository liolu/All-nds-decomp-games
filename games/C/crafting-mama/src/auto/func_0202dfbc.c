#include "m2c.h"

extern M2C_UNK data_020a74c4;

s32 func_0202dfbc(s32 arg0) {
    void *temp_r0;

    temp_r0 = *((M2C_UNK *) ((s8 *) &data_020a74c4 + (arg0 * 4)));
    if (temp_r0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_r0, s32 *, 0x1C);
}
