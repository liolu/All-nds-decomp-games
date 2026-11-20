#include "m2c.h"

extern M2C_UNK data_02173c18;

s32 func_020a6fd0(s32 arg0) {
    if (arg0 == M2C_FIELD(&data_02173c18, s32 *, 8)) {
        return 1;
    }
    return 0;
}
