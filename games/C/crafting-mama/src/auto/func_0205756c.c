#include "m2c.h"

extern M2C_UNK data_020b04e0;

void func_0205756c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020b04e0 + (arg0 * 0x24))) = arg1;
}
