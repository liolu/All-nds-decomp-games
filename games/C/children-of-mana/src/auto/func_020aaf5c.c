#include "m2c.h"

extern M2C_UNK data_02106ec8;

s32 func_020aaf5c(void *arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02106ec8 + (M2C_FIELD(arg0, s32 *, 0x16A8) * 8)));
}
