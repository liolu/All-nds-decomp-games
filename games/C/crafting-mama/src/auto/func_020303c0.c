#include "m2c.h"

extern M2C_UNK data_020a8a6e;

s32 func_020303c0(void) {
    if (M2C_FIELD(&data_020a8a6e, u16 *, 4) == 1) {
        return 1;
    }
    return 0;
}
