#include "m2c.h"

extern M2C_UNK data_020f8a80;

s32 func_020cf5e0(void) {
    if (M2C_FIELD(&data_020f8a80, s32 *, 0xE0) != 0) {
        return 1;
    }
    return 0;
}
