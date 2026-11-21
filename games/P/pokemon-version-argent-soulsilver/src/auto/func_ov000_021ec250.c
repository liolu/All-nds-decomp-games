#include "m2c.h"

extern M2C_UNK data_ov000_0221a76c;

s32 func_ov000_021ec250(void) {
    if (M2C_FIELD(&data_ov000_0221a76c, s32 *, 0) != 0) {
        return 1;
    }
    return 0;
}
