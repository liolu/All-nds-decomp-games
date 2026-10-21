#include "m2c.h"

extern u8 data_0215142e;
extern M2C_UNK data_0216bc50;

s32 func_0203776c(void) {
    if ((M2C_FIELD(&data_0216bc50, u8 *, 9) == 1) && (data_0215142e == 1)) {
        return 1;
    }
    return 0;
}
