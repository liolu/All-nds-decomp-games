#include "m2c.h"

extern M2C_UNK data_021268e0;

s32 func_0208149c(void) {
    if (M2C_FIELD(&data_021268e0, s32 *, 0x1FC) != 0) {
        return 1;
    }
    return 0;
}
