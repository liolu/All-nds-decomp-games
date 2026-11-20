#include "m2c.h"

extern M2C_UNK data_020f3ae0;

s32 func_020bdb88(void) {
    if (M2C_FIELD(&data_020f3ae0, s32 *, 0x114) != 0) {
        return 1;
    }
    return 0;
}
