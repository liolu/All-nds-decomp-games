#include "m2c.h"

extern M2C_UNK data_021378f4;

s32 func_0203f0a0(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_021378f4 + (arg0 * 4))) + (arg1 * 7);
}
