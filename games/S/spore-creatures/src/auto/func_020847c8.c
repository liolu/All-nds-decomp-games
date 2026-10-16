#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020e2e14;

s32 func_020847c8(s32 arg0) {
    void *temp_r1;

    temp_r1 = *((M2C_UNK *) ((s8 *) &data_020e2e14 + (arg0 * 8)));
    if (temp_r1 == ((M2C_UNK *) ((s8 *) &data_020e2e14 + (arg0 * 8)))) {
        return 0;
    }
    return M2C_FIELD(temp_r1, s32 *, 4) + 0x20;
}
