#include "m2c.h"

extern M2C_UNK data_021152ec;

s32 func_02011204(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021152ec + (arg0 * 4)));
}
