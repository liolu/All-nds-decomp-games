#include "m2c.h"

extern M2C_UNK data_021e1920;

void func_020d309c(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_021e1920 + (arg0 * 4))) = 0;
}
