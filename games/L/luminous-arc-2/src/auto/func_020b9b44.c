#include "m2c.h"

extern M2C_UNK data_0212ec00;

s32 func_020b9b44(void) {
    if (M2C_FIELD(&data_0212ec00, s32 *, 4) != -1) {
        return 1;
    }
    return 0;
}
