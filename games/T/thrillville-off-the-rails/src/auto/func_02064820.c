#include "m2c.h"

extern M2C_UNK data_020e1cf0;

s32 func_02064820(void *arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020e1cf0 + (M2C_FIELD(arg0, s32 *, 0x10) * 4)));
}
