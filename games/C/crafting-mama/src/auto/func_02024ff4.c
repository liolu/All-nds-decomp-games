#include "m2c.h"

extern M2C_UNK data_02096c80;

s32 func_02024ff4(void) {
    if (!(M2C_FIELD(&data_02096c80, s32 *, 4) & 4)) {
        return 1;
    }
    return 0;
}
