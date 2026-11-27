#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0207ef38;

s32 func_02001964(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0207ef38 + (arg0 * 0x30)));
}
