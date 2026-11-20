#include "m2c.h"

extern M2C_UNK data_020f54cc;

void func_020bd38c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020f54cc + (arg0 * 0x24))) = arg1;
}
