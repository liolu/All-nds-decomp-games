#include "m2c.h"

extern M2C_UNK data_0210f424;
extern s8 data_021266a4;

s32 func_020f06e8(void) {
    return *((M2C_UNK *) ((s8 *) &data_0210f424 + (data_021266a4 * 4)));
}
