#include "m2c.h"

extern M2C_UNK data_020d2de0;

s32 func_0200d66c(void) {
    if (!(M2C_FIELD(&data_020d2de0, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
