#include "m2c.h"

extern M2C_UNK data_02150880;

s32 func_0201733c(void) {
    if (M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
