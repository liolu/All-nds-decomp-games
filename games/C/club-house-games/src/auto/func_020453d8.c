#include "m2c.h"

extern M2C_UNK data_02240fe8;

s32 func_020453d8(void) {
    if (M2C_FIELD(&data_02240fe8, s32 *, 52) != 0) {
        return 1;
    }
    return 0;
}
