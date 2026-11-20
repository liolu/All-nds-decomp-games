#include "m2c.h"

extern M2C_UNK data_02090780;

s32 func_0206a958(void) {
    if (!(M2C_FIELD(&data_02090780, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
