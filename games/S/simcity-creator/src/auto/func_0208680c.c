#include "m2c.h"

extern M2C_UNK data_020c3304;

s32 func_0208680c(s32 arg0) {
    if ((arg0 < 1) || (arg0 > 0xC)) {
        return 3;
    }
    return *((M2C_UNK *) ((s8 *) &data_020c3304 + ((arg0 - 1) * 4)));
}
