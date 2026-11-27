#include "m2c.h"

extern M2C_UNK data_021e3840;

s32 func_020dc93c(void) {
    if (!(M2C_FIELD(&data_021e3840, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
