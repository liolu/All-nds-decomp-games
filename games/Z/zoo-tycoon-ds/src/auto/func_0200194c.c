#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020868a0;

s32 func_0200194c(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020868a0 + (arg0 * 0x30)));
}
