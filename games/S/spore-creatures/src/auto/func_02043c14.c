#include "m2c.h"

extern M2C_UNK data_020e7c90;

s32 func_02043c14(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x120) == M2C_FIELD(&data_020e7c90, u8 *, 0x8E)) {
        return 1;
    }
    return 0;
}
