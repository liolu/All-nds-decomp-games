#include "m2c.h"

extern M2C_UNK data_020e6da0;

s32 func_0208d09c(void *arg0) {
    if (*((M2C_UNK *) ((s8 *) &data_020e6da0 + (M2C_FIELD(arg0, s32 *, 0) << 5))) & (0x100 << M2C_FIELD(arg0, s32 *, 4))) {
        return 1;
    }
    return 0;
}
