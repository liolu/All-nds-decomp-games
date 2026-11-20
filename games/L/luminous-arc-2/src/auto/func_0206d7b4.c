#include "m2c.h"

extern M2C_UNK data_0216f3dc;

s32 func_0206d7b4(void) {
    if (M2C_FIELD(&data_0216f3dc, s32 *, 0x8B4) != 0) {
        return 1;
    }
    return 0;
}
