#include "m2c.h"

extern M2C_UNK data_02033c20;

s32 func_02005a70(void) {
    if (!(M2C_FIELD(&data_02033c20, s32 *, 4) & 4)) {
        return 1;
    }
    return 0;
}
