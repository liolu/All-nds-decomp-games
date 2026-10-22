#include "m2c.h"

extern M2C_UNK data_027e001c;

s32 func_02032274(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_027e001c + (arg0 * 4)));
}
