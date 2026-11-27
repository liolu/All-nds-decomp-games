#include "m2c.h"

extern M2C_UNK data_02126cc8;
extern M2C_UNK data_02126cd4;

void func_02095f34(s32 *arg0, s32 *arg1, s32 arg2) {
    *arg0 = *((M2C_UNK *) ((s8 *) &data_02126cc8 + (arg2 * 4)));
    *arg1 = *((M2C_UNK *) ((s8 *) &data_02126cd4 + (arg2 * 4)));
}
